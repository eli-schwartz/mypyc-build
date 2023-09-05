#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef list_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef list_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.list_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    list_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___list_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___list_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___list_ops_internal);
        return CPyModule_mypyc___primitives___list_ops_internal;
    }
    CPyModule_mypyc___primitives___list_ops_internal = PyModule_Create(&list_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___list_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___list_ops_internal, "__name__");
    CPyStatic_list_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___list_ops_internal);
    if (unlikely(CPyStatic_list_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_list_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___list_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___list_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_list_ops_____top_level__(void) {
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
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    tuple_T2IO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    CPyPtr cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    CPyTagged cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyPtr cpy_r_r139;
    CPyPtr cpy_r_r140;
    CPyPtr cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyPtr cpy_r_r158;
    CPyPtr cpy_r_r159;
    CPyPtr cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyPtr cpy_r_r176;
    CPyPtr cpy_r_r177;
    CPyPtr cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    CPyPtr cpy_r_r194;
    CPyPtr cpy_r_r195;
    CPyPtr cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    char cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    CPyPtr cpy_r_r213;
    CPyPtr cpy_r_r214;
    CPyPtr cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyPtr cpy_r_r230;
    CPyPtr cpy_r_r231;
    CPyPtr cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    int32_t cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    CPyPtr cpy_r_r255;
    CPyPtr cpy_r_r256;
    CPyPtr cpy_r_r257;
    CPyPtr cpy_r_r258;
    PyObject *cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    CPyPtr cpy_r_r266;
    CPyPtr cpy_r_r267;
    CPyPtr cpy_r_r268;
    CPyPtr cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    CPyTagged cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    int32_t cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    CPyPtr cpy_r_r289;
    CPyPtr cpy_r_r290;
    CPyPtr cpy_r_r291;
    CPyPtr cpy_r_r292;
    PyObject *cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    CPyPtr cpy_r_r300;
    CPyPtr cpy_r_r301;
    CPyPtr cpy_r_r302;
    CPyPtr cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    char cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    char cpy_r_r311;
    PyObject *cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    CPyPtr cpy_r_r317;
    CPyPtr cpy_r_r318;
    CPyPtr cpy_r_r319;
    CPyPtr cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    CPyPtr cpy_r_r328;
    CPyPtr cpy_r_r329;
    CPyPtr cpy_r_r330;
    CPyPtr cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    int32_t cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    char cpy_r_r346;
    PyObject *cpy_r_r347;
    CPyPtr cpy_r_r348;
    CPyPtr cpy_r_r349;
    CPyPtr cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    char cpy_r_r361;
    CPyTagged cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    int32_t cpy_r_r366;
    char cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    char cpy_r_r372;
    PyObject *cpy_r_r373;
    CPyPtr cpy_r_r374;
    CPyPtr cpy_r_r375;
    CPyPtr cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    char cpy_r_r385;
    CPyTagged cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    int32_t cpy_r_r390;
    char cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    CPyPtr cpy_r_r396;
    CPyPtr cpy_r_r397;
    PyObject *cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    char cpy_r_r406;
    CPyTagged cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    int32_t cpy_r_r411;
    char cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    char cpy_r_r415;
    PyObject *cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    CPyPtr cpy_r_r419;
    CPyPtr cpy_r_r420;
    CPyPtr cpy_r_r421;
    PyObject *cpy_r_r422;
    char cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    char cpy_r_r430;
    CPyTagged cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    int32_t cpy_r_r435;
    char cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    char cpy_r_r439;
    PyObject *cpy_r_r440;
    char cpy_r_r441;
    PyObject *cpy_r_r442;
    CPyPtr cpy_r_r443;
    CPyPtr cpy_r_r444;
    CPyPtr cpy_r_r445;
    PyObject *cpy_r_r446;
    char cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    char cpy_r_r454;
    CPyTagged cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    char cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    char cpy_r_r463;
    PyObject *cpy_r_r464;
    CPyPtr cpy_r_r465;
    CPyPtr cpy_r_r466;
    CPyPtr cpy_r_r467;
    CPyPtr cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    char cpy_r_r479;
    CPyTagged cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    char cpy_r_r484;
    PyObject *cpy_r_r485;
    CPyPtr cpy_r_r486;
    CPyPtr cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    char cpy_r_r498;
    CPyTagged cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    CPyPtr cpy_r_r505;
    CPyPtr cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    PyObject *cpy_r_r516;
    char cpy_r_r517;
    CPyTagged cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    char cpy_r_r522;
    PyObject *cpy_r_r523;
    char cpy_r_r524;
    PyObject *cpy_r_r525;
    CPyPtr cpy_r_r526;
    CPyPtr cpy_r_r527;
    CPyPtr cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    char cpy_r_r539;
    CPyTagged cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    char cpy_r_r546;
    PyObject *cpy_r_r547;
    CPyPtr cpy_r_r548;
    CPyPtr cpy_r_r549;
    CPyPtr cpy_r_r550;
    PyObject *cpy_r_r551;
    char cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    char cpy_r_r559;
    CPyTagged cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    char cpy_r_r564;
    PyObject *cpy_r_r565;
    char cpy_r_r566;
    PyObject *cpy_r_r567;
    CPyPtr cpy_r_r568;
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
    CPyTagged cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    char cpy_r_r584;
    PyObject *cpy_r_r585;
    char cpy_r_r586;
    PyObject *cpy_r_r587;
    CPyPtr cpy_r_r588;
    CPyPtr cpy_r_r589;
    CPyPtr cpy_r_r590;
    PyObject *cpy_r_r591;
    char cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    char cpy_r_r599;
    CPyTagged cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    char cpy_r_r603;
    PyObject *cpy_r_r604;
    char cpy_r_r605;
    PyObject *cpy_r_r606;
    char cpy_r_r607;
    PyObject *cpy_r_r608;
    CPyPtr cpy_r_r609;
    CPyPtr cpy_r_r610;
    CPyPtr cpy_r_r611;
    CPyPtr cpy_r_r612;
    PyObject *cpy_r_r613;
    char cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    char cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    int32_t cpy_r_r625;
    char cpy_r_r626;
    PyObject *cpy_r_r627;
    char cpy_r_r628;
    PyObject *cpy_r_r629;
    CPyPtr cpy_r_r630;
    CPyPtr cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject *cpy_r_r641;
    char cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    int32_t cpy_r_r646;
    char cpy_r_r647;
    PyObject *cpy_r_r648;
    char cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    CPyPtr cpy_r_r655;
    CPyPtr cpy_r_r656;
    CPyPtr cpy_r_r657;
    PyObject *cpy_r_r658;
    char cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    char cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    int32_t cpy_r_r670;
    char cpy_r_r671;
    PyObject *cpy_r_r672;
    char cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    CPyPtr cpy_r_r683;
    CPyPtr cpy_r_r684;
    CPyPtr cpy_r_r685;
    CPyPtr cpy_r_r686;
    PyObject *cpy_r_r687;
    char cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    char cpy_r_r695;
    PyObject *cpy_r_r696;
    PyObject *cpy_r_r697;
    PyObject *cpy_r_r698;
    int32_t cpy_r_r699;
    char cpy_r_r700;
    char cpy_r_r701;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", -1, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_list_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 3, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10252]; /* ('ERR_FALSE', 'ERR_MAGIC', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_list_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 5, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10267]; /* ('bit_rprimitive', 'c_int_rprimitive',
                                      'c_pyssize_t_rprimitive', 'int64_rprimitive',
                                      'int_rprimitive', 'list_rprimitive',
                                      'object_rprimitive', 'short_int_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_list_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 6, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10251]; /* ('ERR_NEG_INT', 'binary_op', 'custom_op', 'function_op',
                                      'load_address_op', 'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_list_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 16, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 26, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8882]; /* 'PyList_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 26, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL348;
CPyL11: ;
    cpy_r_r26 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r27 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 31, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = PyList_New(1);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 31, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r30 = (CPyPtr)&((PyListObject *)cpy_r_r29)->ob_item;
    cpy_r_r31 = *(CPyPtr *)cpy_r_r30;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r31 = cpy_r_r27;
    cpy_r_r32 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL349;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 32, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r34 = CPyStatics[8883]; /* 'PySequence_List' */
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
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 29, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r43 = CPyStatic_list_ops___globals;
    cpy_r_r44 = CPyStatics[8074]; /* 'to_list' */
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 29, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r47 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 40, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r49 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r49 == NULL)) {
        goto CPyL350;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 41, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r51 = CPyStatics[8884]; /* 'PyList_New' */
    cpy_r_r52 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL351;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 44, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r54.f0 = 0;
    cpy_r_r54.f1 = cpy_r_r52;
    CPyTagged_INCREF(cpy_r_r54.f0);
    CPy_INCREF(cpy_r_r54.f1);
    cpy_r_r55 = PyList_New(1);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 44, CPyStatic_list_ops___globals);
        goto CPyL352;
    }
    cpy_r_r56 = PyTuple_New(2);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10781 = CPyTagged_StealAsObject(cpy_r_r54.f0);
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp10781);
    PyObject *__tmp10782 = cpy_r_r54.f1;
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp10782);
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    *(PyObject * *)cpy_r_r58 = cpy_r_r56;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = 2;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPyDef_registry___function_op(cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r51, 2, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r55, cpy_r_r62, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 38, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL353;
CPyL29: ;
    cpy_r_r66 = CPyStatic_list_ops___globals;
    cpy_r_r67 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 48, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_rtypes___RPrimitive))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 48, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r68);
        goto CPyL347;
    }
    cpy_r_r70 = PyList_New(1);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 48, CPyStatic_list_ops___globals);
        goto CPyL354;
    }
    cpy_r_r71 = (CPyPtr)&((PyListObject *)cpy_r_r70)->ob_item;
    cpy_r_r72 = *(CPyPtr *)cpy_r_r71;
    *(PyObject * *)cpy_r_r72 = cpy_r_r69;
    cpy_r_r73 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r73 == NULL)) {
        goto CPyL355;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 49, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r75 = CPyStatics[8884]; /* 'PyList_New' */
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = 2;
    cpy_r_r82 = CPyDef_registry___custom_op(cpy_r_r70, cpy_r_r73, cpy_r_r75, 2, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 47, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r83 = CPyStatic_list_ops___globals;
    cpy_r_r84 = CPyStatics[8226]; /* 'new_list_op' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 47, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r87 = CPyStatic_list_ops___globals;
    cpy_r_r88 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 55, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    if (likely(Py_TYPE(cpy_r_r89) == CPyType_rtypes___RPrimitive))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 55, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r89);
        goto CPyL347;
    }
    cpy_r_r91 = PyList_New(1);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 55, CPyStatic_list_ops___globals);
        goto CPyL356;
    }
    cpy_r_r92 = (CPyPtr)&((PyListObject *)cpy_r_r91)->ob_item;
    cpy_r_r93 = *(CPyPtr *)cpy_r_r92;
    *(PyObject * *)cpy_r_r93 = cpy_r_r90;
    cpy_r_r94 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL357;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 56, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r96 = CPyStatics[8885]; /* 'CPyList_Build' */
    cpy_r_r97 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r97 == NULL)) {
        goto CPyL358;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 59, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r99 = NULL;
    cpy_r_r100 = NULL;
    cpy_r_r101 = NULL;
    cpy_r_r102 = 1 ? Py_True : Py_False;
    cpy_r_r103 = 2;
    cpy_r_r104 = CPyDef_registry___custom_op(cpy_r_r91, cpy_r_r94, cpy_r_r96, 2, cpy_r_r97, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 54, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r105 = CPyStatic_list_ops___globals;
    cpy_r_r106 = CPyStatics[8414]; /* 'list_build_op' */
    cpy_r_r107 = CPyDict_SetItem(cpy_r_r105, cpy_r_r106, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 54, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r109 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r110 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r110 != NULL)) goto CPyL51;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r111 = 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 66, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r112 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r112 != NULL)) goto CPyL54;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r113 = 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 66, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r114 = PyList_New(2);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 66, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r115 = (CPyPtr)&((PyListObject *)cpy_r_r114)->ob_item;
    cpy_r_r116 = *(CPyPtr *)cpy_r_r115;
    CPy_INCREF(cpy_r_r110);
    *(PyObject * *)cpy_r_r116 = cpy_r_r110;
    cpy_r_r117 = cpy_r_r116 + 8;
    CPy_INCREF(cpy_r_r112);
    *(PyObject * *)cpy_r_r117 = cpy_r_r112;
    cpy_r_r118 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r118 == NULL)) {
        goto CPyL359;
    } else
        goto CPyL58;
