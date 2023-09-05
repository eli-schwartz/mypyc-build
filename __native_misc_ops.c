#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef misc_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef misc_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.misc_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    misc_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___misc_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___misc_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___misc_ops_internal);
        return CPyModule_mypyc___primitives___misc_ops_internal;
    }
    CPyModule_mypyc___primitives___misc_ops_internal = PyModule_Create(&misc_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___misc_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___misc_ops_internal, "__name__");
    CPyStatic_misc_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___misc_ops_internal);
    if (unlikely(CPyStatic_misc_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_misc_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___misc_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___misc_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_misc_ops_____top_level__(void) {
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
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
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
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    CPyPtr cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyPtr cpy_r_r152;
    CPyPtr cpy_r_r153;
    CPyPtr cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    int32_t cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    CPyPtr cpy_r_r189;
    CPyPtr cpy_r_r190;
    CPyPtr cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    CPyPtr cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    char cpy_r_r231;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    CPyPtr cpy_r_r237;
    CPyPtr cpy_r_r238;
    CPyPtr cpy_r_r239;
    CPyPtr cpy_r_r240;
    CPyPtr cpy_r_r241;
    CPyPtr cpy_r_r242;
    CPyPtr cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    CPyPtr cpy_r_r267;
    CPyPtr cpy_r_r268;
    CPyPtr cpy_r_r269;
    CPyPtr cpy_r_r270;
    CPyPtr cpy_r_r271;
    PyObject *cpy_r_r272;
    char cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    int32_t cpy_r_r284;
    char cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    CPyPtr cpy_r_r306;
    CPyPtr cpy_r_r307;
    CPyPtr cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    char cpy_r_r320;
    CPyTagged cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    int32_t cpy_r_r325;
    char cpy_r_r326;
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
    char cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    int32_t cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    CPyPtr cpy_r_r354;
    CPyPtr cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    char cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    char cpy_r_r367;
    CPyTagged cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    int32_t cpy_r_r372;
    char cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    char cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    CPyPtr cpy_r_r382;
    CPyPtr cpy_r_r383;
    CPyPtr cpy_r_r384;
    CPyPtr cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    char cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    char cpy_r_r394;
    CPyTagged cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    int32_t cpy_r_r399;
    char cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    CPyPtr cpy_r_r405;
    CPyPtr cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    char cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    char cpy_r_r415;
    CPyTagged cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    int32_t cpy_r_r420;
    char cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    char cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    int32_t cpy_r_r429;
    char cpy_r_r430;
    PyObject *cpy_r_r431;
    char cpy_r_r432;
    PyObject *cpy_r_r433;
    char cpy_r_r434;
    PyObject *cpy_r_r435;
    char cpy_r_r436;
    PyObject *cpy_r_r437;
    CPyPtr cpy_r_r438;
    CPyPtr cpy_r_r439;
    CPyPtr cpy_r_r440;
    CPyPtr cpy_r_r441;
    PyObject *cpy_r_r442;
    char cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    char cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    int32_t cpy_r_r454;
    char cpy_r_r455;
    PyObject *cpy_r_r456;
    char cpy_r_r457;
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
    CPyPtr cpy_r_r469;
    PyObject *cpy_r_r470;
    char cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    char cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    int32_t cpy_r_r482;
    char cpy_r_r483;
    PyObject *cpy_r_r484;
    char cpy_r_r485;
    PyObject *cpy_r_r486;
    PyObject *cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    CPyPtr cpy_r_r491;
    CPyPtr cpy_r_r492;
    CPyPtr cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
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
    int32_t cpy_r_r508;
    char cpy_r_r509;
    PyObject *cpy_r_r510;
    char cpy_r_r511;
    PyObject *cpy_r_r512;
    char cpy_r_r513;
    PyObject *cpy_r_r514;
    char cpy_r_r515;
    PyObject *cpy_r_r516;
    CPyPtr cpy_r_r517;
    CPyPtr cpy_r_r518;
    CPyPtr cpy_r_r519;
    CPyPtr cpy_r_r520;
    PyObject *cpy_r_r521;
    char cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    char cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    int32_t cpy_r_r533;
    char cpy_r_r534;
    char cpy_r_r535;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", -1, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_misc_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 3, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10252]; /* ('ERR_FALSE', 'ERR_MAGIC', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_misc_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 5, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10268]; /* ('bit_rprimitive', 'bool_rprimitive',
                                      'c_int_rprimitive', 'c_pointer_rprimitive',
                                      'c_pyssize_t_rprimitive', 'dict_rprimitive',
                                      'int_rprimitive', 'object_pointer_rprimitive',
                                      'object_rprimitive', 'str_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_misc_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 6, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10269]; /* ('ERR_NEG_INT', 'custom_op', 'function_op',
                                      'load_address_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_misc_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 18, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 21, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8915]; /* 'PyBool_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 21, CPyStatic_misc_ops___globals);
        goto CPyL288;
    } else
        goto CPyL289;
CPyL11: ;
    cpy_r_r26 = CPyStatics[825]; /* 'builtins.range' */
    cpy_r_r27 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 24, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = CPyStatics[8916]; /* 'PyRange_Type' */
    cpy_r_r30 = CPyDef_registry___load_address_op(cpy_r_r26, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 24, CPyStatic_misc_ops___globals);
        goto CPyL288;
    } else
        goto CPyL290;
