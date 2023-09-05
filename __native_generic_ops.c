#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef generic_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef generic_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.generic_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    generic_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___generic_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___generic_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___generic_ops_internal);
        return CPyModule_mypyc___primitives___generic_ops_internal;
    }
    CPyModule_mypyc___primitives___generic_ops_internal = PyModule_Create(&generic_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___generic_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___generic_ops_internal, "__name__");
    CPyStatic_generic_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___generic_ops_internal);
    if (unlikely(CPyStatic_generic_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_generic_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___generic_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___generic_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_generic_ops_____top_level__(void) {
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
    tuple_T2OI cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OI cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2OI cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T2OI cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T2OI cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2OI cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OI cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    tuple_T2IO cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    tuple_T2OO cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T2OO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    tuple_T2OO cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    tuple_T2OO cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    tuple_T2OO cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T2OO cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    tuple_T2OO cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    tuple_T2OO cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    tuple_T2OO cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    tuple_T2OO cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    tuple_T2OO cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    CPyPtr cpy_r_r150;
    int64_t cpy_r_r151;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    tuple_T2OO cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyPtr cpy_r_r175;
    CPyPtr cpy_r_r176;
    CPyPtr cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    CPyTagged cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    CPyPtr cpy_r_r198;
    CPyPtr cpy_r_r199;
    CPyPtr cpy_r_r200;
    PyObject *cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    tuple_T2OO cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    tuple_T2OO cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    tuple_T2OO cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    tuple_T2OO cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    tuple_T2OO cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    tuple_T2OO cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    tuple_T2OO cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    tuple_T2OO cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    tuple_T2OO cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    tuple_T2OO cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    tuple_T2OO cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    tuple_T2OO cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    CPyTagged cpy_r_r260;
    CPyPtr cpy_r_r261;
    int64_t cpy_r_r262;
    CPyTagged cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    tuple_T2OO cpy_r_r270;
    PyObject *cpy_r_r271;
    int32_t cpy_r_r272;
    char cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    char cpy_r_r284;
    PyObject *cpy_r_r285;
    CPyPtr cpy_r_r286;
    CPyPtr cpy_r_r287;
    CPyPtr cpy_r_r288;
    PyObject *cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    CPyTagged cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    tuple_T2OO cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    tuple_T2OO cpy_r_r308;
    tuple_T2T2OOT2OO cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    tuple_T2OO cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    int32_t cpy_r_r319;
    char cpy_r_r320;
    PyObject *cpy_r_r321;
    int32_t cpy_r_r322;
    char cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    CPyPtr cpy_r_r333;
    CPyPtr cpy_r_r334;
    CPyPtr cpy_r_r335;
    PyObject *cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    char cpy_r_r347;
    PyObject *cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    tuple_T2IO cpy_r_r351;
    PyObject *cpy_r_r352;
    tuple_T2IO cpy_r_r353;
    tuple_T2T2IOT2IO cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    tuple_T2IO cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    CPyTagged cpy_r_r363;
    PyObject *cpy_r_r364;
    int32_t cpy_r_r365;
    char cpy_r_r366;
    PyObject *cpy_r_r367;
    int32_t cpy_r_r368;
    char cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    CPyPtr cpy_r_r374;
    CPyPtr cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    CPyTagged cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    CPyPtr cpy_r_r401;
    CPyPtr cpy_r_r402;
    CPyPtr cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    char cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    CPyPtr cpy_r_r414;
    CPyPtr cpy_r_r415;
    CPyPtr cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    char cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    tuple_T2OO cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    tuple_T2OO cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    tuple_T2OO cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    CPyPtr cpy_r_r435;
    CPyPtr cpy_r_r436;
    CPyPtr cpy_r_r437;
    CPyPtr cpy_r_r438;
    CPyTagged cpy_r_r439;
    CPyPtr cpy_r_r440;
    int64_t cpy_r_r441;
    CPyTagged cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    tuple_T2OO cpy_r_r449;
    PyObject *cpy_r_r450;
    int32_t cpy_r_r451;
    char cpy_r_r452;
    PyObject *cpy_r_r453;
    int32_t cpy_r_r454;
    char cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    char cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    char cpy_r_r472;
    PyObject *cpy_r_r473;
    CPyTagged cpy_r_r474;
    PyObject *cpy_r_r475;
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
    char cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    char cpy_r_r492;
    PyObject *cpy_r_r493;
    CPyPtr cpy_r_r494;
    CPyPtr cpy_r_r495;
    PyObject *cpy_r_r496;
    char cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    char cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    char cpy_r_r508;
    PyObject *cpy_r_r509;
    char cpy_r_r510;
    PyObject *cpy_r_r511;
    CPyPtr cpy_r_r512;
    CPyPtr cpy_r_r513;
    CPyPtr cpy_r_r514;
    PyObject *cpy_r_r515;
    char cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    char cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    char cpy_r_r527;
    PyObject *cpy_r_r528;
    char cpy_r_r529;
    PyObject *cpy_r_r530;
    char cpy_r_r531;
    PyObject *cpy_r_r532;
    CPyPtr cpy_r_r533;
    CPyPtr cpy_r_r534;
    CPyPtr cpy_r_r535;
    CPyPtr cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject *cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    char cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    char cpy_r_r551;
    PyObject *cpy_r_r552;
    char cpy_r_r553;
    PyObject *cpy_r_r554;
    CPyPtr cpy_r_r555;
    CPyPtr cpy_r_r556;
    CPyPtr cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    char cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    char cpy_r_r572;
    PyObject *cpy_r_r573;
    CPyPtr cpy_r_r574;
    CPyPtr cpy_r_r575;
    PyObject *cpy_r_r576;
    char cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    char cpy_r_r584;
    CPyTagged cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    char cpy_r_r589;
    PyObject *cpy_r_r590;
    char cpy_r_r591;
    PyObject *cpy_r_r592;
    CPyPtr cpy_r_r593;
    CPyPtr cpy_r_r594;
    CPyPtr cpy_r_r595;
    PyObject *cpy_r_r596;
    char cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    char cpy_r_r604;
    CPyTagged cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    int32_t cpy_r_r609;
    char cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    char cpy_r_r613;
    PyObject *cpy_r_r614;
    char cpy_r_r615;
    PyObject *cpy_r_r616;
    char cpy_r_r617;
    PyObject *cpy_r_r618;
    CPyPtr cpy_r_r619;
    CPyPtr cpy_r_r620;
    CPyPtr cpy_r_r621;
    CPyPtr cpy_r_r622;
    PyObject *cpy_r_r623;
    char cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    char cpy_r_r631;
    CPyTagged cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    char cpy_r_r636;
    PyObject *cpy_r_r637;
    char cpy_r_r638;
    PyObject *cpy_r_r639;
    char cpy_r_r640;
    PyObject *cpy_r_r641;
    CPyPtr cpy_r_r642;
    CPyPtr cpy_r_r643;
    CPyPtr cpy_r_r644;
    CPyPtr cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    char cpy_r_r656;
    CPyTagged cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    int32_t cpy_r_r661;
    char cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    char cpy_r_r665;
    PyObject *cpy_r_r666;
    char cpy_r_r667;
    PyObject *cpy_r_r668;
    CPyPtr cpy_r_r669;
    CPyPtr cpy_r_r670;
    CPyPtr cpy_r_r671;
    PyObject *cpy_r_r672;
    char cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    char cpy_r_r680;
    CPyTagged cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject *cpy_r_r684;
    int32_t cpy_r_r685;
    char cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    char cpy_r_r689;
    PyObject *cpy_r_r690;
    char cpy_r_r691;
    PyObject *cpy_r_r692;
    CPyPtr cpy_r_r693;
    CPyPtr cpy_r_r694;
    CPyPtr cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    char cpy_r_r706;
    CPyTagged cpy_r_r707;
    PyObject *cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    int32_t cpy_r_r711;
    char cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    char cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    char cpy_r_r718;
    PyObject *cpy_r_r719;
    char cpy_r_r720;
    tuple_T2IO cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    CPyPtr cpy_r_r724;
    CPyPtr cpy_r_r725;
    PyObject *cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    char cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    int32_t cpy_r_r733;
    char cpy_r_r734;
    PyObject *cpy_r_r735;
    char cpy_r_r736;
    PyObject *cpy_r_r737;
    char cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject *cpy_r_r742;
    PyObject *cpy_r_r743;
    char cpy_r_r744;
    PyObject *cpy_r_r745;
    CPyPtr cpy_r_r746;
    CPyPtr cpy_r_r747;
    CPyPtr cpy_r_r748;
    CPyPtr cpy_r_r749;
    CPyPtr cpy_r_r750;
    PyObject *cpy_r_r751;
    char cpy_r_r752;
    PyObject *cpy_r_r753;
    PyObject *cpy_r_r754;
    PyObject *cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject *cpy_r_r758;
    char cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    int32_t cpy_r_r763;
    char cpy_r_r764;
    PyObject *cpy_r_r765;
    char cpy_r_r766;
    PyObject *cpy_r_r767;
    char cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    PyObject *cpy_r_r773;
    char cpy_r_r774;
    PyObject *cpy_r_r775;
    CPyPtr cpy_r_r776;
    CPyPtr cpy_r_r777;
    CPyPtr cpy_r_r778;
    CPyPtr cpy_r_r779;
    CPyPtr cpy_r_r780;
    PyObject *cpy_r_r781;
    char cpy_r_r782;
    PyObject *cpy_r_r783;
    PyObject *cpy_r_r784;
    PyObject *cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    char cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    int32_t cpy_r_r793;
    char cpy_r_r794;
    PyObject *cpy_r_r795;
    char cpy_r_r796;
    PyObject *cpy_r_r797;
    char cpy_r_r798;
    PyObject *cpy_r_r799;
    char cpy_r_r800;
    PyObject *cpy_r_r801;
    CPyPtr cpy_r_r802;
    CPyPtr cpy_r_r803;
    CPyPtr cpy_r_r804;
    CPyPtr cpy_r_r805;
    PyObject *cpy_r_r806;
    char cpy_r_r807;
    PyObject *cpy_r_r808;
    PyObject *cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    char cpy_r_r814;
    PyObject *cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    int32_t cpy_r_r818;
    char cpy_r_r819;
    PyObject *cpy_r_r820;
    PyObject *cpy_r_r821;
    char cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    char cpy_r_r825;
    PyObject *cpy_r_r826;
    char cpy_r_r827;
    tuple_T2IO cpy_r_r828;
    PyObject *cpy_r_r829;
    PyObject *cpy_r_r830;
    CPyPtr cpy_r_r831;
    CPyPtr cpy_r_r832;
    PyObject *cpy_r_r833;
    PyObject *cpy_r_r834;
    PyObject *cpy_r_r835;
    char cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    PyObject *cpy_r_r839;
    int32_t cpy_r_r840;
    char cpy_r_r841;
    PyObject *cpy_r_r842;
    char cpy_r_r843;
    PyObject *cpy_r_r844;
    CPyPtr cpy_r_r845;
    CPyPtr cpy_r_r846;
    PyObject *cpy_r_r847;
    char cpy_r_r848;
    PyObject *cpy_r_r849;
    PyObject *cpy_r_r850;
    PyObject *cpy_r_r851;
    PyObject *cpy_r_r852;
    PyObject *cpy_r_r853;
    PyObject *cpy_r_r854;
    char cpy_r_r855;
    PyObject *cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    int32_t cpy_r_r859;
    char cpy_r_r860;
    PyObject *cpy_r_r861;
    char cpy_r_r862;
    PyObject *cpy_r_r863;
    CPyPtr cpy_r_r864;
    CPyPtr cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
    PyObject *cpy_r_r868;
    PyObject *cpy_r_r869;
    PyObject *cpy_r_r870;
    PyObject *cpy_r_r871;
    PyObject *cpy_r_r872;
    PyObject *cpy_r_r873;
    PyObject *cpy_r_r874;
    PyObject *cpy_r_r875;
    char cpy_r_r876;
    PyObject *cpy_r_r877;
    PyObject *cpy_r_r878;
    PyObject *cpy_r_r879;
    int32_t cpy_r_r880;
    char cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    char cpy_r_r884;
    PyObject *cpy_r_r885;
    CPyPtr cpy_r_r886;
    CPyPtr cpy_r_r887;
    PyObject *cpy_r_r888;
    char cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    char cpy_r_r896;
    CPyTagged cpy_r_r897;
    PyObject *cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject *cpy_r_r900;
    int32_t cpy_r_r901;
    char cpy_r_r902;
    PyObject *cpy_r_r903;
    char cpy_r_r904;
    PyObject *cpy_r_r905;
    CPyPtr cpy_r_r906;
    CPyPtr cpy_r_r907;
    PyObject *cpy_r_r908;
    char cpy_r_r909;
    PyObject *cpy_r_r910;
    PyObject *cpy_r_r911;
    PyObject *cpy_r_r912;
    PyObject *cpy_r_r913;
    PyObject *cpy_r_r914;
    PyObject *cpy_r_r915;
    char cpy_r_r916;
    PyObject *cpy_r_r917;
    PyObject *cpy_r_r918;
    PyObject *cpy_r_r919;
    int32_t cpy_r_r920;
    char cpy_r_r921;
    PyObject *cpy_r_r922;
    char cpy_r_r923;
    PyObject *cpy_r_r924;
    CPyPtr cpy_r_r925;
    CPyPtr cpy_r_r926;
    PyObject *cpy_r_r927;
    char cpy_r_r928;
    PyObject *cpy_r_r929;
    PyObject *cpy_r_r930;
    PyObject *cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject *cpy_r_r933;
    PyObject *cpy_r_r934;
    char cpy_r_r935;
    PyObject *cpy_r_r936;
    PyObject *cpy_r_r937;
    PyObject *cpy_r_r938;
    int32_t cpy_r_r939;
    char cpy_r_r940;
    PyObject *cpy_r_r941;
    char cpy_r_r942;
    PyObject *cpy_r_r943;
    CPyPtr cpy_r_r944;
    CPyPtr cpy_r_r945;
    PyObject *cpy_r_r946;
    char cpy_r_r947;
    PyObject *cpy_r_r948;
    PyObject *cpy_r_r949;
    PyObject *cpy_r_r950;
    PyObject *cpy_r_r951;
    PyObject *cpy_r_r952;
    PyObject *cpy_r_r953;
    char cpy_r_r954;
    PyObject *cpy_r_r955;
    PyObject *cpy_r_r956;
    PyObject *cpy_r_r957;
    int32_t cpy_r_r958;
    char cpy_r_r959;
    PyObject *cpy_r_r960;
    char cpy_r_r961;
    PyObject *cpy_r_r962;
    CPyPtr cpy_r_r963;
    CPyPtr cpy_r_r964;
    PyObject *cpy_r_r965;
    char cpy_r_r966;
    PyObject *cpy_r_r967;
    PyObject *cpy_r_r968;
    PyObject *cpy_r_r969;
    PyObject *cpy_r_r970;
    PyObject *cpy_r_r971;
    PyObject *cpy_r_r972;
    char cpy_r_r973;
    PyObject *cpy_r_r974;
    PyObject *cpy_r_r975;
    PyObject *cpy_r_r976;
    int32_t cpy_r_r977;
    char cpy_r_r978;
    char cpy_r_r979;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", -1, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_generic_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 12, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10260]; /* ('ERR_MAGIC', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_generic_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 14, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10261]; /* ('bool_rprimitive', 'c_int_rprimitive',
                                      'c_pyssize_t_rprimitive', 'c_size_t_rprimitive',
                                      'int_rprimitive', 'object_pointer_rprimitive',
                                      'object_rprimitive', 'pointer_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_generic_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 15, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10262]; /* ('ERR_NEG_INT', 'binary_op', 'custom_op', 'function_op',
                                      'method_op', 'unary_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_generic_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 25, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[860]; /* '==' */
    cpy_r_r22.f0 = cpy_r_r21;
    cpy_r_r22.f1 = 4;
    CPy_INCREF(cpy_r_r22.f0);
    CPyTagged_INCREF(cpy_r_r22.f1);
    cpy_r_r23 = CPyStatics[863]; /* '!=' */
    cpy_r_r24.f0 = cpy_r_r23;
    cpy_r_r24.f1 = 6;
    CPy_INCREF(cpy_r_r24.f0);
    CPyTagged_INCREF(cpy_r_r24.f1);
    cpy_r_r25 = CPyStatics[2465]; /* '<' */
    cpy_r_r26.f0 = cpy_r_r25;
    cpy_r_r26.f1 = 0;
    CPy_INCREF(cpy_r_r26.f0);
    CPyTagged_INCREF(cpy_r_r26.f1);
    cpy_r_r27 = CPyStatics[2470]; /* '<=' */
    cpy_r_r28.f0 = cpy_r_r27;
    cpy_r_r28.f1 = 2;
    CPy_INCREF(cpy_r_r28.f0);
    CPyTagged_INCREF(cpy_r_r28.f1);
    cpy_r_r29 = CPyStatics[840]; /* '>' */
    cpy_r_r30.f0 = cpy_r_r29;
    cpy_r_r30.f1 = 8;
    CPy_INCREF(cpy_r_r30.f0);
    CPyTagged_INCREF(cpy_r_r30.f1);
    cpy_r_r31 = CPyStatics[2468]; /* '>=' */
    cpy_r_r32.f0 = cpy_r_r31;
    cpy_r_r32.f1 = 10;
    CPy_INCREF(cpy_r_r32.f0);
    CPyTagged_INCREF(cpy_r_r32.f1);
    cpy_r_r33 = PyList_New(6);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 36, CPyStatic_generic_ops___globals);
        goto CPyL420;
    }
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10656 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp10656);
    PyObject *__tmp10657 = CPyTagged_StealAsObject(cpy_r_r22.f1);
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp10657);
    cpy_r_r35 = PyTuple_New(2);
    if (unlikely(cpy_r_r35 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10658 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r35, 0, __tmp10658);
    PyObject *__tmp10659 = CPyTagged_StealAsObject(cpy_r_r24.f1);
    PyTuple_SET_ITEM(cpy_r_r35, 1, __tmp10659);
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10660 = cpy_r_r26.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp10660);
    PyObject *__tmp10661 = CPyTagged_StealAsObject(cpy_r_r26.f1);
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp10661);
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10662 = cpy_r_r28.f0;
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp10662);
    PyObject *__tmp10663 = CPyTagged_StealAsObject(cpy_r_r28.f1);
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp10663);
    cpy_r_r38 = PyTuple_New(2);
    if (unlikely(cpy_r_r38 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10664 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r38, 0, __tmp10664);
    PyObject *__tmp10665 = CPyTagged_StealAsObject(cpy_r_r30.f1);
    PyTuple_SET_ITEM(cpy_r_r38, 1, __tmp10665);
    cpy_r_r39 = PyTuple_New(2);
    if (unlikely(cpy_r_r39 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10666 = cpy_r_r32.f0;
    PyTuple_SET_ITEM(cpy_r_r39, 0, __tmp10666);
    PyObject *__tmp10667 = CPyTagged_StealAsObject(cpy_r_r32.f1);
    PyTuple_SET_ITEM(cpy_r_r39, 1, __tmp10667);
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_r34;
    cpy_r_r42 = cpy_r_r41 + 8;
    *(PyObject * *)cpy_r_r42 = cpy_r_r35;
    cpy_r_r43 = cpy_r_r41 + 16;
    *(PyObject * *)cpy_r_r43 = cpy_r_r36;
    cpy_r_r44 = cpy_r_r41 + 24;
    *(PyObject * *)cpy_r_r44 = cpy_r_r37;
    cpy_r_r45 = cpy_r_r41 + 32;
    *(PyObject * *)cpy_r_r45 = cpy_r_r38;
    cpy_r_r46 = cpy_r_r41 + 40;
    *(PyObject * *)cpy_r_r46 = cpy_r_r39;
    cpy_r_r47 = 0;
CPyL9: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r33)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL421;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_r33, cpy_r_r47);
    cpy_r_r53 = CPyStatic_generic_ops___globals;
    cpy_r_r54 = CPyStatics[1628]; /* 'op' */
    cpy_r_r55 = CPyStatic_generic_ops___globals;
    cpy_r_r56 = CPyStatics[8769]; /* 'opid' */
    PyObject *__tmp10668;
    if (unlikely(!(PyTuple_Check(cpy_r_r52) && PyTuple_GET_SIZE(cpy_r_r52) == 2))) {
        __tmp10668 = NULL;
        goto __LL10669;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r52, 0))))
        __tmp10668 = PyTuple_GET_ITEM(cpy_r_r52, 0);
    else {
        __tmp10668 = NULL;
    }
    if (__tmp10668 == NULL) goto __LL10669;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r52, 1))))
        __tmp10668 = PyTuple_GET_ITEM(cpy_r_r52, 1);
    else {
        __tmp10668 = NULL;
    }
    if (__tmp10668 == NULL) goto __LL10669;
    __tmp10668 = cpy_r_r52;