CPyL56: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r119 = 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 67, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r120 = CPyStatics[8886]; /* 'CPyList_GetItem' */
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = 2;
    cpy_r_r127 = CPY_INT_TAG;
    cpy_r_r128 = CPyDef_registry___method_op(cpy_r_r109, cpy_r_r114, cpy_r_r118, cpy_r_r120, 2, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 64, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r129 = CPyStatic_list_ops___globals;
    cpy_r_r130 = CPyStatics[8887]; /* 'list_get_item_op' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 64, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r133 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r134 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r134 != NULL)) goto CPyL63;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r135 = 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 75, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r136 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r136 != NULL)) goto CPyL66;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 75, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r138 = PyList_New(2);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 75, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r139 = (CPyPtr)&((PyListObject *)cpy_r_r138)->ob_item;
    cpy_r_r140 = *(CPyPtr *)cpy_r_r139;
    CPy_INCREF(cpy_r_r134);
    *(PyObject * *)cpy_r_r140 = cpy_r_r134;
    cpy_r_r141 = cpy_r_r140 + 8;
    CPy_INCREF(cpy_r_r136);
    *(PyObject * *)cpy_r_r141 = cpy_r_r136;
    cpy_r_r142 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r142 == NULL)) {
        goto CPyL360;
    } else
        goto CPyL70;
CPyL68: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 76, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r144 = CPyStatics[8888]; /* 'CPyList_GetItemShort' */
    cpy_r_r145 = NULL;
    cpy_r_r146 = NULL;
    cpy_r_r147 = NULL;
    cpy_r_r148 = NULL;
    cpy_r_r149 = NULL;
    cpy_r_r150 = 2;
    cpy_r_r151 = CPyDef_registry___method_op(cpy_r_r133, cpy_r_r138, cpy_r_r142, cpy_r_r144, 2, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150, 4);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 73, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL361;
CPyL71: ;
    cpy_r_r152 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r153 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r153 != NULL)) goto CPyL74;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 85, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r155 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r155 != NULL)) goto CPyL77;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 85, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r157 = PyList_New(2);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 85, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r158 = (CPyPtr)&((PyListObject *)cpy_r_r157)->ob_item;
    cpy_r_r159 = *(CPyPtr *)cpy_r_r158;
    CPy_INCREF(cpy_r_r153);
    *(PyObject * *)cpy_r_r159 = cpy_r_r153;
    cpy_r_r160 = cpy_r_r159 + 8;
    CPy_INCREF(cpy_r_r155);
    *(PyObject * *)cpy_r_r160 = cpy_r_r155;
    cpy_r_r161 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r161 == NULL)) {
        goto CPyL362;
    } else
        goto CPyL81;
CPyL79: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r162 = 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 86, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r163 = CPyStatics[8889]; /* 'CPyList_GetItemBorrow' */
    cpy_r_r164 = NULL;
    cpy_r_r165 = NULL;
    cpy_r_r166 = NULL;
    cpy_r_r167 = NULL;
    cpy_r_r168 = NULL;
    cpy_r_r169 = CPyDef_registry___method_op(cpy_r_r152, cpy_r_r157, cpy_r_r161, cpy_r_r163, 2, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168, 1, 6);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 83, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL363;
CPyL82: ;
    cpy_r_r170 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r171 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r171 != NULL)) goto CPyL85;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r172 = 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 96, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL85: ;
    cpy_r_r173 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r173 != NULL)) goto CPyL88;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 96, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL88: ;
    cpy_r_r175 = PyList_New(2);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 96, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r176 = (CPyPtr)&((PyListObject *)cpy_r_r175)->ob_item;
    cpy_r_r177 = *(CPyPtr *)cpy_r_r176;
    CPy_INCREF(cpy_r_r171);
    *(PyObject * *)cpy_r_r177 = cpy_r_r171;
    cpy_r_r178 = cpy_r_r177 + 8;
    CPy_INCREF(cpy_r_r173);
    *(PyObject * *)cpy_r_r178 = cpy_r_r173;
    cpy_r_r179 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r179 == NULL)) {
        goto CPyL364;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r180 = 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 97, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r181 = CPyStatics[8890]; /* 'CPyList_GetItemShortBorrow' */
    cpy_r_r182 = NULL;
    cpy_r_r183 = NULL;
    cpy_r_r184 = NULL;
    cpy_r_r185 = NULL;
    cpy_r_r186 = NULL;
    cpy_r_r187 = CPyDef_registry___method_op(cpy_r_r170, cpy_r_r175, cpy_r_r179, cpy_r_r181, 2, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186, 1, 8);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 94, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL365;
CPyL93: ;
    cpy_r_r188 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r189 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r189 != NULL)) goto CPyL96;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r190 = 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 107, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r191 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r191 != NULL)) goto CPyL99;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 107, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL99: ;
    cpy_r_r193 = PyList_New(2);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 107, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r194 = (CPyPtr)&((PyListObject *)cpy_r_r193)->ob_item;
    cpy_r_r195 = *(CPyPtr *)cpy_r_r194;
    CPy_INCREF(cpy_r_r189);
    *(PyObject * *)cpy_r_r195 = cpy_r_r189;
    cpy_r_r196 = cpy_r_r195 + 8;
    CPy_INCREF(cpy_r_r191);
    *(PyObject * *)cpy_r_r196 = cpy_r_r191;
    cpy_r_r197 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r197 == NULL)) {
        goto CPyL366;
    } else
        goto CPyL103;
CPyL101: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 108, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL103: ;
    cpy_r_r199 = CPyStatics[8891]; /* 'CPyList_GetItemInt64' */
    cpy_r_r200 = NULL;
    cpy_r_r201 = NULL;
    cpy_r_r202 = NULL;
    cpy_r_r203 = NULL;
    cpy_r_r204 = NULL;
    cpy_r_r205 = 2;
    cpy_r_r206 = CPyDef_registry___method_op(cpy_r_r188, cpy_r_r193, cpy_r_r197, cpy_r_r199, 2, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205, 10);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 105, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL367;
