#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef bytes_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef bytes_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.bytes_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    bytes_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___bytes_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___bytes_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___bytes_ops_internal);
        return CPyModule_mypyc___primitives___bytes_ops_internal;
    }
    CPyModule_mypyc___primitives___bytes_ops_internal = PyModule_Create(&bytes_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___bytes_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___bytes_ops_internal, "__name__");
    CPyStatic_bytes_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___bytes_ops_internal);
    if (unlikely(CPyStatic_bytes_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_bytes_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___bytes_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___bytes_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_bytes_ops_____top_level__(void) {
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
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    CPyPtr cpy_r_r127;
    CPyPtr cpy_r_r128;
    CPyPtr cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    CPyPtr cpy_r_r151;
    CPyPtr cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    CPyTagged cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyPtr cpy_r_r170;
    CPyPtr cpy_r_r171;
    CPyPtr cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    CPyTagged cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    CPyPtr cpy_r_r189;
    CPyPtr cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    char cpy_r_r206;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", -1, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_bytes_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 3, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10249]; /* ('ERR_MAGIC',) */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_bytes_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 5, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10250]; /* ('RUnion', 'bytes_rprimitive', 'c_int_rprimitive',
                                      'c_pyssize_t_rprimitive', 'dict_rprimitive',
                                      'int_rprimitive', 'list_rprimitive',
                                      'object_rprimitive', 'str_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_bytes_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 6, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10251]; /* ('ERR_NEG_INT', 'binary_op', 'custom_op', 'function_op',
                                      'load_address_op', 'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_bytes_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 17, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 27, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8679]; /* 'PyBytes_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 27, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL108;
CPyL11: ;
    cpy_r_r26 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r27 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r29 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r31 = CPyStatic_rtypes___str_rprimitive;
    if (likely(cpy_r_r31 != NULL)) goto CPyL20;
    PyErr_SetString(PyExc_NameError, "value for final name \"str_rprimitive\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r33 = PyList_New(3);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r35 = cpy_r_r27;
    cpy_r_r36 = cpy_r_r35 + 8;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r36 = cpy_r_r29;
    cpy_r_r37 = cpy_r_r35 + 16;
    CPy_INCREF(cpy_r_r31);
    *(PyObject * *)cpy_r_r37 = cpy_r_r31;
    cpy_r_r38 = CPyDef_rtypes___RUnion(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 32, CPyStatic_bytes_ops___globals);
        goto CPyL109;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    *(PyObject * *)cpy_r_r41 = cpy_r_r38;
    cpy_r_r42 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r42 == NULL)) {
        goto CPyL110;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 33, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r44 = CPyStatics[8680]; /* 'PyBytes_FromObject' */
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = NULL;
    cpy_r_r49 = NULL;
    cpy_r_r50 = 2;
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPyDef_registry___function_op(cpy_r_r26, cpy_r_r39, cpy_r_r42, cpy_r_r44, 2, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 30, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL111;
CPyL27: ;
    cpy_r_r53 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r54 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r54 != NULL)) goto CPyL30;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 41, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r56 = PyList_New(1);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 41, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r56)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    CPy_INCREF(cpy_r_r54);
    *(PyObject * *)cpy_r_r58 = cpy_r_r54;
    cpy_r_r59 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL112;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 42, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r61 = CPyStatics[8681]; /* 'PyByteArray_FromObject' */
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = 2;
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPyDef_registry___function_op(cpy_r_r53, cpy_r_r56, cpy_r_r59, cpy_r_r61, 2, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 39, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL113;
CPyL35: ;
    cpy_r_r70 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r70 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 49, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r72 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r72 != NULL)) goto CPyL41;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 49, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r74 = PyList_New(2);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 49, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r70);
    *(PyObject * *)cpy_r_r76 = cpy_r_r70;
    cpy_r_r77 = cpy_r_r76 + 8;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r77 = cpy_r_r72;
    cpy_r_r78 = CPyStatic_bytes_ops___globals;
    cpy_r_r79 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 50, CPyStatic_bytes_ops___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_rtypes___RPrimitive))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/bytes_ops.py", "<module>", 50, CPyStatic_bytes_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r80);
        goto CPyL114;
    }
    cpy_r_r82 = CPyStatics[8682]; /* 'CPyBytes_Compare' */
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = 2;
    cpy_r_r89 = CPyDef_registry___custom_op(cpy_r_r74, cpy_r_r81, cpy_r_r82, 20, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 48, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r90 = CPyStatic_bytes_ops___globals;
    cpy_r_r91 = CPyStatics[8409]; /* 'bytes_compare' */
    cpy_r_r92 = CPyDict_SetItem(cpy_r_r90, cpy_r_r91, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 48, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r94 = CPyStatics[886]; /* '+' */
    cpy_r_r95 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r95 != NULL)) goto CPyL49;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 59, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r97 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r97 != NULL)) goto CPyL52;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 59, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r99 = PyList_New(2);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 59, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r100 = (CPyPtr)&((PyListObject *)cpy_r_r99)->ob_item;
    cpy_r_r101 = *(CPyPtr *)cpy_r_r100;
    CPy_INCREF(cpy_r_r95);
    *(PyObject * *)cpy_r_r101 = cpy_r_r95;
    cpy_r_r102 = cpy_r_r101 + 8;
    CPy_INCREF(cpy_r_r97);
    *(PyObject * *)cpy_r_r102 = cpy_r_r97;
    cpy_r_r103 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r103 == NULL)) {
        goto CPyL115;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 60, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r105 = CPyStatics[8683]; /* 'CPyBytes_Concat' */
    cpy_r_r106 = PyList_New(2);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 63, CPyStatic_bytes_ops___globals);
        goto CPyL116;
    }
    cpy_r_r107 = 1 ? Py_True : Py_False;
    cpy_r_r108 = 0 ? Py_True : Py_False;
    cpy_r_r109 = (CPyPtr)&((PyListObject *)cpy_r_r106)->ob_item;
    cpy_r_r110 = *(CPyPtr *)cpy_r_r109;
    CPy_INCREF(cpy_r_r107);
    *(PyObject * *)cpy_r_r110 = cpy_r_r107;
    cpy_r_r111 = cpy_r_r110 + 8;
    CPy_INCREF(cpy_r_r108);
    *(PyObject * *)cpy_r_r111 = cpy_r_r108;
    cpy_r_r112 = NULL;
    cpy_r_r113 = NULL;
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = 2;
    cpy_r_r117 = CPY_INT_TAG;
    cpy_r_r118 = CPyDef_registry___binary_op(cpy_r_r94, cpy_r_r99, cpy_r_r103, cpy_r_r105, 2, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r106, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 57, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL117;
CPyL58: ;
    cpy_r_r119 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r119 != NULL)) goto CPyL61;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 68, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r121 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r121 != NULL)) goto CPyL64;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 68, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r123 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r123 != NULL)) goto CPyL67;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 68, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r125 = PyList_New(3);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 68, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r126 = (CPyPtr)&((PyListObject *)cpy_r_r125)->ob_item;
    cpy_r_r127 = *(CPyPtr *)cpy_r_r126;
    CPy_INCREF(cpy_r_r119);
    *(PyObject * *)cpy_r_r127 = cpy_r_r119;
    cpy_r_r128 = cpy_r_r127 + 8;
    CPy_INCREF(cpy_r_r121);
    *(PyObject * *)cpy_r_r128 = cpy_r_r121;
    cpy_r_r129 = cpy_r_r127 + 16;
    CPy_INCREF(cpy_r_r123);
    *(PyObject * *)cpy_r_r129 = cpy_r_r123;
    cpy_r_r130 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r130 == NULL)) {
        goto CPyL118;
    } else
        goto CPyL71;
