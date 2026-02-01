type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
*[id_sw],scan,,,,SW
*[id_15_id],scan,,,,ID,15
[id_sw>=413]r,,,APCLegioProtection,d.74 APC_LegioProtection: Legionella protection for actoSTORE,,,b509,0d9704,value,,UCH,,,
[id_sw>=413]w,,install,APCLegioProtection,d.74 APC_LegioProtection: Legionella protection for actoSTORE,,,b509,0e9704,value,,UCH,,,
[id_sw>=413]r,,,APCComStatus,d.92 APC_ComStatus_DK: actoSTORE communication status,,,b509,0d6200,value,,UCH,,,
r,,,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0d0704,value,,UCH,,kW,
w,,install,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0e0704,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0df703,value,,UCH,,min,minutes
w,,install,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0ef703,value,,UCH,,min,minutes
r,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0d0904,value,,UCH,,min,minutes
w,,install,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0e0904,value,,UCH,,min,minutes
r,,,HwcTemp,d.03 Temp DHW: hot water flow temperature (combination boiler only),,,b509,0d1600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Temp storage / she: current temperature for warm start sensor (combinations boiler only) Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint: Flow temperature target value or return target value when return regulation is set,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,HwcTempDesired,d.06 DHW setpoint: Hot water temperature target value,,,b509,0dea03,value,,D2C,,°C,temperature
r,,,StorageTempDesired,"d.07 Storage setpoint: Warm start temperature value (combination boiler plus only), Storage temperature target value (system boiler only)",,,b509,0d0400,value,,D2C,,°C,temperature
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: internal heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 external pump: External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 storage load pump: tank load pump demand,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0da100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
w,,install,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0ea100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
r,,,PumpPower,d.15 Current heating pump power: Current central heating pump power,,,b509,0d7300,value,,UCH,,,
r,,,DCRoomthermostat,d.16 room thermostat 24 V: External controls heat demand (Clamp 3'-4'),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 DHW demand: domestic hot water (tapping or tank contact) demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 operation mode: Wintermode active,,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,PrimaryCircuitFlowrate,d.29 Primary circuit flow rate,,,b509,0dfb00,value,,UIN,100,l/min,
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,rpm,fan speed actual value
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,HwcWaterflow,d.36 DHW waterflow: domestic hot water flow sensor,,,b509,0d5500,value,,UIN,100,,
r,,,FlowTemp,d.40 TFT_DK: flow temperature,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return: return temperature,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,OutdoorstempSensor,d.47 Temp outside: Outside temperature (uncorrected value),,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 Status DCF 77: DCF status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF receiver state
r,,,ExternalFlowTempDesired,external flowsetpoint: Flow target temperature from external regulator to terminal 7-8-9,,,b509,0d2500,value,,D2C,,°C,temperature
r,,,ExternalHwcSwitch,DHWSwitch_DK: Demand external tank (via contact),,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,WaterPressure,Waterpressure: water pressure,,,b509,0d0200,press,,FLT,,bar,pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,Flame,Flame,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Changes_DSN_DK: Numbers adjusting (storing) the DSN,,,b509,0d0c00,value,,UCH,,,
r,,,GasvalveUC,SD_Gasvalve_uC_DK: Activation signal of the gasvalve (activated via micrcontroller),,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,SD_VolatileLockout_DK: TRUE: STB failures is volatileFALSE: STB failure is not volataile,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,ModulationDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK: ioni/adc value from the flame control circuit,,,b509,0d2f00,value,,UIN,,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,EbusSourceOn,EbusSourceOn_DK: Activation signal of the eBus source,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,Fluegasvalve,Fluegasvalve_DK: flue gasvalve activation signal,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,ExternalFaultmessage,External_Faultmessage_DK: external fault message,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,GasvalveASICFeedback,SD_Gasvalve_ASICFeedback_DK: feedback gasvalve (from ASIC),,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,GasvalveUCFeedback,SD_Gasvalve_uCFeedback_DK: feedback gasvalve (from Microcontroller),,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,Ignitor,SD_Ignitor_DK: igniton activated,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,HwcTypes,DHW_Types_DK: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,HwcImpellorSwitch,DHW impellor switch: domestic hot water (tapping) demand,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,WarmstartDemand,WarmstartDemand: aktivation of warmstart,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,ParamToken,ParamToken_DK: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,Expertlevel_ReturnTemp,ReturnTemperature_DK: external return sensor,,,b509,0d6b00,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,SD_Temperaturelimiter_DK: feedback signal of the temperature limiter,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,EbusVoltage,EbusVoltage_DK: feedback signal of the eBus source,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,FluegasvalveOpen_DK: feedback of the flue gas valve,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte_DK: Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN_DK: DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,rpm,output fan speed
r,,,PowerValue,PowerValue,,,b509,0daa00,value,,HEX:6,,,"Power Values of the Boiler (min Power, max Power)"
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK: water pressure branch controll off,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN Start adress,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,ExtTankModulCon_DK: external tank modul connected (VR65),,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage_DK: Second stage of the pump activated,,,b509,0ded00,value,,UCH,0=off;1=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: all IFC faults are volataile,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,VortexFlowSensor,"VortexFlowSensor_DK: Predictive Maintenance data, CH water flow",,,b509,0dd500,value,,UIN,,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the aplliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK: Gasvalve activation signal (from Microcontroller),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: Initialisation off all EEPROM values (done in the production),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,TimerInputCH_DK: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,rpm,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,rpm,Maximum Fan speed of the appliance
r,,,ExternGasvalve,ExternGasvalve_DK: external gasvalve activated,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,btime,,BTI,,,time,bdate,,BDA,,,date
r,,,FlowSetPotmeter,FlowSetPotmeter: flow setpoint potentiometer,,,b509,0df003,value,,D2C,,°C,temperature
r,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0df103,value,,D2C,,°C,temperature
r,,,HwcSwitch,DHWSwitch: DHW on/off,,,b509,0df303,value,,UCH,0=off;1=on,,
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0d0c04,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0e0c04,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
r,,,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0d0b04,value,,UCH,,,
w,,install,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0e0b04,value,,UCH,,,
r,,,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0d4304,value,,D2C,,°C,temperature
w,,install,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0e4304,value,,D2C,,°C,temperature
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
r,,,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0d2404,value,,SIN,,rpm,Offset for minimum fan speed
w,,install,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0e2404,value,,SIN,,rpm,Offset for minimum fan speed
r,,,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0d2504,value,,SIN,,rpm,Offset for maximum fan speed
w,,install,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0e2504,value,,SIN,,rpm,Offset for maximum fan speed
r,,,SolPostHeat,d.58 solar function: special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti),,,b509,0d7304,value,,UCH,,,
w,,install,SolPostHeat,d.58 solar function: special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti),,,b509,0e7304,value,,UCH,,,
r,,,DeactivationsTemplimiter,d.60 Number STL cut off: Number of safety temperature limiter cut offs,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,"d.61 Number ignition device cut off: number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)",,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Max ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 ignition attempts 1: unsuccessfull ignitions in the first attempt,,,b509,0d6e00,value,,UCH,,°C,temperature
r,,,CounterStartattempts2,d.69 ignition attempts 2: unsuccessfull ignitions in the second attempt,,,b509,0d6f00,value,,UCH,,°C,temperature
r,,,ValveMode,"d.70 diverter valve position: Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position",,,b509,0d2a04,value,,UCH,,,
w,,install,ValveMode,"d.70 diverter valve position: Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position",,,b509,0e2a04,value,,UCH,,,
r,,,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0d0e04,value,,D2C,,°C,temperature
w,,install,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0e0e04,value,,D2C,,°C,temperature
r,,,HwcPostrunTime,d.72 postrun time storage,,,b509,0d1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
w,,install,HwcPostrunTime,d.72 postrun time storage,,,b509,0e1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
r,,,WarmstartOffset,d.73 Warmstart offset: Offset for warm start target value (combination boilers only),,,b509,0d1004,value,,D2C,,°C,temperature
w,,install,WarmstartOffset,d.73 Warmstart offset: Offset for warm start target value (combination boilers only),,,b509,0e1004,value,,D2C,,°C,temperature
r,,,StorageLoadTimeMax,d.75 Max load time storage: Maximum charging time for a storage without own control,,,b509,0d1204,value,,UCH,,min,minutes
w,,install,StorageLoadTimeMax,d.75 Max load time storage: Maximum charging time for a storage without own control,,,b509,0e1204,value,,UCH,,min,minutes
r,,,PartloadHwcKW,d.77 hot water partload: storage part load (storage charging capacity limit),,,b509,0d0804,value,,UCH,,kW,
w,,install,PartloadHwcKW,d.77 hot water partload: storage part load (storage charging capacity limit),,,b509,0e0804,value,,UCH,,kW,
r,,,FlowsetHwcMax,d.78 Max value flow temp storage: storage charging temperature limit (target flow temperature in storage mode),,,b509,0d0f04,value,,D2C,,°C,temperature
w,,install,FlowsetHwcMax,d.78 Max value flow temp storage: storage charging temperature limit (target flow temperature in storage mode),,,b509,0e0f04,value,,D2C,,°C,temperature
r,,,HcHours,d.80 operating hours CH: central heating operation hours,,,b509,0d2800,value,,UIN,,h,hours
r,,,HwcHours,d.81 Operating hours DHW: water heating operation hours,,,b509,0d2200,value,,UIN,,h,hours
r,,,HcStarts,d.82 Burner starts heating,,,b509,0d2900,value,,UIN,-100,,cycles in heating mode
r,,,HwcStarts,d.83 Burner starts DHW,,,b509,0d2300,value,,UIN,-100,,Cycles in hot water operation
r,,,HoursTillService,d.84 Hours till next service: Maintenance indicator:Number of hours until the next maintenance,,,b509,0d2004,value,,UIN,,h,hours
w,,install,HoursTillService,d.84 Hours till next service: Maintenance indicator:Number of hours until the next maintenance,,,b509,0e2004,value,,UIN,,h,hours
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e6804,value,,UCH,0=no;1=yes,,
r,,,TempGradientFailure,TempGradientFailure_DK: Number of cut offs of the boilers cause of to high gradient (S.54),,,b509,0d1100,value,,UCH,,°C,temperature
r,,,TempDiffBlock,TempDiffBlock_DK: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,temperature
r,,,TempDiffFailure,TempDiffFailure_DK: Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures,,,b509,0d1300,value,,UCH,,°C,temperature
r,,,PumpHours,Pump operation hours,,,b509,0d1400,value,,UIN,,h,hours
r,,,HcPumpStarts,CH_PumpCommunt_DK: pump switchings,,,b509,0d1500,value,,UIN,,,start count
r,,,ValveStarts,TWV_Communt_DK: commutations of the three way valve,,,b509,0d1a00,value,,UIN,,,start count
r,,,FanHours,Fan operation hours,,,b509,0d1b00,value,,UIN,,h,hours
r,,,FanStarts,FanCommunt_DK: commutations of the fan,,,b509,0d1c00,value,,UIN,,,start count
r,,,OverflowCounter,OverflowCounter_DK: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,temperature
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,Maintenancedata_HwcTempMax,Temp DHW max: maximum temperature measured by the domestic hot water outlet sensor,,,b509,0d3500,value,,D2C,,°C,temperature
r,,,StorageTempMax,Temp storage max: maximum temperature measured by the external tank sensor,,,b509,0d3600,value,,D2C,,°C,temperature
r,,,FlowTempMax,TFT_max_DK: maximum temperature measured by the flow sensor,,,b509,0d3700,value,,D2C,,°C,temperature
r,,,FanPWMSum,Fan_PWM_Sum_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,FanPWMTest,Fan_PWM_Test_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK: Predictive Maintenance data,,,b509,0d3d00,value,,D2C,,°C,temperature
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,hours
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,start count
r,,,HwcWaterflowMax,DHW Waterflow_max_DK: domestic hot water flow sensor maximum value,,,b509,0d5600,value,,UIN,100,,
r,,,CounterStartAttempts3,CounterStartAttempts3_DK: unsuccessfull ignitions in the third attempt,,,b509,0d8100,value,,UCH,,°C,temperature
r,,,CounterStartAttempts4,CounterStartAttempts4_DK: unsuccessfull ignitions in the fourth attempt,,,b509,0d8200,value,,UCH,,°C,temperature
r,,,ReturnTempMax,TRT_max_DK: max. return temperature,,,b509,0dbe00,value,,D2C,,°C,temperature
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK: summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK: number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
r,,,SHEMaxFlowTemp,SHE_MaxFlowTemp_DK: maximum flow temperature DHW,,,b509,0dc300,value,,D2C,,°C,temperature
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK: maximum difference between flow and DHW outlet temperature,,,b509,0dc400,value,,D2C,,°C,temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK: Predictive Maintenance data,,,b509,0dc500,value,,ULG,,,
w,,install,PrEnergySumHwc1,PrEnergySumDHW1_DK: Predictive Maintenance data,,,b509,0ec500,value,,ULG,,,
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Predictive Maintenance data,,,b509,0dc600,value,,ULG,,,
w,,install,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Predictive Maintenance data,,,b509,0ec600,value,,ULG,,,
r,,,PrEnergySumHwc2,PrEnergySumDHW2_DK: Predictive Maintenance data,,,b509,0dc700,value,,ULG,,,
w,,install,PrEnergySumHwc2,PrEnergySumDHW2_DK: Predictive Maintenance data,,,b509,0ec700,value,,ULG,,,
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK: Predictive Maintenance data,,,b509,0dc800,value,,ULG,,,
w,,install,PrEnergyCountHwc2,PrEnergyCountDHW2_DK: Predictive Maintenance data,,,b509,0ec800,value,,ULG,,,
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK: Predictive Maintenance data,,,b509,0dc900,value,,ULG,,,
w,,install,PrEnergySumHwc3,PrEnergySumDHW3_DK: Predictive Maintenance data,,,b509,0ec900,value,,ULG,,,
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK: Predictive Maintenance data,,,b509,0dca00,value,,ULG,,,
w,,install,PrEnergyCountHwc3,PrEnergyCountDHW3_DK: Predictive Maintenance data,,,b509,0eca00,value,,ULG,,,
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK: Predictive Maintenance data,,,b509,0dd000,value,,UIN,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK: Predictive Maintenance data,,,b509,0df000,value,,UIN,,mbar,pressure
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK: Predictive Maintenance data,,,b509,0df100,value,,UCH,,,
r,,,PrAPSCounter,PrAPSCounter_DK: Predictive Maintenance data,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum_DK: Predictive Maintenance data,,,b509,0df300,value,,UIN,,s,seconds
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue_DK,,,b509,0df400,value,,SIN,,,Predictive Maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1_DK: Predictive Maintenance data,,,b509,0df500,value,,ULG,,,
w,,install,PrEnergySumHc1,PrEnergySumCH1_DK: Predictive Maintenance data,,,b509,0ef500,value,,ULG,,,
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK: Predictive Maintenance data,,,b509,0df600,value,,ULG,,,
w,,install,PrEnergyCountHc1,PrEnergyCountCH1_DK: Predictive Maintenance data,,,b509,0ef600,value,,ULG,,,
r,,,PrEnergySumHc2,PrEnergySumCH2_DK: Predictive Maintenance data,,,b509,0df700,value,,ULG,,,
w,,install,PrEnergySumHc2,PrEnergySumCH2_DK: Predictive Maintenance data,,,b509,0ef700,value,,ULG,,,
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK: Predictive Maintenance data,,,b509,0df800,value,,ULG,,,
w,,install,PrEnergyCountHc2,PrEnergyCountCH2_DK: Predictive Maintenance data,,,b509,0ef800,value,,ULG,,,
r,,,PrEnergySumHc3,PrEnergySumCH3_DK: Predictive Maintenance data,,,b509,0df900,value,,ULG,,,
w,,install,PrEnergySumHc3,PrEnergySumCH3_DK: Predictive Maintenance data,,,b509,0ef900,value,,ULG,,,
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK: Predictive Maintenance data,,,b509,0dfa00,value,,ULG,,,
w,,install,PrEnergyCountHc3,PrEnergyCountCH3_DK: Predictive Maintenance data,,,b509,0efa00,value,,ULG,,,
[id_15_id='EMM00']r,,,GlobalSystemOff,Global System OFF,,,b524,020000000700,ign,,IGN:4,,,,value,,UCH,0=no;1=yes,,For switching system off
[id_15_id='EMM00']w,,install,GlobalSystemOff,Global System OFF,,,b509,0e0700,value,,UCH,0=no;1=yes,,For switching system off
[id_15_id='EMM00']r,,,Z1HolidayTempStatus,desired room temperature in holiday for zone 1,,,b524,02000000f600,ign,,IGN:4,,,,value,,EXP,,°C,temperature
[id_15_id='EMM00']r,,,Date,date,,,b524,020000003400,ign,,IGN:4,,,,value,,HDA:3,,,current date
[id_15_id='EMM00']w,,,Date,date,,,b524,020100003400,value,,HDA:3,,,current date
[id_15_id='EMM00']r,,,Time,time,,,b524,020000003500,ign,,IGN:4,,,,value,,HTI,,,current time
[id_15_id='EMM00']w,,,Time,time,,,b524,020100003500,value,,HTI,,,current time
[id_15_id='EMM00']r,,,WaterPressure,water pressure,,,b524,020000003900,ign,,IGN:4,,,,value,,EXP,,bar,water pressure
[id_15_id='EMM00']r,,,DisplayedOutsideTemp,outside temperature,,,b524,020000007300,ign,,IGN:4,,,,value,,EXP,,°C,outside temperature
[id_15_id='EMM00']r,,,HwcOpMode,HwcOpMode,,,b524,020001000300,ign,,IGN:4,,,,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of Hwc
[id_15_id='EMM00']w,,,HwcOpMode,HwcOpMode,,,b524,020101000300,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of Hwc
[id_15_id='EMM00']r,,,HwcTempDesired,gewünschte Temperatur Warmwasserkreis,,,b524,020001000400,ign,,IGN:4,,,,value,,EXP,,°C,setpoint of domestic hot water circuit
[id_15_id='EMM00']w,,,HwcTempDesired,gewünschte Temperatur Warmwasserkreis,,,b524,020101000400,value,,EXP,,°C,setpoint of domestic hot water circuit
[id_15_id='EMM00']r,,,HwcStorageTemp,HwcStorageTemp,,,b524,020001000500,ign,,IGN:4,,,,value,,EXP,,°C,current hot water storage temperature
[id_15_id='EMM00']r,,,HwcHolidayStartPeriod,hwc holiday start period,,,b524,020001000900,ign,,IGN:4,,,,value,,HDA:3,,,start date of holidays
[id_15_id='EMM00']w,,,HwcHolidayStartPeriod,hwc holiday start period,,,b524,020101000900,value,,HDA:3,,,start date of holidays
[id_15_id='EMM00']r,,,HwcHolidayEndPeriod,hwc holiday end period,,,b524,020001000a00,ign,,IGN:4,,,,value,,HDA:3,,,end date of holidays
[id_15_id='EMM00']w,,,HwcHolidayEndPeriod,hwc holiday end period,,,b524,020101000a00,value,,HDA:3,,,end date of holidays
[id_15_id='EMM00']r,,,HwcSFMode,hwc SF mode,,,b524,020001000d00,ign,,IGN:4,,,,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
[id_15_id='EMM00']w,,,HwcSFMode,hwc SF mode,,,b524,020101000d00,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
[id_15_id='EMM00']r,,,Z1HolidayStartPeriod,Ferienzeitraum Start Zone 1,,,b524,020003000300,ign,,IGN:4,,,,value,,HDA:3,,,start date of holidays for zone 1
[id_15_id='EMM00']w,,,Z1HolidayStartPeriod,Ferienzeitraum Start Zone 1,,,b524,020103000300,value,,HDA:3,,,start date of holidays for zone 1
[id_15_id='EMM00']r,,,Z1HolidayEndPeriod,Ferienzeitraum Ende Zone 1,,,b524,020003000400,ign,,IGN:4,,,,value,,HDA:3,,,end date of holidays for zone 1
[id_15_id='EMM00']w,,,Z1HolidayEndPeriod,Ferienzeitraum Ende Zone 1,,,b524,020103000400,value,,HDA:3,,,end date of holidays for zone 1
[id_15_id='EMM00']r,,,Z1HolidayTemp,Raumsollwert Ferienbetrieb Zone 1 (untested),,,b524,020003000500,ign,,IGN:4,,,,value,,EXP,,°C,holiday setpoint for zone 1
[id_15_id='EMM00']w,,,Z1HolidayTemp,Raumsollwert Ferienbetrieb Zone 1 (untested),,,b524,020103000500,value,,EXP,,°C,holiday setpoint for zone 1
[id_15_id='EMM00']r,,,Z1OpMode,Betriebsart Zone 1,,,b524,020003000600,ign,,IGN:4,,,,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of zone 1
[id_15_id='EMM00']w,,,Z1OpMode,Betriebsart Zone 1,,,b524,020103000600,value,,UIN,0=off;1=auto;2=day;3=night,,operation mode of zone 1
[id_15_id='EMM00']r,,,Z1QuickVetoTemp,Quick Veto Temperatur Zone 1,,,b524,020003000800,ign,,IGN:4,,,,value,,EXP,,°C,manual override setpoint for zone 1
[id_15_id='EMM00']w,,,Z1QuickVetoTemp,Quick Veto Temperatur Zone 1,,,b524,020103000800,value,,EXP,,°C,manual override setpoint for zone 1
[id_15_id='EMM00']r,,,Z1QuickVetoDuration,Duration of Quick Veto mode Zone 1,,,b524,020003002600,ign,,IGN:4,,,,value,,EXP,,h,valid values are 0.5-12 in steps of 0.5 and writing enables quick veto mode
[id_15_id='EMM00']w,,,Z1QuickVetoDuration,Duration of Quick Veto mode Zone 1,,,b524,020103002600,value,,EXP,,h,valid values are 0.5-12 in steps of 0.5 and writing enables quick veto mode
[id_15_id='EMM00']r,,,Z1QuickVetoEndTime,Quick Veto end time Zone 1,,,b524,020003001e00,ign,,IGN:4,,,,value,,HTI,,,
[id_15_id='EMM00']r,,,Z1QuickVetoEndDate,Quick Veto end date Zone 1,,,b524,020003002400,ign,,IGN:4,,,,value,,HDA:3,,,date
[id_15_id='EMM00']r,,,Z1NightTemp,Absenktemperatur Zone 1,,,b524,020003000900,ign,,IGN:4,,,,value,,EXP,,°C,night setpoint for zone 1
[id_15_id='EMM00']w,,,Z1NightTemp,Absenktemperatur Zone 1,,,b524,020103000900,value,,EXP,,°C,night setpoint for zone 1
[id_15_id='EMM00']r,,,Z1BankHolidayStartPeriod,Bank Feiertag Start Zone 1 (untested),,,b524,020003000c00,ign,,IGN:4,,,,value,,HDA:3,,,start date of bank holidays for zone 1
[id_15_id='EMM00']w,,,Z1BankHolidayStartPeriod,Bank Feiertag Start Zone 1 (untested),,,b524,020103000c00,value,,HDA:3,,,start date of bank holidays for zone 1
[id_15_id='EMM00']r,,,Z1BankHolidayEndPeriod,Bank Feiertag Ende Zone 1 (untested),,,b524,020003000d00,ign,,IGN:4,,,,value,,HDA:3,,,end date of bank holidays for zone 1
[id_15_id='EMM00']w,,,Z1BankHolidayEndPeriod,Bank Feiertag Ende Zone 1 (untested),,,b524,020103000d00,value,,HDA:3,,,end date of bank holidays for zone 1
[id_15_id='EMM00']r,,,Z1SFMode,SF mode zone 1,,,b524,020003000e00,ign,,IGN:4,,,,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
[id_15_id='EMM00']w,,,Z1SFMode,SF mode zone 1,,,b524,020103000e00,value,,UCH,0=auto;1=ventilation;2=party;3=veto;4=onedayaway;5=onedayathome;6=load,,
[id_15_id='EMM00']r,,,Z1RoomTemp,Raumisttemperatur Zone 1 (untested),,,b524,020003000f00,ign,,IGN:4,,,,value,,EXP,,°C,aktuelle Raumtemperatur in Zone 1
[id_15_id='EMM00']r,,,Z1ValveStatus,Ventilstatus Zone 1 (untested),,,b524,020003001200,ign,,IGN:4,,,,value,,UCH,,,valve status of zone 1
[id_15_id='EMM00']w,,,Z1ValveStatus,Ventilstatus Zone 1 (untested),,,b524,020103001200,value,,UCH,,,valve status of zone 1
[id_15_id='EMM00']r,,,Z1RoomZoneMapping,Raumregler Zuordnung Zone 1 (untested),,,b524,020003001300,ign,,IGN:4,,,,value,,UIN,0=none;1=VRC700;2=VR91_1;3=VR91_2;4=VR91_3,,configures which room temperature is assigned to zone 1
[id_15_id='EMM00']w,,,Z1RoomZoneMapping,Raumregler Zuordnung Zone 1 (untested),,,b524,020103001300,value,,UIN,0=none;1=VRC700;2=VR91_1;3=VR91_2;4=VR91_3,,configures which room temperature is assigned to zone 1
[id_15_id='EMM00']r,,,Z1ActualRoomTempDesired,Raumsolltemperatur Zone 1,,,b524,020003001400,ign,,IGN:4,,,,value,,EXP,,°C,current room setpoint considering all basic conditions passed to the control algorithms
[id_15_id='EMM00']w,,,Z1ActualRoomTempDesired,Raumsolltemperatur Zone 1,,,b524,020103001400,value,,EXP,,°C,current room setpoint considering all basic conditions passed to the control algorithms
[id_15_id='EMM00']r,,,Z1Shortname,Kurzbezeichnung Zone 1 (untested),,,b524,020003001600,ign,,IGN:4,,,,value,,STR:6,,,short name of zone 1
[id_15_id='EMM00']w,,,Z1Shortname,Kurzbezeichnung Zone 1 (untested),,,b524,020103001600,value,,STR:6,,,short name of zone 1
[id_15_id='EMM00']r,,,Z1Name1,Bezeichnung Zone 1 Teil 1,,,b524,020003001700,ign,,IGN:4,,,,value,,STR:5,,,name of zone 1
[id_15_id='EMM00']w,,,Z1Name1,Bezeichnung Zone 1 Teil 1,,,b524,020103001700,value,,STR:5,,,name of zone 1
[id_15_id='EMM00']r,,,Z1Name2,Bezeichnung Zone 1 Teil 2,,,b524,020003001800,ign,,IGN:4,,,,value,,STR:5,,,name of zone 1
[id_15_id='EMM00']w,,,Z1Name2,Bezeichnung Zone 1 Teil 2,,,b524,020103001800,value,,STR:5,,,name of zone 1
[id_15_id='EMM00']r,,,Z1DayTemp,Solltemperatur Zone 1,,,b524,020003002200,ign,,IGN:4,,,,value,,EXP,,°C,day setpoint for zone 1
[id_15_id='EMM00']w,,,Z1DayTemp,Solltemperatur Zone 1,,,b524,020103002200,value,,EXP,,°C,day setpoint for zone 1
[id_15_id='EMM00']r,,,HwcTimer_Timeframes,timer Anzahl,,,b555,a40002,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
[id_15_id='EMM00']r,,,HwcTimer_Monday0,timer monday 1,,,b555,a500020000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Monday1,timer monday 2,,,b555,a500020001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Monday2,timer monday 3,,,b555,a500020002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Tuesday0,timer tuesday 1,,,b555,a500020100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Tuesday1,timer tuesday 2,,,b555,a500020101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Tuesday2,timer tuesday 3,,,b555,a500020102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Wednesday0,timer wednesday 1,,,b555,a500020200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Wednesday1,timer wednesday 2,,,b555,a500020201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Wednesday2,timer wednesday 3,,,b555,a500020202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Thursday0,timer thursday 1,,,b555,a500020300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Thursday1,timer thursday 2,,,b555,a500020301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Thursday2,timer thursday 3,,,b555,a500020302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Friday0,timer friday 1,,,b555,a500020400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Friday1,timer friday 2,,,b555,a500020401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Friday2,timer friday 3,,,b555,a500020402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Saturday0,timer saturday 1,,,b555,a500020500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Saturday1,timer saturday 2,,,b555,a500020501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Saturday2,timer saturday 3,,,b555,a500020502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Sunday0,timer sunday 1,,,b555,a500020600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Sunday1,timer sunday 2,,,b555,a500020601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,HwcTimer_Sunday2,timer sunday 3,,,b555,a500020602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Monday,timer monday (untested),,,b555,a6000200,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Tuesday,timer tuesday (untested),,,b555,a6000201,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Wednesday,timer wednesday (untested),,,b555,a6000202,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Thursday,timer thursday (untested),,,b555,a6000203,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Friday,timer friday (untested),,,b555,a6000204,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Saturday,timer saturday (untested),,,b555,a6000205,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,HwcTimer_Sunday,timer sunday (untested),,,b555,a6000206,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,CcTimer_Timeframes,timer Anzahl,,,b555,a40003,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
[id_15_id='EMM00']r,,,CcTimer_Monday0,timer monday 1,,,b555,a500030000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Monday1,timer monday 2,,,b555,a500030001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Monday2,timer monday 3,,,b555,a500030002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Tuesday0,timer tuesday 1,,,b555,a500030100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Tuesday1,timer tuesday 2,,,b555,a500030101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Tuesday2,timer tuesday 3,,,b555,a500030102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Wednesday0,timer wednesday 1,,,b555,a500030200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Wednesday1,timer wednesday 2,,,b555,a500030201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Wednesday2,timer wednesday 3,,,b555,a500030202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Thursday0,timer thursday 1,,,b555,a500030300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Thursday1,timer thursday 2,,,b555,a500030301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Thursday2,timer thursday 3,,,b555,a500030302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Friday0,timer friday 1,,,b555,a500030400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Friday1,timer friday 2,,,b555,a500030401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Friday2,timer friday 3,,,b555,a500030402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Saturday0,timer saturday 1,,,b555,a500030500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Saturday1,timer saturday 2,,,b555,a500030501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Saturday2,timer saturday 3,,,b555,a500030502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Sunday0,timer sunday 1,,,b555,a500030600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Sunday1,timer sunday 2,,,b555,a500030601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']r,,,CcTimer_Sunday2,timer sunday 3,,,b555,a500030602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,ign_1,,IGN:2,,,
[id_15_id='EMM00']w,,,CcTimer_Monday,timer monday (untested),,,b555,a6000300,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Tuesday,timer tuesday (untested),,,b555,a6000301,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Wednesday,timer wednesday (untested),,,b555,a6000302,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Thursday,timer thursday (untested),,,b555,a6000303,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Friday,timer friday (untested),,,b555,a6000304,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Saturday,timer saturday (untested),,,b555,a6000305,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']w,,,CcTimer_Sunday,timer sunday (untested),,,b555,a6000306,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,wtimeslotconst,,U2L,=65535,,constant value for writing a slot without target temperature
[id_15_id='EMM00']r,,,Z1Timer_Timeframes,timer Anzahl,,,b555,a40000,ign,,IGN:1,,,Amount of configured slots per weekday,slotcount,,UCH,,,number of slots on a day,slotcount_1,,UCH,,,number of slots on a day,slotcount_2,,UCH,,,number of slots on a day,slotcount_3,,UCH,,,number of slots on a day,slotcount_4,,UCH,,,number of slots on a day,slotcount_5,,UCH,,,number of slots on a day,slotcount_6,,UCH,,,number of slots on a day,ign_1,,IGN:1,,,
[id_15_id='EMM00']r,,,Z1Timer_Monday0,timer heating monday 1,,,b555,a500000000,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Monday1,timer heating monday 2,,,b555,a500000001,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Monday2,timer heating monday 3,,,b555,a500000002,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Tuesday0,timer heating tuesday 1,,,b555,a500000100,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Tuesday1,timer heating tuesday 2,,,b555,a500000101,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Tuesday2,timer heating tuesday 3,,,b555,a500000102,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Wednesday0,timer heating wednesday 1,,,b555,a500000200,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Wednesday1,timer heating wednesday 2,,,b555,a500000201,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Wednesday2,timer heating wednesday 3,,,b555,a500000202,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Thursday0,timer heating thursday 1,,,b555,a500000300,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Thursday1,timer heating thursday 2,,,b555,a500000301,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Thursday2,timer heating thursday 3,,,b555,a500000302,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Friday0,timer heating friday 1,,,b555,a500000400,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Friday1,timer heating friday 2,,,b555,a500000401,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Friday2,timer heating friday 3,,,b555,a500000402,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Saturday0,timer heating saturday 1,,,b555,a500000500,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Saturday1,timer heating saturday 2,,,b555,a500000501,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Saturday2,timer heating saturday 3,,,b555,a500000502,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Sunday0,timer heating sunday 1,,,b555,a500000600,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Sunday1,timer heating sunday 2,,,b555,a500000601,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,Z1Timer_Sunday2,timer heating sunday 3,,,b555,a500000602,ign,,IGN:1,,,,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Monday,timer heating monday (untested),,,b555,a6000000,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Tuesday,timer heating tuesday (untested),,,b555,a6000001,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Wednesday,timer heating wednesday (untested),,,b555,a6000002,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Thursday,timer heating thursday (untested),,,b555,a6000003,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Friday,timer heating friday (untested),,,b555,a6000004,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Saturday,timer heating saturday (untested),,,b555,a6000005,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']w,,,Z1Timer_Sunday,timer heating sunday (untested),,,b555,a6000006,slotindex,,UCH,,,index of a time slot,slotcount,,UCH,,,number of slots on a day,htm,,HTM,,,,htm_1,,HTM,,,,slottemp,,UIN,10,°C,desired temperature of a slot
[id_15_id='EMM00']r,,,PrFuelSumHc,fuel consumption heating,,,b516,1000ffff84030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
[id_15_id='EMM00']r,,,PrEnergySumHc,energy consumption heating,,,b516,1000ffff83030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
[id_15_id='EMM00']r,,,YieldHc,yield heating,,,b516,1000ffff49030000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
[id_15_id='EMM00']r,,,PrFuelSumHwc,fuel consumption hot water,,,b516,1000ffff84040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
[id_15_id='EMM00']r,,,PrEnergySumHwc,energy consumption hot water,,,b516,1000ffff83040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
[id_15_id='EMM00']r,,,YieldHwc,yield hot water,,,b516,1000ffff49040000,ign,,IGN:7,,,,value,,EXP,1000,kWh,
