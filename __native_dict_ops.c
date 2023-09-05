#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef dict_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dict_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.dict_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dict_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___dict_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___dict_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___dict_ops_internal);
        return CPyModule_mypyc___primitives___dict_ops_internal;
    }
    CPyModule_mypyc___primitives___dict_ops_internal = PyModule_Create(&dict_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___dict_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___dict_ops_internal, "__name__");
    CPyStatic_dict_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___dict_ops_internal);
    if (unlikely(CPyStatic_dict_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dict_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___dict_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___dict_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_dict_ops_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    CPyPtr cpy_r_r119;
    CPyPtr cpy_r_r120;
    CPyPtr cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    CPyPtr cpy_r_r146;
    CPyPtr cpy_r_r147;
    CPyPtr cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    CPyTagged cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    CPyPtr cpy_r_r172;
    CPyPtr cpy_r_r173;
    CPyPtr cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    CPyPtr cpy_r_r185;
    CPyPtr cpy_r_r186;
    CPyPtr cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    CPyTagged cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    CPyPtr cpy_r_r200;
    CPyPtr cpy_r_r201;
    CPyPtr cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    CPyPtr cpy_r_r224;
    CPyPtr cpy_r_r225;
    CPyPtr cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    CPyPtr cpy_r_r249;
    CPyPtr cpy_r_r250;
    CPyPtr cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    char cpy_r_r262;
    CPyTagged cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    CPyPtr cpy_r_r273;
    CPyPtr cpy_r_r274;
    CPyPtr cpy_r_r275;
    CPyPtr cpy_r_r276;
    PyObject *cpy_r_r277;
    char cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    char cpy_r_r285;
    CPyTagged cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    CPyPtr cpy_r_r294;
    CPyPtr cpy_r_r295;
    CPyPtr cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    char cpy_r_r305;
    CPyTagged cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    int32_t cpy_r_r310;
    char cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    char cpy_r_r314;
    PyObject *cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    PyObject *cpy_r_r319;
    CPyPtr cpy_r_r320;
    CPyPtr cpy_r_r321;
    CPyPtr cpy_r_r322;
    CPyPtr cpy_r_r323;
    PyObject *cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    char cpy_r_r332;
    CPyTagged cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    int32_t cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    char cpy_r_r343;
    PyObject *cpy_r_r344;
    CPyPtr cpy_r_r345;
    CPyPtr cpy_r_r346;
    CPyPtr cpy_r_r347;
    PyObject *cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    char cpy_r_r356;
    CPyTagged cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    CPyPtr cpy_r_r368;
    CPyPtr cpy_r_r369;
    CPyPtr cpy_r_r370;
    CPyPtr cpy_r_r371;
    PyObject *cpy_r_r372;
    char cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    int32_t cpy_r_r384;
    char cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    CPyPtr cpy_r_r390;
    CPyPtr cpy_r_r391;
    PyObject *cpy_r_r392;
    char cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    char cpy_r_r400;
    CPyTagged cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    CPyPtr cpy_r_r407;
    CPyPtr cpy_r_r408;
    PyObject *cpy_r_r409;
    char cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    char cpy_r_r417;
    CPyTagged cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    char cpy_r_r422;
    PyObject *cpy_r_r423;
    CPyPtr cpy_r_r424;
    CPyPtr cpy_r_r425;
    PyObject *cpy_r_r426;
    char cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    char cpy_r_r434;
    CPyTagged cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    CPyPtr cpy_r_r441;
    CPyPtr cpy_r_r442;
    PyObject *cpy_r_r443;
    char cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    char cpy_r_r451;
    CPyTagged cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    char cpy_r_r456;
    PyObject *cpy_r_r457;
    CPyPtr cpy_r_r458;
    CPyPtr cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    char cpy_r_r468;
    CPyTagged cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    char cpy_r_r472;
    PyObject *cpy_r_r473;
    CPyPtr cpy_r_r474;
    CPyPtr cpy_r_r475;
    PyObject *cpy_r_r476;
    char cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    char cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    int32_t cpy_r_r488;
    char cpy_r_r489;
    PyObject *cpy_r_r490;
    char cpy_r_r491;
    PyObject *cpy_r_r492;
    CPyPtr cpy_r_r493;
    CPyPtr cpy_r_r494;
    PyObject *cpy_r_r495;
    char cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    int32_t cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    char cpy_r_r510;
    PyObject *cpy_r_r511;
    CPyPtr cpy_r_r512;
    CPyPtr cpy_r_r513;
    PyObject *cpy_r_r514;
    char cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    char cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    int32_t cpy_r_r526;
    char cpy_r_r527;
    PyObject *cpy_r_r528;
    char cpy_r_r529;
    PyObject *cpy_r_r530;
    CPyPtr cpy_r_r531;
    CPyPtr cpy_r_r532;
    PyObject *cpy_r_r533;
    char cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    char cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    int32_t cpy_r_r545;
    char cpy_r_r546;
    PyObject *cpy_r_r547;
    char cpy_r_r548;
    PyObject *cpy_r_r549;
    CPyPtr cpy_r_r550;
    CPyPtr cpy_r_r551;
    PyObject *cpy_r_r552;
    char cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    char cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    int32_t cpy_r_r564;
    char cpy_r_r565;
    PyObject *cpy_r_r566;
    char cpy_r_r567;
    PyObject *cpy_r_r568;
    CPyPtr cpy_r_r569;
    CPyPtr cpy_r_r570;
    PyObject *cpy_r_r571;
    char cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    char cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    int32_t cpy_r_r583;
    char cpy_r_r584;
    PyObject *cpy_r_r585;
    char cpy_r_r586;
    PyObject *cpy_r_r587;
    char cpy_r_r588;
    PyObject *cpy_r_r589;
    CPyPtr cpy_r_r590;
    CPyPtr cpy_r_r591;
    CPyPtr cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    char cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    int32_t cpy_r_r607;
    char cpy_r_r608;
    PyObject *cpy_r_r609;
    char cpy_r_r610;
    PyObject *cpy_r_r611;
    char cpy_r_r612;
    PyObject *cpy_r_r613;
    CPyPtr cpy_r_r614;
    CPyPtr cpy_r_r615;
    CPyPtr cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    char cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    int32_t cpy_r_r631;
    char cpy_r_r632;
    PyObject *cpy_r_r633;
    char cpy_r_r634;
    PyObject *cpy_r_r635;
    char cpy_r_r636;
    PyObject *cpy_r_r637;
    CPyPtr cpy_r_r638;
    CPyPtr cpy_r_r639;
    CPyPtr cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    char cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    int32_t cpy_r_r655;
    char cpy_r_r656;
    PyObject *cpy_r_r657;
    char cpy_r_r658;
    PyObject *cpy_r_r659;
    char cpy_r_r660;
    PyObject *cpy_r_r661;
    CPyPtr cpy_r_r662;
    CPyPtr cpy_r_r663;
    CPyPtr cpy_r_r664;
    PyObject *cpy_r_r665;
    char cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    char cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    int32_t cpy_r_r677;
    char cpy_r_r678;
    PyObject *cpy_r_r679;
    char cpy_r_r680;
    PyObject *cpy_r_r681;
    CPyPtr cpy_r_r682;
    CPyPtr cpy_r_r683;
    PyObject *cpy_r_r684;
    PyObject *cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    char cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    int32_t cpy_r_r698;
    char cpy_r_r699;
    PyObject *cpy_r_r700;
    char cpy_r_r701;
    PyObject *cpy_r_r702;
    char cpy_r_r703;
    PyObject *cpy_r_r704;
    CPyPtr cpy_r_r705;
    CPyPtr cpy_r_r706;
    CPyPtr cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    char cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    int32_t cpy_r_r722;
    char cpy_r_r723;
    PyObject *cpy_r_r724;
    char cpy_r_r725;
    PyObject *cpy_r_r726;
    CPyPtr cpy_r_r727;
    CPyPtr cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject *cpy_r_r737;
    PyObject *cpy_r_r738;
    char cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject *cpy_r_r742;
    int32_t cpy_r_r743;
    char cpy_r_r744;
    PyObject *cpy_r_r745;
    char cpy_r_r746;
    PyObject *cpy_r_r747;
    char cpy_r_r748;
    PyObject *cpy_r_r749;
    CPyPtr cpy_r_r750;
    CPyPtr cpy_r_r751;
    CPyPtr cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    char cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    int32_t cpy_r_r767;
    char cpy_r_r768;
    char cpy_r_r769;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", -1, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dict_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 3, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10252]; /* ('ERR_FALSE', 'ERR_MAGIC', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_dict_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 5, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10253]; /* ('bit_rprimitive', 'bool_rprimitive',
                                      'c_int_rprimitive', 'c_pyssize_t_rprimitive',
                                      'dict_next_rtuple_pair', 'dict_next_rtuple_single',
                                      'dict_rprimitive', 'int_rprimitive', 'list_rprimitive',
                                      'object_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_dict_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 6, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10251]; /* ('ERR_NEG_INT', 'binary_op', 'custom_op', 'function_op',
                                      'load_address_op', 'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_dict_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 18, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 28, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8688]; /* 'PyDict_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 28, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL367;
CPyL11: ;
    cpy_r_r26 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 33, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r28 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL368;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 34, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r30 = CPyStatics[8689]; /* 'PyDict_New' */
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = NULL;
    cpy_r_r36 = 2;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_registry___function_op(cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r30, 2, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 31, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL369;
CPyL16: ;
    cpy_r_r39 = PyList_New(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 41, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r40 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL370;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 41, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r42 = CPyStatics[8689]; /* 'PyDict_New' */
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = 2;
    cpy_r_r49 = CPyDef_registry___custom_op(cpy_r_r39, cpy_r_r40, cpy_r_r42, 2, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 40, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r50 = CPyStatic_dict_ops___globals;
    cpy_r_r51 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 40, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r54 = CPyStatic_dict_ops___globals;
    cpy_r_r55 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r56 = CPyDict_GetItem(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 48, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_rtypes___RPrimitive))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 48, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r56);
        goto CPyL366;
    }
    cpy_r_r58 = PyList_New(1);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 48, CPyStatic_dict_ops___globals);
        goto CPyL371;
    }
    cpy_r_r59 = (CPyPtr)&((PyListObject *)cpy_r_r58)->ob_item;
    cpy_r_r60 = *(CPyPtr *)cpy_r_r59;
    *(PyObject * *)cpy_r_r60 = cpy_r_r57;
    cpy_r_r61 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r61 == NULL)) {
        goto CPyL372;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 49, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r63 = CPyStatics[8690]; /* 'CPyDict_Build' */
    cpy_r_r64 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r64 == NULL)) {
        goto CPyL373;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 52, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = 2;
    cpy_r_r71 = CPyDef_registry___custom_op(cpy_r_r58, cpy_r_r61, cpy_r_r63, 2, cpy_r_r64, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 47, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r72 = CPyStatic_dict_ops___globals;
    cpy_r_r73 = CPyStatics[8437]; /* 'dict_build_op' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 47, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r76 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r77 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r77 != NULL)) goto CPyL36;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 58, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r79 = PyList_New(1);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 58, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r80 = (CPyPtr)&((PyListObject *)cpy_r_r79)->ob_item;
    cpy_r_r81 = *(CPyPtr *)cpy_r_r80;
    CPy_INCREF(cpy_r_r77);
    *(PyObject * *)cpy_r_r81 = cpy_r_r77;
    cpy_r_r82 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r82 == NULL)) {
        goto CPyL374;
    } else
        goto CPyL40;
CPyL38: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 59, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r84 = CPyStatics[8691]; /* 'PyDict_Copy' */
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = 2;
    cpy_r_r91 = CPyDef_registry___function_op(cpy_r_r76, cpy_r_r79, cpy_r_r82, cpy_r_r84, 2, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, 4);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 56, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL375;
CPyL41: ;
    cpy_r_r92 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r93 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r93 != NULL)) goto CPyL44;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 68, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r95 = PyList_New(1);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 68, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r96 = (CPyPtr)&((PyListObject *)cpy_r_r95)->ob_item;
    cpy_r_r97 = *(CPyPtr *)cpy_r_r96;
    CPy_INCREF(cpy_r_r93);
    *(PyObject * *)cpy_r_r97 = cpy_r_r93;
    cpy_r_r98 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL376;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 69, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r100 = CPyStatics[8692]; /* 'CPyDict_FromAny' */
    cpy_r_r101 = NULL;
    cpy_r_r102 = NULL;
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = 2;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = CPyDef_registry___function_op(cpy_r_r92, cpy_r_r95, cpy_r_r98, cpy_r_r100, 2, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 66, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r109 = CPyStatic_dict_ops___globals;
    cpy_r_r110 = CPyStatics[8478]; /* 'dict_copy' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 66, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r113 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r114 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r114 != NULL)) goto CPyL53;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 77, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r116 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r116 != NULL)) goto CPyL56;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r117 = 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 77, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r118 = PyList_New(2);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 77, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r119 = (CPyPtr)&((PyListObject *)cpy_r_r118)->ob_item;
    cpy_r_r120 = *(CPyPtr *)cpy_r_r119;
    CPy_INCREF(cpy_r_r114);
    *(PyObject * *)cpy_r_r120 = cpy_r_r114;
    cpy_r_r121 = cpy_r_r120 + 8;
    CPy_INCREF(cpy_r_r116);
    *(PyObject * *)cpy_r_r121 = cpy_r_r116;
    cpy_r_r122 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r122 == NULL)) {
        goto CPyL377;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 78, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r124 = CPyStatics[8693]; /* 'CPyDict_GetItem' */
    cpy_r_r125 = NULL;
    cpy_r_r126 = NULL;
    cpy_r_r127 = NULL;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = 2;
    cpy_r_r131 = CPY_INT_TAG;
    cpy_r_r132 = CPyDef_registry___method_op(cpy_r_r113, cpy_r_r118, cpy_r_r122, cpy_r_r124, 2, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 75, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r133 = CPyStatic_dict_ops___globals;
    cpy_r_r134 = CPyStatics[8059]; /* 'dict_get_item_op' */
    cpy_r_r135 = CPyDict_SetItem(cpy_r_r133, cpy_r_r134, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 75, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r137 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r138 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r138 != NULL)) goto CPyL65;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 86, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r140 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r140 != NULL)) goto CPyL68;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r141 = 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 86, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r142 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r142 != NULL)) goto CPyL71;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 86, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r144 = PyList_New(3);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 86, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r145 = (CPyPtr)&((PyListObject *)cpy_r_r144)->ob_item;
    cpy_r_r146 = *(CPyPtr *)cpy_r_r145;
    CPy_INCREF(cpy_r_r138);
    *(PyObject * *)cpy_r_r146 = cpy_r_r138;
    cpy_r_r147 = cpy_r_r146 + 8;
    CPy_INCREF(cpy_r_r140);
    *(PyObject * *)cpy_r_r147 = cpy_r_r140;
    cpy_r_r148 = cpy_r_r146 + 16;
    CPy_INCREF(cpy_r_r142);
    *(PyObject * *)cpy_r_r148 = cpy_r_r142;
    cpy_r_r149 = CPyStatic_dict_ops___globals;
    cpy_r_r150 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r151 = CPyDict_GetItem(cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 87, CPyStatic_dict_ops___globals);
        goto CPyL378;
    }
    if (likely(Py_TYPE(cpy_r_r151) == CPyType_rtypes___RPrimitive))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 87, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r151);
        goto CPyL378;
    }
    cpy_r_r153 = CPyStatics[8694]; /* 'CPyDict_SetItem' */
    cpy_r_r154 = NULL;
    cpy_r_r155 = NULL;
    cpy_r_r156 = NULL;
    cpy_r_r157 = NULL;
    cpy_r_r158 = NULL;
    cpy_r_r159 = 2;
    cpy_r_r160 = CPY_INT_TAG;
    cpy_r_r161 = CPyDef_registry___method_op(cpy_r_r137, cpy_r_r144, cpy_r_r152, cpy_r_r153, 20, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 84, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r162 = CPyStatic_dict_ops___globals;
    cpy_r_r163 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r162, cpy_r_r163, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 84, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r166 = CPyStatics[866]; /* 'in' */
    cpy_r_r167 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r167 != NULL)) goto CPyL79;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r168 = 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 95, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r169 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r169 != NULL)) goto CPyL82;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r170 = 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 95, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r171 = PyList_New(2);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 95, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r172 = (CPyPtr)&((PyListObject *)cpy_r_r171)->ob_item;
    cpy_r_r173 = *(CPyPtr *)cpy_r_r172;
    CPy_INCREF(cpy_r_r167);
    *(PyObject * *)cpy_r_r173 = cpy_r_r167;
    cpy_r_r174 = cpy_r_r173 + 8;
    CPy_INCREF(cpy_r_r169);
    *(PyObject * *)cpy_r_r174 = cpy_r_r169;
    cpy_r_r175 = CPyStatic_dict_ops___globals;
    cpy_r_r176 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r177 = CPyDict_GetItem(cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 96, CPyStatic_dict_ops___globals);
        goto CPyL379;
    }
    if (likely(Py_TYPE(cpy_r_r177) == CPyType_rtypes___RPrimitive))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 96, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r177);
        goto CPyL379;
    }
    cpy_r_r179 = CPyStatics[8695]; /* 'PyDict_Contains' */
    cpy_r_r180 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r180 == NULL)) {
        goto CPyL380;
    } else
        goto CPyL88;
