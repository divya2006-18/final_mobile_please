    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 9;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (basic_IO_qarm_mini_P)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.StreamServer_default_value
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.HILRead_analog_channels
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.HILRead_other_channels
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_P.HILWrite_other_channels
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.CompareToConstant_const
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 92;
            section.data(92)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.Constant_Value
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.Constant1_Value
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 4;

                    ;% basic_IO_qarm_mini_P.Constant2_Value
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 8;

                    ;% basic_IO_qarm_mini_P.Constant3_Value
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 12;

                    ;% basic_IO_qarm_mini_P.Constant4_Value
                    section.data(5).logicalSrcIdx = 9;
                    section.data(5).dtTransOffset = 16;

                    ;% basic_IO_qarm_mini_P.Switch3_Threshold
                    section.data(6).logicalSrcIdx = 10;
                    section.data(6).dtTransOffset = 20;

                    ;% basic_IO_qarm_mini_P.Switch2_Threshold
                    section.data(7).logicalSrcIdx = 11;
                    section.data(7).dtTransOffset = 21;

                    ;% basic_IO_qarm_mini_P.Switch1_Threshold
                    section.data(8).logicalSrcIdx = 12;
                    section.data(8).dtTransOffset = 22;

                    ;% basic_IO_qarm_mini_P.HILInitialize_OOTerminate
                    section.data(9).logicalSrcIdx = 13;
                    section.data(9).dtTransOffset = 23;

                    ;% basic_IO_qarm_mini_P.HILInitialize_OOExit
                    section.data(10).logicalSrcIdx = 14;
                    section.data(10).dtTransOffset = 24;

                    ;% basic_IO_qarm_mini_P.HILInitialize_OOStart
                    section.data(11).logicalSrcIdx = 15;
                    section.data(11).dtTransOffset = 25;

                    ;% basic_IO_qarm_mini_P.HILInitialize_OOEnter
                    section.data(12).logicalSrcIdx = 16;
                    section.data(12).dtTransOffset = 26;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AIHigh
                    section.data(13).logicalSrcIdx = 17;
                    section.data(13).dtTransOffset = 27;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AILow
                    section.data(14).logicalSrcIdx = 18;
                    section.data(14).dtTransOffset = 32;

                    ;% basic_IO_qarm_mini_P.Bias11_Bias
                    section.data(15).logicalSrcIdx = 19;
                    section.data(15).dtTransOffset = 37;

                    ;% basic_IO_qarm_mini_P.Bias12_Bias
                    section.data(16).logicalSrcIdx = 20;
                    section.data(16).dtTransOffset = 38;

                    ;% basic_IO_qarm_mini_P.Bias17_Bias
                    section.data(17).logicalSrcIdx = 21;
                    section.data(17).dtTransOffset = 39;

                    ;% basic_IO_qarm_mini_P.Bias21_Bias
                    section.data(18).logicalSrcIdx = 22;
                    section.data(18).dtTransOffset = 40;

                    ;% basic_IO_qarm_mini_P.Bias13_Bias
                    section.data(19).logicalSrcIdx = 23;
                    section.data(19).dtTransOffset = 41;

                    ;% basic_IO_qarm_mini_P.Bias14_Bias
                    section.data(20).logicalSrcIdx = 24;
                    section.data(20).dtTransOffset = 42;

                    ;% basic_IO_qarm_mini_P.Bias15_Bias
                    section.data(21).logicalSrcIdx = 25;
                    section.data(21).dtTransOffset = 43;

                    ;% basic_IO_qarm_mini_P.Bias16_Bias
                    section.data(22).logicalSrcIdx = 26;
                    section.data(22).dtTransOffset = 44;

                    ;% basic_IO_qarm_mini_P.Bias18_Bias
                    section.data(23).logicalSrcIdx = 27;
                    section.data(23).dtTransOffset = 45;

                    ;% basic_IO_qarm_mini_P.Bias19_Bias
                    section.data(24).logicalSrcIdx = 28;
                    section.data(24).dtTransOffset = 46;

                    ;% basic_IO_qarm_mini_P.Bias20_Bias
                    section.data(25).logicalSrcIdx = 29;
                    section.data(25).dtTransOffset = 47;

                    ;% basic_IO_qarm_mini_P.Gain1_Gain
                    section.data(26).logicalSrcIdx = 30;
                    section.data(26).dtTransOffset = 48;

                    ;% basic_IO_qarm_mini_P.Saturation6_UpperSat
                    section.data(27).logicalSrcIdx = 31;
                    section.data(27).dtTransOffset = 49;

                    ;% basic_IO_qarm_mini_P.Saturation6_LowerSat
                    section.data(28).logicalSrcIdx = 32;
                    section.data(28).dtTransOffset = 53;

                    ;% basic_IO_qarm_mini_P.SelectPosition_Value
                    section.data(29).logicalSrcIdx = 33;
                    section.data(29).dtTransOffset = 57;

                    ;% basic_IO_qarm_mini_P.Integrator_IC
                    section.data(30).logicalSrcIdx = 34;
                    section.data(30).dtTransOffset = 58;

                    ;% basic_IO_qarm_mini_P.Integrator_UpperSat
                    section.data(31).logicalSrcIdx = 35;
                    section.data(31).dtTransOffset = 62;

                    ;% basic_IO_qarm_mini_P.Integrator_LowerSat
                    section.data(32).logicalSrcIdx = 36;
                    section.data(32).dtTransOffset = 66;

                    ;% basic_IO_qarm_mini_P.Straightup_Value
                    section.data(33).logicalSrcIdx = 37;
                    section.data(33).dtTransOffset = 70;

                    ;% basic_IO_qarm_mini_P.Home_Value
                    section.data(34).logicalSrcIdx = 38;
                    section.data(34).dtTransOffset = 74;

                    ;% basic_IO_qarm_mini_P.Saturation5_UpperSat
                    section.data(35).logicalSrcIdx = 39;
                    section.data(35).dtTransOffset = 78;

                    ;% basic_IO_qarm_mini_P.Saturation5_LowerSat
                    section.data(36).logicalSrcIdx = 40;
                    section.data(36).dtTransOffset = 82;

                    ;% basic_IO_qarm_mini_P.Bias_Bias
                    section.data(37).logicalSrcIdx = 41;
                    section.data(37).dtTransOffset = 86;

                    ;% basic_IO_qarm_mini_P.Bias1_Bias
                    section.data(38).logicalSrcIdx = 42;
                    section.data(38).dtTransOffset = 87;

                    ;% basic_IO_qarm_mini_P.Bias2_Bias
                    section.data(39).logicalSrcIdx = 43;
                    section.data(39).dtTransOffset = 88;

                    ;% basic_IO_qarm_mini_P.Bias6_Bias
                    section.data(40).logicalSrcIdx = 44;
                    section.data(40).dtTransOffset = 89;

                    ;% basic_IO_qarm_mini_P.Bias3_Bias
                    section.data(41).logicalSrcIdx = 45;
                    section.data(41).dtTransOffset = 90;

                    ;% basic_IO_qarm_mini_P.Bias7_Bias
                    section.data(42).logicalSrcIdx = 46;
                    section.data(42).dtTransOffset = 91;

                    ;% basic_IO_qarm_mini_P.Bias4_Bias
                    section.data(43).logicalSrcIdx = 47;
                    section.data(43).dtTransOffset = 92;

                    ;% basic_IO_qarm_mini_P.Bias8_Bias
                    section.data(44).logicalSrcIdx = 48;
                    section.data(44).dtTransOffset = 93;

                    ;% basic_IO_qarm_mini_P.Integrator1_IC
                    section.data(45).logicalSrcIdx = 49;
                    section.data(45).dtTransOffset = 94;

                    ;% basic_IO_qarm_mini_P.Integrator1_UpperSat
                    section.data(46).logicalSrcIdx = 50;
                    section.data(46).dtTransOffset = 95;

                    ;% basic_IO_qarm_mini_P.Integrator1_LowerSat
                    section.data(47).logicalSrcIdx = 51;
                    section.data(47).dtTransOffset = 96;

                    ;% basic_IO_qarm_mini_P.Gain_Gain
                    section.data(48).logicalSrcIdx = 52;
                    section.data(48).dtTransOffset = 97;

                    ;% basic_IO_qarm_mini_P.Bias10_Bias
                    section.data(49).logicalSrcIdx = 53;
                    section.data(49).dtTransOffset = 98;

                    ;% basic_IO_qarm_mini_P.Bias5_Bias
                    section.data(50).logicalSrcIdx = 54;
                    section.data(50).dtTransOffset = 99;

                    ;% basic_IO_qarm_mini_P.Bias9_Bias
                    section.data(51).logicalSrcIdx = 55;
                    section.data(51).dtTransOffset = 100;

                    ;% basic_IO_qarm_mini_P.Constant6_Value
                    section.data(52).logicalSrcIdx = 56;
                    section.data(52).dtTransOffset = 101;

                    ;% basic_IO_qarm_mini_P.Saturation_UpperSat
                    section.data(53).logicalSrcIdx = 57;
                    section.data(53).dtTransOffset = 105;

                    ;% basic_IO_qarm_mini_P.Saturation_LowerSat
                    section.data(54).logicalSrcIdx = 58;
                    section.data(54).dtTransOffset = 106;

                    ;% basic_IO_qarm_mini_P.Saturation1_UpperSat
                    section.data(55).logicalSrcIdx = 59;
                    section.data(55).dtTransOffset = 107;

                    ;% basic_IO_qarm_mini_P.Saturation1_LowerSat
                    section.data(56).logicalSrcIdx = 60;
                    section.data(56).dtTransOffset = 108;

                    ;% basic_IO_qarm_mini_P.Saturation2_UpperSat
                    section.data(57).logicalSrcIdx = 61;
                    section.data(57).dtTransOffset = 109;

                    ;% basic_IO_qarm_mini_P.Saturation2_LowerSat
                    section.data(58).logicalSrcIdx = 62;
                    section.data(58).dtTransOffset = 110;

                    ;% basic_IO_qarm_mini_P.Saturation3_UpperSat
                    section.data(59).logicalSrcIdx = 63;
                    section.data(59).dtTransOffset = 111;

                    ;% basic_IO_qarm_mini_P.Saturation3_LowerSat
                    section.data(60).logicalSrcIdx = 64;
                    section.data(60).dtTransOffset = 112;

                    ;% basic_IO_qarm_mini_P.Constant7_Value
                    section.data(61).logicalSrcIdx = 65;
                    section.data(61).dtTransOffset = 113;

                    ;% basic_IO_qarm_mini_P.Saturation4_UpperSat
                    section.data(62).logicalSrcIdx = 66;
                    section.data(62).dtTransOffset = 114;

                    ;% basic_IO_qarm_mini_P.Saturation4_LowerSat
                    section.data(63).logicalSrcIdx = 67;
                    section.data(63).dtTransOffset = 115;

                    ;% basic_IO_qarm_mini_P.Constant_Value_n
                    section.data(64).logicalSrcIdx = 68;
                    section.data(64).dtTransOffset = 116;

                    ;% basic_IO_qarm_mini_P.Constant1_Value_m
                    section.data(65).logicalSrcIdx = 69;
                    section.data(65).dtTransOffset = 121;

                    ;% basic_IO_qarm_mini_P.Constant2_Value_a
                    section.data(66).logicalSrcIdx = 70;
                    section.data(66).dtTransOffset = 126;

                    ;% basic_IO_qarm_mini_P.Constant3_Value_f
                    section.data(67).logicalSrcIdx = 71;
                    section.data(67).dtTransOffset = 131;

                    ;% basic_IO_qarm_mini_P.Constant4_Value_e
                    section.data(68).logicalSrcIdx = 72;
                    section.data(68).dtTransOffset = 136;

                    ;% basic_IO_qarm_mini_P.Gain_Gain_c
                    section.data(69).logicalSrcIdx = 73;
                    section.data(69).dtTransOffset = 141;

                    ;% basic_IO_qarm_mini_P.Gain1_Gain_n
                    section.data(70).logicalSrcIdx = 74;
                    section.data(70).dtTransOffset = 142;

                    ;% basic_IO_qarm_mini_P.GripperSpeeds_Gain
                    section.data(71).logicalSrcIdx = 75;
                    section.data(71).dtTransOffset = 143;

                    ;% basic_IO_qarm_mini_P.Switch4_Threshold
                    section.data(72).logicalSrcIdx = 76;
                    section.data(72).dtTransOffset = 144;

                    ;% basic_IO_qarm_mini_P.JointSpeedrads_Gain
                    section.data(73).logicalSrcIdx = 77;
                    section.data(73).dtTransOffset = 145;

                    ;% basic_IO_qarm_mini_P.Switch_Threshold
                    section.data(74).logicalSrcIdx = 78;
                    section.data(74).dtTransOffset = 146;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Brightness
                    section.data(75).logicalSrcIdx = 79;
                    section.data(75).dtTransOffset = 147;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Contrast
                    section.data(76).logicalSrcIdx = 80;
                    section.data(76).dtTransOffset = 148;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Hue
                    section.data(77).logicalSrcIdx = 81;
                    section.data(77).dtTransOffset = 149;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Saturation
                    section.data(78).logicalSrcIdx = 82;
                    section.data(78).dtTransOffset = 150;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Sharpness
                    section.data(79).logicalSrcIdx = 83;
                    section.data(79).dtTransOffset = 151;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Gamma
                    section.data(80).logicalSrcIdx = 84;
                    section.data(80).dtTransOffset = 152;

                    ;% basic_IO_qarm_mini_P.VideoCapture_ColorEnable
                    section.data(81).logicalSrcIdx = 85;
                    section.data(81).dtTransOffset = 153;

                    ;% basic_IO_qarm_mini_P.VideoCapture_WhiteBalance
                    section.data(82).logicalSrcIdx = 86;
                    section.data(82).dtTransOffset = 154;

                    ;% basic_IO_qarm_mini_P.VideoCapture_BacklightCompensat
                    section.data(83).logicalSrcIdx = 87;
                    section.data(83).dtTransOffset = 155;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Gain
                    section.data(84).logicalSrcIdx = 88;
                    section.data(84).dtTransOffset = 156;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Pan
                    section.data(85).logicalSrcIdx = 89;
                    section.data(85).dtTransOffset = 157;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Tilt
                    section.data(86).logicalSrcIdx = 90;
                    section.data(86).dtTransOffset = 158;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Roll
                    section.data(87).logicalSrcIdx = 91;
                    section.data(87).dtTransOffset = 159;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Zoom
                    section.data(88).logicalSrcIdx = 92;
                    section.data(88).dtTransOffset = 160;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Exposure
                    section.data(89).logicalSrcIdx = 93;
                    section.data(89).dtTransOffset = 161;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Iris
                    section.data(90).logicalSrcIdx = 94;
                    section.data(90).dtTransOffset = 162;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Focus
                    section.data(91).logicalSrcIdx = 95;
                    section.data(91).dtTransOffset = 163;

                    ;% basic_IO_qarm_mini_P.VideoCapture_Mirror
                    section.data(92).logicalSrcIdx = 96;
                    section.data(92).dtTransOffset = 164;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.HILSetProperty_PropertyCodes
                    section.data(1).logicalSrcIdx = 97;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.StreamServer_SndPriority
                    section.data(2).logicalSrcIdx = 98;
                    section.data(2).dtTransOffset = 25;

                    ;% basic_IO_qarm_mini_P.StreamServer_RcvPriority
                    section.data(3).logicalSrcIdx = 99;
                    section.data(3).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.HILInitialize_AIChannels
                    section.data(1).logicalSrcIdx = 100;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.StreamServer_SndSize
                    section.data(2).logicalSrcIdx = 101;
                    section.data(2).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_P.StreamServer_RcvSize
                    section.data(3).logicalSrcIdx = 102;
                    section.data(3).dtTransOffset = 6;

                    ;% basic_IO_qarm_mini_P.StreamServer_SndFIFO
                    section.data(4).logicalSrcIdx = 103;
                    section.data(4).dtTransOffset = 7;

                    ;% basic_IO_qarm_mini_P.StreamServer_RcvFIFO
                    section.data(5).logicalSrcIdx = 104;
                    section.data(5).dtTransOffset = 8;

                    ;% basic_IO_qarm_mini_P.ImageCompress_Quality
                    section.data(6).logicalSrcIdx = 105;
                    section.data(6).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 39;
            section.data(39)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.HILInitialize_Active
                    section.data(1).logicalSrcIdx = 106;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOTerminate
                    section.data(2).logicalSrcIdx = 107;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOExit
                    section.data(3).logicalSrcIdx = 108;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOTerminate
                    section.data(4).logicalSrcIdx = 109;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOExit
                    section.data(5).logicalSrcIdx = 110;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POTerminate
                    section.data(6).logicalSrcIdx = 111;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POExit
                    section.data(7).logicalSrcIdx = 112;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qarm_mini_P.HILInitialize_CKPStart
                    section.data(8).logicalSrcIdx = 113;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qarm_mini_P.HILInitialize_CKPEnter
                    section.data(9).logicalSrcIdx = 114;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qarm_mini_P.HILInitialize_CKStart
                    section.data(10).logicalSrcIdx = 115;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qarm_mini_P.HILInitialize_CKEnter
                    section.data(11).logicalSrcIdx = 116;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AIPStart
                    section.data(12).logicalSrcIdx = 117;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AIPEnter
                    section.data(13).logicalSrcIdx = 118;
                    section.data(13).dtTransOffset = 12;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOPStart
                    section.data(14).logicalSrcIdx = 119;
                    section.data(14).dtTransOffset = 13;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOPEnter
                    section.data(15).logicalSrcIdx = 120;
                    section.data(15).dtTransOffset = 14;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOStart
                    section.data(16).logicalSrcIdx = 121;
                    section.data(16).dtTransOffset = 15;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOEnter
                    section.data(17).logicalSrcIdx = 122;
                    section.data(17).dtTransOffset = 16;

                    ;% basic_IO_qarm_mini_P.HILInitialize_AOReset
                    section.data(18).logicalSrcIdx = 123;
                    section.data(18).dtTransOffset = 17;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOPStart
                    section.data(19).logicalSrcIdx = 124;
                    section.data(19).dtTransOffset = 18;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOPEnter
                    section.data(20).logicalSrcIdx = 125;
                    section.data(20).dtTransOffset = 19;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOStart
                    section.data(21).logicalSrcIdx = 126;
                    section.data(21).dtTransOffset = 20;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOEnter
                    section.data(22).logicalSrcIdx = 127;
                    section.data(22).dtTransOffset = 21;

                    ;% basic_IO_qarm_mini_P.HILInitialize_DOReset
                    section.data(23).logicalSrcIdx = 128;
                    section.data(23).dtTransOffset = 22;

                    ;% basic_IO_qarm_mini_P.HILInitialize_EIPStart
                    section.data(24).logicalSrcIdx = 129;
                    section.data(24).dtTransOffset = 23;

                    ;% basic_IO_qarm_mini_P.HILInitialize_EIPEnter
                    section.data(25).logicalSrcIdx = 130;
                    section.data(25).dtTransOffset = 24;

                    ;% basic_IO_qarm_mini_P.HILInitialize_EIStart
                    section.data(26).logicalSrcIdx = 131;
                    section.data(26).dtTransOffset = 25;

                    ;% basic_IO_qarm_mini_P.HILInitialize_EIEnter
                    section.data(27).logicalSrcIdx = 132;
                    section.data(27).dtTransOffset = 26;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POPStart
                    section.data(28).logicalSrcIdx = 133;
                    section.data(28).dtTransOffset = 27;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POPEnter
                    section.data(29).logicalSrcIdx = 134;
                    section.data(29).dtTransOffset = 28;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POStart
                    section.data(30).logicalSrcIdx = 135;
                    section.data(30).dtTransOffset = 29;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POEnter
                    section.data(31).logicalSrcIdx = 136;
                    section.data(31).dtTransOffset = 30;

                    ;% basic_IO_qarm_mini_P.HILInitialize_POReset
                    section.data(32).logicalSrcIdx = 137;
                    section.data(32).dtTransOffset = 31;

                    ;% basic_IO_qarm_mini_P.HILInitialize_OOReset
                    section.data(33).logicalSrcIdx = 138;
                    section.data(33).dtTransOffset = 32;

                    ;% basic_IO_qarm_mini_P.HILRead_Active
                    section.data(34).logicalSrcIdx = 139;
                    section.data(34).dtTransOffset = 33;

                    ;% basic_IO_qarm_mini_P.HILWrite_Active
                    section.data(35).logicalSrcIdx = 140;
                    section.data(35).dtTransOffset = 34;

                    ;% basic_IO_qarm_mini_P.HILSetProperty_Active
                    section.data(36).logicalSrcIdx = 141;
                    section.data(36).dtTransOffset = 35;

                    ;% basic_IO_qarm_mini_P.Memory_InitialCondition
                    section.data(37).logicalSrcIdx = 142;
                    section.data(37).dtTransOffset = 36;

                    ;% basic_IO_qarm_mini_P.StreamServer_Active
                    section.data(38).logicalSrcIdx = 143;
                    section.data(38).dtTransOffset = 37;

                    ;% basic_IO_qarm_mini_P.VideoDisplay_UseHardware
                    section.data(39).logicalSrcIdx = 144;
                    section.data(39).dtTransOffset = 38;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.StreamServer_Optimize
                    section.data(1).logicalSrcIdx = 145;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.StreamServer_Implementation
                    section.data(2).logicalSrcIdx = 146;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_P.StreamServer_URI
                    section.data(1).logicalSrcIdx = 147;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_P.StreamServer_Endian
                    section.data(2).logicalSrcIdx = 148;
                    section.data(2).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (basic_IO_qarm_mini_B)
        ;%
            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_B.HILRead_o1
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_B.HILRead_o2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qarm_mini_B.HILRead_o3
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qarm_mini_B.HILRead_o4
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qarm_mini_B.HILRead_o5
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qarm_mini_B.HILRead_o11
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_B.HILRead_o12
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qarm_mini_B.HILRead_o13
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qarm_mini_B.HILRead_o14
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qarm_mini_B.HILRead_o15
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qarm_mini_B.Gain1
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qarm_mini_B.Saturation6
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qarm_mini_B.MultiportSwitch
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 15;

                    ;% basic_IO_qarm_mini_B.Bias1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% basic_IO_qarm_mini_B.Bias6
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% basic_IO_qarm_mini_B.Bias7
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 21;

                    ;% basic_IO_qarm_mini_B.Bias8
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 22;

                    ;% basic_IO_qarm_mini_B.Integrator1
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 23;

                    ;% basic_IO_qarm_mini_B.Bias9
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 24;

                    ;% basic_IO_qarm_mini_B.StreamServer_o4
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 25;

                    ;% basic_IO_qarm_mini_B.GripperSpeeds
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 33;

                    ;% basic_IO_qarm_mini_B.Product
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 34;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_B.Channel
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_B.VideoCapture_o1
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_B.ImageCompress
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 691200;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_B.Compare
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 10;
        sectIdxOffset = 4;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (basic_IO_qarm_mini_DW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.HILRead_AnalogBuffer
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_DW.HILRead_OtherBuffer
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_DW.HILWrite_OtherBuffer
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.ImageCompress_Compress
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.VideoCapture_VideoCapture
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.StreamServer_Stream
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.HILInitialize_Card
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.HILRead_PWORK
                    section.data(1).logicalSrcIdx = 7;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qarm_mini_DW.HILWrite_PWORK
                    section.data(2).logicalSrcIdx = 8;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qarm_mini_DW.HILSetProperty_PWORK
                    section.data(3).logicalSrcIdx = 9;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qarm_mini_DW.CurrentData_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 10;
                    section.data(4).dtTransOffset = 4;

                    ;% basic_IO_qarm_mini_DW.PositionData_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 11;
                    section.data(5).dtTransOffset = 5;

                    ;% basic_IO_qarm_mini_DW.SpeedData_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 12;
                    section.data(6).dtTransOffset = 7;

                    ;% basic_IO_qarm_mini_DW.Channel_PWORK.Fifo
                    section.data(7).logicalSrcIdx = 13;
                    section.data(7).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.ImageCompress_DIMS1
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.HILSetProperty_DoubleCodes
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.ImageCompress_ScanLine
                    section.data(1).logicalSrcIdx = 16;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qarm_mini_DW.Memory_PreviousInput
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3129828505;
    targMap.checksum1 = 3479425745;
    targMap.checksum2 = 3938711866;
    targMap.checksum3 = 1285833210;

