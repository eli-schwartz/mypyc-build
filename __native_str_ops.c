#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef str_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef str_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.str_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    str_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___str_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___str_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___str_ops_internal);
        return CPyModule_mypyc___primitives___str_ops_internal;
    }
    CPyModule_mypyc___primitives___str_ops_internal = PyModule_Create(&str_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___str_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___str_ops_internal, "__name__");
    CPyStatic_str_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___str_ops_internal);
    if (unlikely(CPyStatic_str_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_str_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___str_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___str_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_str_ops_____top_level__(void) {
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
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    CPyPtr cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyPtr cpy_r_r122;
    CPyPtr cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    CPyPtr cpy_r_r143;
    CPyPtr cpy_r_r144;
    CPyPtr cpy_r_r145;
    CPyPtr cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyPtr cpy_r_r167;
    CPyPtr cpy_r_r168;
    CPyPtr cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    CPyTagged cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyPtr cpy_r_r186;
    CPyPtr cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    CPyPtr cpy_r_r209;
    CPyPtr cpy_r_r210;
    CPyPtr cpy_r_r211;
    PyObject *cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    CPyTagged cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    CPyPtr cpy_r_r229;
    CPyPtr cpy_r_r230;
    CPyPtr cpy_r_r231;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    CPyTagged cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    CPyPtr cpy_r_r250;
    CPyPtr cpy_r_r251;
    CPyPtr cpy_r_r252;
    CPyPtr cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    CPyPtr cpy_r_r262;
    CPyPtr cpy_r_r263;
    CPyPtr cpy_r_r264;
    CPyPtr cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    int32_t cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    tuple_T2IO cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    tuple_T2IO cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    CPyPtr cpy_r_r281;
    CPyPtr cpy_r_r282;
    CPyPtr cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    tuple_T2IO cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    CPyPtr cpy_r_r291;
    CPyPtr cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    CPyPtr cpy_r_r295;
    CPyPtr cpy_r_r296;
    CPyPtr cpy_r_r297;
    CPyPtr cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    int32_t cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    CPyPtr cpy_r_r307;
    int64_t cpy_r_r308;
    CPyTagged cpy_r_r309;
    CPyTagged cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    int32_t cpy_r_r314;
    char cpy_r_r315;
    char cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    CPyTagged cpy_r_r325;
    CPyTagged cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    CPyTagged cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    CPyTagged cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    char cpy_r_r355;
    CPyTagged cpy_r_r356;
    PyObject *cpy_r_r357;
    CPyTagged cpy_r_r358;
    PyObject *cpy_r_r359;
    int32_t cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    char cpy_r_r366;
    PyObject *cpy_r_r367;
    char cpy_r_r368;
    PyObject *cpy_r_r369;
    CPyPtr cpy_r_r370;
    CPyPtr cpy_r_r371;
    CPyPtr cpy_r_r372;
    CPyPtr cpy_r_r373;
    PyObject *cpy_r_r374;
    char cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    tuple_T2IO cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    CPyPtr cpy_r_r384;
    CPyPtr cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    char cpy_r_r390;
    CPyTagged cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    char cpy_r_r395;
    PyObject *cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    char cpy_r_r401;
    PyObject *cpy_r_r402;
    CPyPtr cpy_r_r403;
    CPyPtr cpy_r_r404;
    CPyPtr cpy_r_r405;
    CPyPtr cpy_r_r406;
    CPyPtr cpy_r_r407;
    PyObject *cpy_r_r408;
    char cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    char cpy_r_r416;
    CPyTagged cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    char cpy_r_r420;
    PyObject *cpy_r_r421;
    CPyPtr cpy_r_r422;
    CPyPtr cpy_r_r423;
    PyObject *cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    char cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    int32_t cpy_r_r436;
    char cpy_r_r437;
    PyObject *cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    CPyPtr cpy_r_r441;
    CPyPtr cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    char cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    int32_t cpy_r_r457;
    char cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    CPyPtr cpy_r_r463;
    CPyPtr cpy_r_r464;
    PyObject *cpy_r_r465;
    char cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    char cpy_r_r469;
    tuple_T2IO cpy_r_r470;
    PyObject *cpy_r_r471;
    char cpy_r_r472;
    tuple_T2IO cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    CPyPtr cpy_r_r477;
    CPyPtr cpy_r_r478;
    CPyPtr cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    char cpy_r_r484;
    CPyTagged cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    char cpy_r_r489;
    PyObject *cpy_r_r490;
    char cpy_r_r491;
    PyObject *cpy_r_r492;
    CPyPtr cpy_r_r493;
    CPyPtr cpy_r_r494;
    CPyPtr cpy_r_r495;
    PyObject *cpy_r_r496;
    char cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    char cpy_r_r500;
    tuple_T2IO cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    CPyPtr cpy_r_r504;
    CPyPtr cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    char cpy_r_r510;
    CPyTagged cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    char cpy_r_r515;
    PyObject *cpy_r_r516;
    char cpy_r_r517;
    PyObject *cpy_r_r518;
    char cpy_r_r519;
    PyObject *cpy_r_r520;
    CPyPtr cpy_r_r521;
    CPyPtr cpy_r_r522;
    CPyPtr cpy_r_r523;
    CPyPtr cpy_r_r524;
    PyObject *cpy_r_r525;
    char cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    char cpy_r_r533;
    CPyTagged cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    char cpy_r_r538;
    PyObject *cpy_r_r539;
    CPyPtr cpy_r_r540;
    CPyPtr cpy_r_r541;
    PyObject *cpy_r_r542;
    char cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    char cpy_r_r546;
    tuple_T2IO cpy_r_r547;
    PyObject *cpy_r_r548;
    char cpy_r_r549;
    tuple_T2IO cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    CPyPtr cpy_r_r554;
    CPyPtr cpy_r_r555;
    CPyPtr cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    char cpy_r_r561;
    CPyTagged cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    char cpy_r_r566;
    PyObject *cpy_r_r567;
    char cpy_r_r568;
    PyObject *cpy_r_r569;
    CPyPtr cpy_r_r570;
    CPyPtr cpy_r_r571;
    CPyPtr cpy_r_r572;
    PyObject *cpy_r_r573;
    char cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    char cpy_r_r577;
    tuple_T2IO cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    CPyPtr cpy_r_r581;
    CPyPtr cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    char cpy_r_r587;
    CPyTagged cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    char cpy_r_r592;
    PyObject *cpy_r_r593;
    char cpy_r_r594;
    PyObject *cpy_r_r595;
    char cpy_r_r596;
    PyObject *cpy_r_r597;
    CPyPtr cpy_r_r598;
    CPyPtr cpy_r_r599;
    CPyPtr cpy_r_r600;
    CPyPtr cpy_r_r601;
    PyObject *cpy_r_r602;
    char cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject *cpy_r_r609;
    char cpy_r_r610;
    CPyTagged cpy_r_r611;
    PyObject *cpy_r_r612;
    char cpy_r_r613;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", -1, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_str_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 3, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10260]; /* ('ERR_MAGIC', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_str_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 5, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10283]; /* ('RType', 'bit_rprimitive', 'bool_rprimitive',
                                      'bytes_rprimitive', 'c_int_rprimitive',
                                      'c_pyssize_t_rprimitive', 'int_rprimitive',
                                      'list_rprimitive', 'object_rprimitive',
                                      'pointer_rprimitive', 'str_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_str_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 6, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10251]; /* ('ERR_NEG_INT', 'binary_op', 'custom_op', 'function_op',
                                      'load_address_op', 'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_str_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 19, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 29, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8964]; /* 'PyUnicode_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 29, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL317;
CPyL11: ;
    cpy_r_r26 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r27 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 34, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = PyList_New(1);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 34, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r29)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r31 = cpy_r_r27;
    cpy_r_r32 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL318;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 35, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r34 = CPyStatics[8965]; /* 'PyObject_Str' */
    cpy_r_r35 = NULL;
    cpy_r_r36 = NULL;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPyDef_registry___function_op(cpy_r_r26, cpy_r_r29, cpy_r_r32, cpy_r_r34, 2, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 32, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r43 = CPyStatic_str_ops___globals;
    cpy_r_r44 = CPyStatics[8326]; /* 'str_op' */
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 32, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r47 = CPyStatics[886]; /* '+' */
    cpy_r_r48 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r48 != NULL)) goto CPyL23;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 43, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r50 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r50 != NULL)) goto CPyL26;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 43, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r52 = PyList_New(2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 43, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    CPy_INCREF(cpy_r_r48);
    *(PyObject * *)cpy_r_r54 = cpy_r_r48;
    cpy_r_r55 = cpy_r_r54 + 8;
    CPy_INCREF(cpy_r_r50);
    *(PyObject * *)cpy_r_r55 = cpy_r_r50;
    cpy_r_r56 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r56 == NULL)) {
        goto CPyL319;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 44, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r58 = CPyStatics[8966]; /* 'PyUnicode_Concat' */
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = 2;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_registry___binary_op(cpy_r_r47, cpy_r_r52, cpy_r_r56, cpy_r_r58, 2, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 41, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL320;
CPyL31: ;
    cpy_r_r67 = CPyStatics[8448]; /* '+=' */
    cpy_r_r68 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r68 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 55, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r70 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r70 != NULL)) goto CPyL37;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 55, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r72 = PyList_New(2);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 55, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r73 = (CPyPtr)&((PyListObject *)cpy_r_r72)->ob_item;
    cpy_r_r74 = *(CPyPtr *)cpy_r_r73;
    CPy_INCREF(cpy_r_r68);
    *(PyObject * *)cpy_r_r74 = cpy_r_r68;
    cpy_r_r75 = cpy_r_r74 + 8;
    CPy_INCREF(cpy_r_r70);
    *(PyObject * *)cpy_r_r75 = cpy_r_r70;
    cpy_r_r76 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r76 == NULL)) {
        goto CPyL321;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r77 = 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 56, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r78 = CPyStatics[8967]; /* 'CPyStr_Append' */
    cpy_r_r79 = PyList_New(2);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 59, CPyStatic_str_ops___globals);
        goto CPyL322;
    }
    cpy_r_r80 = 1 ? Py_True : Py_False;
    cpy_r_r81 = 0 ? Py_True : Py_False;
    cpy_r_r82 = (CPyPtr)&((PyListObject *)cpy_r_r79)->ob_item;
    cpy_r_r83 = *(CPyPtr *)cpy_r_r82;
    CPy_INCREF(cpy_r_r80);
    *(PyObject * *)cpy_r_r83 = cpy_r_r80;
    cpy_r_r84 = cpy_r_r83 + 8;
    CPy_INCREF(cpy_r_r81);
    *(PyObject * *)cpy_r_r84 = cpy_r_r81;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = 2;
    cpy_r_r90 = CPY_INT_TAG;
    cpy_r_r91 = CPyDef_registry___binary_op(cpy_r_r67, cpy_r_r72, cpy_r_r76, cpy_r_r78, 2, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r79, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 53, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL323;
CPyL43: ;
    cpy_r_r92 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r92 != NULL)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 63, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r94 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r94 != NULL)) goto CPyL49;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 63, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r96 = PyList_New(2);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 63, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r97 = (CPyPtr)&((PyListObject *)cpy_r_r96)->ob_item;
    cpy_r_r98 = *(CPyPtr *)cpy_r_r97;
    CPy_INCREF(cpy_r_r92);
    *(PyObject * *)cpy_r_r98 = cpy_r_r92;
    cpy_r_r99 = cpy_r_r98 + 8;
    CPy_INCREF(cpy_r_r94);
    *(PyObject * *)cpy_r_r99 = cpy_r_r94;
    cpy_r_r100 = CPyStatic_str_ops___globals;
    cpy_r_r101 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 64, CPyStatic_str_ops___globals);
        goto CPyL324;
    }
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_rtypes___RPrimitive))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 64, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r102);
        goto CPyL324;
    }
    cpy_r_r104 = CPyStatics[8968]; /* 'PyUnicode_Compare' */
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = NULL;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = 2;
    cpy_r_r111 = CPyDef_registry___custom_op(cpy_r_r96, cpy_r_r103, cpy_r_r104, 0, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 62, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r112 = CPyStatic_str_ops___globals;
    cpy_r_r113 = CPyStatics[8406]; /* 'unicode_compare' */
    cpy_r_r114 = CPyDict_SetItem(cpy_r_r112, cpy_r_r113, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 62, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r116 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r117 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r117 != NULL)) goto CPyL57;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 72, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r119 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r119 != NULL)) goto CPyL60;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 72, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r121 = PyList_New(2);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 72, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r122 = (CPyPtr)&((PyListObject *)cpy_r_r121)->ob_item;
    cpy_r_r123 = *(CPyPtr *)cpy_r_r122;
    CPy_INCREF(cpy_r_r117);
    *(PyObject * *)cpy_r_r123 = cpy_r_r117;
    cpy_r_r124 = cpy_r_r123 + 8;
    CPy_INCREF(cpy_r_r119);
    *(PyObject * *)cpy_r_r124 = cpy_r_r119;
    cpy_r_r125 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r125 == NULL)) {
        goto CPyL325;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r126 = 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 73, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r127 = CPyStatics[8969]; /* 'CPyStr_GetItem' */
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = NULL;
    cpy_r_r133 = 2;
    cpy_r_r134 = CPY_INT_TAG;
    cpy_r_r135 = CPyDef_registry___method_op(cpy_r_r116, cpy_r_r121, cpy_r_r125, cpy_r_r127, 2, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 70, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL326;
CPyL65: ;
    cpy_r_r136 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r136 != NULL)) goto CPyL68;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 80, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r138 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r138 != NULL)) goto CPyL71;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 80, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r140 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r140 != NULL)) goto CPyL74;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r141 = 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 80, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r142 = PyList_New(3);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 80, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r143 = (CPyPtr)&((PyListObject *)cpy_r_r142)->ob_item;
    cpy_r_r144 = *(CPyPtr *)cpy_r_r143;
    CPy_INCREF(cpy_r_r136);
    *(PyObject * *)cpy_r_r144 = cpy_r_r136;
    cpy_r_r145 = cpy_r_r144 + 8;
    CPy_INCREF(cpy_r_r138);
    *(PyObject * *)cpy_r_r145 = cpy_r_r138;
    cpy_r_r146 = cpy_r_r144 + 16;
    CPy_INCREF(cpy_r_r140);
    *(PyObject * *)cpy_r_r146 = cpy_r_r140;
    cpy_r_r147 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r147 == NULL)) {
        goto CPyL327;
    } else
        goto CPyL78;
