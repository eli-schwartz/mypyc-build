#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef set_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef set_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.set_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    set_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___set_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___set_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___set_ops_internal);
        return CPyModule_mypyc___primitives___set_ops_internal;
    }
    CPyModule_mypyc___primitives___set_ops_internal = PyModule_Create(&set_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___set_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___set_ops_internal, "__name__");
    CPyStatic_set_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___set_ops_internal);
    if (unlikely(CPyStatic_set_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_set_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___set_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___set_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_set_ops_____top_level__(void) {
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
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    tuple_T2IO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyPtr cpy_r_r94;
    CPyPtr cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyPtr cpy_r_r107;
    CPyPtr cpy_r_r108;
    CPyPtr cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    CPyPtr cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
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
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyPtr cpy_r_r168;
    CPyPtr cpy_r_r169;
    CPyPtr cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
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
    int32_t cpy_r_r186;
    char cpy_r_r187;
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
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    CPyTagged cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    int32_t cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    CPyPtr cpy_r_r218;
    CPyPtr cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    CPyTagged cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    CPyPtr cpy_r_r237;
    CPyPtr cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    CPyTagged cpy_r_r248;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", -1, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_set_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 3, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10280]; /* ('ERR_FALSE', 'ERR_MAGIC') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_set_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 5, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10281]; /* ('bit_rprimitive', 'bool_rprimitive',
                                      'c_int_rprimitive', 'object_rprimitive',
                                      'pointer_rprimitive', 'set_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_set_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 6, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10282]; /* ('ERR_NEG_INT', 'binary_op', 'function_op',
                                      'load_address_op', 'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_set_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 14, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 23, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8953]; /* 'PySet_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 23, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL116;
CPyL11: ;
    cpy_r_r26 = CPyStatics[889]; /* 'builtins.frozenset' */
    cpy_r_r27 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 26, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = CPyStatics[8954]; /* 'PyFrozenSet_Type' */
    cpy_r_r30 = CPyDef_registry___load_address_op(cpy_r_r26, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 26, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL117;
CPyL15: ;
    cpy_r_r31 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r32 = PyList_New(0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 31, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r33 = CPyStatic_rtypes___set_rprimitive;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL118;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 32, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r35 = CPyStatics[8955]; /* 'PySet_New' */
    cpy_r_r36 = CPyStatic_rtypes___pointer_rprimitive;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL119;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"pointer_rprimitive\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 35, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r38.f0 = 0;
    cpy_r_r38.f1 = cpy_r_r36;
    CPyTagged_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 35, CPyStatic_set_ops___globals);
        goto CPyL120;
    }
    cpy_r_r40 = PyTuple_New(2);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10804 = CPyTagged_StealAsObject(cpy_r_r38.f0);
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp10804);
    PyObject *__tmp10805 = cpy_r_r38.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp10805);
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    *(PyObject * *)cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = NULL;
    cpy_r_r46 = NULL;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_registry___function_op(cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r35, 2, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 29, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r50 = CPyStatic_set_ops___globals;
    cpy_r_r51 = CPyStatics[8230]; /* 'new_set_op' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 29, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r54 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r55 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r55 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 41, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r57 = PyList_New(1);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 41, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r58 = (CPyPtr)&((PyListObject *)cpy_r_r57)->ob_item;
    cpy_r_r59 = *(CPyPtr *)cpy_r_r58;
    CPy_INCREF(cpy_r_r55);
    *(PyObject * *)cpy_r_r59 = cpy_r_r55;
    cpy_r_r60 = CPyStatic_rtypes___set_rprimitive;
    if (unlikely(cpy_r_r60 == NULL)) {
        goto CPyL121;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 42, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r62 = CPyStatics[8955]; /* 'PySet_New' */
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = 2;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPyDef_registry___function_op(cpy_r_r54, cpy_r_r57, cpy_r_r60, cpy_r_r62, 2, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 39, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL122;
CPyL33: ;
    cpy_r_r71 = CPyStatics[889]; /* 'builtins.frozenset' */
    cpy_r_r72 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r72 != NULL)) goto CPyL36;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 50, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r74 = PyList_New(1);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 50, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r76 = cpy_r_r72;
    cpy_r_r77 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL123;
    } else
        goto CPyL40;
