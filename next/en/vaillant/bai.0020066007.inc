type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,T3TempDesired,d.05 T3_Setpoint: Sollwert PWT-Ausgang,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,ThermostatContactOnKl34,d.08 Thermostatkontakt_an_Kl_3_4: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,rpm,fan speed actual value
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,T3,d.40 T3: PWT-Ausgangstemperatur,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,T4,d.41 T4: PWT-Eingangstemperatur,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0da700,value,,SIN,,rpm,Offset for minimum fan speed
w,,install,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0ea700,value,,SIN,,rpm,Offset for minimum fan speed
r,,,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0da800,value,,SIN,,rpm,Offset for maximum fan speed
w,,install,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0ea800,value,,SIN,,rpm,Offset for maximum fan speed
r,,,DeactivationsTemplimiter,d.60 Number STL cut off: Number of safety temperature limiter cut offs,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,"d.61 Number ignition device cut off: number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)",,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Max ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 ignition attempts 1: unsuccessfull ignitions in the first attempt,,,b509,0d6e00,value,,UCH,,°C,temperature
r,,,CounterStartattempts2,d.69 ignition attempts 2: unsuccessfull ignitions in the second attempt,,,b509,0d6f00,value,,UCH,,°C,temperature
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0db500,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0eb500,value,,UCH,,,
r,,,Flame,Flame,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Changes_DSN_DK: Numbers adjusting (storing) the DSN,,,b509,0d0c00,value,,UCH,,,
r,,,GasvalveUC,SD_Gasvalve_uC_DK: Activation signal of the gasvalve (activated via micrcontroller),,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,SD_VolatileLockout_DK: TRUE: STB failures is volatileFALSE: STB failure is not volataile,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK: ioni/adc value from the flame control circuit,,,b509,0d2f00,value,,UIN,,,
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,ReturnTemp,ReturnTemperature_DK: external return sensor,,,b509,0d6b00,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,EbusVoltage,EbusVoltage_DK: feedback signal of the eBus source,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,FluegasvalveOpen_DK: feedback of the flue gas valve,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte_DK: Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN_DK: DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,rpm,output fan speed
r,,,PowerValue,PowerValue,,,b509,0daa00,value,,HEX:6,,,"Power Values of the Boiler (min Power, max Power)"
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,DSNStart,DSN Start adress,,,b509,0dbc00,value,,UIN,,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: all IFC faults are volataile,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK: Gasvalve activation signal (from Microcontroller),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: Initialisation off all EEPROM values (done in the production),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,TimerInputCH_DK: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,rpm,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,rpm,Maximum Fan speed of the appliance
r,,,FaultlistDK,Faultlist_DK[0],,,b509,0d2600,value,,HEX:10,,,fault list (of the last 10 failures)
r,,,TempDiffBlock,TempDiffBlock_DK: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,temperature
r,,,TempDiffFailure,TempDiffFailure_DK: Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures,,,b509,0d1300,value,,UCH,,°C,temperature
r,,,ValveStarts,TWV_Communt_DK: commutations of the three way valve,,,b509,0d1a00,value,,UIN,,,start count
r,,,FanHours,Fan operation hours,,,b509,0d1b00,value,,UIN,,h,hours
r,,,FanStarts,FanCommunt_DK: commutations of the fan,,,b509,0d1c00,value,,UIN,,,start count
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,T3Max,T3_max: Maximaltemperatur am PWT-Ausgang,,,b509,0d3700,value,,D2C,,°C,temperature
r,,,CounterStartAttempts3,CounterStartAttempts3_DK: unsuccessfull ignitions in the third attempt,,,b509,0d8100,value,,UCH,,°C,temperature
r,,,CounterStartAttempts4,CounterStartAttempts4_DK: unsuccessfull ignitions in the fourth attempt,,,b509,0d8200,value,,UCH,,°C,temperature
r,,,T4Max,T4_max: Maximaltemperatur am PWT-Eingang,,,b509,0dbe00,value,,D2C,,°C,temperature