CPyL15: ;
    cpy_r_r31 = CPyStatics[7534]; /* 'Py_None' */
    cpy_r_r32 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r32 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 27, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r34 = CPyStatics[8917]; /* '_Py_NoneStruct' */
    cpy_r_r35 = CPyDef_registry___load_address_op(cpy_r_r31, cpy_r_r32, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 27, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r36 = CPyStatic_misc_ops___globals;
    cpy_r_r37 = CPyStatics[8402]; /* 'none_object_op' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 27, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r40 = CPyStatics[5575]; /* '...' */
    cpy_r_r41 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r41 != NULL)) goto CPyL23;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 30, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r43 = CPyStatics[8918]; /* '_Py_EllipsisObject' */
    cpy_r_r44 = CPyDef_registry___load_address_op(cpy_r_r40, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 30, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r45 = CPyStatic_misc_ops___globals;
    cpy_r_r46 = CPyStatics[8225]; /* 'ellipsis_op' */
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 30, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r49 = CPyStatics[888]; /* 'builtins.NotImplemented' */
    cpy_r_r50 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r50 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 34, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r52 = CPyStatics[8919]; /* '_Py_NotImplementedStruct' */
    cpy_r_r53 = CPyDef_registry___load_address_op(cpy_r_r49, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 33, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r54 = CPyStatic_misc_ops___globals;
    cpy_r_r55 = CPyStatics[8165]; /* 'not_implemented_op' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 33, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r58 = CPyStatics[8920]; /* 'builtins.StopAsyncIteration' */
    cpy_r_r59 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r59 != NULL)) goto CPyL33;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 39, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r61 = CPyStatics[8921]; /* 'PyExc_StopAsyncIteration' */
    cpy_r_r62 = CPyDef_registry___load_address_op(cpy_r_r58, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 38, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r63 = CPyStatic_misc_ops___globals;
    cpy_r_r64 = CPyStatics[8273]; /* 'stop_async_iteration_op' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 38, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r67 = CPyStatics[8922]; /* 'builtins.id' */
    cpy_r_r68 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r68 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 45, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r70 = PyList_New(1);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 45, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r71 = (CPyPtr)&((PyListObject *)cpy_r_r70)->ob_item;
    cpy_r_r72 = *(CPyPtr *)cpy_r_r71;
    CPy_INCREF(cpy_r_r68);
    *(PyObject * *)cpy_r_r72 = cpy_r_r68;
    cpy_r_r73 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r73 == NULL)) {
        goto CPyL291;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 46, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r75 = CPyStatics[8923]; /* 'CPyTagged_Id' */
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = 2;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPyDef_registry___function_op(cpy_r_r67, cpy_r_r70, cpy_r_r73, cpy_r_r75, 0, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 43, CPyStatic_misc_ops___globals);
        goto CPyL288;
    } else
        goto CPyL292;
CPyL43: ;
    cpy_r_r84 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r84 != NULL)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 53, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r86 = PyList_New(1);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 53, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r87 = (CPyPtr)&((PyListObject *)cpy_r_r86)->ob_item;
    cpy_r_r88 = *(CPyPtr *)cpy_r_r87;
    CPy_INCREF(cpy_r_r84);
    *(PyObject * *)cpy_r_r88 = cpy_r_r84;
    cpy_r_r89 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL293;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 54, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r91 = CPyStatics[8924]; /* 'CPy_GetCoro' */
    cpy_r_r92 = NULL;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = NULL;
    cpy_r_r96 = NULL;
    cpy_r_r97 = 2;
    cpy_r_r98 = CPyDef_registry___custom_op(cpy_r_r86, cpy_r_r89, cpy_r_r91, 2, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 52, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r99 = CPyStatic_misc_ops___globals;
    cpy_r_r100 = CPyStatics[8594]; /* 'coro_op' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 52, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r103 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r103 != NULL)) goto CPyL55;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 65, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r105 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r105 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r106 = 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 65, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r107 = PyList_New(2);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 65, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r108 = (CPyPtr)&((PyListObject *)cpy_r_r107)->ob_item;
    cpy_r_r109 = *(CPyPtr *)cpy_r_r108;
    CPy_INCREF(cpy_r_r103);
    *(PyObject * *)cpy_r_r109 = cpy_r_r103;
    cpy_r_r110 = cpy_r_r109 + 8;
    CPy_INCREF(cpy_r_r105);
    *(PyObject * *)cpy_r_r110 = cpy_r_r105;
    cpy_r_r111 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r111 == NULL)) {
        goto CPyL294;
    } else
        goto CPyL62;
CPyL60: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r112 = 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 66, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r113 = CPyStatics[8925]; /* 'CPyIter_Send' */
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = 2;
    cpy_r_r120 = CPyDef_registry___custom_op(cpy_r_r107, cpy_r_r111, cpy_r_r113, 0, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 64, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r121 = CPyStatic_misc_ops___globals;
    cpy_r_r122 = CPyStatics[8592]; /* 'send_op' */
    cpy_r_r123 = CPyDict_SetItem(cpy_r_r121, cpy_r_r122, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 64, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r125 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r125 != NULL)) goto CPyL67;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r126 = 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 81, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r127 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (likely(cpy_r_r127 != NULL)) goto CPyL70;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 81, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r129 = PyList_New(2);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 81, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r130 = (CPyPtr)&((PyListObject *)cpy_r_r129)->ob_item;
    cpy_r_r131 = *(CPyPtr *)cpy_r_r130;
    CPy_INCREF(cpy_r_r125);
    *(PyObject * *)cpy_r_r131 = cpy_r_r125;
    cpy_r_r132 = cpy_r_r131 + 8;
    CPy_INCREF(cpy_r_r127);
    *(PyObject * *)cpy_r_r132 = cpy_r_r127;
    cpy_r_r133 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r133 == NULL)) {
        goto CPyL295;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r134 = 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 82, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r135 = CPyStatics[8926]; /* 'CPy_YieldFromErrorHandle' */
    cpy_r_r136 = NULL;
    cpy_r_r137 = NULL;
    cpy_r_r138 = NULL;
    cpy_r_r139 = NULL;
    cpy_r_r140 = NULL;
    cpy_r_r141 = 2;
    cpy_r_r142 = CPyDef_registry___custom_op(cpy_r_r129, cpy_r_r133, cpy_r_r135, 2, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 80, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r143 = CPyStatic_misc_ops___globals;
    cpy_r_r144 = CPyStatics[8591]; /* 'yield_from_except_op' */
    cpy_r_r145 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 80, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r147 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r147 != NULL)) goto CPyL79;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r148 = 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 89, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r149 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r149 != NULL)) goto CPyL82;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r150 = 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 89, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r151 = PyList_New(2);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 89, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r152 = (CPyPtr)&((PyListObject *)cpy_r_r151)->ob_item;
    cpy_r_r153 = *(CPyPtr *)cpy_r_r152;
    CPy_INCREF(cpy_r_r147);
    *(PyObject * *)cpy_r_r153 = cpy_r_r147;
    cpy_r_r154 = cpy_r_r153 + 8;
    CPy_INCREF(cpy_r_r149);
    *(PyObject * *)cpy_r_r154 = cpy_r_r149;
    cpy_r_r155 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r155 == NULL)) {
        goto CPyL296;
    } else
        goto CPyL86;