CPyL38: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 51, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r79 = CPyStatics[8956]; /* 'PyFrozenSet_New' */
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = NULL;
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = 2;
    cpy_r_r86 = CPY_INT_TAG;
    cpy_r_r87 = CPyDef_registry___function_op(cpy_r_r71, cpy_r_r74, cpy_r_r77, cpy_r_r79, 2, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 48, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL124;
CPyL41: ;
    cpy_r_r88 = CPyStatics[867]; /* 'in' */
    cpy_r_r89 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r89 != NULL)) goto CPyL44;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 59, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r91 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r91 != NULL)) goto CPyL47;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 59, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r93 = PyList_New(2);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 59, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r94 = (CPyPtr)&((PyListObject *)cpy_r_r93)->ob_item;
    cpy_r_r95 = *(CPyPtr *)cpy_r_r94;
    CPy_INCREF(cpy_r_r89);
    *(PyObject * *)cpy_r_r95 = cpy_r_r89;
    cpy_r_r96 = cpy_r_r95 + 8;
    CPy_INCREF(cpy_r_r91);
    *(PyObject * *)cpy_r_r96 = cpy_r_r91;
    cpy_r_r97 = CPyStatic_set_ops___globals;
    cpy_r_r98 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r99 = CPyDict_GetItem(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 60, CPyStatic_set_ops___globals);
        goto CPyL125;
    }
    if (likely(Py_TYPE(cpy_r_r99) == CPyType_rtypes___RPrimitive))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/set_ops.py", "<module>", 60, CPyStatic_set_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r99);
        goto CPyL125;
    }
    cpy_r_r101 = CPyStatics[8957]; /* 'PySet_Contains' */
    cpy_r_r102 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r102 == NULL)) {
        goto CPyL126;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r103 = 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 63, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r104 = PyList_New(2);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 64, CPyStatic_set_ops___globals);
        goto CPyL127;
    }
    cpy_r_r105 = CPyStatics[9016]; /* 1 */
    cpy_r_r106 = CPyStatics[9015]; /* 0 */
    cpy_r_r107 = (CPyPtr)&((PyListObject *)cpy_r_r104)->ob_item;
    cpy_r_r108 = *(CPyPtr *)cpy_r_r107;
    CPy_INCREF(cpy_r_r105);
    *(PyObject * *)cpy_r_r108 = cpy_r_r105;
    cpy_r_r109 = cpy_r_r108 + 8;
    CPy_INCREF(cpy_r_r106);
    *(PyObject * *)cpy_r_r109 = cpy_r_r106;
    cpy_r_r110 = NULL;
    cpy_r_r111 = NULL;
    cpy_r_r112 = NULL;
    cpy_r_r113 = 2;
    cpy_r_r114 = CPY_INT_TAG;
    cpy_r_r115 = CPyDef_registry___binary_op(cpy_r_r88, cpy_r_r93, cpy_r_r100, cpy_r_r101, 20, cpy_r_r110, cpy_r_r102, cpy_r_r104, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 57, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r116 = CPyStatic_set_ops___globals;
    cpy_r_r117 = CPyStatics[8223]; /* 'set_in_op' */
    cpy_r_r118 = CPyDict_SetItem(cpy_r_r116, cpy_r_r117, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 57, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r120 = CPyStatics[347]; /* 'remove' */
    cpy_r_r121 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r121 != NULL)) goto CPyL59;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 70, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r123 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r123 != NULL)) goto CPyL62;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 70, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r125 = PyList_New(2);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 70, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r126 = (CPyPtr)&((PyListObject *)cpy_r_r125)->ob_item;
    cpy_r_r127 = *(CPyPtr *)cpy_r_r126;
    CPy_INCREF(cpy_r_r121);
    *(PyObject * *)cpy_r_r127 = cpy_r_r121;
    cpy_r_r128 = cpy_r_r127 + 8;
    CPy_INCREF(cpy_r_r123);
    *(PyObject * *)cpy_r_r128 = cpy_r_r123;
    cpy_r_r129 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL128;
    } else
        goto CPyL66;