CPyL76: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r148 = 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 81, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r149 = CPyStatics[8970]; /* 'CPyStr_GetSlice' */
    cpy_r_r150 = NULL;
    cpy_r_r151 = NULL;
    cpy_r_r152 = NULL;
    cpy_r_r153 = NULL;
    cpy_r_r154 = NULL;
    cpy_r_r155 = 2;
    cpy_r_r156 = CPyDef_registry___custom_op(cpy_r_r142, cpy_r_r147, cpy_r_r149, 2, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 79, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r157 = CPyStatic_str_ops___globals;
    cpy_r_r158 = CPyStatics[8221]; /* 'str_slice_op' */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r157, cpy_r_r158, cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 79, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r161 = CPyStatics[175]; /* 'join' */
    cpy_r_r162 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r162 != NULL)) goto CPyL83;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r163 = 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 89, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r164 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r164 != NULL)) goto CPyL86;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 89, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r166 = PyList_New(2);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 89, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r167 = (CPyPtr)&((PyListObject *)cpy_r_r166)->ob_item;
    cpy_r_r168 = *(CPyPtr *)cpy_r_r167;
    CPy_INCREF(cpy_r_r162);
    *(PyObject * *)cpy_r_r168 = cpy_r_r162;
    cpy_r_r169 = cpy_r_r168 + 8;
    CPy_INCREF(cpy_r_r164);
    *(PyObject * *)cpy_r_r169 = cpy_r_r164;
    cpy_r_r170 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r170 == NULL)) {
        goto CPyL328;
    } else
        goto CPyL90;
CPyL88: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 90, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r172 = CPyStatics[8971]; /* 'PyUnicode_Join' */
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = NULL;
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = 2;
    cpy_r_r179 = CPY_INT_TAG;
    cpy_r_r180 = CPyDef_registry___method_op(cpy_r_r161, cpy_r_r166, cpy_r_r170, cpy_r_r172, 2, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 87, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL329;
CPyL91: ;
    cpy_r_r181 = CPyStatic_str_ops___globals;
    cpy_r_r182 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r183 = CPyDict_GetItem(cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 96, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    if (likely(Py_TYPE(cpy_r_r183) == CPyType_rtypes___RPrimitive))
        cpy_r_r184 = cpy_r_r183;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 96, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r183);
        goto CPyL316;
    }
    cpy_r_r185 = PyList_New(1);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 96, CPyStatic_str_ops___globals);
        goto CPyL330;
    }
    cpy_r_r186 = (CPyPtr)&((PyListObject *)cpy_r_r185)->ob_item;
    cpy_r_r187 = *(CPyPtr *)cpy_r_r186;
    *(PyObject * *)cpy_r_r187 = cpy_r_r184;
    cpy_r_r188 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r188 == NULL)) {
        goto CPyL331;
    } else
        goto CPyL97;
CPyL95: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r189 = 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 97, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r190 = CPyStatics[8972]; /* 'CPyStr_Build' */
    cpy_r_r191 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r191 == NULL)) {
        goto CPyL332;
    } else
        goto CPyL100;
CPyL98: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 100, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r193 = NULL;
    cpy_r_r194 = NULL;
    cpy_r_r195 = NULL;
    cpy_r_r196 = NULL;
    cpy_r_r197 = 2;
    cpy_r_r198 = CPyDef_registry___custom_op(cpy_r_r185, cpy_r_r188, cpy_r_r190, 2, cpy_r_r191, cpy_r_r193, cpy_r_r194, cpy_r_r195, cpy_r_r196, cpy_r_r197);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 95, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r199 = CPyStatic_str_ops___globals;
    cpy_r_r200 = CPyStatics[8327]; /* 'str_build_op' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r199, cpy_r_r200, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 95, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r203 = CPyStatics[4225]; /* 'startswith' */
    cpy_r_r204 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r204 != NULL)) goto CPyL105;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r205 = 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 106, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r206 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r206 != NULL)) goto CPyL108;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r207 = 0;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 106, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL108: ;
    cpy_r_r208 = PyList_New(2);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 106, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r209 = (CPyPtr)&((PyListObject *)cpy_r_r208)->ob_item;
    cpy_r_r210 = *(CPyPtr *)cpy_r_r209;
    CPy_INCREF(cpy_r_r204);
    *(PyObject * *)cpy_r_r210 = cpy_r_r204;
    cpy_r_r211 = cpy_r_r210 + 8;
    CPy_INCREF(cpy_r_r206);
    *(PyObject * *)cpy_r_r211 = cpy_r_r206;
    cpy_r_r212 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r212 == NULL)) {
        goto CPyL333;
    } else
        goto CPyL112;
