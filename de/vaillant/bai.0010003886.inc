type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d0704,value,,UCH,,kW,
w,,install,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e0704,value,,UCH,,kW,
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit: Wasserpumpennachlaufzeit nach Heizbetrieb,,,b509,0df703,value,,UCH,,min,Minuten
w,,install,WPPostrunTime,d.01 Pumpennachlaufzeit: Wasserpumpennachlaufzeit nach Heizbetrieb,,,b509,0ef703,value,,UCH,,min,Minuten
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit: Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C,,,b509,0d0904,value,,UCH,,min,Minuten
w,,install,BlockTimeHcMax,d.02 Maximale Brennersperrzeit: Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C,,,b509,0e0904,value,,UCH,,min,Minuten
r,,,HwcTemp,d.03 WW Vorlaufsolltemp: hot water inlet temperature into tank,,,b509,0d1600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp: Aktuelle Speichertemperatur und Sensorstatus,,,b509,0d1700,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur: Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.,,,b509,0d3900,value,,D2C,,°C,Temperatur
r,,,HwcTempDesired,d.06 Brauchwassersollwert: Gewünschte Warmwasser Solltemperatur,,,b509,0dea03,value,,D2C,,°C,Temperatur
r,,,StorageTempDesired,d.07 Speichersolltemp: Storage temperature target value,,,b509,0d0400,value,,D2C,,°C,Temperatur
r,,,ACRoomthermostat,d.08 Raumthermostat: Status des extrenen Raumthermostat an Klemme 3/4,,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert: minimum out of Kl.7 and eBus flow setpoint,,,b509,0d6e04,value,,D2C,,°C,Temperatur
r,,,WP,d.10 Wasserpumpe: Interne Heizungspumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 ext. Heizungspumpe: Externe Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 Speicherladepumpe: Ladepumpenanforderung,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Zirkulationspumpe: Status Zirkulationspumpe (über ein externes Modul ansteuerbar),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,WPPWMPower,d.15 Pumpendrehzahl Istwert: Output of pwm pump,,,b509,0d7300,value,,UCH,,%,
r,,,DCRoomthermostat,d.16 Raumthermostat: Wärmeanforderung vom externen Regler (Klemme 3-4),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 WW Anforderung: Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher),,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 Winterbetrieb: Wintermodus aktiv (Heizbetrieb und Warmwasser),,,b509,0df203,value,,UCH,0=off;1=on,,
r,,,StoragereleaseClock,d.25 Speicherfreigabe: Freigabe der Speichrladung oder des Warmstartspeichers durcheinen eBUS Regler,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,PrimaryCircuitFlowRate,d.29 PrimaryCircuitFlowRate_DK: primary circuit water flow rate,,,b509,0dfb00,value,,UIN,100,,
r,,,Gasvalve,d.30 Gasventil: GMV Ansteuersignal,,,b509,0dbb00,value,,UCH,240=off;15=on,,
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,rpm,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,rpm,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV: Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung,,,b509,0d5400,value,,UCH,,,
r,,,CollTemp,d.38 TCollector_DK: Collector temperature,,,b509,0d7800,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,SolBackTemp,d.39 TSolarBack_DK: Solarertrag Sensor,,,b509,0d6800,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Temperatur,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,SBTemp,d.42 TSB_DK: Speicherbodentemperatur,,,b509,0d0600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler: Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,,,b509,0d7600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Minuten
r,,,EBusHeatcontrol,d.90 Digitaler Regler: Gibt an ob ein digitaler Regler erkannt wurde,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Empfängerstatus
r,,,ExternalFlowTempDesired,ext. Vorlaufsollwert: Vorlaufsollwert von einem externen Regler an Klemme 7-8-9,,,b509,0d2500,value,,D2C,,°C,Temperatur
r,,,ExternalHwcSwitch,Wasserschalter: Speicheranforderung eines externen Speichers über den Speicherkontakt,,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,WaterPressure,Wasserdruck,,,b509,0d0200,press,,FLT,,bar,Druck,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
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
r,,,HwcImpellorSwitch,Brauchwasserzapfung: WW Zapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,WarmstartDemand,Warmstartanforderung: Warmstartaktivierung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,BoilerType,BoilerType_DK: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,ParamToken,ParamToken_DK: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,Expertlevel_ReturnTemp,Externer Rücklauftemperatursensor,,,b509,0d6b00,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,Rückmeldung des Temperaturbegrenzer Signals,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,SolPump,SolarPump_DK: Modulation of solarpump,,,b509,0d7d00,value,,UCH,,%,
r,,,EbusVoltage,Rückmeldung der eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,Abgasklappe offen: Rückmeldung Flüssiggasventil,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte_DK: Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,Lüfter Solldrehzahl,,,b509,0d9f00,value,,UIN,,rpm,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,Statenumber,Statenumber_DK: status number,,,b509,0dab00,value,,UCH,,,
r,,,WaterpressureBranchControlOff,Drucksprungerkennung ausschalten: Überwachung der Druckänderung beim Schalten der Pumpe kann hiermit aktiviert oder deaktiviert werden,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN Startadresse,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,VR65 angeschlossen: Externes Speichermodul (VR65) angeschlosssen,,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage_DK: Second stage of the pump activated,,,b509,0ded00,value,,UCH,240=off;15=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV_DK: Alle IFC Fehler sind nichtflüchtig,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,VortexFlowSensor,"VortexFlowSensor_DK: Predictive Maintenance data, CH water flow",,,b509,0dd500,value,,UIN,,,
r,,,DisplayMode,DisplayMode_DK: Display mode of the aplliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,Gasventil 3: Gasventil Schaltsignal (vom Prozessor),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM_DK: EEPROM Initialisierrung (für die Produktion),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,Eingang Schaltuhr: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,rpm,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,rpm,Lüfter Maximaldrehzahl
r,,,ExternGasvalve,Ext. Gasventil: Externes Magnetventil,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF Datum/Uhrzeit,,,b509,0de500,btime,,BTI,,,Uhrzeit,bdate,,BDA,,,Datum
r,,,FlowSetPotmeter,Vorlaufsollwert Poti: Vorlaufsollwert Potentiometer,,,b509,0df003,value,,D2C,,°C,Temperatur
r,,,HwcSetPotmeter,WW Sollwert Potentiometer: WW Sollwertpotentiometer,,,b509,0df103,value,,D2C,,°C,Temperatur
r,,,HwcSwitch,Wasserschalter: WW aus/ein,,,b509,0df303,value,,UCH,0=off;1=on,,
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,PumpspeedDesired,d.14 PumpspeedSetpoint: PWM pump speed,,,b509,0d0a04,value,,UCH,,,
r,,,ReturnRegulation,d.17 Rücklaufregelung: Aktivierung der Rücklaufregelung,,,b509,0d0c04,value,,UCH,0=off;1=on,,
w,,install,ReturnRegulation,d.17 Rücklaufregelung: Aktivierung der Rücklaufregelung,,,b509,0e0c04,value,,UCH,0=off;1=on,,
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0d4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
w,,install,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0e4904,value,,UCH,0=post_run;1=permanent;2=winter,,Pumpenbetriebsart für den Heizbetrieb
r,,,SecondPumpMode,d.19 Betriebsart 2. Pumpe: Betriebsart 2stufige Pumpe:0 : Brennerbetrieb = Stufe 2 / Vor-Nachlauf = Stufe 11: Brennerbetrieb + Vorlauf = Stufe 1 / Warmwasser = Stufe 22 : Wie 1 aber im Heizbetrieb hängt die Stufe von der Teillast ab (default)3 : Immer Stufe 2,,,b509,0d0b04,value,,UCH,,,
w,,install,SecondPumpMode,d.19 Betriebsart 2. Pumpe: Betriebsart 2stufige Pumpe:0 : Brennerbetrieb = Stufe 2 / Vor-Nachlauf = Stufe 11: Brennerbetrieb + Vorlauf = Stufe 1 / Warmwasser = Stufe 22 : Wie 1 aber im Heizbetrieb hängt die Stufe von der Teillast ab (default)3 : Immer Stufe 2,,,b509,0e0b04,value,,UCH,,,
r,,,HwcTempMax,d.20 Max. WW Temperatur: Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).,,,b509,0d4304,value,,D2C,,°C,Temperatur
w,,install,HwcTempMax,d.20 Max. WW Temperatur: Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).,,,b509,0e4304,value,,D2C,,°C,Temperatur
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
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit: Max. Speicherladezeit für Speicher ohne eigene Regelung,,,b509,0d1204,value,,UCH,,min,Minuten
w,,install,StorageLoadTimeMax,d.75 Max. Speicherladezeit: Max. Speicherladezeit für Speicher ohne eigene Regelung,,,b509,0e1204,value,,UCH,,min,Minuten
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW: Maximal erlaubte Vorlauftemperatur für die Speicherladung,,,b509,0d0f04,value,,D2C,,°C,Temperatur
w,,install,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW: Maximal erlaubte Vorlauftemperatur für die Speicherladung,,,b509,0e0f04,value,,D2C,,°C,Temperatur
r,,,HcHours,d.80 Hz. Betriebsstunden: Betriebsstunden im Heizbetrieb,,,b509,0d2800,value,,UIN,,h,Stunden
r,,,Yield,d.59 SolarYieldkWh_DK,,,b509,0d7200,value,,UIN,,kWh,
r,,,HwcHours,d.81 Betriebsstunden WW: Betriebsstunden Brauchwasser,,,b509,0d2200,value,,UIN,,h,Stunden
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung: Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung,,,b509,0d2004,value,,UIN,,h,Stunden
w,,install,HoursTillService,d.84 Stunden bis Wartung: Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung,,,b509,0e2004,value,,UIN,,h,Stunden
r,,,DSNOffset,d.93 Gerätekennung: Gerätekennung (DSN),,,b509,0d3004,value,,UCH,,,
w,,service,DSNOffset,d.93 Gerätekennung: Gerätekennung (DSN),,,b509,0e3004,value,,UCH,,,
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,
w,,install,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,
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
