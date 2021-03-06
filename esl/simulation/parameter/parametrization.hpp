/// \file   parametrization.hpp
///
/// \brief
///
/// \authors    Maarten P. Scholl
/// \date       2019-10-28
/// \copyright  Copyright 2017-2019 The Institute for New Economic Thinking,
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
#ifndef ESL_PARAMETRIZATION_HPP
#define ESL_PARAMETRIZATION_HPP

#include <map>
#include <memory>
#include <string>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>

#include <esl/simulation/time.hpp>

namespace esl::simulation::parameter {

    struct parametrization
    {
        struct parameter_base
        {
            virtual ~parameter_base() = default;


            template<class archive_t>
            void serialize(archive_t & archive, const unsigned int version)
            {
                (void) version;
                (void) archive;
            }
        };

        template<typename parameter_t_>
        struct constant
        : public parameter_base
        {
            parameter_t_ choice;

            constant(parameter_t_ choice)
            : choice(choice)
            {

            }

            template<class archive_t>
            void serialize(archive_t & archive, const unsigned int version)
            {
                (void)version;
                archive & BOOST_SERIALIZATION_BASE_OBJECT_NVP(parameter_base);
                archive & BOOST_SERIALIZATION_NVP(choice);
            }
        };

        std::map<std::string, std::shared_ptr<parameter_base>> values;

        ///
        /// \brief Constructs a model parametrization with the minimum number of
        ///        parameters.
        ///
        /// \param sample
        /// \param start
        /// \param end
        parametrization( std::uint64_t sample       = 0
                       , time_point start           = time_point()
                       , time_point end             = time_point() + 1
#ifdef ESL_RELEASE
                       , std::uint64_t verbosity    = 0
#else
                       , std::uint64_t verbosity    = 1
#endif
                       , unsigned int threads       = 1)

        {
            values["sample"]    = std::make_shared<constant<std::uint64_t>>(sample);
            values["start"]     = std::make_shared<constant<time_point>>(start);
            values["end"]       = std::make_shared<constant<time_point>>(end);
            values["verbosity"] = std::make_shared<constant<std::uint64_t>>(verbosity);
            values["threads"]   = std::make_shared<constant<unsigned int>>(verbosity);
        }


        template<typename parameter_t_>
        parameter_t_ get(const std::string &name) const
        {
            auto iterator_ = values.find(name);
            if(values.end() == iterator_) {
                throw std::out_of_range("parametrization[" + name + "]");
            }
            auto value_ =
                std::dynamic_pointer_cast<constant<parameter_t_>>(iterator_->second);
            if(!value_){
                throw std::out_of_range("parametrization[" + name + "]");
            }
            return value_->choice;
        }

        template<class archive_t>
        void serialize(archive_t & archive, const unsigned int version)
        {
            (void)version;
            archive & BOOST_SERIALIZATION_NVP(values);
        }
    };
}

#endif  // ESL_PARAMETRIZATION_HPP
