    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 14;
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
        ;% Auto data (basic_IO_qbot_platform_P)
        ;%
            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.downCamStepSize
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.lidarStepSize
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.mainStepSize
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.mode
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_P.realSenseStepSize
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_P.ColorConstant_color
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_P.StreamClient_default_value
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_P.StreamClient_default_value_f
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 25;

                    ;% basic_IO_qbot_platform_P.NewScan_maximum_rho
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 26;

                    ;% basic_IO_qbot_platform_P.NewScan_maximum_theta
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 27;

                    ;% basic_IO_qbot_platform_P.NewScan_minimum_rho
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 28;

                    ;% basic_IO_qbot_platform_P.NewScan_minimum_theta
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 29;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.NewScan_direction
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.NewScan_update_rate
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.NewScan_zero_location
                    section.data(3).logicalSrcIdx = 14;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.Video3DCapture_stream_index
                    section.data(1).logicalSrcIdx = 15;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_stream_index
                    section.data(2).logicalSrcIdx = 16;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.ImageTransform_max_pixel
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.ImageTransform_min_pixel
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.Video3DInitialize_active
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.StopwithMessage_message_icon
                    section.data(1).logicalSrcIdx = 20;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.CompareToConstant_const
                    section.data(1).logicalSrcIdx = 21;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 112;
            section.data(112)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.Constant1_Value
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.Constant2_Value
                    section.data(2).logicalSrcIdx = 23;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.Gain8_Gain
                    section.data(3).logicalSrcIdx = 24;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.Saturation_UpperSat
                    section.data(4).logicalSrcIdx = 25;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_P.Saturation_LowerSat
                    section.data(5).logicalSrcIdx = 26;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_P.DeadZone_Start
                    section.data(6).logicalSrcIdx = 27;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_P.DeadZone_End
                    section.data(7).logicalSrcIdx = 28;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_P.converttorads2_Gain
                    section.data(8).logicalSrcIdx = 29;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_P.Gain7_Gain
                    section.data(9).logicalSrcIdx = 30;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_P.Saturation1_UpperSat
                    section.data(10).logicalSrcIdx = 31;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qbot_platform_P.Saturation1_LowerSat
                    section.data(11).logicalSrcIdx = 32;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_P.DeadZone3_Start
                    section.data(12).logicalSrcIdx = 33;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_P.DeadZone3_End
                    section.data(13).logicalSrcIdx = 34;
                    section.data(13).dtTransOffset = 12;

                    ;% basic_IO_qbot_platform_P.converttorads2_Gain_b
                    section.data(14).logicalSrcIdx = 35;
                    section.data(14).dtTransOffset = 13;

                    ;% basic_IO_qbot_platform_P.Constant6_Value
                    section.data(15).logicalSrcIdx = 36;
                    section.data(15).dtTransOffset = 14;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Brightness
                    section.data(16).logicalSrcIdx = 37;
                    section.data(16).dtTransOffset = 15;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Contrast
                    section.data(17).logicalSrcIdx = 38;
                    section.data(17).dtTransOffset = 16;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Hue
                    section.data(18).logicalSrcIdx = 39;
                    section.data(18).dtTransOffset = 17;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Saturation
                    section.data(19).logicalSrcIdx = 40;
                    section.data(19).dtTransOffset = 18;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Sharpness
                    section.data(20).logicalSrcIdx = 41;
                    section.data(20).dtTransOffset = 19;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Gamma
                    section.data(21).logicalSrcIdx = 42;
                    section.data(21).dtTransOffset = 20;

                    ;% basic_IO_qbot_platform_P.VideoCapture_ColorEnable
                    section.data(22).logicalSrcIdx = 43;
                    section.data(22).dtTransOffset = 21;

                    ;% basic_IO_qbot_platform_P.VideoCapture_WhiteBalance
                    section.data(23).logicalSrcIdx = 44;
                    section.data(23).dtTransOffset = 22;

                    ;% basic_IO_qbot_platform_P.VideoCapture_BacklightCompensat
                    section.data(24).logicalSrcIdx = 45;
                    section.data(24).dtTransOffset = 23;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Gain
                    section.data(25).logicalSrcIdx = 46;
                    section.data(25).dtTransOffset = 24;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Pan
                    section.data(26).logicalSrcIdx = 47;
                    section.data(26).dtTransOffset = 25;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Tilt
                    section.data(27).logicalSrcIdx = 48;
                    section.data(27).dtTransOffset = 26;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Roll
                    section.data(28).logicalSrcIdx = 49;
                    section.data(28).dtTransOffset = 27;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Zoom
                    section.data(29).logicalSrcIdx = 50;
                    section.data(29).dtTransOffset = 28;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Exposure
                    section.data(30).logicalSrcIdx = 51;
                    section.data(30).dtTransOffset = 29;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Iris
                    section.data(31).logicalSrcIdx = 52;
                    section.data(31).dtTransOffset = 30;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Focus
                    section.data(32).logicalSrcIdx = 53;
                    section.data(32).dtTransOffset = 31;

                    ;% basic_IO_qbot_platform_P.VideoCapture_Mirror
                    section.data(33).logicalSrcIdx = 54;
                    section.data(33).dtTransOffset = 32;

                    ;% basic_IO_qbot_platform_P.Gain6_Gain
                    section.data(34).logicalSrcIdx = 55;
                    section.data(34).dtTransOffset = 33;

                    ;% basic_IO_qbot_platform_P.Bias_Bias
                    section.data(35).logicalSrcIdx = 56;
                    section.data(35).dtTransOffset = 34;

                    ;% basic_IO_qbot_platform_P.Gain9_Gain
                    section.data(36).logicalSrcIdx = 57;
                    section.data(36).dtTransOffset = 35;

                    ;% basic_IO_qbot_platform_P.Bias1_Bias
                    section.data(37).logicalSrcIdx = 58;
                    section.data(37).dtTransOffset = 36;

                    ;% basic_IO_qbot_platform_P.Gain4_Gain
                    section.data(38).logicalSrcIdx = 59;
                    section.data(38).dtTransOffset = 37;

                    ;% basic_IO_qbot_platform_P.Saturation4_UpperSat
                    section.data(39).logicalSrcIdx = 60;
                    section.data(39).dtTransOffset = 38;

                    ;% basic_IO_qbot_platform_P.Saturation4_LowerSat
                    section.data(40).logicalSrcIdx = 61;
                    section.data(40).dtTransOffset = 39;

                    ;% basic_IO_qbot_platform_P.DeadZone1_Start
                    section.data(41).logicalSrcIdx = 62;
                    section.data(41).dtTransOffset = 40;

                    ;% basic_IO_qbot_platform_P.DeadZone1_End
                    section.data(42).logicalSrcIdx = 63;
                    section.data(42).dtTransOffset = 41;

                    ;% basic_IO_qbot_platform_P.Gain5_Gain
                    section.data(43).logicalSrcIdx = 64;
                    section.data(43).dtTransOffset = 42;

                    ;% basic_IO_qbot_platform_P.Saturation3_UpperSat
                    section.data(44).logicalSrcIdx = 65;
                    section.data(44).dtTransOffset = 43;

                    ;% basic_IO_qbot_platform_P.Saturation3_LowerSat
                    section.data(45).logicalSrcIdx = 66;
                    section.data(45).dtTransOffset = 44;

                    ;% basic_IO_qbot_platform_P.DeadZone2_Start
                    section.data(46).logicalSrcIdx = 67;
                    section.data(46).dtTransOffset = 45;

                    ;% basic_IO_qbot_platform_P.DeadZone2_End
                    section.data(47).logicalSrcIdx = 68;
                    section.data(47).dtTransOffset = 46;

                    ;% basic_IO_qbot_platform_P.Saturation2_UpperSat
                    section.data(48).logicalSrcIdx = 69;
                    section.data(48).dtTransOffset = 47;

                    ;% basic_IO_qbot_platform_P.Saturation2_LowerSat
                    section.data(49).logicalSrcIdx = 70;
                    section.data(49).dtTransOffset = 48;

                    ;% basic_IO_qbot_platform_P.Saturation5_UpperSat
                    section.data(50).logicalSrcIdx = 71;
                    section.data(50).dtTransOffset = 49;

                    ;% basic_IO_qbot_platform_P.Saturation5_LowerSat
                    section.data(51).logicalSrcIdx = 72;
                    section.data(51).dtTransOffset = 50;

                    ;% basic_IO_qbot_platform_P.RateTransition1_InitialConditio
                    section.data(52).logicalSrcIdx = 73;
                    section.data(52).dtTransOffset = 51;

                    ;% basic_IO_qbot_platform_P.RateTransition2_InitialConditio
                    section.data(53).logicalSrcIdx = 74;
                    section.data(53).dtTransOffset = 52;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Brightness
                    section.data(54).logicalSrcIdx = 75;
                    section.data(54).dtTransOffset = 53;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Contrast
                    section.data(55).logicalSrcIdx = 76;
                    section.data(55).dtTransOffset = 54;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Hue
                    section.data(56).logicalSrcIdx = 77;
                    section.data(56).dtTransOffset = 55;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Saturation
                    section.data(57).logicalSrcIdx = 78;
                    section.data(57).dtTransOffset = 56;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Sharpness
                    section.data(58).logicalSrcIdx = 79;
                    section.data(58).dtTransOffset = 57;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Gamma
                    section.data(59).logicalSrcIdx = 80;
                    section.data(59).dtTransOffset = 58;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_WhiteBalance
                    section.data(60).logicalSrcIdx = 81;
                    section.data(60).dtTransOffset = 59;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_BacklightCompens
                    section.data(61).logicalSrcIdx = 82;
                    section.data(61).dtTransOffset = 60;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Gain
                    section.data(62).logicalSrcIdx = 83;
                    section.data(62).dtTransOffset = 61;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Exposure
                    section.data(63).logicalSrcIdx = 84;
                    section.data(63).dtTransOffset = 62;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Emitter
                    section.data(64).logicalSrcIdx = 85;
                    section.data(64).dtTransOffset = 63;

                    ;% basic_IO_qbot_platform_P.ImageTransform_ContourDepth
                    section.data(65).logicalSrcIdx = 86;
                    section.data(65).dtTransOffset = 64;

                    ;% basic_IO_qbot_platform_P.ImageTransform_FocalLen
                    section.data(66).logicalSrcIdx = 87;
                    section.data(66).dtTransOffset = 65;

                    ;% basic_IO_qbot_platform_P.ImageTransform_Extrapolated
                    section.data(67).logicalSrcIdx = 88;
                    section.data(67).dtTransOffset = 66;

                    ;% basic_IO_qbot_platform_P.ImageTransform_Angle
                    section.data(68).logicalSrcIdx = 89;
                    section.data(68).dtTransOffset = 67;

                    ;% basic_IO_qbot_platform_P.ImageTransform_RCoeff
                    section.data(69).logicalSrcIdx = 90;
                    section.data(69).dtTransOffset = 68;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Brightness
                    section.data(70).logicalSrcIdx = 91;
                    section.data(70).dtTransOffset = 70;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Contrast
                    section.data(71).logicalSrcIdx = 92;
                    section.data(71).dtTransOffset = 71;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Hue
                    section.data(72).logicalSrcIdx = 93;
                    section.data(72).dtTransOffset = 72;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Saturation
                    section.data(73).logicalSrcIdx = 94;
                    section.data(73).dtTransOffset = 73;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Sharpness
                    section.data(74).logicalSrcIdx = 95;
                    section.data(74).dtTransOffset = 74;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Gamma
                    section.data(75).logicalSrcIdx = 96;
                    section.data(75).dtTransOffset = 75;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_WhiteBalance
                    section.data(76).logicalSrcIdx = 97;
                    section.data(76).dtTransOffset = 76;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_BacklightCompen
                    section.data(77).logicalSrcIdx = 98;
                    section.data(77).dtTransOffset = 77;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Gain
                    section.data(78).logicalSrcIdx = 99;
                    section.data(78).dtTransOffset = 78;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Exposure
                    section.data(79).logicalSrcIdx = 100;
                    section.data(79).dtTransOffset = 79;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Emitter
                    section.data(80).logicalSrcIdx = 101;
                    section.data(80).dtTransOffset = 80;

                    ;% basic_IO_qbot_platform_P.thelidaris95aheadofCG_Value
                    section.data(81).logicalSrcIdx = 102;
                    section.data(81).dtTransOffset = 81;

                    ;% basic_IO_qbot_platform_P.RangingSensor_Budget
                    section.data(82).logicalSrcIdx = 103;
                    section.data(82).dtTransOffset = 83;

                    ;% basic_IO_qbot_platform_P.RangingSensor_Period
                    section.data(83).logicalSrcIdx = 104;
                    section.data(83).dtTransOffset = 84;

                    ;% basic_IO_qbot_platform_P.RangingSensor_MaxInterpolationD
                    section.data(84).logicalSrcIdx = 105;
                    section.data(84).dtTransOffset = 85;

                    ;% basic_IO_qbot_platform_P.RangingSensor_MaxInterpolationA
                    section.data(85).logicalSrcIdx = 106;
                    section.data(85).dtTransOffset = 86;

                    ;% basic_IO_qbot_platform_P.Gain_Gain
                    section.data(86).logicalSrcIdx = 107;
                    section.data(86).dtTransOffset = 87;

                    ;% basic_IO_qbot_platform_P.Bias_Bias_o
                    section.data(87).logicalSrcIdx = 108;
                    section.data(87).dtTransOffset = 88;

                    ;% basic_IO_qbot_platform_P.NewScan_L1Width
                    section.data(88).logicalSrcIdx = 109;
                    section.data(88).dtTransOffset = 89;

                    ;% basic_IO_qbot_platform_P.NewScan_L1Color
                    section.data(89).logicalSrcIdx = 110;
                    section.data(89).dtTransOffset = 90;

                    ;% basic_IO_qbot_platform_P.NewScan_L1MSize
                    section.data(90).logicalSrcIdx = 111;
                    section.data(90).dtTransOffset = 93;

                    ;% basic_IO_qbot_platform_P.NewScan_L1MEdgeColor
                    section.data(91).logicalSrcIdx = 112;
                    section.data(91).dtTransOffset = 94;

                    ;% basic_IO_qbot_platform_P.NewScan_L1MFaceColor
                    section.data(92).logicalSrcIdx = 113;
                    section.data(92).dtTransOffset = 97;

                    ;% basic_IO_qbot_platform_P.NewScan_L2Width
                    section.data(93).logicalSrcIdx = 114;
                    section.data(93).dtTransOffset = 100;

                    ;% basic_IO_qbot_platform_P.NewScan_L2Color
                    section.data(94).logicalSrcIdx = 115;
                    section.data(94).dtTransOffset = 101;

                    ;% basic_IO_qbot_platform_P.NewScan_L2MSize
                    section.data(95).logicalSrcIdx = 116;
                    section.data(95).dtTransOffset = 104;

                    ;% basic_IO_qbot_platform_P.NewScan_L2MEdgeColor
                    section.data(96).logicalSrcIdx = 117;
                    section.data(96).dtTransOffset = 105;

                    ;% basic_IO_qbot_platform_P.NewScan_L2MFaceColor
                    section.data(97).logicalSrcIdx = 118;
                    section.data(97).dtTransOffset = 108;

                    ;% basic_IO_qbot_platform_P.NewScan_L3Width
                    section.data(98).logicalSrcIdx = 119;
                    section.data(98).dtTransOffset = 111;

                    ;% basic_IO_qbot_platform_P.NewScan_L3Color
                    section.data(99).logicalSrcIdx = 120;
                    section.data(99).dtTransOffset = 112;

                    ;% basic_IO_qbot_platform_P.NewScan_L3MSize
                    section.data(100).logicalSrcIdx = 121;
                    section.data(100).dtTransOffset = 115;

                    ;% basic_IO_qbot_platform_P.NewScan_L3MEdgeColor
                    section.data(101).logicalSrcIdx = 122;
                    section.data(101).dtTransOffset = 116;

                    ;% basic_IO_qbot_platform_P.NewScan_L3MFaceColor
                    section.data(102).logicalSrcIdx = 123;
                    section.data(102).dtTransOffset = 119;

                    ;% basic_IO_qbot_platform_P.NewScan_L4Width
                    section.data(103).logicalSrcIdx = 124;
                    section.data(103).dtTransOffset = 122;

                    ;% basic_IO_qbot_platform_P.NewScan_L4Color
                    section.data(104).logicalSrcIdx = 125;
                    section.data(104).dtTransOffset = 123;

                    ;% basic_IO_qbot_platform_P.NewScan_L4MSize
                    section.data(105).logicalSrcIdx = 126;
                    section.data(105).dtTransOffset = 126;

                    ;% basic_IO_qbot_platform_P.NewScan_L4MEdgeColor
                    section.data(106).logicalSrcIdx = 127;
                    section.data(106).dtTransOffset = 127;

                    ;% basic_IO_qbot_platform_P.NewScan_L4MFaceColor
                    section.data(107).logicalSrcIdx = 128;
                    section.data(107).dtTransOffset = 130;

                    ;% basic_IO_qbot_platform_P.NewScan_L5Width
                    section.data(108).logicalSrcIdx = 129;
                    section.data(108).dtTransOffset = 133;

                    ;% basic_IO_qbot_platform_P.NewScan_L5Color
                    section.data(109).logicalSrcIdx = 130;
                    section.data(109).dtTransOffset = 134;

                    ;% basic_IO_qbot_platform_P.NewScan_L5MSize
                    section.data(110).logicalSrcIdx = 131;
                    section.data(110).dtTransOffset = 137;

                    ;% basic_IO_qbot_platform_P.NewScan_L5MEdgeColor
                    section.data(111).logicalSrcIdx = 132;
                    section.data(111).dtTransOffset = 138;

                    ;% basic_IO_qbot_platform_P.NewScan_L5MFaceColor
                    section.data(112).logicalSrcIdx = 133;
                    section.data(112).dtTransOffset = 141;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 18;
            section.data(18)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.StreamClient_SndPriority
                    section.data(1).logicalSrcIdx = 134;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvPriority
                    section.data(2).logicalSrcIdx = 135;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.ImageTransform_PrPoint
                    section.data(3).logicalSrcIdx = 136;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.ImageTransform_Interpolation
                    section.data(4).logicalSrcIdx = 137;
                    section.data(4).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_P.ImageTransform_Origin
                    section.data(5).logicalSrcIdx = 138;
                    section.data(5).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_P.ImageTransform_OOrigin
                    section.data(6).logicalSrcIdx = 139;
                    section.data(6).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_P.StreamClient_SndPriority_m
                    section.data(7).logicalSrcIdx = 140;
                    section.data(7).dtTransOffset = 9;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvPriority_c
                    section.data(8).logicalSrcIdx = 141;
                    section.data(8).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_P.NewScan_L1Style
                    section.data(9).logicalSrcIdx = 142;
                    section.data(9).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_P.NewScan_L1Marker
                    section.data(10).logicalSrcIdx = 143;
                    section.data(10).dtTransOffset = 12;

                    ;% basic_IO_qbot_platform_P.NewScan_L2Style
                    section.data(11).logicalSrcIdx = 144;
                    section.data(11).dtTransOffset = 13;

                    ;% basic_IO_qbot_platform_P.NewScan_L2Marker
                    section.data(12).logicalSrcIdx = 145;
                    section.data(12).dtTransOffset = 14;

                    ;% basic_IO_qbot_platform_P.NewScan_L3Style
                    section.data(13).logicalSrcIdx = 146;
                    section.data(13).dtTransOffset = 15;

                    ;% basic_IO_qbot_platform_P.NewScan_L3Marker
                    section.data(14).logicalSrcIdx = 147;
                    section.data(14).dtTransOffset = 16;

                    ;% basic_IO_qbot_platform_P.NewScan_L4Style
                    section.data(15).logicalSrcIdx = 148;
                    section.data(15).dtTransOffset = 17;

                    ;% basic_IO_qbot_platform_P.NewScan_L4Marker
                    section.data(16).logicalSrcIdx = 149;
                    section.data(16).dtTransOffset = 18;

                    ;% basic_IO_qbot_platform_P.NewScan_L5Style
                    section.data(17).logicalSrcIdx = 150;
                    section.data(17).dtTransOffset = 19;

                    ;% basic_IO_qbot_platform_P.NewScan_L5Marker
                    section.data(18).logicalSrcIdx = 151;
                    section.data(18).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.StreamClient_SndSize
                    section.data(1).logicalSrcIdx = 152;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvSize
                    section.data(2).logicalSrcIdx = 153;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.StreamClient_SndFIFO
                    section.data(3).logicalSrcIdx = 154;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvFIFO
                    section.data(4).logicalSrcIdx = 155;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_P.Video3DCapture_Preset
                    section.data(5).logicalSrcIdx = 156;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_P.ImageTransform_ColorTheme
                    section.data(6).logicalSrcIdx = 157;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_P.Video3DCapture1_Preset
                    section.data(7).logicalSrcIdx = 158;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_P.StreamClient_SndSize_j
                    section.data(8).logicalSrcIdx = 159;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvSize_m
                    section.data(9).logicalSrcIdx = 160;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_P.StreamClient_SndFIFO_a
                    section.data(10).logicalSrcIdx = 161;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qbot_platform_P.StreamClient_RcvFIFO_c
                    section.data(11).logicalSrcIdx = 162;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_P.ImageCompress_Quality
                    section.data(12).logicalSrcIdx = 163;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_P.ImageCompress_Quality_b
                    section.data(13).logicalSrcIdx = 164;
                    section.data(13).dtTransOffset = 12;

                    ;% basic_IO_qbot_platform_P.ImageCompress_Quality_d
                    section.data(14).logicalSrcIdx = 165;
                    section.data(14).dtTransOffset = 13;

                    ;% basic_IO_qbot_platform_P.RangingSensor_Range
                    section.data(15).logicalSrcIdx = 166;
                    section.data(15).dtTransOffset = 14;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.GameController_BufferSize
                    section.data(1).logicalSrcIdx = 167;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.Constant_Value
                    section.data(1).logicalSrcIdx = 168;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.RateTransition_InitialCondition
                    section.data(2).logicalSrcIdx = 169;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.GameController_AutoCenter
                    section.data(3).logicalSrcIdx = 170;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.GameController_Enabled
                    section.data(4).logicalSrcIdx = 171;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_P.StreamClient_Active
                    section.data(5).logicalSrcIdx = 172;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_P.TmpRTBAtManualSwitchInport1_Ini
                    section.data(6).logicalSrcIdx = 173;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_P.RateTransition4_InitialConditio
                    section.data(7).logicalSrcIdx = 174;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_P.Memory_InitialCondition
                    section.data(8).logicalSrcIdx = 175;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_P.StreamClient_Active_e
                    section.data(9).logicalSrcIdx = 176;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_P.VideoDisplay_UseHardware
                    section.data(10).logicalSrcIdx = 177;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qbot_platform_P.VideoDisplay_UseHardware_m
                    section.data(11).logicalSrcIdx = 178;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_P.VideoDisplay_UseHardware_d
                    section.data(12).logicalSrcIdx = 179;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_P.RangingSensor_Active
                    section.data(13).logicalSrcIdx = 180;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.StreamClient_Optimize
                    section.data(1).logicalSrcIdx = 181;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.StreamClient_Implementation
                    section.data(2).logicalSrcIdx = 182;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.StreamClient_Optimize_k
                    section.data(3).logicalSrcIdx = 183;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_P.StreamClient_Implementation_d
                    section.data(4).logicalSrcIdx = 184;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_P.GameController_ControllerNumber
                    section.data(1).logicalSrcIdx = 185;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_P.StreamClient_URI
                    section.data(2).logicalSrcIdx = 186;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_P.StreamClient_Endian
                    section.data(3).logicalSrcIdx = 187;
                    section.data(3).dtTransOffset = 25;

                    ;% basic_IO_qbot_platform_P.ManualSwitch_CurrentSetting
                    section.data(4).logicalSrcIdx = 188;
                    section.data(4).dtTransOffset = 26;

                    ;% basic_IO_qbot_platform_P.StreamClient_URI_e
                    section.data(5).logicalSrcIdx = 189;
                    section.data(5).dtTransOffset = 27;

                    ;% basic_IO_qbot_platform_P.StreamClient_Endian_f
                    section.data(6).logicalSrcIdx = 190;
                    section.data(6).dtTransOffset = 51;

                    ;% basic_IO_qbot_platform_P.NewScan_Mode
                    section.data(7).logicalSrcIdx = 191;
                    section.data(7).dtTransOffset = 52;

            nTotData = nTotData + section.nData;
            paramMap.sections(14) = section;
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
        nTotSects     = 7;
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
        ;% Auto data (basic_IO_qbot_platform_B)
        ;%
            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.Video3DCapture_o2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_B.Video3DCapture1_o2
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.GameController_o3
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_B.StreamClient_o4
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_B.SampleTime
                    section.data(3).logicalSrcIdx = 4;
                    section.data(3).dtTransOffset = 19;

                    ;% basic_IO_qbot_platform_B.ComputationTime
                    section.data(4).logicalSrcIdx = 5;
                    section.data(4).dtTransOffset = 20;

                    ;% basic_IO_qbot_platform_B.Constant4
                    section.data(5).logicalSrcIdx = 6;
                    section.data(5).dtTransOffset = 21;

                    ;% basic_IO_qbot_platform_B.RateTransition
                    section.data(6).logicalSrcIdx = 7;
                    section.data(6).dtTransOffset = 22;

                    ;% basic_IO_qbot_platform_B.RateTransition1
                    section.data(7).logicalSrcIdx = 8;
                    section.data(7).dtTransOffset = 25;

                    ;% basic_IO_qbot_platform_B.RateTransition2
                    section.data(8).logicalSrcIdx = 9;
                    section.data(8).dtTransOffset = 28;

                    ;% basic_IO_qbot_platform_B.Video3DCapture_o3
                    section.data(9).logicalSrcIdx = 10;
                    section.data(9).dtTransOffset = 31;

                    ;% basic_IO_qbot_platform_B.Video3DCapture1_o3
                    section.data(10).logicalSrcIdx = 11;
                    section.data(10).dtTransOffset = 32;

                    ;% basic_IO_qbot_platform_B.StreamClient_o4_o
                    section.data(11).logicalSrcIdx = 12;
                    section.data(11).dtTransOffset = 33;

                    ;% basic_IO_qbot_platform_B.RangingSensor_o1
                    section.data(12).logicalSrcIdx = 13;
                    section.data(12).dtTransOffset = 34;

                    ;% basic_IO_qbot_platform_B.RangingSensor_o2
                    section.data(13).logicalSrcIdx = 14;
                    section.data(13).dtTransOffset = 1714;

                    ;% basic_IO_qbot_platform_B.RangingSensor_o3
                    section.data(14).logicalSrcIdx = 15;
                    section.data(14).dtTransOffset = 3394;

                    ;% basic_IO_qbot_platform_B.RangingSensor_o4
                    section.data(15).logicalSrcIdx = 16;
                    section.data(15).dtTransOffset = 5074;

                    ;% basic_IO_qbot_platform_B.ranges_c
                    section.data(16).logicalSrcIdx = 17;
                    section.data(16).dtTransOffset = 6754;

                    ;% basic_IO_qbot_platform_B.angles_c
                    section.data(17).logicalSrcIdx = 18;
                    section.data(17).dtTransOffset = 7174;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.Channel
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_B.Channel_m
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_B.Channel_o
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.StreamClient_o2
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.Video3DCapture_o1
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.StreamClient_o1
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_B.VideoCapture_o1
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_B.Video3DCapture1_o1
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 256001;

                    ;% basic_IO_qbot_platform_B.ImageCompress
                    section.data(4).logicalSrcIdx = 31;
                    section.data(4).dtTransOffset = 1177601;

                    ;% basic_IO_qbot_platform_B.ImageCompress_j
                    section.data(5).logicalSrcIdx = 32;
                    section.data(5).dtTransOffset = 1433601;

                    ;% basic_IO_qbot_platform_B.ImageCompress_i
                    section.data(6).logicalSrcIdx = 33;
                    section.data(6).dtTransOffset = 2355201;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_B.RateTransition_a
                    section.data(1).logicalSrcIdx = 34;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_B.GameController_o1
                    section.data(2).logicalSrcIdx = 35;
                    section.data(2).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_B.TmpRTBAtManualSwitchInport1
                    section.data(3).logicalSrcIdx = 36;
                    section.data(3).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_B.ManualSwitch
                    section.data(4).logicalSrcIdx = 37;
                    section.data(4).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_B.RateTransition_g
                    section.data(5).logicalSrcIdx = 38;
                    section.data(5).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_B.RateTransition4
                    section.data(6).logicalSrcIdx = 39;
                    section.data(6).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_B.rightbutton
                    section.data(7).logicalSrcIdx = 40;
                    section.data(7).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_B.Compare
                    section.data(8).logicalSrcIdx = 41;
                    section.data(8).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
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
        nTotSects     = 16;
        sectIdxOffset = 7;

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
        ;% Auto data (basic_IO_qbot_platform_DW)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.RangingSensor_Measurements
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.Time_Timeout
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.SampleTime_PreviousTime
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_DW.ComputationTime_BeginTime
                    section.data(3).logicalSrcIdx = 3;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_DW.ComputationTime_ComputationTime
                    section.data(4).logicalSrcIdx = 4;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_DW.SampleTime1_PreviousTime
                    section.data(5).logicalSrcIdx = 5;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_DW.ComputationTime1_BeginTime
                    section.data(6).logicalSrcIdx = 6;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_DW.ComputationTime1_ComputationTim
                    section.data(7).logicalSrcIdx = 7;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_DW.ComputationTime2_BeginTime
                    section.data(8).logicalSrcIdx = 8;
                    section.data(8).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_DW.ComputationTime2_ComputationTim
                    section.data(9).logicalSrcIdx = 9;
                    section.data(9).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_DW.SampleTime2_PreviousTime
                    section.data(10).logicalSrcIdx = 10;
                    section.data(10).dtTransOffset = 9;

                    ;% basic_IO_qbot_platform_DW.ComputationTime3_BeginTime
                    section.data(11).logicalSrcIdx = 11;
                    section.data(11).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_DW.ComputationTime3_ComputationTim
                    section.data(12).logicalSrcIdx = 12;
                    section.data(12).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_DW.SampleTime3_PreviousTime
                    section.data(13).logicalSrcIdx = 13;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.RateTransition_Buffer
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.RateTransition1_Buffer0
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 8;

                    ;% basic_IO_qbot_platform_DW.RateTransition2_Buffer0
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_DW.NewScan_XBuffer
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 14;

                    ;% basic_IO_qbot_platform_DW.NewScan_YBuffer
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 434;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.ImageCompress_Compress
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_Compress_c
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_Compress_e
                    section.data(3).logicalSrcIdx = 21;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.VideoCapture_VideoCapture
                    section.data(1).logicalSrcIdx = 22;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.GameController_Controller
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.RangingSensor_Sensor
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.StreamClient_Stream
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.StreamClient_Stream_c
                    section.data(2).logicalSrcIdx = 26;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.ImageTransform_AlgHandle
                    section.data(1).logicalSrcIdx = 27;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.Video3DInitialize_Video3D
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.Video3DCapture_Video3D
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_DW.Video3DCapture1_Video3D
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.Video3DCapture_Stream
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.Video3DCapture1_Stream
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 15;
            section.data(15)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.Accelerometer_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.BatterySense_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_DW.CmdVoltage_PWORK.LoggedData
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_DW.CurrentSense_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 36;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_DW.Encoder_PWORK.LoggedData
                    section.data(5).logicalSrcIdx = 37;
                    section.data(5).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_DW.Gyroscope_PWORK.LoggedData
                    section.data(6).logicalSrcIdx = 38;
                    section.data(6).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_DW.Scope1_PWORK.LoggedData
                    section.data(7).logicalSrcIdx = 39;
                    section.data(7).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_DW.Tachometer_PWORK.LoggedData
                    section.data(8).logicalSrcIdx = 40;
                    section.data(8).dtTransOffset = 10;

                    ;% basic_IO_qbot_platform_DW.Scope_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 41;
                    section.data(9).dtTransOffset = 11;

                    ;% basic_IO_qbot_platform_DW.watchdog_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 42;
                    section.data(10).dtTransOffset = 12;

                    ;% basic_IO_qbot_platform_DW.Scope2_PWORK.LoggedData
                    section.data(11).logicalSrcIdx = 43;
                    section.data(11).dtTransOffset = 13;

                    ;% basic_IO_qbot_platform_DW.Scope_PWORK_j.LoggedData
                    section.data(12).logicalSrcIdx = 44;
                    section.data(12).dtTransOffset = 17;

                    ;% basic_IO_qbot_platform_DW.Channel_PWORK.Fifo
                    section.data(13).logicalSrcIdx = 45;
                    section.data(13).dtTransOffset = 18;

                    ;% basic_IO_qbot_platform_DW.Channel_PWORK_n.Fifo
                    section.data(14).logicalSrcIdx = 46;
                    section.data(14).dtTransOffset = 19;

                    ;% basic_IO_qbot_platform_DW.Channel_PWORK_i.Fifo
                    section.data(15).logicalSrcIdx = 47;
                    section.data(15).dtTransOffset = 20;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.ImageCompress_DIMS1
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_DIMS1_d
                    section.data(2).logicalSrcIdx = 49;
                    section.data(2).dtTransOffset = 1;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_DIMS1_dz
                    section.data(3).logicalSrcIdx = 50;
                    section.data(3).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_DW.sfEvent
                    section.data(4).logicalSrcIdx = 51;
                    section.data(4).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_DW.sfEvent_k
                    section.data(5).logicalSrcIdx = 52;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.NewScan_IWORK
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.RateTransition1_Buffer
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.RateTransition1_Buffer_p
                    section.data(2).logicalSrcIdx = 55;
                    section.data(2).dtTransOffset = 256000;

                    ;% basic_IO_qbot_platform_DW.RateTransition2_Buffer
                    section.data(3).logicalSrcIdx = 56;
                    section.data(3).dtTransOffset = 1177600;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_ScanLine
                    section.data(4).logicalSrcIdx = 57;
                    section.data(4).dtTransOffset = 2099200;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_ScanLine_o
                    section.data(5).logicalSrcIdx = 58;
                    section.data(5).dtTransOffset = 2104320;

                    ;% basic_IO_qbot_platform_DW.ImageCompress_ScanLine_b
                    section.data(6).logicalSrcIdx = 59;
                    section.data(6).dtTransOffset = 2119680;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% basic_IO_qbot_platform_DW.RateTransition_Buffer0
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% basic_IO_qbot_platform_DW.Time_Owner
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 2;

                    ;% basic_IO_qbot_platform_DW.TmpRTBAtManualSwitchInport1_Buf
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 3;

                    ;% basic_IO_qbot_platform_DW.RateTransition4_Buffer0
                    section.data(4).logicalSrcIdx = 63;
                    section.data(4).dtTransOffset = 4;

                    ;% basic_IO_qbot_platform_DW.Memory_PreviousInput
                    section.data(5).logicalSrcIdx = 64;
                    section.data(5).dtTransOffset = 5;

                    ;% basic_IO_qbot_platform_DW.NewScan_IsFull
                    section.data(6).logicalSrcIdx = 65;
                    section.data(6).dtTransOffset = 6;

                    ;% basic_IO_qbot_platform_DW.doneDoubleBufferReInit
                    section.data(7).logicalSrcIdx = 66;
                    section.data(7).dtTransOffset = 7;

                    ;% basic_IO_qbot_platform_DW.doneDoubleBufferReInit_g
                    section.data(8).logicalSrcIdx = 67;
                    section.data(8).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
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


    targMap.checksum0 = 247294154;
    targMap.checksum1 = 4244338175;
    targMap.checksum2 = 912083583;
    targMap.checksum3 = 2222737985;

