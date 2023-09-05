#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef float_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef float_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.float_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    float_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___float_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___float_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___float_ops_internal);
        return CPyModule_mypyc___primitives___float_ops_internal;
    }
    CPyModule_mypyc___primitives___float_ops_internal = PyModule_Create(&float_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___float_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___float_ops_internal, "__name__");
    CPyStatic_float_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___float_ops_internal);
    if (unlikely(CPyStatic_float_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_float_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___float_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___float_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_float_ops_____top_level__(void) {
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
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
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
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    CPyTagged cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyPtr cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyPtr cpy_r_r139;
    CPyPtr cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyPtr cpy_r_r156;
    CPyPtr cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyPtr cpy_r_r173;
    CPyPtr cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    char cpy_r_r183;
    CPyTagged cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
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
    char cpy_r_r200;
    CPyTagged cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    CPyPtr cpy_r_r207;
    CPyPtr cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    char cpy_r_r217;
    CPyTagged cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    CPyPtr cpy_r_r224;
    CPyPtr cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    CPyTagged cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    CPyPtr cpy_r_r241;
    CPyPtr cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    CPyTagged cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    CPyPtr cpy_r_r260;
    CPyPtr cpy_r_r261;
    CPyPtr cpy_r_r262;
    PyObject *cpy_r_r263;
    char cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    CPyTagged cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    int32_t cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    CPyPtr cpy_r_r284;
    CPyPtr cpy_r_r285;
    CPyPtr cpy_r_r286;
    PyObject *cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    CPyTagged cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    int32_t cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    CPyPtr cpy_r_r306;
    CPyPtr cpy_r_r307;
    PyObject *cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    char cpy_r_r316;
    CPyTagged cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    char cpy_r_r321;
    PyObject *cpy_r_r322;
    CPyPtr cpy_r_r323;
    CPyPtr cpy_r_r324;
    PyObject *cpy_r_r325;
    char cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    char cpy_r_r333;
    CPyTagged cpy_r_r334;
    PyObject *cpy_r_r335;
    char cpy_r_r336;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", -1, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_float_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 3, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10257]; /* ('ERR_MAGIC', 'ERR_MAGIC_OVERLAPPING', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_float_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 5, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10258]; /* ('bool_rprimitive', 'float_rprimitive',
                                      'int_rprimitive', 'object_rprimitive',
                                      'str_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_float_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 6, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10259]; /* ('binary_op', 'function_op', 'load_address_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_float_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 13, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 16, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8737]; /* 'PyFloat_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 16, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL161;
CPyL11: ;
    cpy_r_r26 = CPyStatics[1595]; /* '//' */
    cpy_r_r27 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 20, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r29 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 20, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 20, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r33 = cpy_r_r27;
    cpy_r_r34 = cpy_r_r33 + 8;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r34 = cpy_r_r29;
    cpy_r_r35 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL162;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 21, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = CPyStatics[8738]; /* 'CPyFloat_FloorDivide' */
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_registry___binary_op(cpy_r_r26, cpy_r_r31, cpy_r_r35, cpy_r_r37, 8, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 18, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL163;
CPyL22: ;
    cpy_r_r46 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r47 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r47 != NULL)) goto CPyL25;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 29, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r49 = PyList_New(1);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 29, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r50 = (CPyPtr)&((PyListObject *)cpy_r_r49)->ob_item;
    cpy_r_r51 = *(CPyPtr *)cpy_r_r50;
    CPy_INCREF(cpy_r_r47);
    *(PyObject * *)cpy_r_r51 = cpy_r_r47;
    cpy_r_r52 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL164;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 30, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r54 = CPyStatics[8739]; /* 'CPyFloat_FromTagged' */
    cpy_r_r55 = NULL;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = 2;
    cpy_r_r61 = CPY_INT_TAG;
    cpy_r_r62 = CPyDef_registry___function_op(cpy_r_r46, cpy_r_r49, cpy_r_r52, cpy_r_r54, 8, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 27, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r63 = CPyStatic_float_ops___globals;
    cpy_r_r64 = CPyStatics[8435]; /* 'int_to_float_op' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 27, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r67 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r68 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r68 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 38, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r70 = PyList_New(1);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 38, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r71 = (CPyPtr)&((PyListObject *)cpy_r_r70)->ob_item;
    cpy_r_r72 = *(CPyPtr *)cpy_r_r71;
    CPy_INCREF(cpy_r_r68);
    *(PyObject * *)cpy_r_r72 = cpy_r_r68;
    cpy_r_r73 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r73 == NULL)) {
        goto CPyL165;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 39, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r75 = CPyStatics[8740]; /* 'PyFloat_FromString' */
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = 2;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPyDef_registry___function_op(cpy_r_r67, cpy_r_r70, cpy_r_r73, cpy_r_r75, 2, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 36, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL166;
CPyL39: ;
    cpy_r_r84 = CPyStatics[8546]; /* 'builtins.abs' */
    cpy_r_r85 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r85 != NULL)) goto CPyL42;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 47, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r87 = PyList_New(1);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 47, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r88 = (CPyPtr)&((PyListObject *)cpy_r_r87)->ob_item;
    cpy_r_r89 = *(CPyPtr *)cpy_r_r88;
    CPy_INCREF(cpy_r_r85);
    *(PyObject * *)cpy_r_r89 = cpy_r_r85;
    cpy_r_r90 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r90 == NULL)) {
        goto CPyL167;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 48, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r92 = CPyStatics[8741]; /* 'fabs' */
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = NULL;
    cpy_r_r96 = NULL;
    cpy_r_r97 = NULL;
    cpy_r_r98 = 2;
    cpy_r_r99 = CPY_INT_TAG;
    cpy_r_r100 = CPyDef_registry___function_op(cpy_r_r84, cpy_r_r87, cpy_r_r90, cpy_r_r92, 0, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 45, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL168;
CPyL47: ;
    cpy_r_r101 = CPyStatics[8742]; /* 'math.sin' */
    cpy_r_r102 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r102 != NULL)) goto CPyL50;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r103 = 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 56, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r104 = PyList_New(1);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 56, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r105 = (CPyPtr)&((PyListObject *)cpy_r_r104)->ob_item;
    cpy_r_r106 = *(CPyPtr *)cpy_r_r105;
    CPy_INCREF(cpy_r_r102);
    *(PyObject * *)cpy_r_r106 = cpy_r_r102;
    cpy_r_r107 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r107 == NULL)) {
        goto CPyL169;
    } else
        goto CPyL54;