CPyL84: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 90, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r157 = CPyStatics[8927]; /* 'PyMethod_New' */
    cpy_r_r158 = NULL;
    cpy_r_r159 = NULL;
    cpy_r_r160 = NULL;
    cpy_r_r161 = NULL;
    cpy_r_r162 = NULL;
    cpy_r_r163 = 2;
    cpy_r_r164 = CPyDef_registry___custom_op(cpy_r_r151, cpy_r_r155, cpy_r_r157, 2, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 88, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r165 = CPyStatic_misc_ops___globals;
    cpy_r_r166 = CPyStatics[8139]; /* 'method_new_op' */
    cpy_r_r167 = CPyDict_SetItem(cpy_r_r165, cpy_r_r166, cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    cpy_r_r168 = cpy_r_r167 >= 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 88, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r169 = PyList_New(0);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 99, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r170 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r170 == NULL)) {
        goto CPyL297;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 100, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r172 = CPyStatics[8928]; /* 'CPy_FetchStopIterationValue' */
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = NULL;
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = 2;
    cpy_r_r179 = CPyDef_registry___custom_op(cpy_r_r169, cpy_r_r170, cpy_r_r172, 2, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 98, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r180 = CPyStatic_misc_ops___globals;
    cpy_r_r181 = CPyStatics[8593]; /* 'check_stop_op' */
    cpy_r_r182 = CPyDict_SetItem(cpy_r_r180, cpy_r_r181, cpy_r_r179);
    CPy_DECREF(cpy_r_r179);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 98, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r184 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r184 != NULL)) goto CPyL97;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r185 = 0;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 108, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r186 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r186 != NULL)) goto CPyL100;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r187 = 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 108, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r188 = PyList_New(2);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 108, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r189 = (CPyPtr)&((PyListObject *)cpy_r_r188)->ob_item;
    cpy_r_r190 = *(CPyPtr *)cpy_r_r189;
    CPy_INCREF(cpy_r_r184);
    *(PyObject * *)cpy_r_r190 = cpy_r_r184;
    cpy_r_r191 = cpy_r_r190 + 8;
    CPy_INCREF(cpy_r_r186);
    *(PyObject * *)cpy_r_r191 = cpy_r_r186;
    cpy_r_r192 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r192 == NULL)) {
        goto CPyL298;
    } else
        goto CPyL104;
CPyL102: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 109, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r194 = CPyStatics[8929]; /* 'CPy_CalculateMetaclass' */
    cpy_r_r195 = NULL;
    cpy_r_r196 = NULL;
    cpy_r_r197 = NULL;
    cpy_r_r198 = NULL;
    cpy_r_r199 = NULL;
    cpy_r_r200 = CPyDef_registry___custom_op(cpy_r_r188, cpy_r_r192, cpy_r_r194, 2, cpy_r_r195, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, 1);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 107, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r201 = CPyStatic_misc_ops___globals;
    cpy_r_r202 = CPyStatics[8157]; /* 'py_calc_meta_op' */
    cpy_r_r203 = CPyDict_SetItem(cpy_r_r201, cpy_r_r202, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 107, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r205 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r205 != NULL)) goto CPyL109;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r206 = 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 117, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r207 = PyList_New(1);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 117, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r208 = (CPyPtr)&((PyListObject *)cpy_r_r207)->ob_item;
    cpy_r_r209 = *(CPyPtr *)cpy_r_r208;
    CPy_INCREF(cpy_r_r205);
    *(PyObject * *)cpy_r_r209 = cpy_r_r205;
    cpy_r_r210 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r210 == NULL)) {
        goto CPyL299;
    } else
        goto CPyL113;
CPyL111: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r211 = 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 118, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r212 = CPyStatics[8930]; /* 'PyImport_Import' */
    cpy_r_r213 = NULL;
    cpy_r_r214 = NULL;
    cpy_r_r215 = NULL;
    cpy_r_r216 = NULL;
    cpy_r_r217 = NULL;
    cpy_r_r218 = 2;
    cpy_r_r219 = CPyDef_registry___custom_op(cpy_r_r207, cpy_r_r210, cpy_r_r212, 2, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 116, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r220 = CPyStatic_misc_ops___globals;
    cpy_r_r221 = CPyStatics[8057]; /* 'import_op' */
    cpy_r_r222 = CPyDict_SetItem(cpy_r_r220, cpy_r_r221, cpy_r_r219);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 116, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r224 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r224 != NULL)) goto CPyL118;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 126, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r226 = CPyStatic_rtypes___c_pointer_rprimitive;
    if (likely(cpy_r_r226 != NULL)) goto CPyL121;
    PyErr_SetString(PyExc_NameError, "value for final name \"c_pointer_rprimitive\" was not set");
    cpy_r_r227 = 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 127, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL121: ;
    cpy_r_r228 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r228 != NULL)) goto CPyL124;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r229 = 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 128, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL124: ;
    cpy_r_r230 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r230 != NULL)) goto CPyL127;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r231 = 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 129, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL127: ;
    cpy_r_r232 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r232 != NULL)) goto CPyL130;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r233 = 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 130, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r234 = CPyStatic_rtypes___c_pointer_rprimitive;
    if (likely(cpy_r_r234 != NULL)) goto CPyL133;
    PyErr_SetString(PyExc_NameError, "value for final name \"c_pointer_rprimitive\" was not set");
    cpy_r_r235 = 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 131, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r236 = PyList_New(6);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 125, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r237 = (CPyPtr)&((PyListObject *)cpy_r_r236)->ob_item;
    cpy_r_r238 = *(CPyPtr *)cpy_r_r237;
    CPy_INCREF(cpy_r_r224);
    *(PyObject * *)cpy_r_r238 = cpy_r_r224;
    cpy_r_r239 = cpy_r_r238 + 8;
    CPy_INCREF(cpy_r_r226);
    *(PyObject * *)cpy_r_r239 = cpy_r_r226;
    cpy_r_r240 = cpy_r_r238 + 16;
    CPy_INCREF(cpy_r_r228);
    *(PyObject * *)cpy_r_r240 = cpy_r_r228;
    cpy_r_r241 = cpy_r_r238 + 24;
    CPy_INCREF(cpy_r_r230);
    *(PyObject * *)cpy_r_r241 = cpy_r_r230;
    cpy_r_r242 = cpy_r_r238 + 32;
    CPy_INCREF(cpy_r_r232);
    *(PyObject * *)cpy_r_r242 = cpy_r_r232;
    cpy_r_r243 = cpy_r_r238 + 40;
    CPy_INCREF(cpy_r_r234);
    *(PyObject * *)cpy_r_r243 = cpy_r_r234;
    cpy_r_r244 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r244 == NULL)) {
        goto CPyL300;
    } else
        goto CPyL137;