__LL10669: ;
    if (unlikely(__tmp10668 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r52); cpy_r_r57 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp10670 = PyTuple_GET_ITEM(cpy_r_r52, 0);
        CPy_INCREF(__tmp10670);
        PyObject *__tmp10671;
        if (likely(PyUnicode_Check(__tmp10670)))
            __tmp10671 = __tmp10670;
        else {
            CPy_TypeError("str", __tmp10670); 
            __tmp10671 = NULL;
        }
        cpy_r_r57.f0 = __tmp10671;
        PyObject *__tmp10672 = PyTuple_GET_ITEM(cpy_r_r52, 1);
        CPyTagged __tmp10673;
        if (likely(PyLong_Check(__tmp10672)))
            __tmp10673 = CPyTagged_FromObject(__tmp10672);
        else {
            CPy_TypeError("int", __tmp10672); __tmp10673 = CPY_INT_TAG;
        }
        cpy_r_r57.f1 = __tmp10673;
    }
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 36, CPyStatic_generic_ops___globals);
        goto CPyL422;
    }
    cpy_r_r58 = cpy_r_r57.f0;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 36, CPyStatic_generic_ops___globals);
        goto CPyL423;
    }
    cpy_r_r61 = cpy_r_r57.f1;
    CPyTagged_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r57.f0);
    CPyTagged_DECREF(cpy_r_r57.f1);
    cpy_r_r62 = CPyTagged_StealAsObject(cpy_r_r61);
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 36, CPyStatic_generic_ops___globals);
        goto CPyL422;
    }
    cpy_r_r65 = CPyStatic_generic_ops___globals;
    cpy_r_r66 = CPyStatics[1628]; /* 'op' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 46, CPyStatic_generic_ops___globals);
        goto CPyL422;
    }
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 46, CPyStatic_generic_ops___globals, "str", cpy_r_r67);
        goto CPyL422;
    }
    cpy_r_r69 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r69 == NULL)) {
        goto CPyL424;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 47, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r71 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL425;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 47, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r73 = PyList_New(2);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 47, CPyStatic_generic_ops___globals);
        goto CPyL426;
    }
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r73)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    CPy_INCREF(cpy_r_r69);
    *(PyObject * *)cpy_r_r75 = cpy_r_r69;
    cpy_r_r76 = cpy_r_r75 + 8;
    CPy_INCREF(cpy_r_r71);
    *(PyObject * *)cpy_r_r76 = cpy_r_r71;
    cpy_r_r77 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL427;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 48, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r79 = CPyStatics[8770]; /* 'PyObject_RichCompare' */
    cpy_r_r80 = CPyStatic_generic_ops___globals;
    cpy_r_r81 = CPyStatics[8769]; /* 'opid' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 51, CPyStatic_generic_ops___globals);
        goto CPyL428;
    }
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 51, CPyStatic_generic_ops___globals);
        goto CPyL428;
    }
    cpy_r_r84 = CPyStatic_generic_ops___globals;
    cpy_r_r85 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r86 = CPyDict_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 51, CPyStatic_generic_ops___globals);
        goto CPyL429;
    }
    if (likely(Py_TYPE(cpy_r_r86) == CPyType_rtypes___RPrimitive))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 51, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r86);
        goto CPyL429;
    }
    cpy_r_r88.f0 = cpy_r_r83;
    cpy_r_r88.f1 = cpy_r_r87;
    CPyTagged_INCREF(cpy_r_r88.f0);
    CPy_INCREF(cpy_r_r88.f1);
    CPyTagged_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = PyList_New(1);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 51, CPyStatic_generic_ops___globals);
        goto CPyL430;
    }
    cpy_r_r90 = PyTuple_New(2);
    if (unlikely(cpy_r_r90 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10674 = CPyTagged_StealAsObject(cpy_r_r88.f0);
    PyTuple_SET_ITEM(cpy_r_r90, 0, __tmp10674);
    PyObject *__tmp10675 = cpy_r_r88.f1;
    PyTuple_SET_ITEM(cpy_r_r90, 1, __tmp10675);
    cpy_r_r91 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r92 = *(CPyPtr *)cpy_r_r91;
    *(PyObject * *)cpy_r_r92 = cpy_r_r90;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = NULL;
    cpy_r_r96 = NULL;
    cpy_r_r97 = 2;
    cpy_r_r98 = CPyDef_registry___binary_op(cpy_r_r68, cpy_r_r73, cpy_r_r77, cpy_r_r79, 2, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r89, cpy_r_r96, cpy_r_r97, 0);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 45, CPyStatic_generic_ops___globals);
        goto CPyL422;
    } else
        goto CPyL431;
CPyL31: ;
    cpy_r_r99 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r99;
    goto CPyL9;
CPyL32: ;
    cpy_r_r100 = CPyStatics[886]; /* '+' */
    cpy_r_r101 = CPyStatics[8771]; /* 'PyNumber_Add' */
    cpy_r_r102.f0 = cpy_r_r100;
    cpy_r_r102.f1 = cpy_r_r101;
    CPy_INCREF(cpy_r_r102.f0);
    CPy_INCREF(cpy_r_r102.f1);
    cpy_r_r103 = CPyStatics[1198]; /* '-' */
    cpy_r_r104 = CPyStatics[8772]; /* 'PyNumber_Subtract' */
    cpy_r_r105.f0 = cpy_r_r103;
    cpy_r_r105.f1 = cpy_r_r104;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    cpy_r_r106 = CPyStatics[282]; /* '*' */
    cpy_r_r107 = CPyStatics[8773]; /* 'PyNumber_Multiply' */
    cpy_r_r108.f0 = cpy_r_r106;
    cpy_r_r108.f1 = cpy_r_r107;
    CPy_INCREF(cpy_r_r108.f0);
    CPy_INCREF(cpy_r_r108.f1);
    cpy_r_r109 = CPyStatics[1595]; /* '//' */
    cpy_r_r110 = CPyStatics[8774]; /* 'PyNumber_FloorDivide' */
    cpy_r_r111.f0 = cpy_r_r109;
    cpy_r_r111.f1 = cpy_r_r110;
    CPy_INCREF(cpy_r_r111.f0);
    CPy_INCREF(cpy_r_r111.f1);
    cpy_r_r112 = CPyStatics[1594]; /* '/' */
    cpy_r_r113 = CPyStatics[8775]; /* 'PyNumber_TrueDivide' */
    cpy_r_r114.f0 = cpy_r_r112;
    cpy_r_r114.f1 = cpy_r_r113;
    CPy_INCREF(cpy_r_r114.f0);
    CPy_INCREF(cpy_r_r114.f1);
    cpy_r_r115 = CPyStatics[1183]; /* '%' */
    cpy_r_r116 = CPyStatics[8776]; /* 'PyNumber_Remainder' */
    cpy_r_r117.f0 = cpy_r_r115;
    cpy_r_r117.f1 = cpy_r_r116;
    CPy_INCREF(cpy_r_r117.f0);
    CPy_INCREF(cpy_r_r117.f1);
    cpy_r_r118 = CPyStatics[1598]; /* '<<' */
    cpy_r_r119 = CPyStatics[8777]; /* 'PyNumber_Lshift' */
    cpy_r_r120.f0 = cpy_r_r118;
    cpy_r_r120.f1 = cpy_r_r119;
    CPy_INCREF(cpy_r_r120.f0);
    CPy_INCREF(cpy_r_r120.f1);
    cpy_r_r121 = CPyStatics[1599]; /* '>>' */
    cpy_r_r122 = CPyStatics[8778]; /* 'PyNumber_Rshift' */
    cpy_r_r123.f0 = cpy_r_r121;
    cpy_r_r123.f1 = cpy_r_r122;
    CPy_INCREF(cpy_r_r123.f0);
    CPy_INCREF(cpy_r_r123.f1);
    cpy_r_r124 = CPyStatics[1596]; /* '&' */
    cpy_r_r125 = CPyStatics[8779]; /* 'PyNumber_And' */
    cpy_r_r126.f0 = cpy_r_r124;
    cpy_r_r126.f1 = cpy_r_r125;
    CPy_INCREF(cpy_r_r126.f0);
    CPy_INCREF(cpy_r_r126.f1);
    cpy_r_r127 = CPyStatics[1597]; /* '^' */
    cpy_r_r128 = CPyStatics[8780]; /* 'PyNumber_Xor' */
    cpy_r_r129.f0 = cpy_r_r127;
    cpy_r_r129.f1 = cpy_r_r128;
    CPy_INCREF(cpy_r_r129.f0);
    CPy_INCREF(cpy_r_r129.f1);
    cpy_r_r130 = CPyStatics[885]; /* '|' */
    cpy_r_r131 = CPyStatics[8781]; /* 'PyNumber_Or' */
    cpy_r_r132.f0 = cpy_r_r130;
    cpy_r_r132.f1 = cpy_r_r131;
    CPy_INCREF(cpy_r_r132.f0);
    CPy_INCREF(cpy_r_r132.f1);
    cpy_r_r133 = CPyStatics[1784]; /* '@' */
    cpy_r_r134 = CPyStatics[8782]; /* 'PyNumber_MatrixMultiply' */
    cpy_r_r135.f0 = cpy_r_r133;
    cpy_r_r135.f1 = cpy_r_r134;
    CPy_INCREF(cpy_r_r135.f0);
    CPy_INCREF(cpy_r_r135.f1);
    cpy_r_r136 = PyTuple_New(2);
    if (unlikely(cpy_r_r136 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10676 = cpy_r_r102.f0;
    PyTuple_SET_ITEM(cpy_r_r136, 0, __tmp10676);
    PyObject *__tmp10677 = cpy_r_r102.f1;
    PyTuple_SET_ITEM(cpy_r_r136, 1, __tmp10677);
    cpy_r_r137 = PyTuple_New(2);
    if (unlikely(cpy_r_r137 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10678 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r137, 0, __tmp10678);
    PyObject *__tmp10679 = cpy_r_r105.f1;
    PyTuple_SET_ITEM(cpy_r_r137, 1, __tmp10679);
    cpy_r_r138 = PyTuple_New(2);
    if (unlikely(cpy_r_r138 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10680 = cpy_r_r108.f0;
    PyTuple_SET_ITEM(cpy_r_r138, 0, __tmp10680);
    PyObject *__tmp10681 = cpy_r_r108.f1;
    PyTuple_SET_ITEM(cpy_r_r138, 1, __tmp10681);
    cpy_r_r139 = PyTuple_New(2);
    if (unlikely(cpy_r_r139 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10682 = cpy_r_r111.f0;
    PyTuple_SET_ITEM(cpy_r_r139, 0, __tmp10682);
    PyObject *__tmp10683 = cpy_r_r111.f1;
    PyTuple_SET_ITEM(cpy_r_r139, 1, __tmp10683);
    cpy_r_r140 = PyTuple_New(2);
    if (unlikely(cpy_r_r140 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10684 = cpy_r_r114.f0;
    PyTuple_SET_ITEM(cpy_r_r140, 0, __tmp10684);
    PyObject *__tmp10685 = cpy_r_r114.f1;
    PyTuple_SET_ITEM(cpy_r_r140, 1, __tmp10685);
    cpy_r_r141 = PyTuple_New(2);
    if (unlikely(cpy_r_r141 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10686 = cpy_r_r117.f0;
    PyTuple_SET_ITEM(cpy_r_r141, 0, __tmp10686);
    PyObject *__tmp10687 = cpy_r_r117.f1;
    PyTuple_SET_ITEM(cpy_r_r141, 1, __tmp10687);
    cpy_r_r142 = PyTuple_New(2);
    if (unlikely(cpy_r_r142 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10688 = cpy_r_r120.f0;
    PyTuple_SET_ITEM(cpy_r_r142, 0, __tmp10688);
    PyObject *__tmp10689 = cpy_r_r120.f1;
    PyTuple_SET_ITEM(cpy_r_r142, 1, __tmp10689);
    cpy_r_r143 = PyTuple_New(2);
    if (unlikely(cpy_r_r143 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10690 = cpy_r_r123.f0;
    PyTuple_SET_ITEM(cpy_r_r143, 0, __tmp10690);
    PyObject *__tmp10691 = cpy_r_r123.f1;
    PyTuple_SET_ITEM(cpy_r_r143, 1, __tmp10691);
    cpy_r_r144 = PyTuple_New(2);
    if (unlikely(cpy_r_r144 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10692 = cpy_r_r126.f0;
    PyTuple_SET_ITEM(cpy_r_r144, 0, __tmp10692);
    PyObject *__tmp10693 = cpy_r_r126.f1;
    PyTuple_SET_ITEM(cpy_r_r144, 1, __tmp10693);
    cpy_r_r145 = PyTuple_New(2);
    if (unlikely(cpy_r_r145 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10694 = cpy_r_r129.f0;
    PyTuple_SET_ITEM(cpy_r_r145, 0, __tmp10694);
    PyObject *__tmp10695 = cpy_r_r129.f1;
    PyTuple_SET_ITEM(cpy_r_r145, 1, __tmp10695);
    cpy_r_r146 = PyTuple_New(2);
    if (unlikely(cpy_r_r146 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10696 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r146, 0, __tmp10696);
    PyObject *__tmp10697 = cpy_r_r132.f1;
    PyTuple_SET_ITEM(cpy_r_r146, 1, __tmp10697);
    cpy_r_r147 = PyTuple_New(2);
    if (unlikely(cpy_r_r147 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10698 = cpy_r_r135.f0;
    PyTuple_SET_ITEM(cpy_r_r147, 0, __tmp10698);
    PyObject *__tmp10699 = cpy_r_r135.f1;
    PyTuple_SET_ITEM(cpy_r_r147, 1, __tmp10699);
    cpy_r_r148 = CPyList_Build(12, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 55, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r149 = 0;
CPyL34: ;
    cpy_r_r150 = (CPyPtr)&((PyVarObject *)cpy_r_r148)->ob_size;
    cpy_r_r151 = *(int64_t *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 << 1;
    cpy_r_r153 = (Py_ssize_t)cpy_r_r149 < (Py_ssize_t)cpy_r_r152;
    if (!cpy_r_r153) goto CPyL432;
    cpy_r_r154 = CPyList_GetItemUnsafe(cpy_r_r148, cpy_r_r149);
    cpy_r_r155 = CPyStatic_generic_ops___globals;
    cpy_r_r156 = CPyStatics[1628]; /* 'op' */
    cpy_r_r157 = CPyStatic_generic_ops___globals;
    cpy_r_r158 = CPyStatics[8783]; /* 'funcname' */
    PyObject *__tmp10700;
    if (unlikely(!(PyTuple_Check(cpy_r_r154) && PyTuple_GET_SIZE(cpy_r_r154) == 2))) {
        __tmp10700 = NULL;
        goto __LL10701;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r154, 0))))
        __tmp10700 = PyTuple_GET_ITEM(cpy_r_r154, 0);
    else {
        __tmp10700 = NULL;
    }
    if (__tmp10700 == NULL) goto __LL10701;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r154, 1))))
        __tmp10700 = PyTuple_GET_ITEM(cpy_r_r154, 1);
    else {
        __tmp10700 = NULL;
    }
    if (__tmp10700 == NULL) goto __LL10701;
    __tmp10700 = cpy_r_r154;
__LL10701: ;
    if (unlikely(__tmp10700 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r154); cpy_r_r159 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10702 = PyTuple_GET_ITEM(cpy_r_r154, 0);
        CPy_INCREF(__tmp10702);
        PyObject *__tmp10703;
        if (likely(PyUnicode_Check(__tmp10702)))
            __tmp10703 = __tmp10702;
        else {
            CPy_TypeError("str", __tmp10702); 
            __tmp10703 = NULL;
        }
        cpy_r_r159.f0 = __tmp10703;
        PyObject *__tmp10704 = PyTuple_GET_ITEM(cpy_r_r154, 1);
        CPy_INCREF(__tmp10704);
        PyObject *__tmp10705;
        if (likely(PyUnicode_Check(__tmp10704)))
            __tmp10705 = __tmp10704;
        else {
            CPy_TypeError("str", __tmp10704); 
            __tmp10705 = NULL;
        }
        cpy_r_r159.f1 = __tmp10705;
    }
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r159.f0 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 55, CPyStatic_generic_ops___globals);
        goto CPyL433;
    }
    cpy_r_r160 = cpy_r_r159.f0;
    CPy_INCREF(cpy_r_r160);
    cpy_r_r161 = CPyDict_SetItem(cpy_r_r155, cpy_r_r156, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 55, CPyStatic_generic_ops___globals);
        goto CPyL434;
    }
    cpy_r_r163 = cpy_r_r159.f1;
    CPy_INCREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r159.f0);
    CPy_DECREF(cpy_r_r159.f1);
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r157, cpy_r_r158, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 55, CPyStatic_generic_ops___globals);
        goto CPyL433;
    }
    cpy_r_r166 = CPyStatic_generic_ops___globals;
    cpy_r_r167 = CPyStatics[1628]; /* 'op' */
    cpy_r_r168 = CPyDict_GetItem(cpy_r_r166, cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 70, CPyStatic_generic_ops___globals);
        goto CPyL433;
    }
    if (likely(PyUnicode_Check(cpy_r_r168)))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 70, CPyStatic_generic_ops___globals, "str", cpy_r_r168);
        goto CPyL433;
    }
    cpy_r_r170 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r170 == NULL)) {
        goto CPyL435;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 71, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r172 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r172 == NULL)) {
        goto CPyL436;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r173 = 0;
    if (unlikely(!cpy_r_r173)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 71, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r174 = PyList_New(2);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 71, CPyStatic_generic_ops___globals);
        goto CPyL437;
    }
    cpy_r_r175 = (CPyPtr)&((PyListObject *)cpy_r_r174)->ob_item;
    cpy_r_r176 = *(CPyPtr *)cpy_r_r175;
    CPy_INCREF(cpy_r_r170);
    *(PyObject * *)cpy_r_r176 = cpy_r_r170;
    cpy_r_r177 = cpy_r_r176 + 8;
    CPy_INCREF(cpy_r_r172);
    *(PyObject * *)cpy_r_r177 = cpy_r_r172;
    cpy_r_r178 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r178 == NULL)) {
        goto CPyL438;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r179 = 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 72, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r180 = CPyStatic_generic_ops___globals;
    cpy_r_r181 = CPyStatics[8783]; /* 'funcname' */
    cpy_r_r182 = CPyDict_GetItem(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 73, CPyStatic_generic_ops___globals);
        goto CPyL439;
    }
    if (likely(PyUnicode_Check(cpy_r_r182)))
        cpy_r_r183 = cpy_r_r182;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 73, CPyStatic_generic_ops___globals, "str", cpy_r_r182);
        goto CPyL439;
    }
    cpy_r_r184 = NULL;
    cpy_r_r185 = NULL;
    cpy_r_r186 = NULL;
    cpy_r_r187 = NULL;
    cpy_r_r188 = NULL;
    cpy_r_r189 = 2;
    cpy_r_r190 = CPyDef_registry___binary_op(cpy_r_r169, cpy_r_r174, cpy_r_r178, cpy_r_r183, 2, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187, cpy_r_r188, cpy_r_r189, 0);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 69, CPyStatic_generic_ops___globals);
        goto CPyL433;
    } else
        goto CPyL440;