CPyL64: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 71, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r131 = CPyStatics[8958]; /* 'CPySet_Remove' */
    cpy_r_r132 = NULL;
    cpy_r_r133 = NULL;
    cpy_r_r134 = NULL;
    cpy_r_r135 = NULL;
    cpy_r_r136 = NULL;
    cpy_r_r137 = 2;
    cpy_r_r138 = CPY_INT_TAG;
    cpy_r_r139 = CPyDef_registry___method_op(cpy_r_r120, cpy_r_r125, cpy_r_r129, cpy_r_r131, 4, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 68, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL129;
CPyL67: ;
    cpy_r_r140 = CPyStatics[1306]; /* 'discard' */
    cpy_r_r141 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r141 != NULL)) goto CPyL70;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r142 = 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 79, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r143 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r143 != NULL)) goto CPyL73;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r144 = 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 79, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r145 = PyList_New(2);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 79, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r146 = (CPyPtr)&((PyListObject *)cpy_r_r145)->ob_item;
    cpy_r_r147 = *(CPyPtr *)cpy_r_r146;
    CPy_INCREF(cpy_r_r141);
    *(PyObject * *)cpy_r_r147 = cpy_r_r141;
    cpy_r_r148 = cpy_r_r147 + 8;
    CPy_INCREF(cpy_r_r143);
    *(PyObject * *)cpy_r_r148 = cpy_r_r143;
    cpy_r_r149 = CPyStatic_set_ops___globals;
    cpy_r_r150 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r151 = CPyDict_GetItem(cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 80, CPyStatic_set_ops___globals);
        goto CPyL130;
    }
    if (likely(Py_TYPE(cpy_r_r151) == CPyType_rtypes___RPrimitive))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/set_ops.py", "<module>", 80, CPyStatic_set_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r151);
        goto CPyL130;
    }
    cpy_r_r153 = CPyStatics[8959]; /* 'PySet_Discard' */
    cpy_r_r154 = NULL;
    cpy_r_r155 = NULL;
    cpy_r_r156 = NULL;
    cpy_r_r157 = NULL;
    cpy_r_r158 = NULL;
    cpy_r_r159 = 2;
    cpy_r_r160 = CPY_INT_TAG;
    cpy_r_r161 = CPyDef_registry___method_op(cpy_r_r140, cpy_r_r145, cpy_r_r152, cpy_r_r153, 20, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 77, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL131;
CPyL77: ;
    cpy_r_r162 = CPyStatics[1305]; /* 'add' */
    cpy_r_r163 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r163 != NULL)) goto CPyL80;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r164 = 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 88, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r165 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r165 != NULL)) goto CPyL83;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r166 = 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 88, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r167 = PyList_New(2);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 88, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r168 = (CPyPtr)&((PyListObject *)cpy_r_r167)->ob_item;
    cpy_r_r169 = *(CPyPtr *)cpy_r_r168;
    CPy_INCREF(cpy_r_r163);
    *(PyObject * *)cpy_r_r169 = cpy_r_r163;
    cpy_r_r170 = cpy_r_r169 + 8;
    CPy_INCREF(cpy_r_r165);
    *(PyObject * *)cpy_r_r170 = cpy_r_r165;
    cpy_r_r171 = CPyStatic_set_ops___globals;
    cpy_r_r172 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r173 = CPyDict_GetItem(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 89, CPyStatic_set_ops___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_r173) == CPyType_rtypes___RPrimitive))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/set_ops.py", "<module>", 89, CPyStatic_set_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r173);
        goto CPyL132;
    }
    cpy_r_r175 = CPyStatics[8960]; /* 'PySet_Add' */
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = 2;
    cpy_r_r182 = CPY_INT_TAG;
    cpy_r_r183 = CPyDef_registry___method_op(cpy_r_r162, cpy_r_r167, cpy_r_r174, cpy_r_r175, 20, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r167);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 86, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r184 = CPyStatic_set_ops___globals;
    cpy_r_r185 = CPyStatics[8231]; /* 'set_add_op' */
    cpy_r_r186 = CPyDict_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 86, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r188 = CPyStatics[1308]; /* 'update' */
    cpy_r_r189 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r189 != NULL)) goto CPyL91;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r190 = 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 99, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r191 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r191 != NULL)) goto CPyL94;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 99, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r193 = PyList_New(2);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 99, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r194 = (CPyPtr)&((PyListObject *)cpy_r_r193)->ob_item;
    cpy_r_r195 = *(CPyPtr *)cpy_r_r194;
    CPy_INCREF(cpy_r_r189);
    *(PyObject * *)cpy_r_r195 = cpy_r_r189;
    cpy_r_r196 = cpy_r_r195 + 8;
    CPy_INCREF(cpy_r_r191);
    *(PyObject * *)cpy_r_r196 = cpy_r_r191;
    cpy_r_r197 = CPyStatic_set_ops___globals;
    cpy_r_r198 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r199 = CPyDict_GetItem(cpy_r_r197, cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 100, CPyStatic_set_ops___globals);
        goto CPyL133;
    }
    if (likely(Py_TYPE(cpy_r_r199) == CPyType_rtypes___RPrimitive))
        cpy_r_r200 = cpy_r_r199;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/set_ops.py", "<module>", 100, CPyStatic_set_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r199);
        goto CPyL133;
    }
    cpy_r_r201 = CPyStatics[8961]; /* '_PySet_Update' */
    cpy_r_r202 = NULL;
    cpy_r_r203 = NULL;
    cpy_r_r204 = NULL;
    cpy_r_r205 = NULL;
    cpy_r_r206 = NULL;
    cpy_r_r207 = 2;
    cpy_r_r208 = CPY_INT_TAG;
    cpy_r_r209 = CPyDef_registry___method_op(cpy_r_r188, cpy_r_r193, cpy_r_r200, cpy_r_r201, 20, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208);
    CPy_DECREF(cpy_r_r193);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 97, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r210 = CPyStatic_set_ops___globals;
    cpy_r_r211 = CPyStatics[8232]; /* 'set_update_op' */
    cpy_r_r212 = CPyDict_SetItem(cpy_r_r210, cpy_r_r211, cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r213 = cpy_r_r212 >= 0;
    if (unlikely(!cpy_r_r213)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 97, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r214 = CPyStatics[1550]; /* 'clear' */
    cpy_r_r215 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r215 != NULL)) goto CPyL102;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 108, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r217 = PyList_New(1);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 108, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r218 = (CPyPtr)&((PyListObject *)cpy_r_r217)->ob_item;
    cpy_r_r219 = *(CPyPtr *)cpy_r_r218;
    CPy_INCREF(cpy_r_r215);
    *(PyObject * *)cpy_r_r219 = cpy_r_r215;
    cpy_r_r220 = CPyStatic_set_ops___globals;
    cpy_r_r221 = CPyStatics[8017]; /* 'c_int_rprimitive' */
    cpy_r_r222 = CPyDict_GetItem(cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 109, CPyStatic_set_ops___globals);
        goto CPyL134;
    }
    if (likely(Py_TYPE(cpy_r_r222) == CPyType_rtypes___RPrimitive))
        cpy_r_r223 = cpy_r_r222;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/set_ops.py", "<module>", 109, CPyStatic_set_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r222);
        goto CPyL134;
    }
    cpy_r_r224 = CPyStatics[8962]; /* 'PySet_Clear' */
    cpy_r_r225 = NULL;
    cpy_r_r226 = NULL;
    cpy_r_r227 = NULL;
    cpy_r_r228 = NULL;
    cpy_r_r229 = NULL;
    cpy_r_r230 = 2;
    cpy_r_r231 = CPY_INT_TAG;
    cpy_r_r232 = CPyDef_registry___method_op(cpy_r_r214, cpy_r_r217, cpy_r_r223, cpy_r_r224, 20, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r231);
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 106, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL135;
CPyL106: ;
    cpy_r_r233 = CPyStatics[795]; /* 'pop' */
    cpy_r_r234 = CPyStatic_rtypes___set_rprimitive;
    if (likely(cpy_r_r234 != NULL)) goto CPyL109;
    PyErr_SetString(PyExc_NameError, "value for final name \"set_rprimitive\" was not set");
    cpy_r_r235 = 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 117, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r236 = PyList_New(1);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 117, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    cpy_r_r237 = (CPyPtr)&((PyListObject *)cpy_r_r236)->ob_item;
    cpy_r_r238 = *(CPyPtr *)cpy_r_r237;
    CPy_INCREF(cpy_r_r234);
    *(PyObject * *)cpy_r_r238 = cpy_r_r234;
    cpy_r_r239 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r239 == NULL)) {
        goto CPyL136;
    } else
        goto CPyL113;