CPyL135: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r245 = 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 133, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r246 = CPyStatics[8931]; /* 'CPyImport_ImportMany' */
    cpy_r_r247 = NULL;
    cpy_r_r248 = NULL;
    cpy_r_r249 = NULL;
    cpy_r_r250 = NULL;
    cpy_r_r251 = NULL;
    cpy_r_r252 = 2;
    cpy_r_r253 = CPyDef_registry___custom_op(cpy_r_r236, cpy_r_r244, cpy_r_r246, 4, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252);
    CPy_DECREF(cpy_r_r236);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 124, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r254 = CPyStatic_misc_ops___globals;
    cpy_r_r255 = CPyStatics[8579]; /* 'import_many_op' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r254, cpy_r_r255, cpy_r_r253);
    CPy_DECREF(cpy_r_r253);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 124, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r258 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r258 != NULL)) goto CPyL142;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r259 = 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 140, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL142: ;
    cpy_r_r260 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r260 != NULL)) goto CPyL145;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r261 = 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 140, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL145: ;
    cpy_r_r262 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r262 != NULL)) goto CPyL148;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r263 = 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 140, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL148: ;
    cpy_r_r264 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r264 != NULL)) goto CPyL151;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r265 = 0;
    if (unlikely(!cpy_r_r265)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 140, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL151: ;
    cpy_r_r266 = PyList_New(4);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 140, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r267 = (CPyPtr)&((PyListObject *)cpy_r_r266)->ob_item;
    cpy_r_r268 = *(CPyPtr *)cpy_r_r267;
    CPy_INCREF(cpy_r_r258);
    *(PyObject * *)cpy_r_r268 = cpy_r_r258;
    cpy_r_r269 = cpy_r_r268 + 8;
    CPy_INCREF(cpy_r_r260);
    *(PyObject * *)cpy_r_r269 = cpy_r_r260;
    cpy_r_r270 = cpy_r_r268 + 16;
    CPy_INCREF(cpy_r_r262);
    *(PyObject * *)cpy_r_r270 = cpy_r_r262;
    cpy_r_r271 = cpy_r_r268 + 24;
    CPy_INCREF(cpy_r_r264);
    *(PyObject * *)cpy_r_r271 = cpy_r_r264;
    cpy_r_r272 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r272 == NULL)) {
        goto CPyL301;
    } else
        goto CPyL155;
CPyL153: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r273 = 0;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 141, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL155: ;
    cpy_r_r274 = CPyStatics[8932]; /* 'CPyImport_ImportFromMany' */
    cpy_r_r275 = NULL;
    cpy_r_r276 = NULL;
    cpy_r_r277 = NULL;
    cpy_r_r278 = NULL;
    cpy_r_r279 = NULL;
    cpy_r_r280 = 2;
    cpy_r_r281 = CPyDef_registry___custom_op(cpy_r_r266, cpy_r_r272, cpy_r_r274, 2, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280);
    CPy_DECREF(cpy_r_r266);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 139, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r282 = CPyStatic_misc_ops___globals;
    cpy_r_r283 = CPyStatics[8581]; /* 'import_from_many_op' */
    cpy_r_r284 = CPyDict_SetItem(cpy_r_r282, cpy_r_r283, cpy_r_r281);
    CPy_DECREF(cpy_r_r281);
    cpy_r_r285 = cpy_r_r284 >= 0;
    if (unlikely(!cpy_r_r285)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 139, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r286 = PyList_New(0);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 148, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r287 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r287 == NULL)) {
        goto CPyL302;
    } else
        goto CPyL161;
CPyL159: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r288 = 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 149, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r289 = CPyStatics[8933]; /* 'PyImport_GetModuleDict' */
    cpy_r_r290 = NULL;
    cpy_r_r291 = NULL;
    cpy_r_r292 = NULL;
    cpy_r_r293 = NULL;
    cpy_r_r294 = NULL;
    cpy_r_r295 = CPyDef_registry___custom_op(cpy_r_r286, cpy_r_r287, cpy_r_r289, 0, cpy_r_r290, cpy_r_r291, cpy_r_r292, cpy_r_r293, cpy_r_r294, 1);
    CPy_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 147, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r296 = CPyStatic_misc_ops___globals;
    cpy_r_r297 = CPyStatics[8058]; /* 'get_module_dict_op' */
    cpy_r_r298 = CPyDict_SetItem(cpy_r_r296, cpy_r_r297, cpy_r_r295);
    CPy_DECREF(cpy_r_r295);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 147, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r300 = CPyStatics[855]; /* 'builtins.isinstance' */
    cpy_r_r301 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r301 != NULL)) goto CPyL166;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r302 = 0;
    if (unlikely(!cpy_r_r302)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 158, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL166: ;
    cpy_r_r303 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r303 != NULL)) goto CPyL169;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r304 = 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 158, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL169: ;
    cpy_r_r305 = PyList_New(2);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 158, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r306 = (CPyPtr)&((PyListObject *)cpy_r_r305)->ob_item;
    cpy_r_r307 = *(CPyPtr *)cpy_r_r306;
    CPy_INCREF(cpy_r_r301);
    *(PyObject * *)cpy_r_r307 = cpy_r_r301;
    cpy_r_r308 = cpy_r_r307 + 8;
    CPy_INCREF(cpy_r_r303);
    *(PyObject * *)cpy_r_r308 = cpy_r_r303;
    cpy_r_r309 = CPyStatic_misc_ops___globals;
    cpy_r_r310 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r311 = CPyDict_GetItem(cpy_r_r309, cpy_r_r310);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 159, CPyStatic_misc_ops___globals);
        goto CPyL303;
    }
    if (likely(Py_TYPE(cpy_r_r311) == CPyType_rtypes___RPrimitive))
        cpy_r_r312 = cpy_r_r311;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/misc_ops.py", "<module>", 159, CPyStatic_misc_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r311);
        goto CPyL303;
    }
    cpy_r_r313 = CPyStatics[8934]; /* 'PyObject_IsInstance' */
    cpy_r_r314 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r314 == NULL)) {
        goto CPyL304;
    } else
        goto CPyL175;