CPyL52: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 57, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r109 = CPyStatics[8743]; /* 'CPyFloat_Sin' */
    cpy_r_r110 = NULL;
    cpy_r_r111 = NULL;
    cpy_r_r112 = NULL;
    cpy_r_r113 = NULL;
    cpy_r_r114 = NULL;
    cpy_r_r115 = 2;
    cpy_r_r116 = CPY_INT_TAG;
    cpy_r_r117 = CPyDef_registry___function_op(cpy_r_r101, cpy_r_r104, cpy_r_r107, cpy_r_r109, 8, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 54, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL170;
CPyL55: ;
    cpy_r_r118 = CPyStatics[8744]; /* 'math.cos' */
    cpy_r_r119 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r119 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 65, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r121 = PyList_New(1);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 65, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r122 = (CPyPtr)&((PyListObject *)cpy_r_r121)->ob_item;
    cpy_r_r123 = *(CPyPtr *)cpy_r_r122;
    CPy_INCREF(cpy_r_r119);
    *(PyObject * *)cpy_r_r123 = cpy_r_r119;
    cpy_r_r124 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r124 == NULL)) {
        goto CPyL171;
    } else
        goto CPyL62;
CPyL60: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r125 = 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 66, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r126 = CPyStatics[8745]; /* 'CPyFloat_Cos' */
    cpy_r_r127 = NULL;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = 2;
    cpy_r_r133 = CPY_INT_TAG;
    cpy_r_r134 = CPyDef_registry___function_op(cpy_r_r118, cpy_r_r121, cpy_r_r124, cpy_r_r126, 8, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 63, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL172;
CPyL63: ;
    cpy_r_r135 = CPyStatics[8746]; /* 'math.tan' */
    cpy_r_r136 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r136 != NULL)) goto CPyL66;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 74, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r138 = PyList_New(1);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 74, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r139 = (CPyPtr)&((PyListObject *)cpy_r_r138)->ob_item;
    cpy_r_r140 = *(CPyPtr *)cpy_r_r139;
    CPy_INCREF(cpy_r_r136);
    *(PyObject * *)cpy_r_r140 = cpy_r_r136;
    cpy_r_r141 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r141 == NULL)) {
        goto CPyL173;
    } else
        goto CPyL70;