CPyL104: ;
    cpy_r_r207 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r208 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r208 != NULL)) goto CPyL107;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r209 = 0;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 117, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL107: ;
    cpy_r_r210 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r210 != NULL)) goto CPyL110;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r211 = 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 117, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL110: ;
    cpy_r_r212 = PyList_New(2);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 117, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r213 = (CPyPtr)&((PyListObject *)cpy_r_r212)->ob_item;
    cpy_r_r214 = *(CPyPtr *)cpy_r_r213;
    CPy_INCREF(cpy_r_r208);
    *(PyObject * *)cpy_r_r214 = cpy_r_r208;
    cpy_r_r215 = cpy_r_r214 + 8;
    CPy_INCREF(cpy_r_r210);
    *(PyObject * *)cpy_r_r215 = cpy_r_r210;
    cpy_r_r216 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r216 == NULL)) {
        goto CPyL368;
    } else
        goto CPyL114;
CPyL112: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r217 = 0;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 118, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL114: ;
    cpy_r_r218 = CPyStatics[8892]; /* 'CPyList_GetItemInt64Borrow' */
    cpy_r_r219 = NULL;
    cpy_r_r220 = NULL;
    cpy_r_r221 = NULL;
    cpy_r_r222 = NULL;
    cpy_r_r223 = NULL;
    cpy_r_r224 = CPyDef_registry___method_op(cpy_r_r207, cpy_r_r212, cpy_r_r216, cpy_r_r218, 2, cpy_r_r219, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, 1, 12);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 115, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL369;
CPyL115: ;
    cpy_r_r225 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r225 != NULL)) goto CPyL118;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 128, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r227 = CPyStatic_rtypes___short_int_rprimitive;
    if (likely(cpy_r_r227 != NULL)) goto CPyL121;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r228 = 0;
    if (unlikely(!cpy_r_r228)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 128, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL121: ;
    cpy_r_r229 = PyList_New(2);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 128, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r230 = (CPyPtr)&((PyListObject *)cpy_r_r229)->ob_item;
    cpy_r_r231 = *(CPyPtr *)cpy_r_r230;
    CPy_INCREF(cpy_r_r225);
    *(PyObject * *)cpy_r_r231 = cpy_r_r225;
    cpy_r_r232 = cpy_r_r231 + 8;
    CPy_INCREF(cpy_r_r227);
    *(PyObject * *)cpy_r_r232 = cpy_r_r227;
    cpy_r_r233 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r233 == NULL)) {
        goto CPyL370;
    } else
        goto CPyL125;
CPyL123: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r234 = 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 129, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r235 = CPyStatics[8893]; /* 'CPyList_GetItemUnsafe' */
    cpy_r_r236 = NULL;
    cpy_r_r237 = NULL;
    cpy_r_r238 = NULL;
    cpy_r_r239 = NULL;
    cpy_r_r240 = NULL;
    cpy_r_r241 = 2;
    cpy_r_r242 = CPyDef_registry___custom_op(cpy_r_r229, cpy_r_r233, cpy_r_r235, 0, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241);
    CPy_DECREF(cpy_r_r229);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 127, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r243 = CPyStatic_list_ops___globals;
    cpy_r_r244 = CPyStatics[8070]; /* 'list_get_item_unsafe_op' */
    cpy_r_r245 = CPyDict_SetItem(cpy_r_r243, cpy_r_r244, cpy_r_r242);
    CPy_DECREF(cpy_r_r242);
    cpy_r_r246 = cpy_r_r245 >= 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 127, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r247 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r248 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r248 != NULL)) goto CPyL130;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r249 = 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 137, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r250 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r250 != NULL)) goto CPyL133;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r251 = 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 137, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r252 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r252 != NULL)) goto CPyL136;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r253 = 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 137, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL136: ;
    cpy_r_r254 = PyList_New(3);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 137, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r255 = (CPyPtr)&((PyListObject *)cpy_r_r254)->ob_item;
    cpy_r_r256 = *(CPyPtr *)cpy_r_r255;
    CPy_INCREF(cpy_r_r248);
    *(PyObject * *)cpy_r_r256 = cpy_r_r248;
    cpy_r_r257 = cpy_r_r256 + 8;
    CPy_INCREF(cpy_r_r250);
    *(PyObject * *)cpy_r_r257 = cpy_r_r250;
    cpy_r_r258 = cpy_r_r256 + 16;
    CPy_INCREF(cpy_r_r252);
    *(PyObject * *)cpy_r_r258 = cpy_r_r252;
    cpy_r_r259 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r259 == NULL)) {
        goto CPyL371;
    } else
        goto CPyL140;
CPyL138: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r260 = 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 138, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r261 = CPyStatics[8894]; /* 'CPyList_SetItem' */
    cpy_r_r262 = PyList_New(3);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 141, CPyStatic_list_ops___globals);
        goto CPyL372;
    }
    cpy_r_r263 = 0 ? Py_True : Py_False;
    cpy_r_r264 = 0 ? Py_True : Py_False;
    cpy_r_r265 = 1 ? Py_True : Py_False;
    cpy_r_r266 = (CPyPtr)&((PyListObject *)cpy_r_r262)->ob_item;
    cpy_r_r267 = *(CPyPtr *)cpy_r_r266;
    CPy_INCREF(cpy_r_r263);
    *(PyObject * *)cpy_r_r267 = cpy_r_r263;
    cpy_r_r268 = cpy_r_r267 + 8;
    CPy_INCREF(cpy_r_r264);
    *(PyObject * *)cpy_r_r268 = cpy_r_r264;
    cpy_r_r269 = cpy_r_r267 + 16;
    CPy_INCREF(cpy_r_r265);
    *(PyObject * *)cpy_r_r269 = cpy_r_r265;
    cpy_r_r270 = NULL;
    cpy_r_r271 = NULL;
    cpy_r_r272 = NULL;
    cpy_r_r273 = NULL;
    cpy_r_r274 = 2;
    cpy_r_r275 = CPY_INT_TAG;
    cpy_r_r276 = CPyDef_registry___method_op(cpy_r_r247, cpy_r_r254, cpy_r_r259, cpy_r_r261, 4, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r262, cpy_r_r274, cpy_r_r275);
    CPy_DECREF(cpy_r_r254);
    CPy_DECREF(cpy_r_r262);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 135, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r277 = CPyStatic_list_ops___globals;
    cpy_r_r278 = CPyStatics[8895]; /* 'list_set_item_op' */
    cpy_r_r279 = CPyDict_SetItem(cpy_r_r277, cpy_r_r278, cpy_r_r276);
    CPy_DECREF(cpy_r_r276);
    cpy_r_r280 = cpy_r_r279 >= 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 135, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r281 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r282 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r282 != NULL)) goto CPyL146;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r283 = 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 147, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL146: ;
    cpy_r_r284 = CPyStatic_rtypes___int64_rprimitive;
    if (likely(cpy_r_r284 != NULL)) goto CPyL149;
    PyErr_SetString(PyExc_NameError, "value for final name \"int64_rprimitive\" was not set");
    cpy_r_r285 = 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 147, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL149: ;
    cpy_r_r286 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r286 != NULL)) goto CPyL152;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r287 = 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 147, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL152: ;
    cpy_r_r288 = PyList_New(3);
    if (unlikely(cpy_r_r288 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 147, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r289 = (CPyPtr)&((PyListObject *)cpy_r_r288)->ob_item;
    cpy_r_r290 = *(CPyPtr *)cpy_r_r289;
    CPy_INCREF(cpy_r_r282);
    *(PyObject * *)cpy_r_r290 = cpy_r_r282;
    cpy_r_r291 = cpy_r_r290 + 8;
    CPy_INCREF(cpy_r_r284);
    *(PyObject * *)cpy_r_r291 = cpy_r_r284;
    cpy_r_r292 = cpy_r_r290 + 16;
    CPy_INCREF(cpy_r_r286);
    *(PyObject * *)cpy_r_r292 = cpy_r_r286;
    cpy_r_r293 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r293 == NULL)) {
        goto CPyL373;
    } else
        goto CPyL156;
CPyL154: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r294 = 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 148, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL156: ;
    cpy_r_r295 = CPyStatics[8896]; /* 'CPyList_SetItemInt64' */
    cpy_r_r296 = PyList_New(3);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 151, CPyStatic_list_ops___globals);
        goto CPyL374;
    }
    cpy_r_r297 = 0 ? Py_True : Py_False;
    cpy_r_r298 = 0 ? Py_True : Py_False;
    cpy_r_r299 = 1 ? Py_True : Py_False;
    cpy_r_r300 = (CPyPtr)&((PyListObject *)cpy_r_r296)->ob_item;
    cpy_r_r301 = *(CPyPtr *)cpy_r_r300;
    CPy_INCREF(cpy_r_r297);
    *(PyObject * *)cpy_r_r301 = cpy_r_r297;
    cpy_r_r302 = cpy_r_r301 + 8;
    CPy_INCREF(cpy_r_r298);
    *(PyObject * *)cpy_r_r302 = cpy_r_r298;
    cpy_r_r303 = cpy_r_r301 + 16;
    CPy_INCREF(cpy_r_r299);
    *(PyObject * *)cpy_r_r303 = cpy_r_r299;
    cpy_r_r304 = NULL;
    cpy_r_r305 = NULL;
    cpy_r_r306 = NULL;
    cpy_r_r307 = NULL;
    cpy_r_r308 = 2;
    cpy_r_r309 = CPyDef_registry___method_op(cpy_r_r281, cpy_r_r288, cpy_r_r293, cpy_r_r295, 4, cpy_r_r304, cpy_r_r305, cpy_r_r306, cpy_r_r307, cpy_r_r296, cpy_r_r308, 4);
    CPy_DECREF(cpy_r_r288);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 145, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL375;