CPyL53: ;
    cpy_r_r191 = cpy_r_r149 + 2;
    cpy_r_r149 = cpy_r_r191;
    goto CPyL34;
CPyL54: ;
    cpy_r_r192 = CPyStatics[5026]; /* 'builtins.divmod' */
    cpy_r_r193 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r193 != NULL)) goto CPyL57;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r194 = 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 81, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r195 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r195 != NULL)) goto CPyL60;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r196 = 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 81, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r197 = PyList_New(2);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 81, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r198 = (CPyPtr)&((PyListObject *)cpy_r_r197)->ob_item;
    cpy_r_r199 = *(CPyPtr *)cpy_r_r198;
    CPy_INCREF(cpy_r_r193);
    *(PyObject * *)cpy_r_r199 = cpy_r_r193;
    cpy_r_r200 = cpy_r_r199 + 8;
    CPy_INCREF(cpy_r_r195);
    *(PyObject * *)cpy_r_r200 = cpy_r_r195;
    cpy_r_r201 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r201 == NULL)) {
        goto CPyL441;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r202 = 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 82, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r203 = CPyStatics[8784]; /* 'PyNumber_Divmod' */
    cpy_r_r204 = NULL;
    cpy_r_r205 = NULL;
    cpy_r_r206 = NULL;
    cpy_r_r207 = NULL;
    cpy_r_r208 = NULL;
    cpy_r_r209 = 2;
    cpy_r_r210 = CPyDef_registry___function_op(cpy_r_r192, cpy_r_r197, cpy_r_r201, cpy_r_r203, 2, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, 0);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 79, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL442;
CPyL65: ;
    cpy_r_r211 = CPyStatics[8448]; /* '+=' */
    cpy_r_r212 = CPyStatics[8785]; /* 'PyNumber_InPlaceAdd' */
    cpy_r_r213.f0 = cpy_r_r211;
    cpy_r_r213.f1 = cpy_r_r212;
    CPy_INCREF(cpy_r_r213.f0);
    CPy_INCREF(cpy_r_r213.f1);
    cpy_r_r214 = CPyStatics[8449]; /* '-=' */
    cpy_r_r215 = CPyStatics[8786]; /* 'PyNumber_InPlaceSubtract' */
    cpy_r_r216.f0 = cpy_r_r214;
    cpy_r_r216.f1 = cpy_r_r215;
    CPy_INCREF(cpy_r_r216.f0);
    CPy_INCREF(cpy_r_r216.f1);
    cpy_r_r217 = CPyStatics[8450]; /* '*=' */
    cpy_r_r218 = CPyStatics[8787]; /* 'PyNumber_InPlaceMultiply' */
    cpy_r_r219.f0 = cpy_r_r217;
    cpy_r_r219.f1 = cpy_r_r218;
    CPy_INCREF(cpy_r_r219.f0);
    CPy_INCREF(cpy_r_r219.f1);
    cpy_r_r220 = CPyStatics[8788]; /* '@=' */
    cpy_r_r221 = CPyStatics[8789]; /* 'PyNumber_InPlaceMatrixMultiply' */
    cpy_r_r222.f0 = cpy_r_r220;
    cpy_r_r222.f1 = cpy_r_r221;
    CPy_INCREF(cpy_r_r222.f0);
    CPy_INCREF(cpy_r_r222.f1);
    cpy_r_r223 = CPyStatics[8451]; /* '//=' */
    cpy_r_r224 = CPyStatics[8790]; /* 'PyNumber_InPlaceFloorDivide' */
    cpy_r_r225.f0 = cpy_r_r223;
    cpy_r_r225.f1 = cpy_r_r224;
    CPy_INCREF(cpy_r_r225.f0);
    CPy_INCREF(cpy_r_r225.f1);
    cpy_r_r226 = CPyStatics[8791]; /* '/=' */
    cpy_r_r227 = CPyStatics[8792]; /* 'PyNumber_InPlaceTrueDivide' */
    cpy_r_r228.f0 = cpy_r_r226;
    cpy_r_r228.f1 = cpy_r_r227;
    CPy_INCREF(cpy_r_r228.f0);
    CPy_INCREF(cpy_r_r228.f1);
    cpy_r_r229 = CPyStatics[8452]; /* '%=' */
    cpy_r_r230 = CPyStatics[8793]; /* 'PyNumber_InPlaceRemainder' */
    cpy_r_r231.f0 = cpy_r_r229;
    cpy_r_r231.f1 = cpy_r_r230;
    CPy_INCREF(cpy_r_r231.f0);
    CPy_INCREF(cpy_r_r231.f1);
    cpy_r_r232 = CPyStatics[8456]; /* '<<=' */
    cpy_r_r233 = CPyStatics[8794]; /* 'PyNumber_InPlaceLshift' */
    cpy_r_r234.f0 = cpy_r_r232;
    cpy_r_r234.f1 = cpy_r_r233;
    CPy_INCREF(cpy_r_r234.f0);
    CPy_INCREF(cpy_r_r234.f1);
    cpy_r_r235 = CPyStatics[8457]; /* '>>=' */
    cpy_r_r236 = CPyStatics[8795]; /* 'PyNumber_InPlaceRshift' */
    cpy_r_r237.f0 = cpy_r_r235;
    cpy_r_r237.f1 = cpy_r_r236;
    CPy_INCREF(cpy_r_r237.f0);
    CPy_INCREF(cpy_r_r237.f1);
    cpy_r_r238 = CPyStatics[8453]; /* '&=' */
    cpy_r_r239 = CPyStatics[8796]; /* 'PyNumber_InPlaceAnd' */
    cpy_r_r240.f0 = cpy_r_r238;
    cpy_r_r240.f1 = cpy_r_r239;
    CPy_INCREF(cpy_r_r240.f0);
    CPy_INCREF(cpy_r_r240.f1);
    cpy_r_r241 = CPyStatics[8455]; /* '^=' */
    cpy_r_r242 = CPyStatics[8797]; /* 'PyNumber_InPlaceXor' */
    cpy_r_r243.f0 = cpy_r_r241;
    cpy_r_r243.f1 = cpy_r_r242;
    CPy_INCREF(cpy_r_r243.f0);
    CPy_INCREF(cpy_r_r243.f1);
    cpy_r_r244 = CPyStatics[8454]; /* '|=' */
    cpy_r_r245 = CPyStatics[8798]; /* 'PyNumber_InPlaceOr' */
    cpy_r_r246.f0 = cpy_r_r244;
    cpy_r_r246.f1 = cpy_r_r245;
    CPy_INCREF(cpy_r_r246.f0);
    CPy_INCREF(cpy_r_r246.f1);
    cpy_r_r247 = PyTuple_New(2);
    if (unlikely(cpy_r_r247 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10706 = cpy_r_r213.f0;
    PyTuple_SET_ITEM(cpy_r_r247, 0, __tmp10706);
    PyObject *__tmp10707 = cpy_r_r213.f1;
    PyTuple_SET_ITEM(cpy_r_r247, 1, __tmp10707);
    cpy_r_r248 = PyTuple_New(2);
    if (unlikely(cpy_r_r248 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10708 = cpy_r_r216.f0;
    PyTuple_SET_ITEM(cpy_r_r248, 0, __tmp10708);
    PyObject *__tmp10709 = cpy_r_r216.f1;
    PyTuple_SET_ITEM(cpy_r_r248, 1, __tmp10709);
    cpy_r_r249 = PyTuple_New(2);
    if (unlikely(cpy_r_r249 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10710 = cpy_r_r219.f0;
    PyTuple_SET_ITEM(cpy_r_r249, 0, __tmp10710);
    PyObject *__tmp10711 = cpy_r_r219.f1;
    PyTuple_SET_ITEM(cpy_r_r249, 1, __tmp10711);
    cpy_r_r250 = PyTuple_New(2);
    if (unlikely(cpy_r_r250 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10712 = cpy_r_r222.f0;
    PyTuple_SET_ITEM(cpy_r_r250, 0, __tmp10712);
    PyObject *__tmp10713 = cpy_r_r222.f1;
    PyTuple_SET_ITEM(cpy_r_r250, 1, __tmp10713);
    cpy_r_r251 = PyTuple_New(2);
    if (unlikely(cpy_r_r251 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10714 = cpy_r_r225.f0;
    PyTuple_SET_ITEM(cpy_r_r251, 0, __tmp10714);
    PyObject *__tmp10715 = cpy_r_r225.f1;
    PyTuple_SET_ITEM(cpy_r_r251, 1, __tmp10715);
    cpy_r_r252 = PyTuple_New(2);
    if (unlikely(cpy_r_r252 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10716 = cpy_r_r228.f0;
    PyTuple_SET_ITEM(cpy_r_r252, 0, __tmp10716);
    PyObject *__tmp10717 = cpy_r_r228.f1;
    PyTuple_SET_ITEM(cpy_r_r252, 1, __tmp10717);
    cpy_r_r253 = PyTuple_New(2);
    if (unlikely(cpy_r_r253 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10718 = cpy_r_r231.f0;
    PyTuple_SET_ITEM(cpy_r_r253, 0, __tmp10718);
    PyObject *__tmp10719 = cpy_r_r231.f1;
    PyTuple_SET_ITEM(cpy_r_r253, 1, __tmp10719);
    cpy_r_r254 = PyTuple_New(2);
    if (unlikely(cpy_r_r254 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10720 = cpy_r_r234.f0;
    PyTuple_SET_ITEM(cpy_r_r254, 0, __tmp10720);
    PyObject *__tmp10721 = cpy_r_r234.f1;
    PyTuple_SET_ITEM(cpy_r_r254, 1, __tmp10721);
    cpy_r_r255 = PyTuple_New(2);
    if (unlikely(cpy_r_r255 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10722 = cpy_r_r237.f0;
    PyTuple_SET_ITEM(cpy_r_r255, 0, __tmp10722);
    PyObject *__tmp10723 = cpy_r_r237.f1;
    PyTuple_SET_ITEM(cpy_r_r255, 1, __tmp10723);
    cpy_r_r256 = PyTuple_New(2);
    if (unlikely(cpy_r_r256 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10724 = cpy_r_r240.f0;
    PyTuple_SET_ITEM(cpy_r_r256, 0, __tmp10724);
    PyObject *__tmp10725 = cpy_r_r240.f1;
    PyTuple_SET_ITEM(cpy_r_r256, 1, __tmp10725);
    cpy_r_r257 = PyTuple_New(2);
    if (unlikely(cpy_r_r257 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10726 = cpy_r_r243.f0;
    PyTuple_SET_ITEM(cpy_r_r257, 0, __tmp10726);
    PyObject *__tmp10727 = cpy_r_r243.f1;
    PyTuple_SET_ITEM(cpy_r_r257, 1, __tmp10727);
    cpy_r_r258 = PyTuple_New(2);
    if (unlikely(cpy_r_r258 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10728 = cpy_r_r246.f0;
    PyTuple_SET_ITEM(cpy_r_r258, 0, __tmp10728);
    PyObject *__tmp10729 = cpy_r_r246.f1;
    PyTuple_SET_ITEM(cpy_r_r258, 1, __tmp10729);
    cpy_r_r259 = CPyList_Build(12, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252, cpy_r_r253, cpy_r_r254, cpy_r_r255, cpy_r_r256, cpy_r_r257, cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 89, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r260 = 0;
CPyL67: ;
    cpy_r_r261 = (CPyPtr)&((PyVarObject *)cpy_r_r259)->ob_size;
    cpy_r_r262 = *(int64_t *)cpy_r_r261;
    cpy_r_r263 = cpy_r_r262 << 1;
    cpy_r_r264 = (Py_ssize_t)cpy_r_r260 < (Py_ssize_t)cpy_r_r263;
    if (!cpy_r_r264) goto CPyL443;
    cpy_r_r265 = CPyList_GetItemUnsafe(cpy_r_r259, cpy_r_r260);
    cpy_r_r266 = CPyStatic_generic_ops___globals;
    cpy_r_r267 = CPyStatics[1628]; /* 'op' */
    cpy_r_r268 = CPyStatic_generic_ops___globals;
    cpy_r_r269 = CPyStatics[8783]; /* 'funcname' */
    PyObject *__tmp10730;
    if (unlikely(!(PyTuple_Check(cpy_r_r265) && PyTuple_GET_SIZE(cpy_r_r265) == 2))) {
        __tmp10730 = NULL;
        goto __LL10731;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r265, 0))))
        __tmp10730 = PyTuple_GET_ITEM(cpy_r_r265, 0);
    else {
        __tmp10730 = NULL;
    }
    if (__tmp10730 == NULL) goto __LL10731;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r265, 1))))
        __tmp10730 = PyTuple_GET_ITEM(cpy_r_r265, 1);
    else {
        __tmp10730 = NULL;
    }
    if (__tmp10730 == NULL) goto __LL10731;
    __tmp10730 = cpy_r_r265;
__LL10731: ;
    if (unlikely(__tmp10730 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r265); cpy_r_r270 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10732 = PyTuple_GET_ITEM(cpy_r_r265, 0);
        CPy_INCREF(__tmp10732);
        PyObject *__tmp10733;
        if (likely(PyUnicode_Check(__tmp10732)))
            __tmp10733 = __tmp10732;
        else {
            CPy_TypeError("str", __tmp10732); 
            __tmp10733 = NULL;
        }
        cpy_r_r270.f0 = __tmp10733;
        PyObject *__tmp10734 = PyTuple_GET_ITEM(cpy_r_r265, 1);
        CPy_INCREF(__tmp10734);
        PyObject *__tmp10735;
        if (likely(PyUnicode_Check(__tmp10734)))
            __tmp10735 = __tmp10734;
        else {
            CPy_TypeError("str", __tmp10734); 
            __tmp10735 = NULL;
        }
        cpy_r_r270.f1 = __tmp10735;
    }
    CPy_DECREF(cpy_r_r265);
    if (unlikely(cpy_r_r270.f0 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 89, CPyStatic_generic_ops___globals);
        goto CPyL444;
    }
    cpy_r_r271 = cpy_r_r270.f0;
    CPy_INCREF(cpy_r_r271);
    cpy_r_r272 = CPyDict_SetItem(cpy_r_r266, cpy_r_r267, cpy_r_r271);
    CPy_DECREF(cpy_r_r271);
    cpy_r_r273 = cpy_r_r272 >= 0;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 89, CPyStatic_generic_ops___globals);
        goto CPyL445;
    }
    cpy_r_r274 = cpy_r_r270.f1;
    CPy_INCREF(cpy_r_r274);
    CPy_DECREF(cpy_r_r270.f0);
    CPy_DECREF(cpy_r_r270.f1);
    cpy_r_r275 = CPyDict_SetItem(cpy_r_r268, cpy_r_r269, cpy_r_r274);
    CPy_DECREF(cpy_r_r274);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 89, CPyStatic_generic_ops___globals);
        goto CPyL444;
    }
    cpy_r_r277 = CPyStatic_generic_ops___globals;
    cpy_r_r278 = CPyStatics[1628]; /* 'op' */
    cpy_r_r279 = CPyDict_GetItem(cpy_r_r277, cpy_r_r278);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 104, CPyStatic_generic_ops___globals);
        goto CPyL444;
    }
    if (likely(PyUnicode_Check(cpy_r_r279)))
        cpy_r_r280 = cpy_r_r279;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 104, CPyStatic_generic_ops___globals, "str", cpy_r_r279);
        goto CPyL444;
    }
    cpy_r_r281 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r281 == NULL)) {
        goto CPyL446;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r282 = 0;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 105, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r283 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r283 == NULL)) {
        goto CPyL447;
    } else
        goto CPyL79;
CPyL77: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r284 = 0;
    if (unlikely(!cpy_r_r284)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 105, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r285 = PyList_New(2);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 105, CPyStatic_generic_ops___globals);
        goto CPyL448;
    }
    cpy_r_r286 = (CPyPtr)&((PyListObject *)cpy_r_r285)->ob_item;
    cpy_r_r287 = *(CPyPtr *)cpy_r_r286;
    CPy_INCREF(cpy_r_r281);
    *(PyObject * *)cpy_r_r287 = cpy_r_r281;
    cpy_r_r288 = cpy_r_r287 + 8;
    CPy_INCREF(cpy_r_r283);
    *(PyObject * *)cpy_r_r288 = cpy_r_r283;
    cpy_r_r289 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r289 == NULL)) {
        goto CPyL449;
    } else
        goto CPyL83;
CPyL81: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r290 = 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 106, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r291 = CPyStatic_generic_ops___globals;
    cpy_r_r292 = CPyStatics[8783]; /* 'funcname' */
    cpy_r_r293 = CPyDict_GetItem(cpy_r_r291, cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 107, CPyStatic_generic_ops___globals);
        goto CPyL450;
    }
    if (likely(PyUnicode_Check(cpy_r_r293)))
        cpy_r_r294 = cpy_r_r293;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 107, CPyStatic_generic_ops___globals, "str", cpy_r_r293);
        goto CPyL450;
    }
    cpy_r_r295 = NULL;
    cpy_r_r296 = NULL;
    cpy_r_r297 = NULL;
    cpy_r_r298 = NULL;
    cpy_r_r299 = NULL;
    cpy_r_r300 = 2;
    cpy_r_r301 = CPyDef_registry___binary_op(cpy_r_r280, cpy_r_r285, cpy_r_r289, cpy_r_r294, 2, cpy_r_r295, cpy_r_r296, cpy_r_r297, cpy_r_r298, cpy_r_r299, cpy_r_r300, 0);
    CPy_DECREF(cpy_r_r280);
    CPy_DECREF(cpy_r_r285);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 103, CPyStatic_generic_ops___globals);
        goto CPyL444;
    } else
        goto CPyL451;