CPyL68: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 75, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r143 = CPyStatics[8747]; /* 'CPyFloat_Tan' */
    cpy_r_r144 = NULL;
    cpy_r_r145 = NULL;
    cpy_r_r146 = NULL;
    cpy_r_r147 = NULL;
    cpy_r_r148 = NULL;
    cpy_r_r149 = 2;
    cpy_r_r150 = CPY_INT_TAG;
    cpy_r_r151 = CPyDef_registry___function_op(cpy_r_r135, cpy_r_r138, cpy_r_r141, cpy_r_r143, 8, cpy_r_r144, cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 72, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL174;
CPyL71: ;
    cpy_r_r152 = CPyStatics[8748]; /* 'math.sqrt' */
    cpy_r_r153 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r153 != NULL)) goto CPyL74;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 83, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r155 = PyList_New(1);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 83, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r156 = (CPyPtr)&((PyListObject *)cpy_r_r155)->ob_item;
    cpy_r_r157 = *(CPyPtr *)cpy_r_r156;
    CPy_INCREF(cpy_r_r153);
    *(PyObject * *)cpy_r_r157 = cpy_r_r153;
    cpy_r_r158 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r158 == NULL)) {
        goto CPyL175;
    } else
        goto CPyL78;
CPyL76: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r159 = 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 84, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r160 = CPyStatics[8749]; /* 'CPyFloat_Sqrt' */
    cpy_r_r161 = NULL;
    cpy_r_r162 = NULL;
    cpy_r_r163 = NULL;
    cpy_r_r164 = NULL;
    cpy_r_r165 = NULL;
    cpy_r_r166 = 2;
    cpy_r_r167 = CPY_INT_TAG;
    cpy_r_r168 = CPyDef_registry___function_op(cpy_r_r152, cpy_r_r155, cpy_r_r158, cpy_r_r160, 8, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 81, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL176;
CPyL79: ;
    cpy_r_r169 = CPyStatics[8750]; /* 'math.exp' */
    cpy_r_r170 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r170 != NULL)) goto CPyL82;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r171 = 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 92, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL82: ;
    cpy_r_r172 = PyList_New(1);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 92, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r173 = (CPyPtr)&((PyListObject *)cpy_r_r172)->ob_item;
    cpy_r_r174 = *(CPyPtr *)cpy_r_r173;
    CPy_INCREF(cpy_r_r170);
    *(PyObject * *)cpy_r_r174 = cpy_r_r170;
    cpy_r_r175 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r175 == NULL)) {
        goto CPyL177;
    } else
        goto CPyL86;
