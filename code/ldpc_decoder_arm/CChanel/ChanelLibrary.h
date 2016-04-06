/**
  Copyright (c) 2012-2015 "Bordeaux INP, Bertrand LE GAL"
  [bertrand.legal@ims-bordeaux.fr     ]
  [http://legal.vvv.enseirb-matmeca.fr]

  This file is part of Fast_LDPC_C_decoder_for_ARM15.

  Fast_LDPC_C_decoder_for_ARM15 is free software: you can redistribute it and/or modify

  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CLASS_ChanelLibrary
#define CLASS_ChanelLibrary

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "./CChanel.h"
#include "./CChanelAWGN_x86.h"

CChanel* CreateChannel(CTrame *trame, bool QPSK_CHANNEL, bool Es_N0) {
    return new CChanelAWGN_x86(trame, 4, QPSK_CHANNEL, Es_N0);
}


#endif