CPyL110: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r213 = 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 107, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL112: ;
    cpy_r_r214 = CPyStatics[8973]; /* 'CPyStr_Startswith' */
    cpy_r_r215 = NULL;
    cpy_r_r216 = NULL;
    cpy_r_r217 = NULL;
    cpy_r_r218 = NULL;
    cpy_r_r219 = NULL;
    cpy_r_r220 = 2;
    cpy_r_r221 = CPY_INT_TAG;
    cpy_r_r222 = CPyDef_registry___method_op(cpy_r_r203, cpy_r_r208, cpy_r_r212, cpy_r_r214, 0, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221);
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 104, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL334;
CPyL113: ;
    cpy_r_r223 = CPyStatics[2537]; /* 'endswith' */
    cpy_r_r224 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r224 != NULL)) goto CPyL116;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 115, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL116: ;
    cpy_r_r226 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r226 != NULL)) goto CPyL119;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r227 = 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 115, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL119: ;
    cpy_r_r228 = PyList_New(2);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 115, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r229 = (CPyPtr)&((PyListObject *)cpy_r_r228)->ob_item;
    cpy_r_r230 = *(CPyPtr *)cpy_r_r229;
    CPy_INCREF(cpy_r_r224);
    *(PyObject * *)cpy_r_r230 = cpy_r_r224;
    cpy_r_r231 = cpy_r_r230 + 8;
    CPy_INCREF(cpy_r_r226);
    *(PyObject * *)cpy_r_r231 = cpy_r_r226;
    cpy_r_r232 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r232 == NULL)) {
        goto CPyL335;
    } else
        goto CPyL123;
CPyL121: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r233 = 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 116, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL123: ;
    cpy_r_r234 = CPyStatics[8974]; /* 'CPyStr_Endswith' */
    cpy_r_r235 = NULL;
    cpy_r_r236 = NULL;
    cpy_r_r237 = NULL;
    cpy_r_r238 = NULL;
    cpy_r_r239 = NULL;
    cpy_r_r240 = 2;
    cpy_r_r241 = CPY_INT_TAG;
    cpy_r_r242 = CPyDef_registry___method_op(cpy_r_r223, cpy_r_r228, cpy_r_r232, cpy_r_r234, 0, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 113, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL336;
CPyL124: ;
    cpy_r_r243 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r243 != NULL)) goto CPyL127;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r244 = 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 122, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL127: ;
    cpy_r_r245 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r245 != NULL)) goto CPyL130;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r246 = 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 122, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r247 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r247 != NULL)) goto CPyL133;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r248 = 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 122, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r249 = PyList_New(3);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 122, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r250 = (CPyPtr)&((PyListObject *)cpy_r_r249)->ob_item;
    cpy_r_r251 = *(CPyPtr *)cpy_r_r250;
    CPy_INCREF(cpy_r_r243);
    *(PyObject * *)cpy_r_r251 = cpy_r_r243;
    cpy_r_r252 = cpy_r_r251 + 8;
    CPy_INCREF(cpy_r_r245);
    *(PyObject * *)cpy_r_r252 = cpy_r_r245;
    cpy_r_r253 = cpy_r_r251 + 16;
    CPy_INCREF(cpy_r_r247);
    *(PyObject * *)cpy_r_r253 = cpy_r_r247;
    cpy_r_r254 = CPyStatic_str_ops___globals;
    cpy_r_r255 = CPyStatics[8975]; /* 'str_split_types' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r254, cpy_r_r255, cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 122, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r258 = CPyStatics[8976]; /* 'PyUnicode_Split' */
    cpy_r_r259 = CPyStatics[8976]; /* 'PyUnicode_Split' */
    cpy_r_r260 = CPyStatics[8977]; /* 'CPyStr_Split' */
    cpy_r_r261 = PyList_New(3);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 123, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r262 = (CPyPtr)&((PyListObject *)cpy_r_r261)->ob_item;
    cpy_r_r263 = *(CPyPtr *)cpy_r_r262;
    CPy_INCREF(cpy_r_r258);
    *(PyObject * *)cpy_r_r263 = cpy_r_r258;
    cpy_r_r264 = cpy_r_r263 + 8;
    CPy_INCREF(cpy_r_r259);
    *(PyObject * *)cpy_r_r264 = cpy_r_r259;
    cpy_r_r265 = cpy_r_r263 + 16;
    CPy_INCREF(cpy_r_r260);
    *(PyObject * *)cpy_r_r265 = cpy_r_r260;
    cpy_r_r266 = CPyStatic_str_ops___globals;
    cpy_r_r267 = CPyStatics[8978]; /* 'str_split_functions' */
    cpy_r_r268 = CPyDict_SetItem(cpy_r_r266, cpy_r_r267, cpy_r_r261);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r269 = cpy_r_r268 >= 0;
    if (unlikely(!cpy_r_r269)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 123, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r270 = CPyStatic_rtypes___pointer_rprimitive;
    if (likely(cpy_r_r270 != NULL)) goto CPyL140;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r271 = 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 125, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r272.f0 = 0;
    cpy_r_r272.f1 = cpy_r_r270;
    CPyTagged_INCREF(cpy_r_r272.f0);
    CPy_INCREF(cpy_r_r272.f1);
    cpy_r_r273 = CPyStatic_str_ops___globals;
    cpy_r_r274 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r275 = CPyDict_GetItem(cpy_r_r273, cpy_r_r274);
    if (unlikely(cpy_r_r275 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 125, CPyStatic_str_ops___globals);
        goto CPyL337;
    }
    if (likely(Py_TYPE(cpy_r_r275) == CPyType_rtypes___RPrimitive))
        cpy_r_r276 = cpy_r_r275;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 125, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r275);
        goto CPyL337;
    }
    cpy_r_r277.f0 = -2;
    cpy_r_r277.f1 = cpy_r_r276;
    CPyTagged_INCREF(cpy_r_r277.f0);
    CPy_INCREF(cpy_r_r277.f1);
    CPy_DECREF(cpy_r_r276);
    cpy_r_r278 = PyList_New(2);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 125, CPyStatic_str_ops___globals);
        goto CPyL338;
    }
    cpy_r_r279 = PyTuple_New(2);
    if (unlikely(cpy_r_r279 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10806 = CPyTagged_StealAsObject(cpy_r_r272.f0);
    PyTuple_SET_ITEM(cpy_r_r279, 0, __tmp10806);
    PyObject *__tmp10807 = cpy_r_r272.f1;
    PyTuple_SET_ITEM(cpy_r_r279, 1, __tmp10807);
    cpy_r_r280 = PyTuple_New(2);
    if (unlikely(cpy_r_r280 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10808 = CPyTagged_StealAsObject(cpy_r_r277.f0);
    PyTuple_SET_ITEM(cpy_r_r280, 0, __tmp10808);
    PyObject *__tmp10809 = cpy_r_r277.f1;
    PyTuple_SET_ITEM(cpy_r_r280, 1, __tmp10809);
    cpy_r_r281 = (CPyPtr)&((PyListObject *)cpy_r_r278)->ob_item;
    cpy_r_r282 = *(CPyPtr *)cpy_r_r281;
    *(PyObject * *)cpy_r_r282 = cpy_r_r279;
    cpy_r_r283 = cpy_r_r282 + 8;
    *(PyObject * *)cpy_r_r283 = cpy_r_r280;
    cpy_r_r284 = CPyStatic_str_ops___globals;
    cpy_r_r285 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r286 = CPyDict_GetItem(cpy_r_r284, cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 126, CPyStatic_str_ops___globals);
        goto CPyL339;
    }
    if (likely(Py_TYPE(cpy_r_r286) == CPyType_rtypes___RPrimitive))
        cpy_r_r287 = cpy_r_r286;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 126, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r286);
        goto CPyL339;
    }
    cpy_r_r288.f0 = -2;
    cpy_r_r288.f1 = cpy_r_r287;
    CPyTagged_INCREF(cpy_r_r288.f0);
    CPy_INCREF(cpy_r_r288.f1);
    CPy_DECREF(cpy_r_r287);
    cpy_r_r289 = PyList_New(1);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 126, CPyStatic_str_ops___globals);
        goto CPyL340;
    }
    cpy_r_r290 = PyTuple_New(2);
    if (unlikely(cpy_r_r290 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10810 = CPyTagged_StealAsObject(cpy_r_r288.f0);
    PyTuple_SET_ITEM(cpy_r_r290, 0, __tmp10810);
    PyObject *__tmp10811 = cpy_r_r288.f1;
    PyTuple_SET_ITEM(cpy_r_r290, 1, __tmp10811);
    cpy_r_r291 = (CPyPtr)&((PyListObject *)cpy_r_r289)->ob_item;
    cpy_r_r292 = *(CPyPtr *)cpy_r_r291;
    *(PyObject * *)cpy_r_r292 = cpy_r_r290;
    cpy_r_r293 = PyList_New(0);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 127, CPyStatic_str_ops___globals);
        goto CPyL341;
    }
    cpy_r_r294 = PyList_New(3);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 124, CPyStatic_str_ops___globals);
        goto CPyL342;
    }
    cpy_r_r295 = (CPyPtr)&((PyListObject *)cpy_r_r294)->ob_item;
    cpy_r_r296 = *(CPyPtr *)cpy_r_r295;
    *(PyObject * *)cpy_r_r296 = cpy_r_r278;
    cpy_r_r297 = cpy_r_r296 + 8;
    *(PyObject * *)cpy_r_r297 = cpy_r_r289;
    cpy_r_r298 = cpy_r_r296 + 16;
    *(PyObject * *)cpy_r_r298 = cpy_r_r293;
    cpy_r_r299 = CPyStatic_str_ops___globals;
    cpy_r_r300 = CPyStatics[8979]; /* 'str_split_constants' */
    cpy_r_r301 = CPyDict_SetItem(cpy_r_r299, cpy_r_r300, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    cpy_r_r302 = cpy_r_r301 >= 0;
    if (unlikely(!cpy_r_r302)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 124, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r303 = CPyStatic_str_ops___globals;
    cpy_r_r304 = CPyStatics[8975]; /* 'str_split_types' */
    cpy_r_r305 = CPyDict_GetItem(cpy_r_r303, cpy_r_r304);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 129, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    if (likely(PyList_Check(cpy_r_r305)))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 129, CPyStatic_str_ops___globals, "list", cpy_r_r305);
        goto CPyL343;
    }
    cpy_r_r307 = (CPyPtr)&((PyVarObject *)cpy_r_r306)->ob_size;
    cpy_r_r308 = *(int64_t *)cpy_r_r307;
    cpy_r_r309 = cpy_r_r308 << 1;
    CPy_DECREF(cpy_r_r305);
    cpy_r_r310 = 0;
    cpy_r_r311 = CPyStatic_str_ops___globals;
    cpy_r_r312 = CPyStatics[1460]; /* 'i' */
    cpy_r_r313 = CPyTagged_StealAsObject(cpy_r_r310);
    cpy_r_r314 = CPyDict_SetItem(cpy_r_r311, cpy_r_r312, cpy_r_r313);
    CPy_DECREF(cpy_r_r313);
    cpy_r_r315 = cpy_r_r314 >= 0;
    if (unlikely(!cpy_r_r315)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 129, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
CPyL152: ;
    cpy_r_r316 = (Py_ssize_t)cpy_r_r310 < (Py_ssize_t)cpy_r_r309;
    if (!cpy_r_r316) goto CPyL176;
    cpy_r_r317 = CPyStatics[369]; /* 'split' */
    cpy_r_r318 = CPyStatic_str_ops___globals;
    cpy_r_r319 = CPyStatics[8975]; /* 'str_split_types' */
    cpy_r_r320 = CPyDict_GetItem(cpy_r_r318, cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    if (likely(PyList_Check(cpy_r_r320)))
        cpy_r_r321 = cpy_r_r320;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals, "list", cpy_r_r320);
        goto CPyL316;
    }
    cpy_r_r322 = CPyStatic_str_ops___globals;
    cpy_r_r323 = CPyStatics[1460]; /* 'i' */
    cpy_r_r324 = CPyDict_GetItem(cpy_r_r322, cpy_r_r323);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals);
        goto CPyL344;
    }
    if (likely(PyLong_Check(cpy_r_r324)))
        cpy_r_r325 = CPyTagged_FromObject(cpy_r_r324);
    else {
        CPy_TypeError("int", cpy_r_r324); cpy_r_r325 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r324);
    if (unlikely(cpy_r_r325 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals);
        goto CPyL344;
    }
    cpy_r_r326 = CPyTagged_Add(cpy_r_r325, 2);
    CPyTagged_DECREF(cpy_r_r325);
    cpy_r_r327 = CPyList_GetSlice(cpy_r_r321, 0, cpy_r_r326);
    CPy_DECREF(cpy_r_r321);
    CPyTagged_DECREF(cpy_r_r326);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    if (likely(PyList_Check(cpy_r_r327)))
        cpy_r_r328 = cpy_r_r327;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 132, CPyStatic_str_ops___globals, "list", cpy_r_r327);
        goto CPyL316;
    }
    cpy_r_r329 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r329 == NULL)) {
        goto CPyL345;
    } else
        goto CPyL162;
