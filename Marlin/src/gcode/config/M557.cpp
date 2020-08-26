/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../inc/MarlinConfig.h"

#if ENABLED(AUTO_BED_LEVELING_BILINEAR) && HAS_ABL_NOT_UBL

#include "../../../feature/bedlevel/abl/abl.h"
#include "../gcode.h"


/**
 * M557 - G29 set
 *
 *   Parameters to define G29 probe grid (all values in mm)
 * Xaaa:bbb Minimum and maximum X coordinates to probe
 * Yaaa:bbb Minimum and maximum Y coordinates to probe
 * Pnn or Pxx:yy Number of probe points in each direction (RepRapFirmware 2.02 and later) - use instead of specifying the spacing
 * Examples
 * M557 X0:200 Y0:220 P5
 * M557 R150 S15
 */
void GcodeSuite::M557() {
	const char X[11] = parser.stringval('X');
	const char Y[11] = parser.stringval('Y');

	char * pok = strtok(X,":");



	while (pok)
	  {
	    printf ("%s\n",pch);
	    pok = strtok (NULL, ":");
	  }



}

#endif //