CPyL86: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r181 = 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 99, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL88: ;
    cpy_r_r182 = PyList_New(2);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 100, CPyStatic_dict_ops___globals);
        goto CPyL381;
    }
    cpy_r_r183 = CPyStatics[9016]; /* 1 */
    cpy_r_r184 = CPyStatics[9015]; /* 0 */
    cpy_r_r185 = (CPyPtr)&((PyListObject *)cpy_r_r182)->ob_item;
    cpy_r_r186 = *(CPyPtr *)cpy_r_r185;
    CPy_INCREF(cpy_r_r183);
    *(PyObject * *)cpy_r_r186 = cpy_r_r183;
    cpy_r_r187 = cpy_r_r186 + 8;
    CPy_INCREF(cpy_r_r184);
    *(PyObject * *)cpy_r_r187 = cpy_r_r184;
    cpy_r_r188 = NULL;
    cpy_r_r189 = NULL;
    cpy_r_r190 = NULL;
    cpy_r_r191 = 2;
    cpy_r_r192 = CPY_INT_TAG;
    cpy_r_r193 = CPyDef_registry___binary_op(cpy_r_r166, cpy_r_r171, cpy_r_r178, cpy_r_r179, 20, cpy_r_r188, cpy_r_r180, cpy_r_r182, cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r178);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 93, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL382;