CPyL160: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r330 = 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 133, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL162: ;
    cpy_r_r331 = CPyStatic_str_ops___globals;
    cpy_r_r332 = CPyStatics[8978]; /* 'str_split_functions' */
    cpy_r_r333 = CPyDict_GetItem(cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals);
        goto CPyL346;
    }
    if (likely(PyList_Check(cpy_r_r333)))
        cpy_r_r334 = cpy_r_r333;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals, "list", cpy_r_r333);
        goto CPyL346;
    }
    cpy_r_r335 = CPyStatic_str_ops___globals;
    cpy_r_r336 = CPyStatics[1460]; /* 'i' */
    cpy_r_r337 = CPyDict_GetItem(cpy_r_r335, cpy_r_r336);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals);
        goto CPyL347;
    }
    if (likely(PyLong_Check(cpy_r_r337)))
        cpy_r_r338 = CPyTagged_FromObject(cpy_r_r337);
    else {
        CPy_TypeError("int", cpy_r_r337); cpy_r_r338 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r337);
    if (unlikely(cpy_r_r338 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals);
        goto CPyL347;
    }
    cpy_r_r339 = CPyList_GetItem(cpy_r_r334, cpy_r_r338);
    CPy_DECREF(cpy_r_r334);
    CPyTagged_DECREF(cpy_r_r338);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals);
        goto CPyL346;
    }
    if (likely(PyUnicode_Check(cpy_r_r339)))
        cpy_r_r340 = cpy_r_r339;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 134, CPyStatic_str_ops___globals, "str", cpy_r_r339);
        goto CPyL346;
    }
    cpy_r_r341 = CPyStatic_str_ops___globals;
    cpy_r_r342 = CPyStatics[8979]; /* 'str_split_constants' */
    cpy_r_r343 = CPyDict_GetItem(cpy_r_r341, cpy_r_r342);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals);
        goto CPyL348;
    }
    if (likely(PyList_Check(cpy_r_r343)))
        cpy_r_r344 = cpy_r_r343;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals, "list", cpy_r_r343);
        goto CPyL348;
    }
    cpy_r_r345 = CPyStatic_str_ops___globals;
    cpy_r_r346 = CPyStatics[1460]; /* 'i' */
    cpy_r_r347 = CPyDict_GetItem(cpy_r_r345, cpy_r_r346);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals);
        goto CPyL349;
    }
    if (likely(PyLong_Check(cpy_r_r347)))
        cpy_r_r348 = CPyTagged_FromObject(cpy_r_r347);
    else {
        CPy_TypeError("int", cpy_r_r347); cpy_r_r348 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r347);
    if (unlikely(cpy_r_r348 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals);
        goto CPyL349;
    }
    cpy_r_r349 = CPyList_GetItem(cpy_r_r344, cpy_r_r348);
    CPy_DECREF(cpy_r_r344);
    CPyTagged_DECREF(cpy_r_r348);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals);
        goto CPyL348;
    }
    if (likely(PyList_Check(cpy_r_r349)))
        cpy_r_r350 = cpy_r_r349;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 135, CPyStatic_str_ops___globals, "list", cpy_r_r349);
        goto CPyL348;
    }
    cpy_r_r351 = NULL;
    cpy_r_r352 = NULL;
    cpy_r_r353 = NULL;
    cpy_r_r354 = NULL;
    cpy_r_r355 = 2;
    cpy_r_r356 = CPY_INT_TAG;
    cpy_r_r357 = CPyDef_registry___method_op(cpy_r_r317, cpy_r_r328, cpy_r_r329, cpy_r_r340, 2, cpy_r_r351, cpy_r_r352, cpy_r_r353, cpy_r_r350, cpy_r_r354, cpy_r_r355, cpy_r_r356);
    CPy_DECREF(cpy_r_r328);
    CPy_DECREF(cpy_r_r340);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 130, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL350;