CPyL158: ;
    cpy_r_r310 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r310 != NULL)) goto CPyL161;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r311 = 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 158, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r312 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r312 != NULL)) goto CPyL164;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r313 = 0;
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 158, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL164: ;
    cpy_r_r314 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r314 != NULL)) goto CPyL167;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r315 = 0;
    if (unlikely(!cpy_r_r315)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 158, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL167: ;
    cpy_r_r316 = PyList_New(3);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 158, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r317 = (CPyPtr)&((PyListObject *)cpy_r_r316)->ob_item;
    cpy_r_r318 = *(CPyPtr *)cpy_r_r317;
    CPy_INCREF(cpy_r_r310);
    *(PyObject * *)cpy_r_r318 = cpy_r_r310;
    cpy_r_r319 = cpy_r_r318 + 8;
    CPy_INCREF(cpy_r_r312);
    *(PyObject * *)cpy_r_r319 = cpy_r_r312;
    cpy_r_r320 = cpy_r_r318 + 16;
    CPy_INCREF(cpy_r_r314);
    *(PyObject * *)cpy_r_r320 = cpy_r_r314;
    cpy_r_r321 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r321 == NULL)) {
        goto CPyL376;
    } else
        goto CPyL171;
CPyL169: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r322 = 0;
    if (unlikely(!cpy_r_r322)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 159, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL171: ;
    cpy_r_r323 = CPyStatics[8897]; /* 'CPyList_SetItemUnsafe' */
    cpy_r_r324 = PyList_New(3);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 162, CPyStatic_list_ops___globals);
        goto CPyL377;
    }
    cpy_r_r325 = 0 ? Py_True : Py_False;
    cpy_r_r326 = 0 ? Py_True : Py_False;
    cpy_r_r327 = 1 ? Py_True : Py_False;
    cpy_r_r328 = (CPyPtr)&((PyListObject *)cpy_r_r324)->ob_item;
    cpy_r_r329 = *(CPyPtr *)cpy_r_r328;
    CPy_INCREF(cpy_r_r325);
    *(PyObject * *)cpy_r_r329 = cpy_r_r325;
    cpy_r_r330 = cpy_r_r329 + 8;
    CPy_INCREF(cpy_r_r326);
    *(PyObject * *)cpy_r_r330 = cpy_r_r326;
    cpy_r_r331 = cpy_r_r329 + 16;
    CPy_INCREF(cpy_r_r327);
    *(PyObject * *)cpy_r_r331 = cpy_r_r327;
    cpy_r_r332 = NULL;
    cpy_r_r333 = NULL;
    cpy_r_r334 = NULL;
    cpy_r_r335 = NULL;
    cpy_r_r336 = 2;
    cpy_r_r337 = CPyDef_registry___custom_op(cpy_r_r316, cpy_r_r321, cpy_r_r323, 4, cpy_r_r332, cpy_r_r333, cpy_r_r334, cpy_r_r335, cpy_r_r324, cpy_r_r336);
    CPy_DECREF(cpy_r_r316);
    CPy_DECREF(cpy_r_r324);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 157, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r338 = CPyStatic_list_ops___globals;
    cpy_r_r339 = CPyStatics[8264]; /* 'new_list_set_item_op' */
    cpy_r_r340 = CPyDict_SetItem(cpy_r_r338, cpy_r_r339, cpy_r_r337);
    CPy_DECREF(cpy_r_r337);
    cpy_r_r341 = cpy_r_r340 >= 0;
    if (unlikely(!cpy_r_r341)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 157, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r342 = CPyStatics[1304]; /* 'append' */
    cpy_r_r343 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r343 != NULL)) goto CPyL177;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r344 = 0;
    if (unlikely(!cpy_r_r344)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 168, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r345 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r345 != NULL)) goto CPyL180;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r346 = 0;
    if (unlikely(!cpy_r_r346)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 168, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL180: ;
    cpy_r_r347 = PyList_New(2);
    if (unlikely(cpy_r_r347 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 168, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r348 = (CPyPtr)&((PyListObject *)cpy_r_r347)->ob_item;
    cpy_r_r349 = *(CPyPtr *)cpy_r_r348;
    CPy_INCREF(cpy_r_r343);
    *(PyObject * *)cpy_r_r349 = cpy_r_r343;
    cpy_r_r350 = cpy_r_r349 + 8;
    CPy_INCREF(cpy_r_r345);
    *(PyObject * *)cpy_r_r350 = cpy_r_r345;
    cpy_r_r351 = CPyStatic_list_ops___globals;
    cpy_r_r352 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r353 = CPyDict_GetItem(cpy_r_r351, cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 169, CPyStatic_list_ops___globals);
        goto CPyL378;
    }
    if (likely(Py_TYPE(cpy_r_r353) == CPyType_rtypes___RPrimitive))
        cpy_r_r354 = cpy_r_r353;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 169, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r353);
        goto CPyL378;
    }
    cpy_r_r355 = CPyStatics[8898]; /* 'PyList_Append' */
    cpy_r_r356 = NULL;
    cpy_r_r357 = NULL;
    cpy_r_r358 = NULL;
    cpy_r_r359 = NULL;
    cpy_r_r360 = NULL;
    cpy_r_r361 = 2;
    cpy_r_r362 = CPY_INT_TAG;
    cpy_r_r363 = CPyDef_registry___method_op(cpy_r_r342, cpy_r_r347, cpy_r_r354, cpy_r_r355, 20, cpy_r_r356, cpy_r_r357, cpy_r_r358, cpy_r_r359, cpy_r_r360, cpy_r_r361, cpy_r_r362);
    CPy_DECREF(cpy_r_r347);
    CPy_DECREF(cpy_r_r354);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 166, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r364 = CPyStatic_list_ops___globals;
    cpy_r_r365 = CPyStatics[8227]; /* 'list_append_op' */
    cpy_r_r366 = CPyDict_SetItem(cpy_r_r364, cpy_r_r365, cpy_r_r363);
    CPy_DECREF(cpy_r_r363);
    cpy_r_r367 = cpy_r_r366 >= 0;
    if (unlikely(!cpy_r_r367)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 166, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r368 = CPyStatics[1307]; /* 'extend' */
    cpy_r_r369 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r369 != NULL)) goto CPyL188;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r370 = 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 177, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL188: ;
    cpy_r_r371 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r371 != NULL)) goto CPyL191;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r372 = 0;
    if (unlikely(!cpy_r_r372)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 177, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL191: ;
    cpy_r_r373 = PyList_New(2);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 177, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r374 = (CPyPtr)&((PyListObject *)cpy_r_r373)->ob_item;
    cpy_r_r375 = *(CPyPtr *)cpy_r_r374;
    CPy_INCREF(cpy_r_r369);
    *(PyObject * *)cpy_r_r375 = cpy_r_r369;
    cpy_r_r376 = cpy_r_r375 + 8;
    CPy_INCREF(cpy_r_r371);
    *(PyObject * *)cpy_r_r376 = cpy_r_r371;
    cpy_r_r377 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r377 == NULL)) {
        goto CPyL379;
    } else
        goto CPyL195;
CPyL193: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r378 = 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 178, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL195: ;
    cpy_r_r379 = CPyStatics[8899]; /* 'CPyList_Extend' */
    cpy_r_r380 = NULL;
    cpy_r_r381 = NULL;
    cpy_r_r382 = NULL;
    cpy_r_r383 = NULL;
    cpy_r_r384 = NULL;
    cpy_r_r385 = 2;
    cpy_r_r386 = CPY_INT_TAG;
    cpy_r_r387 = CPyDef_registry___method_op(cpy_r_r368, cpy_r_r373, cpy_r_r377, cpy_r_r379, 2, cpy_r_r380, cpy_r_r381, cpy_r_r382, cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386);
    CPy_DECREF(cpy_r_r373);
    if (unlikely(cpy_r_r387 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 175, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r388 = CPyStatic_list_ops___globals;
    cpy_r_r389 = CPyStatics[8228]; /* 'list_extend_op' */
    cpy_r_r390 = CPyDict_SetItem(cpy_r_r388, cpy_r_r389, cpy_r_r387);
    CPy_DECREF(cpy_r_r387);
    cpy_r_r391 = cpy_r_r390 >= 0;
    if (unlikely(!cpy_r_r391)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 175, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r392 = CPyStatics[795]; /* 'pop' */
    cpy_r_r393 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r393 != NULL)) goto CPyL200;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r394 = 0;
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 186, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL200: ;
    cpy_r_r395 = PyList_New(1);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 186, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r396 = (CPyPtr)&((PyListObject *)cpy_r_r395)->ob_item;
    cpy_r_r397 = *(CPyPtr *)cpy_r_r396;
    CPy_INCREF(cpy_r_r393);
    *(PyObject * *)cpy_r_r397 = cpy_r_r393;
    cpy_r_r398 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r398 == NULL)) {
        goto CPyL380;
    } else
        goto CPyL204;