CPyL90: ;
    cpy_r_r194 = CPyStatics[1308]; /* 'update' */
    cpy_r_r195 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r195 != NULL)) goto CPyL93;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r196 = 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 106, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL93: ;
    cpy_r_r197 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r197 != NULL)) goto CPyL96;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 106, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r199 = PyList_New(2);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 106, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r200 = (CPyPtr)&((PyListObject *)cpy_r_r199)->ob_item;
    cpy_r_r201 = *(CPyPtr *)cpy_r_r200;
    CPy_INCREF(cpy_r_r195);
    *(PyObject * *)cpy_r_r201 = cpy_r_r195;
    cpy_r_r202 = cpy_r_r201 + 8;
    CPy_INCREF(cpy_r_r197);
    *(PyObject * *)cpy_r_r202 = cpy_r_r197;
    cpy_r_r203 = CPyStatic_dict_ops___globals;
    cpy_r_r204 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r205 = CPyDict_GetItem(cpy_r_r203, cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 107, CPyStatic_dict_ops___globals);
        goto CPyL383;
    }
    if (likely(Py_TYPE(cpy_r_r205) == CPyType_rtypes___RPrimitive))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 107, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r205);
        goto CPyL383;
    }
    cpy_r_r207 = CPyStatics[8696]; /* 'CPyDict_Update' */
    cpy_r_r208 = NULL;
    cpy_r_r209 = NULL;
    cpy_r_r210 = NULL;
    cpy_r_r211 = NULL;
    cpy_r_r212 = NULL;
    cpy_r_r213 = 2;
    cpy_r_r214 = CPyDef_registry___method_op(cpy_r_r194, cpy_r_r199, cpy_r_r206, cpy_r_r207, 20, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211, cpy_r_r212, cpy_r_r213, 4);
    CPy_DECREF(cpy_r_r199);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 104, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r215 = CPyStatic_dict_ops___globals;
    cpy_r_r216 = CPyStatics[8697]; /* 'dict_update_op' */
    cpy_r_r217 = CPyDict_SetItem(cpy_r_r215, cpy_r_r216, cpy_r_r214);
    CPy_DECREF(cpy_r_r214);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 104, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r219 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r219 != NULL)) goto CPyL104;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r220 = 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 116, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r221 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r221 != NULL)) goto CPyL107;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r222 = 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 116, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL107: ;
    cpy_r_r223 = PyList_New(2);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 116, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r224 = (CPyPtr)&((PyListObject *)cpy_r_r223)->ob_item;
    cpy_r_r225 = *(CPyPtr *)cpy_r_r224;
    CPy_INCREF(cpy_r_r219);
    *(PyObject * *)cpy_r_r225 = cpy_r_r219;
    cpy_r_r226 = cpy_r_r225 + 8;
    CPy_INCREF(cpy_r_r221);
    *(PyObject * *)cpy_r_r226 = cpy_r_r221;
    cpy_r_r227 = CPyStatic_dict_ops___globals;
    cpy_r_r228 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r229 = CPyDict_GetItem(cpy_r_r227, cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 117, CPyStatic_dict_ops___globals);
        goto CPyL384;
    }
    if (likely(Py_TYPE(cpy_r_r229) == CPyType_rtypes___RPrimitive))
        cpy_r_r230 = cpy_r_r229;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 117, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r229);
        goto CPyL384;
    }
    cpy_r_r231 = CPyStatics[8698]; /* 'CPyDict_UpdateInDisplay' */
    cpy_r_r232 = NULL;
    cpy_r_r233 = NULL;
    cpy_r_r234 = NULL;
    cpy_r_r235 = NULL;
    cpy_r_r236 = NULL;
    cpy_r_r237 = 2;
    cpy_r_r238 = CPyDef_registry___custom_op(cpy_r_r223, cpy_r_r230, cpy_r_r231, 20, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_r230);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 115, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r239 = CPyStatic_dict_ops___globals;
    cpy_r_r240 = CPyStatics[8396]; /* 'dict_update_in_display_op' */
    cpy_r_r241 = CPyDict_SetItem(cpy_r_r239, cpy_r_r240, cpy_r_r238);
    CPy_DECREF(cpy_r_r238);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 115, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r243 = CPyStatics[1308]; /* 'update' */
    cpy_r_r244 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r244 != NULL)) goto CPyL115;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r245 = 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 125, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r246 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r246 != NULL)) goto CPyL118;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r247 = 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 125, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r248 = PyList_New(2);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 125, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r249 = (CPyPtr)&((PyListObject *)cpy_r_r248)->ob_item;
    cpy_r_r250 = *(CPyPtr *)cpy_r_r249;
    CPy_INCREF(cpy_r_r244);
    *(PyObject * *)cpy_r_r250 = cpy_r_r244;
    cpy_r_r251 = cpy_r_r250 + 8;
    CPy_INCREF(cpy_r_r246);
    *(PyObject * *)cpy_r_r251 = cpy_r_r246;
    cpy_r_r252 = CPyStatic_dict_ops___globals;
    cpy_r_r253 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r254 = CPyDict_GetItem(cpy_r_r252, cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 126, CPyStatic_dict_ops___globals);
        goto CPyL385;
    }
    if (likely(Py_TYPE(cpy_r_r254) == CPyType_rtypes___RPrimitive))
        cpy_r_r255 = cpy_r_r254;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 126, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r254);
        goto CPyL385;
    }
    cpy_r_r256 = CPyStatics[8699]; /* 'CPyDict_UpdateFromAny' */
    cpy_r_r257 = NULL;
    cpy_r_r258 = NULL;
    cpy_r_r259 = NULL;
    cpy_r_r260 = NULL;
    cpy_r_r261 = NULL;
    cpy_r_r262 = 2;
    cpy_r_r263 = CPY_INT_TAG;
    cpy_r_r264 = CPyDef_registry___method_op(cpy_r_r243, cpy_r_r248, cpy_r_r255, cpy_r_r256, 20, cpy_r_r257, cpy_r_r258, cpy_r_r259, cpy_r_r260, cpy_r_r261, cpy_r_r262, cpy_r_r263);
    CPy_DECREF(cpy_r_r248);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 123, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL386;
CPyL122: ;
    cpy_r_r265 = CPyStatics[308]; /* 'get' */
    cpy_r_r266 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r266 != NULL)) goto CPyL125;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r267 = 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 134, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r268 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r268 != NULL)) goto CPyL128;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r269 = 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 134, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r270 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r270 != NULL)) goto CPyL131;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r271 = 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 134, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r272 = PyList_New(3);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 134, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r273 = (CPyPtr)&((PyListObject *)cpy_r_r272)->ob_item;
    cpy_r_r274 = *(CPyPtr *)cpy_r_r273;
    CPy_INCREF(cpy_r_r266);
    *(PyObject * *)cpy_r_r274 = cpy_r_r266;
    cpy_r_r275 = cpy_r_r274 + 8;
    CPy_INCREF(cpy_r_r268);
    *(PyObject * *)cpy_r_r275 = cpy_r_r268;
    cpy_r_r276 = cpy_r_r274 + 16;
    CPy_INCREF(cpy_r_r270);
    *(PyObject * *)cpy_r_r276 = cpy_r_r270;
    cpy_r_r277 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r277 == NULL)) {
        goto CPyL387;
    } else
        goto CPyL135;
CPyL133: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r278 = 0;
    if (unlikely(!cpy_r_r278)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 135, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r279 = CPyStatics[8700]; /* 'CPyDict_Get' */
    cpy_r_r280 = NULL;
    cpy_r_r281 = NULL;
    cpy_r_r282 = NULL;
    cpy_r_r283 = NULL;
    cpy_r_r284 = NULL;
    cpy_r_r285 = 2;
    cpy_r_r286 = CPY_INT_TAG;
    cpy_r_r287 = CPyDef_registry___method_op(cpy_r_r265, cpy_r_r272, cpy_r_r277, cpy_r_r279, 2, cpy_r_r280, cpy_r_r281, cpy_r_r282, cpy_r_r283, cpy_r_r284, cpy_r_r285, cpy_r_r286);
    CPy_DECREF(cpy_r_r272);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 132, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL388;
CPyL136: ;
    cpy_r_r288 = CPyStatics[308]; /* 'get' */
    cpy_r_r289 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r289 != NULL)) goto CPyL139;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r290 = 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 143, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL139: ;
    cpy_r_r291 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r291 != NULL)) goto CPyL142;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r292 = 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 143, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL142: ;
    cpy_r_r293 = PyList_New(2);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 143, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r294 = (CPyPtr)&((PyListObject *)cpy_r_r293)->ob_item;
    cpy_r_r295 = *(CPyPtr *)cpy_r_r294;
    CPy_INCREF(cpy_r_r289);
    *(PyObject * *)cpy_r_r295 = cpy_r_r289;
    cpy_r_r296 = cpy_r_r295 + 8;
    CPy_INCREF(cpy_r_r291);
    *(PyObject * *)cpy_r_r296 = cpy_r_r291;
    cpy_r_r297 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r297 == NULL)) {
        goto CPyL389;
    } else
        goto CPyL146;
CPyL144: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r298 = 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 144, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL146: ;
    cpy_r_r299 = CPyStatics[8701]; /* 'CPyDict_GetWithNone' */
    cpy_r_r300 = NULL;
    cpy_r_r301 = NULL;
    cpy_r_r302 = NULL;
    cpy_r_r303 = NULL;
    cpy_r_r304 = NULL;
    cpy_r_r305 = 2;
    cpy_r_r306 = CPY_INT_TAG;
    cpy_r_r307 = CPyDef_registry___method_op(cpy_r_r288, cpy_r_r293, cpy_r_r297, cpy_r_r299, 2, cpy_r_r300, cpy_r_r301, cpy_r_r302, cpy_r_r303, cpy_r_r304, cpy_r_r305, cpy_r_r306);
    CPy_DECREF(cpy_r_r293);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 141, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r308 = CPyStatic_dict_ops___globals;
    cpy_r_r309 = CPyStatics[8343]; /* 'dict_get_method_with_none' */
    cpy_r_r310 = CPyDict_SetItem(cpy_r_r308, cpy_r_r309, cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    cpy_r_r311 = cpy_r_r310 >= 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 141, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r312 = CPyStatics[8568]; /* 'setdefault' */
    cpy_r_r313 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r313 != NULL)) goto CPyL151;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r314 = 0;
    if (unlikely(!cpy_r_r314)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 152, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL151: ;
    cpy_r_r315 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r315 != NULL)) goto CPyL154;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r316 = 0;
    if (unlikely(!cpy_r_r316)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 152, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL154: ;
    cpy_r_r317 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r317 != NULL)) goto CPyL157;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r318 = 0;
    if (unlikely(!cpy_r_r318)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 152, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL157: ;
    cpy_r_r319 = PyList_New(3);
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 152, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r320 = (CPyPtr)&((PyListObject *)cpy_r_r319)->ob_item;
    cpy_r_r321 = *(CPyPtr *)cpy_r_r320;
    CPy_INCREF(cpy_r_r313);
    *(PyObject * *)cpy_r_r321 = cpy_r_r313;
    cpy_r_r322 = cpy_r_r321 + 8;
    CPy_INCREF(cpy_r_r315);
    *(PyObject * *)cpy_r_r322 = cpy_r_r315;
    cpy_r_r323 = cpy_r_r321 + 16;
    CPy_INCREF(cpy_r_r317);
    *(PyObject * *)cpy_r_r323 = cpy_r_r317;
    cpy_r_r324 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r324 == NULL)) {
        goto CPyL390;
    } else
        goto CPyL161;
