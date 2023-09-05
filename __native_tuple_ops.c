#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef tuple_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef tuple_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.tuple_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    tuple_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___tuple_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___tuple_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___tuple_ops_internal);
        return CPyModule_mypyc___primitives___tuple_ops_internal;
    }
    CPyModule_mypyc___primitives___tuple_ops_internal = PyModule_Create(&tuple_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___tuple_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___tuple_ops_internal, "__name__");
    CPyStatic_tuple_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___tuple_ops_internal);
    if (unlikely(CPyStatic_tuple_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_tuple_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___tuple_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___tuple_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_tuple_ops_____top_level__(void) {
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
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyPtr cpy_r_r111;
    CPyPtr cpy_r_r112;
    CPyPtr cpy_r_r113;
    CPyPtr cpy_r_r114;
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
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyPtr cpy_r_r129;
    CPyPtr cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyPtr cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
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
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    CPyPtr cpy_r_r169;
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
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", -1, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_tuple_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 7, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10280]; /* ('ERR_FALSE', 'ERR_MAGIC') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_tuple_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 9, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10284]; /* ('bit_rprimitive', 'c_pyssize_t_rprimitive',
                                      'int_rprimitive', 'list_rprimitive',
                                      'object_rprimitive', 'tuple_rprimitive') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_tuple_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 10, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10285]; /* ('custom_op', 'function_op', 'load_address_op',
                                      'method_op') */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_tuple_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 18, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r22 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r22 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 21, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r24 = CPyStatics[8987]; /* 'PyTuple_Type' */
    cpy_r_r25 = CPyDef_registry___load_address_op(cpy_r_r21, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 21, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    } else
        goto CPyL92;
CPyL11: ;
    cpy_r_r26 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r27 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r27 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 26, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r29 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r29 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 26, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 26, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r33 = cpy_r_r27;
    cpy_r_r34 = cpy_r_r33 + 8;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r34 = cpy_r_r29;
    cpy_r_r35 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r35 == NULL)) {
        goto CPyL93;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 27, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = CPyStatics[8988]; /* 'CPySequenceTuple_GetItem' */
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_registry___method_op(cpy_r_r26, cpy_r_r31, cpy_r_r35, cpy_r_r37, 2, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 24, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r46 = CPyStatic_tuple_ops___globals;
    cpy_r_r47 = CPyStatics[8989]; /* 'tuple_get_item_op' */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r46, cpy_r_r47, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 24, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r50 = CPyStatic_tuple_ops___globals;
    cpy_r_r51 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 34, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_rtypes___RPrimitive))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/tuple_ops.py", "<module>", 34, CPyStatic_tuple_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r52);
        goto CPyL91;
    }
    cpy_r_r54 = PyList_New(1);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 34, CPyStatic_tuple_ops___globals);
        goto CPyL94;
    }
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_r53;
    cpy_r_r57 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r57 == NULL)) {
        goto CPyL95;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 35, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r59 = CPyStatics[8990]; /* 'PyTuple_Pack' */
    cpy_r_r60 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r60 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 38, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = 2;
    cpy_r_r67 = CPyDef_registry___custom_op(cpy_r_r54, cpy_r_r57, cpy_r_r59, 2, cpy_r_r60, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 33, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r68 = CPyStatic_tuple_ops___globals;
    cpy_r_r69 = CPyStatics[8433]; /* 'new_tuple_op' */
    cpy_r_r70 = CPyDict_SetItem(cpy_r_r68, cpy_r_r69, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 33, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r72 = CPyStatic_tuple_ops___globals;
    cpy_r_r73 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 42, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_rtypes___RPrimitive))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/tuple_ops.py", "<module>", 42, CPyStatic_tuple_ops___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r74);
        goto CPyL91;
    }
    cpy_r_r76 = PyList_New(1);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 42, CPyStatic_tuple_ops___globals);
        goto CPyL97;
    }
    cpy_r_r77 = (CPyPtr)&((PyListObject *)cpy_r_r76)->ob_item;
    cpy_r_r78 = *(CPyPtr *)cpy_r_r77;
    *(PyObject * *)cpy_r_r78 = cpy_r_r75;
    cpy_r_r79 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r79 == NULL)) {
        goto CPyL98;
    } else
        goto CPyL40;