CPyL173: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r315 = 0;
    if (unlikely(!cpy_r_r315)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 162, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL175: ;
    cpy_r_r316 = NULL;
    cpy_r_r317 = NULL;
    cpy_r_r318 = NULL;
    cpy_r_r319 = NULL;
    cpy_r_r320 = 2;
    cpy_r_r321 = CPY_INT_TAG;
    cpy_r_r322 = CPyDef_registry___function_op(cpy_r_r300, cpy_r_r305, cpy_r_r312, cpy_r_r313, 20, cpy_r_r316, cpy_r_r314, cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321);
    CPy_DECREF(cpy_r_r305);
    CPy_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 156, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r323 = CPyStatic_misc_ops___globals;
    cpy_r_r324 = CPyStatics[8473]; /* 'slow_isinstance_op' */
    cpy_r_r325 = CPyDict_SetItem(cpy_r_r323, cpy_r_r324, cpy_r_r322);
    CPy_DECREF(cpy_r_r322);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 156, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r327 = CPyStatics[855]; /* 'builtins.isinstance' */
    cpy_r_r328 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r328 != NULL)) goto CPyL180;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r329 = 0;
    if (unlikely(!cpy_r_r329)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 169, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL180: ;
    cpy_r_r330 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r330 != NULL)) goto CPyL183;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r331 = 0;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 169, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL183: ;
    cpy_r_r332 = PyList_New(2);
    if (unlikely(cpy_r_r332 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 169, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r333 = (CPyPtr)&((PyListObject *)cpy_r_r332)->ob_item;
    cpy_r_r334 = *(CPyPtr *)cpy_r_r333;
    CPy_INCREF(cpy_r_r328);
    *(PyObject * *)cpy_r_r334 = cpy_r_r328;
    cpy_r_r335 = cpy_r_r334 + 8;
    CPy_INCREF(cpy_r_r330);
    *(PyObject * *)cpy_r_r335 = cpy_r_r330;
    cpy_r_r336 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r336 == NULL)) {
        goto CPyL305;
    } else
        goto CPyL187;
CPyL185: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r337 = 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 170, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL187: ;
    cpy_r_r338 = CPyStatics[8935]; /* 'CPy_TypeCheck' */
    cpy_r_r339 = NULL;
    cpy_r_r340 = NULL;
    cpy_r_r341 = NULL;
    cpy_r_r342 = NULL;
    cpy_r_r343 = NULL;
    cpy_r_r344 = 2;
    cpy_r_r345 = CPyDef_registry___function_op(cpy_r_r327, cpy_r_r332, cpy_r_r336, cpy_r_r338, 0, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344, 0);
    CPy_DECREF(cpy_r_r332);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 167, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r346 = CPyStatic_misc_ops___globals;
    cpy_r_r347 = CPyStatics[8395]; /* 'fast_isinstance_op' */
    cpy_r_r348 = CPyDict_SetItem(cpy_r_r346, cpy_r_r347, cpy_r_r345);
    CPy_DECREF(cpy_r_r345);
    cpy_r_r349 = cpy_r_r348 >= 0;
    if (unlikely(!cpy_r_r349)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 167, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r350 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r351 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r351 != NULL)) goto CPyL192;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r352 = 0;
    if (unlikely(!cpy_r_r352)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 179, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL192: ;
    cpy_r_r353 = PyList_New(1);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 179, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r354 = (CPyPtr)&((PyListObject *)cpy_r_r353)->ob_item;
    cpy_r_r355 = *(CPyPtr *)cpy_r_r354;
    CPy_INCREF(cpy_r_r351);
    *(PyObject * *)cpy_r_r355 = cpy_r_r351;
    cpy_r_r356 = CPyStatic_misc_ops___globals;
    cpy_r_r357 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r358 = CPyDict_GetItem(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 180, CPyStatic_misc_ops___globals);
        goto CPyL306;
    }
    if (likely(Py_TYPE(cpy_r_r358) == CPyType_rtypes___RPrimitive))
        cpy_r_r359 = cpy_r_r358;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/misc_ops.py", "<module>", 180, CPyStatic_misc_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r358);
        goto CPyL306;
    }
    cpy_r_r360 = CPyStatics[8936]; /* 'PyObject_IsTrue' */
    cpy_r_r361 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r361 == NULL)) {
        goto CPyL307;
    } else
        goto CPyL198;
CPyL196: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r362 = 0;
    if (unlikely(!cpy_r_r362)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 183, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL198: ;
    cpy_r_r363 = NULL;
    cpy_r_r364 = NULL;
    cpy_r_r365 = NULL;
    cpy_r_r366 = NULL;
    cpy_r_r367 = 2;
    cpy_r_r368 = CPY_INT_TAG;
    cpy_r_r369 = CPyDef_registry___function_op(cpy_r_r350, cpy_r_r353, cpy_r_r359, cpy_r_r360, 20, cpy_r_r363, cpy_r_r361, cpy_r_r364, cpy_r_r365, cpy_r_r366, cpy_r_r367, cpy_r_r368);
    CPy_DECREF(cpy_r_r353);
    CPy_DECREF(cpy_r_r359);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 177, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r370 = CPyStatic_misc_ops___globals;
    cpy_r_r371 = CPyStatics[8410]; /* 'bool_op' */
    cpy_r_r372 = CPyDict_SetItem(cpy_r_r370, cpy_r_r371, cpy_r_r369);
    CPy_DECREF(cpy_r_r369);
    cpy_r_r373 = cpy_r_r372 >= 0;
    if (unlikely(!cpy_r_r373)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 177, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r374 = CPyStatics[1213]; /* 'builtins.slice' */
    cpy_r_r375 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r375 != NULL)) goto CPyL203;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r376 = 0;
    if (unlikely(!cpy_r_r376)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 189, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL203: ;
    cpy_r_r377 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r377 != NULL)) goto CPyL206;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r378 = 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 189, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL206: ;
    cpy_r_r379 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r379 != NULL)) goto CPyL209;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r380 = 0;
    if (unlikely(!cpy_r_r380)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 189, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL209: ;
    cpy_r_r381 = PyList_New(3);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 189, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r382 = (CPyPtr)&((PyListObject *)cpy_r_r381)->ob_item;
    cpy_r_r383 = *(CPyPtr *)cpy_r_r382;
    CPy_INCREF(cpy_r_r375);
    *(PyObject * *)cpy_r_r383 = cpy_r_r375;
    cpy_r_r384 = cpy_r_r383 + 8;
    CPy_INCREF(cpy_r_r377);
    *(PyObject * *)cpy_r_r384 = cpy_r_r377;
    cpy_r_r385 = cpy_r_r383 + 16;
    CPy_INCREF(cpy_r_r379);
    *(PyObject * *)cpy_r_r385 = cpy_r_r379;
    cpy_r_r386 = CPyStatics[8937]; /* 'PySlice_New' */
    cpy_r_r387 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r387 == NULL)) {
        goto CPyL308;
    } else
        goto CPyL213;