CPyL84: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r176 = 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 93, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r177 = CPyStatics[8751]; /* 'CPyFloat_Exp' */
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = NULL;
    cpy_r_r182 = NULL;
    cpy_r_r183 = 2;
    cpy_r_r184 = CPY_INT_TAG;
    cpy_r_r185 = CPyDef_registry___function_op(cpy_r_r169, cpy_r_r172, cpy_r_r175, cpy_r_r177, 8, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 90, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL178;
CPyL87: ;
    cpy_r_r186 = CPyStatics[8752]; /* 'math.log' */
    cpy_r_r187 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r187 != NULL)) goto CPyL90;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r188 = 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 101, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r189 = PyList_New(1);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 101, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r190 = (CPyPtr)&((PyListObject *)cpy_r_r189)->ob_item;
    cpy_r_r191 = *(CPyPtr *)cpy_r_r190;
    CPy_INCREF(cpy_r_r187);
    *(PyObject * *)cpy_r_r191 = cpy_r_r187;
    cpy_r_r192 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r192 == NULL)) {
        goto CPyL179;
    } else
        goto CPyL94;
CPyL92: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 102, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r194 = CPyStatics[8753]; /* 'CPyFloat_Log' */
    cpy_r_r195 = NULL;
    cpy_r_r196 = NULL;
    cpy_r_r197 = NULL;
    cpy_r_r198 = NULL;
    cpy_r_r199 = NULL;
    cpy_r_r200 = 2;
    cpy_r_r201 = CPY_INT_TAG;
    cpy_r_r202 = CPyDef_registry___function_op(cpy_r_r186, cpy_r_r189, cpy_r_r192, cpy_r_r194, 8, cpy_r_r195, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 99, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL180;
CPyL95: ;
    cpy_r_r203 = CPyStatics[8754]; /* 'math.floor' */
    cpy_r_r204 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r204 != NULL)) goto CPyL98;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r205 = 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 110, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r206 = PyList_New(1);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 110, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r207 = (CPyPtr)&((PyListObject *)cpy_r_r206)->ob_item;
    cpy_r_r208 = *(CPyPtr *)cpy_r_r207;
    CPy_INCREF(cpy_r_r204);
    *(PyObject * *)cpy_r_r208 = cpy_r_r204;
    cpy_r_r209 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r209 == NULL)) {
        goto CPyL181;
    } else
        goto CPyL102;
CPyL100: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r210 = 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 111, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r211 = CPyStatics[8755]; /* 'CPyFloat_Floor' */
    cpy_r_r212 = NULL;
    cpy_r_r213 = NULL;
    cpy_r_r214 = NULL;
    cpy_r_r215 = NULL;
    cpy_r_r216 = NULL;
    cpy_r_r217 = 2;
    cpy_r_r218 = CPY_INT_TAG;
    cpy_r_r219 = CPyDef_registry___function_op(cpy_r_r203, cpy_r_r206, cpy_r_r209, cpy_r_r211, 2, cpy_r_r212, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 108, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL182;
CPyL103: ;
    cpy_r_r220 = CPyStatics[8756]; /* 'math.ceil' */
    cpy_r_r221 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r221 != NULL)) goto CPyL106;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r222 = 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 119, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r223 = PyList_New(1);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 119, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r224 = (CPyPtr)&((PyListObject *)cpy_r_r223)->ob_item;
    cpy_r_r225 = *(CPyPtr *)cpy_r_r224;
    CPy_INCREF(cpy_r_r221);
    *(PyObject * *)cpy_r_r225 = cpy_r_r221;
    cpy_r_r226 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r226 == NULL)) {
        goto CPyL183;
    } else
        goto CPyL110;
