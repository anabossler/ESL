![esl project logo](https://raw.githubusercontent.com/INET-Complexity/ESL/master/project/logo/logo_card.png)


# ESL
The Economic Simulation Library (ESL) provides an extensive collection of high-performance algorithms and data structures used to develop agent-based models for economic and financial simulation. The library is designed to take advantage of different computer architectures. In order to facilitate rapid iteration during model development the library  is developed to be used from Python, and is written in C++. 

# Features

## Models

### Market mechanisms

The library provides multiple market mechanisms that use the same messaging framework, meaning market mechanisms can to a limited extended be swapped and compared within the same economic model. We aim to provide simple models that allow, for example, to convert directly supply- and demand functions to an execution strategy, so that a Walrasian price-setters can be compared to order-driven markets such as limit order books. 

For release 0.0.2, we aim to provide the following market mechanisms.

* Walrasian price-setter, supporting market clearing for multiple assets using a numerical scheme, accelerated by automatic differentiation.

* Multiple Limit order books with different performance characteristics.

* Shapley-Shubik trading-posts. *Trade Using One Commodity as a Means of Payment*. Shapley, L. and Shubik, M. **Journal of Political Economy** 1977 vol: 85 (5) pp: 937-968.

* Common types of auctions

## Installation

### Linux
As of version 0.0.1, we provide instructions for Ubuntu 18.04 LTS. Builds can be automated using the provided travis script.

### Windows
On windows, the library can be built 


Build with `N` processes:

```shell
mkdir build
cd build
cmake ../
make -jN
make test
```


## Examples

Before releasing a first version, we do not maintain detailed documentation. Usage examples can be found in the test cases.
Python examples to follow.

Example taken from: https://github.com/INET-Complexity/ESL/blob/master/example/order_book.cpp

```C++
// import the order book
#include <esl/economics/markets/order_book/book.hpp>

// import currencies, because we will be trading the stock against USD
#include <esl/economics/currencies.hpp>

// we will fix the namespace mess once the API stabilises
using namespace esl;
using namespace esl::economics;
using namespace esl::economics::markets::order_book;
using esl::economics::markets::order_book::limit_order_message;
using namespace esl::economics::markets::order_book::statically_allocated;

// trades in this market are in multiples of the lot size
// e.g. a lot_size of 100 means that a buy order for a quantity of 3 buys 300 shares
// A larger lot size enables small tick sizes
constexpr size_t lot_size = 100;

// helper function to create limit orders submitted to an exchange.
// note that ESL uses fixed-precision for prices internally, and that the use of
// a floating point type here relies on the developer understanding the
// conversion.
limit_order_message create( double p
                          , size_t q = 1000
                          , limit_order_message::side_t side = limit_order_message::side_t::sell)
{
    // substitute your own stock ticker type here
    esl::economics::markets::ticker ticker_dummy_;

    // substitute your agent id
    identity<agent> owner_dummy_;

    return limit_order_message
        ( ticker_dummy_
            , owner_dummy_
            , side
            , markets::quote(price(p, currencies::USD), lot_size * currencies::USD.denominator)
            , q
            ,limit_order_message::lifetime_t::good_until_cancelled
        );
}

//
int main(int argc, char** argv) {
    // create the range of valid prices for the order book (inclusive)
    // quote is a generic type which can be a price, interest rate, etc
    auto  min_ = markets::quote(price( 0.01, currencies::USD), lot_size * currencies::USD.denominator);
    auto  max_ = markets::quote(price(10.00, currencies::USD), lot_size * currencies::USD.denominator);

    // define the maximum number of open orders
    // as the statically_allocated::book maintains a fixed-size memory pool
    constexpr size_t max_orders_ = 1'00'000;

    // creates the order book
    auto book_ = std::make_unique<book<max_orders_>>(min_, max_);

    book_->insert(create(4.75, 500, limit_order_message::side_t::buy));
    book_->insert(create(4.75, 750, limit_order_message::side_t::sell));

    // use book_.reports to view the output generated by the order book, which contains
    //  1. the placement of the buy order
    //  2. matching 500 of the buy and sell order (confirmed for each agent)
    //  3. placement of the remainder 250 of the sell order
}
```


## Testing

The library uses unit testing on both the native library (Boost.Test) and the Python bindings (pytest and Hypothesis).

## Acknowledgements
This open-source project is organized by the Institute for New Economic Thinking at the Oxford Martin School.
Work on this open-source project is in part funded by the J.P. Morgan AI Faculty Awards 2019 and 2020.



