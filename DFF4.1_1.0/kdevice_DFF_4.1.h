#define MANUFACTURER_ID 49374
#define DEVICE_ID 1
#define REVISION 0

#define COMOBJ_firmwareTransfer 0
#define COMOBJ_centralWindowOpenClose 1
#define COMOBJ_centralWindowStop 2
#define COMOBJ_centralWindowAbsPosition 3
#define COMOBJ_centralShutterOpenClose 4
#define COMOBJ_centralShutterStop 5
#define COMOBJ_centralShutterAbsPosition 6
#define COMOBJ_centralShutterLock 7
#define COMOBJ_centralVentilation 8
#define COMOBJ_abOpenClose 9
#define COMOBJ_abStop 10
#define COMOBJ_abAbsPosition 11
#define COMOBJ_abReference 12
#define COMOBJ_abDriveToPosition 13
#define COMOBJ_abVentilation 14
#define COMOBJ_abWindAlarm 15
#define COMOBJ_abRainAlarm 16
#define COMOBJ_abStatusCurrentPos 17
#define COMOBJ_abStatusOpenPos 18
#define COMOBJ_abStatusClosePos 19
#define COMOBJ_abStatusMovement 20
#define COMOBJ_abStatusMovementOpen 21
#define COMOBJ_abStatusMovementClose 22
#define COMOBJ_abStatusMovementDirection 23
#define COMOBJ_abStatusLock 24
#define PARAM_startupDelay 0
#define PARAM_triggerTime 1
#define PARAM_manualControl 2
#define PARAM_ventilationTime 3
#define PARAM_setting_channel_ab 4
#define PARAM_setting_channel_cd 5
#define PARAM_setting_channel_ef 6
#define PARAM_setting_channel_gh 7
#define PARAM_channel_runTimeOpen 8
#define PARAM_channel_runTimeClose 9
#define PARAM_channel_runTimeRollover 10
#define PARAM_channel_lockAction 11
#define PARAM_channel_unlockAction 12
#define PARAM_channel_rainAlarm 13
#define PARAM_channel_rainAlarmObservationTime 14
#define PARAM_channel_rainAlarmAction 15
#define PARAM_channel_windAlarm 16
#define PARAM_channel_windAlarmObservationTime 17
#define PARAM_channel_windAlarmAction 18
#define PARAM_channel_ventByComObj 19
#define PARAM_channel_absPositionComObj 20
#define PARAM_channel_driveToPositionComObj 21
#define PARAM_channel_driveToPositionValue 22
#define PARAM_channel_referenceRunComObj 23
#define PARAM_channel_runStatusComObj 24
#define PARAM_channel_absPosStatusComObj 25
#define PARAM_channel_runStatusPositionComObj 26

#ifdef KONNEKTING_h        
KnxComObject KnxDevice::_comObjectsList[] = {
    /* Index 0 - firmwareTransfer */ KnxComObject(KNX_DPT_60000_60000, 0x2a),
    /* Index 1 - centralWindowOpenClose */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 2 - centralWindowStop */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 3 - centralWindowAbsPosition */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 4 - centralShutterOpenClose */ KnxComObject(KNX_DPT_1_007, 0x2a),
    /* Index 5 - centralShutterStop */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 6 - centralShutterAbsPosition */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 7 - centralShutterLock */ KnxComObject(KNX_DPT_1_003, 0x2a),
    /* Index 8 - centralVentilation */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 9 - abOpenClose */ KnxComObject(KNX_DPT_1_009, 0x2a),
    /* Index 10 - abStop */ KnxComObject(KNX_DPT_1_010, 0x2a),
    /* Index 11 - abAbsPosition */ KnxComObject(KNX_DPT_5_001, 0x2a),
    /* Index 12 - abReference */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 13 - abDriveToPosition */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 14 - abVentilation */ KnxComObject(KNX_DPT_1_001, 0x2a),
    /* Index 15 - abWindAlarm */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 16 - abRainAlarm */ KnxComObject(KNX_DPT_1_005, 0x2a),
    /* Index 17 - abStatusCurrentPos */ KnxComObject(KNX_DPT_5_001, 0x34),
    /* Index 18 - abStatusOpenPos */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 19 - abStatusClosePos */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 20 - abStatusMovement */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 21 - abStatusMovementOpen */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 22 - abStatusMovementClose */ KnxComObject(KNX_DPT_1_001, 0x34),
    /* Index 23 - abStatusMovementDirection */ KnxComObject(KNX_DPT_1_008, 0x2a),
    /* Index 24 - abStatusLock */ KnxComObject(KNX_DPT_1_011, 0x34)
};
const byte KnxDevice::_numberOfComObjects = sizeof (_comObjectsList) / sizeof (KnxComObject); // do not change this code
       
byte KonnektingDevice::_paramSizeList[] = {
    /* Index 0 - startupDelay */ PARAM_UINT8,
    /* Index 1 - triggerTime */ PARAM_UINT8,
    /* Index 2 - manualControl */ PARAM_UINT8,
    /* Index 3 - ventilationTime */ PARAM_UINT8,
    /* Index 4 - setting_channel_ab */ PARAM_UINT8,
    /* Index 5 - setting_channel_cd */ PARAM_UINT8,
    /* Index 6 - setting_channel_ef */ PARAM_UINT8,
    /* Index 7 - setting_channel_gh */ PARAM_UINT8,
    /* Index 8 - channel_runTimeOpen */ PARAM_UINT8,
    /* Index 9 - channel_runTimeClose */ PARAM_UINT8,
    /* Index 10 - channel_runTimeRollover */ PARAM_UINT8,
    /* Index 11 - channel_lockAction */ PARAM_UINT8,
    /* Index 12 - channel_unlockAction */ PARAM_UINT8,
    /* Index 13 - channel_rainAlarm */ PARAM_UINT8,
    /* Index 14 - channel_rainAlarmObservationTime */ PARAM_UINT8,
    /* Index 15 - channel_rainAlarmAction */ PARAM_UINT8,
    /* Index 16 - channel_windAlarm */ PARAM_UINT8,
    /* Index 17 - channel_windAlarmObservationTime */ PARAM_UINT8,
    /* Index 18 - channel_windAlarmAction */ PARAM_UINT8,
    /* Index 19 - channel_ventByComObj */ PARAM_UINT8,
    /* Index 20 - channel_absPositionComObj */ PARAM_UINT8,
    /* Index 21 - channel_driveToPositionComObj */ PARAM_UINT8,
    /* Index 22 - channel_driveToPositionValue */ PARAM_UINT8,
    /* Index 23 - channel_referenceRunComObj */ PARAM_UINT8,
    /* Index 24 - channel_runStatusComObj */ PARAM_UINT8,
    /* Index 25 - channel_absPosStatusComObj */ PARAM_UINT8,
    /* Index 26 - channel_runStatusPositionComObj */ PARAM_UINT8
};
const int KonnektingDevice::_numberOfParams = sizeof (_paramSizeList); // do not change this code
#endif