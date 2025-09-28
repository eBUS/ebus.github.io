type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
*[id_sw],scan,,,,SW
[id_sw>=413]r,,,APCComStatus,d.92 APC_ComStatus_DK: actoSTORE communication status,,,b509,0d6200,value,,UCH,,,
[id_sw>=413]r,,,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0d9704,value,,UCH,,,Legionella protection for internal storage
[id_sw>=413]w,,install_NOT_YET_CONFIRMED,APCLegioProtection,d.74 APC_LegioProtection,,,b509,0e9704,value,,UCH,,,Legionella protection for internal storage
r,,,PartloadHcKW,d.00 heating partload,,,b509,0d6c00,value,,UCH,,kW,Heating part load
w,,install_NOT_YET_CONFIRMED,PartloadHcKW,d.00 heating partload,,,b509,0e6c00,value,,UCH,,kW,Heating part load
r,,,WPPostrunTime,d.01 central heating overrun time,,,b509,0d6400,value,,UCH,,min,water pump overrun time for heating mode
w,,install_NOT_YET_CONFIRMED,WPPostrunTime,d.01 central heating overrun time,,,b509,0e6400,value,,UCH,,min,water pump overrun time for heating mode
r,,,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0d2100,value,,UCH,,min,Maximum burner anti cycling period at 20°C flow temperature set point
w,,install_NOT_YET_CONFIRMED,BlockTimeHcMax,d.02 Max blocking time CH,,,b509,0e2100,value,,UCH,,min,Maximum burner anti cycling period at 20°C flow temperature set point
r,,,HwcTemp,d.03 Temp DHW: Hot water flow temperature,,,b509,0d1600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Storage temperature: Current temperature for warm start sensor (combi boiler) / Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint: Flow temperature target value or return target value when return regulation is set,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,HwcTempDesired,d.06 DHW setpoint: Hot water temperature target value,,,b509,0dea03,value,,D2C,,°C,temperature
r,,,StorageTempDesired,d.07 Storage temperature set point: Warm start temperature value (combi boiler only); Storage temperature target value (system boiler only),,,b509,0d0400,value,,D2C,,°C,temperature
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0df304,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: Internal central heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 External heating pump: External central heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 storage load pump: tank load pump demand,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0da100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
w,,install_NOT_YET_CONFIRMED,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0ea100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
r,,,PumpPower,d.15 Current heating pump power: Current central heating pump power,,,b509,0d7300,value,,UCH,,,
r,,,DCRoomthermostat,d.16 Room thermostat 24 V: xternal controls heat demand (Clamp 3-4),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 DHW demand: Domestic hot water demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 Heating on/off switch,,,b509,0df203,value,,UCH,0=off;1=on,,Central heating on/off switch
w,,install_NOT_YET_CONFIRMED,HeatingSwitch,d.23 Heating on/off switch,,,b509,0ef203,value,,UCH,0=off;1=on,,Central heating on/off switch
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Current fan speed,,,b509,0d8300,value,,UIN,,rpm,Current fan speed
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,HwcWaterflow,d.36 DHW waterflow: domestic hot water flow sensor,,,b509,0d5500,value,,UIN,100,,
r,,,FlowTemp,d.40 Supply temperature: CH supply temperature sensor (VF2),,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Return temperature: CH return temperature sensor,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,OutdoorstempSensor,d.47 Outdoor temperature: Outdoor temperature sensor (uncorrected value) value and status,,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF receiver state
r,,,ExternalHwcSwitch,Demand external HWC tank (via contact),,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,WaterPressure,CH water pressure,,,b509,0d0200,press,,FLT,,bar,pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,Flame,Flame,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Changes_DSN_DK: Numbers adjusting (storing) the DSN,,,b509,0d0c00,value,,UCH,,,
r,,,GasvalveUC,SD_Gasvalve_uC_DK: Activation signal of the gasvalve (activated via micrcontroller),,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,SD_VolatileLockout_DK: TRUE: STB errors are locking,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,ModulationDesired,Modulationsetpoint_DK,,,b509,0d2e00,value,,SIN,10,%,Modulation set point
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC: ioni/adc value from the flame control circuit,,,b509,0d2f00,value,,UIN,,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,EbusSourceOn,EbusSourceOn_DK: Activation signal of the eBus source,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,Fluegasvalve,FluegasvalveOpen_DK: Feedback from the flue gas valve,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,ExternalFaultmessage,External_Faultmessage_DK: external fault message,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,GasvalveASICFeedback,SD_Gasvalve_ASICFeedback_DK: Gas valve feedback (from ASIC),,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,GasvalveUCFeedback,SD_Gasvalve_uCFeedback_DK: Gas valve feedback (from micro controller),,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,Ignitor,SD_Ignitor_DK: Ignition status,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,HwcTypes,DHW_Types_DK: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,HwcImpellorSwitch,DHW impellor switch: DHW demand from impeller switch,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,WarmstartDemand,WarmstartDemand: Status of warmstarr mode,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,BoilerType,BoilerType: Boiler typ of the BMU,,,b509,0d5e00,value,,UCH,,,
r,,,ParamToken,ParamToken: Token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,ReturnTempExternal,Ext. return temperature: External return temperature sensor,,,b509,0d6b00,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FloorHeatingContact,Floor heating contact,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,Feedback of the temperature limiter sensor,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,EbusVoltage,eBUS voltage feedback,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,Flue flap open: Exhaust (flue) flap open,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte (relevant for testers),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,Target fan speed,,,b509,0d9f00,value,,UIN,,rpm,Target fan speed
r,,,PowerValue,Power number,,,b509,0daa00,value,,HEX:6,,,Power value of the boiler (minimum and maximum)
r,,,Statenumber,Statenumber: Status number,,,b509,0dab00,value,,UCH,,,
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK: Water pressure branch control switch,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN starting address,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,VR65 memory module: External memory module (VR65) connected,,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage: Second stage of the pump activated,,,b509,0ded00,value,,UCH,0=off;1=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Temperature limiter (1 = NTC; 0 = switching contact),,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV: All IFC errors are non-volatile,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,DisplayMode,DisplayMode: Display mode of the appliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,Gasventil 3: Gas valve switching signal (from the processor),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: EEPROM initialization (for production),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,Eingang Schaltuhr: Timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,Minimum fan speed,,,b509,0ddf00,value,,UIN,,rpm,Fan minimum speed
r,,,FanMaxSpeedOperation,Maximum fan speed,,,b509,0de000,value,,UIN,,rpm,Fan maximum speed
r,,,ExternGasvalve,External gas valve: External solenoid valve,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF date/time,,,b509,0de500,vti,,VTI,,,,hda,,HDA,,,
r,,,HwcSwitch,DHW switch,,,b509,0df303,value,,UCH,0=off;1=on,,Domestic hot water switch
w,,install_NOT_YET_CONFIRMED,HwcSwitch,DHW switch,,,b509,0ef303,value,,UCH,0=off;1=on,,Domestic hot water switch
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Serial number AI
r,,,ReturnRegulation,d.17 Return control,,,b509,0db300,value,,UCH,0=off;1=on,,Activation of the return control
w,,install_NOT_YET_CONFIRMED,ReturnRegulation,d.17 Return control,,,b509,0eb300,value,,UCH,0=off;1=on,,Activation of the return control
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
w,,install_NOT_YET_CONFIRMED,HcPumpMode,d.18 CH pump mode,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
r,,,HwcTempMax,d.20 Maximum DHW temperature,,,b509,0dd900,value,,D2C,,°C,Max. Speichersollwert. Limits the maximum adjustment range of the potentiometer (right stop).
w,,install_NOT_YET_CONFIRMED,HwcTempMax,d.20 Maximum DHW temperature,,,b509,0ed900,value,,D2C,,°C,Max. Speichersollwert. Limits the maximum adjustment range of the potentiometer (right stop).
r,,,OptionalRelais,d.26 Optional relay,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of optional relay
w,,install_NOT_YET_CONFIRMED,OptionalRelais,d.26 Optional relay,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of optional relay
r,,,AccessoriesOne,d.27 Accessory relay 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 1
w,,install_NOT_YET_CONFIRMED,AccessoriesOne,d.27 Accessory relay 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 1
r,,,AccessoriesTwo,d.28 Accessory relay 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 2
w,,install_NOT_YET_CONFIRMED,AccessoriesTwo,d.28 Accessory relay 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Function of accessory relay 2
r,,,FanSpeedOffsetMin,d.50 Minimum fan speed offset,,,b509,0da700,value,,SIN,,rpm,Fan minimum speed offset
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMin,d.50 Minimum fan speed offset,,,b509,0ea700,value,,SIN,,rpm,Fan minimum speed offset
r,,,FanSpeedOffsetMax,d.51 Maximum fan speed offset,,,b509,0da800,value,,SIN,,rpm,Fan maximum speed offset
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMax,d.51 Maximum fan speed offset,,,b509,0ea800,value,,SIN,,rpm,Fan maximum speed offset
r,,,SolPostHeat,d.58 solar function,,,b509,0d7304,value,,UCH,,,special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti)
w,,install_NOT_YET_CONFIRMED,SolPostHeat,d.58 solar function,,,b509,0e7304,value,,UCH,,,special DHW functions0: solar function deactivated (default)1: solar function activated and DHW setpoint minimum 60°C2: solar function activated and DHW setpoint like combi standard (min 35°)3: DHW setpoint minimum 60°C (poti)
r,,,DeactivationsTemplimiter,d.60 Shutdowns by the temp limiter: Number of shutdowns by the safety temperature limiter,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,d.61 Ignition failures: Number of ignition failures (unsuccessful last-run or faulty flame signal),,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 average ignition time,,,b509,0d2d00,value,,UCH,10,s,average ignition time
r,,,MaxIgnitiontime,d.65 Maximum ignition time,,,b509,0d2c00,value,,UCH,10,s,maximum ignition time
r,,,CounterStartattempts1,d.68 Failed ignition (1nd attempt): Number of unsuccessful ignition attempts (in the first attempt),,,b509,0d6e00,value,,UCH,,°C,temperature
r,,,CounterStartattempts2,d.69 Failed ignition (2nd attempt): Number of unsuccessful ignition attempts (in the second attempt),,,b509,0d6f00,value,,UCH,,°C,temperature
r,,,ValveMode,d.70 diverter valve position,,,b509,0d2a04,value,,UCH,,,"Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position"
w,,install_NOT_YET_CONFIRMED,ValveMode,d.70 diverter valve position,,,b509,0e2a04,value,,UCH,,,"Set diverter valve position 0=normal mode, 1=middle position (GB), 2=permanent CH position"
r,,,FlowsetHcMax,d.71 CH max flow temperature,,,b509,0d0e04,value,,D2C,,°C,Setting the maximum flow setpoint in heating mode (with left-hand stop of the potentiometer)
w,,install_NOT_YET_CONFIRMED,FlowsetHcMax,d.71 CH max flow temperature,,,b509,0e0e04,value,,D2C,,°C,Setting the maximum flow setpoint in heating mode (with left-hand stop of the potentiometer)
r,,,HwcPostrunTime,d.72 postrun time storage,,,b509,0d1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
w,,install_NOT_YET_CONFIRMED,HwcPostrunTime,d.72 postrun time storage,,,b509,0e1104,value,,UCH,-10,s,"Pump overrun time after charging a storage (charging through C1-C2, external/internal tank with tank sensor)"
r,,,WarmstartOffset,d.73 Warmstart offset,,,b509,0d1004,value,,D2C,,°C,Offset for warm start target value (combination boilers only)
w,,install_NOT_YET_CONFIRMED,WarmstartOffset,d.73 Warmstart offset,,,b509,0e1004,value,,D2C,,°C,Offset for warm start target value (combination boilers only)
r,,,StorageLoadTimeMax,d.75 Maximum storage time,,,b509,0d6600,value,,UCH,,min,Maximum water storing time for storage without own controls
w,,install_NOT_YET_CONFIRMED,StorageLoadTimeMax,d.75 Maximum storage time,,,b509,0e6600,value,,UCH,,min,Maximum water storing time for storage without own controls
r,,,CodingResistor,d.76 SD_CodingResistor_DK,,,b509,0d9200,value,,HEX:3,,,boiler identification resistor
r,,,PartloadHwcKW,d.77 hot water partload,,,b509,0d0804,value,,UCH,,kW,storage part load (storage charging capacity limit)
w,,install_NOT_YET_CONFIRMED,PartloadHwcKW,d.77 hot water partload,,,b509,0e0804,value,,UCH,,kW,storage part load (storage charging capacity limit)
r,,,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0da600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
w,,install_NOT_YET_CONFIRMED,FlowsetHwcMax,d.78 Max value flow temp storage,,,b509,0ea600,value,,D2C,,°C,storage charging temperature limit (target flow temperature in storage mode)
r,,,HcHours,d.80 Hz. Hours in CH mode: Hours of operation in heating mode,,,b509,0d2800,value,,UIN,,h,hours
r,,,HwcHours,d.81 Hours in DHW mode: Hours of DHW operation,,,b509,0d2200,value,,UIN,,h,hours
r,,,HcStarts,d.82 CH mode starts,,,b509,0d2900,value,,UIN,-100,,Number of CH mode starts
r,,,HwcStarts,d.83 DHW mode starts,,,b509,0d2300,value,,UIN,-100,,Number of DHW mode starts
r,,,HoursTillService,d.84 Hours till service,,,b509,0dac00,value,,UIN,,h,Hours left before service is needed
w,,install_NOT_YET_CONFIRMED,HoursTillService,d.84 Hours till service,,,b509,0eac00,value,,UIN,,h,Hours left before service is needed
r,,,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0dec00,value,,UCH,,kW,Minimal power to avoid condensation
w,,install_NOT_YET_CONFIRMED,AntiCondensValue,d.85 Minimal power to avoid condensation,,,b509,0eec00,value,,UCH,,kW,Minimal power to avoid condensation
r,,,SpecialAdj,d.88 SpecialAdj,,,b509,0d7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
w,,install_NOT_YET_CONFIRMED,SpecialAdj,d.88 SpecialAdj,,,b509,0e7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
r,,,DSNOffset,d.93 Hardware ID,,,b509,0d3004,value,,UCH,,,Hardware ID (DSN)
w,,service_NOT_YET_CONFIRMED,DSNOffset,d.93 Hardware ID,,,b509,0e3004,value,,UCH,,,Hardware ID (DSN)
r,,,SetFactoryValues,d.96 Reset to defaults,,,b509,0d6804,value,,UCH,0=no;1=yes,,Reset to factory defaults
w,,install_NOT_YET_CONFIRMED,SetFactoryValues,d.96 Reset to defaults,,,b509,0e6804,value,,UCH,0=no;1=yes,,Reset to factory defaults
r,,,TempGradientFailure,Temperature gradient failures: Number of boiler shutdown due to high gradient (S.54),,,b509,0d1100,value,,UCH,,°C,temperature
r,,,TempDiffBlock,TempDiffBlock: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,temperature
r,,,TempDiffFailure,TempDiffFailure: Number of shutdowns due to incorrect difference between supply and return temperatures,,,b509,0d1300,value,,UCH,,°C,temperature
r,,,PumpHours,Betriebsstunden Pumpe: Pump operating hours,,,b509,0d1400,value,,UIN,,h,hours
r,,,HcPumpStarts,CH_PumpCommunt: Pump times switched on,,,b509,0d1500,value,,UIN,,,start count
r,,,ValveStarts,3WV Schaltspiele: Number of times 3WV value operated,,,b509,0d1a00,value,,UIN,,,start count
r,,,FanHours,Fan operating hours: Operating hours of the fan,,,b509,0d1b00,value,,UIN,,h,hours
r,,,FanStarts,Fan number of starts: Number of times fan switched on,,,b509,0d1c00,value,,UIN,,,start count
r,,,OverflowCounter,Overflow PM counter: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,temperature
r,,,MinIgnitiontime,minimum ignition time,,,b509,0d2b00,value,,UCH,10,s,minimum ignition time
r,,,Maintenancedata_HwcTempMax,Maximum DHW temperature: Maximum temperature measured at the tap water outlet sensor,,,b509,0d3500,value,,D2C,,°C,temperature
r,,,StorageTempMax,Maximum storage temperature: Maximum storage tank temperature,,,b509,0d3600,value,,D2C,,°C,temperature
r,,,FlowTempMax,Maximum CH temperature: Maximum CH flow temperature,,,b509,0d3700,value,,D2C,,°C,temperature
r,,,FanPWMSum,Fan_PWM_Sum: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,FanPWMTest,Fan_PWM_Test: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn: Maintenance data,,,b509,0d3d00,value,,D2C,,°C,temperature
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,hours
r,,,StorageloadPumpStarts,TankloadPumpCommunt: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,start count
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.: Maximalwert des Warmwassersensors,,,b509,0d5600,value,,UIN,100,,
r,,,CounterStartAttempts3,Failed ignition (3rd attempt): Number of unsuccessful ignition attempts (in the 3rd attempt),,,b509,0d8100,value,,UCH,,°C,temperature
r,,,CounterStartAttempts4,Failed ignition (4th attempt): Number of unsuccessful ignition attempts (in the 4th attempt),,,b509,0d8200,value,,UCH,,°C,temperature
r,,,ReturnTempMax,Max flow return temperature,,,b509,0dbe00,value,,D2C,,°C,temperature
r,,,PumpHwcFlowSum,PumpDHWFlowSum: Summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber: Number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.: Maximum flow temperature for WW,,,b509,0dc300,value,,D2C,,°C,temperature
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW: maximum difference between flow and DHW outlet temperature,,,b509,0dc400,value,,D2C,,°C,temperature
r,,,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0dc500,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0ec500,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0dc600,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0ec600,value,,ULG,,,Maintenance data
r,,,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0dc700,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0ec700,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0dc800,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0ec800,value,,ULG,,,Maintenance data
r,,,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0dc900,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0ec900,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0dca00,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0eca00,value,,ULG,,,Maintenance data
r,,,WaterHcFlowMax,MaxWaterFlowCH: v,,,b509,0dd000,value,,UIN,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum: Maintenance data,,,b509,0df000,value,,UIN,,mbar,pressure
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter: Maintenance data,,,b509,0df100,value,,UCH,,,
r,,,PrAPSCounter,PrAPSCounter: Maintenance data,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum: Maintenance data,,,b509,0df300,value,,UIN,,s,seconds
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue,,,b509,0df400,value,,SIN,,,Maintenance data
r,,,PrEnergySumHc1,PrEnergySumCH1,,,b509,0df500,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc1,PrEnergySumCH1,,,b509,0ef500,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0df600,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0ef600,value,,ULG,,,Maintenance data
r,,,PrEnergySumHc2,PrEnergySumCH2,,,b509,0df700,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc2,PrEnergySumCH2,,,b509,0ef700,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0df800,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0ef800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc3,PrEnergySumCH3,,,b509,0df900,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc3,PrEnergySumCH3,,,b509,0ef900,value,,ULG,,,Maintenance data
r,,,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0dfa00,value,,ULG,,,Maintenance data
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0efa00,value,,ULG,,,Maintenance data