CPyL211: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r388 = 0;
    if (unlikely(!cpy_r_r388)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 191, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL213: ;
    cpy_r_r389 = NULL;
    cpy_r_r390 = NULL;
    cpy_r_r391 = NULL;
    cpy_r_r392 = NULL;
    cpy_r_r393 = NULL;
    cpy_r_r394 = 2;
    cpy_r_r395 = CPY_INT_TAG;
    cpy_r_r396 = CPyDef_registry___function_op(cpy_r_r374, cpy_r_r381, cpy_r_r387, cpy_r_r386, 2, cpy_r_r389, cpy_r_r390, cpy_r_r391, cpy_r_r392, cpy_r_r393, cpy_r_r394, cpy_r_r395);
    CPy_DECREF(cpy_r_r381);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 187, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r397 = CPyStatic_misc_ops___globals;
    cpy_r_r398 = CPyStatics[8233]; /* 'new_slice_op' */
    cpy_r_r399 = CPyDict_SetItem(cpy_r_r397, cpy_r_r398, cpy_r_r396);
    CPy_DECREF(cpy_r_r396);
    cpy_r_r400 = cpy_r_r399 >= 0;
    if (unlikely(!cpy_r_r400)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 187, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r401 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r402 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r402 != NULL)) goto CPyL218;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r403 = 0;
    if (unlikely(!cpy_r_r403)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 198, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL218: ;
    cpy_r_r404 = PyList_New(1);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 198, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r405 = (CPyPtr)&((PyListObject *)cpy_r_r404)->ob_item;
    cpy_r_r406 = *(CPyPtr *)cpy_r_r405;
    CPy_INCREF(cpy_r_r402);
    *(PyObject * *)cpy_r_r406 = cpy_r_r402;
    cpy_r_r407 = CPyStatics[8938]; /* 'PyObject_Type' */
    cpy_r_r408 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r408 == NULL)) {
        goto CPyL309;
    } else
        goto CPyL222;
CPyL220: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r409 = 0;
    if (unlikely(!cpy_r_r409)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 200, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL222: ;
    cpy_r_r410 = NULL;
    cpy_r_r411 = NULL;
    cpy_r_r412 = NULL;
    cpy_r_r413 = NULL;
    cpy_r_r414 = NULL;
    cpy_r_r415 = 2;
    cpy_r_r416 = CPY_INT_TAG;
    cpy_r_r417 = CPyDef_registry___function_op(cpy_r_r401, cpy_r_r404, cpy_r_r408, cpy_r_r407, 0, cpy_r_r410, cpy_r_r411, cpy_r_r412, cpy_r_r413, cpy_r_r414, cpy_r_r415, cpy_r_r416);
    CPy_DECREF(cpy_r_r404);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 196, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r418 = CPyStatic_misc_ops___globals;
    cpy_r_r419 = CPyStatics[8218]; /* 'type_op' */
    cpy_r_r420 = CPyDict_SetItem(cpy_r_r418, cpy_r_r419, cpy_r_r417);
    CPy_DECREF(cpy_r_r417);
    cpy_r_r421 = cpy_r_r420 >= 0;
    if (unlikely(!cpy_r_r421)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 196, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r422 = CPyStatics[771]; /* 'builtins.type' */
    cpy_r_r423 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r423 != NULL)) goto CPyL227;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r424 = 0;
    if (unlikely(!cpy_r_r424)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 205, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL227: ;
    cpy_r_r425 = CPyStatics[8939]; /* 'PyType_Type' */
    cpy_r_r426 = CPyDef_registry___load_address_op(cpy_r_r422, cpy_r_r423, cpy_r_r425);
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 205, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r427 = CPyStatic_misc_ops___globals;
    cpy_r_r428 = CPyStatics[8150]; /* 'type_object_op' */
    cpy_r_r429 = CPyDict_SetItem(cpy_r_r427, cpy_r_r428, cpy_r_r426);
    CPy_DECREF(cpy_r_r426);
    cpy_r_r430 = cpy_r_r429 >= 0;
    if (unlikely(!cpy_r_r430)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 205, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r431 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r431 != NULL)) goto CPyL232;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r432 = 0;
    if (unlikely(!cpy_r_r432)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 210, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL232: ;
    cpy_r_r433 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r433 != NULL)) goto CPyL235;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r434 = 0;
    if (unlikely(!cpy_r_r434)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 210, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL235: ;
    cpy_r_r435 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r435 != NULL)) goto CPyL238;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r436 = 0;
    if (unlikely(!cpy_r_r436)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 210, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL238: ;
    cpy_r_r437 = PyList_New(3);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 210, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r438 = (CPyPtr)&((PyListObject *)cpy_r_r437)->ob_item;
    cpy_r_r439 = *(CPyPtr *)cpy_r_r438;
    CPy_INCREF(cpy_r_r431);
    *(PyObject * *)cpy_r_r439 = cpy_r_r431;
    cpy_r_r440 = cpy_r_r439 + 8;
    CPy_INCREF(cpy_r_r433);
    *(PyObject * *)cpy_r_r440 = cpy_r_r433;
    cpy_r_r441 = cpy_r_r439 + 16;
    CPy_INCREF(cpy_r_r435);
    *(PyObject * *)cpy_r_r441 = cpy_r_r435;
    cpy_r_r442 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r442 == NULL)) {
        goto CPyL310;
    } else
        goto CPyL242;