CPyL108: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r227 = 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 120, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL110: ;
    cpy_r_r228 = CPyStatics[8757]; /* 'CPyFloat_Ceil' */
    cpy_r_r229 = NULL;
    cpy_r_r230 = NULL;
    cpy_r_r231 = NULL;
    cpy_r_r232 = NULL;
    cpy_r_r233 = NULL;
    cpy_r_r234 = 2;
    cpy_r_r235 = CPY_INT_TAG;
    cpy_r_r236 = CPyDef_registry___function_op(cpy_r_r220, cpy_r_r223, cpy_r_r226, cpy_r_r228, 2, cpy_r_r229, cpy_r_r230, cpy_r_r231, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 117, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL184;
CPyL111: ;
    cpy_r_r237 = CPyStatics[8758]; /* 'math.fabs' */
    cpy_r_r238 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r238 != NULL)) goto CPyL114;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r239 = 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 128, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL114: ;
    cpy_r_r240 = PyList_New(1);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 128, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r241 = (CPyPtr)&((PyListObject *)cpy_r_r240)->ob_item;
    cpy_r_r242 = *(CPyPtr *)cpy_r_r241;
    CPy_INCREF(cpy_r_r238);
    *(PyObject * *)cpy_r_r242 = cpy_r_r238;
    cpy_r_r243 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r243 == NULL)) {
        goto CPyL185;
    } else
        goto CPyL118;
CPyL116: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r244 = 0;
    if (unlikely(!cpy_r_r244)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 129, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r245 = CPyStatics[8741]; /* 'fabs' */
    cpy_r_r246 = NULL;
    cpy_r_r247 = NULL;
    cpy_r_r248 = NULL;
    cpy_r_r249 = NULL;
    cpy_r_r250 = NULL;
    cpy_r_r251 = 2;
    cpy_r_r252 = CPY_INT_TAG;
    cpy_r_r253 = CPyDef_registry___function_op(cpy_r_r237, cpy_r_r240, cpy_r_r243, cpy_r_r245, 0, cpy_r_r246, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 126, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL186;
CPyL119: ;
    cpy_r_r254 = CPyStatics[8759]; /* 'math.pow' */
    cpy_r_r255 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r255 != NULL)) goto CPyL122;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r256 = 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 137, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r257 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r257 != NULL)) goto CPyL125;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r258 = 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 137, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r259 = PyList_New(2);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 137, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r260 = (CPyPtr)&((PyListObject *)cpy_r_r259)->ob_item;
    cpy_r_r261 = *(CPyPtr *)cpy_r_r260;
    CPy_INCREF(cpy_r_r255);
    *(PyObject * *)cpy_r_r261 = cpy_r_r255;
    cpy_r_r262 = cpy_r_r261 + 8;
    CPy_INCREF(cpy_r_r257);
    *(PyObject * *)cpy_r_r262 = cpy_r_r257;
    cpy_r_r263 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r263 == NULL)) {
        goto CPyL187;
    } else
        goto CPyL129;
CPyL127: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r264 = 0;
    if (unlikely(!cpy_r_r264)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 138, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL129: ;
    cpy_r_r265 = CPyStatics[8760]; /* 'CPyFloat_Pow' */
    cpy_r_r266 = NULL;
    cpy_r_r267 = NULL;
    cpy_r_r268 = NULL;
    cpy_r_r269 = NULL;
    cpy_r_r270 = NULL;
    cpy_r_r271 = 2;
    cpy_r_r272 = CPY_INT_TAG;
    cpy_r_r273 = CPyDef_registry___function_op(cpy_r_r254, cpy_r_r259, cpy_r_r263, cpy_r_r265, 8, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 135, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r274 = CPyStatic_float_ops___globals;
    cpy_r_r275 = CPyStatics[8761]; /* 'pow_op' */
    cpy_r_r276 = CPyDict_SetItem(cpy_r_r274, cpy_r_r275, cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    cpy_r_r277 = cpy_r_r276 >= 0;
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 135, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r278 = CPyStatics[8762]; /* 'math.copysign' */
    cpy_r_r279 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r279 != NULL)) goto CPyL134;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r280 = 0;
    if (unlikely(!cpy_r_r280)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 146, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL134: ;
    cpy_r_r281 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r281 != NULL)) goto CPyL137;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r282 = 0;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 146, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r283 = PyList_New(2);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 146, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r284 = (CPyPtr)&((PyListObject *)cpy_r_r283)->ob_item;
    cpy_r_r285 = *(CPyPtr *)cpy_r_r284;
    CPy_INCREF(cpy_r_r279);
    *(PyObject * *)cpy_r_r285 = cpy_r_r279;
    cpy_r_r286 = cpy_r_r285 + 8;
    CPy_INCREF(cpy_r_r281);
    *(PyObject * *)cpy_r_r286 = cpy_r_r281;
    cpy_r_r287 = CPyStatic_rtypes___float_rprimitive;
    if (unlikely(cpy_r_r287 == NULL)) {
        goto CPyL188;
    } else
        goto CPyL141;
