
/*
	 This file is part of xmlbandplan.

    Xmlbandplan is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Xmlbandplan is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Xmlbandplan.  If not, see http://www.gnu.org/licenses/;.	  
*/

/*
 * This file has been created by xmlbandplan.
 */

// Single channels
typedef struct 
{
  char *name; // channel name
  long freq;  // frequency
  byte mode;  // mode
  long rpt;   // repeater shift
} t_channel;

const t_channel channels[] = {
{"QRP",183600,FT817_MODE_CW_NARROW, 0 },
{"Emergency Region 1",376000, NULL , 0 },
{"QRP",369000, NULL , 0 },
{"Digital Speech",363000, NULL , 0 },
{"QRP",356000,FT817_MODE_CW_NARROW, 0 },
{"QRS",355500,FT817_MODE_CW_NARROW, 0 },
{"QRP",703000,FT817_MODE_CW_NARROW, 0 },
{"Emergency Region 1",711000, NULL , 0 },
{"Digital Speech",707000, NULL , 0 },
{"QRP",709000, NULL , 0 },
{"QRP",1011600,FT817_MODE_CW_NARROW, 0 },
{"QRP",1406000,FT817_MODE_CW_NARROW, 0 },
{"Emergency",1430000, NULL , 0 },
{"QRP",1808600,FT817_MODE_CW_NARROW, 0 },
{"QRP",1813000, NULL , 0 },
{"Digital Speech",1815000, NULL , 0 },
{"Emergency",1816000, NULL , 0 },
{"QRP",2106000,FT817_MODE_CW_NARROW, 0 },
{"QRS",2105500,FT817_MODE_CW_NARROW, 0 },
{"Digital Speech",2118000, NULL , 0 },
{"QRP",2490600,FT817_MODE_CW_NARROW, 0 },
{"QRP",2495000, NULL , 0 },
{"QRP",2836000, NULL , 0 },
{"Digital Speech",2833000, NULL , 0 },
{"FM Call",2960000,FT817_MODE_FM, 0 },
{"FM Call: Simpl",2961000,FT817_MODE_FM, 0 },
{"QRS",2805500,FT817_MODE_CW_NARROW, 0 },
{"QRP",2806000,FT817_MODE_CW_NARROW, 0 },
{"APRS",2925000,FT817_MODE_FM, 0 },
{"S1: simpl",14521250,FT817_MODE_FM, 0 },
{"ARPS",14480000,FT817_MODE_FM, 0 },
{"Echolink",14496250,FT817_MODE_FM, 0 },
{"Echolink",14497500,FT817_MODE_FM, 0 },
{"RTTY local",14530000, NULL , 0 },
{"DV CQ: Digit",14537500, NULL , 0 },
{"PSK31: MGM P",14417000, NULL , 0 },
{"SSB CQ",14430000, NULL , 0 },
{"MGM CQ",14437000, NULL , 0 },
{"RTTY CQ",14460000, NULL , 0 },
{"Fax CQ",14470000, NULL , 0 },
{"DB0VA",43932500,FT817_MODE_FM, -760000,},
{"DB0ESW",43905000,FT817_MODE_FM, -760000,},
{"1",43307500,FT817_MODE_FM, 0 },
{"2",43310000,FT817_MODE_FM, 0 },
{"3",43312500,FT817_MODE_FM, 0 },
{"4",43315000,FT817_MODE_FM, 0 },
{"5",43317500,FT817_MODE_FM, 0 },
{"6",43320000,FT817_MODE_FM, 0 },
{"7",43322500,FT817_MODE_FM, 0 },
{"8",43325000,FT817_MODE_FM, 0 },
{"9",43327500,FT817_MODE_FM, 0 },
{"10",43330000,FT817_MODE_FM, 0 },

};
int nchannels = sizeof(channels)/sizeof(channels[0]);
						
