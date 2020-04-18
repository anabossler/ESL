/// \file   securities_lending_contract.hpp
///
/// \brief
///
/// \authors    Maarten P. Scholl
/// \date       2020-04-10
/// \copyright  Copyright 2017-2020 The Institute for New Economic Thinking,
///             Oxford Martin School, University of Oxford
///
///             Licensed under the Apache License, Version 2.0 (the "License");
///             you may not use this file except in compliance with the License.
///             You may obtain a copy of the License at
///
///                 http://www.apache.org/licenses/LICENSE-2.0
///
///             Unless required by applicable law or agreed to in writing,
///             software distributed under the License is distributed on an "AS
///             IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
///             express or implied. See the License for the specific language
///             governing permissions and limitations under the License.
///
///             You may obtain instructions to fulfill the attribution
///             requirements in CITATION.cff
///


#ifndef ME_SECURITIES_LENDING_CONTRACT_HPP
#define ME_SECURITIES_LENDING_CONTRACT_HPP

#include <esl/economics/finance/loan.hpp>
#include <esl/quantity.hpp>


namespace esl::economics::finance {

    class securities_lending_contract
    : public loan
    {
    public:
        std::map<identity<property>, quantity> basket;

        securities_lending_contract( identity<agent> lender
                                   , identity<agent> borrower
                                   , std::map<identity<property>, quantity> basket = {})
        : loan(lender, borrower)
        , basket(basket)
        {

        }

        [[nodiscard]] std::string name() const override
        {
            std::stringstream stream_;
            stream_ << "securities lending contract " << identifier;
            return stream_.str();
        }
    };

}//namespace esl::economics::finance

#endif  // ME_SECURITIES_LENDING_CONTRACT_HPP
