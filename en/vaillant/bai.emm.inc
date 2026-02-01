type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,GlobalSystemOff,Global System OFF,,,b524,020000000700,ign,,IGN:4,,,,value,,UCH,0=no;1=yes,,For switching system off
w,,install,GlobalSystemOff,Global System OFF,,,b509,0e0700,value,,UCH,0=no;1=yes,,For switching system off
r,,,Date,date,,,b524,020000003400,ign,,IGN:4,,,,value,,HDA:3,,,current date
w,,,Date,date,,,b524,020100003400,value,,HDA:3,,,current date
r,,,Time,time,,,b524,020000003500,ign,,IGN:4,,,,value,,HTI,,,current time
w,,,Time,time,,,b524,020100003500,value,,HTI,,,current time
r,,,WaterPressure,water pressure,,,b524,020000003900,ign,,IGN:4,,,,value,,EXP,,bar,water pressure
r,,,DisplayedOutsideTemp,outside temperature,,,b524,020000007300,ign,,IGN:4,,,,value,,EXP,,°C,outside temperature
r,,,HwcOpMode,HwcOpMode,,,b524,020001000300,ign,,IGN:4,,,,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of Hwc
w,,,HwcOpMode,HwcOpMode,,,b524,020101000300,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of Hwc
r,,,HwcTempDesired,gewünschte Temperatur Warmwasserkreis,,,b524,020001000400,ign,,IGN:4,,,,value,,EXP,,°C,setpoint of domestic hot water circuit
w,,,HwcTempDesired,gewünschte Temperatur Warmwasserkreis,,,b524,020101000400,value,,EXP,,°C,setpoint of domestic hot water circuit
r,,,HwcStorageTemp,HwcStorageTemp,,,b524,020001000500,ign,,IGN:4,,,,value,,EXP,,°C,current hot water storage temperature
r,,,HwcHolidayStartPeriod,hwc holiday start period,,,b524,020001000900,ign,,IGN:4,,,,value,,HDA:3,,,start date of holidays
w,,,HwcHolidayStartPeriod,hwc holiday start period,,,b524,020101000900,value,,HDA:3,,,start date of holidays
r,,,HwcHolidayEndPeriod,hwc holiday end period,,,b524,020001000a00,ign,,IGN:4,,,,value,,HDA:3,,,end date of holidays
w,,,HwcHolidayEndPeriod,hwc holiday end period,,,b524,020101000a00,value,,HDA:3,,,end date of holidays
r,,,HwcSFMode,hwc SF mode,,,b524,020001000d00,ign,,IGN:4,,,,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
w,,,HwcSFMode,hwc SF mode,,,b524,020101000d00,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
r,,,Z1HolidayStartPeriod,Ferienzeitraum Start Zone 1,,,b524,020003000300,ign,,IGN:4,,,,value,,HDA:3,,,start date of holidays for zone 1
w,,,Z1HolidayStartPeriod,Ferienzeitraum Start Zone 1,,,b524,020103000300,value,,HDA:3,,,start date of holidays for zone 1
r,,,Z1HolidayEndPeriod,Ferienzeitraum Ende Zone 1,,,b524,020003000400,ign,,IGN:4,,,,value,,HDA:3,,,end date of holidays for zone 1
w,,,Z1HolidayEndPeriod,Ferienzeitraum Ende Zone 1,,,b524,020103000400,value,,HDA:3,,,end date of holidays for zone 1
r,,,Z1HolidayTemp,Raumsollwert Ferienbetrieb Zone 1 (untested),,,b524,020003000500,ign,,IGN:4,,,,value,,EXP,,°C,holiday setpoint for zone 1
w,,,Z1HolidayTemp,Raumsollwert Ferienbetrieb Zone 1 (untested),,,b524,020103000500,value,,EXP,,°C,holiday setpoint for zone 1
r,,,Z1OpMode,Betriebsart Zone 1,,,b524,020003000600,ign,,IGN:4,,,,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of zone 1
w,,,Z1OpMode,Betriebsart Zone 1,,,b524,020103000600,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of zone 1
r,,,Z1QuickVetoTemp,Quick Veto Temperatur Zone 1,,,b524,020003000800,ign,,IGN:4,,,,value,,EXP,,°C,manual override setpoint for zone 1
w,,,Z1QuickVetoTemp,Quick Veto Temperatur Zone 1,,,b524,020103000800,value,,EXP,,°C,manual override setpoint for zone 1
r,,,Z1QuickVetoDuration,Duration of Quick Veto mode Zone 1,,,b524,020003002600,ign,,IGN:4,,,,value,,EXP,,h,valid values are 0.5-12 in steps of 0.5 and writing enables quick veto mode
w,,,Z1QuickVetoDuration,Duration of Quick Veto mode Zone 1,,,b524,020103002600,value,,EXP,,h,valid values are 0.5-12 in steps of 0.5 and writing enables quick veto mode
r,,,Z1QuickVetoEndTime,Quick Veto end time Zone 1,,,b524,020003001e00,ign,,IGN:4,,,,value,,HTI,,,
r,,,Z1QuickVetoEndDate,Quick Veto end date Zone 1,,,b524,020003002400,ign,,IGN:4,,,,value,,HDA:3,,,date
r,,,Z1NightTemp,Absenktemperatur Zone 1,,,b524,020003000900,ign,,IGN:4,,,,value,,EXP,,°C,night setpoint for zone 1
w,,,Z1NightTemp,Absenktemperatur Zone 1,,,b524,020103000900,value,,EXP,,°C,night setpoint for zone 1
r,,,Z1BankHolidayStartPeriod,Bank Feiertag Start Zone 1 (untested),,,b524,020003000c00,ign,,IGN:4,,,,value,,HDA:3,,,start date of bank holidays for zone 1
w,,,Z1BankHolidayStartPeriod,Bank Feiertag Start Zone 1 (untested),,,b524,020103000c00,value,,HDA:3,,,start date of bank holidays for zone 1
r,,,Z1BankHolidayEndPeriod,Bank Feiertag Ende Zone 1 (untested),,,b524,020003000d00,ign,,IGN:4,,,,value,,HDA:3,,,end date of bank holidays for zone 1
w,,,Z1BankHolidayEndPeriod,Bank Feiertag Ende Zone 1 (untested),,,b524,020103000d00,value,,HDA:3,,,end date of bank holidays for zone 1
r,,,Z1SFMode,SF mode zone 1,,,b524,020003000e00,ign,,IGN:4,,,,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
w,,,Z1SFMode,SF mode zone 1,,,b524,020103000e00,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
r,,,Z1RoomTemp,Raumisttemperatur Zone 1 (untested),,,b524,020003000f00,ign,,IGN:4,,,,value,,EXP,,°C,aktuelle Raumtemperatur in Zone 1
r,,,Z1ValveStatus,Ventilstatus Zone 1 (untested),,,b524,020003001200,ign,,IGN:4,,,,value,,UCH,,,valve status of zone 1
w,,,Z1ValveStatus,Ventilstatus Zone 1 (untested),,,b524,020103001200,value,,UCH,,,valve status of zone 1
r,,,Z1RoomZoneMapping,Raumregler Zuordnung Zone 1 (untested),,,b524,020003001300,ign,,IGN:4,,,,value,,UIN,0=none;1=VRC700;2=VR91_1;3=VR91_2;4=VR91_3,,configures which room temperature is assigned to zone 1
w,,,Z1RoomZoneMapping,Raumregler Zuordnung Zone 1 (untested),,,b524,020103001300,value,,UIN,0=none;1=VRC700;2=VR91_1;3=VR91_2;4=VR91_3,,configures which room temperature is assigned to zone 1
r,,,Z1ActualRoomTempDesired,Raumsolltemperatur Zone 1,,,b524,020003001400,ign,,IGN:4,,,,value,,EXP,,°C,current room setpoint considering all basic conditions passed to the control algorithms
w,,,Z1ActualRoomTempDesired,Raumsolltemperatur Zone 1,,,b524,020103001400,value,,EXP,,°C,current room setpoint considering all basic conditions passed to the control algorithms
r,,,Z1Shortname,Kurzbezeichnung Zone 1 (untested),,,b524,020003001600,ign,,IGN:4,,,,value,,STR:6,,,short name of zone 1
w,,,Z1Shortname,Kurzbezeichnung Zone 1 (untested),,,b524,020103001600,value,,STR:6,,,short name of zone 1
r,,,Z1Name1,Bezeichnung Zone 1 Teil 1,,,b524,020003001700,ign,,IGN:4,,,,value,,STR:5,,,name of zone 1
w,,,Z1Name1,Bezeichnung Zone 1 Teil 1,,,b524,020103001700,value,,STR:5,,,name of zone 1
r,,,Z1Name2,Bezeichnung Zone 1 Teil 2,,,b524,020003001800,ign,,IGN:4,,,,value,,STR:5,,,name of zone 1
w,,,Z1Name2,Bezeichnung Zone 1 Teil 2,,,b524,020103001800,value,,STR:5,,,name of zone 1
r,,,Z1DayTemp,Solltemperatur Zone 1,,,b524,020003002200,ign,,IGN:4,,,,value,,EXP,,°C,day setpoint for zone 1
w,,,Z1DayTemp,Solltemperatur Zone 1,,,b524,020103002200,value,,EXP,,°C,day setpoint for zone 1
r,,,HwcTimer_Timeframes,timer Anzahl,,,b555,a40002,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
r,,,HwcTimer_Monday0,timer monday 1,,,b555,a500020000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Monday1,timer monday 2,,,b555,a500020001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Monday2,timer monday 3,,,b555,a500020002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Tuesday0,timer tuesday 1,,,b555,a500020100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Tuesday1,timer tuesday 2,,,b555,a500020101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Tuesday2,timer tuesday 3,,,b555,a500020102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Wednesday0,timer wednesday 1,,,b555,a500020200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Wednesday1,timer wednesday 2,,,b555,a500020201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Wednesday2,timer wednesday 3,,,b555,a500020202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Thursday0,timer thursday 1,,,b555,a500020300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Thursday1,timer thursday 2,,,b555,a500020301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Thursday2,timer thursday 3,,,b555,a500020302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Friday0,timer friday 1,,,b555,a500020400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Friday1,timer friday 2,,,b555,a500020401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Friday2,timer friday 3,,,b555,a500020402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Saturday0,timer saturday 1,,,b555,a500020500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Saturday1,timer saturday 2,,,b555,a500020501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Saturday2,timer saturday 3,,,b555,a500020502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Sunday0,timer sunday 1,,,b555,a500020600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Sunday1,timer sunday 2,,,b555,a500020601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,HwcTimer_Sunday2,timer sunday 3,,,b555,a500020602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Monday,timer monday (untested),,,b555,a6000200,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Tuesday,timer tuesday (untested),,,b555,a6000201,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Wednesday,timer wednesday (untested),,,b555,a6000202,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Thursday,timer thursday (untested),,,b555,a6000203,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Friday,timer friday (untested),,,b555,a6000204,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Saturday,timer saturday (untested),,,b555,a6000205,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,HwcTimer_Sunday,timer sunday (untested),,,b555,a6000206,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,CcTimer_Timeframes,timer Anzahl,,,b555,a40003,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
r,,,CcTimer_Monday0,timer monday 1,,,b555,a500030000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Monday1,timer monday 2,,,b555,a500030001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Monday2,timer monday 3,,,b555,a500030002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Tuesday0,timer tuesday 1,,,b555,a500030100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Tuesday1,timer tuesday 2,,,b555,a500030101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Tuesday2,timer tuesday 3,,,b555,a500030102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Wednesday0,timer wednesday 1,,,b555,a500030200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Wednesday1,timer wednesday 2,,,b555,a500030201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Wednesday2,timer wednesday 3,,,b555,a500030202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Thursday0,timer thursday 1,,,b555,a500030300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Thursday1,timer thursday 2,,,b555,a500030301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Thursday2,timer thursday 3,,,b555,a500030302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Friday0,timer friday 1,,,b555,a500030400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Friday1,timer friday 2,,,b555,a500030401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Friday2,timer friday 3,,,b555,a500030402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Saturday0,timer saturday 1,,,b555,a500030500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Saturday1,timer saturday 2,,,b555,a500030501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Saturday2,timer saturday 3,,,b555,a500030502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Sunday0,timer sunday 1,,,b555,a500030600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Sunday1,timer sunday 2,,,b555,a500030601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
r,,,CcTimer_Sunday2,timer sunday 3,,,b555,a500030602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
w,,,CcTimer_Monday,timer monday (untested),,,b555,a6000300,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Tuesday,timer tuesday (untested),,,b555,a6000301,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Wednesday,timer wednesday (untested),,,b555,a6000302,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Thursday,timer thursday (untested),,,b555,a6000303,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Friday,timer friday (untested),,,b555,a6000304,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Saturday,timer saturday (untested),,,b555,a6000305,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
w,,,CcTimer_Sunday,timer sunday (untested),,,b555,a6000306,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
r,,,Z1Timer_Timeframes,timer Anzahl,,,b555,a40000,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
r,,,Z1Timer_Monday0,timer heating monday 1,,,b555,a500000000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Monday1,timer heating monday 2,,,b555,a500000001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Monday2,timer heating monday 3,,,b555,a500000002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Tuesday0,timer heating tuesday 1,,,b555,a500000100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Tuesday1,timer heating tuesday 2,,,b555,a500000101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Tuesday2,timer heating tuesday 3,,,b555,a500000102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Wednesday0,timer heating wednesday 1,,,b555,a500000200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Wednesday1,timer heating wednesday 2,,,b555,a500000201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Wednesday2,timer heating wednesday 3,,,b555,a500000202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Thursday0,timer heating thursday 1,,,b555,a500000300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Thursday1,timer heating thursday 2,,,b555,a500000301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Thursday2,timer heating thursday 3,,,b555,a500000302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Friday0,timer heating friday 1,,,b555,a500000400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Friday1,timer heating friday 2,,,b555,a500000401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Friday2,timer heating friday 3,,,b555,a500000402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Saturday0,timer heating saturday 1,,,b555,a500000500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Saturday1,timer heating saturday 2,,,b555,a500000501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Saturday2,timer heating saturday 3,,,b555,a500000502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Sunday0,timer heating sunday 1,,,b555,a500000600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Sunday1,timer heating sunday 2,,,b555,a500000601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,Z1Timer_Sunday2,timer heating sunday 3,,,b555,a500000602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Monday,timer heating monday (untested),,,b555,a6000000,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Tuesday,timer heating tuesday (untested),,,b555,a6000001,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Wednesday,timer heating wednesday (untested),,,b555,a6000002,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Thursday,timer heating thursday (untested),,,b555,a6000003,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Friday,timer heating friday (untested),,,b555,a6000004,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Saturday,timer heating saturday (untested),,,b555,a6000005,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
w,,,Z1Timer_Sunday,timer heating sunday (untested),,,b555,a6000006,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
r,,,PrFuelSumHc,fuel consumption heating,,,b516,1000ffff84030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
r,,,PrEnergySumHc,energy consumption heating,,,b516,1000ffff83030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
r,,,YieldHc,yield heating,,,b516,1000ffff49030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
r,,,PrFuelSumHwc,fuel consumption hot water,,,b516,1000ffff84040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
r,,,PrEnergySumHwc,energy consumption hot water,,,b516,1000ffff83040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
r,,,YieldHwc,yield hot water,,,b516,1000ffff49040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