CPyL139: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r288 = 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 147, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL141: ;
    cpy_r_r289 = CPyStatics[8763]; /* 'copysign' */
    cpy_r_r290 = NULL;
    cpy_r_r291 = NULL;
    cpy_r_r292 = NULL;
    cpy_r_r293 = NULL;
    cpy_r_r294 = NULL;
    cpy_r_r295 = 2;
    cpy_r_r296 = CPY_INT_TAG;
    cpy_r_r297 = CPyDef_registry___function_op(cpy_r_r278, cpy_r_r283, cpy_r_r287, cpy_r_r289, 0, cpy_r_r290, cpy_r_r291, cpy_r_r292, cpy_r_r293, cpy_r_r294, cpy_r_r295, cpy_r_r296);
    CPy_DECREF(cpy_r_r283);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 144, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r298 = CPyStatic_float_ops___globals;
    cpy_r_r299 = CPyStatics[8420]; /* 'copysign_op' */
    cpy_r_r300 = CPyDict_SetItem(cpy_r_r298, cpy_r_r299, cpy_r_r297);
    CPy_DECREF(cpy_r_r297);
    cpy_r_r301 = cpy_r_r300 >= 0;
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 144, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r302 = CPyStatics[8764]; /* 'math.isinf' */
    cpy_r_r303 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r303 != NULL)) goto CPyL146;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r304 = 0;
    if (unlikely(!cpy_r_r304)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 155, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL146: ;
    cpy_r_r305 = PyList_New(1);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 155, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r306 = (CPyPtr)&((PyListObject *)cpy_r_r305)->ob_item;
    cpy_r_r307 = *(CPyPtr *)cpy_r_r306;
    CPy_INCREF(cpy_r_r303);
    *(PyObject * *)cpy_r_r307 = cpy_r_r303;
    cpy_r_r308 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r308 == NULL)) {
        goto CPyL189;
    } else
        goto CPyL150;
CPyL148: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r309 = 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 156, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL150: ;
    cpy_r_r310 = CPyStatics[8765]; /* 'CPyFloat_IsInf' */
    cpy_r_r311 = NULL;
    cpy_r_r312 = NULL;
    cpy_r_r313 = NULL;
    cpy_r_r314 = NULL;
    cpy_r_r315 = NULL;
    cpy_r_r316 = 2;
    cpy_r_r317 = CPY_INT_TAG;
    cpy_r_r318 = CPyDef_registry___function_op(cpy_r_r302, cpy_r_r305, cpy_r_r308, cpy_r_r310, 0, cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317);
    CPy_DECREF(cpy_r_r305);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 153, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL190;
CPyL151: ;
    cpy_r_r319 = CPyStatics[8766]; /* 'math.isnan' */
    cpy_r_r320 = CPyStatic_rtypes___float_rprimitive;
    if (likely(cpy_r_r320 != NULL)) goto CPyL154;
    PyErr_SetString(PyExc_NameError, "value for final name \"float_rprimitive\" was not set");
    cpy_r_r321 = 0;
    if (unlikely(!cpy_r_r321)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 164, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL154: ;
    cpy_r_r322 = PyList_New(1);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 164, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    cpy_r_r323 = (CPyPtr)&((PyListObject *)cpy_r_r322)->ob_item;
    cpy_r_r324 = *(CPyPtr *)cpy_r_r323;
    CPy_INCREF(cpy_r_r320);
    *(PyObject * *)cpy_r_r324 = cpy_r_r320;
    cpy_r_r325 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r325 == NULL)) {
        goto CPyL191;
    } else
        goto CPyL158;
