#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef exc_opsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef exc_opsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.exc_ops",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    exc_opsmodule_methods
};

PyObject *CPyInit_mypyc___primitives___exc_ops(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___exc_ops_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___exc_ops_internal);
        return CPyModule_mypyc___primitives___exc_ops_internal;
    }
    CPyModule_mypyc___primitives___exc_ops_internal = PyModule_Create(&exc_opsmodule);
    if (unlikely(CPyModule_mypyc___primitives___exc_ops_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___exc_ops_internal, "__name__");
    CPyStatic_exc_ops___globals = PyModule_GetDict(CPyModule_mypyc___primitives___exc_ops_internal);
    if (unlikely(CPyStatic_exc_ops___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_exc_ops_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___exc_ops_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___exc_ops_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_exc_ops_____top_level__(void) {
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
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyPtr cpy_r_r165;
    CPyPtr cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyPtr cpy_r_r184;
    CPyPtr cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
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
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
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
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    char cpy_r_r232;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", -1, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_exc_ops___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 3, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10254]; /* ('ERR_ALWAYS', 'ERR_FALSE', 'ERR_NEVER') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_exc_ops___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 5, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10255]; /* ('bit_rprimitive', 'exc_rtuple', 'object_rprimitive',
                                      'void_rtype') */
    cpy_r_r14 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r15 = CPyStatic_exc_ops___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 6, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10256]; /* ('custom_op',) */
    cpy_r_r18 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r19 = CPyStatic_exc_ops___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 7, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r21 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 12, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r23 = PyList_New(1);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 12, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r24 = (CPyPtr)&((PyListObject *)cpy_r_r23)->ob_item;
    cpy_r_r25 = *(CPyPtr *)cpy_r_r24;
    CPy_INCREF(cpy_r_r21);
    *(PyObject * *)cpy_r_r25 = cpy_r_r21;
    cpy_r_r26 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 13, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r28 = CPyStatics[8725]; /* 'CPy_Raise' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = NULL;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_registry___custom_op(cpy_r_r23, cpy_r_r26, cpy_r_r28, 6, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 11, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r36 = CPyStatic_exc_ops___globals;
    cpy_r_r37 = CPyStatics[8582]; /* 'raise_exception_op' */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r36, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 11, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r40 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r40 != NULL)) goto CPyL19;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 20, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r42 = PyList_New(1);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 20, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    CPy_INCREF(cpy_r_r40);
    *(PyObject * *)cpy_r_r44 = cpy_r_r40;
    cpy_r_r45 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL100;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 21, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r47 = CPyStatics[8726]; /* 'CPyGen_SetStopIterationValue' */
    cpy_r_r48 = NULL;
    cpy_r_r49 = NULL;
    cpy_r_r50 = NULL;
    cpy_r_r51 = NULL;
    cpy_r_r52 = NULL;
    cpy_r_r53 = 2;
    cpy_r_r54 = CPyDef_registry___custom_op(cpy_r_r42, cpy_r_r45, cpy_r_r47, 6, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 19, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r55 = CPyStatic_exc_ops___globals;
    cpy_r_r56 = CPyStatics[8488]; /* 'set_stop_iteration_value' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 19, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r59 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r59 != NULL)) goto CPyL28;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 29, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r61 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r61 != NULL)) goto CPyL31;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 29, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r63 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r63 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r64 = 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 29, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r65 = PyList_New(3);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 29, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    CPy_INCREF(cpy_r_r59);
    *(PyObject * *)cpy_r_r67 = cpy_r_r59;
    cpy_r_r68 = cpy_r_r67 + 8;
    CPy_INCREF(cpy_r_r61);
    *(PyObject * *)cpy_r_r68 = cpy_r_r61;
    cpy_r_r69 = cpy_r_r67 + 16;
    CPy_INCREF(cpy_r_r63);
    *(PyObject * *)cpy_r_r69 = cpy_r_r63;
    cpy_r_r70 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r70 == NULL)) {
        goto CPyL101;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 30, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r72 = CPyStatics[8727]; /* 'CPyErr_SetObjectAndTraceback' */
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = 2;
    cpy_r_r79 = CPyDef_registry___custom_op(cpy_r_r65, cpy_r_r70, cpy_r_r72, 6, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 28, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r80 = CPyStatic_exc_ops___globals;
    cpy_r_r81 = CPyStatics[8371]; /* 'raise_exception_with_tb_op' */
    cpy_r_r82 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 28, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 37, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r85 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r85 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL44;
CPyL42: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 37, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r87 = CPyStatics[8728]; /* 'CPy_Reraise' */
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = NULL;
    cpy_r_r92 = NULL;
    cpy_r_r93 = 2;
    cpy_r_r94 = CPyDef_registry___custom_op(cpy_r_r84, cpy_r_r85, cpy_r_r87, 6, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 36, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r95 = CPyStatic_exc_ops___globals;
    cpy_r_r96 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 36, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r99 = PyList_New(0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 42, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r100 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r100 == NULL)) {
        goto CPyL103;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 43, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r102 = CPyStatics[8729]; /* 'CPy_NoErrOccured' */
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = NULL;
    cpy_r_r108 = 2;
    cpy_r_r109 = CPyDef_registry___custom_op(cpy_r_r99, cpy_r_r100, cpy_r_r102, 4, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 41, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r110 = CPyStatic_exc_ops___globals;
    cpy_r_r111 = CPyStatics[8271]; /* 'no_err_occurred_op' */
    cpy_r_r112 = CPyDict_SetItem(cpy_r_r110, cpy_r_r111, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 41, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r114 = PyList_New(0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 49, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r115 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r115 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 50, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r117 = CPyStatics[8730]; /* 'PyErr_Occurred' */
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = NULL;
    cpy_r_r121 = NULL;
    cpy_r_r122 = NULL;
    cpy_r_r123 = CPyDef_registry___custom_op(cpy_r_r114, cpy_r_r115, cpy_r_r117, 0, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, 1);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 48, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r124 = CPyStatic_exc_ops___globals;
    cpy_r_r125 = CPyStatics[8407]; /* 'err_occurred_op' */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r124, cpy_r_r125, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 48, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r128 = PyList_New(0);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 59, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r129 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL62;
CPyL60: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 60, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r131 = CPyStatics[8731]; /* 'CPy_KeepPropagating' */
    cpy_r_r132 = NULL;
    cpy_r_r133 = NULL;
    cpy_r_r134 = NULL;
    cpy_r_r135 = NULL;
    cpy_r_r136 = NULL;
    cpy_r_r137 = 2;
    cpy_r_r138 = CPyDef_registry___custom_op(cpy_r_r128, cpy_r_r129, cpy_r_r131, 4, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_r137);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 58, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r139 = CPyStatic_exc_ops___globals;
    cpy_r_r140 = CPyStatics[8408]; /* 'keep_propagating_op' */
    cpy_r_r141 = CPyDict_SetItem(cpy_r_r139, cpy_r_r140, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 58, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r143 = PyList_New(0);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 70, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r144 = CPyStatic_exc_ops___globals;
    cpy_r_r145 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r146 = CPyDict_GetItem(cpy_r_r144, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 70, CPyStatic_exc_ops___globals);
        goto CPyL106;
    }
    if (likely(Py_TYPE(cpy_r_r146) == CPyType_rtypes___RTuple))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/exc_ops.py", "<module>", 70, CPyStatic_exc_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r146);
        goto CPyL106;
    }
    cpy_r_r148 = CPyStatics[8732]; /* 'CPy_CatchError' */
    cpy_r_r149 = NULL;
    cpy_r_r150 = NULL;
    cpy_r_r151 = NULL;
    cpy_r_r152 = NULL;
    cpy_r_r153 = NULL;
    cpy_r_r154 = 2;
    cpy_r_r155 = CPyDef_registry___custom_op(cpy_r_r143, cpy_r_r147, cpy_r_r148, 0, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 69, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r156 = CPyStatic_exc_ops___globals;
    cpy_r_r157 = CPyStatics[8376]; /* 'error_catch_op' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r156, cpy_r_r157, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 69, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r160 = CPyStatic_exc_ops___globals;
    cpy_r_r161 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r162 = CPyDict_GetItem(cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 76, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    if (likely(Py_TYPE(cpy_r_r162) == CPyType_rtypes___RTuple))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/exc_ops.py", "<module>", 76, CPyStatic_exc_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r162);
        goto CPyL98;
    }
    cpy_r_r164 = PyList_New(1);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 76, CPyStatic_exc_ops___globals);
        goto CPyL107;
    }
    cpy_r_r165 = (CPyPtr)&((PyListObject *)cpy_r_r164)->ob_item;
    cpy_r_r166 = *(CPyPtr *)cpy_r_r165;
    *(PyObject * *)cpy_r_r166 = cpy_r_r163;
    cpy_r_r167 = CPyStatic_rtypes___void_rtype;
    if (unlikely(cpy_r_r167 == NULL)) {
        goto CPyL108;
    } else
        goto CPyL75;
CPyL73: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"void_rtype\" was not set");
    cpy_r_r168 = 0;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 77, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r169 = CPyStatics[8733]; /* 'CPy_RestoreExcInfo' */
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = NULL;
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = 2;
    cpy_r_r176 = CPyDef_registry___custom_op(cpy_r_r164, cpy_r_r167, cpy_r_r169, 0, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 75, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r177 = CPyStatic_exc_ops___globals;
    cpy_r_r178 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r177, cpy_r_r178, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 75, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r181 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r181 != NULL)) goto CPyL80;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r182 = 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 84, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL80: ;
    cpy_r_r183 = PyList_New(1);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 84, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r184 = (CPyPtr)&((PyListObject *)cpy_r_r183)->ob_item;
    cpy_r_r185 = *(CPyPtr *)cpy_r_r184;
    CPy_INCREF(cpy_r_r181);
    *(PyObject * *)cpy_r_r185 = cpy_r_r181;
    cpy_r_r186 = CPyStatic_rtypes___bit_rprimitive;
    if (unlikely(cpy_r_r186 == NULL)) {
        goto CPyL109;
    } else
        goto CPyL84;
CPyL82: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bit_rprimitive\" was not set");
    cpy_r_r187 = 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 85, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r188 = CPyStatics[8734]; /* 'CPy_ExceptionMatches' */
    cpy_r_r189 = NULL;
    cpy_r_r190 = NULL;
    cpy_r_r191 = NULL;
    cpy_r_r192 = NULL;
    cpy_r_r193 = NULL;
    cpy_r_r194 = 2;
    cpy_r_r195 = CPyDef_registry___custom_op(cpy_r_r183, cpy_r_r186, cpy_r_r188, 0, cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192, cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 83, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r196 = CPyStatic_exc_ops___globals;
    cpy_r_r197 = CPyStatics[8378]; /* 'exc_matches_op' */
    cpy_r_r198 = CPyDict_SetItem(cpy_r_r196, cpy_r_r197, cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    cpy_r_r199 = cpy_r_r198 >= 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 83, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r200 = PyList_New(0);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 92, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r201 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r201 == NULL)) {
        goto CPyL110;
    } else
        goto CPyL90;
CPyL88: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r202 = 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 93, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r203 = CPyStatics[8735]; /* 'CPy_GetExcValue' */
    cpy_r_r204 = NULL;
    cpy_r_r205 = NULL;
    cpy_r_r206 = NULL;
    cpy_r_r207 = NULL;
    cpy_r_r208 = NULL;
    cpy_r_r209 = 2;
    cpy_r_r210 = CPyDef_registry___custom_op(cpy_r_r200, cpy_r_r201, cpy_r_r203, 0, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 91, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r211 = CPyStatic_exc_ops___globals;
    cpy_r_r212 = CPyStatics[8583]; /* 'get_exc_value_op' */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_r211, cpy_r_r212, cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 91, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r215 = PyList_New(0);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 100, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r216 = CPyStatic_exc_ops___globals;
    cpy_r_r217 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r218 = CPyDict_GetItem(cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 100, CPyStatic_exc_ops___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r218) == CPyType_rtypes___RTuple))
        cpy_r_r219 = cpy_r_r218;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/exc_ops.py", "<module>", 100, CPyStatic_exc_ops___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r218);
        goto CPyL111;
    }
    cpy_r_r220 = CPyStatics[8736]; /* 'CPy_GetExcInfo' */
    cpy_r_r221 = NULL;
    cpy_r_r222 = NULL;
    cpy_r_r223 = NULL;
    cpy_r_r224 = NULL;
    cpy_r_r225 = NULL;
    cpy_r_r226 = 2;
    cpy_r_r227 = CPyDef_registry___custom_op(cpy_r_r215, cpy_r_r219, cpy_r_r220, 0, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226);
    CPy_DECREF(cpy_r_r215);
    CPy_DECREF(cpy_r_r219);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 99, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    cpy_r_r228 = CPyStatic_exc_ops___globals;
    cpy_r_r229 = CPyStatics[8585]; /* 'get_exc_info_op' */
    cpy_r_r230 = CPyDict_SetItem(cpy_r_r228, cpy_r_r229, cpy_r_r227);
    CPy_DECREF(cpy_r_r227);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypyc/primitives/exc_ops.py", "<module>", 99, CPyStatic_exc_ops___globals);
        goto CPyL98;
    }
    return 1;
CPyL98: ;
    cpy_r_r232 = 2;
    return cpy_r_r232;
CPyL99: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL12;
CPyL100: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL21;
CPyL101: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL36;
CPyL102: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL42;
CPyL103: ;
    CPy_DecRef(cpy_r_r99);
    goto CPyL48;
CPyL104: ;
    CPy_DecRef(cpy_r_r114);
    goto CPyL54;
CPyL105: ;
    CPy_DecRef(cpy_r_r128);
    goto CPyL60;
CPyL106: ;
    CPy_DecRef(cpy_r_r143);
    goto CPyL98;
CPyL107: ;
    CPy_DecRef(cpy_r_r163);
    goto CPyL98;
CPyL108: ;
    CPy_DecRef(cpy_r_r164);
    goto CPyL73;
CPyL109: ;
    CPy_DecRef(cpy_r_r183);
    goto CPyL82;
CPyL110: ;
    CPy_DecRef(cpy_r_r200);
    goto CPyL88;
CPyL111: ;
    CPy_DecRef(cpy_r_r215);
    goto CPyL98;
}