CPyL159: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r325 = 0;
    if (unlikely(!cpy_r_r325)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 153, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r326 = CPyStatics[8702]; /* 'CPyDict_SetDefault' */
    cpy_r_r327 = NULL;
    cpy_r_r328 = NULL;
    cpy_r_r329 = NULL;
    cpy_r_r330 = NULL;
    cpy_r_r331 = NULL;
    cpy_r_r332 = 2;
    cpy_r_r333 = CPY_INT_TAG;
    cpy_r_r334 = CPyDef_registry___method_op(cpy_r_r312, cpy_r_r319, cpy_r_r324, cpy_r_r326, 2, cpy_r_r327, cpy_r_r328, cpy_r_r329, cpy_r_r330, cpy_r_r331, cpy_r_r332, cpy_r_r333);
    CPy_DECREF(cpy_r_r319);
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 150, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r335 = CPyStatic_dict_ops___globals;
    cpy_r_r336 = CPyStatics[8703]; /* 'dict_setdefault_op' */
    cpy_r_r337 = CPyDict_SetItem(cpy_r_r335, cpy_r_r336, cpy_r_r334);
    CPy_DECREF(cpy_r_r334);
    cpy_r_r338 = cpy_r_r337 >= 0;
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 150, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r339 = CPyStatics[8568]; /* 'setdefault' */
    cpy_r_r340 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r340 != NULL)) goto CPyL166;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r341 = 0;
    if (unlikely(!cpy_r_r341)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 161, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL166: ;
    cpy_r_r342 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r342 != NULL)) goto CPyL169;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r343 = 0;
    if (unlikely(!cpy_r_r343)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 161, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL169: ;
    cpy_r_r344 = PyList_New(2);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 161, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r345 = (CPyPtr)&((PyListObject *)cpy_r_r344)->ob_item;
    cpy_r_r346 = *(CPyPtr *)cpy_r_r345;
    CPy_INCREF(cpy_r_r340);
    *(PyObject * *)cpy_r_r346 = cpy_r_r340;
    cpy_r_r347 = cpy_r_r346 + 8;
    CPy_INCREF(cpy_r_r342);
    *(PyObject * *)cpy_r_r347 = cpy_r_r342;
    cpy_r_r348 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r348 == NULL)) {
        goto CPyL391;
    } else
        goto CPyL173;
CPyL171: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r349 = 0;
    if (unlikely(!cpy_r_r349)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 162, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL173: ;
    cpy_r_r350 = CPyStatics[8704]; /* 'CPyDict_SetDefaultWithNone' */
    cpy_r_r351 = NULL;
    cpy_r_r352 = NULL;
    cpy_r_r353 = NULL;
    cpy_r_r354 = NULL;
    cpy_r_r355 = NULL;
    cpy_r_r356 = 2;
    cpy_r_r357 = CPY_INT_TAG;
    cpy_r_r358 = CPyDef_registry___method_op(cpy_r_r339, cpy_r_r344, cpy_r_r348, cpy_r_r350, 2, cpy_r_r351, cpy_r_r352, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356, cpy_r_r357);
    CPy_DECREF(cpy_r_r344);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 159, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL392;
CPyL174: ;
    cpy_r_r359 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r359 != NULL)) goto CPyL177;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r360 = 0;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 172, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r361 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r361 != NULL)) goto CPyL180;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r362 = 0;
    if (unlikely(!cpy_r_r362)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 172, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL180: ;
    cpy_r_r363 = CPyStatic_dict_ops___globals;
    cpy_r_r364 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r365 = CPyDict_GetItem(cpy_r_r363, cpy_r_r364);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 172, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    if (likely(Py_TYPE(cpy_r_r365) == CPyType_rtypes___RPrimitive))
        cpy_r_r366 = cpy_r_r365;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 172, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r365);
        goto CPyL366;
    }
    cpy_r_r367 = PyList_New(3);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 172, CPyStatic_dict_ops___globals);
        goto CPyL393;
    }
    cpy_r_r368 = (CPyPtr)&((PyListObject *)cpy_r_r367)->ob_item;
    cpy_r_r369 = *(CPyPtr *)cpy_r_r368;
    CPy_INCREF(cpy_r_r359);
    *(PyObject * *)cpy_r_r369 = cpy_r_r359;
    cpy_r_r370 = cpy_r_r369 + 8;
    CPy_INCREF(cpy_r_r361);
    *(PyObject * *)cpy_r_r370 = cpy_r_r361;
    cpy_r_r371 = cpy_r_r369 + 16;
    *(PyObject * *)cpy_r_r371 = cpy_r_r366;
    cpy_r_r372 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r372 == NULL)) {
        goto CPyL394;
    } else
        goto CPyL186;
CPyL184: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r373 = 0;
    if (unlikely(!cpy_r_r373)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 173, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL186: ;
    cpy_r_r374 = CPyStatics[8705]; /* 'CPyDict_SetDefaultWithEmptyDatatype' */
    cpy_r_r375 = NULL;
    cpy_r_r376 = NULL;
    cpy_r_r377 = NULL;
    cpy_r_r378 = NULL;
    cpy_r_r379 = NULL;
    cpy_r_r380 = 2;
    cpy_r_r381 = CPyDef_registry___custom_op(cpy_r_r367, cpy_r_r372, cpy_r_r374, 2, cpy_r_r375, cpy_r_r376, cpy_r_r377, cpy_r_r378, cpy_r_r379, cpy_r_r380);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 171, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r382 = CPyStatic_dict_ops___globals;
    cpy_r_r383 = CPyStatics[8539]; /* 'dict_setdefault_spec_init_op' */
    cpy_r_r384 = CPyDict_SetItem(cpy_r_r382, cpy_r_r383, cpy_r_r381);
    CPy_DECREF(cpy_r_r381);
    cpy_r_r385 = cpy_r_r384 >= 0;
    if (unlikely(!cpy_r_r385)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 171, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r386 = CPyStatics[267]; /* 'keys' */
    cpy_r_r387 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r387 != NULL)) goto CPyL191;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r388 = 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 181, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL191: ;
    cpy_r_r389 = PyList_New(1);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 181, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r390 = (CPyPtr)&((PyListObject *)cpy_r_r389)->ob_item;
    cpy_r_r391 = *(CPyPtr *)cpy_r_r390;
    CPy_INCREF(cpy_r_r387);
    *(PyObject * *)cpy_r_r391 = cpy_r_r387;
    cpy_r_r392 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r392 == NULL)) {
        goto CPyL395;
    } else
        goto CPyL195;
CPyL193: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r393 = 0;
    if (unlikely(!cpy_r_r393)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 182, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL195: ;
    cpy_r_r394 = CPyStatics[8706]; /* 'CPyDict_KeysView' */
    cpy_r_r395 = NULL;
    cpy_r_r396 = NULL;
    cpy_r_r397 = NULL;
    cpy_r_r398 = NULL;
    cpy_r_r399 = NULL;
    cpy_r_r400 = 2;
    cpy_r_r401 = CPY_INT_TAG;
    cpy_r_r402 = CPyDef_registry___method_op(cpy_r_r386, cpy_r_r389, cpy_r_r392, cpy_r_r394, 2, cpy_r_r395, cpy_r_r396, cpy_r_r397, cpy_r_r398, cpy_r_r399, cpy_r_r400, cpy_r_r401);
    CPy_DECREF(cpy_r_r389);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 179, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL396;
CPyL196: ;
    cpy_r_r403 = CPyStatics[2406]; /* 'values' */
    cpy_r_r404 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r404 != NULL)) goto CPyL199;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r405 = 0;
    if (unlikely(!cpy_r_r405)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 190, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL199: ;
    cpy_r_r406 = PyList_New(1);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 190, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r407 = (CPyPtr)&((PyListObject *)cpy_r_r406)->ob_item;
    cpy_r_r408 = *(CPyPtr *)cpy_r_r407;
    CPy_INCREF(cpy_r_r404);
    *(PyObject * *)cpy_r_r408 = cpy_r_r404;
    cpy_r_r409 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r409 == NULL)) {
        goto CPyL397;
    } else
        goto CPyL203;
CPyL201: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r410 = 0;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 191, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL203: ;
    cpy_r_r411 = CPyStatics[8707]; /* 'CPyDict_ValuesView' */
    cpy_r_r412 = NULL;
    cpy_r_r413 = NULL;
    cpy_r_r414 = NULL;
    cpy_r_r415 = NULL;
    cpy_r_r416 = NULL;
    cpy_r_r417 = 2;
    cpy_r_r418 = CPY_INT_TAG;
    cpy_r_r419 = CPyDef_registry___method_op(cpy_r_r403, cpy_r_r406, cpy_r_r409, cpy_r_r411, 2, cpy_r_r412, cpy_r_r413, cpy_r_r414, cpy_r_r415, cpy_r_r416, cpy_r_r417, cpy_r_r418);
    CPy_DECREF(cpy_r_r406);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 188, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL398;
CPyL204: ;
    cpy_r_r420 = CPyStatics[219]; /* 'items' */
    cpy_r_r421 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r421 != NULL)) goto CPyL207;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r422 = 0;
    if (unlikely(!cpy_r_r422)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 199, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL207: ;
    cpy_r_r423 = PyList_New(1);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 199, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r424 = (CPyPtr)&((PyListObject *)cpy_r_r423)->ob_item;
    cpy_r_r425 = *(CPyPtr *)cpy_r_r424;
    CPy_INCREF(cpy_r_r421);
    *(PyObject * *)cpy_r_r425 = cpy_r_r421;
    cpy_r_r426 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r426 == NULL)) {
        goto CPyL399;
    } else
        goto CPyL211;
