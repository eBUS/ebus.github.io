type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0d6c00,value,,UCH,,kW,
w,,install,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0e6c00,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0d6400,value,,UCH,,min,minutes
w,,install,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0e6400,value,,UCH,,min,minutes
r,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0d2100,value,,UCH,,min,minutes
w,,install,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0e2100,value,,UCH,,min,minutes
r,,,HwcTemp,d.03 Temp DHW: Hot water flow temperature,,,b509,0d0100,value,,D2C,,°C,temperature
r,,,StorageTemp,d.04 Storage temperature: Current temperature for warm start sensor (combi boiler) / Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: internal heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 external pump: External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,DCRoomthermostat,d.16 room thermostat 24 V: External controls heat demand (Clamp 3'-4'),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 DHW demand: domestic hot water (tapping or tank contact) demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingDemand,d.23 Heating demand,,,b509,0d4000,value,,UCH,0=no;1=yes,,
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d7100,value,,UCH,0=no;1=yes,,
r,,,PrimaryCircuitFlowRate,d.29 PrimaryCircuitFlowRate_DK: primary circuit water flow rate,,,b509,0dfb00,value,,UIN,100,,
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,HwcWaterflow,d.36 DHW waterflow: domestic hot water flow sensor,,,b509,0d5500,value,,UIN,100,,
r,,,FlowTemp,d.40 TFT_DK: flow temperature,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return: return temperature,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,OutdoorstempSensor,d.47 Temp outside: Outside temperature (uncorrected value),,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,NightTimeOffset,d.62 Night-time offset,,,b509,0d3f04,ign,,IGN:7,,,Night-time offset (Specific function for Belgium and NL: RT does not stop the burner but change the set-point. Do not use in other countries),uch,,UCH,,,
w,,install,NightTimeOffset,d.62 Night-time offset,,,b509,0e3f04,ign,,IGN:7,,,Night-time offset (Specific function for Belgium and NL: RT does not stop the burner but change the set-point. Do not use in other countries),uch,,UCH,,,
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d7400,value,,UCH,0=no;1=yes,,
r,,,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0db300,value,,UCH,0=off;1=on,,
w,,service,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0eb300,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
r,,,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0da000,value,,UCH,,,
w,,install,SecondPumpMode,"d.19 Mode of 2 speed pump: Operating mode of the two-stage heating pump0: burner mode = 2, pre/post-run = 1; 1: CH + post-run = 1, DHW = 2, 2: as 1 but rotation speed in CH is dependent of heating part load, (defaultsetting)3: always stage 2",,,b509,0ea000,value,,UCH,,,
r,,,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0dd900,value,,D2C,,°C,temperature
w,,install,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0ed900,value,,D2C,,°C,temperature
r,,,AircontrolOk,d.24 SD_AircontrolOk_DK: Air pressure switch,,,b509,0d0300,value,,UCH,240=off;15=on,,
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
r,,,GasvalveMinPowPos,"d.52 Offset for minimum steppermotor position: Pmin adjustment . To adjust, see Gas conversion",,,b509,0de900,value,,UCH,,,
w,,service,GasvalveMinPowPos,"d.52 Offset for minimum steppermotor position: Pmin adjustment . To adjust, see Gas conversion",,,b509,0ee900,value,,UCH,,,
r,,,GasvalveMaxPowPos,"d.53 Offset for maximum steppermotor position: Pmax adjustment . To adjust, see Gas conversion",,,b509,0dea00,value,,SCH,,,
w,,service,GasvalveMaxPowPos,"d.53 Offset for maximum steppermotor position: Pmax adjustment . To adjust, see Gas conversion",,,b509,0eea00,value,,SCH,,,
r,,,DeactivationsTemplimiter,d.60 Number STL cut off: Number of safety temperature limiter cut offs,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,"d.61 Number ignition device cut off: number of lock outs (unsuccessfull ignitons in the last attempt, flame failure)",,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Max ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,WarmstartEnable,d.66 Warmstart Enable: 0 = Warmstart activated 1 = Warmstart de-activated,,,b509,0d5b00,value,,UCH,0=off;1=on,,
w,,service,WarmstartEnable,d.66 Warmstart Enable: 0 = Warmstart activated 1 = Warmstart de-activated,,,b509,0e5b00,value,,UCH,0=off;1=on,,
r,,,CounterStartattempts1,d.68 ignition attempts 1: unsuccessfull ignitions in the first attempt,,,b509,0d6e00,value,,UCH,,°C,temperature
r,,,CounterStartattempts2,d.69 ignition attempts 2: unsuccessfull ignitions in the second attempt,,,b509,0d6f00,value,,UCH,,°C,temperature
r,,,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0da500,value,,D2C,,°C,temperature
w,,install,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0ea500,value,,D2C,,°C,temperature
r,,,HcHours,d.80 operating hours CH: central heating operation hours,,,b509,0d2800,value,,UIN,,h,hours
r,,,HwcHours,d.81 Operating hours DHW: water heating operation hours,,,b509,0d2200,value,,UIN,,h,hours
r,,,HcStarts,d.82 Burner starts heating,,,b509,0d2900,value,,UIN,-100,,cycles in heating mode
r,,,HwcStarts,d.83 Burner starts DHW,,,b509,0d2300,value,,UIN,-100,,Cycles in hot water operation
r,,,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0dec00,value,,UCH,,kW,
w,,install,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0eec00,value,,UCH,,kW,
r,,,SpecialAdj,"d.88 SpecialAdj: switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay",,,b509,0deb00,value,,UCH,,,
w,,install,SpecialAdj,"d.88 SpecialAdj: switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay",,,b509,0eeb00,value,,UCH,,,
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,service,SetFactoryValues,d.96 Set factory settings,,,b509,0e6804,value,,UCH,0=no;1=yes,,
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
w,,,FlowSetPotmeter,FlowSetPotmeter: flow setpoint potentiometer,,,b509,0ef003,value,,D2C,,°C,temperature
r,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0df103,value,,D2C,,°C,temperature
w,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0ef103,value,,D2C,,°C,temperature
r,,,HeatingSwitch,Heating Switch: Wintermode active,,,b509,0df203,value,,UCH,0=off;1=on,,
w,,,HeatingSwitch,Heating Switch: Wintermode active,,,b509,0ef203,value,,UCH,0=off;1=on,,
r,,,HwcSwitch,DHWSwitch: DHW on/off,,,b509,0df303,value,,UCH,0=off;1=on,,
w,,,HwcSwitch,DHWSwitch: DHW on/off,,,b509,0ef303,value,,UCH,0=off;1=on,,
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
