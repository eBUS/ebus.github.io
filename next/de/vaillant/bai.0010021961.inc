type,circuit,level,name,comment,qq,zz,pbsb,id,*name,part,type,divisor/values,unit,comment
*r,
*w,
*[id_sw],scan,,,,SW
[id_sw>=413]r,,,APCComStatus,d.92 APC_ComStatus_DK: actoSTORE communication status,,,b509,0d6200,value,,UCH,,,
[id_sw>=413]r,,,APCLegioProtection,d.74 Legionellenschutz int.Speicher,,,b509,0d9704,value,,UCH,,,Legionellenschutz für internen Speicher
[id_sw>=413]w,,install_NOT_YET_CONFIRMED,APCLegioProtection,d.74 Legionellenschutz int.Speicher,,,b509,0e9704,value,,UCH,,,Legionellenschutz für internen Speicher
r,,,PartloadHcKW,d.00 Heizungsteillast,,,b509,0d6c00,value,,UCH,,kW,Heizungsteillast
w,,install_NOT_YET_CONFIRMED,PartloadHcKW,d.00 Heizungsteillast,,,b509,0e6c00,value,,UCH,,kW,Heizungsteillast
r,,,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0d6400,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
w,,install_NOT_YET_CONFIRMED,WPPostrunTime,d.01 Pumpennachlaufzeit,,,b509,0e6400,value,,UCH,,min,Wasserpumpennachlaufzeit nach Heizbetrieb
r,,,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0d2100,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
w,,install_NOT_YET_CONFIRMED,BlockTimeHcMax,d.02 Maximale Brennersperrzeit,,,b509,0e2100,value,,UCH,,min,Max. Brennersperrzeit bei einem Vorlaufsollwert von 20°C
r,,,HwcTemp,d.03 WW Vorlaufsolltemp: Vorlauftemperatur bei Warmwasserzapfung (nur bei Kombi-Heizgeräten),,,b509,0d1600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,StorageTemp,d.04 Speicheristtemp: current temperature for warm start sensor (combination boiler only) Current storage tank sensor (system boiler only),,,b509,0d1700,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FlowTempDesired,d.05 Vorlaufsolltemperatur: Vorlaufsolltemperatur oder Rücklaufsolltemperatur (wenn Rücklaufregelung aktiviert wurde). Der Maximalwert wird über d.71 und einem eBUS Regler begrenzt.,,,b509,0d3900,value,,D2C,,°C,Temperatur
r,,,HwcTempDesired,d.06 Brauchwassersollwert: Gewünschte Warmwasser Solltemperatur,,,b509,0dea03,value,,D2C,,°C,Temperatur
r,,,StorageTempDesired,d.07 Speichersolltemp.: VCW: Solltemperatur des WarmstartspeichersVC: Solltemperatur des externen Speichers,,,b509,0d0400,value,,D2C,,°C,Temperatur
r,,,ACRoomthermostat,d.08 Raumthermostat: Status des extrenen Raumthermostat an Klemme 3/4,,,b509,0d2a00,value,,UCH,0=off;1=on,,
r,,,ExtFlowTempDesiredMin,d.09 Min. ext. Vorlaufsollwert: minimum out of Kl.7 and eBus flow setpoint,,,b509,0df304,value,,D2C,,°C,Temperatur
r,,,WP,d.10 Wasserpumpe: Interne Heizungspumpe,,,b509,0d4400,value,,UCH,0=off;1=on,,
r,,,ExtWP,d.11 ext. Heizungspumpe: Externe Heizungspumpe,,,b509,0d3f00,value,,UCH,0=off;1=on,,
r,,,Storageloadpump,d.12 Speicherladepumpe: Ladepumpenanforderung,,,b509,0d9e00,value,,UCH,,%,
r,,,CirPump,d.13 Zirkulationspumpe: Status Zirkulationspumpe (über ein externes Modul ansteuerbar),,,b509,0d7b00,value,,UCH,0=off;1=on,,
r,,,PumpPowerDesired,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0da100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Leistungsstufe der Heizungspumpe
w,,install_NOT_YET_CONFIRMED,PumpPowerDesired,d.14 WP_PWMPowerDia_DK: Set-PWM-Powerrate of electronic-pump,,,b509,0ea100,value,,UCH,0=auto;1=53;2=60;3=70;4=85;5=100,%,PWM-Leistungsstufe der Heizungspumpe
r,,,PumpPower,d.15 Leistung Heizungspumpe,,,b509,0d7300,value,,UCH,,,
r,,,DCRoomthermostat,d.16 Raumthermostat: Wärmeanforderung vom externen Regler (Klemme 3-4),,,b509,0d0e00,value,,UCH,0=off;1=on,,
r,,,HwcDemand,d.22 WW Anforderung: Brauchwasseranforderung (Zapfung oder Schaltsignal vom Speicher),,,b509,0d5800,value,,UCH,0=no;1=yes,,
r,,,HeatingSwitch,d.23 Winterbetrieb,,,b509,0df203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
w,,install_NOT_YET_CONFIRMED,HeatingSwitch,d.23 Winterbetrieb,,,b509,0ef203,value,,UCH,0=off;1=on,,Wintermodus aktiv (Heizbetrieb und Warmwasser)
r,,,StoragereleaseClock,d.25 Speicherfreigabe: Freigabe der Speichrladung oder des Warmstartspeichers durcheinen eBUS Regler,,,b509,0d4704,value,,UCH,0=no;1=yes,,
r,,,TargetFanSpeed,d.33 Lüfter Solldrehzahl,,,b509,0d2400,value,,UIN,,rpm,Drehzahlsollwert des Lüfters
r,,,FanSpeed,d.34 Lüfteristdrehzahl,,,b509,0d8300,value,,UIN,,rpm,Aktuelle Lüfterdrehzahl
r,,,PositionValveSet,d.35 Position VUV: Position des 3-Wege Ventil: 100=Warmwasser 0=Heizbetrieb 40=Mittenstellung,,,b509,0d5400,value,,UCH,,,
r,,,HwcWaterflow,d.36 Zapfmenge: WW Durchflußsensor,,,b509,0d5500,value,,UIN,100,,
r,,,FlowTemp,d.40 Vorlauftemperatur,,,b509,0d1800,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,ReturnTemp,d.41 Rücklauftemperatur,,,b509,0d9800,temp,,D2C,,°C,Temperatur,tempmirror,,UIN,,°C,,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,IonisationVoltageLevel,d.44 Spannungspegel Ionisationssignal,,,b509,0da400,value,,SIN,10,,Ionisationsspannung: größer 80 = keine Flammekleiner 40 = gutes Flammensignal
r,,,OutdoorstempSensor,d.47 Außentemperaturfühler: Außentemperaturwert (ohne Korrekturwert) und Sensorstatus,,,b509,0d7600,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,RemainingBoilerblocktime,d.67 Verbleibende Brennersperrzeit,,,b509,0d3800,value,,UCH,,min,Minuten
r,,,EBusHeatcontrol,d.90 Digitaler Regler: Gibt an ob ein digitaler Regler erkannt wurde,,,b509,0d0004,value,,UCH,0=no;1=yes,,
r,,,DcfState,d.91 DCF Status,,,b509,0d6900,value,,UCH,0=nosignal;1=ok;2=sync;3=valid,,DCF Empfängerstatus
r,,,ExternalHwcSwitch,Wasserschalter: Speicheranforderung eines externen Speichers über den Speicherkontakt,,,b509,0d0000,value,,UCH,0=off;1=on,,
r,,,WaterPressure,Wasserdruck,,,b509,0d0200,press,,FLT,,bar,Druck,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,Flame,Flammensignal,,,b509,0d0500,value,,UCH,240=off;15=on,,
r,,,ChangesDSN,Anzhl der DSN Änderungen: Anzahl der DSN (Gerätekennung) Änderungen,,,b509,0d0c00,value,,UCH,,,
r,,,GasvalveUC,Schaltsignal für das Gasventil,,,b509,0d0d00,value,,UCH,240=off;15=on,,
r,,,VolatileLockout,Verriegelnde Störabschaltungen: WAHR: STB Fehler sind verriegelnd,,,b509,0d1000,value,,UCH,240=no;15=yes,,
r,,,ModulationDesired,Modulationssollwert,,,b509,0d2e00,value,,SIN,10,%,Modulationssollwert
r,,,FlameSensingASIC,SD_Flame_Sensing_ASIC: Ioni/ADC Wert vom Flammenwächter,,,b509,0d2f00,value,,UIN,,,
r,,,HcUnderHundredStarts,HZ_UnderHundred_SwiActi: Heat switch cycles under hundred,,,b509,0d3000,value,,UCH,,,
r,,,HwcUnderHundredStarts,BW_UnderHundred_SwiActi: DHW switch cycles under hundred,,,b509,0d3100,value,,UCH,,,
r,,,EbusSourceOn,eBUS Spannungsversorgung: Aktivierung der eBUS Speisung,,,b509,0d3400,value,,UCH,0=off;1=on,,
r,,,Fluegasvalve,Abgasklappe: Flüssiggas Magnetventil,,,b509,0d3c00,value,,UCH,0=off;1=on,,
r,,,ExternalFaultmessage,Ext. Störmeldung: Signal für die externe Störmeldeeinrichtung,,,b509,0d3e00,value,,UCH,0=off;1=on,,
r,,,GasvalveASICFeedback,Rückmeldung Gasventil vom ASIC,,,b509,0d4700,value,,UCH,240=off;15=on,,
r,,,GasvalveUCFeedback,Rückmeldung Gasventil vom Prozessor,,,b509,0d4800,value,,UCH,240=off;15=on,,
r,,,Ignitor,Zünder: Zündung aktiviert,,,b509,0d4900,value,,UCH,240=off;15=on,,
r,,,HwcTypes,WW Typen: DHW type of the appliance,,,b509,0d4b00,value,,UCH,,,
r,,,HwcImpellorSwitch,Brauchwasserzapfung: WW Zapfung,,,b509,0d5700,value,,UCH,0=no;1=yes,,
r,,,WarmstartDemand,Warmstartanforderung: Warmstartaktivierung,,,b509,0d3a04,value,,UCH,0=no;1=yes,,
r,,,BoilerType,BoilerType: Boiler typ of the bmu,,,b509,0d5e00,value,,UCH,,,
r,,,ParamToken,ParamToken: token for parameter managment,,,b509,0d6000,value,,UCH,,,
r,,,ReturnTempExternal,Externer Rücklauftemperatursensor,,,b509,0d6b00,temp,,D2C,,°C,Temperatur,sensor,,UCH,0=ok;85=circuit;170=cutoff,,Fühlerstatus
r,,,FloorHeatingContact,Eingang Anlegethermostat,,,b509,0d7000,value,,UCH,0=off;1=on,,
r,,,Templimiter,Rückmeldung des Temperaturbegrenzer Signals,,,b509,0d7700,value,,UCH,240=off;15=on,,
r,,,EbusVoltage,Rückmeldung der eBUS Spannung,,,b509,0d7f00,value,,UCH,0=off;1=on,,
r,,,FluegasvalveOpen,Abgasklappe offen: Rückmeldung Flüssiggasventil,,,b509,0d8900,value,,UCH,0=off;1=on,,
r,,,Testbyte,Testbyte (relevant for the Tester),,,b509,0d9900,value,,UCH,,,
r,,,DSN,DSN: Device Specific number,,,b509,0d9a00,value,,UIN,,,
r,,,TargetFanSpeedOutput,Lüfterdrehzahl,,,b509,0d9f00,value,,UIN,,rpm,Lüfterdrehzahl
r,,,PowerValue,Leistungsdaten,,,b509,0daa00,value,,HEX:6,,,Geräteleistung (min und max)
r,,,Statenumber,Statenumber: status number,,,b509,0dab00,value,,UCH,,,
r,,,WaterpressureBranchControlOff,Drucksprungerkennung ausschalten: Überwachung der Druckänderung beim Schalten der Pumpe kann hiermit aktiviert oder deaktiviert werden,,,b509,0daf00,value,,UCH,0=off;1=on,,
r,,,DSNStart,DSN Startadresse,,,b509,0d3104,value,,UIN,,,
r,,,ExtStorageModulCon,VR65 angeschlossen: Externes Speichermodul (VR65) angeschlosssen,,,b509,0dbf00,value,,UCH,0=no;1=yes,,
r,,,PartnumberBox,Partnumber_Box,,,b509,0dc000,value,,HEX:5,,,part number of the eBox
r,,,WPSecondStage,WP_SecondStage: Second stage of the pump activated,,,b509,0ded00,value,,UCH,0=off;1=on,,
r,,,TemplimiterWithNTC,SD_STL_with_NTC: Temperaturbegrenzer Art:1 = NTC0 = Schaltkontakt,,,b509,0dd200,value,,UCH,240=no;15=yes,,
r,,,VolatileLockoutIFCGV,SD_VolatileLockout_IFC_GV: Alle IFC Fehler sind nichtflüchtig,,,b509,0dd300,value,,UCH,240=no;15=yes,,
r,,,DisplayMode,DisplayMode: Display mode of the aplliance,,,b509,0dda00,value,,UCH,,,
r,,,Gasvalve3UC,Gasventil 3: Gasventil Schaltsignal (vom Prozessor),,,b509,0ddb00,value,,UCH,240=off;15=on,,
r,,,InitialisationEEPROM,InitialisationEEPROM: EEPROM Initialisierung (für die Produktion),,,b509,0ddc00,value,,UCH,0=no;1=yes,,
r,,,TimerInputHc,Eingang Schaltuhr: timer input (block heatdemand),,,b509,0dde00,value,,UCH,0=off;1=on,,
r,,,FanMinSpeedOperation,Min. Lüfterdrehzahl,,,b509,0ddf00,value,,UIN,,rpm,Lüfter Minimaldrehzahl
r,,,FanMaxSpeedOperation,Max. Lüfterdrehzahl,,,b509,0de000,value,,UIN,,rpm,Lüfter Maximaldrehzahl
r,,,ExternGasvalve,Ext. Gasventil: Externes Magnetventil,,,b509,0de400,value,,UCH,0=off;1=on,,
r,,,DCFTimeDate,DCF Datum/Uhrzeit,,,b509,0de500,vti,,VTI,,,,hda,,HDA,,,
r,,,HwcSwitch,Wasserschalter,,,b509,0df303,value,,UCH,0=off;1=on,,WW aus/ein
w,,install_NOT_YET_CONFIRMED,HwcSwitch,Wasserschalter,,,b509,0ef303,value,,UCH,0=off;1=on,,WW aus/ein
r,,,ProductionByte,ProductionByte,,,b509,0d3e04,value,,UCH,,,
r,,,SerialNumber,SerialNumber,,,b509,0d3f04,value,,HEX:8,,,Seriennummer AI
r,,,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0db300,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
w,,install_NOT_YET_CONFIRMED,ReturnRegulation,d.17 Rücklaufregelung,,,b509,0eb300,value,,UCH,0=off;1=on,,Aktivierung der Rücklaufregelung
r,,,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0db700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pumpenbetriebsart für den Heizbetrieb
w,,install_NOT_YET_CONFIRMED,HcPumpMode,d.18 Pumpenbetriebsart,,,b509,0eb700,value,,UCH,0=post_run;1=permanent;2=winter;3=eco,,Pumpenbetriebsart für den Heizbetrieb
r,,,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0dd900,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
w,,install_NOT_YET_CONFIRMED,HwcTempMax,d.20 Max. WW Temperatur,,,b509,0ed900,value,,D2C,,°C,Max. Speichersollwert. Begrenzt den max. Einstellbereich des Potentiometers (Rechtsanschlag).
r,,,OptionalRelais,d.26 OptionalRelais,,,b509,0db800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
w,,install_NOT_YET_CONFIRMED,OptionalRelais,d.26 OptionalRelais,,,b509,0eb800,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Option relais function
r,,,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0db900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
w,,install_NOT_YET_CONFIRMED,AccessoriesOne,d.27 Zubehörrelais 1,,,b509,0eb900,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 1
r,,,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0dba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
w,,install_NOT_YET_CONFIRMED,AccessoriesTwo,d.28 Zubehörrelais 2,,,b509,0eba00,value,,UCH,1=circulationpump;2=extheatingpump;3=storagechargingpump;4=fluegasflapextractorhood;5=externalgasvalve;6=externalerrormessage;7=solarpump;8=remotecontrol,,Funktion des Zubehörrelais 2
r,,,FanSpeedOffsetMin,d.50 Offset min. Lüfterdrehzahl,,,b509,0da700,value,,SIN,,rpm,Offset min. Drehzahl
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMin,d.50 Offset min. Lüfterdrehzahl,,,b509,0ea700,value,,SIN,,rpm,Offset min. Drehzahl
r,,,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0da800,value,,SIN,,rpm,Offset max. Drehzahl
w,,install_NOT_YET_CONFIRMED,FanSpeedOffsetMax,d.51 Offset max. Lüfterdrehzahl,,,b509,0ea800,value,,SIN,,rpm,Offset max. Drehzahl
r,,,SolPostHeat,d.58 Solarbetriebsart,,,b509,0d7304,value,,UCH,,,Spezielle WW Funktionen:0 = Solarfunktion deaktiviert (default)1 = Solarfunktion aktiviert und WW Sollwert minimal 60°C2 = Solarfunktion aktiviert und WW Sollwert min. 35°C3 = WW Sollwert minimum 60°C
w,,install_NOT_YET_CONFIRMED,SolPostHeat,d.58 Solarbetriebsart,,,b509,0e7304,value,,UCH,,,Spezielle WW Funktionen:0 = Solarfunktion deaktiviert (default)1 = Solarfunktion aktiviert und WW Sollwert minimal 60°C2 = Solarfunktion aktiviert und WW Sollwert min. 35°C3 = WW Sollwert minimum 60°C
r,,,DeactivationsTemplimiter,d.60 STB Abschaltungen: Anzahl der Abschaltungen durch den Sicherheitstemperaturbgrenzers,,,b509,0d2000,value,,UCH,,,
r,,,DeactivationsIFC,d.61 Anzahl Zündfehler: Anzahl der Zündfehler (nicht erfolgreiche Züdung im letzten Versuch oder fehlerhaftes Flammensignal),,,b509,0d1f00,value,,UCH,,,
r,,,AverageIgnitiontime,d.64 Mittlere Zündzeit,,,b509,0d2d00,value,,UCH,10,s,Mittlere Zündzeit
r,,,MaxIgnitiontime,d.65 Max. Zündzeit,,,b509,0d2c00,value,,UCH,10,s,Maximale Zündzeit
r,,,CounterStartattempts1,d.68 Zündfehler 1. Versuch: Anzahl der erfolglosen Zündversuche (im 1. Versuch),,,b509,0d6e00,value,,UCH,,°C,Temperatur
r,,,CounterStartattempts2,d.69 Zündfehler 2. Versuch: Anzahl der erfolglosen Zündversuche (im 2. Versuch),,,b509,0d6f00,value,,UCH,,°C,Temperatur
r,,,ValveMode,d.70 VUV Betriebsart,,,b509,0d2a04,value,,UCH,,,Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb)
w,,install_NOT_YET_CONFIRMED,ValveMode,d.70 VUV Betriebsart,,,b509,0e2a04,value,,UCH,,,Betriebsart 3-Wegeventil:0 = normaler Modus1 = Mittenstellung2 = Permanent Heizbetrieb (keine Umschaltung in den WW Betrieb)
r,,,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0d0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
w,,install_NOT_YET_CONFIRMED,FlowsetHcMax,d.71 Max. Vorlauftemp. Heizbetrieb,,,b509,0e0e04,value,,D2C,,°C,Einstellung des maximalen Vorlaufsollwert im Heizbetrieb (bei Linksanschlag des Poti)
r,,,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0d1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
w,,install_NOT_YET_CONFIRMED,HwcPostrunTime,d.72 WW Pumpnenachlaufzeit,,,b509,0e1104,value,,UCH,-10,s,Pumpennachlaufzeit nach Speicherladung
r,,,WarmstartOffset,d.73 Warmstart Offset,,,b509,0d1004,value,,D2C,,°C,Offset für Warmstartsollwert (nur bei VCW)
w,,install_NOT_YET_CONFIRMED,WarmstartOffset,d.73 Warmstart Offset,,,b509,0e1004,value,,D2C,,°C,Offset für Warmstartsollwert (nur bei VCW)
r,,,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0d6600,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
w,,install_NOT_YET_CONFIRMED,StorageLoadTimeMax,d.75 Max. Speicherladezeit,,,b509,0e6600,value,,UCH,,min,Max. Speicherladezeit für Speicher ohne eigene Regelung
r,,,CodingResistor,d.76 SD_CodingResistor_DK,,,b509,0d9200,value,,HEX:3,,,boiler identification resistor
r,,,PartloadHwcKW,d.77 Speicherteillast,,,b509,0d0804,value,,UCH,,kW,Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden)
w,,install_NOT_YET_CONFIRMED,PartloadHwcKW,d.77 Speicherteillast,,,b509,0e0804,value,,UCH,,kW,Teillast für Speicherladung (Geräteleistung kann auf den angegebenen Wert limitiert werden)
r,,,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0da600,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
w,,install_NOT_YET_CONFIRMED,FlowsetHwcMax,d.78 Max. Vorlauftemp. WW,,,b509,0ea600,value,,D2C,,°C,Maximal erlaubte Vorlauftemperatur für die Speicherladung
r,,,HcHours,d.80 Hz. Betriebsstunden: Betriebsstunden im Heizbetrieb,,,b509,0d2800,value,,UIN,,h,Stunden
r,,,HwcHours,d.81 Betriebsstunden WW: Betriebsstunden Brauchwasser,,,b509,0d2200,value,,UIN,,h,Stunden
r,,,HcStarts,d.82 Schaltspiele Heizbetrieb,,,b509,0d2900,value,,UIN,-100,,Schaltspiele Heizbetrieb
r,,,HwcStarts,d.83 Schaltspiele BW Betrieb,,,b509,0d2300,value,,UIN,-100,,Schaltspiele WW Betrieb
r,,,HoursTillService,d.84 Stunden bis Wartung,,,b509,0dac00,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
w,,install_NOT_YET_CONFIRMED,HoursTillService,d.84 Stunden bis Wartung,,,b509,0eac00,value,,UIN,,h,Wartungsintervall:Anzahl der Stunden bis zur nächsten Wartung
r,,,AntiCondensValue,d.85 Minimale Leistung zur Vermeidung von Kondensation,,,b509,0dec00,value,,UCH,,kW,Anhebung der minimalen Leistung
w,,install_NOT_YET_CONFIRMED,AntiCondensValue,d.85 Minimale Leistung zur Vermeidung von Kondensation,,,b509,0eec00,value,,UCH,,kW,Anhebung der minimalen Leistung
r,,,SpecialAdj,d.88 SpecialAdj,,,b509,0d7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
w,,install_NOT_YET_CONFIRMED,SpecialAdj,d.88 SpecialAdj,,,b509,0e7604,value,,UCH,,,"switching on threshold for recognition of water tapping0 = 1,5 l/min and no delay, 1 = 3,7 l/min and 2s delay"
r,,,DSNOffset,d.93 Gerätekennung,,,b509,0d3004,value,,UCH,,,Gerätekennung (DSN)
w,,service_NOT_YET_CONFIRMED,DSNOffset,d.93 Gerätekennung,,,b509,0e3004,value,,UCH,,,Gerätekennung (DSN)
r,,,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0d6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
w,,install_NOT_YET_CONFIRMED,SetFactoryValues,d.96 Werkseinstellungen,,,b509,0e6804,value,,UCH,0=no;1=yes,,Werkseinstellungen
r,,,TempGradientFailure,Gradientenfehler: Anzahl der Boilerabschaltung wegen zu hohem Gradient (S.54),,,b509,0d1100,value,,UCH,,°C,Temperatur
r,,,TempDiffBlock,TempDiffBlock: Number of modulationblocking of the boilers cause of to high/incorrect difference of flow/return temperatures,,,b509,0d1200,value,,UCH,,°C,Temperatur
r,,,TempDiffFailure,TempDiffFailure: Anzahl der Abschaltungen wegen zu hoher / fehlerhafter Differenz von Vor- und Rücklauftemperatur,,,b509,0d1300,value,,UCH,,°C,Temperatur
r,,,PumpHours,Betriebsstunden Pumpe: Pumpenbetriebsstunden,,,b509,0d1400,value,,UIN,,h,Stunden
r,,,HcPumpStarts,CH_PumpCommunt: Schaltspiele Pumpe,,,b509,0d1500,value,,UIN,,,Anzahl Starts
r,,,ValveStarts,3WV Schaltspiele: Anzahl der 3WV Umschaltungen,,,b509,0d1a00,value,,UIN,,,Anzahl Starts
r,,,FanHours,Betriebsstunden Lüfter: Betriebsstunden des Lüfters,,,b509,0d1b00,value,,UIN,,h,Stunden
r,,,FanStarts,FanCommunt: Anzahl der Lüfterschaltspiele,,,b509,0d1c00,value,,UIN,,,Anzahl Starts
r,,,OverflowCounter,Überlauf PM Zähler: Predictive Maintenance counter have got an overflow,,,b509,0d1e00,value,,UCH,0=no;1=yes,,
r,,,TempMaxDiffExtTFT,MaxTempDiffExtTFT: Predictive maintenance data,,,b509,0d2700,value,,D2C,,°C,Temperatur
r,,,MinIgnitiontime,Minimale Zündzeit,,,b509,0d2b00,value,,UCH,10,s,Minimale Zündzeit
r,,,Maintenancedata_HwcTempMax,Max. WW Temperatur: Maximaltemperatur gemessen am Brauchwasserauslaufsensor,,,b509,0d3500,value,,D2C,,°C,Temperatur
r,,,StorageTempMax,Max. Speichertemp.: Maximaltemperatur gemessen am Speichersensor,,,b509,0d3600,value,,D2C,,°C,Temperatur
r,,,FlowTempMax,Max. Vorlauftemperatur: Maximaltemperatur gemessen am Vorlaufsensor,,,b509,0d3700,value,,D2C,,°C,Temperatur
r,,,FanPWMSum,Fan_PWM_Sum: Predictive Maintenance data for the fan damage recognition,,,b509,0d3a00,value,,UIN,,,
r,,,FanPWMTest,Fan_PWM_Test: Predictive Maintenance data for the fan damage recognition,,,b509,0d3b00,value,,UCH,,,
r,,,DeltaFlowReturnMax,MaxDeltaFlowReturn: Wartungsdaten,,,b509,0d3d00,value,,D2C,,°C,Temperatur
r,,,StorageLoadPumpHours,TankLoadPumpOperationHours: Preditive maintenance data,,,b509,0d4c00,value,,UIN,,h,Stunden
r,,,StorageloadPumpStarts,TankloadPumpCommunt: Preditive maintenance data,,,b509,0d4f00,value,,UIN,,,Anzahl Starts
r,,,HwcWaterflowMax,Max. WW Vorlauftemp.: Maximalwert des Warmwassersensors,,,b509,0d5600,value,,UIN,100,,
r,,,CounterStartAttempts3,Zündfehler 3. Versuch: Anzahl der erfolglosen Zündversuche (im 3. Versuch),,,b509,0d8100,value,,UCH,,°C,Temperatur
r,,,CounterStartAttempts4,Zündfehler 4. Versuch: Anzahl der erfolglosen Zündversuche (im 4. Versuch),,,b509,0d8200,value,,UCH,,°C,Temperatur
r,,,ReturnTempMax,Max. Rücklauftemperatur,,,b509,0dbe00,value,,D2C,,°C,Temperatur
r,,,PumpHwcFlowSum,PumpDHWFlowSum: summed up DHW flow rate,,,b509,0dc100,value,,UIN,,,
r,,,PumpHwcFlowNumber,PumpDHWFlowNumber: number of times DHW flow rate was detected,,,b509,0dc200,value,,UCH,,,
r,,,SHEMaxFlowTemp,Max. WW Vorlauftemp.: Max. Vorlauftemperatur für WW,,,b509,0dc300,value,,D2C,,°C,Temperatur
r,,,SHEMaxDeltaHwcFlow,SHE_MaxDeltaFlowDHW: maximum difference between flow and DHW outlet temperature,,,b509,0dc400,value,,D2C,,°C,Temperatur
r,,,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0dc500,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc1,PrEnergySumDHW1,,,b509,0ec500,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0dc600,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc1,PrEnergyCountDHW1,,,b509,0ec600,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0dc700,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc2,PrEnergySumDHW2,,,b509,0ec700,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0dc800,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc2,PrEnergyCountDHW2,,,b509,0ec800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0dc900,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHwc3,PrEnergySumDHW3,,,b509,0ec900,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0dca00,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHwc3,PrEnergyCountDHW3,,,b509,0eca00,value,,ULG,,,Wartungsdaten
r,,,WaterHcFlowMax,MaxWaterFlowCH: Wartungsdaten,,,b509,0dd000,value,,UIN,,,
r,,,WaterpressureVariantSum,WaterpressureVariantSum: Wartungsdaten,,,b509,0df000,value,,UIN,,mbar,Druck
r,,,WaterpressureMeasureCounter,WaterpressureMeasureCounter: Wartungsdaten,,,b509,0df100,value,,UCH,,,
r,,,PrAPSCounter,PrAPSCounter: Wartungsdaten,,,b509,0df200,value,,UCH,,,
r,,,PrAPSSum,PrAPSSum: Wartungsdaten,,,b509,0df300,value,,UIN,,s,Sekunden
r,,,PrVortexFlowSensorValue,PrVortexFlowSensorValue,,,b509,0df400,value,,SIN,,,Wartungsdaten
r,,,PrEnergySumHc1,PrEnergySumCH1,,,b509,0df500,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc1,PrEnergySumCH1,,,b509,0ef500,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0df600,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc1,PrEnergyCountCH1,,,b509,0ef600,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc2,PrEnergySumCH2,,,b509,0df700,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc2,PrEnergySumCH2,,,b509,0ef700,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0df800,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc2,PrEnergyCountCH2,,,b509,0ef800,value,,ULG,,,Wartungsdaten
r,,,PrEnergySumHc3,PrEnergySumCH3,,,b509,0df900,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergySumHc3,PrEnergySumCH3,,,b509,0ef900,value,,ULG,,,Wartungsdaten
r,,,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0dfa00,value,,ULG,,,Wartungsdaten
w,,install_NOT_YET_CONFIRMED,PrEnergyCountHc3,PrEnergyCountCH3,,,b509,0efa00,value,,ULG,,,Wartungsdaten