CPyL86: ;
    cpy_r_r302 = cpy_r_r260 + 2;
    cpy_r_r260 = cpy_r_r302;
    goto CPyL67;
CPyL87: ;
    cpy_r_r303 = CPyStatics[1600]; /* '**' */
    cpy_r_r304 = CPyStatics[8799]; /* 'CPyNumber_Power' */
    cpy_r_r305.f0 = cpy_r_r303;
    cpy_r_r305.f1 = cpy_r_r304;
    CPy_INCREF(cpy_r_r305.f0);
    CPy_INCREF(cpy_r_r305.f1);
    cpy_r_r306 = CPyStatics[8800]; /* '**=' */
    cpy_r_r307 = CPyStatics[8801]; /* 'CPyNumber_InPlacePower' */
    cpy_r_r308.f0 = cpy_r_r306;
    cpy_r_r308.f1 = cpy_r_r307;
    CPy_INCREF(cpy_r_r308.f0);
    CPy_INCREF(cpy_r_r308.f1);
    cpy_r_r309.f0 = cpy_r_r305;
    cpy_r_r309.f1 = cpy_r_r308;
    CPy_INCREF(cpy_r_r309.f0.f0);
    CPy_INCREF(cpy_r_r309.f0.f1);
    CPy_INCREF(cpy_r_r309.f1.f0);
    CPy_INCREF(cpy_r_r309.f1.f1);
    CPy_DECREF(cpy_r_r305.f0);
    CPy_DECREF(cpy_r_r305.f1);
    CPy_DECREF(cpy_r_r308.f0);
    CPy_DECREF(cpy_r_r308.f1);
    cpy_r_r310 = PyTuple_New(2);
    if (unlikely(cpy_r_r310 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10736 = PyTuple_New(2);
    if (unlikely(__tmp10736 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10737 = cpy_r_r309.f0.f0;
    PyTuple_SET_ITEM(__tmp10736, 0, __tmp10737);
    PyObject *__tmp10738 = cpy_r_r309.f0.f1;
    PyTuple_SET_ITEM(__tmp10736, 1, __tmp10738);
    PyTuple_SET_ITEM(cpy_r_r310, 0, __tmp10736);
    PyObject *__tmp10739 = PyTuple_New(2);
    if (unlikely(__tmp10739 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10740 = cpy_r_r309.f1.f0;
    PyTuple_SET_ITEM(__tmp10739, 0, __tmp10740);
    PyObject *__tmp10741 = cpy_r_r309.f1.f1;
    PyTuple_SET_ITEM(__tmp10739, 1, __tmp10741);
    PyTuple_SET_ITEM(cpy_r_r310, 1, __tmp10739);
    cpy_r_r311 = PyObject_GetIter(cpy_r_r310);
    CPy_DECREF(cpy_r_r310);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 112, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
CPyL88: ;
    cpy_r_r312 = PyIter_Next(cpy_r_r311);
    if (cpy_r_r312 == NULL) goto CPyL452;
    PyObject *__tmp10742;
    if (unlikely(!(PyTuple_Check(cpy_r_r312) && PyTuple_GET_SIZE(cpy_r_r312) == 2))) {
        __tmp10742 = NULL;
        goto __LL10743;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r312, 0))))
        __tmp10742 = PyTuple_GET_ITEM(cpy_r_r312, 0);
    else {
        __tmp10742 = NULL;
    }
    if (__tmp10742 == NULL) goto __LL10743;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r312, 1))))
        __tmp10742 = PyTuple_GET_ITEM(cpy_r_r312, 1);
    else {
        __tmp10742 = NULL;
    }
    if (__tmp10742 == NULL) goto __LL10743;
    __tmp10742 = cpy_r_r312;
__LL10743: ;
    if (unlikely(__tmp10742 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r312); cpy_r_r313 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10744 = PyTuple_GET_ITEM(cpy_r_r312, 0);
        CPy_INCREF(__tmp10744);
        PyObject *__tmp10745;
        if (likely(PyUnicode_Check(__tmp10744)))
            __tmp10745 = __tmp10744;
        else {
            CPy_TypeError("str", __tmp10744); 
            __tmp10745 = NULL;
        }
        cpy_r_r313.f0 = __tmp10745;
        PyObject *__tmp10746 = PyTuple_GET_ITEM(cpy_r_r312, 1);
        CPy_INCREF(__tmp10746);
        PyObject *__tmp10747;
        if (likely(PyUnicode_Check(__tmp10746)))
            __tmp10747 = __tmp10746;
        else {
            CPy_TypeError("str", __tmp10746); 
            __tmp10747 = NULL;
        }
        cpy_r_r313.f1 = __tmp10747;
    }
    CPy_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r313.f0 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 112, CPyStatic_generic_ops___globals);
        goto CPyL453;
    }
    cpy_r_r314 = CPyStatic_generic_ops___globals;
    cpy_r_r315 = CPyStatics[1628]; /* 'op' */
    cpy_r_r316 = CPyStatic_generic_ops___globals;
    cpy_r_r317 = CPyStatics[8802]; /* 'c_function' */
    cpy_r_r318 = cpy_r_r313.f0;
    CPy_INCREF(cpy_r_r318);
    cpy_r_r319 = CPyDict_SetItem(cpy_r_r314, cpy_r_r315, cpy_r_r318);
    CPy_DECREF(cpy_r_r318);
    cpy_r_r320 = cpy_r_r319 >= 0;
    if (unlikely(!cpy_r_r320)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 112, CPyStatic_generic_ops___globals);
        goto CPyL454;
    }
    cpy_r_r321 = cpy_r_r313.f1;
    CPy_INCREF(cpy_r_r321);
    CPy_DECREF(cpy_r_r313.f0);
    CPy_DECREF(cpy_r_r313.f1);
    cpy_r_r322 = CPyDict_SetItem(cpy_r_r316, cpy_r_r317, cpy_r_r321);
    CPy_DECREF(cpy_r_r321);
    cpy_r_r323 = cpy_r_r322 >= 0;
    if (unlikely(!cpy_r_r323)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 112, CPyStatic_generic_ops___globals);
        goto CPyL453;
    }
    cpy_r_r324 = CPyStatic_generic_ops___globals;
    cpy_r_r325 = CPyStatics[1628]; /* 'op' */
    cpy_r_r326 = CPyDict_GetItem(cpy_r_r324, cpy_r_r325);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 114, CPyStatic_generic_ops___globals);
        goto CPyL453;
    }
    if (likely(PyUnicode_Check(cpy_r_r326)))
        cpy_r_r327 = cpy_r_r326;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 114, CPyStatic_generic_ops___globals, "str", cpy_r_r326);
        goto CPyL453;
    }
    cpy_r_r328 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r328 == NULL)) {
        goto CPyL455;
    } else
        goto CPyL97;
CPyL95: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r329 = 0;
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 115, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r330 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r330 == NULL)) {
        goto CPyL456;
    } else
        goto CPyL100;
CPyL98: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r331 = 0;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 115, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r332 = PyList_New(2);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 115, CPyStatic_generic_ops___globals);
        goto CPyL457;
    }
    cpy_r_r333 = (CPyPtr)&((PyListObject *)cpy_r_r332)->ob_item;
    cpy_r_r334 = *(CPyPtr *)cpy_r_r333;
    CPy_INCREF(cpy_r_r328);
    *(PyObject * *)cpy_r_r334 = cpy_r_r328;
    cpy_r_r335 = cpy_r_r334 + 8;
    CPy_INCREF(cpy_r_r330);
    *(PyObject * *)cpy_r_r335 = cpy_r_r330;
    cpy_r_r336 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r336 == NULL)) {
        goto CPyL458;
    } else
        goto CPyL104;
CPyL102: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r337 = 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 116, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r338 = CPyStatic_generic_ops___globals;
    cpy_r_r339 = CPyStatics[8802]; /* 'c_function' */
    cpy_r_r340 = CPyDict_GetItem(cpy_r_r338, cpy_r_r339);
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 118, CPyStatic_generic_ops___globals);
        goto CPyL459;
    }
    if (likely(PyUnicode_Check(cpy_r_r340)))
        cpy_r_r341 = cpy_r_r340;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 118, CPyStatic_generic_ops___globals, "str", cpy_r_r340);
        goto CPyL459;
    }
    cpy_r_r342 = NULL;
    cpy_r_r343 = NULL;
    cpy_r_r344 = NULL;
    cpy_r_r345 = NULL;
    cpy_r_r346 = NULL;
    cpy_r_r347 = 2;
    cpy_r_r348 = CPyDef_registry___binary_op(cpy_r_r327, cpy_r_r332, cpy_r_r336, cpy_r_r341, 2, cpy_r_r342, cpy_r_r343, cpy_r_r344, cpy_r_r345, cpy_r_r346, cpy_r_r347, 0);
    CPy_DECREF(cpy_r_r327);
    CPy_DECREF(cpy_r_r332);
    CPy_DECREF(cpy_r_r341);
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 113, CPyStatic_generic_ops___globals);
        goto CPyL453;
    } else
        goto CPyL460;
CPyL107: ;
    cpy_r_r349 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r349)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 112, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r350 = CPyStatics[8799]; /* 'CPyNumber_Power' */
    cpy_r_r351.f0 = 4;
    cpy_r_r351.f1 = cpy_r_r350;
    CPyTagged_INCREF(cpy_r_r351.f0);
    CPy_INCREF(cpy_r_r351.f1);
    cpy_r_r352 = CPyStatics[8803]; /* 'PyNumber_Power' */
    cpy_r_r353.f0 = 6;
    cpy_r_r353.f1 = cpy_r_r352;
    CPyTagged_INCREF(cpy_r_r353.f0);
    CPy_INCREF(cpy_r_r353.f1);
    cpy_r_r354.f0 = cpy_r_r351;
    cpy_r_r354.f1 = cpy_r_r353;
    CPyTagged_INCREF(cpy_r_r354.f0.f0);
    CPy_INCREF(cpy_r_r354.f0.f1);
    CPyTagged_INCREF(cpy_r_r354.f1.f0);
    CPy_INCREF(cpy_r_r354.f1.f1);
    CPyTagged_DECREF(cpy_r_r351.f0);
    CPy_DECREF(cpy_r_r351.f1);
    CPyTagged_DECREF(cpy_r_r353.f0);
    CPy_DECREF(cpy_r_r353.f1);
    cpy_r_r355 = PyTuple_New(2);
    if (unlikely(cpy_r_r355 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10748 = PyTuple_New(2);
    if (unlikely(__tmp10748 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10749 = CPyTagged_StealAsObject(cpy_r_r354.f0.f0);
    PyTuple_SET_ITEM(__tmp10748, 0, __tmp10749);
    PyObject *__tmp10750 = cpy_r_r354.f0.f1;
    PyTuple_SET_ITEM(__tmp10748, 1, __tmp10750);
    PyTuple_SET_ITEM(cpy_r_r355, 0, __tmp10748);
    PyObject *__tmp10751 = PyTuple_New(2);
    if (unlikely(__tmp10751 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10752 = CPyTagged_StealAsObject(cpy_r_r354.f1.f0);
    PyTuple_SET_ITEM(__tmp10751, 0, __tmp10752);
    PyObject *__tmp10753 = cpy_r_r354.f1.f1;
    PyTuple_SET_ITEM(__tmp10751, 1, __tmp10753);
    PyTuple_SET_ITEM(cpy_r_r355, 1, __tmp10751);
    cpy_r_r356 = PyObject_GetIter(cpy_r_r355);
    CPy_DECREF(cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 122, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
CPyL109: ;
    cpy_r_r357 = PyIter_Next(cpy_r_r356);
    if (cpy_r_r357 == NULL) goto CPyL461;
    PyObject *__tmp10754;
    if (unlikely(!(PyTuple_Check(cpy_r_r357) && PyTuple_GET_SIZE(cpy_r_r357) == 2))) {
        __tmp10754 = NULL;
        goto __LL10755;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r357, 0))))
        __tmp10754 = PyTuple_GET_ITEM(cpy_r_r357, 0);
    else {
        __tmp10754 = NULL;
    }
    if (__tmp10754 == NULL) goto __LL10755;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r357, 1))))
        __tmp10754 = PyTuple_GET_ITEM(cpy_r_r357, 1);
    else {
        __tmp10754 = NULL;
    }
    if (__tmp10754 == NULL) goto __LL10755;
    __tmp10754 = cpy_r_r357;
__LL10755: ;
    if (unlikely(__tmp10754 == NULL)) {
        CPy_TypeError("tuple[int, str]", cpy_r_r357); cpy_r_r358 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp10756 = PyTuple_GET_ITEM(cpy_r_r357, 0);
        CPyTagged __tmp10757;
        if (likely(PyLong_Check(__tmp10756)))
            __tmp10757 = CPyTagged_FromObject(__tmp10756);
        else {
            CPy_TypeError("int", __tmp10756); __tmp10757 = CPY_INT_TAG;
        }
        cpy_r_r358.f0 = __tmp10757;
        PyObject *__tmp10758 = PyTuple_GET_ITEM(cpy_r_r357, 1);
        CPy_INCREF(__tmp10758);
        PyObject *__tmp10759;
        if (likely(PyUnicode_Check(__tmp10758)))
            __tmp10759 = __tmp10758;
        else {
            CPy_TypeError("str", __tmp10758); 
            __tmp10759 = NULL;
        }
        cpy_r_r358.f1 = __tmp10759;
    }
    CPy_DECREF(cpy_r_r357);
    if (unlikely(cpy_r_r358.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 122, CPyStatic_generic_ops___globals);
        goto CPyL462;
    }
    cpy_r_r359 = CPyStatic_generic_ops___globals;
    cpy_r_r360 = CPyStatics[8804]; /* 'arg_count' */
    cpy_r_r361 = CPyStatic_generic_ops___globals;
    cpy_r_r362 = CPyStatics[8802]; /* 'c_function' */
    cpy_r_r363 = cpy_r_r358.f0;
    CPyTagged_INCREF(cpy_r_r363);
    cpy_r_r364 = CPyTagged_StealAsObject(cpy_r_r363);
    cpy_r_r365 = CPyDict_SetItem(cpy_r_r359, cpy_r_r360, cpy_r_r364);
    CPy_DECREF(cpy_r_r364);
    cpy_r_r366 = cpy_r_r365 >= 0;
    if (unlikely(!cpy_r_r366)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 122, CPyStatic_generic_ops___globals);
        goto CPyL463;
    }
    cpy_r_r367 = cpy_r_r358.f1;
    CPy_INCREF(cpy_r_r367);
    CPyTagged_DECREF(cpy_r_r358.f0);
    CPy_DECREF(cpy_r_r358.f1);
    cpy_r_r368 = CPyDict_SetItem(cpy_r_r361, cpy_r_r362, cpy_r_r367);
    CPy_DECREF(cpy_r_r367);
    cpy_r_r369 = cpy_r_r368 >= 0;
    if (unlikely(!cpy_r_r369)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 122, CPyStatic_generic_ops___globals);
        goto CPyL462;
    }
    cpy_r_r370 = CPyStatics[8805]; /* 'builtins.pow' */
    cpy_r_r371 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r371 == NULL)) {
        goto CPyL464;
    } else
        goto CPyL116;
CPyL114: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r372 = 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 125, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL116: ;
    cpy_r_r373 = PyList_New(1);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 125, CPyStatic_generic_ops___globals);
        goto CPyL462;
    }
    cpy_r_r374 = (CPyPtr)&((PyListObject *)cpy_r_r373)->ob_item;
    cpy_r_r375 = *(CPyPtr *)cpy_r_r374;
    CPy_INCREF(cpy_r_r371);
    *(PyObject * *)cpy_r_r375 = cpy_r_r371;
    cpy_r_r376 = CPyStatic_generic_ops___globals;
    cpy_r_r377 = CPyStatics[8804]; /* 'arg_count' */
    cpy_r_r378 = CPyDict_GetItem(cpy_r_r376, cpy_r_r377);
    if (unlikely(cpy_r_r378 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 125, CPyStatic_generic_ops___globals);
        goto CPyL465;
    }
    if (likely(PyLong_Check(cpy_r_r378)))
        cpy_r_r379 = CPyTagged_FromObject(cpy_r_r378);
    else {
        CPy_TypeError("int", cpy_r_r378); cpy_r_r379 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r378);
    if (unlikely(cpy_r_r379 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 125, CPyStatic_generic_ops___globals);
        goto CPyL465;
    }
    cpy_r_r380 = CPySequence_Multiply(cpy_r_r373, cpy_r_r379);
    CPy_DECREF(cpy_r_r373);
    CPyTagged_DECREF(cpy_r_r379);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 125, CPyStatic_generic_ops___globals);
        goto CPyL462;
    }
    cpy_r_r381 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r381 == NULL)) {
        goto CPyL466;
    } else
        goto CPyL123;
CPyL121: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r382 = 0;
    if (unlikely(!cpy_r_r382)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 126, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL123: ;
    cpy_r_r383 = CPyStatic_generic_ops___globals;
    cpy_r_r384 = CPyStatics[8802]; /* 'c_function' */
    cpy_r_r385 = CPyDict_GetItem(cpy_r_r383, cpy_r_r384);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 128, CPyStatic_generic_ops___globals);
        goto CPyL467;
    }
    if (likely(PyUnicode_Check(cpy_r_r385)))
        cpy_r_r386 = cpy_r_r385;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 128, CPyStatic_generic_ops___globals, "str", cpy_r_r385);
        goto CPyL467;
    }
    cpy_r_r387 = NULL;
    cpy_r_r388 = NULL;
    cpy_r_r389 = NULL;
    cpy_r_r390 = NULL;
    cpy_r_r391 = NULL;
    cpy_r_r392 = 2;
    cpy_r_r393 = CPyDef_registry___function_op(cpy_r_r370, cpy_r_r380, cpy_r_r381, cpy_r_r386, 2, cpy_r_r387, cpy_r_r388, cpy_r_r389, cpy_r_r390, cpy_r_r391, cpy_r_r392, 0);
    CPy_DECREF(cpy_r_r380);
    CPy_DECREF(cpy_r_r386);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 123, CPyStatic_generic_ops___globals);
        goto CPyL462;
    } else
        goto CPyL468;