CPyL156: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r326 = 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 165, CPyStatic_float_ops___globals);
        goto CPyL160;
    }
    CPy_Unreachable();
CPyL158: ;
    cpy_r_r327 = CPyStatics[8767]; /* 'CPyFloat_IsNaN' */
    cpy_r_r328 = NULL;
    cpy_r_r329 = NULL;
    cpy_r_r330 = NULL;
    cpy_r_r331 = NULL;
    cpy_r_r332 = NULL;
    cpy_r_r333 = 2;
    cpy_r_r334 = CPY_INT_TAG;
    cpy_r_r335 = CPyDef_registry___function_op(cpy_r_r319, cpy_r_r322, cpy_r_r325, cpy_r_r327, 0, cpy_r_r328, cpy_r_r329, cpy_r_r330, cpy_r_r331, cpy_r_r332, cpy_r_r333, cpy_r_r334);
    CPy_DECREF(cpy_r_r322);
    if (unlikely(cpy_r_r335 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/float_ops.py", "<module>", 162, CPyStatic_float_ops___globals);
        goto CPyL160;
    } else
        goto CPyL192;
CPyL159: ;
    return 1;
CPyL160: ;
    cpy_r_r336 = 2;
    return cpy_r_r336;
CPyL161: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL162: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL19;
CPyL163: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL22;
CPyL164: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL27;
CPyL165: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL36;
CPyL166: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL39;
CPyL167: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL44;
CPyL168: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL47;
CPyL169: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL52;
CPyL170: ;
    CPy_DECREF(cpy_r_r117);
    goto CPyL55;
CPyL171: ;
    CPy_DecRef(cpy_r_r121);
    goto CPyL60;
CPyL172: ;
    CPy_DECREF(cpy_r_r134);
    goto CPyL63;
CPyL173: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL68;
CPyL174: ;
    CPy_DECREF(cpy_r_r151);
    goto CPyL71;
CPyL175: ;
    CPy_DecRef(cpy_r_r155);
    goto CPyL76;
CPyL176: ;
    CPy_DECREF(cpy_r_r168);
    goto CPyL79;
CPyL177: ;
    CPy_DecRef(cpy_r_r172);
    goto CPyL84;
CPyL178: ;
    CPy_DECREF(cpy_r_r185);
    goto CPyL87;
CPyL179: ;
    CPy_DecRef(cpy_r_r189);
    goto CPyL92;
CPyL180: ;
    CPy_DECREF(cpy_r_r202);
    goto CPyL95;
CPyL181: ;
    CPy_DecRef(cpy_r_r206);
    goto CPyL100;
CPyL182: ;
    CPy_DECREF(cpy_r_r219);
    goto CPyL103;
CPyL183: ;
    CPy_DecRef(cpy_r_r223);
    goto CPyL108;
CPyL184: ;
    CPy_DECREF(cpy_r_r236);
    goto CPyL111;
CPyL185: ;
    CPy_DecRef(cpy_r_r240);
    goto CPyL116;
CPyL186: ;
    CPy_DECREF(cpy_r_r253);
    goto CPyL119;
CPyL187: ;
    CPy_DecRef(cpy_r_r259);
    goto CPyL127;
CPyL188: ;
    CPy_DecRef(cpy_r_r283);
    goto CPyL139;
CPyL189: ;
    CPy_DecRef(cpy_r_r305);
    goto CPyL148;
CPyL190: ;
    CPy_DECREF(cpy_r_r318);
    goto CPyL151;
CPyL191: ;
    CPy_DecRef(cpy_r_r322);
    goto CPyL156;
CPyL192: ;
    CPy_DECREF(cpy_r_r335);
    goto CPyL159;
}
