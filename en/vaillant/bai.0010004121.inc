type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,StatusList,StatusList_DK,,,b509,0d1101,value,,HEX:10,,,Statustexte ergänzen
r,,,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0d0704,value,,UCH,,kW,
w,,install,PartloadHcKW,d.00 heating partload: Heating part load,,,b509,0e0704,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0df703,value,,UCH,,min,minutes
w,,install,WPPostrunTime,d.01 central heating overruntime: water pump overrun time for heating mode,,,b509,0ef703,value,,UCH,,min,minutes
r,,,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0d0904,value,,UCH,,min,minutes
w,,install,BlockTimeHcMax,d.02 Max blocking time CH: max. burner anti cycling period at 20°C Flow temperature setpoint,,,b509,0e0904,value,,UCH,,min,minutes
r,,,HwcTemp,d.03 Temp DHW: hot water flow temperature (combination boiler only),,,b509,0d1600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,StorageTemp,d.04 Temp storage / she: current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,FlowTempDesired,d.05 flow/return setpoint: Flow temperature target value or return target value when return regulation is set,,,b509,0d3900,value,,D2C,,°C,temperature
r,,,StorageTempDesired,"d.07 Storage setpoint: Warm start temperature value (combination boiler plus only), Storage temperature target value (system boiler only)",,,b509,0d0400,value,,D2C,,°C,temperature
r,,,ACRoomthermostat,d.08 Room thermostat 230 V: External controls heat demand (Clamp 3-4),,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 ext flowsetpoint: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,temperature
r,,,WP,d.10 Central heating pump: internal heating pump,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 external pump: External heating pump,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 storage load pump: tank load pump demand,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Circulation pump: Hot water circulation pump (via external module),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,WPPWMPower,d.15 WP_PWMPower_DK: actual PWM-Powerrate of electronic-pump,,,b509,0d7300,value,,UCH,,,
r,,,HwcDemand,d.22 DHW demand: domestic hot water (tapping or tank contact) demand,,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 operation mode: Wintermode active,,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,SourcePressure,d.24 AirPressure_DK,,,b509,0dff00,value,,UIN,,Pa,value of airpressure-sensor
r,,,StoragereleaseClock,d.25 DHW demand enabled: hot water release (tank storage) via eBus Control,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,PrimaryCircuitFlowrate,d.29 PrimaryCircuitFlowrate_DK,,,b509,0dfb00,value,,UIN,,l/h,value of flowrate
r,,,Gasvalve,d.30 Gasvalve: Gasvalve activation signal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Target fan speed,,,b509,0d2400,value,,UIN,,rpm,Fan speed setpoint
r,,,FanSpeed,d.34 Actual fan speed,,,b509,0d8300,value,,UIN,,rpm,fan speed actual value
r,,,PositionValveSet,"d.35 Position TWV: Position of diverter valve; 100 = DHW, 0 = heating, 40 = middle position",,,b509,0d5400,value,,UCH,,,
r,,,FlowTemp,d.40 TFT_DK: flow temperature,,,b509,0d1800,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,ReturnTemp,d.41 Temp heating return: return temperature,,,b509,0d9800,temp,,D2C,,°C,temperature,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,IonisationVoltageLevel,d.44 Dig. ionisation voltage,,,b509,0da400,value,,SIN,10,,digital ionisation voltage> 80 no flame< 40 good flame
r,,,OutdoorstempSensor,d.47 Temp outside: Outside temperature (uncorrected value),,,b509,0d7600,temp,,D2C,,°C,temperature,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
r,,,RemainingBoilerblocktime,d.67 Remaining burner block time: Remaining burner anti cycling time,,,b509,0d3800,value,,UCH,,min,minutes
r,,,EBusHeatcontrol,d.90 Digital control recognized: Digital regulator status,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 Status DCF 77: DCF status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF receiver state
r,,,SMGVCorrFactorLowOffset,e.04 SMGV_CorrFactorLow_Offset_DK: CO2 offset-value low-load,,,b509,0d0f01,value,,SCH,,%,
r,,,SMGVCorrFactorHighOffset,e.05 SMGV_CorrFactorHigh_Offset_DK: CO2 offset-value high-load,,,b509,0d1001,value,,SCH,,%,
r,,,COConcentration,e.06 SD_CO_Concentration_DK,,,b509,0d0601,value,,UIN,,ppm,calculated CO-concentration
r,,,CORsens,e.07 SD_CO_Rsens_DK,,,b509,0d0501,value,,UIN,,kOhm,actual CO-sensor resistance
r,,,COR0,e.08 SD_CO_R0_DK,,,b509,0d0401,value,,UIN,,kOhm,CO-sensor resistance at 0ppm CO
r,,,COPTCActualTemp,e.09 SD_CO_PTC_ActualTemp_DK: actual heater-temperature,,,b509,0d0901,value,,D2C,,°C,temperature
r,,,COPTCMeasureTemp,e.10 CO_PTC_MeasureTemp_DK: heater-temperature during burner operation,,,b509,0d0701,value,,D2C,,°C,temperature
r,,,COCorrFactorOffset,e.11 CO_CorrFactor_Offset_DK: CO2 offset value for gas-adaptive correction-factor,,,b509,0d0e01,value,,SCH,,%,
r,,,COCorrFactor,e.12 CO_CorrFactor_DK: calculated gas-adaptive correction-factor,,,b509,0d0101,value,,UCH,,%,
r,,,SMGVCorrFactorLow,e.13 SMGV_CorrFactorLow_DK: calculated correction-factor low-load,,,b509,0d0201,value,,UCH,,%,
r,,,SMGVCorrFactorHigh,e.14 SMGV_CorrFactorHigh_DK: calculated correction-factor high-load,,,b509,0d0301,value,,UCH,,%,
r,,,COLastError,e.18 CO_LastError_DK: CO-sensor failure number,,,b509,0d0a01,value,,UCH,,,
r,,,FluePipeFactor,e.19 FluePipeFactor_DK: calculated fluepipe-factor,,,b509,0d0b01,value,,UCH,,,
r,,,HwcImpellorSwitch,DHW impellor switch: domestic hot water (tapping) demand,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,COPTCTargetTemp,SD_CO_PTC_TargetTemp_DK: target heater-temperature,,,b509,0d0801,value,,D2C,,°C,temperature
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,
r,,,TMMaxTime,TTM_MaxTime_DK: maximum time for calibration-routine,,,b509,0d1801,value,,UIN,,s,seconds
r,,,TMAverageTimeSum,TTM_AverageTime_sum_DK,,,b509,0d1901,value,,UIN,,,average time for calibration-routine
r,,,COCorrFactorMax,CO_CorrFactor_max_DK,,,b509,0d1a01,value,,UIN,,%,maximum value of calculated gas-adaptive correction-factor
r,,,COCorrFactorSum,CO_CorrFactor_sum_DK,,,b509,0d1b01,value,,UIN,100,%,average value of calculated gas-adaptive correction-factor
r,,,SMGVCorrFactorLowSum,SMGV_CorrFactorLow_sum_DK,,,b509,0d1c01,value,,UIN,100,%,average value of calculated correction-factor low-load
r,,,SMGVCorrFactorHighSum,SMGV_CorrFactorHigh_sum_DK,,,b509,0d1d01,value,,UIN,100,%,average value of calculated correction-factor high-load
r,,,COPTCADC1,CO_PTC_ADC1_DK,,,b509,0d1e01,value,,UIN,,,
r,,,COPTCADC2,CO_PTC_ADC2_DK,,,b509,0d1f01,value,,UIN,,,
r,,,COPTCPWMTest,CO_PTC_PWM_Test_DK,,,b509,0d2001,value,,UIN,,,
r,,,COPTCCalParms,CO_PTC_CalParms,,,b509,0d2101,value,,UCH,,,
r,,,CalibrationDone,TTM_Done_DK: calibration-routine after burner start finished,,,b509,0d2201,value,,UCH,0=off;1=on,,
r,,,CalibrationRecalDone,TTM_RecalDone_DK: calibration-routine during burner operation finished,,,b509,0d2301,value,,UCH,0=off;1=on,,
r,,,CalibrationLowDone,TTL_Done_DK: calibration-routine low-load after burner start finished,,,b509,0d2401,value,,UCH,0=off;1=on,,
r,,,CalibrationLowRecalDone,TTL_RecalDone_DK: calibration-routine low-load during burner operation finished,,,b509,0d2501,value,,UCH,0=off;1=on,,
r,,,CalibrationHighDone,TTH_Done_DK: calibration-routine high-load after burner start finished,,,b509,0d2601,value,,UCH,0=off;1=on,,
r,,,CalibrationHighRecalDone,TTH_RecalDone_DK: calibration-routine high-load during burner operation finished,,,b509,0d2701,value,,UCH,0=off;1=on,,
r,,,WindOff,Wind_Off_DK: Wind-function not active,,,b509,0d2801,value,,UCH,0=off;1=on,,
r,,,COmonOff,COmon_Off_DK: CO-monitoring not active,,,b509,0d2901,value,,UCH,0=off;1=on,,
r,,,FlameLossOff,FlameLoss_Off_DK: Flame-loss-function not active,,,b509,0d2a01,value,,UCH,0=off;1=on,,
r,,,ForcedR0Trigger,SD_ForcedR0_Trigger_DK: forced-R0-mode active,,,b509,0d2b01,value,,UCH,0=off;1=on,,
r,,,StartPeakEnable,StartPeak_Enable_DK,,,b509,0d2c01,value,,UCH,0=off;1=on,,
r,,,COPTCU1,CO_PTC_U1_DK,,,b509,0d2d01,value,,UIN,,,
r,,,COPTCU2,CO_PTC_U2_DK,,,b509,0d2e01,value,,UIN,,,
r,,,ThresholdWaterpressureMin,MinThresholdWaterpressure_DK,,,b509,0d1201,value,,UIN,,bar,
r,,,ThresholdWaterpressureMax,MaxThresholdWaterpressure_DK,,,b509,0d1301,value,,UIN,,bar,
r,,,MeasuredFluePipeFactor,MeasuredFluePipeFactor_DK,,,b509,0d3401,value,,UCH,,,
r,,,VortexFlowCheckEnabled,VortexFlowCheckEnabled_DK,,,b509,0d4901,value,,UCH,0=off;1=on,,
r,,,VortexSensorFault,VortexSensorFault_DK,,,b509,0d4a01,value,,UCH,0=off;1=on,,
r,,,VortexSensorFaultCounter,VortexSensorFaultCounter_DK,,,b509,0d4b01,value,,UCH,,,
r,,,VortexFlowCheckFault,VortexFlowCheckFault_DK,,,b509,0d4c01,value,,UCH,0=off;1=on,,
r,,,VortexFlowCheckFaultCounter,VortexFlowCheckFaultCounter_DK,,,b509,0d4d01,value,,UCH,,,
r,,,SMGVCurrentPos,SMGV_CurrentPos_DK,,,b509,0d7c01,value,,SIN,,,
r,,,PredSourcePressureRefPressureCounter,Pred_AirPressure_RefPressureCounter_DK,,,b509,0d7f01,value,,UCH,,,
r,,,PredSourcePressureRefPressureSum,Pred_AirPressure_RefPressureSum_DK,,,b509,0d8001,value,,UIN,,,
r,,,SRFLIDEMode,SR_FLIDE_Mode_DK,,,b509,0d8101,value,,UCH,,,
w,,service,SRFLIDEMode,SR_FLIDE_Mode_DK,,,b509,0e8101,value,,UCH,,,
r,,,COSensorSNR,CO_Sensor_SNR,,,b509,0daf01,value,,HEX:7,,,
r,,,WaterPressure,value of waterpressure-sensor,,,b509,0d0200,press,,FLT,,bar,pressure,sensor,,UCH,0=ok;85=circuit;170=cutoff,,sensor status
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
r,,,WaterpressureBranchControlOff,WaterpressureBranchControlOff_DK: water pressure branch controll off,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN Start adress,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,ExtTankModulCon_DK: external tank modul connected (VR65),,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage_DK: Second stage of the pump activated,,,b509,0ded00,value,,UCH,240=off;15=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Safety temperature limit concept:1 = safety temp. Limit check with NTC0 = safety temp. Limit check with contact,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: all IFC faults are volataile,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,VortexFlowSensor,"VortexFlowSensor_DK: Predictive Maintenance data, CH water flow",,,b509,0dd500,value,,UIN,,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the appliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,SD_Gasvalve3_uC_DK: Gasvalve activation signal (from Microcontroller),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: Initialisation off all EEPROM values (done in the production),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,TimerInputCH_DK: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,FanMinSpeedOperation,,,b509,0ddf00,value,,UIN,,rpm,Minimum Fan speed of the appliance
r,,,FanMaxSpeedOperation,FanMaxSpeedOperation,,,b509,0de000,value,,UIN,,rpm,Maximum Fan speed of the appliance
r,,,ExternGasvalve,ExternGasvalve_DK: external gasvalve activated,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF_TimeDate_DK,,,b509,0de500,btime,,BTI,,,time,bdate,,BDA,,,date
r,,,FlowSetPotmeter,FlowSetPotmeter: flow setpoint potentiometer,,,b509,0df003,value,,D2C,,°C,temperature
r,,,HwcSetPotmeter,DHWSetPotmeter: DHW setpoint potentiometer,,,b509,0df103,value,,D2C,,°C,temperature
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,serial number of AI
r,,,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0da100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
w,,install,PumpPowerDesired,d.14 Desired heating pump power,,,b509,0ea100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Desired central heating pump power
r,,,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0d0c04,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Return regulation: heating flow/return regulation activation,,,b509,0e0c04,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 CH pump mode,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
w,,install,HcPumpMode,d.18 CH pump mode,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pump mode
r,,,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0d4304,value,,D2C,,°C,temperature
w,,install,HwcTempMax,d.20 Max value tanksetpoint: Adjustment of maximum tank setpoint range (maximum endposition of potmeter),,,b509,0e4304,value,,D2C,,°C,temperature
r,,,OptionRelais,d.26 OptionRelais_DK,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install,OptionRelais,d.26 OptionRelais_DK,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Option relais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
w,,install,AccessoriesOne,d.27 Option relais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 1 function
r,,,AccessoriesTwo,d.28 Option relais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
w,,install,AccessoriesTwo,d.28 Option relais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Accesory relay 2 function
r,,,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0d2404,value,,SIN,,rpm,Offset for minimum fan speed
w,,install,FanSpeedOffsetMin,d.50 MinFanSpeedOffset,,,b509,0e2404,value,,SIN,,rpm,Offset for minimum fan speed
r,,,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0d2504,value,,SIN,,rpm,Offset for maximum fan speed
w,,install,FanSpeedOffsetMax,d.51 MaxFanSpeedOffset,,,b509,0e2504,value,,SIN,,rpm,Offset for maximum fan speed
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
r,,,ServiceMode,d.86 ServiceMode_DK: Counter-activation for predictive maintenance,,,b509,0dcb00,value,,UCH,0=off;1=on,,
w,,install,ServiceMode,d.86 ServiceMode_DK: Counter-activation for predictive maintenance,,,b509,0ecb00,value,,UCH,0=off;1=on,,
r,,,GasType,"d.87 GasType_DK: 0=natural gas, 1 = liquid gas 50mbar, 2=liquid gas 30mbar",,,b509,0dfe00,value,,UCH,,,
w,,install,GasType,"d.87 GasType_DK: 0=natural gas, 1 = liquid gas 50mbar, 2=liquid gas 30mbar",,,b509,0efe00,value,,UCH,,,
r,,,StartOffset,d.89 StartOffset_DK: value of gas-offset during ignition,,,b509,0d0d01,value,,SCH,,%,
w,,install,StartOffset,d.89 StartOffset_DK: value of gas-offset during ignition,,,b509,0e0d01,value,,SCH,,%,
r,,,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Device specific number: DSN aplliance variant setting,,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Set factory settings,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Set factory settings,,,b509,0e6804,value,,UCH,0=no;1=yes,,
r,,,Faultlist,Faultlist_DK,,,b509,0d2600,value,,HEX:10,,,
r,,,PredFanPWMDevThreshold,Pred_FanPWM_DevThreshold_DK,,,b509,0d3501,value,,UCH,,,
r,,,PredFanPWMSwitchingPoint,Pred_FanPWM_SwitchingPoint_DK,,,b509,0d3601,value,,UIN,,,
r,,,PredFanPWMRefPWMcounter,Pred_FanPWM_RefPWMcounter_DK,,,b509,0d3701,value,,UCH,,,
r,,,PredFanPWMRefPWMsum,Pred_FanPWM_RefPWMsum_DK,,,b509,0d3801,value,,UIN,,,
r,,,PredFanPWMPredCounter,Pred_FanPWM_PredCounter_DK,,,b509,0d3901,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
r,,,PredCOsensorSwitchingPoint,Pred_COsensor_SwitchingPoint_DK,,,b509,0d3a01,value,,UIN,,,
r,,,PredCOsensorPredCounter,Pred_COsensor_PredCounter,,,b509,0d3b01,uin,,UIN,,,,uin_1,,UIN,,,,uin_2,,UIN,,,
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
r,,,PredStatusFlags,Pred_StatusFlags_DK,,,b509,0d7d01,value,,ULG,,,
r,,,PredConditionFlags,Pred_ConditionFlags,,,b509,0d7e01,value,,ULG,,,
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
r,,,Currenterror,Current errors,,,b503,0001,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Errorhistory,Error_History,,,b503,0101,index,m,UCH,,,,status,,UCH,,,Status,time,,VTM,,,time,date,,HDA:3,,,date,error,,UIN,,,error number
w,,install,Clearerrorhistory,Clear error history,,,b503,0201,cleared,s,UCH,0=no;1=yes,,
r,,,Currentservice,Current service message,,,b503,0002,error,,UIN,,,error number,error_1,,UIN,,,error number,error_2,,UIN,,,error number,error_3,,UIN,,,error number,error_4,,UIN,,,error number
r,,,Servicehistory,Service message history,,,b503,0102,index,m,UCH,,,,status,,UCH,,,Status,time,,VTM,,,time,date,,HDA:3,,,date,error,,UIN,,,error number
w,,install,Clearservicehistory,Clear service message history,,,b503,0202,cleared,s,UCH,0=no;1=yes,,
