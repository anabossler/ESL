/// \file   jurisdictions.cpp
///
/// \brief
///
/// \authors    Maarten P. Scholl
/// \date       2018-04-27
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
#include <esl/law/jurisdictions.hpp>

#ifdef WITH_PYTHON
#include <boost/python.hpp>


using namespace boost::python;
BOOST_PYTHON_MODULE(jurisdictions)
{
    scope().attr("AF") = esl::law::jurisdictions::AF;
    scope().attr("AL") = esl::law::jurisdictions::AL;
    scope().attr("DZ") = esl::law::jurisdictions::DZ;
    scope().attr("AS") = esl::law::jurisdictions::AS;
//    scope().attr("AD") = esl::law::jurisdictions::AD;
    scope().attr("AO") = esl::law::jurisdictions::AO;
    scope().attr("AI") = esl::law::jurisdictions::AI;
    scope().attr("AG") = esl::law::jurisdictions::AG;
    scope().attr("AR") = esl::law::jurisdictions::AR;
    scope().attr("AM") = esl::law::jurisdictions::AM;
    scope().attr("AW") = esl::law::jurisdictions::AW;
    scope().attr("AU") = esl::law::jurisdictions::AU;
    scope().attr("AT") = esl::law::jurisdictions::AT;
    scope().attr("AZ") = esl::law::jurisdictions::AZ;
    scope().attr("BS") = esl::law::jurisdictions::BS;
    scope().attr("BH") = esl::law::jurisdictions::BH;
    scope().attr("BD") = esl::law::jurisdictions::BD;
    scope().attr("BB") = esl::law::jurisdictions::BB;
    scope().attr("BY") = esl::law::jurisdictions::BY;
    scope().attr("BE") = esl::law::jurisdictions::BE;
    scope().attr("BZ") = esl::law::jurisdictions::BZ;
    scope().attr("BJ") = esl::law::jurisdictions::BJ;
    scope().attr("BM") = esl::law::jurisdictions::BM;
    scope().attr("BT") = esl::law::jurisdictions::BT;
    scope().attr("BO") = esl::law::jurisdictions::BO;
    scope().attr("BQ") = esl::law::jurisdictions::BQ;
    scope().attr("BA") = esl::law::jurisdictions::BA;
    scope().attr("BW") = esl::law::jurisdictions::BW;
    scope().attr("BV") = esl::law::jurisdictions::BV;
    scope().attr("BR") = esl::law::jurisdictions::BR;
    scope().attr("IO") = esl::law::jurisdictions::IO;
    scope().attr("VG") = esl::law::jurisdictions::VG;
    scope().attr("BN") = esl::law::jurisdictions::BN;
    scope().attr("BG") = esl::law::jurisdictions::BG;
    scope().attr("BF") = esl::law::jurisdictions::BF;
    scope().attr("BI") = esl::law::jurisdictions::BI;
    scope().attr("CV") = esl::law::jurisdictions::CV;
    scope().attr("KH") = esl::law::jurisdictions::KH;
    scope().attr("CM") = esl::law::jurisdictions::CM;
    scope().attr("CA") = esl::law::jurisdictions::CA;
    scope().attr("KY") = esl::law::jurisdictions::KY;
    scope().attr("CF") = esl::law::jurisdictions::CF;
    scope().attr("TD") = esl::law::jurisdictions::TD;
    scope().attr("CL") = esl::law::jurisdictions::CL;
    scope().attr("CN") = esl::law::jurisdictions::CN;
    scope().attr("HK") = esl::law::jurisdictions::HK;
    scope().attr("MO") = esl::law::jurisdictions::MO;
    scope().attr("CX") = esl::law::jurisdictions::CX;
    scope().attr("CC") = esl::law::jurisdictions::CC;
    scope().attr("CO") = esl::law::jurisdictions::CO;
    scope().attr("KM") = esl::law::jurisdictions::KM;
    scope().attr("CG") = esl::law::jurisdictions::CG;
    scope().attr("CK") = esl::law::jurisdictions::CK;
    scope().attr("CR") = esl::law::jurisdictions::CR;
    scope().attr("HR") = esl::law::jurisdictions::HR;
    scope().attr("CU") = esl::law::jurisdictions::CU;
    scope().attr("CW") = esl::law::jurisdictions::CW;
    scope().attr("CY") = esl::law::jurisdictions::CY;
    scope().attr("CZ") = esl::law::jurisdictions::CZ;
    scope().attr("CI") = esl::law::jurisdictions::CI;
    scope().attr("KP") = esl::law::jurisdictions::KP;
    scope().attr("CD") = esl::law::jurisdictions::CD;
    scope().attr("DK") = esl::law::jurisdictions::DK;
    scope().attr("DJ") = esl::law::jurisdictions::DJ;
    scope().attr("DM") = esl::law::jurisdictions::DM;
    scope().attr("DO") = esl::law::jurisdictions::DO;
    scope().attr("EC") = esl::law::jurisdictions::EC;
    scope().attr("EG") = esl::law::jurisdictions::EG;
    scope().attr("SV") = esl::law::jurisdictions::SV;
    scope().attr("GQ") = esl::law::jurisdictions::GQ;
    scope().attr("ER") = esl::law::jurisdictions::ER;
    scope().attr("EE") = esl::law::jurisdictions::EE;
    scope().attr("ET") = esl::law::jurisdictions::ET;
    scope().attr("FO") = esl::law::jurisdictions::FO;
    scope().attr("FJ") = esl::law::jurisdictions::FJ;
    scope().attr("FI") = esl::law::jurisdictions::FI;
    scope().attr("FR") = esl::law::jurisdictions::FR;
    scope().attr("GF") = esl::law::jurisdictions::GF;
    scope().attr("PF") = esl::law::jurisdictions::PF;
    scope().attr("TF") = esl::law::jurisdictions::TF;
    scope().attr("GA") = esl::law::jurisdictions::GA;
    scope().attr("GM") = esl::law::jurisdictions::GM;
    scope().attr("GE") = esl::law::jurisdictions::GE;
    scope().attr("DE") = esl::law::jurisdictions::DE;
    scope().attr("GH") = esl::law::jurisdictions::GH;
    scope().attr("GI") = esl::law::jurisdictions::GI;
    scope().attr("GR") = esl::law::jurisdictions::GR;
    scope().attr("GL") = esl::law::jurisdictions::GL;
    scope().attr("GD") = esl::law::jurisdictions::GD;
    scope().attr("GP") = esl::law::jurisdictions::GP;
    scope().attr("GU") = esl::law::jurisdictions::GU;
    scope().attr("GT") = esl::law::jurisdictions::GT;
    scope().attr("GG") = esl::law::jurisdictions::GG;
    scope().attr("GN") = esl::law::jurisdictions::GN;
    scope().attr("GW") = esl::law::jurisdictions::GW;
    scope().attr("GY") = esl::law::jurisdictions::GY;
    scope().attr("HT") = esl::law::jurisdictions::HT;
    scope().attr("HM") = esl::law::jurisdictions::HM;
    scope().attr("VA") = esl::law::jurisdictions::VA;
    scope().attr("HN") = esl::law::jurisdictions::HN;
    scope().attr("HU") = esl::law::jurisdictions::HU;
    scope().attr("IS") = esl::law::jurisdictions::IS;
    scope().attr("IN") = esl::law::jurisdictions::IN;
    scope().attr("ID") = esl::law::jurisdictions::ID;
    scope().attr("IR") = esl::law::jurisdictions::IR;
    scope().attr("IQ") = esl::law::jurisdictions::IQ;
    scope().attr("IE") = esl::law::jurisdictions::IE;
    scope().attr("IM") = esl::law::jurisdictions::IM;
    scope().attr("IL") = esl::law::jurisdictions::IL;
    scope().attr("IT") = esl::law::jurisdictions::IT;
    scope().attr("JM") = esl::law::jurisdictions::JM;
    scope().attr("JP") = esl::law::jurisdictions::JP;
    scope().attr("JE") = esl::law::jurisdictions::JE;
    scope().attr("JO") = esl::law::jurisdictions::JO;
    scope().attr("KZ") = esl::law::jurisdictions::KZ;
    scope().attr("KE") = esl::law::jurisdictions::KE;
    scope().attr("KI") = esl::law::jurisdictions::KI;
    scope().attr("KW") = esl::law::jurisdictions::KW;
    scope().attr("KG") = esl::law::jurisdictions::KG;
    scope().attr("LA") = esl::law::jurisdictions::LA;
    scope().attr("LV") = esl::law::jurisdictions::LV;
    scope().attr("LB") = esl::law::jurisdictions::LB;
    scope().attr("LS") = esl::law::jurisdictions::LS;
    scope().attr("LR") = esl::law::jurisdictions::LR;
    scope().attr("LY") = esl::law::jurisdictions::LY;
    scope().attr("LI") = esl::law::jurisdictions::LI;
    scope().attr("LT") = esl::law::jurisdictions::LT;
    scope().attr("LU") = esl::law::jurisdictions::LU;
    scope().attr("MG") = esl::law::jurisdictions::MG;
    scope().attr("MW") = esl::law::jurisdictions::MW;
    scope().attr("MY") = esl::law::jurisdictions::MY;
    scope().attr("MV") = esl::law::jurisdictions::MV;
    scope().attr("ML") = esl::law::jurisdictions::ML;
    scope().attr("MT") = esl::law::jurisdictions::MT;
    scope().attr("MH") = esl::law::jurisdictions::MH;
    scope().attr("MQ") = esl::law::jurisdictions::MQ;
 //   scope().attr("MR") = esl::law::jurisdictions::MR;
    scope().attr("MU") = esl::law::jurisdictions::MU;
    scope().attr("YT") = esl::law::jurisdictions::YT;
    scope().attr("MX") = esl::law::jurisdictions::MX;
    scope().attr("FM") = esl::law::jurisdictions::FM;
    scope().attr("MC") = esl::law::jurisdictions::MC;
    scope().attr("MN") = esl::law::jurisdictions::MN;
    scope().attr("ME") = esl::law::jurisdictions::ME;
    scope().attr("MS") = esl::law::jurisdictions::MS;
    scope().attr("MA") = esl::law::jurisdictions::MA;
    scope().attr("MZ") = esl::law::jurisdictions::MZ;
    scope().attr("MM") = esl::law::jurisdictions::MM;
    scope().attr("NA") = esl::law::jurisdictions::NA;
    scope().attr("NR") = esl::law::jurisdictions::NR;
    scope().attr("NP") = esl::law::jurisdictions::NP;
    scope().attr("NL") = esl::law::jurisdictions::NL;
    scope().attr("NC") = esl::law::jurisdictions::NC;
    scope().attr("NZ") = esl::law::jurisdictions::NZ;
    scope().attr("NI") = esl::law::jurisdictions::NI;
    scope().attr("NE") = esl::law::jurisdictions::NE;
    scope().attr("NG") = esl::law::jurisdictions::NG;
    scope().attr("NU") = esl::law::jurisdictions::NU;
    scope().attr("NF") = esl::law::jurisdictions::NF;
    scope().attr("MP") = esl::law::jurisdictions::MP;
    scope().attr("NO") = esl::law::jurisdictions::NO;
    scope().attr("OM") = esl::law::jurisdictions::OM;
    scope().attr("PK") = esl::law::jurisdictions::PK;
    scope().attr("PW") = esl::law::jurisdictions::PW;
    scope().attr("PA") = esl::law::jurisdictions::PA;
    scope().attr("PG") = esl::law::jurisdictions::PG;
    scope().attr("PY") = esl::law::jurisdictions::PY;
    scope().attr("PE") = esl::law::jurisdictions::PE;
    scope().attr("PH") = esl::law::jurisdictions::PH;
    scope().attr("PN") = esl::law::jurisdictions::PN;
    scope().attr("PL") = esl::law::jurisdictions::PL;
    scope().attr("PT") = esl::law::jurisdictions::PT;
    scope().attr("PR") = esl::law::jurisdictions::PR;
    scope().attr("QA") = esl::law::jurisdictions::QA;
    scope().attr("KR") = esl::law::jurisdictions::KR;
    scope().attr("MD") = esl::law::jurisdictions::MD;
    scope().attr("RO") = esl::law::jurisdictions::RO;
    scope().attr("RU") = esl::law::jurisdictions::RU;
    scope().attr("RW") = esl::law::jurisdictions::RW;
    scope().attr("RE") = esl::law::jurisdictions::RE;
    scope().attr("BL") = esl::law::jurisdictions::BL;
    scope().attr("SH") = esl::law::jurisdictions::SH;
    scope().attr("KN") = esl::law::jurisdictions::KN;
    scope().attr("LC") = esl::law::jurisdictions::LC;
    scope().attr("MF") = esl::law::jurisdictions::MF;
    scope().attr("PM") = esl::law::jurisdictions::PM;
    scope().attr("VC") = esl::law::jurisdictions::VC;
    scope().attr("WS") = esl::law::jurisdictions::WS;
    scope().attr("SM") = esl::law::jurisdictions::SM;
//    scope().attr("ST") = esl::law::jurisdictions::ST;
    scope().attr("SA") = esl::law::jurisdictions::SA;
    scope().attr("SN") = esl::law::jurisdictions::SN;
    scope().attr("RS") = esl::law::jurisdictions::RS;
    scope().attr("SC") = esl::law::jurisdictions::SC;
    scope().attr("SL") = esl::law::jurisdictions::SL;
    scope().attr("SG") = esl::law::jurisdictions::SG;
    scope().attr("SX") = esl::law::jurisdictions::SX;
    scope().attr("SK") = esl::law::jurisdictions::SK;
    scope().attr("SI") = esl::law::jurisdictions::SI;
    scope().attr("SB") = esl::law::jurisdictions::SB;
    scope().attr("SO") = esl::law::jurisdictions::SO;
    scope().attr("ZA") = esl::law::jurisdictions::ZA;
    scope().attr("SS") = esl::law::jurisdictions::SS;
    scope().attr("ES") = esl::law::jurisdictions::ES;
    scope().attr("LK") = esl::law::jurisdictions::LK;
    scope().attr("SD") = esl::law::jurisdictions::SD;
    scope().attr("SR") = esl::law::jurisdictions::SR;
    scope().attr("SJ") = esl::law::jurisdictions::SJ;
    scope().attr("SZ") = esl::law::jurisdictions::SZ;
    scope().attr("SE") = esl::law::jurisdictions::SE;
    scope().attr("CH") = esl::law::jurisdictions::CH;
    scope().attr("SY") = esl::law::jurisdictions::SY;
    scope().attr("TJ") = esl::law::jurisdictions::TJ;
    scope().attr("TH") = esl::law::jurisdictions::TH;
    scope().attr("MK") = esl::law::jurisdictions::MK;
    scope().attr("TL") = esl::law::jurisdictions::TL;
    scope().attr("TG") = esl::law::jurisdictions::TG;
    scope().attr("TK") = esl::law::jurisdictions::TK;
    scope().attr("TO") = esl::law::jurisdictions::TO;
    scope().attr("TT") = esl::law::jurisdictions::TT;
    scope().attr("TN") = esl::law::jurisdictions::TN;
    scope().attr("TR") = esl::law::jurisdictions::TR;
    scope().attr("TM") = esl::law::jurisdictions::TM;
    scope().attr("TC") = esl::law::jurisdictions::TC;
    scope().attr("TV") = esl::law::jurisdictions::TV;
    scope().attr("UG") = esl::law::jurisdictions::UG;
    scope().attr("UA") = esl::law::jurisdictions::UA;
    scope().attr("AE") = esl::law::jurisdictions::AE;
    scope().attr("GB") = esl::law::jurisdictions::GB;
    scope().attr("TZ") = esl::law::jurisdictions::TZ;
    scope().attr("UM") = esl::law::jurisdictions::UM;
    scope().attr("VI") = esl::law::jurisdictions::VI;
    scope().attr("US") = esl::law::jurisdictions::US;
    scope().attr("UY") = esl::law::jurisdictions::UY;
    scope().attr("UZ") = esl::law::jurisdictions::UZ;
    scope().attr("VU") = esl::law::jurisdictions::VU;
    scope().attr("VE") = esl::law::jurisdictions::VE;
    scope().attr("VN") = esl::law::jurisdictions::VN;
    scope().attr("WF") = esl::law::jurisdictions::WF;
    scope().attr("EH") = esl::law::jurisdictions::EH;
    scope().attr("YE") = esl::law::jurisdictions::YE;
    scope().attr("ZM") = esl::law::jurisdictions::ZM;
    scope().attr("ZW") = esl::law::jurisdictions::ZW;
    scope().attr("AX") = esl::law::jurisdictions::AX;
}
#endif
