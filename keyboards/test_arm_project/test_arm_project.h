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


#define LAYOUT5X15(\
        k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, \
        k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
        k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, \
        k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e, \
        k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e \
)\
{\
        {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e},\
        {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e},\
        {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e},\
        {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d, k3e},\
        {k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4c, k4d, k4e}\
}                                                                                       

#define LAYOUT_JIS(\
		k00,k10,k20,k30,k40,\
k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k1e,\
k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d,\
k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d,   k2e, \
k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d,\
k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b\
)\
{\
        {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e},\
        {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e},\
        {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e},\
        {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, k3d},\
        {k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b}\
}    
#endif
