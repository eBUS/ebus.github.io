type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0d0704,value,,UCH,,kW,
w,,,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0e0704,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0df703,value,,UCH,,min,minutes
w,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0ef703,value,,UCH,,min,minutes
r,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0d0904,value,,UCH,,min,minutes
w,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0e0904,value,,UCH,,min,minutes
r,,,HwcTemp,d.03 Temp DHW: hot water flow temperature (combination boiler only),,,b509,0d1600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Temp storage / she: current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint: Flow temperature target value or return target value when return regulation is set,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,HwcTempDesired,d.06 DHW setpoint: Hot water temperature target value,,,b509,0dea03,value,,D2C,,°C,temperature
r,,,StorageTempDesired,"d.07 Storage setpoint: Warm start temperature value (combination boiler plus only), Storage temperature target value (system boiler only)",,,b509,0d0400,value,,D2C,,°C,temperature
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: internal heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 external pump: External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 storage load pump: tank load pump demand,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,WPPWMPower,d.15 WP_PWMPower_DK: actual PWM-Powerrate of electronic-pump,,,b509,0d7300,value,,UCH,,%,
r,,,HwcDemand,d.22 DHW demand: domestic hot water (tapping or tank contact) demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 operation mode: Wintermode active,,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,AircontrolOk,d.24 SD_AircontrolOk_DK: Air pressure switch,,,b509,0d0300,value,,UCH,240=off;15=on,,
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,rpm,fan speed actual value
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,HwcWaterflow,d.36 DHW waterflow: domestic hot water flow sensor,,,b509,0d5500,value,,UIN,100,,
r,,,FlowTemp,d.40 TFT_DK: flow temperature,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return: return temperature,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage
r,,,OutdoorstempSensor,d.47 Temp outside: Outside temperature (uncorrected value),,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,AITemp,d.48 SD_TAI_DK: Exhaust sensor (inside the flue pipe),,,b509,0d3300,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,AATemp,d.49 SD_TAA_DK: Exhaust sensor (outside the flue pipe),,,b509,0d3200,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 Status DCF 77: DCF status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF receiver state
r,,,DCRoomthermostat,d.16 room thermostat 24 V: External controls heat demand (Clamp 3'-4'),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcSwitch,DHWSwitch: DHW on/off,,,b509,0df303,value,,UCH,0=off;1=on,,
r,,,WaterPressure,value of waterpressure-sensor,,,b509,0d0200,press,,FLT,,bar,pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ExternGasvalve,ExternGasvalve_DK: external gasvalve activated,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,Expertlevel_ReturnTemp,ReturnTemperature_DK: external return sensor,,,b509,0d6b00,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,Ignitor,SD_Ignitor_DK: igniton activated,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,Flame,Flame,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ExternalHwcSwitch,DHWSwitch_DK: Demand external tank (via contact),,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,DSN,DSN_DK: DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,DSNStart,DSN Start adress,,,b509,0d3104,value,,UIN,,,
r,,,ChangesDSN,Changes_DSN_DK: Numbers adjusting (storing) the DSN,,,b509,0d0c00,value,,UCH,,,
r,,,ParamToken,ParamToken_DK: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,rpm,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,rpm,Maximum Fan speed of the appliance
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK: water pressure branch control off,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the appliance,,,b509,0dda00,value,,UCH,,,
r,,,PowerValue,PowerValue,,,b509,0daa00,value,,HEX:6,,,"Power Values of the Boiler (min Power, max Power)"
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,btime,,BTI,,,time,bdate,,BDA,,,date
r,,,EbusVoltage,EbusVoltage_DK: feedback signal of the eBus source,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,EbusSourceOn,EbusSourceOn_DK: Activation signal of the eBus source,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,Templimiter,SD_Temperaturelimiter_DK: feedback signal of the temperature limiter,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,TimerInputHc,TimerInputCH_DK: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,ExternalFaultmessage,External_Faultmessage_DK: external fault message,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,FlowSetPotmeter,FlowSetPotmeter: flow setpoint potentiometer,,,b509,0df003,value,,D2C,,°C,temperature
r,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0df103,value,,D2C,,°C,temperature
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,ExternalFlowTempDesired,external flowsetpoint: Flow target temperature from external regulator to terminal 7-8-9,,,b509,0d2500,value,,D2C,,°C,temperature
r,,,ModulationDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0d0a04,value,,UCH,,,
w,,install,WPPWMPowerDia,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0e0a04,value,,UCH,,,
r,,,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0d0c04,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0e0c04,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
r,,,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0d0b04,value,,UCH,,,
w,,install,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0e0b04,value,,UCH,,,
r,,,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0d4304,value,,D2C,,°C,temperature
w,,install,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0e4304,value,,D2C,,°C,temperature
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
r,,,GVStepOffsetMin,d.52 MinGVStepOffset: Offset for minimum gas valve steps,,,b509,0d7404,value,,UCH,,,
w,,install,GVStepOffsetMin,d.52 MinGVStepOffset: Offset for minimum gas valve steps,,,b509,0e7404,value,,UCH,,,
r,,,GVStepOffsetMax,d.53 MaxGVStepOffset: Offset for maximum gas valve steps,,,b509,0d7504,value,,SCH,,,
w,,install,GVStepOffsetMax,d.53 MaxGVStepOffset: Offset for maximum gas valve steps,,,b509,0e7504,value,,SCH,,,
r,,,ExhaustCurve,d.56 ExhaustCurve,,,b509,0d7204,value,,UCH,,,
w,,service,ExhaustCurve,d.56 ExhaustCurve,,,b509,0e7204,value,,UCH,,,
r,,,SolPostHeat,d.58 solar function: special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti),,,b509,0d7304,value,,UCH,,,
r,,,DeactivationsTemplimiter,d.60 Number STL cut off: Number of safety temperature limiter cut offs,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,"d.61 Number ignition device cut off: number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)",,,b509,0d1f00,value,,UCH,,,
r,,,ExhaustWayBlockCounter,d.63 exhaust way block counter: numbers the exhaust way was blocked,,,b509,0d9c00,value,,UCH,,,
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
r,,,AntiCondensValue,d.85 AntiCondensValue: increase of minimum power,,,b509,0d7704,value,,UCH,,kW,
w,,install,AntiCondensValue,d.85 AntiCondensValue: increase of minimum power,,,b509,0e7704,value,,UCH,,kW,
r,,,SpecialAdj,"d.88 SpecialAdj: switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay",,,b509,0d7604,value,,UCH,,,
w,,install,SpecialAdj,"d.88 SpecialAdj: switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay",,,b509,0e7604,value,,UCH,,,
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e6804,value,,UCH,0=no;1=yes,,
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,GasvalveUC,SD_Gasvalve_uC_DK: Activation signal of the gasvalve (activated via micrcontroller),,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,SD_VolatileLockout_DK: TRUE: STB failures is volatileFALSE: STB failure is not volataile,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK: ioni/adc value from the flame control circuit,,,b509,0d2f00,value,,UIN,,,
r,,,Fluegasvalve,Fluegasvalve_DK: flue gasvalve activation signal,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,GasvalveASICFeedback,SD_Gasvalve_ASICFeedback_DK: feedback gasvalve (from ASIC),,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,GasvalveUCFeedback,SD_Gasvalve_uCFeedback_DK: feedback gasvalve (from Microcontroller),,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,HwcTypes,DHW_Types_DK: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,HwcWaterflowMax,DHW Waterflow_max_DK: domestic hot water flow sensor maximum value,,,b509,0d5600,value,,UIN,100,,
r,,,HwcImpellorSwitch,DHW impellor switch: domestic hot water (tapping) demand,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,WarmstartDemand,WarmstartDemand: activation of warmstart,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,rpm,output fan speed
r,,,ReduceModulationBlocktime,ReduceModulationBlocktime_DK: Reduced modulation blocking time to fulfil 3-star requirement,,,b509,0d5c00,value,,UCH,,,
w,,service,ReduceModulationBlocktime,ReduceModulationBlocktime_DK: Reduced modulation blocking time to fulfil 3-star requirement,,,b509,0e5c00,value,,UCH,,,
r,,,CounterStartAttempts3,CounterStartAttempts3_DK: unsuccessfull ignitions in the third attempt,,,b509,0d8100,value,,UCH,,°C,temperature
r,,,SHEMaxFlowTemp,SHE_MaxFlowTemp_DK: maximum flow temperature DHW,,,b509,0dc300,value,,D2C,,°C,temperature
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK: maximum difference between flow and DHW outlet temperature,,,b509,0dc400,value,,D2C,,°C,temperature
r,,,PumpHours,Pump operation hours,,,b509,0d1400,value,,UIN,,h,hours
r,,,WPSecondStage,WP_SecondStage_DK: Second stage of the pump activated,,,b509,0ded00,value,,UCH,240=off;15=on,,
r,,,HcPumpStarts,CH_PumpCommunt_DK: pump switchings,,,b509,0d1500,value,,UIN,,,start count
r,,,ValveStarts,TWV_Communt_DK: commutations of the three way valve,,,b509,0d1a00,value,,UIN,,,start count
r,,,FanHours,Fan operation hours,,,b509,0d1b00,value,,UIN,,h,hours
r,,,FanStarts,FanCommunt_DK: commutations of the fan,,,b509,0d1c00,value,,UIN,,,start count
r,,,FanPWMTest,Fan_PWM_Test_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,FanPWMSum,Fan_PWM_Sum_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK: Gasvalve activation signal (from Microcontroller),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK: Predictive Maintenance data,,,b509,0df100,value,,UCH,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK: Predictive Maintenance data,,,b509,0df000,value,,UIN,,mbar,pressure
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,hours
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,start count
r,,,TempGradientFailure,TempGradientFailure_DK: Number of cut offs of the boilers cause of to high gradient (S.54),,,b509,0d1100,value,,UCH,,°C,temperature
r,,,TempDiffBlock,TempDiffBlock_DK: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,temperature
r,,,TempDiffFailure,TempDiffFailure_DK: Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures,,,b509,0d1300,value,,UCH,,°C,temperature
r,,,ReturnTempMax,TRT_max_DK: max. return temperature,,,b509,0dbe00,value,,D2C,,°C,temperature
r,,,Maintenancedata_HwcTempMax,Temp DHW max: maximum temperature measured by the domestic hot water outlet sensor,,,b509,0d3500,value,,D2C,,°C,temperature
r,,,StorageTempMax,Temp storage max: maximum temperature measured by the external tank sensor,,,b509,0d3600,value,,D2C,,°C,temperature
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,temperature
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK: Predictive Maintenance data,,,b509,0d3d00,value,,D2C,,°C,temperature
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK: Predictive Maintenance data,,,b509,0dd000,value,,UIN,,,
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK: summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PrAPSCounter,PrAPSCounter_DK: Predictive Maintenance data,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum_DK: Predictive Maintenance data,,,b509,0df300,value,,UIN,,s,seconds
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK: number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
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
r,,,OverflowCounter,OverflowCounter_DK: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,PredFanPWMDevThreshold,Pred_FanPWM_DevThreshold_DK,,,b509,0d3501,value,,UCH,,,
r,,,PredFanPWMSwitchingPoint,Pred_FanPWM_SwitchingPoint_DK,,,b509,0d3601,value,,UIN,,,
r,,,PredFanPWMRefPWMcounter,Pred_FanPWM_RefPWMcounter_DK,,,b509,0d3701,value,,UCH,,,
r,,,PredFanPWMRefPWMsum,Pred_FanPWM_RefPWMsum_DK,,,b509,0d3801,value,,UIN,,,
r,,,PredFanPWMPredCounter,Pred_FanPWM_PredCounter_DK,,,b509,0d3901,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredIgnitionSwitchingPoint,Pred_Ignition_SwitchingPoint_DK,,,b509,0d3c01,value,,UIN,,,
r,,,PredIgnitionPredCounter,Pred_Ignition_PredCounter_DK,,,b509,0d3d01,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredCombustionDecrementTime,Pred_Combustion_DecrementTime_DK,,,b509,0d3e01,value,,UCH,,,
r,,,PredCombustionSwitchingPoint,Pred_Combustion_SwitchingPoint_DK,,,b509,0d3f01,value,,UIN,,,
r,,,PredCombustionPredCounter,Pred_Combustion_PredCounter_DK,,,b509,0d4001,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredSourcePressureDevThreshold,Pred_AirPressure_DevThreshold_DK,,,b509,0d4101,value,,UCH,,,
r,,,PredSourcePressureSwitchingPoint,Pred_AirPressure_SwitchingPoint_DK,,,b509,0d4201,value,,UIN,,,
r,,,PredSourcePressurePredCounter,Pred_AirPressure_PredCounter_DK,,,b509,0d4301,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredWaterflowDevThreshold,Pred_Waterflow_DevThreshold_DK,,,b509,0d4401,value,,UCH,,,
r,,,PredWaterflowSwitchingPoint,Pred_Waterflow_SwitchingPoint_DK,,,b509,0d4501,value,,UIN,,,
r,,,PredWaterpressureMinPressure,Pred_Waterpressure_MinPressure_DK,,,b509,0d4601,value,,UIN,,,
r,,,PredWaterpressureMaxPressure,Pred_Waterpressure_MaxPressure_DK,,,b509,0d4701,value,,UIN,,,
r,,,PredWaterpressureSwitchingPoint,Pred_Waterpressure_SwitchingPoint_DK,,,b509,0d4801,value,,UIN,,,
