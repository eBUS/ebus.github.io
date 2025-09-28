type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,StatusList,StatusList_DK,,,b509,0d1101,value,,HEX:10,,,Statustexte ergänzen
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d0704,value,,UCH,,kW,
w,,install,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e0704,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit: Wasserpumpennachlaufzeit nach Heizbetrieb,,,b509,0df703,value,,UCH,,min,Minuten
w,,install,WPPostrunTime,d.01 Pumpennachlaufzeit: Wasserpumpennachlaufzeit nach Heizbetrieb,,,b509,0ef703,value,,UCH,,min,Minuten
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit: Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C,,,b509,0d0904,value,,UCH,,min,Minuten
w,,install,BlockTimeHcMax,d.02 Maximale Brennersperrzeit: Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C,,,b509,0e0904,value,,UCH,,min,Minuten
r,,,HwcTemp,d.03 WW Vorlaufsolltemp: Vorlauftemperatur bei Warmwasserzapfung (nur bei Kombi-Heizgeräten),,,b509,0d1600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp: current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur: Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.,,,b509,0d3900,value,,D2C,,°C,Temperatur
r,,,StorageTempDesired,d.07 Speichersolltemp: VCW: Solltemperatur des WarmstartspeichersVC: Solltemperatur des externen Speichers,,,b509,0d0400,value,,D2C,,°C,Temperatur
r,,,ACRoomthermostat,d.08 Raumthermostat: Status des extrenen Raumthermostat an Klemme 3/4,,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,Temperatur
r,,,WP,d.10 Wasserpumpe: Interne Heizungspumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 ext. Heizungspumpe: Externe Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 Speicherladepumpe: Ladepumpenanforderung,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Zirkulationspumpe: Status Zirkulationspumpe (über ein externes Modul ansteuerbar),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,WPPWMPower,d.15 Pumpendrehzahl Istwert: actual PWM-Powerrate of electronic-pump,,,b509,0d7300,value,,UCH,,,
r,,,HwcDemand,d.22 WW Anforderung: Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher),,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 Winterbetrieb: Wintermodus aktiv (Heizbetrieb und Warmwasser),,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,SourcePressure,d.24 Druckdosensignal,,,b509,0dff00,value,,UIN,,Pa,value of airpressure-sensor
r,,,StoragereleaseClock,d.25 Speicherfreigabe: Freigabe der Speichrladung oder des Warmstartspeichers durcheinen eBUS Regler,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,PrimaryCircuitFlowrate,d.29 PrimaryCircuitFlowrate_DK,,,b509,0dfb00,value,,UIN,,l/h,value of flowrate
r,,,Gasvalve,d.30 Gasventil: GMV Ansteuersignal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,rpm,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,rpm,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV: Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung,,,b509,0d5400,value,,UCH,,,
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Temperatur,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler: Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,,,b509,0d7600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Minuten
r,,,EBusHeatcontrol,d.90 Digitaler Regler: Gibt an ob ein digitaler Regler erkannt wurde,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Empfängerstatus
r,,,SMGVCorrFactorLowOffset,e.04 SMGV_CorrFactorLow_Offset_DK: CO2 offset-value low-load,,,b509,0d0f01,value,,SCH,,%,
r,,,SMGVCorrFactorHighOffset,e.05 SMGV_CorrFactorHigh_Offset_DK: CO2 offset-value high-load,,,b509,0d1001,value,,SCH,,%,
r,,,COConcentration,e.06 SD_CO_Concentration_DK,,,b509,0d0601,value,,UIN,,ppm,calculated CO-concentration
r,,,CORsens,e.07 SD_CO_Rsens_DK,,,b509,0d0501,value,,UIN,,kOhm,Aktueller Widderstand des CO-Sensors
r,,,COR0,e.08 SD_CO_R0_DK,,,b509,0d0401,value,,UIN,,kOhm,CO-sensor resistance at 0ppm CO
r,,,COPTCActualTemp,e.09 SD_CO_PTC_ActualTemp_DK: actual heater-temperature,,,b509,0d0901,value,,D2C,,°C,Temperatur
r,,,COPTCMeasureTemp,e.10 CO_PTC_MeasureTemp_DK: heater-temperature during burner operation,,,b509,0d0701,value,,D2C,,°C,Temperatur
r,,,COCorrFactorOffset,e.11 CO_CorrFactor_Offset_DK: CO2 offset value for gas-adaptive correction-factor,,,b509,0d0e01,value,,SCH,,%,
r,,,COCorrFactor,e.12 CO_CorrFactor_DK: calculated gas-adaptive correction-factor,,,b509,0d0101,value,,UCH,,%,
r,,,SMGVCorrFactorLow,e.13 SMGV_CorrFactorLow_DK: calculated correction-factor low-load,,,b509,0d0201,value,,UCH,,%,
r,,,SMGVCorrFactorHigh,e.14 SMGV_CorrFactorHigh_DK: calculated correction-factor high-load,,,b509,0d0301,value,,UCH,,%,
r,,,COLastError,e.18 CO_LastError_DK: CO-sensor failure number,,,b509,0d0a01,value,,UCH,,,
r,,,FluePipeFactor,e.19 FluePipeFactor_DK: calculated fluepipe-factor,,,b509,0d0b01,value,,UCH,,,
r,,,HwcImpellorSwitch,Brauchwasserzapfung: WW Zapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,COPTCTargetTemp,SD_CO_PTC_TargetTemp_DK: target heater-temperature,,,b509,0d0801,value,,D2C,,°C,Temperatur
r,,,BoilerType2,BoilerType_2_DK,,,b509,0d0c01,value,,ULG,,,
r,,,TMMaxTime,TTM_MaxTime_DK: maximum time for calibration-routine,,,b509,0d1801,value,,UIN,,s,Sekunden
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
r,,,WaterPressure,Wasserdruck: value of waterpressure-sensor,,,b509,0d0200,press,,FLT,,bar,Druck,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,Flame,Flammensignal,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Anzhl der DSN Änderungen: Anzahl der DSN (Gerätekennung) Änderungen,,,b509,0d0c00,value,,UCH,,,
r,,,GasvalveUC,Schaltsignal für das Gasventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,Verriegelnde Störabschaltungen: WAHR: STB Fehler sind verriegelnd,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,ModulationDesired,Modulationssollwert,,,b509,0d2e00,value,,SIN,10,%,Modulationssollwert
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC_DK: Ioni/ADC Wert vom Flammenwächter,,,b509,0d2f00,value,,UIN,,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi_DK: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi_DK: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,EbusSourceOn,eBUS Spannungsversorgung: Aktivierung der eBUS Speisung,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,Fluegasvalve,Abgasklappe: Flüssiggas Magnetventil,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,ExternalFaultmessage,Ext. Störmeldung: Signal für die externe Störmeldeeinrichtung,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,GasvalveASICFeedback,Rückmeldung Gasventil vom ASIC,,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,GasvalveUCFeedback,Rückmeldung Gasventil vom Prozessor,,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,Ignitor,Zünder: Zündung aktiviert,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,HwcTypes,WW Typen: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,WarmstartDemand,Warmstartanforderung: Warmstartaktivierung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,ParamToken,ParamToken_DK: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,Expertlevel_ReturnTemp,Externer Rücklauftemperatursensor,,,b509,0d6b00,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,Rückmeldung des Temperaturbegrenzer Signals,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,EbusVoltage,Rückmeldung der eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,Abgasklappe offen: Rückmeldung Flüssiggasventil,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte_DK: Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,Lüfter Solldrehzahl,,,b509,0d9f00,value,,UIN,,rpm,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,WaterpressureBranchControlOff,Drucksprungerkennung ausschalten: Überwachung der Druckänderung beim Schalten der Pumpe kann hiermit aktiviert oder deaktiviert werden,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN Startadresse,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,VR65 angeschlossen: Externes Speichermodul (VR65) angeschlosssen,,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage_DK: Second stage of the pump activated,,,b509,0ded00,value,,UCH,240=off;15=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: Alle IFC Fehler sind nichtflüchtig,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,VortexFlowSensor,"VortexFlowSensor_DK: Predictive Maintenance data, CH water flow",,,b509,0dd500,value,,UIN,,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the appliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,Gasventil 3: Gasventil Schaltsignal (vom Prozessor),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM_DK: EEPROM Initialisierrung (für die Produktion),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,Eingang Schaltuhr: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,rpm,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,rpm,Lüfter Maximaldrehzahl
r,,,ExternGasvalve,Ext. Gasventil: Externes Magnetventil,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF Datum/Uhrzeit,,,b509,0de500,btime,,BTI,,,Uhrzeit,bdate,,BDA,,,Datum
r,,,FlowSetPotmeter,Vorlaufsollwert Poti: Vorlaufsollwert Potentiometer,,,b509,0df003,value,,D2C,,°C,Temperatur
r,,,HwcSetPotmeter,WW Sollwert Potentiometer: WW Sollwertpotentiometer,,,b509,0df103,value,,D2C,,°C,Temperatur
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,PumpPowerDesired,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0da100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Leistungsstufe der Heizungspumpe
w,,install,PumpPowerDesired,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0ea100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Leistungsstufe der Heizungspumpe
r,,,ReturnRegulation,d.17 Rücklaufregelung: Aktivierung der Rücklaufregelung,,,b509,0d0c04,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Rücklaufregelung: Aktivierung der Rücklaufregelung,,,b509,0e0c04,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pumpenbetriebsart für den Heizbetrieb
w,,install,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pumpenbetriebsart für den Heizbetrieb
r,,,HwcTempMax,d.20 Max. WW Temperatur: Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).,,,b509,0d4304,value,,D2C,,°C,Temperatur
w,,install,HwcTempMax,d.20 Max. WW Temperatur: Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).,,,b509,0e4304,value,,D2C,,°C,Temperatur
r,,,OptionRelais,d.26 OptionRelais_DK,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install,OptionRelais,d.26 OptionRelais_DK,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0d4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
w,,install,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0e4b04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
r,,,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0d4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
w,,install,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0e4c04,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
r,,,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0d2404,value,,SIN,,rpm,Offset min. Drehzahl
w,,install,FanSpeedOffsetMin,d.50 Offet min. Lüfterdrehzahl,,,b509,0e2404,value,,SIN,,rpm,Offset min. Drehzahl
r,,,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0d2504,value,,SIN,,rpm,Offset max. Drehzahl
w,,install,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0e2504,value,,SIN,,rpm,Offset max. Drehzahl
r,,,DeactivationsTemplimiter,d.60 STB Abschaltungen: Anzahl der Abschaltungen durch den Sicherheitstemperaturbgrenzers,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,d.61 Anzahl Zündfehler: Anzahl der Zündfehler (nicht erfolgreiche Züdung im letzten Versuch oder fehlerhaftes Flammensignal),,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 Mittlere Zündzeit,,,b509,0d2d00,value,,UCH,10,s,Mittlere Zündzeit
r,,,MaxIgnitiontime,d.65 Max. Zündzeit,,,b509,0d2c00,value,,UCH,10,s,Maximale Zündzeit
r,,,CounterStartattempts1,d.68 Zündfehler 1. Versuch: Anzahl der erfolglosen Zündversuche (im 1. Versuch),,,b509,0d6e00,value,,UCH,,°C,Temperatur
r,,,CounterStartattempts2,d.69 Zündfehler 2. Versuch: Anzahl der erfolglosen Zündversuche (im 2. Versuch),,,b509,0d6f00,value,,UCH,,°C,Temperatur
r,,,ValveMode,d.70 VUV Betriebsart: Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb),,,b509,0d2a04,value,,UCH,,,
w,,install,ValveMode,d.70 VUV Betriebsart: Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb),,,b509,0e2a04,value,,UCH,,,
r,,,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb: Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti),,,b509,0d0e04,value,,D2C,,°C,Temperatur
w,,install,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb: Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti),,,b509,0e0e04,value,,D2C,,°C,Temperatur
r,,,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0d1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
w,,install,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0e1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit: Max. Speicherladezeit für Speicher ohne eigene Regelung,,,b509,0d1204,value,,UCH,,min,Minuten
w,,install,StorageLoadTimeMax,d.75 Max. Speicherladezeit: Max. Speicherladezeit für Speicher ohne eigene Regelung,,,b509,0e1204,value,,UCH,,min,Minuten
r,,,PartloadHwcKW,d.77 Speicherteillast: Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden),,,b509,0d0804,value,,UCH,,kW,
w,,install,PartloadHwcKW,d.77 Speicherteillast: Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden),,,b509,0e0804,value,,UCH,,kW,
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW: Maximal erlaubte Vorlauftemperatur für die Speicherladung,,,b509,0d0f04,value,,D2C,,°C,Temperatur
w,,install,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW: Maximal erlaubte Vorlauftemperatur für die Speicherladung,,,b509,0e0f04,value,,D2C,,°C,Temperatur
r,,,HcHours,d.80 Hz. Betriebsstunden: Betriebsstunden im Heizbetrieb,,,b509,0d2800,value,,UIN,,h,Stunden
r,,,HwcHours,d.81 Betriebsstunden WW: Betriebsstunden Brauchwasser,,,b509,0d2200,value,,UIN,,h,Stunden
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung: Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung,,,b509,0d2004,value,,UIN,,h,Stunden
w,,install,HoursTillService,d.84 Stunden bis Wartung: Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung,,,b509,0e2004,value,,UIN,,h,Stunden
r,,,ServiceMode,d.86 ServiceMode_DK: Counter-activation for predictive maintenance,,,b509,0dcb00,value,,UCH,0=off;1=on,,
w,,install,ServiceMode,d.86 ServiceMode_DK: Counter-activation for predictive maintenance,,,b509,0ecb00,value,,UCH,0=off;1=on,,
r,,,GasType,"d.87 Gasart: 0=Erdgas,1=Flüssiggas 50mbar,2=Flüssiggas 30mbar",,,b509,0dfe00,value,,UCH,,,
w,,install,GasType,"d.87 Gasart: 0=Erdgas,1=Flüssiggas 50mbar,2=Flüssiggas 30mbar",,,b509,0efe00,value,,UCH,,,
r,,,StartOffset,d.89 StartOffset_DK: value of gas-offset during ignition,,,b509,0d0d01,value,,SCH,,%,
w,,install,StartOffset,d.89 StartOffset_DK: value of gas-offset during ignition,,,b509,0e0d01,value,,SCH,,%,
r,,,DSNOffset,d.93 Gerätekennung: Gerätekennung (DSN),,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Gerätekennung: Gerätekennung (DSN),,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,
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
r,,,TempGradientFailure,Gradientenfehler: Anzahl der Boilerabschaltung wegen zu hohem Gradient (S.54),,,b509,0d1100,value,,UCH,,°C,Temperatur
r,,,TempDiffBlock,TempDiffBlock_DK: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,Temperatur
r,,,TempDiffFailure,TempDiffFailure_DK: Anzahl der Abschaltungen wegen zu hoher / fehlerhafter Differenz von Vor- und Rücklauftemperatur,,,b509,0d1300,value,,UCH,,°C,Temperatur
r,,,PumpHours,Betriebsstunden Pumpe: Pumpenbetriebsstunden,,,b509,0d1400,value,,UIN,,h,Stunden
r,,,HcPumpStarts,CH_PumpCommunt_DK: Schaltspiele Pumpe,,,b509,0d1500,value,,UIN,,,Anzahl Starts
r,,,ValveStarts,3WV Schaltspiele: Anzahl der 3WV Umschaltungen,,,b509,0d1a00,value,,UIN,,,Anzahl Starts
r,,,FanHours,Betriebsstunden Lüfter: Betriebsstunden des Lüfters,,,b509,0d1b00,value,,UIN,,h,Stunden
r,,,FanStarts,FanCommunt_DK: Anzahl der Lüfterschaltspiele,,,b509,0d1c00,value,,UIN,,,Anzahl Starts
r,,,OverflowCounter,Überlauf PM Zähler: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT_DK: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,Temperatur
r,,,MinIgnitiontime,Min. Zündzeit,,,b509,0d2b00,value,,UCH,10,s,Minimale Zündzeit
r,,,Maintenancedata_HwcTempMax,Max. WW Temperatur: Maximaltemperatur gemessen am Brauchwasserauslaufsensor,,,b509,0d3500,value,,D2C,,°C,Temperatur
r,,,StorageTempMax,Max. Speichertemp.: Maximaltemperatur gemessen am Speichersensor,,,b509,0d3600,value,,D2C,,°C,Temperatur
r,,,FlowTempMax,Max. Vorlauftemperatur: Maximaltemperatur gemessen am Vorlaufsensor,,,b509,0d3700,value,,D2C,,°C,Temperatur
r,,,FanPWMSum,Fan_PWM_Sum_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,FanPWMTest,Fan_PWM_Test_DK: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn_DK: Wartungsdaten,,,b509,0d3d00,value,,D2C,,°C,Temperatur
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours_DK: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,Stunden
r,,,StorageloadPumpStarts,TankloadPumpCommunt_DK: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,Anzahl Starts
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.: Maximalwert des Warmwassersensors,,,b509,0d5600,value,,UIN,100,,
r,,,CounterStartAttempts3,Zündfehler 3. Versuch: Anzahl der erfolglosen Zündversuche (im 3. Versuch),,,b509,0d8100,value,,UCH,,°C,Temperatur
r,,,CounterStartAttempts4,Zündfehler 4. Versuch: Anzahl der erfolglosen Zündversuche (im 4. Versuch),,,b509,0d8200,value,,UCH,,°C,Temperatur
r,,,ReturnTempMax,Max. Rücklauftemperatur,,,b509,0dbe00,value,,D2C,,°C,Temperatur
r,,,PumpHwcFlowSum,PumpDHWFlowSum_DK: summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber_DK: number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.: Max. Vorlauftemperatur für WW,,,b509,0dc300,value,,D2C,,°C,Temperatur
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW_DK: maximum difference between flow and DHW outlet temperature,,,b509,0dc400,value,,D2C,,°C,Temperatur
r,,,PrEnergySumHwc1,PrEnergySumDHW1_DK: Wartungsdaten,,,b509,0dc500,value,,ULG,,,
w,,install,PrEnergySumHwc1,PrEnergySumDHW1_DK: Wartungsdaten,,,b509,0ec500,value,,ULG,,,
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Wartungsdaten,,,b509,0dc600,value,,ULG,,,
w,,install,PrEnergyCountHwc1,PrEnergyCountDHW1_DK: Wartungsdaten,,,b509,0ec600,value,,ULG,,,
r,,,PrEnergySumHwc2,PrEnergySumDHW2_DK: Wartungsdaten,,,b509,0dc700,value,,ULG,,,
w,,install,PrEnergySumHwc2,PrEnergySumDHW2_DK: Wartungsdaten,,,b509,0ec700,value,,ULG,,,
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2_DK: Wartungsdaten,,,b509,0dc800,value,,ULG,,,
w,,install,PrEnergyCountHwc2,PrEnergyCountDHW2_DK: Wartungsdaten,,,b509,0ec800,value,,ULG,,,
r,,,PrEnergySumHwc3,PrEnergySumDHW3_DK: Wartungsdaten,,,b509,0dc900,value,,ULG,,,
w,,install,PrEnergySumHwc3,PrEnergySumDHW3_DK: Wartungsdaten,,,b509,0ec900,value,,ULG,,,
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3_DK: Wartungsdaten,,,b509,0dca00,value,,ULG,,,
w,,install,PrEnergyCountHwc3,PrEnergyCountDHW3_DK: Wartungsdaten,,,b509,0eca00,value,,ULG,,,
r,,,WaterHcFlowMax,MaxWaterFlowCH_DK: Wartungsdaten,,,b509,0dd000,value,,UIN,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum_DK: Wartungsdaten,,,b509,0df000,value,,UIN,,mbar,Druck
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter_DK: Wartungsdaten,,,b509,0df100,value,,UCH,,,
r,,,PrAPSCounter,PrAPSCounter_DK: Wartungsdaten,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum_DK: Wartungsdaten,,,b509,0df300,value,,UIN,,s,Sekunden
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue_DK,,,b509,0df400,value,,SIN,,,Wartungsdaten
r,,,PrEnergySumHc1,PrEnergySumCH1_DK: Wartungsdaten,,,b509,0df500,value,,ULG,,,
w,,install,PrEnergySumHc1,PrEnergySumCH1_DK: Wartungsdaten,,,b509,0ef500,value,,ULG,,,
r,,,PrEnergyCountHc1,PrEnergyCountCH1_DK: Wartungsdaten,,,b509,0df600,value,,ULG,,,
w,,install,PrEnergyCountHc1,PrEnergyCountCH1_DK: Wartungsdaten,,,b509,0ef600,value,,ULG,,,
r,,,PrEnergySumHc2,PrEnergySumCH2_DK: Wartungsdaten,,,b509,0df700,value,,ULG,,,
w,,install,PrEnergySumHc2,PrEnergySumCH2_DK: Wartungsdaten,,,b509,0ef700,value,,ULG,,,
r,,,PrEnergyCountHc2,PrEnergyCountCH2_DK: Wartungsdaten,,,b509,0df800,value,,ULG,,,
w,,install,PrEnergyCountHc2,PrEnergyCountCH2_DK: Wartungsdaten,,,b509,0ef800,value,,ULG,,,
r,,,PrEnergySumHc3,PrEnergySumCH3_DK: Wartungsdaten,,,b509,0df900,value,,ULG,,,
w,,install,PrEnergySumHc3,PrEnergySumCH3_DK: Wartungsdaten,,,b509,0ef900,value,,ULG,,,
r,,,PrEnergyCountHc3,PrEnergyCountCH3_DK: Wartungsdaten,,,b509,0dfa00,value,,ULG,,,
w,,install,PrEnergyCountHc3,PrEnergyCountCH3_DK: Wartungsdaten,,,b509,0efa00,value,,ULG,,,
r,,,Currentservice,Aktuelle Wartungsmeldungen,,,b503,0002,error,,UIN,,,Fehlernummer,error_1,,UIN,,,Fehlernummer,error_2,,UIN,,,Fehlernummer,error_3,,UIN,,,Fehlernummer,error_4,,UIN,,,Fehlernummer
r,,,Servicehistory,Historie Wartungsmeldungen,,,b503,0102,index,m,UCH,,,,status,,UCH,,,Status,time,,VTM,,,Uhrzeit,date,,HDA:3,,,Datum,error,,UIN,,,Fehlernummer
w,,install,Clearservicehistory,Historie Wartungsmeldungen löschen,,,b503,0202,cleared,s,UCH,0=no;1=yes,,