CPyL240: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r443 = 0;
    if (unlikely(!cpy_r_r443)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 211, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL242: ;
    cpy_r_r444 = CPyStatics[8940]; /* 'CPyType_FromTemplate' */
    cpy_r_r445 = NULL;
    cpy_r_r446 = NULL;
    cpy_r_r447 = NULL;
    cpy_r_r448 = NULL;
    cpy_r_r449 = NULL;
    cpy_r_r450 = 2;
    cpy_r_r451 = CPyDef_registry___custom_op(cpy_r_r437, cpy_r_r442, cpy_r_r444, 2, cpy_r_r445, cpy_r_r446, cpy_r_r447, cpy_r_r448, cpy_r_r449, cpy_r_r450);
    CPy_DECREF(cpy_r_r437);
    if (unlikely(cpy_r_r451 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 209, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r452 = CPyStatic_misc_ops___globals;
    cpy_r_r453 = CPyStatics[8154]; /* 'pytype_from_template_op' */
    cpy_r_r454 = CPyDict_SetItem(cpy_r_r452, cpy_r_r453, cpy_r_r451);
    CPy_DECREF(cpy_r_r451);
    cpy_r_r455 = cpy_r_r454 >= 0;
    if (unlikely(!cpy_r_r455)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 209, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r456 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r456 != NULL)) goto CPyL247;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r457 = 0;
    if (unlikely(!cpy_r_r457)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 219, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL247: ;
    cpy_r_r458 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r458 != NULL)) goto CPyL250;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r459 = 0;
    if (unlikely(!cpy_r_r459)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 219, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL250: ;
    cpy_r_r460 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r460 != NULL)) goto CPyL253;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r461 = 0;
    if (unlikely(!cpy_r_r461)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 219, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL253: ;
    cpy_r_r462 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r462 != NULL)) goto CPyL256;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r463 = 0;
    if (unlikely(!cpy_r_r463)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 219, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL256: ;
    cpy_r_r464 = PyList_New(4);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 219, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r465 = (CPyPtr)&((PyListObject *)cpy_r_r464)->ob_item;
    cpy_r_r466 = *(CPyPtr *)cpy_r_r465;
    CPy_INCREF(cpy_r_r456);
    *(PyObject * *)cpy_r_r466 = cpy_r_r456;
    cpy_r_r467 = cpy_r_r466 + 8;
    CPy_INCREF(cpy_r_r458);
    *(PyObject * *)cpy_r_r467 = cpy_r_r458;
    cpy_r_r468 = cpy_r_r466 + 16;
    CPy_INCREF(cpy_r_r460);
    *(PyObject * *)cpy_r_r468 = cpy_r_r460;
    cpy_r_r469 = cpy_r_r466 + 24;
    CPy_INCREF(cpy_r_r462);
    *(PyObject * *)cpy_r_r469 = cpy_r_r462;
    cpy_r_r470 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r470 == NULL)) {
        goto CPyL311;
    } else
        goto CPyL260;