CPyL209: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r427 = 0;
    if (unlikely(!cpy_r_r427)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 200, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL211: ;
    cpy_r_r428 = CPyStatics[8708]; /* 'CPyDict_ItemsView' */
    cpy_r_r429 = NULL;
    cpy_r_r430 = NULL;
    cpy_r_r431 = NULL;
    cpy_r_r432 = NULL;
    cpy_r_r433 = NULL;
    cpy_r_r434 = 2;
    cpy_r_r435 = CPY_INT_TAG;
    cpy_r_r436 = CPyDef_registry___method_op(cpy_r_r420, cpy_r_r423, cpy_r_r426, cpy_r_r428, 2, cpy_r_r429, cpy_r_r430, cpy_r_r431, cpy_r_r432, cpy_r_r433, cpy_r_r434, cpy_r_r435);
    CPy_DECREF(cpy_r_r423);
    if (unlikely(cpy_r_r436 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 197, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL400;
CPyL212: ;
    cpy_r_r437 = CPyStatics[1550]; /* 'clear' */
    cpy_r_r438 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r438 != NULL)) goto CPyL215;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r439 = 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 208, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL215: ;
    cpy_r_r440 = PyList_New(1);
    if (unlikely(cpy_r_r440 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 208, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r441 = (CPyPtr)&((PyListObject *)cpy_r_r440)->ob_item;
    cpy_r_r442 = *(CPyPtr *)cpy_r_r441;
    CPy_INCREF(cpy_r_r438);
    *(PyObject * *)cpy_r_r442 = cpy_r_r438;
    cpy_r_r443 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r443 == NULL)) {
        goto CPyL401;
    } else
        goto CPyL219;
CPyL217: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r444 = 0;
    if (unlikely(!cpy_r_r444)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 209, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL219: ;
    cpy_r_r445 = CPyStatics[8709]; /* 'CPyDict_Clear' */
    cpy_r_r446 = NULL;
    cpy_r_r447 = NULL;
    cpy_r_r448 = NULL;
    cpy_r_r449 = NULL;
    cpy_r_r450 = NULL;
    cpy_r_r451 = 2;
    cpy_r_r452 = CPY_INT_TAG;
    cpy_r_r453 = CPyDef_registry___method_op(cpy_r_r437, cpy_r_r440, cpy_r_r443, cpy_r_r445, 4, cpy_r_r446, cpy_r_r447, cpy_r_r448, cpy_r_r449, cpy_r_r450, cpy_r_r451, cpy_r_r452);
    CPy_DECREF(cpy_r_r440);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 206, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL402;
CPyL220: ;
    cpy_r_r454 = CPyStatics[362]; /* 'copy' */
    cpy_r_r455 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r455 != NULL)) goto CPyL223;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r456 = 0;
    if (unlikely(!cpy_r_r456)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 217, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL223: ;
    cpy_r_r457 = PyList_New(1);
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 217, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r458 = (CPyPtr)&((PyListObject *)cpy_r_r457)->ob_item;
    cpy_r_r459 = *(CPyPtr *)cpy_r_r458;
    CPy_INCREF(cpy_r_r455);
    *(PyObject * *)cpy_r_r459 = cpy_r_r455;
    cpy_r_r460 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r460 == NULL)) {
        goto CPyL403;
    } else
        goto CPyL227;
CPyL225: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 218, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL227: ;
    cpy_r_r462 = CPyStatics[8710]; /* 'CPyDict_Copy' */
    cpy_r_r463 = NULL;
    cpy_r_r464 = NULL;
    cpy_r_r465 = NULL;
    cpy_r_r466 = NULL;
    cpy_r_r467 = NULL;
    cpy_r_r468 = 2;
    cpy_r_r469 = CPY_INT_TAG;
    cpy_r_r470 = CPyDef_registry___method_op(cpy_r_r454, cpy_r_r457, cpy_r_r460, cpy_r_r462, 2, cpy_r_r463, cpy_r_r464, cpy_r_r465, cpy_r_r466, cpy_r_r467, cpy_r_r468, cpy_r_r469);
    CPy_DECREF(cpy_r_r457);
    if (unlikely(cpy_r_r470 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 215, CPyStatic_dict_ops___globals);
        goto CPyL366;
    } else
        goto CPyL404;
