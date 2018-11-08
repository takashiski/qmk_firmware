/* Copyright 2018 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef TEST_ARM_PROJECT_H
#define TEST_ARM_PROJECT_H

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT5X5(\
    K00, K01, K02, K03, K04,\
    K10, K11 ,K12, K13, K14,\
    K20, K21, K22, K23, K24,\
    K30, K31, K32, K33, K34,\
    K40, K41, K42, K43, K44\
) \
{ \
    { K00, K01, K02, K03, K04 }, \
    { K10, K11, K12, K13, K14 }, \
    { K20, K21, K22, K23, K24 }, \
    { K30, K31, K32, K33, K34 }, \
    { K40, K41, K42, K43, K44 } \
}
#define LAYOUT3X3(\
    K00, K01, K02,\
    K10, K11 ,K12,\
    K20, K21, K22\
) \
{ \
    { K00, K01, K02}, \
    { K10, K11, K12}, \
    { K20, K21, K22} \
}
#define LAYOUT8X4(\
K00, K01, K02, K03, \
K10, K11, K12, K13, \
K20, K21, K22, K23, \
K30, K31, K32, K33, \
K40, K41, K42, K43, \
K50, K51, K52, K53, \
K60, K61, K62, K63, \
K70, K71, K72, K73\
)\
{\
{K00, K01, K02, K03 },\
{K10, K11, K12, K13 },\
{K20, K21, K22, K23 },\
{K30, K31, K32, K33 },\
{K40, K41, K42, K43 },\
{K50, K51, K52, K53 },\
{K60, K61, K62, K63 },\
{K70, K71, K72, K73 }\
}
#define LAYOUT10X4(\
K00, K01, K02, K03, \
K10, K11, K12, K13, \
K20, K21, K22, K23, \
K30, K31, K32, K33, \
K40, K41, K42, K43, \
K50, K51, K52, K53, \
K60, K61, K62, K63, \
K70, K71, K72, K73, \
K80, K81, K82, K83, \
K90, K91, K92, K93 \
)\
{\
{K00, K01, K02, K03 },\
{K10, K11, K12, K13 },\
{K20, K21, K22, K23 },\
{K30, K31, K32, K33 },\
{K40, K41, K42, K43 },\
{K50, K51, K52, K53 },\
{K60, K61, K62, K63 },\
{K70, K71, K72, K73 },\
{K80, K81, K82, K83 },\
{K90, K91, K92, K93 }\
}


#define LAYOUT15X4(\
K00, K01, K02, K03, \
K10, K11, K12, K13, \
K20, K21, K22, K23, \
K30, K31, K32, K33, \
K40, K41, K42, K43, \
K50, K51, K52, K53, \
K60, K61, K62, K63, \
K70, K71, K72, K73, \
K80, K81, K82, K83, \
K90, K91, K92, K93, \
Ka0, Ka1, Ka2, Ka3, \
Kb0, Kb1, Kb2, Kb3, \
Kc0, Kc1, Kc2, Kc3, \
Kd0, Kd1, Kd2, Kd3, \
Ke0, Ke1, Ke2, Ke3 \
)\
{\
{K00, K01, K02, K03 },\
{K10, K11, K12, K13 },\
{K20, K21, K22, K23 },\
{K30, K31, K32, K33 },\
{K40, K41, K42, K43 },\
{K50, K51, K52, K53 },\
{K60, K61, K62, K63 },\
{K70, K71, K72, K73 },\
{K80, K81, K82, K83 },\
{K90, K91, K92, K93 },\
{Ka0, Ka1, Ka2, Ka3 },\
{Kb0, Kb1, Kb2, Kb3 },\
{Kc0, Kc1, Kc2, Kc3 },\
{Kd0, Kd1, Kd2, Kd3 },\
{Ke0, Ke1, Ke2, Ke3 }\
}

#define LAYOUT10X5(\
K00, K01, K02, K03, K04, \
K10, K11, K12, K13, K14, \
K20, K21, K22, K23, K24, \
K30, K31, K32, K33, K34, \
K40, K41, K42, K43, K44, \
K50, K51, K52, K53, K54, \
K60, K61, K62, K63, K64, \
K70, K71, K72, K73, K74, \
K80, K81, K82, K83, K84, \
K90, K91, K92, K93, K94 \
)\
{\
{K00, K01, K02, K03, K04 },\
{K10, K11, K12, K13, K14 },\
{K20, K21, K22, K23, K24 },\
{K30, K31, K32, K33, K34 },\
{K40, K41, K42, K43, K44 },\
{K50, K51, K52, K53, K54 },\
{K60, K61, K62, K63, K64 },\
{K70, K71, K72, K73, K74 },\
{K80, K81, K82, K83, K84 },\
{K90, K91, K92, K93, K94 }\
}

#define LAYOUT5X10(\
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, \
K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 \
)\
{\
{K00, K01, K02, K03, K04, K05, K06, K07, K08, K09 },\
{K10, K11, K12, K13, K14, K15, K16, K17, K18, K19 },\
{K20, K21, K22, K23, K24, K25, K26, K27, K28, K29 },\
{K30, K31, K32, K33, K34, K35, K36, K37, K38, K39 },\
{K40, K41, K42, K43, K44, K45, K46, K47, K48, K49 }\
}

#endif
