// Generated code, don't edit

typedef enum {
	SensorDEC, // 0 - rpm
	SensorTPS, // 1 - deg
	SensorMAF, // 2 - v
	SensorVSS, // 3 - mph
	SensorACT, // 4 - f
	SensorECT, // 5 - f
	SensorHEGO1, // 6 - lamda
	SensorHEGO2, // 7 - lamda
	SensorBAR, // 8 - bp
	SensorEGR, // 9 - v
	SensorRPM, // 10 - rpm
	SensorAMPS1, // 11 - f
	SensorVCC, // 12 - v
	SensorGEAR, // 13 - scalar
	VehicleFuelSender, // 14 - pct
	VehicleRadiatorTemp, // 15 - deg
	VehicleGauge1, // 16 - pct
	VehicleGauge2, // 17 - deg
	CalcFuelPump, // 18 - pwm
	CalcFan1, // 19 - pwm
	CalcFan2, // 20 - pwm
	CalcEPAS1, // 21 - pwm
	CalcEPAS2, // 22 - pwm
	CalcFinalPulseAdvance, // 23 - deg
	CalcFinalSparkAdvance, // 24 - deg
	CalcFinalPulseWidth, // 25 - us
	CalcFinalSparkWidth, // 26 - us
	CalcFinalLamda, // 27 - lamda
	CalcLoad, // 28 - pct
	CalcVolumetricRate, // 29 - lb/hr
	CalcTheoreticalRate, // 30 - lb/hr
	CalcDisplacementVolume, // 31 - cf/min
	CalcLbsPerHr, // 32 - lb/hr
	CalcGalPerHour, // 33 - gal/hr
	CalcMPG, // 34 - mpg
	CalcDutyCycle, // 35 - pct
	CalcThrottleRate, // 36 - deg/s
	CalcRPMtoMPH, // 37 - mph
	FlagIsWOT, // 38 - bit
	FlagIsLimpMode, // 39 - bit
	FlagIsClosedLoop, // 40 - bit
	FlagIsHighAlt, // 41 - bit
	FlagIsMonitoring, // 42 - scalar
	TimeOnSeconds, // 43 - sec
	TimeCrankSeconds, // 44 - sec
	TimeRunSeconds, // 45 - sec
	TimeIdleSeconds, // 46 - sec
	TimeMovingSeconds, // 47 - sec
	TableAccelEnrichment, // 48 - lb/min
	TableFuelBase, // 49 - a/f
	TableFuelStartup, // 50 - a/f
	TableInjectorTiming, // 51 - deg
	TableSparkAltitude, // 52 - deg
	TableSparkBase, // 53 - deg
	TableSparkLimp, // 54 - deg
	FuncEecLoadScaling, // 55 - ratio
	FuncMafTransfer, // 56 - kg/hr
	FuncAcceleratorEnrichmentMultiplierVsTp, // 57 - ratio
	FuncOpenLoopFuelMultiplierVsAct, // 58 - ratio
	FuncMinLowSpeedDwell, // 59 - ms
	FuncMinHighSpeedDwell, // 60 - ms
	FuncMaximumDashpotClip, // 61 - lb/min
	FuncSeaLevelLuggingOLFuelMultiplier, // 62 - ratio
	FuncAltitudeLuggingOLFuelMultiplier, // 63 - ratio
	FuncInjectorOffsetVsBatteryVoltage, // 64 - v
	FuncOpenLoopFuelMultiplierVsRpm, // 65 - ratio
	FuncCrankFuelPulseWidthMultiplier, // 66 - ratio
	FuncCrankingFuelPulseWidthVsEct, // 67 - ms
	FuncSparkAdvanceVsAct, // 68 - deg
	FuncSparkAdvanceVsBp, // 69 - deg
	FuncSparkAdvanceRateVsRpm, // 70 - deg
	FuncWotFuelMultiplierVsRpm, // 71 - ratio
	FuncWotSparkAdvanceVsRpm, // 72 - deg
	FuncWotSparkAdvanceVsEct, // 73 - deg
	FuncWotSparkAdvanceVsAct, // 74 - deg
	FuncTransmissionRatio, // 75 - ratio
	ConstInjHiSlope, // 76 - ms
	ConstInjLoSlope, // 77 - ms
	ConstCylinders, // 78 - scalar
	ConstCoils, // 79 - scalar
	ConstEncoderTeeth, // 80 - scalar
	ConstEncoderRatio, // 81 - ratio
	ConstEncoderCompare, // 82 - scalar
	ConstEncoderSyncHigh, // 83 - bit
	ConstEncoderSyncShort, // 84 - bit
	ConstEncoderCountOffset, // 85 - scalar
	ConstEncoderDegreesOffset, // 86 - scalar
	ConstAxleRatio, // 87 - ratio
	ConstTireDiameter, // 88 - in
	ConstGallonWeight, // 89 - lbs
	ConstCrankingRPM, // 90 - rpm
	ConstIdleRPM, // 91 - rpm
	ConstMaxRPM, // 92 - rpm
	ConstStaticTiming, // 93 - deg
	ConstClosedLoopMinTemp, // 94 - f
	ConstHighAlt, // 95 - bp
	ConstWOT, // 96 - deg
	ConstLamda, // 97 - ratio
	ConstCamIntakeCenter, // 98 - deg
	ConstCamIntakeDuration, // 99 - deg
	ConstCamExhaustCenter, // 100 - deg
	ConstCamExhaustDuration, // 101 - deg
	ConstTicksInUS, // 102 - scalar
	ConstCuIn, // 103 - cuin
	MaxParam
} ParamTypeId;

static const uint16_t MaxEncoderTeeth = 4;
static const uint16_t MaxCylinders = 2;
static const uint16_t MaxCoils = 2;