CPyL38: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r80 = 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 43, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r81 = CPyStatics[8991]; /* 'PyTuple_New' */
    cpy_r_r82 = NULL;
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = 2;
    cpy_r_r88 = CPyDef_registry___custom_op(cpy_r_r76, cpy_r_r79, cpy_r_r81, 2, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 41, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r89 = CPyStatic_tuple_ops___globals;
    cpy_r_r90 = CPyStatics[8434]; /* 'new_tuple_with_length_op' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r89, cpy_r_r90, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 41, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r93 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r93 != NULL)) goto CPyL45;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 51, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r95 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r95 != NULL)) goto CPyL48;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 51, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r97 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r97 != NULL)) goto CPyL51;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 51, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r99 = PyList_New(3);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 51, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r100 = (CPyPtr)&((PyListObject *)cpy_r_r99)->ob_item;
    cpy_r_r101 = *(CPyPtr *)cpy_r_r100;
    CPy_INCREF(cpy_r_r93);
    *(PyObject * *)cpy_r_r101 = cpy_r_r93;
    cpy_r_r102 = cpy_r_r101 + 8;
    CPy_INCREF(cpy_r_r95);
    *(PyObject * *)cpy_r_r102 = cpy_r_r95;
    cpy_r_r103 = cpy_r_r101 + 16;
    CPy_INCREF(cpy_r_r97);
    *(PyObject * *)cpy_r_r103 = cpy_r_r97;
    cpy_r_r104 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r104 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r105 = 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 52, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r106 = CPyStatics[8992]; /* 'CPySequenceTuple_SetItemUnsafe' */
    cpy_r_r107 = PyList_New(3);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 55, CPyStatic_tuple_ops___globals);
        goto CPyL100;
    }
    cpy_r_r108 = 0 ? Py_True : Py_False;
    cpy_r_r109 = 0 ? Py_True : Py_False;
    cpy_r_r110 = 1 ? Py_True : Py_False;
    cpy_r_r111 = (CPyPtr)&((PyListObject *)cpy_r_r107)->ob_item;
    cpy_r_r112 = *(CPyPtr *)cpy_r_r111;
    CPy_INCREF(cpy_r_r108);
    *(PyObject * *)cpy_r_r112 = cpy_r_r108;
    cpy_r_r113 = cpy_r_r112 + 8;
    CPy_INCREF(cpy_r_r109);
    *(PyObject * *)cpy_r_r113 = cpy_r_r109;
    cpy_r_r114 = cpy_r_r112 + 16;
    CPy_INCREF(cpy_r_r110);
    *(PyObject * *)cpy_r_r114 = cpy_r_r110;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = 2;
    cpy_r_r120 = CPyDef_registry___custom_op(cpy_r_r99, cpy_r_r104, cpy_r_r106, 4, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r107, cpy_r_r119);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 50, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r121 = CPyStatic_tuple_ops___globals;
    cpy_r_r122 = CPyStatics[8537]; /* 'new_tuple_set_item_op' */
    cpy_r_r123 = CPyDict_SetItem(cpy_r_r121, cpy_r_r122, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 50, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r125 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r126 = CPyStatic_rtypes___list_rprimitive;
    if (likely(cpy_r_r126 != NULL)) goto CPyL61;
    PyErr_SetString(PyExc_NameError, "value for final name \"list_rprimitive\" was not set");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 61, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r128 = PyList_New(1);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 61, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r129 = (CPyPtr)&((PyListObject *)cpy_r_r128)->ob_item;
    cpy_r_r130 = *(CPyPtr *)cpy_r_r129;
    CPy_INCREF(cpy_r_r126);
    *(PyObject * *)cpy_r_r130 = cpy_r_r126;
    cpy_r_r131 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r131 == NULL)) {
        goto CPyL101;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 62, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r133 = CPyStatics[8993]; /* 'PyList_AsTuple' */
    cpy_r_r134 = NULL;
    cpy_r_r135 = NULL;
    cpy_r_r136 = NULL;
    cpy_r_r137 = NULL;
    cpy_r_r138 = NULL;
    cpy_r_r139 = 2;
    cpy_r_r140 = CPyDef_registry___function_op(cpy_r_r125, cpy_r_r128, cpy_r_r131, cpy_r_r133, 2, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, 4);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 59, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r141 = CPyStatic_tuple_ops___globals;
    cpy_r_r142 = CPyStatics[8229]; /* 'list_tuple_op' */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r141, cpy_r_r142, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 59, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r145 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r146 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r146 != NULL)) goto CPyL70;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r147 = 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 71, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r148 = PyList_New(1);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 71, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r149 = (CPyPtr)&((PyListObject *)cpy_r_r148)->ob_item;
    cpy_r_r150 = *(CPyPtr *)cpy_r_r149;
    CPy_INCREF(cpy_r_r146);
    *(PyObject * *)cpy_r_r150 = cpy_r_r146;
    cpy_r_r151 = CPyStatic_rtypes___tuple_rprimitive;
    if (unlikely(cpy_r_r151 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r152 = 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 72, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r153 = CPyStatics[8994]; /* 'PySequence_Tuple' */
    cpy_r_r154 = NULL;
    cpy_r_r155 = NULL;
    cpy_r_r156 = NULL;
    cpy_r_r157 = NULL;
    cpy_r_r158 = NULL;
    cpy_r_r159 = 2;
    cpy_r_r160 = CPY_INT_TAG;
    cpy_r_r161 = CPyDef_registry___function_op(cpy_r_r145, cpy_r_r148, cpy_r_r151, cpy_r_r153, 2, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 69, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    } else
        goto CPyL103;
CPyL75: ;
    cpy_r_r162 = CPyStatic_rtypes___tuple_rprimitive;
    if (likely(cpy_r_r162 != NULL)) goto CPyL78;
    PyErr_SetString(PyExc_NameError, "value for final name \"tuple_rprimitive\" was not set");
    cpy_r_r163 = 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 79, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r164 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r164 != NULL)) goto CPyL81;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r165 = 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 79, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r166 = CPyStatic_rtypes___int_rprimitive;
    if (likely(cpy_r_r166 != NULL)) goto CPyL84;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r167 = 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 79, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r168 = PyList_New(3);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 79, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r169 = (CPyPtr)&((PyListObject *)cpy_r_r168)->ob_item;
    cpy_r_r170 = *(CPyPtr *)cpy_r_r169;
    CPy_INCREF(cpy_r_r162);
    *(PyObject * *)cpy_r_r170 = cpy_r_r162;
    cpy_r_r171 = cpy_r_r170 + 8;
    CPy_INCREF(cpy_r_r164);
    *(PyObject * *)cpy_r_r171 = cpy_r_r164;
    cpy_r_r172 = cpy_r_r170 + 16;
    CPy_INCREF(cpy_r_r166);
    *(PyObject * *)cpy_r_r172 = cpy_r_r166;
    cpy_r_r173 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r173 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL88;
