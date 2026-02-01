type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 heating partload,,,b509,0db000,value,,SIN,10,kW,Heating part load
w,,install,PartloadHcKW,d.00 heating partload,,,b509,0eb000,value,,SIN,10,kW,Heating part load
r,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0d6400,value,,UCH,,min,minutes
w,,install,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0e6400,value,,UCH,,min,minutes
r,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0d2100,value,,UCH,,min,minutes
w,,install,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0e2100,value,,UCH,,min,minutes
r,,,StorageTemp,d.04 Temp storage / she: current storage tank sensor temperature,,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint: Flow temperature target value or return target value when return regulation is set,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,StorageTempDesired,d.07 Storage setpoint: Storage temperature target value,,,b509,0d0400,value,,D2C,,°C,temperature
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: internal heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 external pump: External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 storage load pump: tank load pump demand,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,WPPWMPower,d.15 WP_PWMPower_DK: Output of pwm pump,,,b509,0d7300,value,,UCH,,%,
r,,,DCRoomthermostat,d.16 room thermostat 24 V: External controls heat demand (Clamp 3'-4'),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 DHW demand: domestic hot water (tapping or tank contact) demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 operation mode: Wintermode active,,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,SourcePressureSwitch,d.24 AirPressureSwitch_DK: contact of the air pressure switch,,,b509,0d0300,value,,UCH,0=no;1=yes,,
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,rpm,fan speed actual value
r,,,FlowTemp,d.40 TFT_DK: flow temperature,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return: return temperature,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,BlockSensor,d.43 Block_Sensor_DK: boiler block temperature,,,b509,0d9300,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,OutdoorstempSensor,d.47 Temp outside: Outside temperature (uncorrected value),,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowHysteresisON,d.53 FlowHysteresis_ON_DK: Adjustment of the switch on hysteresis,,,b509,0d1601,value,,D2C,,°C,temperature
w,,install,FlowHysteresisON,d.53 FlowHysteresis_ON_DK: Adjustment of the switch on hysteresis,,,b509,0e1601,value,,D2C,,°C,temperature
r,,,FlowHysteresisOff,d.54 FlowHysteresis_OFF_DK: Adjustment of the switch off hysteresis,,,b509,0d1701,value,,D2C,,°C,temperature
w,,install,FlowHysteresisOff,d.54 FlowHysteresis_OFF_DK: Adjustment of the switch off hysteresis,,,b509,0e1701,value,,D2C,,°C,temperature
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,PartloadHwcKW,d.77 Partload_DHW_KW_DK,,,b509,0db100,value,,SIN,10,kW,DHW part load
w,,install,PartloadHwcKW,d.77 Partload_DHW_KW_DK,,,b509,0eb100,value,,SIN,10,kW,DHW part load
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 Status DCF 77: DCF status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF receiver state
r,,,Password,d.97 Password_DK,,,b509,0d4904,value,,UCH,,,
w,,service,Password,d.97 Password_DK,,,b509,0e4904,value,,UCH,,,
r,,,PhoneNumber,d.98 PhoneNumber_DK,,,b509,0d8104,value,,HEX:8,,,phone number
w,,service,PhoneNumber,d.98 PhoneNumber_DK,,,b509,0e8104,value,,HEX:8,,,phone number
r,,,Language,d.99 Language_DK: language selection,,,b509,0d8204,value,,UCH,,,
w,,service,Language,d.99 Language_DK: language selection,,,b509,0e8204,value,,UCH,,,
r,,,PumpspeedDesired,d.14 PumpspeedSetpoint: PWM pump speed,,,b509,0da100,value,,UCH,,%,
r,,,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0db300,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0eb300,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter,,Pump mode
r,,,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0dd900,value,,D2C,,°C,temperature
w,,install,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0ed900,value,,D2C,,°C,temperature
r,,,OptionalRelais,d.26 OptionalRelais_DK,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install,OptionalRelais,d.26 OptionalRelais_DK,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
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
r,,,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0da500,value,,D2C,,°C,temperature
w,,install,FlowsetHcMax,d.71 Max value flow temp: Adjustment of maximum central heating setpoint range (maximum endposition of potmeter),,,b509,0ea500,value,,D2C,,°C,temperature
r,,,StorageLoadTimeMax,d.75 Max load time storage: Maximum charging time for a storage without own control,,,b509,0d6600,value,,UCH,,min,minutes
w,,install,StorageLoadTimeMax,d.75 Max load time storage: Maximum charging time for a storage without own control,,,b509,0e6600,value,,UCH,,min,minutes
r,,,CodingResistor,d.76 SD_CodingResistor_DK,,,b509,0d9200,value,,HEX:3,,,boiler identification resistor
r,,,FlowsetHwcMax,d.78 Max value flow temp storage: storage charging temperature limit (target flow temperature in storage mode),,,b509,0da600,value,,D2C,,°C,temperature
w,,install,FlowsetHwcMax,d.78 Max value flow temp storage: storage charging temperature limit (target flow temperature in storage mode),,,b509,0ea600,value,,D2C,,°C,temperature
r,,,HcHours,d.80 operating hours CH: central heating operation hours,,,b509,0d2800,value,,UIN,,h,hours
r,,,HwcHours,d.81 Operating hours DHW: water heating operation hours,,,b509,0d2200,value,,UIN,,h,hours
r,,,HcStarts,d.82 Burner starts heating,,,b509,0d2900,value,,UIN,-100,,cycles in heating mode
r,,,HwcStarts,d.83 Burner starts DHW,,,b509,0d2300,value,,UIN,-100,,Cycles in hot water operation
r,,,HoursTillService,d.84 Hours till next service: Maintenance indicator:Number of hours until the next maintenance,,,b509,0d2004,value,,UIN,,h,hours
w,,install,HoursTillService,d.84 Hours till next service: Maintenance indicator:Number of hours until the next maintenance,,,b509,0e2004,value,,UIN,,h,hours
r,,,GasType,"d.87 Gas type: setting of gas type 0=Erdgas, 1= Flüssiggas 50mbar, 2= Flüssiggas 30mbar",,,b509,0dfe00,value,,UCH,,,
w,,install,GasType,"d.87 Gas type: setting of gas type 0=Erdgas, 1= Flüssiggas 50mbar, 2= Flüssiggas 30mbar",,,b509,0efe00,value,,UCH,,,
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0db500,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0eb500,value,,UCH,,,
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d7201,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e7201,value,,UCH,0=no;1=yes,,
r,,,WaterPressure,Waterpressure: water pressure,,,b509,0d0200,press,,FLT,,bar,pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,TempGradientFailure,TempGradientFailure_DK: Number of cut offs of the boilers cause of to high gradient (S.54),,,b509,0d1100,value,,UCH,,°C,temperature
r,,,TempDiffBlock,TempDiffBlock_DK: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,temperature
r,,,TempDiffFailure,TempDiffFailure_DK: Number of cut offs of the boilers cause of to high/incorrect differences of flow/return temperatures,,,b509,0d1300,value,,UCH,,°C,temperature
r,,,PumpHours,Pump operation hours,,,b509,0d1400,value,,UIN,,h,hours
r,,,HcPumpStarts,CH_PumpCommunt_DK: pump switchings,,,b509,0d1500,value,,UIN,,,start count
r,,,FanHours,Fan operation hours,,,b509,0d1b00,value,,UIN,,h,hours
r,,,FanStarts,FanCommunt_DK: commutations of the fan,,,b509,0d1c00,value,,UIN,,,start count
r,,,OverflowCounter,OverflowCounter_DK: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,temperature
r,,,MinIgnitiontime,min_Ignitiontime_DK,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,StorageTempMax,Temp storage max: maximum temperature measured by the external tank sensor,,,b509,0d3600,value,,D2C,,°C,temperature
r,,,FlowTempMax,TFT_max_DK: maximum temperature measured by the flow sensor,,,b509,0d3700,value,,D2C,,°C,temperature
r,,,FanPWMSum,Fan_PWM_Sum_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,FanPWMTest,Fan_PWM_Test_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK: Predictive Maintenance data,,,b509,0d3d00,value,,D2C,,°C,temperature
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,hours
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,start count
r,,,CounterStartAttempts3,CounterStartAttempts3_DK: unsuccessfull ignitions in the third attempt,,,b509,0d8100,value,,UCH,,°C,temperature
r,,,CounterStartAttempts4,CounterStartAttempts4_DK: unsuccessfull ignitions in the fourth attempt,,,b509,0d8200,value,,UCH,,°C,temperature
r,,,ReturnTempMax,TRT_max_DK: max. return temperature,,,b509,0dbe00,value,,D2C,,°C,temperature
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK: summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK: number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK: Predictive Maintenance data,,,b509,0dc500,value,,ULG,,,
w,,install,PrEnergySumHwc1,PrEnergySumDHW1_DK: Predictive Maintenance data,,,b509,0ec500,value,,ULG,,,
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Predictive Maintenance data,,,b509,0dc600,value,,ULG,,,
w,,install,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Predictive Maintenance data,,,b509,0ec600,value,,ULG,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK: Predictive Maintenance data,,,b509,0df000,value,,UIN,,mbar,pressure
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK: Predictive Maintenance data,,,b509,0df100,value,,UCH,,,
r,,,PrAPSCounter,PrAPSCounter_DK: Predictive Maintenance data,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum_DK: Predictive Maintenance data,,,b509,0df300,value,,UIN,,s,seconds
r,,,CurrentPartload,CurrentPartload,,,b509,0d0001,value,,UIN,,kW,Current calculated partload
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue_DK,,,b509,0df400,value,,SIN,,,Predictive Maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1_DK: Predictive Maintenance data,,,b509,0df500,value,,ULG,,,
w,,install,PrEnergySumHc1,PrEnergySumCH1_DK: Predictive Maintenance data,,,b509,0ef500,value,,ULG,,,
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK: Predictive Maintenance data,,,b509,0df600,value,,ULG,,,
w,,install,PrEnergyCountHc1,PrEnergyCountCH1_DK: Predictive Maintenance data,,,b509,0ef600,value,,ULG,,,
r,,,ExternalFlowTempDesired,external flowsetpoint: Flow target temperature from external regulator to terminal 7-8-9,,,b509,0d2500,value,,D2C,,°C,temperature
r,,,ExternalHwcSwitch,DHWSwitch_DK: Demand external tank (via contact),,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,Flame,Flame,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,IFCFault,SD_IFC_Fault_DK: IFC error,,,b509,0d0700,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Changes_DSN_DK: Numbers adjusting (storing) the DSN,,,b509,0d0c00,value,,UCH,,,
r,,,FuelValve,fuel valve: Activation signal of the gasvalve (activated via micrcontroller),,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,SD_VolatileLockout_DK: TRUE: STB failures is volatileFALSE: STB failure is not volataile,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,Faultlist,Faultlist_DK,,,b509,0d2600,value,,HEX:10,,,last 10 fault codes
r,,,ModulationDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK: ioni/adc value from the flame control circuit,,,b509,0d2f00,value,,UIN,,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,EbusSourceOn,EbusSourceOn_DK: Activation signal of the eBus source,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,Fluegasvalve,Fluegasvalve_DK: flue gasvalve activation signal,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,ExternalFaultmessage,External_Faultmessage_DK: external fault message,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,FuelValveFeedback1,fuel valve feedback 1: feedback gasvalve (from ASIC),,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,FuelValveFeedback2,fuel valve feedback 2: feedback gasvalve (from Microcontroller),,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,Ignitor,SD_Ignitor_DK: igniton activated,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,Fan,Fan_DK: Fan activation signal,,,b509,0d4a00,value,,UCH,0=no;1=yes,,
r,,,HwcTypes,DHW_Types_DK: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,TemplimiterFault,SD_TL_Fault_DK: temperature limiter error,,,b509,0d4d00,value,,UCH,240=off;15=on,,
r,,,ADCOk,SD_ADC_ok_DK: internal electronic error,,,b509,0d4e00,value,,UCH,240=off;15=on,,
r,,,FanFault,SD_Fan_Fault_DK: Fan error,,,b509,0d5300,value,,UCH,240=off;15=on,,
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,FunctionFlags,FunctionFlags_DK: differrent function flags,,,b509,0d5f00,value,,UCH,,,
r,,,ParamToken,ParamToken_DK: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,ExpertlevelMain_ReturnTemp,ReturnTemperature_DK: external return sensor,,,b509,0d6b00,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,SD_Temperaturelimiter_DK: feedback signal of the temperature limiter,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,SRIFCEEFaultCause,SR_IFC_EE_FaultCause_DK: current IFC fault cause,,,b509,0d7a00,value,,UCH,,,
r,,,ParamReplication,ParamReplication_DK: activated the parameter managment again,,,b509,0d7c00,value,,UCH,0=no;1=yes,,
r,,,AnodeINFeedback,Anode_IN_Feedback_DK: feedback signal of the anode,,,b509,0d7e00,value,,UCH,0=no;1=yes,,
r,,,EbusVoltage,EbusVoltage_DK: feedback signal of the eBus source,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,SRTFINSDFeedback,SR_TF_IN_SD_Feedback_DK: Thermal fuse error,,,b509,0d8400,value,,UCH,240=off;15=on,,
r,,,DemandCirPump,Demand_CirculationPump_DK: remote control activated accessory circulation pump,,,b509,0d8800,value,,UCH,0=no;1=yes,,
r,,,FluegasvalveOpen,FluegasvalveOpen_DK: feedback of the flue gas valve,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,FunctionFault,Function_Fault_DK: boiler stopped by a internal function fault,,,b509,0d9500,value,,UCH,0=no;1=yes,,
r,,,Testbyte,Testbyte_DK: Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN_DK: DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,TargetFan_Speed_Output_DK,,,b509,0d9f00,value,,UIN,,rpm,output fan speed
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,AdvancedPowerValues,AdvancedPowerValues_DK,,,b509,0dae00,value,,HEX:9,,,min. / max powervalues
r,,,DSNStart,DSN Start adress,,,b509,0dbc00,value,,UIN,,,
r,,,Shiftloadtankpump,Shiftloadtankpump_DK: current status of the shift load pump,,,b509,0db400,value,,UCH,0=no;1=yes,,
r,,,ExtStorageModulCon,ExtTankModulCon_DK: external tank modul connected (VR65),,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,SRSyphonINSDSwitch,SR_Syphon_IN_SD_Switch_DK: feedback of the syphon switch contact,,,b509,0dcf00,value,,UCH,240=no;15=yes,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: all IFC faults are volataile,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the aplliance,,,b509,0dda00,value,,UCH,,,
r,,,FuelValveFeedback3,fuel valve feedback 3: Gasvalve activation signal (from Microcontroller),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: Initialisation off all EEPROM values (done in the production),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,DefaultSettingEEPROM,DefaultSettingEEPROM_DK: default value setting off all EEPROM values (done in the production),,,b509,0ddd00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,TimerInputCH_DK: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,rpm,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,rpm,Maximum Fan speed of the appliance
r,,,RManagEE_VirtualPartloadEnable,TR_Manag_EE.Virtual_Partload_Enable_DK: enable the adaptive CH- and or DHW-partload calulation,,,b509,0de300,value,,UCH,,,
w,,install,RManagEE_VirtualPartloadEnable,TR_Manag_EE.Virtual_Partload_Enable_DK: enable the adaptive CH- and or DHW-partload calulation,,,b509,0ee300,value,,UCH,,,
r,,,ExternGasvalve,ExternGasvalve_DK: external gasvalve activated,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,btime,,BTI,,,time,bdate,,BDA,,,date
r,,,InitialisationSequence,InitialisationSequence_DK: value:0 -> off1-> full initialisation incl. all defaultvalues (done in the production),,,b509,0d9a01,value,,UCH,,,
r,,,FlowSetPotmeter,FlowSetPotmeter: flow setpoint potentiometer,,,b509,0df003,value,,D2C,,°C,temperature
r,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0df103,value,,D2C,,°C,temperature
r,,,HwcSwitch,DHWSwitch: DHW on/off,,,b509,0df303,value,,UCH,0=off;1=on,,
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,BoilerType2,BoilerType_2_DK: second Boiler typ of the bmu,,,b509,0d0c01,value,,ULG,,,
r,,,StatusList,StatusList_DK,,,b509,0d1101,value,,HEX:10,,,List of the last 10 status numbers
r,,,LimpHomeModeEEHistoryList,LimpHomeMode_EE_History_List_DK,,,b509,0d8b01,uin,,UIN,,,history of the last 5 limp home modes,uin_1,,UIN,,,,uin_2,,UIN,,,,uin_3,,UIN,,,,uin_4,,UIN,,,
r,,,AWPCEEMinThreshold,AWPC_EE_MinThreshold_DK,,,b509,0d1201,value,,SIN,10,bar,minimum waterpressure threshold
w,,install,AWPCEEMinThreshold,AWPC_EE_MinThreshold_DK,,,b509,0e1201,value,,SIN,10,bar,minimum waterpressure threshold
r,,,AWPCEEMaxThreshold,AWPC_EE_MaxThreshold_DK,,,b509,0d1301,value,,SIN,10,bar,maximum waterpressure threshold
w,,install,AWPCEEMaxThreshold,AWPC_EE_MaxThreshold_DK,,,b509,0e1301,value,,SIN,10,bar,maximum waterpressure threshold
r,,,Currentservice,Current service message,,,b503,0002,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Servicehistory,Service message history,,,b503,0102,index,m,UCH,,,,status,,UCH,,,Status,time,,VTM,,,time,date,,HDA:3,,,date,error,,UIN,,,error number
w,,install,Clearservicehistory,Clear service message history,,,b503,0202,cleared,s,UCH,0=no;1=yes,,