CPyL258: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r471 = 0;
    if (unlikely(!cpy_r_r471)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 220, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL260: ;
    cpy_r_r472 = CPyStatics[8941]; /* 'CPyDataclass_SleightOfHand' */
    cpy_r_r473 = NULL;
    cpy_r_r474 = NULL;
    cpy_r_r475 = NULL;
    cpy_r_r476 = NULL;
    cpy_r_r477 = NULL;
    cpy_r_r478 = 2;
    cpy_r_r479 = CPyDef_registry___custom_op(cpy_r_r464, cpy_r_r470, cpy_r_r472, 4, cpy_r_r473, cpy_r_r474, cpy_r_r475, cpy_r_r476, cpy_r_r477, cpy_r_r478);
    CPy_DECREF(cpy_r_r464);
    if (unlikely(cpy_r_r479 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 218, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r480 = CPyStatic_misc_ops___globals;
    cpy_r_r481 = CPyStatics[8152]; /* 'dataclass_sleight_of_hand' */
    cpy_r_r482 = CPyDict_SetItem(cpy_r_r480, cpy_r_r481, cpy_r_r479);
    CPy_DECREF(cpy_r_r479);
    cpy_r_r483 = cpy_r_r482 >= 0;
    if (unlikely(!cpy_r_r483)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 218, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r484 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r484 != NULL)) goto CPyL265;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r485 = 0;
    if (unlikely(!cpy_r_r485)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 228, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL265: ;
    cpy_r_r486 = CPyStatic_misc_ops___globals;
    cpy_r_r487 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r488 = CPyDict_GetItem(cpy_r_r486, cpy_r_r487);
    if (unlikely(cpy_r_r488 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 228, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    if (likely(Py_TYPE(cpy_r_r488) == CPyType_rtypes___RPrimitive))
        cpy_r_r489 = cpy_r_r488;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/misc_ops.py", "<module>", 228, CPyStatic_misc_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r488);
        goto CPyL288;
    }
    cpy_r_r490 = PyList_New(2);
    if (unlikely(cpy_r_r490 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 228, CPyStatic_misc_ops___globals);
        goto CPyL312;
    }
    cpy_r_r491 = (CPyPtr)&((PyListObject *)cpy_r_r490)->ob_item;
    cpy_r_r492 = *(CPyPtr *)cpy_r_r491;
    CPy_INCREF(cpy_r_r484);
    *(PyObject * *)cpy_r_r492 = cpy_r_r484;
    cpy_r_r493 = cpy_r_r492 + 8;
    *(PyObject * *)cpy_r_r493 = cpy_r_r489;
    cpy_r_r494 = CPyStatic_misc_ops___globals;
    cpy_r_r495 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r496 = CPyDict_GetItem(cpy_r_r494, cpy_r_r495);
    if (unlikely(cpy_r_r496 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 229, CPyStatic_misc_ops___globals);
        goto CPyL313;
    }
    if (likely(Py_TYPE(cpy_r_r496) == CPyType_rtypes___RPrimitive))
        cpy_r_r497 = cpy_r_r496;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/misc_ops.py", "<module>", 229, CPyStatic_misc_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r496);
        goto CPyL313;
    }
    cpy_r_r498 = CPyStatics[8942]; /* 'CPySequence_CheckUnpackCount' */
    cpy_r_r499 = NULL;
    cpy_r_r500 = NULL;
    cpy_r_r501 = NULL;
    cpy_r_r502 = NULL;
    cpy_r_r503 = NULL;
    cpy_r_r504 = 2;
    cpy_r_r505 = CPyDef_registry___custom_op(cpy_r_r490, cpy_r_r497, cpy_r_r498, 20, cpy_r_r499, cpy_r_r500, cpy_r_r501, cpy_r_r502, cpy_r_r503, cpy_r_r504);
    CPy_DECREF(cpy_r_r490);
    CPy_DECREF(cpy_r_r497);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 227, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r506 = CPyStatic_misc_ops___globals;
    cpy_r_r507 = CPyStatics[8069]; /* 'check_unpack_count_op' */
    cpy_r_r508 = CPyDict_SetItem(cpy_r_r506, cpy_r_r507, cpy_r_r505);
    CPy_DECREF(cpy_r_r505);
    cpy_r_r509 = cpy_r_r508 >= 0;
    if (unlikely(!cpy_r_r509)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 227, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r510 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r510 != NULL)) goto CPyL275;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r511 = 0;
    if (unlikely(!cpy_r_r511)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 237, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL275: ;
    cpy_r_r512 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r512 != NULL)) goto CPyL278;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r513 = 0;
    if (unlikely(!cpy_r_r513)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 237, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL278: ;
    cpy_r_r514 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r514 != NULL)) goto CPyL281;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r515 = 0;
    if (unlikely(!cpy_r_r515)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 237, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL281: ;
    cpy_r_r516 = PyList_New(3);
    if (unlikely(cpy_r_r516 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 237, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r517 = (CPyPtr)&((PyListObject *)cpy_r_r516)->ob_item;
    cpy_r_r518 = *(CPyPtr *)cpy_r_r517;
    CPy_INCREF(cpy_r_r510);
    *(PyObject * *)cpy_r_r518 = cpy_r_r510;
    cpy_r_r519 = cpy_r_r518 + 8;
    CPy_INCREF(cpy_r_r512);
    *(PyObject * *)cpy_r_r519 = cpy_r_r512;
    cpy_r_r520 = cpy_r_r518 + 16;
    CPy_INCREF(cpy_r_r514);
    *(PyObject * *)cpy_r_r520 = cpy_r_r514;
    cpy_r_r521 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r521 == NULL)) {
        goto CPyL314;
    } else
        goto CPyL285;
CPyL283: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r522 = 0;
    if (unlikely(!cpy_r_r522)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 238, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r523 = CPyStatics[8943]; /* 'CPySingledispatch_RegisterFunction' */
    cpy_r_r524 = NULL;
    cpy_r_r525 = NULL;
    cpy_r_r526 = NULL;
    cpy_r_r527 = NULL;
    cpy_r_r528 = NULL;
    cpy_r_r529 = 2;
    cpy_r_r530 = CPyDef_registry___custom_op(cpy_r_r516, cpy_r_r521, cpy_r_r523, 2, cpy_r_r524, cpy_r_r525, cpy_r_r526, cpy_r_r527, cpy_r_r528, cpy_r_r529);
    CPy_DECREF(cpy_r_r516);
    if (unlikely(cpy_r_r530 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 236, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    cpy_r_r531 = CPyStatic_misc_ops___globals;
    cpy_r_r532 = CPyStatics[8347]; /* 'register_function' */
    cpy_r_r533 = CPyDict_SetItem(cpy_r_r531, cpy_r_r532, cpy_r_r530);
    CPy_DECREF(cpy_r_r530);
    cpy_r_r534 = cpy_r_r533 >= 0;
    if (unlikely(!cpy_r_r534)) {
        CPy_AddTraceback("mypyc/primitives/misc_ops.py", "<module>", 236, CPyStatic_misc_ops___globals);
        goto CPyL288;
    }
    return 1;
CPyL288: ;
    cpy_r_r535 = 2;
    return cpy_r_r535;
CPyL289: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL290: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL15;
CPyL291: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL40;
CPyL292: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL43;
CPyL293: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL48;
CPyL294: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL60;
CPyL295: ;
    CPy_DecRef(cpy_r_r129);
    goto CPyL72;
CPyL296: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL84;
CPyL297: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL90;
CPyL298: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL102;
CPyL299: ;
    CPy_DecRef(cpy_r_r207);
    goto CPyL111;
CPyL300: ;
    CPy_DecRef(cpy_r_r236);
    goto CPyL135;
CPyL301: ;
    CPy_DecRef(cpy_r_r266);
    goto CPyL153;
CPyL302: ;
    CPy_DecRef(cpy_r_r286);
    goto CPyL159;
CPyL303: ;
    CPy_DecRef(cpy_r_r305);
    goto CPyL288;
CPyL304: ;
    CPy_DecRef(cpy_r_r305);
    CPy_DecRef(cpy_r_r312);
    goto CPyL173;
CPyL305: ;
    CPy_DecRef(cpy_r_r332);
    goto CPyL185;
CPyL306: ;
    CPy_DecRef(cpy_r_r353);
    goto CPyL288;
CPyL307: ;
    CPy_DecRef(cpy_r_r353);
    CPy_DecRef(cpy_r_r359);
    goto CPyL196;
CPyL308: ;
    CPy_DecRef(cpy_r_r381);
    goto CPyL211;
CPyL309: ;
    CPy_DecRef(cpy_r_r404);
    goto CPyL220;
CPyL310: ;
    CPy_DecRef(cpy_r_r437);
    goto CPyL240;
CPyL311: ;
    CPy_DecRef(cpy_r_r464);
    goto CPyL258;
CPyL312: ;
    CPy_DecRef(cpy_r_r489);
    goto CPyL288;
CPyL313: ;
    CPy_DecRef(cpy_r_r490);
    goto CPyL288;
CPyL314: ;
    CPy_DecRef(cpy_r_r516);
    goto CPyL283;
}