CPyL126: ;
    cpy_r_r394 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 122, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r395 = CPyStatics[867]; /* 'in' */
    cpy_r_r396 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r396 != NULL)) goto CPyL130;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r397 = 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 134, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r398 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r398 != NULL)) goto CPyL133;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r399 = 0;
    if (unlikely(!cpy_r_r399)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 134, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r400 = PyList_New(2);
    if (unlikely(cpy_r_r400 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 134, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r401 = (CPyPtr)&((PyListObject *)cpy_r_r400)->ob_item;
    cpy_r_r402 = *(CPyPtr *)cpy_r_r401;
    CPy_INCREF(cpy_r_r396);
    *(PyObject * *)cpy_r_r402 = cpy_r_r396;
    cpy_r_r403 = cpy_r_r402 + 8;
    CPy_INCREF(cpy_r_r398);
    *(PyObject * *)cpy_r_r403 = cpy_r_r398;
    cpy_r_r404 = CPyStatic_generic_ops___globals;
    cpy_r_r405 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r406 = CPyDict_GetItem(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 135, CPyStatic_generic_ops___globals);
        goto CPyL469;
    }
    if (likely(Py_TYPE(cpy_r_r406) == CPyType_rtypes___RPrimitive))
        cpy_r_r407 = cpy_r_r406;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 135, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r406);
        goto CPyL469;
    }
    cpy_r_r408 = CPyStatics[8806]; /* 'PySequence_Contains' */
    cpy_r_r409 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r409 == NULL)) {
        goto CPyL470;
    } else
        goto CPyL139;
CPyL137: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r410 = 0;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 138, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL139: ;
    cpy_r_r411 = PyList_New(2);
    if (unlikely(cpy_r_r411 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 139, CPyStatic_generic_ops___globals);
        goto CPyL471;
    }
    cpy_r_r412 = CPyStatics[9016]; /* 1 */
    cpy_r_r413 = CPyStatics[9015]; /* 0 */
    cpy_r_r414 = (CPyPtr)&((PyListObject *)cpy_r_r411)->ob_item;
    cpy_r_r415 = *(CPyPtr *)cpy_r_r414;
    CPy_INCREF(cpy_r_r412);
    *(PyObject * *)cpy_r_r415 = cpy_r_r412;
    cpy_r_r416 = cpy_r_r415 + 8;
    CPy_INCREF(cpy_r_r413);
    *(PyObject * *)cpy_r_r416 = cpy_r_r413;
    cpy_r_r417 = NULL;
    cpy_r_r418 = NULL;
    cpy_r_r419 = NULL;
    cpy_r_r420 = 2;
    cpy_r_r421 = CPyDef_registry___binary_op(cpy_r_r395, cpy_r_r400, cpy_r_r407, cpy_r_r408, 20, cpy_r_r417, cpy_r_r409, cpy_r_r411, cpy_r_r418, cpy_r_r419, cpy_r_r420, 0);
    CPy_DECREF(cpy_r_r400);
    CPy_DECREF(cpy_r_r407);
    CPy_DECREF(cpy_r_r411);
    if (unlikely(cpy_r_r421 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 132, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL472;
CPyL141: ;
    cpy_r_r422 = CPyStatics[1198]; /* '-' */
    cpy_r_r423 = CPyStatics[8807]; /* 'PyNumber_Negative' */
    cpy_r_r424.f0 = cpy_r_r422;
    cpy_r_r424.f1 = cpy_r_r423;
    CPy_INCREF(cpy_r_r424.f0);
    CPy_INCREF(cpy_r_r424.f1);
    cpy_r_r425 = CPyStatics[886]; /* '+' */
    cpy_r_r426 = CPyStatics[8808]; /* 'PyNumber_Positive' */
    cpy_r_r427.f0 = cpy_r_r425;
    cpy_r_r427.f1 = cpy_r_r426;
    CPy_INCREF(cpy_r_r427.f0);
    CPy_INCREF(cpy_r_r427.f1);
    cpy_r_r428 = CPyStatics[1602]; /* '~' */
    cpy_r_r429 = CPyStatics[8809]; /* 'PyNumber_Invert' */
    cpy_r_r430.f0 = cpy_r_r428;
    cpy_r_r430.f1 = cpy_r_r429;
    CPy_INCREF(cpy_r_r430.f0);
    CPy_INCREF(cpy_r_r430.f1);
    cpy_r_r431 = PyList_New(3);
    if (unlikely(cpy_r_r431 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 146, CPyStatic_generic_ops___globals);
        goto CPyL473;
    }
    cpy_r_r432 = PyTuple_New(2);
    if (unlikely(cpy_r_r432 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10760 = cpy_r_r424.f0;
    PyTuple_SET_ITEM(cpy_r_r432, 0, __tmp10760);
    PyObject *__tmp10761 = cpy_r_r424.f1;
    PyTuple_SET_ITEM(cpy_r_r432, 1, __tmp10761);
    cpy_r_r433 = PyTuple_New(2);
    if (unlikely(cpy_r_r433 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10762 = cpy_r_r427.f0;
    PyTuple_SET_ITEM(cpy_r_r433, 0, __tmp10762);
    PyObject *__tmp10763 = cpy_r_r427.f1;
    PyTuple_SET_ITEM(cpy_r_r433, 1, __tmp10763);
    cpy_r_r434 = PyTuple_New(2);
    if (unlikely(cpy_r_r434 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10764 = cpy_r_r430.f0;
    PyTuple_SET_ITEM(cpy_r_r434, 0, __tmp10764);
    PyObject *__tmp10765 = cpy_r_r430.f1;
    PyTuple_SET_ITEM(cpy_r_r434, 1, __tmp10765);
    cpy_r_r435 = (CPyPtr)&((PyListObject *)cpy_r_r431)->ob_item;
    cpy_r_r436 = *(CPyPtr *)cpy_r_r435;
    *(PyObject * *)cpy_r_r436 = cpy_r_r432;
    cpy_r_r437 = cpy_r_r436 + 8;
    *(PyObject * *)cpy_r_r437 = cpy_r_r433;
    cpy_r_r438 = cpy_r_r436 + 16;
    *(PyObject * *)cpy_r_r438 = cpy_r_r434;
    cpy_r_r439 = 0;
CPyL143: ;
    cpy_r_r440 = (CPyPtr)&((PyVarObject *)cpy_r_r431)->ob_size;
    cpy_r_r441 = *(int64_t *)cpy_r_r440;
    cpy_r_r442 = cpy_r_r441 << 1;
    cpy_r_r443 = (Py_ssize_t)cpy_r_r439 < (Py_ssize_t)cpy_r_r442;
    if (!cpy_r_r443) goto CPyL474;
    cpy_r_r444 = CPyList_GetItemUnsafe(cpy_r_r431, cpy_r_r439);
    cpy_r_r445 = CPyStatic_generic_ops___globals;
    cpy_r_r446 = CPyStatics[1628]; /* 'op' */
    cpy_r_r447 = CPyStatic_generic_ops___globals;
    cpy_r_r448 = CPyStatics[8783]; /* 'funcname' */
    PyObject *__tmp10766;
    if (unlikely(!(PyTuple_Check(cpy_r_r444) && PyTuple_GET_SIZE(cpy_r_r444) == 2))) {
        __tmp10766 = NULL;
        goto __LL10767;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r444, 0))))
        __tmp10766 = PyTuple_GET_ITEM(cpy_r_r444, 0);
    else {
        __tmp10766 = NULL;
    }
    if (__tmp10766 == NULL) goto __LL10767;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r444, 1))))
        __tmp10766 = PyTuple_GET_ITEM(cpy_r_r444, 1);
    else {
        __tmp10766 = NULL;
    }
    if (__tmp10766 == NULL) goto __LL10767;
    __tmp10766 = cpy_r_r444;
__LL10767: ;
    if (unlikely(__tmp10766 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r444); cpy_r_r449 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10768 = PyTuple_GET_ITEM(cpy_r_r444, 0);
        CPy_INCREF(__tmp10768);
        PyObject *__tmp10769;
        if (likely(PyUnicode_Check(__tmp10768)))
            __tmp10769 = __tmp10768;
        else {
            CPy_TypeError("str", __tmp10768); 
            __tmp10769 = NULL;
        }
        cpy_r_r449.f0 = __tmp10769;
        PyObject *__tmp10770 = PyTuple_GET_ITEM(cpy_r_r444, 1);
        CPy_INCREF(__tmp10770);
        PyObject *__tmp10771;
        if (likely(PyUnicode_Check(__tmp10770)))
            __tmp10771 = __tmp10770;
        else {
            CPy_TypeError("str", __tmp10770); 
            __tmp10771 = NULL;
        }
        cpy_r_r449.f1 = __tmp10771;
    }
    CPy_DECREF(cpy_r_r444);
    if (unlikely(cpy_r_r449.f0 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 146, CPyStatic_generic_ops___globals);
        goto CPyL475;
    }
    cpy_r_r450 = cpy_r_r449.f0;
    CPy_INCREF(cpy_r_r450);
    cpy_r_r451 = CPyDict_SetItem(cpy_r_r445, cpy_r_r446, cpy_r_r450);
    CPy_DECREF(cpy_r_r450);
    cpy_r_r452 = cpy_r_r451 >= 0;
    if (unlikely(!cpy_r_r452)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 146, CPyStatic_generic_ops___globals);
        goto CPyL476;
    }
    cpy_r_r453 = cpy_r_r449.f1;
    CPy_INCREF(cpy_r_r453);
    CPy_DECREF(cpy_r_r449.f0);
    CPy_DECREF(cpy_r_r449.f1);
    cpy_r_r454 = CPyDict_SetItem(cpy_r_r447, cpy_r_r448, cpy_r_r453);
    CPy_DECREF(cpy_r_r453);
    cpy_r_r455 = cpy_r_r454 >= 0;
    if (unlikely(!cpy_r_r455)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 146, CPyStatic_generic_ops___globals);
        goto CPyL475;
    }
    cpy_r_r456 = CPyStatic_generic_ops___globals;
    cpy_r_r457 = CPyStatics[1628]; /* 'op' */
    cpy_r_r458 = CPyDict_GetItem(cpy_r_r456, cpy_r_r457);
    if (unlikely(cpy_r_r458 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 152, CPyStatic_generic_ops___globals);
        goto CPyL475;
    }
    if (likely(PyUnicode_Check(cpy_r_r458)))
        cpy_r_r459 = cpy_r_r458;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 152, CPyStatic_generic_ops___globals, "str", cpy_r_r458);
        goto CPyL475;
    }
    cpy_r_r460 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r460 == NULL)) {
        goto CPyL477;
    } else
        goto CPyL152;
CPyL150: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 153, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL152: ;
    cpy_r_r462 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r462 == NULL)) {
        goto CPyL478;
    } else
        goto CPyL155;
CPyL153: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r463 = 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 154, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL155: ;
    cpy_r_r464 = CPyStatic_generic_ops___globals;
    cpy_r_r465 = CPyStatics[8783]; /* 'funcname' */
    cpy_r_r466 = CPyDict_GetItem(cpy_r_r464, cpy_r_r465);
    if (unlikely(cpy_r_r466 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 155, CPyStatic_generic_ops___globals);
        goto CPyL479;
    }
    if (likely(PyUnicode_Check(cpy_r_r466)))
        cpy_r_r467 = cpy_r_r466;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 155, CPyStatic_generic_ops___globals, "str", cpy_r_r466);
        goto CPyL479;
    }
    cpy_r_r468 = NULL;
    cpy_r_r469 = NULL;
    cpy_r_r470 = NULL;
    cpy_r_r471 = NULL;
    cpy_r_r472 = 2;
    cpy_r_r473 = CPyDef_registry___unary_op(cpy_r_r459, cpy_r_r460, cpy_r_r462, cpy_r_r467, 2, cpy_r_r468, cpy_r_r469, cpy_r_r470, cpy_r_r471, cpy_r_r472, 0);
    CPy_DECREF(cpy_r_r459);
    CPy_DECREF(cpy_r_r467);
    if (unlikely(cpy_r_r473 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 151, CPyStatic_generic_ops___globals);
        goto CPyL475;
    } else
        goto CPyL480;
CPyL158: ;
    cpy_r_r474 = cpy_r_r439 + 2;
    cpy_r_r439 = cpy_r_r474;
    goto CPyL143;
CPyL159: ;
    cpy_r_r475 = CPyStatics[869]; /* 'not' */
    cpy_r_r476 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r476 != NULL)) goto CPyL162;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r477 = 0;
    if (unlikely(!cpy_r_r477)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 162, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL162: ;
    cpy_r_r478 = CPyStatic_generic_ops___globals;
    cpy_r_r479 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r480 = CPyDict_GetItem(cpy_r_r478, cpy_r_r479);
    if (unlikely(cpy_r_r480 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 163, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    if (likely(Py_TYPE(cpy_r_r480) == CPyType_rtypes___RPrimitive))
        cpy_r_r481 = cpy_r_r480;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 163, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r480);
        goto CPyL419;
    }
    cpy_r_r482 = CPyStatics[8810]; /* 'PyObject_Not' */
    cpy_r_r483 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r483 == NULL)) {
        goto CPyL481;
    } else
        goto CPyL167;
CPyL165: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r484 = 0;
    if (unlikely(!cpy_r_r484)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 166, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r485 = NULL;
    cpy_r_r486 = NULL;
    cpy_r_r487 = NULL;
    cpy_r_r488 = 2;
    cpy_r_r489 = CPyDef_registry___unary_op(cpy_r_r475, cpy_r_r476, cpy_r_r481, cpy_r_r482, 20, cpy_r_r483, cpy_r_r485, cpy_r_r486, cpy_r_r487, cpy_r_r488, 0);
    CPy_DECREF(cpy_r_r481);
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 160, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL482;
CPyL168: ;
    cpy_r_r490 = CPyStatics[8546]; /* 'builtins.abs' */
    cpy_r_r491 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r491 != NULL)) goto CPyL171;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r492 = 0;
    if (unlikely(!cpy_r_r492)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 173, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL171: ;
    cpy_r_r493 = PyList_New(1);
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 173, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r494 = (CPyPtr)&((PyListObject *)cpy_r_r493)->ob_item;
    cpy_r_r495 = *(CPyPtr *)cpy_r_r494;
    CPy_INCREF(cpy_r_r491);
    *(PyObject * *)cpy_r_r495 = cpy_r_r491;
    cpy_r_r496 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r496 == NULL)) {
        goto CPyL483;
    } else
        goto CPyL175;