CPyL202: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r399 = 0;
    if (unlikely(!cpy_r_r399)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 187, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL204: ;
    cpy_r_r400 = CPyStatics[8900]; /* 'CPyList_PopLast' */
    cpy_r_r401 = NULL;
    cpy_r_r402 = NULL;
    cpy_r_r403 = NULL;
    cpy_r_r404 = NULL;
    cpy_r_r405 = NULL;
    cpy_r_r406 = 2;
    cpy_r_r407 = CPY_INT_TAG;
    cpy_r_r408 = CPyDef_registry___method_op(cpy_r_r392, cpy_r_r395, cpy_r_r398, cpy_r_r400, 2, cpy_r_r401, cpy_r_r402, cpy_r_r403, cpy_r_r404, cpy_r_r405, cpy_r_r406, cpy_r_r407);
    CPy_DECREF(cpy_r_r395);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 184, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r409 = CPyStatic_list_ops___globals;
    cpy_r_r410 = CPyStatics[8075]; /* 'list_pop_last' */
    cpy_r_r411 = CPyDict_SetItem(cpy_r_r409, cpy_r_r410, cpy_r_r408);
    CPy_DECREF(cpy_r_r408);
    cpy_r_r412 = cpy_r_r411 >= 0;
    if (unlikely(!cpy_r_r412)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 184, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r413 = CPyStatics[795]; /* 'pop' */
    cpy_r_r414 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r414 != NULL)) goto CPyL209;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r415 = 0;
    if (unlikely(!cpy_r_r415)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 195, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL209: ;
    cpy_r_r416 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r416 != NULL)) goto CPyL212;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r417 = 0;
    if (unlikely(!cpy_r_r417)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 195, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL212: ;
    cpy_r_r418 = PyList_New(2);
    if (unlikely(cpy_r_r418 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 195, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r419 = (CPyPtr)&((PyListObject *)cpy_r_r418)->ob_item;
    cpy_r_r420 = *(CPyPtr *)cpy_r_r419;
    CPy_INCREF(cpy_r_r414);
    *(PyObject * *)cpy_r_r420 = cpy_r_r414;
    cpy_r_r421 = cpy_r_r420 + 8;
    CPy_INCREF(cpy_r_r416);
    *(PyObject * *)cpy_r_r421 = cpy_r_r416;
    cpy_r_r422 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r422 == NULL)) {
        goto CPyL381;
    } else
        goto CPyL216;
CPyL214: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r423 = 0;
    if (unlikely(!cpy_r_r423)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 196, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL216: ;
    cpy_r_r424 = CPyStatics[8901]; /* 'CPyList_Pop' */
    cpy_r_r425 = NULL;
    cpy_r_r426 = NULL;
    cpy_r_r427 = NULL;
    cpy_r_r428 = NULL;
    cpy_r_r429 = NULL;
    cpy_r_r430 = 2;
    cpy_r_r431 = CPY_INT_TAG;
    cpy_r_r432 = CPyDef_registry___method_op(cpy_r_r413, cpy_r_r418, cpy_r_r422, cpy_r_r424, 2, cpy_r_r425, cpy_r_r426, cpy_r_r427, cpy_r_r428, cpy_r_r429, cpy_r_r430, cpy_r_r431);
    CPy_DECREF(cpy_r_r418);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 193, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r433 = CPyStatic_list_ops___globals;
    cpy_r_r434 = CPyStatics[8902]; /* 'list_pop' */
    cpy_r_r435 = CPyDict_SetItem(cpy_r_r433, cpy_r_r434, cpy_r_r432);
    CPy_DECREF(cpy_r_r432);
    cpy_r_r436 = cpy_r_r435 >= 0;
    if (unlikely(!cpy_r_r436)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 193, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r437 = CPyStatics[226]; /* 'count' */
    cpy_r_r438 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r438 != NULL)) goto CPyL221;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r439 = 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 204, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL221: ;
    cpy_r_r440 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r440 != NULL)) goto CPyL224;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r441 = 0;
    if (unlikely(!cpy_r_r441)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 204, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL224: ;
    cpy_r_r442 = PyList_New(2);
    if (unlikely(cpy_r_r442 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 204, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r443 = (CPyPtr)&((PyListObject *)cpy_r_r442)->ob_item;
    cpy_r_r444 = *(CPyPtr *)cpy_r_r443;
    CPy_INCREF(cpy_r_r438);
    *(PyObject * *)cpy_r_r444 = cpy_r_r438;
    cpy_r_r445 = cpy_r_r444 + 8;
    CPy_INCREF(cpy_r_r440);
    *(PyObject * *)cpy_r_r445 = cpy_r_r440;
    cpy_r_r446 = CPyStatic_rtypes___short_int_rprimitive;
    if (unlikely(cpy_r_r446 == NULL)) {
        goto CPyL382;
    } else
        goto CPyL228;
CPyL226: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"short_int_rprimitive\" was not set");
    cpy_r_r447 = 0;
    if (unlikely(!cpy_r_r447)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 205, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL228: ;
    cpy_r_r448 = CPyStatics[8903]; /* 'CPyList_Count' */
    cpy_r_r449 = NULL;
    cpy_r_r450 = NULL;
    cpy_r_r451 = NULL;
    cpy_r_r452 = NULL;
    cpy_r_r453 = NULL;
    cpy_r_r454 = 2;
    cpy_r_r455 = CPY_INT_TAG;
    cpy_r_r456 = CPyDef_registry___method_op(cpy_r_r437, cpy_r_r442, cpy_r_r446, cpy_r_r448, 2, cpy_r_r449, cpy_r_r450, cpy_r_r451, cpy_r_r452, cpy_r_r453, cpy_r_r454, cpy_r_r455);
    CPy_DECREF(cpy_r_r442);
    if (unlikely(cpy_r_r456 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 202, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL383;
CPyL229: ;
    cpy_r_r457 = CPyStatics[5517]; /* 'insert' */
    cpy_r_r458 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r458 != NULL)) goto CPyL232;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r459 = 0;
    if (unlikely(!cpy_r_r459)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 213, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL232: ;
    cpy_r_r460 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r460 != NULL)) goto CPyL235;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 213, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL235: ;
    cpy_r_r462 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r462 != NULL)) goto CPyL238;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r463 = 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 213, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL238: ;
    cpy_r_r464 = PyList_New(3);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 213, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r465 = (CPyPtr)&((PyListObject *)cpy_r_r464)->ob_item;
    cpy_r_r466 = *(CPyPtr *)cpy_r_r465;
    CPy_INCREF(cpy_r_r458);
    *(PyObject * *)cpy_r_r466 = cpy_r_r458;
    cpy_r_r467 = cpy_r_r466 + 8;
    CPy_INCREF(cpy_r_r460);
    *(PyObject * *)cpy_r_r467 = cpy_r_r460;
    cpy_r_r468 = cpy_r_r466 + 16;
    CPy_INCREF(cpy_r_r462);
    *(PyObject * *)cpy_r_r468 = cpy_r_r462;
    cpy_r_r469 = CPyStatic_list_ops___globals;
    cpy_r_r470 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r471 = CPyDict_GetItem(cpy_r_r469, cpy_r_r470);
    if (unlikely(cpy_r_r471 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 214, CPyStatic_list_ops___globals);
        goto CPyL384;
    }
    if (likely(Py_TYPE(cpy_r_r471) == CPyType_rtypes___RPrimitive))
        cpy_r_r472 = cpy_r_r471;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 214, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r471);
        goto CPyL384;
    }
    cpy_r_r473 = CPyStatics[8904]; /* 'CPyList_Insert' */
    cpy_r_r474 = NULL;
    cpy_r_r475 = NULL;
    cpy_r_r476 = NULL;
    cpy_r_r477 = NULL;
    cpy_r_r478 = NULL;
    cpy_r_r479 = 2;
    cpy_r_r480 = CPY_INT_TAG;
    cpy_r_r481 = CPyDef_registry___method_op(cpy_r_r457, cpy_r_r464, cpy_r_r472, cpy_r_r473, 20, cpy_r_r474, cpy_r_r475, cpy_r_r476, cpy_r_r477, cpy_r_r478, cpy_r_r479, cpy_r_r480);
    CPy_DECREF(cpy_r_r464);
    CPy_DECREF(cpy_r_r472);
    if (unlikely(cpy_r_r481 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 211, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL385;
CPyL242: ;
    cpy_r_r482 = CPyStatics[227]; /* 'sort' */
    cpy_r_r483 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r483 != NULL)) goto CPyL245;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r484 = 0;
    if (unlikely(!cpy_r_r484)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 222, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL245: ;
    cpy_r_r485 = PyList_New(1);
    if (unlikely(cpy_r_r485 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 222, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r486 = (CPyPtr)&((PyListObject *)cpy_r_r485)->ob_item;
    cpy_r_r487 = *(CPyPtr *)cpy_r_r486;
    CPy_INCREF(cpy_r_r483);
    *(PyObject * *)cpy_r_r487 = cpy_r_r483;
    cpy_r_r488 = CPyStatic_list_ops___globals;
    cpy_r_r489 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r490 = CPyDict_GetItem(cpy_r_r488, cpy_r_r489);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 223, CPyStatic_list_ops___globals);
        goto CPyL386;
    }
    if (likely(Py_TYPE(cpy_r_r490) == CPyType_rtypes___RPrimitive))
        cpy_r_r491 = cpy_r_r490;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 223, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r490);
        goto CPyL386;
    }
    cpy_r_r492 = CPyStatics[8905]; /* 'PyList_Sort' */
    cpy_r_r493 = NULL;
    cpy_r_r494 = NULL;
    cpy_r_r495 = NULL;
    cpy_r_r496 = NULL;
    cpy_r_r497 = NULL;
    cpy_r_r498 = 2;
    cpy_r_r499 = CPY_INT_TAG;
    cpy_r_r500 = CPyDef_registry___method_op(cpy_r_r482, cpy_r_r485, cpy_r_r491, cpy_r_r492, 20, cpy_r_r493, cpy_r_r494, cpy_r_r495, cpy_r_r496, cpy_r_r497, cpy_r_r498, cpy_r_r499);
    CPy_DECREF(cpy_r_r485);
    CPy_DECREF(cpy_r_r491);
    if (unlikely(cpy_r_r500 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 220, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL387;
CPyL249: ;
    cpy_r_r501 = CPyStatics[467]; /* 'reverse' */
    cpy_r_r502 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r502 != NULL)) goto CPyL252;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r503 = 0;
    if (unlikely(!cpy_r_r503)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 231, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL252: ;
    cpy_r_r504 = PyList_New(1);
    if (unlikely(cpy_r_r504 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 231, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r505 = (CPyPtr)&((PyListObject *)cpy_r_r504)->ob_item;
    cpy_r_r506 = *(CPyPtr *)cpy_r_r505;
    CPy_INCREF(cpy_r_r502);
    *(PyObject * *)cpy_r_r506 = cpy_r_r502;
    cpy_r_r507 = CPyStatic_list_ops___globals;
    cpy_r_r508 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r509 = CPyDict_GetItem(cpy_r_r507, cpy_r_r508);
    if (unlikely(cpy_r_r509 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 232, CPyStatic_list_ops___globals);
        goto CPyL388;
    }
    if (likely(Py_TYPE(cpy_r_r509) == CPyType_rtypes___RPrimitive))
        cpy_r_r510 = cpy_r_r509;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 232, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r509);
        goto CPyL388;
    }
    cpy_r_r511 = CPyStatics[8906]; /* 'PyList_Reverse' */
    cpy_r_r512 = NULL;
    cpy_r_r513 = NULL;
    cpy_r_r514 = NULL;
    cpy_r_r515 = NULL;
    cpy_r_r516 = NULL;
    cpy_r_r517 = 2;
    cpy_r_r518 = CPY_INT_TAG;
    cpy_r_r519 = CPyDef_registry___method_op(cpy_r_r501, cpy_r_r504, cpy_r_r510, cpy_r_r511, 20, cpy_r_r512, cpy_r_r513, cpy_r_r514, cpy_r_r515, cpy_r_r516, cpy_r_r517, cpy_r_r518);
    CPy_DECREF(cpy_r_r504);
    CPy_DECREF(cpy_r_r510);
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 229, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL389;
CPyL256: ;
    cpy_r_r520 = CPyStatics[347]; /* 'remove' */
    cpy_r_r521 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r521 != NULL)) goto CPyL259;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r522 = 0;
    if (unlikely(!cpy_r_r522)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 240, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL259: ;
    cpy_r_r523 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r523 != NULL)) goto CPyL262;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r524 = 0;
    if (unlikely(!cpy_r_r524)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 240, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL262: ;
    cpy_r_r525 = PyList_New(2);
    if (unlikely(cpy_r_r525 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 240, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r526 = (CPyPtr)&((PyListObject *)cpy_r_r525)->ob_item;
    cpy_r_r527 = *(CPyPtr *)cpy_r_r526;
    CPy_INCREF(cpy_r_r521);
    *(PyObject * *)cpy_r_r527 = cpy_r_r521;
    cpy_r_r528 = cpy_r_r527 + 8;
    CPy_INCREF(cpy_r_r523);
    *(PyObject * *)cpy_r_r528 = cpy_r_r523;
    cpy_r_r529 = CPyStatic_list_ops___globals;
    cpy_r_r530 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r531 = CPyDict_GetItem(cpy_r_r529, cpy_r_r530);
    if (unlikely(cpy_r_r531 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 241, CPyStatic_list_ops___globals);
        goto CPyL390;
    }
    if (likely(Py_TYPE(cpy_r_r531) == CPyType_rtypes___RPrimitive))
        cpy_r_r532 = cpy_r_r531;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 241, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r531);
        goto CPyL390;
    }
    cpy_r_r533 = CPyStatics[8907]; /* 'CPyList_Remove' */
    cpy_r_r534 = NULL;
    cpy_r_r535 = NULL;
    cpy_r_r536 = NULL;
    cpy_r_r537 = NULL;
    cpy_r_r538 = NULL;
    cpy_r_r539 = 2;
    cpy_r_r540 = CPY_INT_TAG;
    cpy_r_r541 = CPyDef_registry___method_op(cpy_r_r520, cpy_r_r525, cpy_r_r532, cpy_r_r533, 20, cpy_r_r534, cpy_r_r535, cpy_r_r536, cpy_r_r537, cpy_r_r538, cpy_r_r539, cpy_r_r540);
    CPy_DECREF(cpy_r_r525);
    CPy_DECREF(cpy_r_r532);
    if (unlikely(cpy_r_r541 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 238, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL391;
CPyL266: ;
    cpy_r_r542 = CPyStatics[56]; /* 'index' */
    cpy_r_r543 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r543 != NULL)) goto CPyL269;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r544 = 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 249, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL269: ;
    cpy_r_r545 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r545 != NULL)) goto CPyL272;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r546 = 0;
    if (unlikely(!cpy_r_r546)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 249, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL272: ;
    cpy_r_r547 = PyList_New(2);
    if (unlikely(cpy_r_r547 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 249, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r548 = (CPyPtr)&((PyListObject *)cpy_r_r547)->ob_item;
    cpy_r_r549 = *(CPyPtr *)cpy_r_r548;
    CPy_INCREF(cpy_r_r543);
    *(PyObject * *)cpy_r_r549 = cpy_r_r543;
    cpy_r_r550 = cpy_r_r549 + 8;
    CPy_INCREF(cpy_r_r545);
    *(PyObject * *)cpy_r_r550 = cpy_r_r545;
    cpy_r_r551 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r551 == NULL)) {
        goto CPyL392;
    } else
        goto CPyL276;
CPyL274: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r552 = 0;
    if (unlikely(!cpy_r_r552)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 250, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL276: ;
    cpy_r_r553 = CPyStatics[8908]; /* 'CPyList_Index' */
    cpy_r_r554 = NULL;
    cpy_r_r555 = NULL;
    cpy_r_r556 = NULL;
    cpy_r_r557 = NULL;
    cpy_r_r558 = NULL;
    cpy_r_r559 = 2;
    cpy_r_r560 = CPY_INT_TAG;
    cpy_r_r561 = CPyDef_registry___method_op(cpy_r_r542, cpy_r_r547, cpy_r_r551, cpy_r_r553, 2, cpy_r_r554, cpy_r_r555, cpy_r_r556, cpy_r_r557, cpy_r_r558, cpy_r_r559, cpy_r_r560);
    CPy_DECREF(cpy_r_r547);
    if (unlikely(cpy_r_r561 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 247, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL393;
CPyL277: ;
    cpy_r_r562 = CPyStatics[282]; /* '*' */
    cpy_r_r563 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r563 != NULL)) goto CPyL280;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r564 = 0;
    if (unlikely(!cpy_r_r564)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 258, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL280: ;
    cpy_r_r565 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r565 != NULL)) goto CPyL283;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r566 = 0;
    if (unlikely(!cpy_r_r566)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 258, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL283: ;
    cpy_r_r567 = PyList_New(2);
    if (unlikely(cpy_r_r567 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 258, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r568 = (CPyPtr)&((PyListObject *)cpy_r_r567)->ob_item;
    cpy_r_r569 = *(CPyPtr *)cpy_r_r568;
    CPy_INCREF(cpy_r_r563);
    *(PyObject * *)cpy_r_r569 = cpy_r_r563;
    cpy_r_r570 = cpy_r_r569 + 8;
    CPy_INCREF(cpy_r_r565);
    *(PyObject * *)cpy_r_r570 = cpy_r_r565;
    cpy_r_r571 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r571 == NULL)) {
        goto CPyL394;
    } else
        goto CPyL287;
CPyL285: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r572 = 0;
    if (unlikely(!cpy_r_r572)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 259, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL287: ;
    cpy_r_r573 = CPyStatics[8909]; /* 'CPySequence_Multiply' */
    cpy_r_r574 = NULL;
    cpy_r_r575 = NULL;
    cpy_r_r576 = NULL;
    cpy_r_r577 = NULL;
    cpy_r_r578 = NULL;
    cpy_r_r579 = 2;
    cpy_r_r580 = CPY_INT_TAG;
    cpy_r_r581 = CPyDef_registry___binary_op(cpy_r_r562, cpy_r_r567, cpy_r_r571, cpy_r_r573, 2, cpy_r_r574, cpy_r_r575, cpy_r_r576, cpy_r_r577, cpy_r_r578, cpy_r_r579, cpy_r_r580);
    CPy_DECREF(cpy_r_r567);
    if (unlikely(cpy_r_r581 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 256, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL395;
CPyL288: ;
    cpy_r_r582 = CPyStatics[282]; /* '*' */
    cpy_r_r583 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r583 != NULL)) goto CPyL291;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r584 = 0;
    if (unlikely(!cpy_r_r584)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 267, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL291: ;
    cpy_r_r585 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r585 != NULL)) goto CPyL294;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r586 = 0;
    if (unlikely(!cpy_r_r586)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 267, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL294: ;
    cpy_r_r587 = PyList_New(2);
    if (unlikely(cpy_r_r587 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 267, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r588 = (CPyPtr)&((PyListObject *)cpy_r_r587)->ob_item;
    cpy_r_r589 = *(CPyPtr *)cpy_r_r588;
    CPy_INCREF(cpy_r_r583);
    *(PyObject * *)cpy_r_r589 = cpy_r_r583;
    cpy_r_r590 = cpy_r_r589 + 8;
    CPy_INCREF(cpy_r_r585);
    *(PyObject * *)cpy_r_r590 = cpy_r_r585;
    cpy_r_r591 = CPyStatic_rtypes___list_rprimitive;
    if (unlikely(cpy_r_r591 == NULL)) {
        goto CPyL396;
    } else
        goto CPyL298;
CPyL296: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r592 = 0;
    if (unlikely(!cpy_r_r592)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 268, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL298: ;
    cpy_r_r593 = CPyStatics[8910]; /* 'CPySequence_RMultiply' */
    cpy_r_r594 = NULL;
    cpy_r_r595 = NULL;
    cpy_r_r596 = NULL;
    cpy_r_r597 = NULL;
    cpy_r_r598 = NULL;
    cpy_r_r599 = 2;
    cpy_r_r600 = CPY_INT_TAG;
    cpy_r_r601 = CPyDef_registry___binary_op(cpy_r_r582, cpy_r_r587, cpy_r_r591, cpy_r_r593, 2, cpy_r_r594, cpy_r_r595, cpy_r_r596, cpy_r_r597, cpy_r_r598, cpy_r_r599, cpy_r_r600);
    CPy_DECREF(cpy_r_r587);
    if (unlikely(cpy_r_r601 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 265, CPyStatic_list_ops___globals);
        goto CPyL347;
    } else
        goto CPyL397;
CPyL299: ;
    cpy_r_r602 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r602 != NULL)) goto CPyL302;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r603 = 0;
    if (unlikely(!cpy_r_r603)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 275, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL302: ;
    cpy_r_r604 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r604 != NULL)) goto CPyL305;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r605 = 0;
    if (unlikely(!cpy_r_r605)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 275, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL305: ;
    cpy_r_r606 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r606 != NULL)) goto CPyL308;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r607 = 0;
    if (unlikely(!cpy_r_r607)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 275, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL308: ;
    cpy_r_r608 = PyList_New(3);
    if (unlikely(cpy_r_r608 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 275, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r609 = (CPyPtr)&((PyListObject *)cpy_r_r608)->ob_item;
    cpy_r_r610 = *(CPyPtr *)cpy_r_r609;
    CPy_INCREF(cpy_r_r602);
    *(PyObject * *)cpy_r_r610 = cpy_r_r602;
    cpy_r_r611 = cpy_r_r610 + 8;
    CPy_INCREF(cpy_r_r604);
    *(PyObject * *)cpy_r_r611 = cpy_r_r604;
    cpy_r_r612 = cpy_r_r610 + 16;
    CPy_INCREF(cpy_r_r606);
    *(PyObject * *)cpy_r_r612 = cpy_r_r606;
    cpy_r_r613 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r613 == NULL)) {
        goto CPyL398;
    } else
        goto CPyL312;
CPyL310: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r614 = 0;
    if (unlikely(!cpy_r_r614)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 276, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL312: ;
    cpy_r_r615 = CPyStatics[8911]; /* 'CPyList_GetSlice' */
    cpy_r_r616 = NULL;
    cpy_r_r617 = NULL;
    cpy_r_r618 = NULL;
    cpy_r_r619 = NULL;
    cpy_r_r620 = NULL;
    cpy_r_r621 = 2;
    cpy_r_r622 = CPyDef_registry___custom_op(cpy_r_r608, cpy_r_r613, cpy_r_r615, 2, cpy_r_r616, cpy_r_r617, cpy_r_r618, cpy_r_r619, cpy_r_r620, cpy_r_r621);
    CPy_DECREF(cpy_r_r608);
    if (unlikely(cpy_r_r622 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 274, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r623 = CPyStatic_list_ops___globals;
    cpy_r_r624 = CPyStatics[8219]; /* 'list_slice_op' */
    cpy_r_r625 = CPyDict_SetItem(cpy_r_r623, cpy_r_r624, cpy_r_r622);
    CPy_DECREF(cpy_r_r622);
    cpy_r_r626 = cpy_r_r625 >= 0;
    if (unlikely(!cpy_r_r626)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 274, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r627 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r627 != NULL)) goto CPyL317;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r628 = 0;
    if (unlikely(!cpy_r_r628)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 282, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL317: ;
    cpy_r_r629 = PyList_New(1);
    if (unlikely(cpy_r_r629 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 282, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r630 = (CPyPtr)&((PyListObject *)cpy_r_r629)->ob_item;
    cpy_r_r631 = *(CPyPtr *)cpy_r_r630;
    CPy_INCREF(cpy_r_r627);
    *(PyObject * *)cpy_r_r631 = cpy_r_r627;
    cpy_r_r632 = CPyStatic_list_ops___globals;
    cpy_r_r633 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r634 = CPyDict_GetItem(cpy_r_r632, cpy_r_r633);
    if (unlikely(cpy_r_r634 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 283, CPyStatic_list_ops___globals);
        goto CPyL399;
    }
    if (likely(Py_TYPE(cpy_r_r634) == CPyType_rtypes___RPrimitive))
        cpy_r_r635 = cpy_r_r634;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 283, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r634);
        goto CPyL399;
    }
    cpy_r_r636 = CPyStatics[8912]; /* 'CPySequence_Check' */
    cpy_r_r637 = NULL;
    cpy_r_r638 = NULL;
    cpy_r_r639 = NULL;
    cpy_r_r640 = NULL;
    cpy_r_r641 = NULL;
    cpy_r_r642 = 2;
    cpy_r_r643 = CPyDef_registry___custom_op(cpy_r_r629, cpy_r_r635, cpy_r_r636, 0, cpy_r_r637, cpy_r_r638, cpy_r_r639, cpy_r_r640, cpy_r_r641, cpy_r_r642);
    CPy_DECREF(cpy_r_r629);
    CPy_DECREF(cpy_r_r635);
    if (unlikely(cpy_r_r643 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 281, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r644 = CPyStatic_list_ops___globals;
    cpy_r_r645 = CPyStatics[8480]; /* 'supports_sequence_protocol' */
    cpy_r_r646 = CPyDict_SetItem(cpy_r_r644, cpy_r_r645, cpy_r_r643);
    CPy_DECREF(cpy_r_r643);
    cpy_r_r647 = cpy_r_r646 >= 0;
    if (unlikely(!cpy_r_r647)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 281, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r648 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r648 != NULL)) goto CPyL325;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r649 = 0;
    if (unlikely(!cpy_r_r649)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 289, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL325: ;
    cpy_r_r650 = CPyStatic_list_ops___globals;
    cpy_r_r651 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r652 = CPyDict_GetItem(cpy_r_r650, cpy_r_r651);
    if (unlikely(cpy_r_r652 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 289, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    if (likely(Py_TYPE(cpy_r_r652) == CPyType_rtypes___RPrimitive))
        cpy_r_r653 = cpy_r_r652;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 289, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r652);
        goto CPyL347;
    }
    cpy_r_r654 = PyList_New(2);
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 289, CPyStatic_list_ops___globals);
        goto CPyL400;
    }
    cpy_r_r655 = (CPyPtr)&((PyListObject *)cpy_r_r654)->ob_item;
    cpy_r_r656 = *(CPyPtr *)cpy_r_r655;
    CPy_INCREF(cpy_r_r648);
    *(PyObject * *)cpy_r_r656 = cpy_r_r648;
    cpy_r_r657 = cpy_r_r656 + 8;
    *(PyObject * *)cpy_r_r657 = cpy_r_r653;
    cpy_r_r658 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r658 == NULL)) {
        goto CPyL401;
    } else
        goto CPyL331;
CPyL329: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r659 = 0;
    if (unlikely(!cpy_r_r659)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 290, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL331: ;
    cpy_r_r660 = CPyStatics[8913]; /* 'PySequence_GetItem' */
    cpy_r_r661 = NULL;
    cpy_r_r662 = NULL;
    cpy_r_r663 = NULL;
    cpy_r_r664 = NULL;
    cpy_r_r665 = NULL;
    cpy_r_r666 = 2;
    cpy_r_r667 = CPyDef_registry___custom_op(cpy_r_r654, cpy_r_r658, cpy_r_r660, 0, cpy_r_r661, cpy_r_r662, cpy_r_r663, cpy_r_r664, cpy_r_r665, cpy_r_r666);
    CPy_DECREF(cpy_r_r654);
    if (unlikely(cpy_r_r667 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 288, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r668 = CPyStatic_list_ops___globals;
    cpy_r_r669 = CPyStatics[8481]; /* 'sequence_get_item' */
    cpy_r_r670 = CPyDict_SetItem(cpy_r_r668, cpy_r_r669, cpy_r_r667);
    CPy_DECREF(cpy_r_r667);
    cpy_r_r671 = cpy_r_r670 >= 0;
    if (unlikely(!cpy_r_r671)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 288, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r672 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r672 != NULL)) goto CPyL336;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r673 = 0;
    if (unlikely(!cpy_r_r673)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL336: ;
    cpy_r_r674 = CPyStatic_list_ops___globals;
    cpy_r_r675 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r676 = CPyDict_GetItem(cpy_r_r674, cpy_r_r675);
    if (unlikely(cpy_r_r676 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    if (likely(Py_TYPE(cpy_r_r676) == CPyType_rtypes___RPrimitive))
        cpy_r_r677 = cpy_r_r676;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r676);
        goto CPyL347;
    }
    cpy_r_r678 = CPyStatic_list_ops___globals;
    cpy_r_r679 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r680 = CPyDict_GetItem(cpy_r_r678, cpy_r_r679);
    if (unlikely(cpy_r_r680 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals);
        goto CPyL402;
    }
    if (likely(Py_TYPE(cpy_r_r680) == CPyType_rtypes___RPrimitive))
        cpy_r_r681 = cpy_r_r680;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r680);
        goto CPyL402;
    }
    cpy_r_r682 = PyList_New(3);
    if (unlikely(cpy_r_r682 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 296, CPyStatic_list_ops___globals);
        goto CPyL403;
    }
    cpy_r_r683 = (CPyPtr)&((PyListObject *)cpy_r_r682)->ob_item;
    cpy_r_r684 = *(CPyPtr *)cpy_r_r683;
    CPy_INCREF(cpy_r_r672);
    *(PyObject * *)cpy_r_r684 = cpy_r_r672;
    cpy_r_r685 = cpy_r_r684 + 8;
    *(PyObject * *)cpy_r_r685 = cpy_r_r677;
    cpy_r_r686 = cpy_r_r684 + 16;
    *(PyObject * *)cpy_r_r686 = cpy_r_r681;
    cpy_r_r687 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r687 == NULL)) {
        goto CPyL404;
    } else
        goto CPyL344;
CPyL342: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r688 = 0;
    if (unlikely(!cpy_r_r688)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 297, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    CPy_Unreachable();
CPyL344: ;
    cpy_r_r689 = CPyStatics[8914]; /* 'PySequence_GetSlice' */
    cpy_r_r690 = NULL;
    cpy_r_r691 = NULL;
    cpy_r_r692 = NULL;
    cpy_r_r693 = NULL;
    cpy_r_r694 = NULL;
    cpy_r_r695 = 2;
    cpy_r_r696 = CPyDef_registry___custom_op(cpy_r_r682, cpy_r_r687, cpy_r_r689, 2, cpy_r_r690, cpy_r_r691, cpy_r_r692, cpy_r_r693, cpy_r_r694, cpy_r_r695);
    CPy_DECREF(cpy_r_r682);
    if (unlikely(cpy_r_r696 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 295, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    cpy_r_r697 = CPyStatic_list_ops___globals;
    cpy_r_r698 = CPyStatics[8482]; /* 'sequence_get_slice' */
    cpy_r_r699 = CPyDict_SetItem(cpy_r_r697, cpy_r_r698, cpy_r_r696);
    CPy_DECREF(cpy_r_r696);
    cpy_r_r700 = cpy_r_r699 >= 0;
    if (unlikely(!cpy_r_r700)) {
        CPy_AddTraceback("mypyc/primitives/list_ops.py", "<module>", 295, CPyStatic_list_ops___globals);
        goto CPyL347;
    }
    return 1;
CPyL347: ;
    cpy_r_r701 = 2;
    return cpy_r_r701;
CPyL348: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL349: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL16;
CPyL350: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL22;
CPyL351: ;
    CPy_DecRef(cpy_r_r48);
    goto CPyL25;
CPyL352: ;
    CPy_DecRef(cpy_r_r48);
    CPyTagged_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    goto CPyL347;
CPyL353: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL29;
CPyL354: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL347;
CPyL355: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL33;
CPyL356: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL347;
CPyL357: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL41;
CPyL358: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL44;
CPyL359: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL56;
CPyL360: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL68;
CPyL361: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL71;
CPyL362: ;
    CPy_DecRef(cpy_r_r157);
    goto CPyL79;
CPyL363: ;
    CPy_DECREF(cpy_r_r169);
    goto CPyL82;
CPyL364: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL90;
CPyL365: ;
    CPy_DECREF(cpy_r_r187);
    goto CPyL93;
CPyL366: ;
    CPy_DecRef(cpy_r_r193);
    goto CPyL101;
CPyL367: ;
    CPy_DECREF(cpy_r_r206);
    goto CPyL104;
CPyL368: ;
    CPy_DecRef(cpy_r_r212);
    goto CPyL112;
CPyL369: ;
    CPy_DECREF(cpy_r_r224);
    goto CPyL115;
CPyL370: ;
    CPy_DecRef(cpy_r_r229);
    goto CPyL123;
CPyL371: ;
    CPy_DecRef(cpy_r_r254);
    goto CPyL138;
CPyL372: ;
    CPy_DecRef(cpy_r_r254);
    goto CPyL347;
CPyL373: ;
    CPy_DecRef(cpy_r_r288);
    goto CPyL154;
CPyL374: ;
    CPy_DecRef(cpy_r_r288);
    goto CPyL347;
CPyL375: ;
    CPy_DECREF(cpy_r_r309);
    goto CPyL158;
CPyL376: ;
    CPy_DecRef(cpy_r_r316);
    goto CPyL169;
CPyL377: ;
    CPy_DecRef(cpy_r_r316);
    goto CPyL347;
CPyL378: ;
    CPy_DecRef(cpy_r_r347);
    goto CPyL347;
CPyL379: ;
    CPy_DecRef(cpy_r_r373);
    goto CPyL193;
CPyL380: ;
    CPy_DecRef(cpy_r_r395);
    goto CPyL202;
CPyL381: ;
    CPy_DecRef(cpy_r_r418);
    goto CPyL214;
CPyL382: ;
    CPy_DecRef(cpy_r_r442);
    goto CPyL226;
CPyL383: ;
    CPy_DECREF(cpy_r_r456);
    goto CPyL229;
CPyL384: ;
    CPy_DecRef(cpy_r_r464);
    goto CPyL347;
CPyL385: ;
    CPy_DECREF(cpy_r_r481);
    goto CPyL242;
CPyL386: ;
    CPy_DecRef(cpy_r_r485);
    goto CPyL347;
CPyL387: ;
    CPy_DECREF(cpy_r_r500);
    goto CPyL249;
CPyL388: ;
    CPy_DecRef(cpy_r_r504);
    goto CPyL347;
CPyL389: ;
    CPy_DECREF(cpy_r_r519);
    goto CPyL256;
CPyL390: ;
    CPy_DecRef(cpy_r_r525);
    goto CPyL347;
CPyL391: ;
    CPy_DECREF(cpy_r_r541);
    goto CPyL266;
CPyL392: ;
    CPy_DecRef(cpy_r_r547);
    goto CPyL274;
CPyL393: ;
    CPy_DECREF(cpy_r_r561);
    goto CPyL277;
CPyL394: ;
    CPy_DecRef(cpy_r_r567);
    goto CPyL285;
CPyL395: ;
    CPy_DECREF(cpy_r_r581);
    goto CPyL288;
CPyL396: ;
    CPy_DecRef(cpy_r_r587);
    goto CPyL296;
CPyL397: ;
    CPy_DECREF(cpy_r_r601);
    goto CPyL299;
CPyL398: ;
    CPy_DecRef(cpy_r_r608);
    goto CPyL310;
CPyL399: ;
    CPy_DecRef(cpy_r_r629);
    goto CPyL347;
CPyL400: ;
    CPy_DecRef(cpy_r_r653);
    goto CPyL347;
CPyL401: ;
    CPy_DecRef(cpy_r_r654);
    goto CPyL329;
CPyL402: ;
    CPy_DecRef(cpy_r_r677);
    goto CPyL347;
CPyL403: ;
    CPy_DecRef(cpy_r_r677);
    CPy_DecRef(cpy_r_r681);
    goto CPyL347;
CPyL404: ;
    CPy_DecRef(cpy_r_r682);
    goto CPyL342;
}