CPyL175: ;
    cpy_r_r358 = cpy_r_r310 + 2;
    cpy_r_r310 = cpy_r_r358;
    cpy_r_r359 = CPyTagged_StealAsObject(cpy_r_r358);
    cpy_r_r360 = CPyDict_SetItem(cpy_r_r311, cpy_r_r312, cpy_r_r359);
    CPy_DECREF(cpy_r_r359);
    cpy_r_r361 = cpy_r_r360 >= 0;
    if (unlikely(!cpy_r_r361)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 129, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL152;
CPyL176: ;
    cpy_r_r362 = CPyStatics[3798]; /* 'replace' */
    cpy_r_r363 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r363 != NULL)) goto CPyL179;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r364 = 0;
    if (unlikely(!cpy_r_r364)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 142, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL179: ;
    cpy_r_r365 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r365 != NULL)) goto CPyL182;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r366 = 0;
    if (unlikely(!cpy_r_r366)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 142, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL182: ;
    cpy_r_r367 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r367 != NULL)) goto CPyL185;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r368 = 0;
    if (unlikely(!cpy_r_r368)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 142, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL185: ;
    cpy_r_r369 = PyList_New(3);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 142, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r370 = (CPyPtr)&((PyListObject *)cpy_r_r369)->ob_item;
    cpy_r_r371 = *(CPyPtr *)cpy_r_r370;
    CPy_INCREF(cpy_r_r363);
    *(PyObject * *)cpy_r_r371 = cpy_r_r363;
    cpy_r_r372 = cpy_r_r371 + 8;
    CPy_INCREF(cpy_r_r365);
    *(PyObject * *)cpy_r_r372 = cpy_r_r365;
    cpy_r_r373 = cpy_r_r371 + 16;
    CPy_INCREF(cpy_r_r367);
    *(PyObject * *)cpy_r_r373 = cpy_r_r367;
    cpy_r_r374 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r374 == NULL)) {
        goto CPyL351;
    } else
        goto CPyL189;