CPyL173: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r497 = 0;
    if (unlikely(!cpy_r_r497)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 174, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL175: ;
    cpy_r_r498 = CPyStatics[8811]; /* 'PyNumber_Absolute' */
    cpy_r_r499 = NULL;
    cpy_r_r500 = NULL;
    cpy_r_r501 = NULL;
    cpy_r_r502 = NULL;
    cpy_r_r503 = NULL;
    cpy_r_r504 = 2;
    cpy_r_r505 = CPyDef_registry___function_op(cpy_r_r490, cpy_r_r493, cpy_r_r496, cpy_r_r498, 2, cpy_r_r499, cpy_r_r500, cpy_r_r501, cpy_r_r502, cpy_r_r503, cpy_r_r504, 0);
    CPy_DECREF(cpy_r_r493);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 171, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL484;
CPyL176: ;
    cpy_r_r506 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r507 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r507 != NULL)) goto CPyL179;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r508 = 0;
    if (unlikely(!cpy_r_r508)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 183, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL179: ;
    cpy_r_r509 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r509 != NULL)) goto CPyL182;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r510 = 0;
    if (unlikely(!cpy_r_r510)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 183, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL182: ;
    cpy_r_r511 = PyList_New(2);
    if (unlikely(cpy_r_r511 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 183, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r512 = (CPyPtr)&((PyListObject *)cpy_r_r511)->ob_item;
    cpy_r_r513 = *(CPyPtr *)cpy_r_r512;
    CPy_INCREF(cpy_r_r507);
    *(PyObject * *)cpy_r_r513 = cpy_r_r507;
    cpy_r_r514 = cpy_r_r513 + 8;
    CPy_INCREF(cpy_r_r509);
    *(PyObject * *)cpy_r_r514 = cpy_r_r509;
    cpy_r_r515 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r515 == NULL)) {
        goto CPyL485;
    } else
        goto CPyL186;
CPyL184: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r516 = 0;
    if (unlikely(!cpy_r_r516)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 184, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL186: ;
    cpy_r_r517 = CPyStatics[8812]; /* 'PyObject_GetItem' */
    cpy_r_r518 = NULL;
    cpy_r_r519 = NULL;
    cpy_r_r520 = NULL;
    cpy_r_r521 = NULL;
    cpy_r_r522 = NULL;
    cpy_r_r523 = 2;
    cpy_r_r524 = CPyDef_registry___method_op(cpy_r_r506, cpy_r_r511, cpy_r_r515, cpy_r_r517, 2, cpy_r_r518, cpy_r_r519, cpy_r_r520, cpy_r_r521, cpy_r_r522, cpy_r_r523, 0);
    CPy_DECREF(cpy_r_r511);
    if (unlikely(cpy_r_r524 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 181, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL486;
CPyL187: ;
    cpy_r_r525 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r526 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r526 != NULL)) goto CPyL190;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r527 = 0;
    if (unlikely(!cpy_r_r527)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 193, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL190: ;
    cpy_r_r528 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r528 != NULL)) goto CPyL193;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r529 = 0;
    if (unlikely(!cpy_r_r529)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 193, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL193: ;
    cpy_r_r530 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r530 != NULL)) goto CPyL196;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r531 = 0;
    if (unlikely(!cpy_r_r531)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 193, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL196: ;
    cpy_r_r532 = PyList_New(3);
    if (unlikely(cpy_r_r532 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 193, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r533 = (CPyPtr)&((PyListObject *)cpy_r_r532)->ob_item;
    cpy_r_r534 = *(CPyPtr *)cpy_r_r533;
    CPy_INCREF(cpy_r_r526);
    *(PyObject * *)cpy_r_r534 = cpy_r_r526;
    cpy_r_r535 = cpy_r_r534 + 8;
    CPy_INCREF(cpy_r_r528);
    *(PyObject * *)cpy_r_r535 = cpy_r_r528;
    cpy_r_r536 = cpy_r_r534 + 16;
    CPy_INCREF(cpy_r_r530);
    *(PyObject * *)cpy_r_r536 = cpy_r_r530;
    cpy_r_r537 = CPyStatic_generic_ops___globals;
    cpy_r_r538 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r539 = CPyDict_GetItem(cpy_r_r537, cpy_r_r538);
    if (unlikely(cpy_r_r539 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 194, CPyStatic_generic_ops___globals);
        goto CPyL487;
    }
    if (likely(Py_TYPE(cpy_r_r539) == CPyType_rtypes___RPrimitive))
        cpy_r_r540 = cpy_r_r539;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 194, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r539);
        goto CPyL487;
    }
    cpy_r_r541 = CPyStatics[8813]; /* 'PyObject_SetItem' */
    cpy_r_r542 = NULL;
    cpy_r_r543 = NULL;
    cpy_r_r544 = NULL;
    cpy_r_r545 = NULL;
    cpy_r_r546 = NULL;
    cpy_r_r547 = 2;
    cpy_r_r548 = CPyDef_registry___method_op(cpy_r_r525, cpy_r_r532, cpy_r_r540, cpy_r_r541, 20, cpy_r_r542, cpy_r_r543, cpy_r_r544, cpy_r_r545, cpy_r_r546, cpy_r_r547, 0);
    CPy_DECREF(cpy_r_r532);
    CPy_DECREF(cpy_r_r540);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 191, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL488;
CPyL200: ;
    cpy_r_r549 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r550 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r550 != NULL)) goto CPyL203;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r551 = 0;
    if (unlikely(!cpy_r_r551)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 203, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL203: ;
    cpy_r_r552 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r552 != NULL)) goto CPyL206;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r553 = 0;
    if (unlikely(!cpy_r_r553)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 203, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL206: ;
    cpy_r_r554 = PyList_New(2);
    if (unlikely(cpy_r_r554 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 203, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r555 = (CPyPtr)&((PyListObject *)cpy_r_r554)->ob_item;
    cpy_r_r556 = *(CPyPtr *)cpy_r_r555;
    CPy_INCREF(cpy_r_r550);
    *(PyObject * *)cpy_r_r556 = cpy_r_r550;
    cpy_r_r557 = cpy_r_r556 + 8;
    CPy_INCREF(cpy_r_r552);
    *(PyObject * *)cpy_r_r557 = cpy_r_r552;
    cpy_r_r558 = CPyStatic_generic_ops___globals;
    cpy_r_r559 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r560 = CPyDict_GetItem(cpy_r_r558, cpy_r_r559);
    if (unlikely(cpy_r_r560 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 204, CPyStatic_generic_ops___globals);
        goto CPyL489;
    }
    if (likely(Py_TYPE(cpy_r_r560) == CPyType_rtypes___RPrimitive))
        cpy_r_r561 = cpy_r_r560;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 204, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r560);
        goto CPyL489;
    }
    cpy_r_r562 = CPyStatics[8814]; /* 'PyObject_DelItem' */
    cpy_r_r563 = NULL;
    cpy_r_r564 = NULL;
    cpy_r_r565 = NULL;
    cpy_r_r566 = NULL;
    cpy_r_r567 = NULL;
    cpy_r_r568 = 2;
    cpy_r_r569 = CPyDef_registry___method_op(cpy_r_r549, cpy_r_r554, cpy_r_r561, cpy_r_r562, 20, cpy_r_r563, cpy_r_r564, cpy_r_r565, cpy_r_r566, cpy_r_r567, cpy_r_r568, 0);
    CPy_DECREF(cpy_r_r554);
    CPy_DECREF(cpy_r_r561);
    if (unlikely(cpy_r_r569 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 201, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL490;
CPyL210: ;
    cpy_r_r570 = CPyStatics[8815]; /* 'builtins.hash' */
    cpy_r_r571 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r571 != NULL)) goto CPyL213;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r572 = 0;
    if (unlikely(!cpy_r_r572)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 213, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r573 = PyList_New(1);
    if (unlikely(cpy_r_r573 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 213, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r574 = (CPyPtr)&((PyListObject *)cpy_r_r573)->ob_item;
    cpy_r_r575 = *(CPyPtr *)cpy_r_r574;
    CPy_INCREF(cpy_r_r571);
    *(PyObject * *)cpy_r_r575 = cpy_r_r571;
    cpy_r_r576 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r576 == NULL)) {
        goto CPyL491;
    } else
        goto CPyL217;
CPyL215: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r577 = 0;
    if (unlikely(!cpy_r_r577)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 214, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL217: ;
    cpy_r_r578 = CPyStatics[8816]; /* 'CPyObject_Hash' */
    cpy_r_r579 = NULL;
    cpy_r_r580 = NULL;
    cpy_r_r581 = NULL;
    cpy_r_r582 = NULL;
    cpy_r_r583 = NULL;
    cpy_r_r584 = 2;
    cpy_r_r585 = CPY_INT_TAG;
    cpy_r_r586 = CPyDef_registry___function_op(cpy_r_r570, cpy_r_r573, cpy_r_r576, cpy_r_r578, 2, cpy_r_r579, cpy_r_r580, cpy_r_r581, cpy_r_r582, cpy_r_r583, cpy_r_r584, cpy_r_r585);
    CPy_DECREF(cpy_r_r573);
    if (unlikely(cpy_r_r586 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 211, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL492;
CPyL218: ;
    cpy_r_r587 = CPyStatics[8817]; /* 'builtins.getattr' */
    cpy_r_r588 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r588 != NULL)) goto CPyL221;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r589 = 0;
    if (unlikely(!cpy_r_r589)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 222, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL221: ;
    cpy_r_r590 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r590 != NULL)) goto CPyL224;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r591 = 0;
    if (unlikely(!cpy_r_r591)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 222, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL224: ;
    cpy_r_r592 = PyList_New(2);
    if (unlikely(cpy_r_r592 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 222, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r593 = (CPyPtr)&((PyListObject *)cpy_r_r592)->ob_item;
    cpy_r_r594 = *(CPyPtr *)cpy_r_r593;
    CPy_INCREF(cpy_r_r588);
    *(PyObject * *)cpy_r_r594 = cpy_r_r588;
    cpy_r_r595 = cpy_r_r594 + 8;
    CPy_INCREF(cpy_r_r590);
    *(PyObject * *)cpy_r_r595 = cpy_r_r590;
    cpy_r_r596 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r596 == NULL)) {
        goto CPyL493;
    } else
        goto CPyL228;
CPyL226: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r597 = 0;
    if (unlikely(!cpy_r_r597)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 223, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL228: ;
    cpy_r_r598 = CPyStatics[8818]; /* 'CPyObject_GetAttr' */
    cpy_r_r599 = NULL;
    cpy_r_r600 = NULL;
    cpy_r_r601 = NULL;
    cpy_r_r602 = NULL;
    cpy_r_r603 = NULL;
    cpy_r_r604 = 2;
    cpy_r_r605 = CPY_INT_TAG;
    cpy_r_r606 = CPyDef_registry___function_op(cpy_r_r587, cpy_r_r592, cpy_r_r596, cpy_r_r598, 2, cpy_r_r599, cpy_r_r600, cpy_r_r601, cpy_r_r602, cpy_r_r603, cpy_r_r604, cpy_r_r605);
    CPy_DECREF(cpy_r_r592);
    if (unlikely(cpy_r_r606 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 220, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r607 = CPyStatic_generic_ops___globals;
    cpy_r_r608 = CPyStatics[8394]; /* 'py_getattr_op' */
    cpy_r_r609 = CPyDict_SetItem(cpy_r_r607, cpy_r_r608, cpy_r_r606);
    CPy_DECREF(cpy_r_r606);
    cpy_r_r610 = cpy_r_r609 >= 0;
    if (unlikely(!cpy_r_r610)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 220, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r611 = CPyStatics[8817]; /* 'builtins.getattr' */
    cpy_r_r612 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r612 != NULL)) goto CPyL233;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r613 = 0;
    if (unlikely(!cpy_r_r613)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 231, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL233: ;
    cpy_r_r614 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r614 != NULL)) goto CPyL236;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r615 = 0;
    if (unlikely(!cpy_r_r615)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 231, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL236: ;
    cpy_r_r616 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r616 != NULL)) goto CPyL239;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r617 = 0;
    if (unlikely(!cpy_r_r617)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 231, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL239: ;
    cpy_r_r618 = PyList_New(3);
    if (unlikely(cpy_r_r618 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 231, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r619 = (CPyPtr)&((PyListObject *)cpy_r_r618)->ob_item;
    cpy_r_r620 = *(CPyPtr *)cpy_r_r619;
    CPy_INCREF(cpy_r_r612);
    *(PyObject * *)cpy_r_r620 = cpy_r_r612;
    cpy_r_r621 = cpy_r_r620 + 8;
    CPy_INCREF(cpy_r_r614);
    *(PyObject * *)cpy_r_r621 = cpy_r_r614;
    cpy_r_r622 = cpy_r_r620 + 16;
    CPy_INCREF(cpy_r_r616);
    *(PyObject * *)cpy_r_r622 = cpy_r_r616;
    cpy_r_r623 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r623 == NULL)) {
        goto CPyL494;
    } else
        goto CPyL243;
CPyL241: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r624 = 0;
    if (unlikely(!cpy_r_r624)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 232, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL243: ;
    cpy_r_r625 = CPyStatics[8819]; /* 'CPyObject_GetAttr3' */
    cpy_r_r626 = NULL;
    cpy_r_r627 = NULL;
    cpy_r_r628 = NULL;
    cpy_r_r629 = NULL;
    cpy_r_r630 = NULL;
    cpy_r_r631 = 2;
    cpy_r_r632 = CPY_INT_TAG;
    cpy_r_r633 = CPyDef_registry___function_op(cpy_r_r611, cpy_r_r618, cpy_r_r623, cpy_r_r625, 2, cpy_r_r626, cpy_r_r627, cpy_r_r628, cpy_r_r629, cpy_r_r630, cpy_r_r631, cpy_r_r632);
    CPy_DECREF(cpy_r_r618);
    if (unlikely(cpy_r_r633 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 229, CPyStatic_generic_ops___globals);
        goto CPyL419;
    } else
        goto CPyL495;
CPyL244: ;
    cpy_r_r634 = CPyStatics[8820]; /* 'builtins.setattr' */
    cpy_r_r635 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r635 != NULL)) goto CPyL247;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r636 = 0;
    if (unlikely(!cpy_r_r636)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 240, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r637 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r637 != NULL)) goto CPyL250;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r638 = 0;
    if (unlikely(!cpy_r_r638)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 240, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL250: ;
    cpy_r_r639 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r639 != NULL)) goto CPyL253;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r640 = 0;
    if (unlikely(!cpy_r_r640)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 240, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r641 = PyList_New(3);
    if (unlikely(cpy_r_r641 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 240, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r642 = (CPyPtr)&((PyListObject *)cpy_r_r641)->ob_item;
    cpy_r_r643 = *(CPyPtr *)cpy_r_r642;
    CPy_INCREF(cpy_r_r635);
    *(PyObject * *)cpy_r_r643 = cpy_r_r635;
    cpy_r_r644 = cpy_r_r643 + 8;
    CPy_INCREF(cpy_r_r637);
    *(PyObject * *)cpy_r_r644 = cpy_r_r637;
    cpy_r_r645 = cpy_r_r643 + 16;
    CPy_INCREF(cpy_r_r639);
    *(PyObject * *)cpy_r_r645 = cpy_r_r639;
    cpy_r_r646 = CPyStatic_generic_ops___globals;
    cpy_r_r647 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r648 = CPyDict_GetItem(cpy_r_r646, cpy_r_r647);
    if (unlikely(cpy_r_r648 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 241, CPyStatic_generic_ops___globals);
        goto CPyL496;
    }
    if (likely(Py_TYPE(cpy_r_r648) == CPyType_rtypes___RPrimitive))
        cpy_r_r649 = cpy_r_r648;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 241, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r648);
        goto CPyL496;
    }
    cpy_r_r650 = CPyStatics[8821]; /* 'PyObject_SetAttr' */
    cpy_r_r651 = NULL;
    cpy_r_r652 = NULL;
    cpy_r_r653 = NULL;
    cpy_r_r654 = NULL;
    cpy_r_r655 = NULL;
    cpy_r_r656 = 2;
    cpy_r_r657 = CPY_INT_TAG;
    cpy_r_r658 = CPyDef_registry___function_op(cpy_r_r634, cpy_r_r641, cpy_r_r649, cpy_r_r650, 20, cpy_r_r651, cpy_r_r652, cpy_r_r653, cpy_r_r654, cpy_r_r655, cpy_r_r656, cpy_r_r657);
    CPy_DECREF(cpy_r_r641);
    CPy_DECREF(cpy_r_r649);
    if (unlikely(cpy_r_r658 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 238, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r659 = CPyStatic_generic_ops___globals;
    cpy_r_r660 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r661 = CPyDict_SetItem(cpy_r_r659, cpy_r_r660, cpy_r_r658);
    CPy_DECREF(cpy_r_r658);
    cpy_r_r662 = cpy_r_r661 >= 0;
    if (unlikely(!cpy_r_r662)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 238, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r663 = CPyStatics[859]; /* 'builtins.hasattr' */
    cpy_r_r664 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r664 != NULL)) goto CPyL261;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r665 = 0;
    if (unlikely(!cpy_r_r665)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 249, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL261: ;
    cpy_r_r666 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r666 != NULL)) goto CPyL264;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r667 = 0;
    if (unlikely(!cpy_r_r667)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 249, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL264: ;
    cpy_r_r668 = PyList_New(2);
    if (unlikely(cpy_r_r668 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 249, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r669 = (CPyPtr)&((PyListObject *)cpy_r_r668)->ob_item;
    cpy_r_r670 = *(CPyPtr *)cpy_r_r669;
    CPy_INCREF(cpy_r_r664);
    *(PyObject * *)cpy_r_r670 = cpy_r_r664;
    cpy_r_r671 = cpy_r_r670 + 8;
    CPy_INCREF(cpy_r_r666);
    *(PyObject * *)cpy_r_r671 = cpy_r_r666;
    cpy_r_r672 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r672 == NULL)) {
        goto CPyL497;
    } else
        goto CPyL268;
CPyL266: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r673 = 0;
    if (unlikely(!cpy_r_r673)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 250, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL268: ;
    cpy_r_r674 = CPyStatics[8822]; /* 'PyObject_HasAttr' */
    cpy_r_r675 = NULL;
    cpy_r_r676 = NULL;
    cpy_r_r677 = NULL;
    cpy_r_r678 = NULL;
    cpy_r_r679 = NULL;
    cpy_r_r680 = 2;
    cpy_r_r681 = CPY_INT_TAG;
    cpy_r_r682 = CPyDef_registry___function_op(cpy_r_r663, cpy_r_r668, cpy_r_r672, cpy_r_r674, 0, cpy_r_r675, cpy_r_r676, cpy_r_r677, cpy_r_r678, cpy_r_r679, cpy_r_r680, cpy_r_r681);
    CPy_DECREF(cpy_r_r668);
    if (unlikely(cpy_r_r682 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 247, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r683 = CPyStatic_generic_ops___globals;
    cpy_r_r684 = CPyStatics[8158]; /* 'py_hasattr_op' */
    cpy_r_r685 = CPyDict_SetItem(cpy_r_r683, cpy_r_r684, cpy_r_r682);
    CPy_DECREF(cpy_r_r682);
    cpy_r_r686 = cpy_r_r685 >= 0;
    if (unlikely(!cpy_r_r686)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 247, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r687 = CPyStatics[8823]; /* 'builtins.delattr' */
    cpy_r_r688 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r688 != NULL)) goto CPyL273;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r689 = 0;
    if (unlikely(!cpy_r_r689)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 258, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL273: ;
    cpy_r_r690 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r690 != NULL)) goto CPyL276;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r691 = 0;
    if (unlikely(!cpy_r_r691)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 258, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL276: ;
    cpy_r_r692 = PyList_New(2);
    if (unlikely(cpy_r_r692 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 258, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r693 = (CPyPtr)&((PyListObject *)cpy_r_r692)->ob_item;
    cpy_r_r694 = *(CPyPtr *)cpy_r_r693;
    CPy_INCREF(cpy_r_r688);
    *(PyObject * *)cpy_r_r694 = cpy_r_r688;
    cpy_r_r695 = cpy_r_r694 + 8;
    CPy_INCREF(cpy_r_r690);
    *(PyObject * *)cpy_r_r695 = cpy_r_r690;
    cpy_r_r696 = CPyStatic_generic_ops___globals;
    cpy_r_r697 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r698 = CPyDict_GetItem(cpy_r_r696, cpy_r_r697);
    if (unlikely(cpy_r_r698 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 259, CPyStatic_generic_ops___globals);
        goto CPyL498;
    }
    if (likely(Py_TYPE(cpy_r_r698) == CPyType_rtypes___RPrimitive))
        cpy_r_r699 = cpy_r_r698;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 259, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r698);
        goto CPyL498;
    }
    cpy_r_r700 = CPyStatics[8824]; /* 'PyObject_DelAttr' */
    cpy_r_r701 = NULL;
    cpy_r_r702 = NULL;
    cpy_r_r703 = NULL;
    cpy_r_r704 = NULL;
    cpy_r_r705 = NULL;
    cpy_r_r706 = 2;
    cpy_r_r707 = CPY_INT_TAG;
    cpy_r_r708 = CPyDef_registry___function_op(cpy_r_r687, cpy_r_r692, cpy_r_r699, cpy_r_r700, 20, cpy_r_r701, cpy_r_r702, cpy_r_r703, cpy_r_r704, cpy_r_r705, cpy_r_r706, cpy_r_r707);
    CPy_DECREF(cpy_r_r692);
    CPy_DECREF(cpy_r_r699);
    if (unlikely(cpy_r_r708 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 256, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r709 = CPyStatic_generic_ops___globals;
    cpy_r_r710 = CPyStatics[8590]; /* 'py_delattr_op' */
    cpy_r_r711 = CPyDict_SetItem(cpy_r_r709, cpy_r_r710, cpy_r_r708);
    CPy_DECREF(cpy_r_r708);
    cpy_r_r712 = cpy_r_r711 >= 0;
    if (unlikely(!cpy_r_r712)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 256, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r713 = PyList_New(0);
    if (unlikely(cpy_r_r713 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 267, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r714 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r714 == NULL)) {
        goto CPyL499;
    } else
        goto CPyL285;
CPyL283: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r715 = 0;
    if (unlikely(!cpy_r_r715)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 268, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r716 = CPyStatics[8825]; /* 'PyObject_CallFunctionObjArgs' */
    cpy_r_r717 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r717 == NULL)) {
        goto CPyL500;
    } else
        goto CPyL288;
CPyL286: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r718 = 0;
    if (unlikely(!cpy_r_r718)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 271, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL288: ;
    cpy_r_r719 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r719 == NULL)) {
        goto CPyL501;
    } else
        goto CPyL291;
CPyL289: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r720 = 0;
    if (unlikely(!cpy_r_r720)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 272, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL291: ;
    cpy_r_r721.f0 = 0;
    cpy_r_r721.f1 = cpy_r_r719;
    CPyTagged_INCREF(cpy_r_r721.f0);
    CPy_INCREF(cpy_r_r721.f1);
    cpy_r_r722 = PyList_New(1);
    if (unlikely(cpy_r_r722 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 272, CPyStatic_generic_ops___globals);
        goto CPyL502;
    }
    cpy_r_r723 = PyTuple_New(2);
    if (unlikely(cpy_r_r723 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10772 = CPyTagged_StealAsObject(cpy_r_r721.f0);
    PyTuple_SET_ITEM(cpy_r_r723, 0, __tmp10772);
    PyObject *__tmp10773 = cpy_r_r721.f1;
    PyTuple_SET_ITEM(cpy_r_r723, 1, __tmp10773);
    cpy_r_r724 = (CPyPtr)&((PyListObject *)cpy_r_r722)->ob_item;
    cpy_r_r725 = *(CPyPtr *)cpy_r_r724;
    *(PyObject * *)cpy_r_r725 = cpy_r_r723;
    cpy_r_r726 = NULL;
    cpy_r_r727 = NULL;
    cpy_r_r728 = NULL;
    cpy_r_r729 = 2;
    cpy_r_r730 = CPyDef_registry___custom_op(cpy_r_r713, cpy_r_r714, cpy_r_r716, 2, cpy_r_r717, cpy_r_r726, cpy_r_r727, cpy_r_r722, cpy_r_r728, cpy_r_r729);
    CPy_DECREF(cpy_r_r713);
    CPy_DECREF(cpy_r_r722);
    if (unlikely(cpy_r_r730 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 266, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r731 = CPyStatic_generic_ops___globals;
    cpy_r_r732 = CPyStatics[8397]; /* 'py_call_op' */
    cpy_r_r733 = CPyDict_SetItem(cpy_r_r731, cpy_r_r732, cpy_r_r730);
    CPy_DECREF(cpy_r_r730);
    cpy_r_r734 = cpy_r_r733 >= 0;
    if (unlikely(!cpy_r_r734)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 266, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r735 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r735 != NULL)) goto CPyL297;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r736 = 0;
    if (unlikely(!cpy_r_r736)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 278, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL297: ;
    cpy_r_r737 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (likely(cpy_r_r737 != NULL)) goto CPyL300;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r738 = 0;
    if (unlikely(!cpy_r_r738)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 279, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL300: ;
    cpy_r_r739 = CPyStatic_generic_ops___globals;
    cpy_r_r740 = CPyStatics[8018]; /* 'c_size_t_rprimitive' */
    cpy_r_r741 = CPyDict_GetItem(cpy_r_r739, cpy_r_r740);
    if (unlikely(cpy_r_r741 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 280, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    if (likely(Py_TYPE(cpy_r_r741) == CPyType_rtypes___RPrimitive))
        cpy_r_r742 = cpy_r_r741;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 280, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r741);
        goto CPyL419;
    }
    cpy_r_r743 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r743 == NULL)) {
        goto CPyL503;
    } else
        goto CPyL305;
CPyL303: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r744 = 0;
    if (unlikely(!cpy_r_r744)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 281, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL305: ;
    cpy_r_r745 = PyList_New(4);
    if (unlikely(cpy_r_r745 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 277, CPyStatic_generic_ops___globals);
        goto CPyL504;
    }
    cpy_r_r746 = (CPyPtr)&((PyListObject *)cpy_r_r745)->ob_item;
    cpy_r_r747 = *(CPyPtr *)cpy_r_r746;
    CPy_INCREF(cpy_r_r735);
    *(PyObject * *)cpy_r_r747 = cpy_r_r735;
    cpy_r_r748 = cpy_r_r747 + 8;
    CPy_INCREF(cpy_r_r737);
    *(PyObject * *)cpy_r_r748 = cpy_r_r737;
    cpy_r_r749 = cpy_r_r747 + 16;
    *(PyObject * *)cpy_r_r749 = cpy_r_r742;
    cpy_r_r750 = cpy_r_r747 + 24;
    CPy_INCREF(cpy_r_r743);
    *(PyObject * *)cpy_r_r750 = cpy_r_r743;
    cpy_r_r751 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r751 == NULL)) {
        goto CPyL505;
    } else
        goto CPyL309;
CPyL307: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r752 = 0;
    if (unlikely(!cpy_r_r752)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 283, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL309: ;
    cpy_r_r753 = CPyStatics[8826]; /* '_PyObject_Vectorcall' */
    cpy_r_r754 = NULL;
    cpy_r_r755 = NULL;
    cpy_r_r756 = NULL;
    cpy_r_r757 = NULL;
    cpy_r_r758 = NULL;
    cpy_r_r759 = 2;
    cpy_r_r760 = CPyDef_registry___custom_op(cpy_r_r745, cpy_r_r751, cpy_r_r753, 2, cpy_r_r754, cpy_r_r755, cpy_r_r756, cpy_r_r757, cpy_r_r758, cpy_r_r759);
    CPy_DECREF(cpy_r_r745);
    if (unlikely(cpy_r_r760 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 276, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r761 = CPyStatic_generic_ops___globals;
    cpy_r_r762 = CPyStatics[8399]; /* 'py_vectorcall_op' */
    cpy_r_r763 = CPyDict_SetItem(cpy_r_r761, cpy_r_r762, cpy_r_r760);
    CPy_DECREF(cpy_r_r760);
    cpy_r_r764 = cpy_r_r763 >= 0;
    if (unlikely(!cpy_r_r764)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 276, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r765 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r765 != NULL)) goto CPyL314;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r766 = 0;
    if (unlikely(!cpy_r_r766)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 291, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL314: ;
    cpy_r_r767 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (likely(cpy_r_r767 != NULL)) goto CPyL317;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r768 = 0;
    if (unlikely(!cpy_r_r768)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 292, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL317: ;
    cpy_r_r769 = CPyStatic_generic_ops___globals;
    cpy_r_r770 = CPyStatics[8018]; /* 'c_size_t_rprimitive' */
    cpy_r_r771 = CPyDict_GetItem(cpy_r_r769, cpy_r_r770);
    if (unlikely(cpy_r_r771 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 293, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    if (likely(Py_TYPE(cpy_r_r771) == CPyType_rtypes___RPrimitive))
        cpy_r_r772 = cpy_r_r771;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 293, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r771);
        goto CPyL419;
    }
    cpy_r_r773 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r773 == NULL)) {
        goto CPyL506;
    } else
        goto CPyL322;
CPyL320: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r774 = 0;
    if (unlikely(!cpy_r_r774)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 294, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL322: ;
    cpy_r_r775 = PyList_New(4);
    if (unlikely(cpy_r_r775 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 290, CPyStatic_generic_ops___globals);
        goto CPyL507;
    }
    cpy_r_r776 = (CPyPtr)&((PyListObject *)cpy_r_r775)->ob_item;
    cpy_r_r777 = *(CPyPtr *)cpy_r_r776;
    CPy_INCREF(cpy_r_r765);
    *(PyObject * *)cpy_r_r777 = cpy_r_r765;
    cpy_r_r778 = cpy_r_r777 + 8;
    CPy_INCREF(cpy_r_r767);
    *(PyObject * *)cpy_r_r778 = cpy_r_r767;
    cpy_r_r779 = cpy_r_r777 + 16;
    *(PyObject * *)cpy_r_r779 = cpy_r_r772;
    cpy_r_r780 = cpy_r_r777 + 24;
    CPy_INCREF(cpy_r_r773);
    *(PyObject * *)cpy_r_r780 = cpy_r_r773;
    cpy_r_r781 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r781 == NULL)) {
        goto CPyL508;
    } else
        goto CPyL326;
CPyL324: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r782 = 0;
    if (unlikely(!cpy_r_r782)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 296, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL326: ;
    cpy_r_r783 = CPyStatics[8827]; /* 'PyObject_VectorcallMethod' */
    cpy_r_r784 = NULL;
    cpy_r_r785 = NULL;
    cpy_r_r786 = NULL;
    cpy_r_r787 = NULL;
    cpy_r_r788 = NULL;
    cpy_r_r789 = 2;
    cpy_r_r790 = CPyDef_registry___custom_op(cpy_r_r775, cpy_r_r781, cpy_r_r783, 2, cpy_r_r784, cpy_r_r785, cpy_r_r786, cpy_r_r787, cpy_r_r788, cpy_r_r789);
    CPy_DECREF(cpy_r_r775);
    if (unlikely(cpy_r_r790 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 289, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r791 = CPyStatic_generic_ops___globals;
    cpy_r_r792 = CPyStatics[8401]; /* 'py_vectorcall_method_op' */
    cpy_r_r793 = CPyDict_SetItem(cpy_r_r791, cpy_r_r792, cpy_r_r790);
    CPy_DECREF(cpy_r_r790);
    cpy_r_r794 = cpy_r_r793 >= 0;
    if (unlikely(!cpy_r_r794)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 289, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r795 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r795 != NULL)) goto CPyL331;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r796 = 0;
    if (unlikely(!cpy_r_r796)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 304, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL331: ;
    cpy_r_r797 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r797 != NULL)) goto CPyL334;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r798 = 0;
    if (unlikely(!cpy_r_r798)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 304, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL334: ;
    cpy_r_r799 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r799 != NULL)) goto CPyL337;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r800 = 0;
    if (unlikely(!cpy_r_r800)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 304, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL337: ;
    cpy_r_r801 = PyList_New(3);
    if (unlikely(cpy_r_r801 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 304, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r802 = (CPyPtr)&((PyListObject *)cpy_r_r801)->ob_item;
    cpy_r_r803 = *(CPyPtr *)cpy_r_r802;
    CPy_INCREF(cpy_r_r795);
    *(PyObject * *)cpy_r_r803 = cpy_r_r795;
    cpy_r_r804 = cpy_r_r803 + 8;
    CPy_INCREF(cpy_r_r797);
    *(PyObject * *)cpy_r_r804 = cpy_r_r797;
    cpy_r_r805 = cpy_r_r803 + 16;
    CPy_INCREF(cpy_r_r799);
    *(PyObject * *)cpy_r_r805 = cpy_r_r799;
    cpy_r_r806 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r806 == NULL)) {
        goto CPyL509;
    } else
        goto CPyL341;
CPyL339: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r807 = 0;
    if (unlikely(!cpy_r_r807)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 305, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL341: ;
    cpy_r_r808 = CPyStatics[8828]; /* 'PyObject_Call' */
    cpy_r_r809 = NULL;
    cpy_r_r810 = NULL;
    cpy_r_r811 = NULL;
    cpy_r_r812 = NULL;
    cpy_r_r813 = NULL;
    cpy_r_r814 = 2;
    cpy_r_r815 = CPyDef_registry___custom_op(cpy_r_r801, cpy_r_r806, cpy_r_r808, 2, cpy_r_r809, cpy_r_r810, cpy_r_r811, cpy_r_r812, cpy_r_r813, cpy_r_r814);
    CPy_DECREF(cpy_r_r801);
    if (unlikely(cpy_r_r815 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 303, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r816 = CPyStatic_generic_ops___globals;
    cpy_r_r817 = CPyStatics[8398]; /* 'py_call_with_kwargs_op' */
    cpy_r_r818 = CPyDict_SetItem(cpy_r_r816, cpy_r_r817, cpy_r_r815);
    CPy_DECREF(cpy_r_r815);
    cpy_r_r819 = cpy_r_r818 >= 0;
    if (unlikely(!cpy_r_r819)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 303, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r820 = PyList_New(0);
    if (unlikely(cpy_r_r820 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 313, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r821 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r821 == NULL)) {
        goto CPyL510;
    } else
        goto CPyL347;
CPyL345: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r822 = 0;
    if (unlikely(!cpy_r_r822)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 314, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL347: ;
    cpy_r_r823 = CPyStatics[8829]; /* 'CPyObject_CallMethodObjArgs' */
    cpy_r_r824 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r824 == NULL)) {
        goto CPyL511;
    } else
        goto CPyL350;
CPyL348: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r825 = 0;
    if (unlikely(!cpy_r_r825)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 317, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL350: ;
    cpy_r_r826 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r826 == NULL)) {
        goto CPyL512;
    } else
        goto CPyL353;
CPyL351: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r827 = 0;
    if (unlikely(!cpy_r_r827)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 318, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL353: ;
    cpy_r_r828.f0 = 0;
    cpy_r_r828.f1 = cpy_r_r826;
    CPyTagged_INCREF(cpy_r_r828.f0);
    CPy_INCREF(cpy_r_r828.f1);
    cpy_r_r829 = PyList_New(1);
    if (unlikely(cpy_r_r829 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 318, CPyStatic_generic_ops___globals);
        goto CPyL513;
    }
    cpy_r_r830 = PyTuple_New(2);
    if (unlikely(cpy_r_r830 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10774 = CPyTagged_StealAsObject(cpy_r_r828.f0);
    PyTuple_SET_ITEM(cpy_r_r830, 0, __tmp10774);
    PyObject *__tmp10775 = cpy_r_r828.f1;
    PyTuple_SET_ITEM(cpy_r_r830, 1, __tmp10775);
    cpy_r_r831 = (CPyPtr)&((PyListObject *)cpy_r_r829)->ob_item;
    cpy_r_r832 = *(CPyPtr *)cpy_r_r831;
    *(PyObject * *)cpy_r_r832 = cpy_r_r830;
    cpy_r_r833 = NULL;
    cpy_r_r834 = NULL;
    cpy_r_r835 = NULL;
    cpy_r_r836 = 2;
    cpy_r_r837 = CPyDef_registry___custom_op(cpy_r_r820, cpy_r_r821, cpy_r_r823, 2, cpy_r_r824, cpy_r_r833, cpy_r_r834, cpy_r_r829, cpy_r_r835, cpy_r_r836);
    CPy_DECREF(cpy_r_r820);
    CPy_DECREF(cpy_r_r829);
    if (unlikely(cpy_r_r837 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 312, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r838 = CPyStatic_generic_ops___globals;
    cpy_r_r839 = CPyStatics[8400]; /* 'py_method_call_op' */
    cpy_r_r840 = CPyDict_SetItem(cpy_r_r838, cpy_r_r839, cpy_r_r837);
    CPy_DECREF(cpy_r_r837);
    cpy_r_r841 = cpy_r_r840 >= 0;
    if (unlikely(!cpy_r_r841)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 312, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r842 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r842 != NULL)) goto CPyL359;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r843 = 0;
    if (unlikely(!cpy_r_r843)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 323, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL359: ;
    cpy_r_r844 = PyList_New(1);
    if (unlikely(cpy_r_r844 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 323, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r845 = (CPyPtr)&((PyListObject *)cpy_r_r844)->ob_item;
    cpy_r_r846 = *(CPyPtr *)cpy_r_r845;
    CPy_INCREF(cpy_r_r842);
    *(PyObject * *)cpy_r_r846 = cpy_r_r842;
    cpy_r_r847 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r847 == NULL)) {
        goto CPyL514;
    } else
        goto CPyL363;
CPyL361: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r848 = 0;
    if (unlikely(!cpy_r_r848)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 324, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL363: ;
    cpy_r_r849 = CPyStatics[8830]; /* 'CPyObject_Size' */
    cpy_r_r850 = NULL;
    cpy_r_r851 = NULL;
    cpy_r_r852 = NULL;
    cpy_r_r853 = NULL;
    cpy_r_r854 = NULL;
    cpy_r_r855 = 2;
    cpy_r_r856 = CPyDef_registry___custom_op(cpy_r_r844, cpy_r_r847, cpy_r_r849, 2, cpy_r_r850, cpy_r_r851, cpy_r_r852, cpy_r_r853, cpy_r_r854, cpy_r_r855);
    CPy_DECREF(cpy_r_r844);
    if (unlikely(cpy_r_r856 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 322, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r857 = CPyStatic_generic_ops___globals;
    cpy_r_r858 = CPyStatics[8432]; /* 'generic_len_op' */
    cpy_r_r859 = CPyDict_SetItem(cpy_r_r857, cpy_r_r858, cpy_r_r856);
    CPy_DECREF(cpy_r_r856);
    cpy_r_r860 = cpy_r_r859 >= 0;
    if (unlikely(!cpy_r_r860)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 322, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r861 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r861 != NULL)) goto CPyL368;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r862 = 0;
    if (unlikely(!cpy_r_r862)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 332, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL368: ;
    cpy_r_r863 = PyList_New(1);
    if (unlikely(cpy_r_r863 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 332, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r864 = (CPyPtr)&((PyListObject *)cpy_r_r863)->ob_item;
    cpy_r_r865 = *(CPyPtr *)cpy_r_r864;
    CPy_INCREF(cpy_r_r861);
    *(PyObject * *)cpy_r_r865 = cpy_r_r861;
    cpy_r_r866 = CPyStatic_generic_ops___globals;
    cpy_r_r867 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r868 = CPyDict_GetItem(cpy_r_r866, cpy_r_r867);
    if (unlikely(cpy_r_r868 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 333, CPyStatic_generic_ops___globals);
        goto CPyL515;
    }
    if (likely(Py_TYPE(cpy_r_r868) == CPyType_rtypes___RPrimitive))
        cpy_r_r869 = cpy_r_r868;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/generic_ops.py", "<module>", 333, CPyStatic_generic_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r868);
        goto CPyL515;
    }
    cpy_r_r870 = CPyStatics[8831]; /* 'PyObject_Size' */
    cpy_r_r871 = NULL;
    cpy_r_r872 = NULL;
    cpy_r_r873 = NULL;
    cpy_r_r874 = NULL;
    cpy_r_r875 = NULL;
    cpy_r_r876 = 2;
    cpy_r_r877 = CPyDef_registry___custom_op(cpy_r_r863, cpy_r_r869, cpy_r_r870, 20, cpy_r_r871, cpy_r_r872, cpy_r_r873, cpy_r_r874, cpy_r_r875, cpy_r_r876);
    CPy_DECREF(cpy_r_r863);
    CPy_DECREF(cpy_r_r869);
    if (unlikely(cpy_r_r877 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 331, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r878 = CPyStatic_generic_ops___globals;
    cpy_r_r879 = CPyStatics[8431]; /* 'generic_ssize_t_len_op' */
    cpy_r_r880 = CPyDict_SetItem(cpy_r_r878, cpy_r_r879, cpy_r_r877);
    CPy_DECREF(cpy_r_r877);
    cpy_r_r881 = cpy_r_r880 >= 0;
    if (unlikely(!cpy_r_r881)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 331, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r882 = CPyStatics[8832]; /* 'builtins.iter' */
    cpy_r_r883 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r883 != NULL)) goto CPyL376;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r884 = 0;
    if (unlikely(!cpy_r_r884)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 341, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL376: ;
    cpy_r_r885 = PyList_New(1);
    if (unlikely(cpy_r_r885 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 341, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r886 = (CPyPtr)&((PyListObject *)cpy_r_r885)->ob_item;
    cpy_r_r887 = *(CPyPtr *)cpy_r_r886;
    CPy_INCREF(cpy_r_r883);
    *(PyObject * *)cpy_r_r887 = cpy_r_r883;
    cpy_r_r888 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r888 == NULL)) {
        goto CPyL516;
    } else
        goto CPyL380;
CPyL378: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r889 = 0;
    if (unlikely(!cpy_r_r889)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 342, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL380: ;
    cpy_r_r890 = CPyStatics[8833]; /* 'PyObject_GetIter' */
    cpy_r_r891 = NULL;
    cpy_r_r892 = NULL;
    cpy_r_r893 = NULL;
    cpy_r_r894 = NULL;
    cpy_r_r895 = NULL;
    cpy_r_r896 = 2;
    cpy_r_r897 = CPY_INT_TAG;
    cpy_r_r898 = CPyDef_registry___function_op(cpy_r_r882, cpy_r_r885, cpy_r_r888, cpy_r_r890, 2, cpy_r_r891, cpy_r_r892, cpy_r_r893, cpy_r_r894, cpy_r_r895, cpy_r_r896, cpy_r_r897);
    CPy_DECREF(cpy_r_r885);
    if (unlikely(cpy_r_r898 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 339, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r899 = CPyStatic_generic_ops___globals;
    cpy_r_r900 = CPyStatics[8072]; /* 'iter_op' */
    cpy_r_r901 = CPyDict_SetItem(cpy_r_r899, cpy_r_r900, cpy_r_r898);
    CPy_DECREF(cpy_r_r898);
    cpy_r_r902 = cpy_r_r901 >= 0;
    if (unlikely(!cpy_r_r902)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 339, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r903 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r903 != NULL)) goto CPyL385;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r904 = 0;
    if (unlikely(!cpy_r_r904)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 351, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL385: ;
    cpy_r_r905 = PyList_New(1);
    if (unlikely(cpy_r_r905 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 351, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r906 = (CPyPtr)&((PyListObject *)cpy_r_r905)->ob_item;
    cpy_r_r907 = *(CPyPtr *)cpy_r_r906;
    CPy_INCREF(cpy_r_r903);
    *(PyObject * *)cpy_r_r907 = cpy_r_r903;
    cpy_r_r908 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r908 == NULL)) {
        goto CPyL517;
    } else
        goto CPyL389;
CPyL387: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r909 = 0;
    if (unlikely(!cpy_r_r909)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 352, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL389: ;
    cpy_r_r910 = CPyStatics[8834]; /* 'PyIter_Next' */
    cpy_r_r911 = NULL;
    cpy_r_r912 = NULL;
    cpy_r_r913 = NULL;
    cpy_r_r914 = NULL;
    cpy_r_r915 = NULL;
    cpy_r_r916 = 2;
    cpy_r_r917 = CPyDef_registry___custom_op(cpy_r_r905, cpy_r_r908, cpy_r_r910, 0, cpy_r_r911, cpy_r_r912, cpy_r_r913, cpy_r_r914, cpy_r_r915, cpy_r_r916);
    CPy_DECREF(cpy_r_r905);
    if (unlikely(cpy_r_r917 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 350, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r918 = CPyStatic_generic_ops___globals;
    cpy_r_r919 = CPyStatics[8073]; /* 'next_op' */
    cpy_r_r920 = CPyDict_SetItem(cpy_r_r918, cpy_r_r919, cpy_r_r917);
    CPy_DECREF(cpy_r_r917);
    cpy_r_r921 = cpy_r_r920 >= 0;
    if (unlikely(!cpy_r_r921)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 350, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r922 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r922 != NULL)) goto CPyL394;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r923 = 0;
    if (unlikely(!cpy_r_r923)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 364, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL394: ;
    cpy_r_r924 = PyList_New(1);
    if (unlikely(cpy_r_r924 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 364, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r925 = (CPyPtr)&((PyListObject *)cpy_r_r924)->ob_item;
    cpy_r_r926 = *(CPyPtr *)cpy_r_r925;
    CPy_INCREF(cpy_r_r922);
    *(PyObject * *)cpy_r_r926 = cpy_r_r922;
    cpy_r_r927 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r927 == NULL)) {
        goto CPyL518;
    } else
        goto CPyL398;
CPyL396: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r928 = 0;
    if (unlikely(!cpy_r_r928)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 365, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL398: ;
    cpy_r_r929 = CPyStatics[8835]; /* 'CPyIter_Next' */
    cpy_r_r930 = NULL;
    cpy_r_r931 = NULL;
    cpy_r_r932 = NULL;
    cpy_r_r933 = NULL;
    cpy_r_r934 = NULL;
    cpy_r_r935 = 2;
    cpy_r_r936 = CPyDef_registry___custom_op(cpy_r_r924, cpy_r_r927, cpy_r_r929, 0, cpy_r_r930, cpy_r_r931, cpy_r_r932, cpy_r_r933, cpy_r_r934, cpy_r_r935);
    CPy_DECREF(cpy_r_r924);
    if (unlikely(cpy_r_r936 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 363, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r937 = CPyStatic_generic_ops___globals;
    cpy_r_r938 = CPyStatics[8595]; /* 'next_raw_op' */
    cpy_r_r939 = CPyDict_SetItem(cpy_r_r937, cpy_r_r938, cpy_r_r936);
    CPy_DECREF(cpy_r_r936);
    cpy_r_r940 = cpy_r_r939 >= 0;
    if (unlikely(!cpy_r_r940)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 363, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r941 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r941 != NULL)) goto CPyL403;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r942 = 0;
    if (unlikely(!cpy_r_r942)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 372, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL403: ;
    cpy_r_r943 = PyList_New(1);
    if (unlikely(cpy_r_r943 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 372, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r944 = (CPyPtr)&((PyListObject *)cpy_r_r943)->ob_item;
    cpy_r_r945 = *(CPyPtr *)cpy_r_r944;
    CPy_INCREF(cpy_r_r941);
    *(PyObject * *)cpy_r_r945 = cpy_r_r941;
    cpy_r_r946 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r946 == NULL)) {
        goto CPyL519;
    } else
        goto CPyL407;
CPyL405: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r947 = 0;
    if (unlikely(!cpy_r_r947)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 373, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL407: ;
    cpy_r_r948 = CPyStatics[8836]; /* 'CPy_GetAIter' */
    cpy_r_r949 = NULL;
    cpy_r_r950 = NULL;
    cpy_r_r951 = NULL;
    cpy_r_r952 = NULL;
    cpy_r_r953 = NULL;
    cpy_r_r954 = 2;
    cpy_r_r955 = CPyDef_registry___custom_op(cpy_r_r943, cpy_r_r946, cpy_r_r948, 2, cpy_r_r949, cpy_r_r950, cpy_r_r951, cpy_r_r952, cpy_r_r953, cpy_r_r954);
    CPy_DECREF(cpy_r_r943);
    if (unlikely(cpy_r_r955 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 371, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r956 = CPyStatic_generic_ops___globals;
    cpy_r_r957 = CPyStatics[8272]; /* 'aiter_op' */
    cpy_r_r958 = CPyDict_SetItem(cpy_r_r956, cpy_r_r957, cpy_r_r955);
    CPy_DECREF(cpy_r_r955);
    cpy_r_r959 = cpy_r_r958 >= 0;
    if (unlikely(!cpy_r_r959)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 371, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r960 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r960 != NULL)) goto CPyL412;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r961 = 0;
    if (unlikely(!cpy_r_r961)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 380, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL412: ;
    cpy_r_r962 = PyList_New(1);
    if (unlikely(cpy_r_r962 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 380, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r963 = (CPyPtr)&((PyListObject *)cpy_r_r962)->ob_item;
    cpy_r_r964 = *(CPyPtr *)cpy_r_r963;
    CPy_INCREF(cpy_r_r960);
    *(PyObject * *)cpy_r_r964 = cpy_r_r960;
    cpy_r_r965 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r965 == NULL)) {
        goto CPyL520;
    } else
        goto CPyL416;
CPyL414: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r966 = 0;
    if (unlikely(!cpy_r_r966)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 381, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    CPy_Unreachable();
CPyL416: ;
    cpy_r_r967 = CPyStatics[8837]; /* 'CPy_GetANext' */
    cpy_r_r968 = NULL;
    cpy_r_r969 = NULL;
    cpy_r_r970 = NULL;
    cpy_r_r971 = NULL;
    cpy_r_r972 = NULL;
    cpy_r_r973 = 2;
    cpy_r_r974 = CPyDef_registry___custom_op(cpy_r_r962, cpy_r_r965, cpy_r_r967, 2, cpy_r_r968, cpy_r_r969, cpy_r_r970, cpy_r_r971, cpy_r_r972, cpy_r_r973);
    CPy_DECREF(cpy_r_r962);
    if (unlikely(cpy_r_r974 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 379, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    cpy_r_r975 = CPyStatic_generic_ops___globals;
    cpy_r_r976 = CPyStatics[8274]; /* 'anext_op' */
    cpy_r_r977 = CPyDict_SetItem(cpy_r_r975, cpy_r_r976, cpy_r_r974);
    CPy_DECREF(cpy_r_r974);
    cpy_r_r978 = cpy_r_r977 >= 0;
    if (unlikely(!cpy_r_r978)) {
        CPy_AddTraceback("mypyc/primitives/generic_ops.py", "<module>", 379, CPyStatic_generic_ops___globals);
        goto CPyL419;
    }
    return 1;
CPyL419: ;
    cpy_r_r979 = 2;
    return cpy_r_r979;
CPyL420: ;
    CPy_DecRef(cpy_r_r22.f0);
    CPyTagged_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r24.f0);
    CPyTagged_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r26.f0);
    CPyTagged_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r28.f0);
    CPyTagged_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r30.f0);
    CPyTagged_DecRef(cpy_r_r30.f1);
    CPy_DecRef(cpy_r_r32.f0);
    CPyTagged_DecRef(cpy_r_r32.f1);
    goto CPyL419;
CPyL421: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL32;
CPyL422: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL419;
CPyL423: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r57.f0);
    CPyTagged_DecRef(cpy_r_r57.f1);
    goto CPyL419;
CPyL424: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    goto CPyL16;
CPyL425: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    goto CPyL19;
CPyL426: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    goto CPyL419;
CPyL427: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r73);
    goto CPyL23;
CPyL428: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r73);
    goto CPyL419;
CPyL429: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r73);
    CPyTagged_DecRef(cpy_r_r83);
    goto CPyL419;
CPyL430: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r73);
    CPyTagged_DecRef(cpy_r_r88.f0);
    CPy_DecRef(cpy_r_r88.f1);
    goto CPyL419;
CPyL431: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL31;
CPyL432: ;
    CPy_DECREF(cpy_r_r148);
    goto CPyL54;
CPyL433: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL419;
CPyL434: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r159.f0);
    CPy_DecRef(cpy_r_r159.f1);
    goto CPyL419;
CPyL435: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r169);
    goto CPyL41;
CPyL436: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r169);
    goto CPyL44;
CPyL437: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r169);
    goto CPyL419;
CPyL438: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r169);
    CPy_DecRef(cpy_r_r174);
    goto CPyL48;
CPyL439: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r169);
    CPy_DecRef(cpy_r_r174);
    goto CPyL419;
CPyL440: ;
    CPy_DECREF(cpy_r_r190);
    goto CPyL53;
CPyL441: ;
    CPy_DecRef(cpy_r_r197);
    goto CPyL62;
CPyL442: ;
    CPy_DECREF(cpy_r_r210);
    goto CPyL65;
CPyL443: ;
    CPy_DECREF(cpy_r_r259);
    goto CPyL87;
CPyL444: ;
    CPy_DecRef(cpy_r_r259);
    goto CPyL419;
CPyL445: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r270.f0);
    CPy_DecRef(cpy_r_r270.f1);
    goto CPyL419;
CPyL446: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r280);
    goto CPyL74;
CPyL447: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r280);
    goto CPyL77;
CPyL448: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r280);
    goto CPyL419;
CPyL449: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r280);
    CPy_DecRef(cpy_r_r285);
    goto CPyL81;
CPyL450: ;
    CPy_DecRef(cpy_r_r259);
    CPy_DecRef(cpy_r_r280);
    CPy_DecRef(cpy_r_r285);
    goto CPyL419;
CPyL451: ;
    CPy_DECREF(cpy_r_r301);
    goto CPyL86;
CPyL452: ;
    CPy_DECREF(cpy_r_r311);
    goto CPyL107;
CPyL453: ;
    CPy_DecRef(cpy_r_r311);
    goto CPyL419;
CPyL454: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r313.f0);
    CPy_DecRef(cpy_r_r313.f1);
    goto CPyL419;
CPyL455: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r327);
    goto CPyL95;
CPyL456: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r327);
    goto CPyL98;
CPyL457: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r327);
    goto CPyL419;
CPyL458: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r327);
    CPy_DecRef(cpy_r_r332);
    goto CPyL102;
CPyL459: ;
    CPy_DecRef(cpy_r_r311);
    CPy_DecRef(cpy_r_r327);
    CPy_DecRef(cpy_r_r332);
    goto CPyL419;
CPyL460: ;
    CPy_DECREF(cpy_r_r348);
    goto CPyL88;
CPyL461: ;
    CPy_DECREF(cpy_r_r356);
    goto CPyL126;
CPyL462: ;
    CPy_DecRef(cpy_r_r356);
    goto CPyL419;
CPyL463: ;
    CPy_DecRef(cpy_r_r356);
    CPyTagged_DecRef(cpy_r_r358.f0);
    CPy_DecRef(cpy_r_r358.f1);
    goto CPyL419;
CPyL464: ;
    CPy_DecRef(cpy_r_r356);
    goto CPyL114;
CPyL465: ;
    CPy_DecRef(cpy_r_r356);
    CPy_DecRef(cpy_r_r373);
    goto CPyL419;
CPyL466: ;
    CPy_DecRef(cpy_r_r356);
    CPy_DecRef(cpy_r_r380);
    goto CPyL121;
CPyL467: ;
    CPy_DecRef(cpy_r_r356);
    CPy_DecRef(cpy_r_r380);
    goto CPyL419;
CPyL468: ;
    CPy_DECREF(cpy_r_r393);
    goto CPyL109;
CPyL469: ;
    CPy_DecRef(cpy_r_r400);
    goto CPyL419;
CPyL470: ;
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r407);
    goto CPyL137;
CPyL471: ;
    CPy_DecRef(cpy_r_r400);
    CPy_DecRef(cpy_r_r407);
    goto CPyL419;
CPyL472: ;
    CPy_DECREF(cpy_r_r421);
    goto CPyL141;
CPyL473: ;
    CPy_DecRef(cpy_r_r424.f0);
    CPy_DecRef(cpy_r_r424.f1);
    CPy_DecRef(cpy_r_r427.f0);
    CPy_DecRef(cpy_r_r427.f1);
    CPy_DecRef(cpy_r_r430.f0);
    CPy_DecRef(cpy_r_r430.f1);
    goto CPyL419;
CPyL474: ;
    CPy_DECREF(cpy_r_r431);
    goto CPyL159;
CPyL475: ;
    CPy_DecRef(cpy_r_r431);
    goto CPyL419;
CPyL476: ;
    CPy_DecRef(cpy_r_r431);
    CPy_DecRef(cpy_r_r449.f0);
    CPy_DecRef(cpy_r_r449.f1);
    goto CPyL419;
CPyL477: ;
    CPy_DecRef(cpy_r_r431);
    CPy_DecRef(cpy_r_r459);
    goto CPyL150;
CPyL478: ;
    CPy_DecRef(cpy_r_r431);
    CPy_DecRef(cpy_r_r459);
    goto CPyL153;
CPyL479: ;
    CPy_DecRef(cpy_r_r431);
    CPy_DecRef(cpy_r_r459);
    goto CPyL419;
CPyL480: ;
    CPy_DECREF(cpy_r_r473);
    goto CPyL158;
CPyL481: ;
    CPy_DecRef(cpy_r_r481);
    goto CPyL165;
CPyL482: ;
    CPy_DECREF(cpy_r_r489);
    goto CPyL168;
CPyL483: ;
    CPy_DecRef(cpy_r_r493);
    goto CPyL173;
CPyL484: ;
    CPy_DECREF(cpy_r_r505);
    goto CPyL176;
CPyL485: ;
    CPy_DecRef(cpy_r_r511);
    goto CPyL184;
CPyL486: ;
    CPy_DECREF(cpy_r_r524);
    goto CPyL187;
CPyL487: ;
    CPy_DecRef(cpy_r_r532);
    goto CPyL419;
CPyL488: ;
    CPy_DECREF(cpy_r_r548);
    goto CPyL200;
CPyL489: ;
    CPy_DecRef(cpy_r_r554);
    goto CPyL419;
CPyL490: ;
    CPy_DECREF(cpy_r_r569);
    goto CPyL210;
CPyL491: ;
    CPy_DecRef(cpy_r_r573);
    goto CPyL215;
CPyL492: ;
    CPy_DECREF(cpy_r_r586);
    goto CPyL218;
CPyL493: ;
    CPy_DecRef(cpy_r_r592);
    goto CPyL226;
CPyL494: ;
    CPy_DecRef(cpy_r_r618);
    goto CPyL241;
CPyL495: ;
    CPy_DECREF(cpy_r_r633);
    goto CPyL244;
CPyL496: ;
    CPy_DecRef(cpy_r_r641);
    goto CPyL419;
CPyL497: ;
    CPy_DecRef(cpy_r_r668);
    goto CPyL266;
CPyL498: ;
    CPy_DecRef(cpy_r_r692);
    goto CPyL419;
CPyL499: ;
    CPy_DecRef(cpy_r_r713);
    goto CPyL283;
CPyL500: ;
    CPy_DecRef(cpy_r_r713);
    goto CPyL286;
CPyL501: ;
    CPy_DecRef(cpy_r_r713);
    goto CPyL289;
CPyL502: ;
    CPy_DecRef(cpy_r_r713);
    CPyTagged_DecRef(cpy_r_r721.f0);
    CPy_DecRef(cpy_r_r721.f1);
    goto CPyL419;
CPyL503: ;
    CPy_DecRef(cpy_r_r742);
    goto CPyL303;
CPyL504: ;
    CPy_DecRef(cpy_r_r742);
    goto CPyL419;
CPyL505: ;
    CPy_DecRef(cpy_r_r745);
    goto CPyL307;
CPyL506: ;
    CPy_DecRef(cpy_r_r772);
    goto CPyL320;
CPyL507: ;
    CPy_DecRef(cpy_r_r772);
    goto CPyL419;
CPyL508: ;
    CPy_DecRef(cpy_r_r775);
    goto CPyL324;
CPyL509: ;
    CPy_DecRef(cpy_r_r801);
    goto CPyL339;
CPyL510: ;
    CPy_DecRef(cpy_r_r820);
    goto CPyL345;
CPyL511: ;
    CPy_DecRef(cpy_r_r820);
    goto CPyL348;
CPyL512: ;
    CPy_DecRef(cpy_r_r820);
    goto CPyL351;
CPyL513: ;
    CPy_DecRef(cpy_r_r820);
    CPyTagged_DecRef(cpy_r_r828.f0);
    CPy_DecRef(cpy_r_r828.f1);
    goto CPyL419;
CPyL514: ;
    CPy_DecRef(cpy_r_r844);
    goto CPyL361;
CPyL515: ;
    CPy_DecRef(cpy_r_r863);
    goto CPyL419;
CPyL516: ;
    CPy_DecRef(cpy_r_r885);
    goto CPyL378;
CPyL517: ;
    CPy_DecRef(cpy_r_r905);
    goto CPyL387;
CPyL518: ;
    CPy_DecRef(cpy_r_r924);
    goto CPyL396;
CPyL519: ;
    CPy_DecRef(cpy_r_r943);
    goto CPyL405;
CPyL520: ;
    CPy_DecRef(cpy_r_r962);
    goto CPyL414;
}