CPyL111: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r240 = 0;
    if (unlikely(!cpy_r_r240)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 118, CPyStatic_set_ops___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL113: ;
    cpy_r_r241 = CPyStatics[8963]; /* 'PySet_Pop' */
    cpy_r_r242 = NULL;
    cpy_r_r243 = NULL;
    cpy_r_r244 = NULL;
    cpy_r_r245 = NULL;
    cpy_r_r246 = NULL;
    cpy_r_r247 = 2;
    cpy_r_r248 = CPY_INT_TAG;
    cpy_r_r249 = CPyDef_registry___method_op(cpy_r_r233, cpy_r_r236, cpy_r_r239, cpy_r_r241, 2, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246, cpy_r_r247, cpy_r_r248);
    CPy_DECREF(cpy_r_r236);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/set_ops.py", "<module>", 115, CPyStatic_set_ops___globals);
        goto CPyL115;
    } else
        goto CPyL137;
CPyL114: ;
    return 1;
CPyL115: ;
    cpy_r_r250 = 2;
    return cpy_r_r250;
CPyL116: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL117: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL15;
CPyL118: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL17;
CPyL119: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL20;
CPyL120: ;
    CPy_DecRef(cpy_r_r32);
    CPyTagged_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    goto CPyL115;
CPyL121: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL30;
CPyL122: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL33;
CPyL123: ;
    CPy_DecRef(cpy_r_r74);
    goto CPyL38;
CPyL124: ;
    CPy_DECREF(cpy_r_r87);
    goto CPyL41;
CPyL125: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL115;
CPyL126: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r100);
    goto CPyL51;
CPyL127: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r100);
    goto CPyL115;
CPyL128: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL64;
CPyL129: ;
    CPy_DECREF(cpy_r_r139);
    goto CPyL67;
CPyL130: ;
    CPy_DecRef(cpy_r_r145);
    goto CPyL115;
CPyL131: ;
    CPy_DECREF(cpy_r_r161);
    goto CPyL77;
CPyL132: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL115;
CPyL133: ;
    CPy_DecRef(cpy_r_r193);
    goto CPyL115;
CPyL134: ;
    CPy_DecRef(cpy_r_r217);
    goto CPyL115;
CPyL135: ;
    CPy_DECREF(cpy_r_r232);
    goto CPyL106;
CPyL136: ;
    CPy_DecRef(cpy_r_r236);
    goto CPyL111;
CPyL137: ;
    CPy_DECREF(cpy_r_r249);
    goto CPyL114;
}