CPyL228: ;
    cpy_r_r471 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r471 != NULL)) goto CPyL231;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r472 = 0;
    if (unlikely(!cpy_r_r472)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 225, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL231: ;
    cpy_r_r473 = PyList_New(1);
    if (unlikely(cpy_r_r473 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 225, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r474 = (CPyPtr)&((PyListObject *)cpy_r_r473)->ob_item;
    cpy_r_r475 = *(CPyPtr *)cpy_r_r474;
    CPy_INCREF(cpy_r_r471);
    *(PyObject * *)cpy_r_r475 = cpy_r_r471;
    cpy_r_r476 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r476 == NULL)) {
        goto CPyL405;
    } else
        goto CPyL235;
CPyL233: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r477 = 0;
    if (unlikely(!cpy_r_r477)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 226, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL235: ;
    cpy_r_r478 = CPyStatics[8711]; /* 'CPyDict_Keys' */
    cpy_r_r479 = NULL;
    cpy_r_r480 = NULL;
    cpy_r_r481 = NULL;
    cpy_r_r482 = NULL;
    cpy_r_r483 = NULL;
    cpy_r_r484 = 2;
    cpy_r_r485 = CPyDef_registry___custom_op(cpy_r_r473, cpy_r_r476, cpy_r_r478, 2, cpy_r_r479, cpy_r_r480, cpy_r_r481, cpy_r_r482, cpy_r_r483, cpy_r_r484);
    CPy_DECREF(cpy_r_r473);
    if (unlikely(cpy_r_r485 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 224, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r486 = CPyStatic_dict_ops___globals;
    cpy_r_r487 = CPyStatics[8533]; /* 'dict_keys_op' */
    cpy_r_r488 = CPyDict_SetItem(cpy_r_r486, cpy_r_r487, cpy_r_r485);
    CPy_DECREF(cpy_r_r485);
    cpy_r_r489 = cpy_r_r488 >= 0;
    if (unlikely(!cpy_r_r489)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 224, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r490 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r490 != NULL)) goto CPyL240;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r491 = 0;
    if (unlikely(!cpy_r_r491)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 233, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL240: ;
    cpy_r_r492 = PyList_New(1);
    if (unlikely(cpy_r_r492 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 233, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r493 = (CPyPtr)&((PyListObject *)cpy_r_r492)->ob_item;
    cpy_r_r494 = *(CPyPtr *)cpy_r_r493;
    CPy_INCREF(cpy_r_r490);
    *(PyObject * *)cpy_r_r494 = cpy_r_r490;
    cpy_r_r495 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r495 == NULL)) {
        goto CPyL406;
    } else
        goto CPyL244;
CPyL242: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r496 = 0;
    if (unlikely(!cpy_r_r496)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 234, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL244: ;
    cpy_r_r497 = CPyStatics[8712]; /* 'CPyDict_Values' */
    cpy_r_r498 = NULL;
    cpy_r_r499 = NULL;
    cpy_r_r500 = NULL;
    cpy_r_r501 = NULL;
    cpy_r_r502 = NULL;
    cpy_r_r503 = 2;
    cpy_r_r504 = CPyDef_registry___custom_op(cpy_r_r492, cpy_r_r495, cpy_r_r497, 2, cpy_r_r498, cpy_r_r499, cpy_r_r500, cpy_r_r501, cpy_r_r502, cpy_r_r503);
    CPy_DECREF(cpy_r_r492);
    if (unlikely(cpy_r_r504 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 232, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r505 = CPyStatic_dict_ops___globals;
    cpy_r_r506 = CPyStatics[8534]; /* 'dict_values_op' */
    cpy_r_r507 = CPyDict_SetItem(cpy_r_r505, cpy_r_r506, cpy_r_r504);
    CPy_DECREF(cpy_r_r504);
    cpy_r_r508 = cpy_r_r507 >= 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 232, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r509 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r509 != NULL)) goto CPyL249;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r510 = 0;
    if (unlikely(!cpy_r_r510)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 241, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL249: ;
    cpy_r_r511 = PyList_New(1);
    if (unlikely(cpy_r_r511 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 241, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r512 = (CPyPtr)&((PyListObject *)cpy_r_r511)->ob_item;
    cpy_r_r513 = *(CPyPtr *)cpy_r_r512;
    CPy_INCREF(cpy_r_r509);
    *(PyObject * *)cpy_r_r513 = cpy_r_r509;
    cpy_r_r514 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r514 == NULL)) {
        goto CPyL407;
    } else
        goto CPyL253;
CPyL251: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r515 = 0;
    if (unlikely(!cpy_r_r515)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 242, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r516 = CPyStatics[8713]; /* 'CPyDict_Items' */
    cpy_r_r517 = NULL;
    cpy_r_r518 = NULL;
    cpy_r_r519 = NULL;
    cpy_r_r520 = NULL;
    cpy_r_r521 = NULL;
    cpy_r_r522 = 2;
    cpy_r_r523 = CPyDef_registry___custom_op(cpy_r_r511, cpy_r_r514, cpy_r_r516, 2, cpy_r_r517, cpy_r_r518, cpy_r_r519, cpy_r_r520, cpy_r_r521, cpy_r_r522);
    CPy_DECREF(cpy_r_r511);
    if (unlikely(cpy_r_r523 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 240, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r524 = CPyStatic_dict_ops___globals;
    cpy_r_r525 = CPyStatics[8535]; /* 'dict_items_op' */
    cpy_r_r526 = CPyDict_SetItem(cpy_r_r524, cpy_r_r525, cpy_r_r523);
    CPy_DECREF(cpy_r_r523);
    cpy_r_r527 = cpy_r_r526 >= 0;
    if (unlikely(!cpy_r_r527)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 240, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r528 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r528 != NULL)) goto CPyL258;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r529 = 0;
    if (unlikely(!cpy_r_r529)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 249, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL258: ;
    cpy_r_r530 = PyList_New(1);
    if (unlikely(cpy_r_r530 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 249, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r531 = (CPyPtr)&((PyListObject *)cpy_r_r530)->ob_item;
    cpy_r_r532 = *(CPyPtr *)cpy_r_r531;
    CPy_INCREF(cpy_r_r528);
    *(PyObject * *)cpy_r_r532 = cpy_r_r528;
    cpy_r_r533 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r533 == NULL)) {
        goto CPyL408;
    } else
        goto CPyL262;
CPyL260: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r534 = 0;
    if (unlikely(!cpy_r_r534)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 250, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL262: ;
    cpy_r_r535 = CPyStatics[8714]; /* 'CPyDict_GetKeysIter' */
    cpy_r_r536 = NULL;
    cpy_r_r537 = NULL;
    cpy_r_r538 = NULL;
    cpy_r_r539 = NULL;
    cpy_r_r540 = NULL;
    cpy_r_r541 = 2;
    cpy_r_r542 = CPyDef_registry___custom_op(cpy_r_r530, cpy_r_r533, cpy_r_r535, 2, cpy_r_r536, cpy_r_r537, cpy_r_r538, cpy_r_r539, cpy_r_r540, cpy_r_r541);
    CPy_DECREF(cpy_r_r530);
    if (unlikely(cpy_r_r542 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 248, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r543 = CPyStatic_dict_ops___globals;
    cpy_r_r544 = CPyStatics[8284]; /* 'dict_key_iter_op' */
    cpy_r_r545 = CPyDict_SetItem(cpy_r_r543, cpy_r_r544, cpy_r_r542);
    CPy_DECREF(cpy_r_r542);
    cpy_r_r546 = cpy_r_r545 >= 0;
    if (unlikely(!cpy_r_r546)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 248, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r547 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r547 != NULL)) goto CPyL267;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r548 = 0;
    if (unlikely(!cpy_r_r548)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 256, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL267: ;
    cpy_r_r549 = PyList_New(1);
    if (unlikely(cpy_r_r549 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 256, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r550 = (CPyPtr)&((PyListObject *)cpy_r_r549)->ob_item;
    cpy_r_r551 = *(CPyPtr *)cpy_r_r550;
    CPy_INCREF(cpy_r_r547);
    *(PyObject * *)cpy_r_r551 = cpy_r_r547;
    cpy_r_r552 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r552 == NULL)) {
        goto CPyL409;
    } else
        goto CPyL271;
CPyL269: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r553 = 0;
    if (unlikely(!cpy_r_r553)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 257, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL271: ;
    cpy_r_r554 = CPyStatics[8715]; /* 'CPyDict_GetValuesIter' */
    cpy_r_r555 = NULL;
    cpy_r_r556 = NULL;
    cpy_r_r557 = NULL;
    cpy_r_r558 = NULL;
    cpy_r_r559 = NULL;
    cpy_r_r560 = 2;
    cpy_r_r561 = CPyDef_registry___custom_op(cpy_r_r549, cpy_r_r552, cpy_r_r554, 2, cpy_r_r555, cpy_r_r556, cpy_r_r557, cpy_r_r558, cpy_r_r559, cpy_r_r560);
    CPy_DECREF(cpy_r_r549);
    if (unlikely(cpy_r_r561 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 255, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r562 = CPyStatic_dict_ops___globals;
    cpy_r_r563 = CPyStatics[8288]; /* 'dict_value_iter_op' */
    cpy_r_r564 = CPyDict_SetItem(cpy_r_r562, cpy_r_r563, cpy_r_r561);
    CPy_DECREF(cpy_r_r561);
    cpy_r_r565 = cpy_r_r564 >= 0;
    if (unlikely(!cpy_r_r565)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 255, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r566 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r566 != NULL)) goto CPyL276;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r567 = 0;
    if (unlikely(!cpy_r_r567)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 263, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL276: ;
    cpy_r_r568 = PyList_New(1);
    if (unlikely(cpy_r_r568 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 263, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r569 = (CPyPtr)&((PyListObject *)cpy_r_r568)->ob_item;
    cpy_r_r570 = *(CPyPtr *)cpy_r_r569;
    CPy_INCREF(cpy_r_r566);
    *(PyObject * *)cpy_r_r570 = cpy_r_r566;
    cpy_r_r571 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r571 == NULL)) {
        goto CPyL410;
    } else
        goto CPyL280;
CPyL278: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r572 = 0;
    if (unlikely(!cpy_r_r572)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 264, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL280: ;
    cpy_r_r573 = CPyStatics[8716]; /* 'CPyDict_GetItemsIter' */
    cpy_r_r574 = NULL;
    cpy_r_r575 = NULL;
    cpy_r_r576 = NULL;
    cpy_r_r577 = NULL;
    cpy_r_r578 = NULL;
    cpy_r_r579 = 2;
    cpy_r_r580 = CPyDef_registry___custom_op(cpy_r_r568, cpy_r_r571, cpy_r_r573, 2, cpy_r_r574, cpy_r_r575, cpy_r_r576, cpy_r_r577, cpy_r_r578, cpy_r_r579);
    CPy_DECREF(cpy_r_r568);
    if (unlikely(cpy_r_r580 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 262, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r581 = CPyStatic_dict_ops___globals;
    cpy_r_r582 = CPyStatics[8283]; /* 'dict_item_iter_op' */
    cpy_r_r583 = CPyDict_SetItem(cpy_r_r581, cpy_r_r582, cpy_r_r580);
    CPy_DECREF(cpy_r_r580);
    cpy_r_r584 = cpy_r_r583 >= 0;
    if (unlikely(!cpy_r_r584)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 262, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r585 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r585 != NULL)) goto CPyL285;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r586 = 0;
    if (unlikely(!cpy_r_r586)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 270, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r587 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r587 != NULL)) goto CPyL288;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r588 = 0;
    if (unlikely(!cpy_r_r588)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 270, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL288: ;
    cpy_r_r589 = PyList_New(2);
    if (unlikely(cpy_r_r589 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 270, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r590 = (CPyPtr)&((PyListObject *)cpy_r_r589)->ob_item;
    cpy_r_r591 = *(CPyPtr *)cpy_r_r590;
    CPy_INCREF(cpy_r_r585);
    *(PyObject * *)cpy_r_r591 = cpy_r_r585;
    cpy_r_r592 = cpy_r_r591 + 8;
    CPy_INCREF(cpy_r_r587);
    *(PyObject * *)cpy_r_r592 = cpy_r_r587;
    cpy_r_r593 = CPyStatic_dict_ops___globals;
    cpy_r_r594 = CPyStatics[8029]; /* 'dict_next_rtuple_single' */
    cpy_r_r595 = CPyDict_GetItem(cpy_r_r593, cpy_r_r594);
    if (unlikely(cpy_r_r595 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 271, CPyStatic_dict_ops___globals);
        goto CPyL411;
    }
    if (likely(Py_TYPE(cpy_r_r595) == CPyType_rtypes___RTuple))
        cpy_r_r596 = cpy_r_r595;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 271, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r595);
        goto CPyL411;
    }
    cpy_r_r597 = CPyStatics[8717]; /* 'CPyDict_NextKey' */
    cpy_r_r598 = NULL;
    cpy_r_r599 = NULL;
    cpy_r_r600 = NULL;
    cpy_r_r601 = NULL;
    cpy_r_r602 = NULL;
    cpy_r_r603 = 2;
    cpy_r_r604 = CPyDef_registry___custom_op(cpy_r_r589, cpy_r_r596, cpy_r_r597, 0, cpy_r_r598, cpy_r_r599, cpy_r_r600, cpy_r_r601, cpy_r_r602, cpy_r_r603);
    CPy_DECREF(cpy_r_r589);
    CPy_DECREF(cpy_r_r596);
    if (unlikely(cpy_r_r604 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 269, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r605 = CPyStatic_dict_ops___globals;
    cpy_r_r606 = CPyStatics[8286]; /* 'dict_next_key_op' */
    cpy_r_r607 = CPyDict_SetItem(cpy_r_r605, cpy_r_r606, cpy_r_r604);
    CPy_DECREF(cpy_r_r604);
    cpy_r_r608 = cpy_r_r607 >= 0;
    if (unlikely(!cpy_r_r608)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 269, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r609 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r609 != NULL)) goto CPyL296;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r610 = 0;
    if (unlikely(!cpy_r_r610)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 277, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL296: ;
    cpy_r_r611 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r611 != NULL)) goto CPyL299;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r612 = 0;
    if (unlikely(!cpy_r_r612)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 277, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL299: ;
    cpy_r_r613 = PyList_New(2);
    if (unlikely(cpy_r_r613 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 277, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r614 = (CPyPtr)&((PyListObject *)cpy_r_r613)->ob_item;
    cpy_r_r615 = *(CPyPtr *)cpy_r_r614;
    CPy_INCREF(cpy_r_r609);
    *(PyObject * *)cpy_r_r615 = cpy_r_r609;
    cpy_r_r616 = cpy_r_r615 + 8;
    CPy_INCREF(cpy_r_r611);
    *(PyObject * *)cpy_r_r616 = cpy_r_r611;
    cpy_r_r617 = CPyStatic_dict_ops___globals;
    cpy_r_r618 = CPyStatics[8029]; /* 'dict_next_rtuple_single' */
    cpy_r_r619 = CPyDict_GetItem(cpy_r_r617, cpy_r_r618);
    if (unlikely(cpy_r_r619 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 278, CPyStatic_dict_ops___globals);
        goto CPyL412;
    }
    if (likely(Py_TYPE(cpy_r_r619) == CPyType_rtypes___RTuple))
        cpy_r_r620 = cpy_r_r619;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 278, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r619);
        goto CPyL412;
    }
    cpy_r_r621 = CPyStatics[8718]; /* 'CPyDict_NextValue' */
    cpy_r_r622 = NULL;
    cpy_r_r623 = NULL;
    cpy_r_r624 = NULL;
    cpy_r_r625 = NULL;
    cpy_r_r626 = NULL;
    cpy_r_r627 = 2;
    cpy_r_r628 = CPyDef_registry___custom_op(cpy_r_r613, cpy_r_r620, cpy_r_r621, 0, cpy_r_r622, cpy_r_r623, cpy_r_r624, cpy_r_r625, cpy_r_r626, cpy_r_r627);
    CPy_DECREF(cpy_r_r613);
    CPy_DECREF(cpy_r_r620);
    if (unlikely(cpy_r_r628 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 276, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r629 = CPyStatic_dict_ops___globals;
    cpy_r_r630 = CPyStatics[8287]; /* 'dict_next_value_op' */
    cpy_r_r631 = CPyDict_SetItem(cpy_r_r629, cpy_r_r630, cpy_r_r628);
    CPy_DECREF(cpy_r_r628);
    cpy_r_r632 = cpy_r_r631 >= 0;
    if (unlikely(!cpy_r_r632)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 276, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r633 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r633 != NULL)) goto CPyL307;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r634 = 0;
    if (unlikely(!cpy_r_r634)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 284, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL307: ;
    cpy_r_r635 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r635 != NULL)) goto CPyL310;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r636 = 0;
    if (unlikely(!cpy_r_r636)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 284, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL310: ;
    cpy_r_r637 = PyList_New(2);
    if (unlikely(cpy_r_r637 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 284, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r638 = (CPyPtr)&((PyListObject *)cpy_r_r637)->ob_item;
    cpy_r_r639 = *(CPyPtr *)cpy_r_r638;
    CPy_INCREF(cpy_r_r633);
    *(PyObject * *)cpy_r_r639 = cpy_r_r633;
    cpy_r_r640 = cpy_r_r639 + 8;
    CPy_INCREF(cpy_r_r635);
    *(PyObject * *)cpy_r_r640 = cpy_r_r635;
    cpy_r_r641 = CPyStatic_dict_ops___globals;
    cpy_r_r642 = CPyStatics[8028]; /* 'dict_next_rtuple_pair' */
    cpy_r_r643 = CPyDict_GetItem(cpy_r_r641, cpy_r_r642);
    if (unlikely(cpy_r_r643 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 285, CPyStatic_dict_ops___globals);
        goto CPyL413;
    }
    if (likely(Py_TYPE(cpy_r_r643) == CPyType_rtypes___RTuple))
        cpy_r_r644 = cpy_r_r643;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 285, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r643);
        goto CPyL413;
    }
    cpy_r_r645 = CPyStatics[8719]; /* 'CPyDict_NextItem' */
    cpy_r_r646 = NULL;
    cpy_r_r647 = NULL;
    cpy_r_r648 = NULL;
    cpy_r_r649 = NULL;
    cpy_r_r650 = NULL;
    cpy_r_r651 = 2;
    cpy_r_r652 = CPyDef_registry___custom_op(cpy_r_r637, cpy_r_r644, cpy_r_r645, 0, cpy_r_r646, cpy_r_r647, cpy_r_r648, cpy_r_r649, cpy_r_r650, cpy_r_r651);
    CPy_DECREF(cpy_r_r637);
    CPy_DECREF(cpy_r_r644);
    if (unlikely(cpy_r_r652 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 283, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r653 = CPyStatic_dict_ops___globals;
    cpy_r_r654 = CPyStatics[8285]; /* 'dict_next_item_op' */
    cpy_r_r655 = CPyDict_SetItem(cpy_r_r653, cpy_r_r654, cpy_r_r652);
    CPy_DECREF(cpy_r_r652);
    cpy_r_r656 = cpy_r_r655 >= 0;
    if (unlikely(!cpy_r_r656)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 283, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r657 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r657 != NULL)) goto CPyL318;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r658 = 0;
    if (unlikely(!cpy_r_r658)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 292, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL318: ;
    cpy_r_r659 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r659 != NULL)) goto CPyL321;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r660 = 0;
    if (unlikely(!cpy_r_r660)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 292, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL321: ;
    cpy_r_r661 = PyList_New(2);
    if (unlikely(cpy_r_r661 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 292, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r662 = (CPyPtr)&((PyListObject *)cpy_r_r661)->ob_item;
    cpy_r_r663 = *(CPyPtr *)cpy_r_r662;
    CPy_INCREF(cpy_r_r657);
    *(PyObject * *)cpy_r_r663 = cpy_r_r657;
    cpy_r_r664 = cpy_r_r663 + 8;
    CPy_INCREF(cpy_r_r659);
    *(PyObject * *)cpy_r_r664 = cpy_r_r659;
    cpy_r_r665 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r665 == NULL)) {
        goto CPyL414;
    } else
        goto CPyL325;
CPyL323: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r666 = 0;
    if (unlikely(!cpy_r_r666)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 293, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL325: ;
    cpy_r_r667 = CPyStatics[8720]; /* 'CPyDict_CheckSize' */
    cpy_r_r668 = NULL;
    cpy_r_r669 = NULL;
    cpy_r_r670 = NULL;
    cpy_r_r671 = NULL;
    cpy_r_r672 = NULL;
    cpy_r_r673 = 2;
    cpy_r_r674 = CPyDef_registry___custom_op(cpy_r_r661, cpy_r_r665, cpy_r_r667, 4, cpy_r_r668, cpy_r_r669, cpy_r_r670, cpy_r_r671, cpy_r_r672, cpy_r_r673);
    CPy_DECREF(cpy_r_r661);
    if (unlikely(cpy_r_r674 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 291, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r675 = CPyStatic_dict_ops___globals;
    cpy_r_r676 = CPyStatics[8280]; /* 'dict_check_size_op' */
    cpy_r_r677 = CPyDict_SetItem(cpy_r_r675, cpy_r_r676, cpy_r_r674);
    CPy_DECREF(cpy_r_r674);
    cpy_r_r678 = cpy_r_r677 >= 0;
    if (unlikely(!cpy_r_r678)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 291, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r679 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r679 != NULL)) goto CPyL330;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r680 = 0;
    if (unlikely(!cpy_r_r680)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 299, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL330: ;
    cpy_r_r681 = PyList_New(1);
    if (unlikely(cpy_r_r681 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 299, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r682 = (CPyPtr)&((PyListObject *)cpy_r_r681)->ob_item;
    cpy_r_r683 = *(CPyPtr *)cpy_r_r682;
    CPy_INCREF(cpy_r_r679);
    *(PyObject * *)cpy_r_r683 = cpy_r_r679;
    cpy_r_r684 = CPyStatic_dict_ops___globals;
    cpy_r_r685 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r686 = CPyDict_GetItem(cpy_r_r684, cpy_r_r685);
    if (unlikely(cpy_r_r686 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 300, CPyStatic_dict_ops___globals);
        goto CPyL415;
    }
    if (likely(Py_TYPE(cpy_r_r686) == CPyType_rtypes___RPrimitive))
        cpy_r_r687 = cpy_r_r686;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 300, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r686);
        goto CPyL415;
    }
    cpy_r_r688 = CPyStatics[8721]; /* 'PyDict_Size' */
    cpy_r_r689 = NULL;
    cpy_r_r690 = NULL;
    cpy_r_r691 = NULL;
    cpy_r_r692 = NULL;
    cpy_r_r693 = NULL;
    cpy_r_r694 = 2;
    cpy_r_r695 = CPyDef_registry___custom_op(cpy_r_r681, cpy_r_r687, cpy_r_r688, 0, cpy_r_r689, cpy_r_r690, cpy_r_r691, cpy_r_r692, cpy_r_r693, cpy_r_r694);
    CPy_DECREF(cpy_r_r681);
    CPy_DECREF(cpy_r_r687);
    if (unlikely(cpy_r_r695 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 298, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r696 = CPyStatic_dict_ops___globals;
    cpy_r_r697 = CPyStatics[8428]; /* 'dict_ssize_t_size_op' */
    cpy_r_r698 = CPyDict_SetItem(cpy_r_r696, cpy_r_r697, cpy_r_r695);
    CPy_DECREF(cpy_r_r695);
    cpy_r_r699 = cpy_r_r698 >= 0;
    if (unlikely(!cpy_r_r699)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 298, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r700 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r700 != NULL)) goto CPyL338;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r701 = 0;
    if (unlikely(!cpy_r_r701)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 307, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL338: ;
    cpy_r_r702 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r702 != NULL)) goto CPyL341;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r703 = 0;
    if (unlikely(!cpy_r_r703)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 307, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL341: ;
    cpy_r_r704 = PyList_New(2);
    if (unlikely(cpy_r_r704 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 307, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r705 = (CPyPtr)&((PyListObject *)cpy_r_r704)->ob_item;
    cpy_r_r706 = *(CPyPtr *)cpy_r_r705;
    CPy_INCREF(cpy_r_r700);
    *(PyObject * *)cpy_r_r706 = cpy_r_r700;
    cpy_r_r707 = cpy_r_r706 + 8;
    CPy_INCREF(cpy_r_r702);
    *(PyObject * *)cpy_r_r707 = cpy_r_r702;
    cpy_r_r708 = CPyStatic_dict_ops___globals;
    cpy_r_r709 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r710 = CPyDict_GetItem(cpy_r_r708, cpy_r_r709);
    if (unlikely(cpy_r_r710 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 308, CPyStatic_dict_ops___globals);
        goto CPyL416;
    }
    if (likely(Py_TYPE(cpy_r_r710) == CPyType_rtypes___RPrimitive))
        cpy_r_r711 = cpy_r_r710;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 308, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r710);
        goto CPyL416;
    }
    cpy_r_r712 = CPyStatics[8722]; /* 'PyDict_DelItem' */
    cpy_r_r713 = NULL;
    cpy_r_r714 = NULL;
    cpy_r_r715 = NULL;
    cpy_r_r716 = NULL;
    cpy_r_r717 = NULL;
    cpy_r_r718 = 2;
    cpy_r_r719 = CPyDef_registry___custom_op(cpy_r_r704, cpy_r_r711, cpy_r_r712, 20, cpy_r_r713, cpy_r_r714, cpy_r_r715, cpy_r_r716, cpy_r_r717, cpy_r_r718);
    CPy_DECREF(cpy_r_r704);
    CPy_DECREF(cpy_r_r711);
    if (unlikely(cpy_r_r719 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 306, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r720 = CPyStatic_dict_ops___globals;
    cpy_r_r721 = CPyStatics[8479]; /* 'dict_del_item' */
    cpy_r_r722 = CPyDict_SetItem(cpy_r_r720, cpy_r_r721, cpy_r_r719);
    CPy_DECREF(cpy_r_r719);
    cpy_r_r723 = cpy_r_r722 >= 0;
    if (unlikely(!cpy_r_r723)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 306, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r724 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r724 != NULL)) goto CPyL349;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r725 = 0;
    if (unlikely(!cpy_r_r725)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 314, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL349: ;
    cpy_r_r726 = PyList_New(1);
    if (unlikely(cpy_r_r726 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 314, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r727 = (CPyPtr)&((PyListObject *)cpy_r_r726)->ob_item;
    cpy_r_r728 = *(CPyPtr *)cpy_r_r727;
    CPy_INCREF(cpy_r_r724);
    *(PyObject * *)cpy_r_r728 = cpy_r_r724;
    cpy_r_r729 = CPyStatic_dict_ops___globals;
    cpy_r_r730 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r731 = CPyDict_GetItem(cpy_r_r729, cpy_r_r730);
    if (unlikely(cpy_r_r731 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 315, CPyStatic_dict_ops___globals);
        goto CPyL417;
    }
    if (likely(Py_TYPE(cpy_r_r731) == CPyType_rtypes___RPrimitive))
        cpy_r_r732 = cpy_r_r731;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 315, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r731);
        goto CPyL417;
    }
    cpy_r_r733 = CPyStatics[8723]; /* 'CPyMapping_Check' */
    cpy_r_r734 = NULL;
    cpy_r_r735 = NULL;
    cpy_r_r736 = NULL;
    cpy_r_r737 = NULL;
    cpy_r_r738 = NULL;
    cpy_r_r739 = 2;
    cpy_r_r740 = CPyDef_registry___custom_op(cpy_r_r726, cpy_r_r732, cpy_r_r733, 0, cpy_r_r734, cpy_r_r735, cpy_r_r736, cpy_r_r737, cpy_r_r738, cpy_r_r739);
    CPy_DECREF(cpy_r_r726);
    CPy_DECREF(cpy_r_r732);
    if (unlikely(cpy_r_r740 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 313, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r741 = CPyStatic_dict_ops___globals;
    cpy_r_r742 = CPyStatics[8476]; /* 'supports_mapping_protocol' */
    cpy_r_r743 = CPyDict_SetItem(cpy_r_r741, cpy_r_r742, cpy_r_r740);
    CPy_DECREF(cpy_r_r740);
    cpy_r_r744 = cpy_r_r743 >= 0;
    if (unlikely(!cpy_r_r744)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 313, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r745 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r745 != NULL)) goto CPyL357;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r746 = 0;
    if (unlikely(!cpy_r_r746)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 321, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL357: ;
    cpy_r_r747 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r747 != NULL)) goto CPyL360;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r748 = 0;
    if (unlikely(!cpy_r_r748)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 321, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    CPy_Unreachable();
CPyL360: ;
    cpy_r_r749 = PyList_New(2);
    if (unlikely(cpy_r_r749 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 321, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r750 = (CPyPtr)&((PyListObject *)cpy_r_r749)->ob_item;
    cpy_r_r751 = *(CPyPtr *)cpy_r_r750;
    CPy_INCREF(cpy_r_r745);
    *(PyObject * *)cpy_r_r751 = cpy_r_r745;
    cpy_r_r752 = cpy_r_r751 + 8;
    CPy_INCREF(cpy_r_r747);
    *(PyObject * *)cpy_r_r752 = cpy_r_r747;
    cpy_r_r753 = CPyStatic_dict_ops___globals;
    cpy_r_r754 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r755 = CPyDict_GetItem(cpy_r_r753, cpy_r_r754);
    if (unlikely(cpy_r_r755 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 322, CPyStatic_dict_ops___globals);
        goto CPyL418;
    }
    if (likely(Py_TYPE(cpy_r_r755) == CPyType_rtypes___RPrimitive))
        cpy_r_r756 = cpy_r_r755;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/dict_ops.py", "<module>", 322, CPyStatic_dict_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r755);
        goto CPyL418;
    }
    cpy_r_r757 = CPyStatics[8724]; /* 'PyMapping_HasKey' */
    cpy_r_r758 = NULL;
    cpy_r_r759 = NULL;
    cpy_r_r760 = NULL;
    cpy_r_r761 = NULL;
    cpy_r_r762 = NULL;
    cpy_r_r763 = 2;
    cpy_r_r764 = CPyDef_registry___custom_op(cpy_r_r749, cpy_r_r756, cpy_r_r757, 0, cpy_r_r758, cpy_r_r759, cpy_r_r760, cpy_r_r761, cpy_r_r762, cpy_r_r763);
    CPy_DECREF(cpy_r_r749);
    CPy_DECREF(cpy_r_r756);
    if (unlikely(cpy_r_r764 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 320, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    cpy_r_r765 = CPyStatic_dict_ops___globals;
    cpy_r_r766 = CPyStatics[8477]; /* 'mapping_has_key' */
    cpy_r_r767 = CPyDict_SetItem(cpy_r_r765, cpy_r_r766, cpy_r_r764);
    CPy_DECREF(cpy_r_r764);
    cpy_r_r768 = cpy_r_r767 >= 0;
    if (unlikely(!cpy_r_r768)) {
        CPy_AddTraceback("mypyc/primitives/dict_ops.py", "<module>", 320, CPyStatic_dict_ops___globals);
        goto CPyL366;
    }
    return 1;
CPyL366: ;
    cpy_r_r769 = 2;
    return cpy_r_r769;
CPyL367: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL368: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL13;
CPyL369: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL16;
CPyL370: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL18;
CPyL371: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL366;
CPyL372: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL26;
CPyL373: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL29;
CPyL374: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL38;
CPyL375: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL41;
CPyL376: ;
    CPy_DecRef(cpy_r_r95);
    goto CPyL46;
CPyL377: ;
    CPy_DecRef(cpy_r_r118);
    goto CPyL58;
CPyL378: ;
    CPy_DecRef(cpy_r_r144);
    goto CPyL366;
CPyL379: ;
    CPy_DecRef(cpy_r_r171);
    goto CPyL366;
CPyL380: ;
    CPy_DecRef(cpy_r_r171);
    CPy_DecRef(cpy_r_r178);
    goto CPyL86;
CPyL381: ;
    CPy_DecRef(cpy_r_r171);
    CPy_DecRef(cpy_r_r178);
    goto CPyL366;
CPyL382: ;
    CPy_DECREF(cpy_r_r193);
    goto CPyL90;
CPyL383: ;
    CPy_DecRef(cpy_r_r199);
    goto CPyL366;
CPyL384: ;
    CPy_DecRef(cpy_r_r223);
    goto CPyL366;
CPyL385: ;
    CPy_DecRef(cpy_r_r248);
    goto CPyL366;
CPyL386: ;
    CPy_DECREF(cpy_r_r264);
    goto CPyL122;
CPyL387: ;
    CPy_DecRef(cpy_r_r272);
    goto CPyL133;
CPyL388: ;
    CPy_DECREF(cpy_r_r287);
    goto CPyL136;
CPyL389: ;
    CPy_DecRef(cpy_r_r293);
    goto CPyL144;
CPyL390: ;
    CPy_DecRef(cpy_r_r319);
    goto CPyL159;
CPyL391: ;
    CPy_DecRef(cpy_r_r344);
    goto CPyL171;
CPyL392: ;
    CPy_DECREF(cpy_r_r358);
    goto CPyL174;
CPyL393: ;
    CPy_DecRef(cpy_r_r366);
    goto CPyL366;
CPyL394: ;
    CPy_DecRef(cpy_r_r367);
    goto CPyL184;
CPyL395: ;
    CPy_DecRef(cpy_r_r389);
    goto CPyL193;
CPyL396: ;
    CPy_DECREF(cpy_r_r402);
    goto CPyL196;
CPyL397: ;
    CPy_DecRef(cpy_r_r406);
    goto CPyL201;
CPyL398: ;
    CPy_DECREF(cpy_r_r419);
    goto CPyL204;
CPyL399: ;
    CPy_DecRef(cpy_r_r423);
    goto CPyL209;
CPyL400: ;
    CPy_DECREF(cpy_r_r436);
    goto CPyL212;
CPyL401: ;
    CPy_DecRef(cpy_r_r440);
    goto CPyL217;
CPyL402: ;
    CPy_DECREF(cpy_r_r453);
    goto CPyL220;
CPyL403: ;
    CPy_DecRef(cpy_r_r457);
    goto CPyL225;
CPyL404: ;
    CPy_DECREF(cpy_r_r470);
    goto CPyL228;
CPyL405: ;
    CPy_DecRef(cpy_r_r473);
    goto CPyL233;
CPyL406: ;
    CPy_DecRef(cpy_r_r492);
    goto CPyL242;
CPyL407: ;
    CPy_DecRef(cpy_r_r511);
    goto CPyL251;
CPyL408: ;
    CPy_DecRef(cpy_r_r530);
    goto CPyL260;
CPyL409: ;
    CPy_DecRef(cpy_r_r549);
    goto CPyL269;
CPyL410: ;
    CPy_DecRef(cpy_r_r568);
    goto CPyL278;
CPyL411: ;
    CPy_DecRef(cpy_r_r589);
    goto CPyL366;
CPyL412: ;
    CPy_DecRef(cpy_r_r613);
    goto CPyL366;
CPyL413: ;
    CPy_DecRef(cpy_r_r637);
    goto CPyL366;
CPyL414: ;
    CPy_DecRef(cpy_r_r661);
    goto CPyL323;
CPyL415: ;
    CPy_DecRef(cpy_r_r681);
    goto CPyL366;
CPyL416: ;
    CPy_DecRef(cpy_r_r704);
    goto CPyL366;
CPyL417: ;
    CPy_DecRef(cpy_r_r726);
    goto CPyL366;
CPyL418: ;
    CPy_DecRef(cpy_r_r749);
    goto CPyL366;
}