CPyL69: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 69, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r132 = CPyStatics[8684]; /* 'CPyBytes_GetSlice' */
    cpy_r_r133 = NULL;
    cpy_r_r134 = NULL;
    cpy_r_r135 = NULL;
    cpy_r_r136 = NULL;
    cpy_r_r137 = NULL;
    cpy_r_r138 = 2;
    cpy_r_r139 = CPyDef_registry___custom_op(cpy_r_r125, cpy_r_r130, cpy_r_r132, 2, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 67, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r140 = CPyStatic_bytes_ops___globals;
    cpy_r_r141 = CPyStatics[8222]; /* 'bytes_slice_op' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r140, cpy_r_r141, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 67, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r144 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r145 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r145 != NULL)) goto CPyL76;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r146 = 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 78, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r147 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r147 != NULL)) goto CPyL79;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r148 = 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 78, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r149 = PyList_New(2);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 78, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r150 = (CPyPtr)&((PyListObject *)cpy_r_r149)->ob_item;
    cpy_r_r151 = *(CPyPtr *)cpy_r_r150;
    CPy_INCREF(cpy_r_r145);
    *(PyObject * *)cpy_r_r151 = cpy_r_r145;
    cpy_r_r152 = cpy_r_r151 + 8;
    CPy_INCREF(cpy_r_r147);
    *(PyObject * *)cpy_r_r152 = cpy_r_r147;
    cpy_r_r153 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r153 == NULL)) {
        goto CPyL119;
    } else
        goto CPyL83;
CPyL81: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r154 = 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 79, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r155 = CPyStatics[8685]; /* 'CPyBytes_GetItem' */
    cpy_r_r156 = NULL;
    cpy_r_r157 = NULL;
    cpy_r_r158 = NULL;
    cpy_r_r159 = NULL;
    cpy_r_r160 = NULL;
    cpy_r_r161 = 2;
    cpy_r_r162 = CPY_INT_TAG;
    cpy_r_r163 = CPyDef_registry___method_op(cpy_r_r144, cpy_r_r149, cpy_r_r153, cpy_r_r155, 2, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 76, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL120;
CPyL84: ;
    cpy_r_r164 = CPyStatics[175]; /* 'join' */
    cpy_r_r165 = CPyStatic_rtypes___bytes_rprimitive;
    if (likely(cpy_r_r165 != NULL)) goto CPyL87;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r166 = 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 87, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r167 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r167 != NULL)) goto CPyL90;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r168 = 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 87, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r169 = PyList_New(2);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 87, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r170 = (CPyPtr)&((PyListObject *)cpy_r_r169)->ob_item;
    cpy_r_r171 = *(CPyPtr *)cpy_r_r170;
    CPy_INCREF(cpy_r_r165);
    *(PyObject * *)cpy_r_r171 = cpy_r_r165;
    cpy_r_r172 = cpy_r_r171 + 8;
    CPy_INCREF(cpy_r_r167);
    *(PyObject * *)cpy_r_r172 = cpy_r_r167;
    cpy_r_r173 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r173 == NULL)) {
        goto CPyL121;
    } else
        goto CPyL94;