CPyL187: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r375 = 0;
    if (unlikely(!cpy_r_r375)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 143, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL189: ;
    cpy_r_r376 = CPyStatics[8980]; /* 'PyUnicode_Replace' */
    cpy_r_r377 = CPyStatic_str_ops___globals;
    cpy_r_r378 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r379 = CPyDict_GetItem(cpy_r_r377, cpy_r_r378);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 146, CPyStatic_str_ops___globals);
        goto CPyL352;
    }
    if (likely(Py_TYPE(cpy_r_r379) == CPyType_rtypes___RPrimitive))
        cpy_r_r380 = cpy_r_r379;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 146, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r379);
        goto CPyL352;
    }
    cpy_r_r381.f0 = -2;
    cpy_r_r381.f1 = cpy_r_r380;
    CPyTagged_INCREF(cpy_r_r381.f0);
    CPy_INCREF(cpy_r_r381.f1);
    CPy_DECREF(cpy_r_r380);
    cpy_r_r382 = PyList_New(1);
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 146, CPyStatic_str_ops___globals);
        goto CPyL353;
    }
    cpy_r_r383 = PyTuple_New(2);
    if (unlikely(cpy_r_r383 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10812 = CPyTagged_StealAsObject(cpy_r_r381.f0);
    PyTuple_SET_ITEM(cpy_r_r383, 0, __tmp10812);
    PyObject *__tmp10813 = cpy_r_r381.f1;
    PyTuple_SET_ITEM(cpy_r_r383, 1, __tmp10813);
    cpy_r_r384 = (CPyPtr)&((PyListObject *)cpy_r_r382)->ob_item;
    cpy_r_r385 = *(CPyPtr *)cpy_r_r384;
    *(PyObject * *)cpy_r_r385 = cpy_r_r383;
    cpy_r_r386 = NULL;
    cpy_r_r387 = NULL;
    cpy_r_r388 = NULL;
    cpy_r_r389 = NULL;
    cpy_r_r390 = 2;
    cpy_r_r391 = CPY_INT_TAG;
    cpy_r_r392 = CPyDef_registry___method_op(cpy_r_r362, cpy_r_r369, cpy_r_r374, cpy_r_r376, 2, cpy_r_r386, cpy_r_r387, cpy_r_r388, cpy_r_r382, cpy_r_r389, cpy_r_r390, cpy_r_r391);
    CPy_DECREF(cpy_r_r369);
    CPy_DECREF(cpy_r_r382);
    if (unlikely(cpy_r_r392 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 140, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL354;
CPyL193: ;
    cpy_r_r393 = CPyStatics[3798]; /* 'replace' */
    cpy_r_r394 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r394 != NULL)) goto CPyL196;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r395 = 0;
    if (unlikely(!cpy_r_r395)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 152, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL196: ;
    cpy_r_r396 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r396 != NULL)) goto CPyL199;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r397 = 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 152, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL199: ;
    cpy_r_r398 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r398 != NULL)) goto CPyL202;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r399 = 0;
    if (unlikely(!cpy_r_r399)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 152, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL202: ;
    cpy_r_r400 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r400 != NULL)) goto CPyL205;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r401 = 0;
    if (unlikely(!cpy_r_r401)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 152, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL205: ;
    cpy_r_r402 = PyList_New(4);
    if (unlikely(cpy_r_r402 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 152, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r403 = (CPyPtr)&((PyListObject *)cpy_r_r402)->ob_item;
    cpy_r_r404 = *(CPyPtr *)cpy_r_r403;
    CPy_INCREF(cpy_r_r394);
    *(PyObject * *)cpy_r_r404 = cpy_r_r394;
    cpy_r_r405 = cpy_r_r404 + 8;
    CPy_INCREF(cpy_r_r396);
    *(PyObject * *)cpy_r_r405 = cpy_r_r396;
    cpy_r_r406 = cpy_r_r404 + 16;
    CPy_INCREF(cpy_r_r398);
    *(PyObject * *)cpy_r_r406 = cpy_r_r398;
    cpy_r_r407 = cpy_r_r404 + 24;
    CPy_INCREF(cpy_r_r400);
    *(PyObject * *)cpy_r_r407 = cpy_r_r400;
    cpy_r_r408 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r408 == NULL)) {
        goto CPyL355;
    } else
        goto CPyL209;
CPyL207: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r409 = 0;
    if (unlikely(!cpy_r_r409)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 153, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL209: ;
    cpy_r_r410 = CPyStatics[8981]; /* 'CPyStr_Replace' */
    cpy_r_r411 = NULL;
    cpy_r_r412 = NULL;
    cpy_r_r413 = NULL;
    cpy_r_r414 = NULL;
    cpy_r_r415 = NULL;
    cpy_r_r416 = 2;
    cpy_r_r417 = CPY_INT_TAG;
    cpy_r_r418 = CPyDef_registry___method_op(cpy_r_r393, cpy_r_r402, cpy_r_r408, cpy_r_r410, 2, cpy_r_r411, cpy_r_r412, cpy_r_r413, cpy_r_r414, cpy_r_r415, cpy_r_r416, cpy_r_r417);
    CPy_DECREF(cpy_r_r402);
    if (unlikely(cpy_r_r418 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 150, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL356;
CPyL210: ;
    cpy_r_r419 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r419 != NULL)) goto CPyL213;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r420 = 0;
    if (unlikely(!cpy_r_r420)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 160, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r421 = PyList_New(1);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 160, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r422 = (CPyPtr)&((PyListObject *)cpy_r_r421)->ob_item;
    cpy_r_r423 = *(CPyPtr *)cpy_r_r422;
    CPy_INCREF(cpy_r_r419);
    *(PyObject * *)cpy_r_r423 = cpy_r_r419;
    cpy_r_r424 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r424 == NULL)) {
        goto CPyL357;
    } else
        goto CPyL217;
CPyL215: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r425 = 0;
    if (unlikely(!cpy_r_r425)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 161, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL217: ;
    cpy_r_r426 = CPyStatics[8982]; /* 'CPyStr_IsTrue' */
    cpy_r_r427 = NULL;
    cpy_r_r428 = NULL;
    cpy_r_r429 = NULL;
    cpy_r_r430 = NULL;
    cpy_r_r431 = NULL;
    cpy_r_r432 = 2;
    cpy_r_r433 = CPyDef_registry___custom_op(cpy_r_r421, cpy_r_r424, cpy_r_r426, 0, cpy_r_r427, cpy_r_r428, cpy_r_r429, cpy_r_r430, cpy_r_r431, cpy_r_r432);
    CPy_DECREF(cpy_r_r421);
    if (unlikely(cpy_r_r433 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 159, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r434 = CPyStatic_str_ops___globals;
    cpy_r_r435 = CPyStatics[8415]; /* 'str_check_if_true' */
    cpy_r_r436 = CPyDict_SetItem(cpy_r_r434, cpy_r_r435, cpy_r_r433);
    CPy_DECREF(cpy_r_r433);
    cpy_r_r437 = cpy_r_r436 >= 0;
    if (unlikely(!cpy_r_r437)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 159, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r438 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r438 != NULL)) goto CPyL222;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r439 = 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 167, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL222: ;
    cpy_r_r440 = PyList_New(1);
    if (unlikely(cpy_r_r440 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 167, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r441 = (CPyPtr)&((PyListObject *)cpy_r_r440)->ob_item;
    cpy_r_r442 = *(CPyPtr *)cpy_r_r441;
    CPy_INCREF(cpy_r_r438);
    *(PyObject * *)cpy_r_r442 = cpy_r_r438;
    cpy_r_r443 = CPyStatic_str_ops___globals;
    cpy_r_r444 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r445 = CPyDict_GetItem(cpy_r_r443, cpy_r_r444);
    if (unlikely(cpy_r_r445 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 168, CPyStatic_str_ops___globals);
        goto CPyL358;
    }
    if (likely(Py_TYPE(cpy_r_r445) == CPyType_rtypes___RPrimitive))
        cpy_r_r446 = cpy_r_r445;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/str_ops.py", "<module>", 168, CPyStatic_str_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r445);
        goto CPyL358;
    }
    cpy_r_r447 = CPyStatics[8983]; /* 'CPyStr_Size_size_t' */
    cpy_r_r448 = NULL;
    cpy_r_r449 = NULL;
    cpy_r_r450 = NULL;
    cpy_r_r451 = NULL;
    cpy_r_r452 = NULL;
    cpy_r_r453 = 2;
    cpy_r_r454 = CPyDef_registry___custom_op(cpy_r_r440, cpy_r_r446, cpy_r_r447, 20, cpy_r_r448, cpy_r_r449, cpy_r_r450, cpy_r_r451, cpy_r_r452, cpy_r_r453);
    CPy_DECREF(cpy_r_r440);
    CPy_DECREF(cpy_r_r446);
    if (unlikely(cpy_r_r454 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 166, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r455 = CPyStatic_str_ops___globals;
    cpy_r_r456 = CPyStatics[8429]; /* 'str_ssize_t_size_op' */
    cpy_r_r457 = CPyDict_SetItem(cpy_r_r455, cpy_r_r456, cpy_r_r454);
    CPy_DECREF(cpy_r_r454);
    cpy_r_r458 = cpy_r_r457 >= 0;
    if (unlikely(!cpy_r_r458)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 166, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r459 = CPyStatics[6528]; /* 'decode' */
    cpy_r_r460 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r460 != NULL)) goto CPyL230;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 176, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL230: ;
    cpy_r_r462 = PyList_New(1);
    if (unlikely(cpy_r_r462 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 176, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r463 = (CPyPtr)&((PyListObject *)cpy_r_r462)->ob_item;
    cpy_r_r464 = *(CPyPtr *)cpy_r_r463;
    CPy_INCREF(cpy_r_r460);
    *(PyObject * *)cpy_r_r464 = cpy_r_r460;
    cpy_r_r465 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r465 == NULL)) {
        goto CPyL359;
    } else
        goto CPyL234;
CPyL232: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r466 = 0;
    if (unlikely(!cpy_r_r466)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 177, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL234: ;
    cpy_r_r467 = CPyStatics[8984]; /* 'CPy_Decode' */
    cpy_r_r468 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r468 == NULL)) {
        goto CPyL360;
    } else
        goto CPyL237;
CPyL235: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r469 = 0;
    if (unlikely(!cpy_r_r469)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 180, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL237: ;
    cpy_r_r470.f0 = 0;
    cpy_r_r470.f1 = cpy_r_r468;
    CPyTagged_INCREF(cpy_r_r470.f0);
    CPy_INCREF(cpy_r_r470.f1);
    cpy_r_r471 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r471 == NULL)) {
        goto CPyL361;
    } else
        goto CPyL240;
CPyL238: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r472 = 0;
    if (unlikely(!cpy_r_r472)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 180, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL240: ;
    cpy_r_r473.f0 = 0;
    cpy_r_r473.f1 = cpy_r_r471;
    CPyTagged_INCREF(cpy_r_r473.f0);
    CPy_INCREF(cpy_r_r473.f1);
    cpy_r_r474 = PyList_New(2);
    if (unlikely(cpy_r_r474 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 180, CPyStatic_str_ops___globals);
        goto CPyL362;
    }
    cpy_r_r475 = PyTuple_New(2);
    if (unlikely(cpy_r_r475 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10814 = CPyTagged_StealAsObject(cpy_r_r470.f0);
    PyTuple_SET_ITEM(cpy_r_r475, 0, __tmp10814);
    PyObject *__tmp10815 = cpy_r_r470.f1;
    PyTuple_SET_ITEM(cpy_r_r475, 1, __tmp10815);
    cpy_r_r476 = PyTuple_New(2);
    if (unlikely(cpy_r_r476 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10816 = CPyTagged_StealAsObject(cpy_r_r473.f0);
    PyTuple_SET_ITEM(cpy_r_r476, 0, __tmp10816);
    PyObject *__tmp10817 = cpy_r_r473.f1;
    PyTuple_SET_ITEM(cpy_r_r476, 1, __tmp10817);
    cpy_r_r477 = (CPyPtr)&((PyListObject *)cpy_r_r474)->ob_item;
    cpy_r_r478 = *(CPyPtr *)cpy_r_r477;
    *(PyObject * *)cpy_r_r478 = cpy_r_r475;
    cpy_r_r479 = cpy_r_r478 + 8;
    *(PyObject * *)cpy_r_r479 = cpy_r_r476;
    cpy_r_r480 = NULL;
    cpy_r_r481 = NULL;
    cpy_r_r482 = NULL;
    cpy_r_r483 = NULL;
    cpy_r_r484 = 2;
    cpy_r_r485 = CPY_INT_TAG;
    cpy_r_r486 = CPyDef_registry___method_op(cpy_r_r459, cpy_r_r462, cpy_r_r465, cpy_r_r467, 2, cpy_r_r480, cpy_r_r481, cpy_r_r482, cpy_r_r474, cpy_r_r483, cpy_r_r484, cpy_r_r485);
    CPy_DECREF(cpy_r_r462);
    CPy_DECREF(cpy_r_r474);
    if (unlikely(cpy_r_r486 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 174, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL363;
CPyL242: ;
    cpy_r_r487 = CPyStatics[6528]; /* 'decode' */
    cpy_r_r488 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r488 != NULL)) goto CPyL245;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r489 = 0;
    if (unlikely(!cpy_r_r489)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 186, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL245: ;
    cpy_r_r490 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r490 != NULL)) goto CPyL248;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r491 = 0;
    if (unlikely(!cpy_r_r491)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 186, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL248: ;
    cpy_r_r492 = PyList_New(2);
    if (unlikely(cpy_r_r492 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 186, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r493 = (CPyPtr)&((PyListObject *)cpy_r_r492)->ob_item;
    cpy_r_r494 = *(CPyPtr *)cpy_r_r493;
    CPy_INCREF(cpy_r_r488);
    *(PyObject * *)cpy_r_r494 = cpy_r_r488;
    cpy_r_r495 = cpy_r_r494 + 8;
    CPy_INCREF(cpy_r_r490);
    *(PyObject * *)cpy_r_r495 = cpy_r_r490;
    cpy_r_r496 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r496 == NULL)) {
        goto CPyL364;
    } else
        goto CPyL252;
CPyL250: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r497 = 0;
    if (unlikely(!cpy_r_r497)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 187, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL252: ;
    cpy_r_r498 = CPyStatics[8984]; /* 'CPy_Decode' */
    cpy_r_r499 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r499 == NULL)) {
        goto CPyL365;
    } else
        goto CPyL255;
CPyL253: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r500 = 0;
    if (unlikely(!cpy_r_r500)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 190, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL255: ;
    cpy_r_r501.f0 = 0;
    cpy_r_r501.f1 = cpy_r_r499;
    CPyTagged_INCREF(cpy_r_r501.f0);
    CPy_INCREF(cpy_r_r501.f1);
    cpy_r_r502 = PyList_New(1);
    if (unlikely(cpy_r_r502 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 190, CPyStatic_str_ops___globals);
        goto CPyL366;
    }
    cpy_r_r503 = PyTuple_New(2);
    if (unlikely(cpy_r_r503 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10818 = CPyTagged_StealAsObject(cpy_r_r501.f0);
    PyTuple_SET_ITEM(cpy_r_r503, 0, __tmp10818);
    PyObject *__tmp10819 = cpy_r_r501.f1;
    PyTuple_SET_ITEM(cpy_r_r503, 1, __tmp10819);
    cpy_r_r504 = (CPyPtr)&((PyListObject *)cpy_r_r502)->ob_item;
    cpy_r_r505 = *(CPyPtr *)cpy_r_r504;
    *(PyObject * *)cpy_r_r505 = cpy_r_r503;
    cpy_r_r506 = NULL;
    cpy_r_r507 = NULL;
    cpy_r_r508 = NULL;
    cpy_r_r509 = NULL;
    cpy_r_r510 = 2;
    cpy_r_r511 = CPY_INT_TAG;
    cpy_r_r512 = CPyDef_registry___method_op(cpy_r_r487, cpy_r_r492, cpy_r_r496, cpy_r_r498, 2, cpy_r_r506, cpy_r_r507, cpy_r_r508, cpy_r_r502, cpy_r_r509, cpy_r_r510, cpy_r_r511);
    CPy_DECREF(cpy_r_r492);
    CPy_DECREF(cpy_r_r502);
    if (unlikely(cpy_r_r512 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 184, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL367;
CPyL257: ;
    cpy_r_r513 = CPyStatics[6528]; /* 'decode' */
    cpy_r_r514 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r514 != NULL)) goto CPyL260;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r515 = 0;
    if (unlikely(!cpy_r_r515)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 196, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL260: ;
    cpy_r_r516 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r516 != NULL)) goto CPyL263;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r517 = 0;
    if (unlikely(!cpy_r_r517)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 196, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL263: ;
    cpy_r_r518 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r518 != NULL)) goto CPyL266;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r519 = 0;
    if (unlikely(!cpy_r_r519)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 196, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL266: ;
    cpy_r_r520 = PyList_New(3);
    if (unlikely(cpy_r_r520 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 196, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r521 = (CPyPtr)&((PyListObject *)cpy_r_r520)->ob_item;
    cpy_r_r522 = *(CPyPtr *)cpy_r_r521;
    CPy_INCREF(cpy_r_r514);
    *(PyObject * *)cpy_r_r522 = cpy_r_r514;
    cpy_r_r523 = cpy_r_r522 + 8;
    CPy_INCREF(cpy_r_r516);
    *(PyObject * *)cpy_r_r523 = cpy_r_r516;
    cpy_r_r524 = cpy_r_r522 + 16;
    CPy_INCREF(cpy_r_r518);
    *(PyObject * *)cpy_r_r524 = cpy_r_r518;
    cpy_r_r525 = CPyStatic_rtypes___str_rprimitive;
    if (unlikely(cpy_r_r525 == NULL)) {
        goto CPyL368;
    } else
        goto CPyL270;
CPyL268: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r526 = 0;
    if (unlikely(!cpy_r_r526)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 197, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL270: ;
    cpy_r_r527 = CPyStatics[8984]; /* 'CPy_Decode' */
    cpy_r_r528 = NULL;
    cpy_r_r529 = NULL;
    cpy_r_r530 = NULL;
    cpy_r_r531 = NULL;
    cpy_r_r532 = NULL;
    cpy_r_r533 = 2;
    cpy_r_r534 = CPY_INT_TAG;
    cpy_r_r535 = CPyDef_registry___method_op(cpy_r_r513, cpy_r_r520, cpy_r_r525, cpy_r_r527, 2, cpy_r_r528, cpy_r_r529, cpy_r_r530, cpy_r_r531, cpy_r_r532, cpy_r_r533, cpy_r_r534);
    CPy_DECREF(cpy_r_r520);
    if (unlikely(cpy_r_r535 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 194, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL369;
CPyL271: ;
    cpy_r_r536 = CPyStatics[8985]; /* 'encode' */
    cpy_r_r537 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r537 != NULL)) goto CPyL274;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r538 = 0;
    if (unlikely(!cpy_r_r538)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 205, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL274: ;
    cpy_r_r539 = PyList_New(1);
    if (unlikely(cpy_r_r539 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 205, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r540 = (CPyPtr)&((PyListObject *)cpy_r_r539)->ob_item;
    cpy_r_r541 = *(CPyPtr *)cpy_r_r540;
    CPy_INCREF(cpy_r_r537);
    *(PyObject * *)cpy_r_r541 = cpy_r_r537;
    cpy_r_r542 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r542 == NULL)) {
        goto CPyL370;
    } else
        goto CPyL278;
CPyL276: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r543 = 0;
    if (unlikely(!cpy_r_r543)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 206, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL278: ;
    cpy_r_r544 = CPyStatics[8986]; /* 'CPy_Encode' */
    cpy_r_r545 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r545 == NULL)) {
        goto CPyL371;
    } else
        goto CPyL281;
CPyL279: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r546 = 0;
    if (unlikely(!cpy_r_r546)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 209, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL281: ;
    cpy_r_r547.f0 = 0;
    cpy_r_r547.f1 = cpy_r_r545;
    CPyTagged_INCREF(cpy_r_r547.f0);
    CPy_INCREF(cpy_r_r547.f1);
    cpy_r_r548 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r548 == NULL)) {
        goto CPyL372;
    } else
        goto CPyL284;
CPyL282: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r549 = 0;
    if (unlikely(!cpy_r_r549)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 209, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL284: ;
    cpy_r_r550.f0 = 0;
    cpy_r_r550.f1 = cpy_r_r548;
    CPyTagged_INCREF(cpy_r_r550.f0);
    CPy_INCREF(cpy_r_r550.f1);
    cpy_r_r551 = PyList_New(2);
    if (unlikely(cpy_r_r551 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 209, CPyStatic_str_ops___globals);
        goto CPyL373;
    }
    cpy_r_r552 = PyTuple_New(2);
    if (unlikely(cpy_r_r552 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10820 = CPyTagged_StealAsObject(cpy_r_r547.f0);
    PyTuple_SET_ITEM(cpy_r_r552, 0, __tmp10820);
    PyObject *__tmp10821 = cpy_r_r547.f1;
    PyTuple_SET_ITEM(cpy_r_r552, 1, __tmp10821);
    cpy_r_r553 = PyTuple_New(2);
    if (unlikely(cpy_r_r553 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10822 = CPyTagged_StealAsObject(cpy_r_r550.f0);
    PyTuple_SET_ITEM(cpy_r_r553, 0, __tmp10822);
    PyObject *__tmp10823 = cpy_r_r550.f1;
    PyTuple_SET_ITEM(cpy_r_r553, 1, __tmp10823);
    cpy_r_r554 = (CPyPtr)&((PyListObject *)cpy_r_r551)->ob_item;
    cpy_r_r555 = *(CPyPtr *)cpy_r_r554;
    *(PyObject * *)cpy_r_r555 = cpy_r_r552;
    cpy_r_r556 = cpy_r_r555 + 8;
    *(PyObject * *)cpy_r_r556 = cpy_r_r553;
    cpy_r_r557 = NULL;
    cpy_r_r558 = NULL;
    cpy_r_r559 = NULL;
    cpy_r_r560 = NULL;
    cpy_r_r561 = 2;
    cpy_r_r562 = CPY_INT_TAG;
    cpy_r_r563 = CPyDef_registry___method_op(cpy_r_r536, cpy_r_r539, cpy_r_r542, cpy_r_r544, 2, cpy_r_r557, cpy_r_r558, cpy_r_r559, cpy_r_r551, cpy_r_r560, cpy_r_r561, cpy_r_r562);
    CPy_DECREF(cpy_r_r539);
    CPy_DECREF(cpy_r_r551);
    if (unlikely(cpy_r_r563 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 203, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL374;
CPyL286: ;
    cpy_r_r564 = CPyStatics[8985]; /* 'encode' */
    cpy_r_r565 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r565 != NULL)) goto CPyL289;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r566 = 0;
    if (unlikely(!cpy_r_r566)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 215, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL289: ;
    cpy_r_r567 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r567 != NULL)) goto CPyL292;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r568 = 0;
    if (unlikely(!cpy_r_r568)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 215, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL292: ;
    cpy_r_r569 = PyList_New(2);
    if (unlikely(cpy_r_r569 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 215, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r570 = (CPyPtr)&((PyListObject *)cpy_r_r569)->ob_item;
    cpy_r_r571 = *(CPyPtr *)cpy_r_r570;
    CPy_INCREF(cpy_r_r565);
    *(PyObject * *)cpy_r_r571 = cpy_r_r565;
    cpy_r_r572 = cpy_r_r571 + 8;
    CPy_INCREF(cpy_r_r567);
    *(PyObject * *)cpy_r_r572 = cpy_r_r567;
    cpy_r_r573 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r573 == NULL)) {
        goto CPyL375;
    } else
        goto CPyL296;
CPyL294: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r574 = 0;
    if (unlikely(!cpy_r_r574)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 216, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL296: ;
    cpy_r_r575 = CPyStatics[8986]; /* 'CPy_Encode' */
    cpy_r_r576 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r576 == NULL)) {
        goto CPyL376;
    } else
        goto CPyL299;
CPyL297: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r577 = 0;
    if (unlikely(!cpy_r_r577)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 219, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL299: ;
    cpy_r_r578.f0 = 0;
    cpy_r_r578.f1 = cpy_r_r576;
    CPyTagged_INCREF(cpy_r_r578.f0);
    CPy_INCREF(cpy_r_r578.f1);
    cpy_r_r579 = PyList_New(1);
    if (unlikely(cpy_r_r579 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 219, CPyStatic_str_ops___globals);
        goto CPyL377;
    }
    cpy_r_r580 = PyTuple_New(2);
    if (unlikely(cpy_r_r580 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10824 = CPyTagged_StealAsObject(cpy_r_r578.f0);
    PyTuple_SET_ITEM(cpy_r_r580, 0, __tmp10824);
    PyObject *__tmp10825 = cpy_r_r578.f1;
    PyTuple_SET_ITEM(cpy_r_r580, 1, __tmp10825);
    cpy_r_r581 = (CPyPtr)&((PyListObject *)cpy_r_r579)->ob_item;
    cpy_r_r582 = *(CPyPtr *)cpy_r_r581;
    *(PyObject * *)cpy_r_r582 = cpy_r_r580;
    cpy_r_r583 = NULL;
    cpy_r_r584 = NULL;
    cpy_r_r585 = NULL;
    cpy_r_r586 = NULL;
    cpy_r_r587 = 2;
    cpy_r_r588 = CPY_INT_TAG;
    cpy_r_r589 = CPyDef_registry___method_op(cpy_r_r564, cpy_r_r569, cpy_r_r573, cpy_r_r575, 2, cpy_r_r583, cpy_r_r584, cpy_r_r585, cpy_r_r579, cpy_r_r586, cpy_r_r587, cpy_r_r588);
    CPy_DECREF(cpy_r_r569);
    CPy_DECREF(cpy_r_r579);
    if (unlikely(cpy_r_r589 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 213, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL378;
CPyL301: ;
    cpy_r_r590 = CPyStatics[8985]; /* 'encode' */
    cpy_r_r591 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r591 != NULL)) goto CPyL304;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r592 = 0;
    if (unlikely(!cpy_r_r592)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 225, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL304: ;
    cpy_r_r593 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r593 != NULL)) goto CPyL307;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r594 = 0;
    if (unlikely(!cpy_r_r594)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 225, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL307: ;
    cpy_r_r595 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r595 != NULL)) goto CPyL310;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r596 = 0;
    if (unlikely(!cpy_r_r596)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 225, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL310: ;
    cpy_r_r597 = PyList_New(3);
    if (unlikely(cpy_r_r597 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 225, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    cpy_r_r598 = (CPyPtr)&((PyListObject *)cpy_r_r597)->ob_item;
    cpy_r_r599 = *(CPyPtr *)cpy_r_r598;
    CPy_INCREF(cpy_r_r591);
    *(PyObject * *)cpy_r_r599 = cpy_r_r591;
    cpy_r_r600 = cpy_r_r599 + 8;
    CPy_INCREF(cpy_r_r593);
    *(PyObject * *)cpy_r_r600 = cpy_r_r593;
    cpy_r_r601 = cpy_r_r599 + 16;
    CPy_INCREF(cpy_r_r595);
    *(PyObject * *)cpy_r_r601 = cpy_r_r595;
    cpy_r_r602 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r602 == NULL)) {
        goto CPyL379;
    } else
        goto CPyL314;
CPyL312: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r603 = 0;
    if (unlikely(!cpy_r_r603)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 226, CPyStatic_str_ops___globals);
        goto CPyL316;
    }
    CPy_Unreachable();
CPyL314: ;
    cpy_r_r604 = CPyStatics[8986]; /* 'CPy_Encode' */
    cpy_r_r605 = NULL;
    cpy_r_r606 = NULL;
    cpy_r_r607 = NULL;
    cpy_r_r608 = NULL;
    cpy_r_r609 = NULL;
    cpy_r_r610 = 2;
    cpy_r_r611 = CPY_INT_TAG;
    cpy_r_r612 = CPyDef_registry___method_op(cpy_r_r590, cpy_r_r597, cpy_r_r602, cpy_r_r604, 2, cpy_r_r605, cpy_r_r606, cpy_r_r607, cpy_r_r608, cpy_r_r609, cpy_r_r610, cpy_r_r611);
    CPy_DECREF(cpy_r_r597);
    if (unlikely(cpy_r_r612 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/str_ops.py", "<module>", 223, CPyStatic_str_ops___globals);
        goto CPyL316;
    } else
        goto CPyL380;
CPyL315: ;
    return 1;
CPyL316: ;
    cpy_r_r613 = 2;
    return cpy_r_r613;
CPyL317: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL318: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL16;
CPyL319: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL28;
CPyL320: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL31;
CPyL321: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL39;
CPyL322: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL316;
CPyL323: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL43;
CPyL324: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL316;
CPyL325: ;
    CPy_DecRef(cpy_r_r121);
    goto CPyL62;
CPyL326: ;
    CPy_DECREF(cpy_r_r135);
    goto CPyL65;
CPyL327: ;
    CPy_DecRef(cpy_r_r142);
    goto CPyL76;
CPyL328: ;
    CPy_DecRef(cpy_r_r166);
    goto CPyL88;
CPyL329: ;
    CPy_DECREF(cpy_r_r180);
    goto CPyL91;
CPyL330: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL316;
CPyL331: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL95;
CPyL332: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL98;
CPyL333: ;
    CPy_DecRef(cpy_r_r208);
    goto CPyL110;
CPyL334: ;
    CPy_DECREF(cpy_r_r222);
    goto CPyL113;
CPyL335: ;
    CPy_DecRef(cpy_r_r228);
    goto CPyL121;
CPyL336: ;
    CPy_DECREF(cpy_r_r242);
    goto CPyL124;
CPyL337: ;
    CPyTagged_DecRef(cpy_r_r272.f0);
    CPy_DecRef(cpy_r_r272.f1);
    goto CPyL316;
CPyL338: ;
    CPyTagged_DecRef(cpy_r_r272.f0);
    CPy_DecRef(cpy_r_r272.f1);
    CPyTagged_DecRef(cpy_r_r277.f0);
    CPy_DecRef(cpy_r_r277.f1);
    goto CPyL316;
CPyL339: ;
    CPy_DecRef(cpy_r_r278);
    goto CPyL316;
CPyL340: ;
    CPy_DecRef(cpy_r_r278);
    CPyTagged_DecRef(cpy_r_r288.f0);
    CPy_DecRef(cpy_r_r288.f1);
    goto CPyL316;
CPyL341: ;
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r289);
    goto CPyL316;
CPyL342: ;
    CPy_DecRef(cpy_r_r278);
    CPy_DecRef(cpy_r_r289);
    CPy_DecRef(cpy_r_r293);
    goto CPyL316;
CPyL343: ;
    CPy_DecRef(cpy_r_r305);
    goto CPyL316;
CPyL344: ;
    CPy_DecRef(cpy_r_r321);
    goto CPyL316;
CPyL345: ;
    CPy_DecRef(cpy_r_r328);
    goto CPyL160;
CPyL346: ;
    CPy_DecRef(cpy_r_r328);
    goto CPyL316;
CPyL347: ;
    CPy_DecRef(cpy_r_r328);
    CPy_DecRef(cpy_r_r334);
    goto CPyL316;
CPyL348: ;
    CPy_DecRef(cpy_r_r328);
    CPy_DecRef(cpy_r_r340);
    goto CPyL316;
CPyL349: ;
    CPy_DecRef(cpy_r_r328);
    CPy_DecRef(cpy_r_r340);
    CPy_DecRef(cpy_r_r344);
    goto CPyL316;
CPyL350: ;
    CPy_DECREF(cpy_r_r357);
    goto CPyL175;
CPyL351: ;
    CPy_DecRef(cpy_r_r369);
    goto CPyL187;
CPyL352: ;
    CPy_DecRef(cpy_r_r369);
    goto CPyL316;
CPyL353: ;
    CPy_DecRef(cpy_r_r369);
    CPyTagged_DecRef(cpy_r_r381.f0);
    CPy_DecRef(cpy_r_r381.f1);
    goto CPyL316;
CPyL354: ;
    CPy_DECREF(cpy_r_r392);
    goto CPyL193;
CPyL355: ;
    CPy_DecRef(cpy_r_r402);
    goto CPyL207;
CPyL356: ;
    CPy_DECREF(cpy_r_r418);
    goto CPyL210;
CPyL357: ;
    CPy_DecRef(cpy_r_r421);
    goto CPyL215;
CPyL358: ;
    CPy_DecRef(cpy_r_r440);
    goto CPyL316;
CPyL359: ;
    CPy_DecRef(cpy_r_r462);
    goto CPyL232;
CPyL360: ;
    CPy_DecRef(cpy_r_r462);
    goto CPyL235;
CPyL361: ;
    CPy_DecRef(cpy_r_r462);
    CPyTagged_DecRef(cpy_r_r470.f0);
    CPy_DecRef(cpy_r_r470.f1);
    goto CPyL238;
CPyL362: ;
    CPy_DecRef(cpy_r_r462);
    CPyTagged_DecRef(cpy_r_r470.f0);
    CPy_DecRef(cpy_r_r470.f1);
    CPyTagged_DecRef(cpy_r_r473.f0);
    CPy_DecRef(cpy_r_r473.f1);
    goto CPyL316;
CPyL363: ;
    CPy_DECREF(cpy_r_r486);
    goto CPyL242;
CPyL364: ;
    CPy_DecRef(cpy_r_r492);
    goto CPyL250;
CPyL365: ;
    CPy_DecRef(cpy_r_r492);
    goto CPyL253;
CPyL366: ;
    CPy_DecRef(cpy_r_r492);
    CPyTagged_DecRef(cpy_r_r501.f0);
    CPy_DecRef(cpy_r_r501.f1);
    goto CPyL316;
CPyL367: ;
    CPy_DECREF(cpy_r_r512);
    goto CPyL257;
CPyL368: ;
    CPy_DecRef(cpy_r_r520);
    goto CPyL268;
CPyL369: ;
    CPy_DECREF(cpy_r_r535);
    goto CPyL271;
CPyL370: ;
    CPy_DecRef(cpy_r_r539);
    goto CPyL276;
CPyL371: ;
    CPy_DecRef(cpy_r_r539);
    goto CPyL279;
CPyL372: ;
    CPy_DecRef(cpy_r_r539);
    CPyTagged_DecRef(cpy_r_r547.f0);
    CPy_DecRef(cpy_r_r547.f1);
    goto CPyL282;
CPyL373: ;
    CPy_DecRef(cpy_r_r539);
    CPyTagged_DecRef(cpy_r_r547.f0);
    CPy_DecRef(cpy_r_r547.f1);
    CPyTagged_DecRef(cpy_r_r550.f0);
    CPy_DecRef(cpy_r_r550.f1);
    goto CPyL316;
CPyL374: ;
    CPy_DECREF(cpy_r_r563);
    goto CPyL286;
CPyL375: ;
    CPy_DecRef(cpy_r_r569);
    goto CPyL294;
CPyL376: ;
    CPy_DecRef(cpy_r_r569);
    goto CPyL297;
CPyL377: ;
    CPy_DecRef(cpy_r_r569);
    CPyTagged_DecRef(cpy_r_r578.f0);
    CPy_DecRef(cpy_r_r578.f1);
    goto CPyL316;
CPyL378: ;
    CPy_DECREF(cpy_r_r589);
    goto CPyL301;
CPyL379: ;
    CPy_DecRef(cpy_r_r597);
    goto CPyL312;
CPyL380: ;
    CPy_DECREF(cpy_r_r612);
    goto CPyL315;
}