CPyL86: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r174 = 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 80, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL88: ;
    cpy_r_r175 = CPyStatics[8995]; /* 'CPySequenceTuple_GetSlice' */
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = 2;
    cpy_r_r182 = CPyDef_registry___custom_op(cpy_r_r168, cpy_r_r173, cpy_r_r175, 2, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 78, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    cpy_r_r183 = CPyStatic_tuple_ops___globals;
    cpy_r_r184 = CPyStatics[8220]; /* 'tuple_slice_op' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypyc/primitives/tuple_ops.py", "<module>", 78, CPyStatic_tuple_ops___globals);
        goto CPyL91;
    }
    return 1;
CPyL91: ;
    cpy_r_r187 = 2;
    return cpy_r_r187;
CPyL92: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL11;
CPyL93: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL19;
CPyL94: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL91;
CPyL95: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL27;
CPyL96: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL30;
CPyL97: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL91;
CPyL98: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL38;
CPyL99: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL53;
CPyL100: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL91;
CPyL101: ;
    CPy_DecRef(cpy_r_r128);
    goto CPyL63;
CPyL102: ;
    CPy_DecRef(cpy_r_r148);
    goto CPyL72;
CPyL103: ;
    CPy_DECREF(cpy_r_r161);
    goto CPyL75;
CPyL104: ;
    CPy_DecRef(cpy_r_r168);
    goto CPyL86;
}