CPyL92: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 88, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r175 = CPyStatics[8686]; /* 'CPyBytes_Join' */
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = 2;
    cpy_r_r182 = CPY_INT_TAG;
    cpy_r_r183 = CPyDef_registry___method_op(cpy_r_r164, cpy_r_r169, cpy_r_r173, cpy_r_r175, 2, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 85, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    } else
        goto CPyL122;
CPyL95: ;
    cpy_r_r184 = CPyStatic_bytes_ops___globals;
    cpy_r_r185 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r186 = CPyDict_GetItem(cpy_r_r184, cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 96, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    if (likely(Py_TYPE(cpy_r_r186) == CPyType_rtypes___RPrimitive))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/bytes_ops.py", "<module>", 96, CPyStatic_bytes_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r186);
        goto CPyL107;
    }
    cpy_r_r188 = PyList_New(1);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 96, CPyStatic_bytes_ops___globals);
        goto CPyL123;
    }
    cpy_r_r189 = (CPyPtr)&((PyListObject *)cpy_r_r188)->ob_item;
    cpy_r_r190 = *(CPyPtr *)cpy_r_r189;
    *(PyObject * *)cpy_r_r190 = cpy_r_r187;
    cpy_r_r191 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r191 == NULL)) {
        goto CPyL124;
    } else
        goto CPyL101;
CPyL99: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 97, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL101: ;
    cpy_r_r193 = CPyStatics[8687]; /* 'CPyBytes_Build' */
    cpy_r_r194 = CPyStatic_rtypes___bytes_rprimitive;
    if (unlikely(cpy_r_r194 == NULL)) {
        goto CPyL125;
    } else
        goto CPyL104;
CPyL102: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bytes_rprimitive\" was not set");
    cpy_r_r195 = 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 100, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r196 = NULL;
    cpy_r_r197 = NULL;
    cpy_r_r198 = NULL;
    cpy_r_r199 = NULL;
    cpy_r_r200 = 2;
    cpy_r_r201 = CPyDef_registry___custom_op(cpy_r_r188, cpy_r_r191, cpy_r_r193, 2, cpy_r_r194, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r188);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 95, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    cpy_r_r202 = CPyStatic_bytes_ops___globals;
    cpy_r_r203 = CPyStatics[8328]; /* 'bytes_build_op' */
    cpy_r_r204 = CPyDict_SetItem(cpy_r_r202, cpy_r_r203, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/primitives/bytes_ops.py", "<module>", 95, CPyStatic_bytes_ops___globals);
        goto CPyL107;
    }
    return 1;
CPyL107: ;
    cpy_r_r206 = 2;
    return cpy_r_r206;
CPyL108: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL109: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL107;
CPyL110: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL24;
CPyL111: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL27;
CPyL112: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL32;
CPyL113: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL35;
CPyL114: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL107;
CPyL115: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL54;
CPyL116: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL107;
CPyL117: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL58;
CPyL118: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL69;
CPyL119: ;
    CPy_DecRef(cpy_r_r149);
    goto CPyL81;
CPyL120: ;
    CPy_DECREF(cpy_r_r163);
    goto CPyL84;
CPyL121: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL92;
CPyL122: ;
    CPy_DECREF(cpy_r_r183);
    goto CPyL95;
CPyL123: ;
    CPy_DecRef(cpy_r_r187);
    goto CPyL107;
CPyL124: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL99;
CPyL125: ;
    CPy_DecRef(cpy_r_r188);
    goto CPyL102;
}
