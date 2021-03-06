/// \file   python_module.cpp
///
/// \brief
///
/// \authors    maarten
/// \date       2020-08-30
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
#include <esl/law/python_module_law.hpp>


#ifdef WITH_PYTHON

#include <esl/law/legal_person.hpp>
#include <esl/law/natural_person.hpp>
#include <esl/law/property.hpp>
#include <esl/law/organization.hpp>
#include <esl/law/government.hpp>


#define BOOST_BIND_GLOBAL_PLACEHOLDERS
#include <boost/python.hpp>
using namespace boost::python;


namespace esl::law {
    BOOST_PYTHON_MODULE(_law)
    {
        ////////////////////////////////////////////////////////////////////////

        class_<esl::law::government>
        ( "government", init<std::string>())
        .def_readwrite("title", &esl::law::government::title)
        ;


        ////////////////////////////////////////////////////////////////////////

        class_<esl::law::legal_person>(
            "legal_person",
            init<esl::identity<esl::agent>, esl::law::jurisdiction>())
            .def(init<esl::identity<esl::agent>,
                legal_entity,
                esl::law::jurisdiction>())
            .def(init<esl::identity<esl::agent>,
                natural_person,
                esl::law::jurisdiction>())
            .def(init<esl::identity<esl::agent>,
                government,
                esl::law::jurisdiction>())
            .def_readonly("primary_jurisdiction",
                          &esl::law::legal_person::primary_jurisdiction);

        ////////////////////////////////////////////////////////////////////////

        class_<natural_person>
            ( "natural_person", init<esl::geography::iso_3166_1_alpha_2>())
            .def_readonly("nationality", &natural_person::nationality)
            ;

        ////////////////////////////////////////////////////////////////////////
        class_<organization, bases<legal_person>>(
            "organization",
            init<const esl::identity<esl::agent> &,
                const esl::law::jurisdiction &>());

        ////////////////////////////////////////////////////////////////////////

        class_<property, bases<entity<property>>>( "property"
                                                 , init<identity<property>>())
            .def("name", &property::name);



    }
}

#endif