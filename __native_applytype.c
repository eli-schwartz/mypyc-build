#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef applytypemodule_methods[] = {
    {"get_target_type", (PyCFunction)CPyPy_applytype___get_target_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_generic_arguments", (PyCFunction)CPyPy_applytype___apply_generic_arguments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef applytypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.applytype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    applytypemodule_methods
};

PyObject *CPyInit_mypy___applytype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___applytype_internal) {
        Py_INCREF(CPyModule_mypy___applytype_internal);
        return CPyModule_mypy___applytype_internal;
    }
    CPyModule_mypy___applytype_internal = PyModule_Create(&applytypemodule);
    if (unlikely(CPyModule_mypy___applytype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___applytype_internal, "__name__");
    CPyStatic_applytype___globals = PyModule_GetDict(CPyModule_mypy___applytype_internal);
    if (unlikely(CPyStatic_applytype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_applytype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___applytype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___applytype_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_applytype___get_target_type(PyObject *cpy_r_tvar, PyObject *cpy_r_type, PyObject *cpy_r_callable, PyObject *cpy_r_report_incompatible_typevar_value, PyObject *cpy_r_context, char cpy_r_skip_unsatisfied) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_values;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_p_type;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_v1;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_v;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_matching;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_best;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_match;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_upper_bound;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    cpy_r_r0 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL2: ;
    cpy_r_r4 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL4;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL4: ;
    cpy_r_r8 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_tvar)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) goto CPyL7;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 39, CPyStatic_applytype___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r13 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 40, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL67;
    }
    cpy_r_r14 = ((mypy___types___TypeVarTypeObject *)cpy_r_r13)->_values;
    CPy_INCREF(cpy_r_r14);
    cpy_r_values = cpy_r_r14;
    cpy_r_r15 = CPyDef_types___get_proper_type(cpy_r_type);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 41, CPyStatic_applytype___globals);
        goto CPyL68;
    }
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 41, CPyStatic_applytype___globals, "mypy.types.ProperType", cpy_r_r15);
        goto CPyL68;
    }
    cpy_r_p_type = cpy_r_r16;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = cpy_r_r19 != 0;
    if (!cpy_r_r20) goto CPyL69;
    cpy_r_r21 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_p_type)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (cpy_r_r24) {
        goto CPyL70;
    } else
        goto CPyL13;
CPyL12: ;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL13: ;
    cpy_r_r25 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_p_type)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL71;
    if (likely(Py_TYPE(cpy_r_p_type) == CPyType_types___TypeVarType))
        cpy_r_r29 = cpy_r_p_type;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 45, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_p_type);
        goto CPyL72;
    }
    cpy_r_r30 = ((mypy___types___TypeVarTypeObject *)cpy_r_r29)->_values;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL71;
    cpy_r_r35 = 1;
    if (likely(Py_TYPE(cpy_r_p_type) == CPyType_types___TypeVarType))
        cpy_r_r36 = cpy_r_p_type;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 48, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_p_type);
        goto CPyL72;
    }
    cpy_r_r37 = ((mypy___types___TypeVarTypeObject *)cpy_r_r36)->_values;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_p_type);
    cpy_r_r38 = 0;
CPyL18: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL73;
    cpy_r_r43 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r38);
    if (likely(PyObject_TypeCheck(cpy_r_r43, CPyType_types___Type)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 48, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r43);
        goto CPyL74;
    }
    cpy_r_v1 = cpy_r_r44;
    cpy_r_r45 = 0;
    cpy_r_r46 = 0;
CPyL21: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL75;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_values, cpy_r_r46);
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_types___Type)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 48, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r51);
        goto CPyL76;
    }
    cpy_r_v = cpy_r_r52;
    cpy_r_r53 = 2;
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_subtypes___is_same_type(cpy_r_v, cpy_r_v1, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 48, CPyStatic_applytype___globals);
        goto CPyL76;
    }
    if (cpy_r_r55) {
        goto CPyL77;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r45 = 1;
    goto CPyL27;
CPyL26: ;
    cpy_r_r56 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r56;
    goto CPyL21;
CPyL27: ;
    cpy_r_r57 = cpy_r_r45 ^ 1;
    if (cpy_r_r57) {
        goto CPyL78;
    } else
        goto CPyL29;
CPyL28: ;
    cpy_r_r35 = 0;
    goto CPyL30;
CPyL29: ;
    cpy_r_r58 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r58;
    goto CPyL18;
CPyL30: ;
    if (cpy_r_r35) {
        goto CPyL79;
    } else
        goto CPyL32;
CPyL31: ;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL32: ;
    cpy_r_r59 = PyList_New(0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 50, CPyStatic_applytype___globals);
        goto CPyL68;
    }
    cpy_r_matching = cpy_r_r59;
    cpy_r_r60 = 0;
CPyL34: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL80;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_values, cpy_r_r60);
    if (likely(PyObject_TypeCheck(cpy_r_r65, CPyType_types___Type)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 51, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r65);
        goto CPyL81;
    }
    cpy_r_value = cpy_r_r66;
    cpy_r_r67 = NULL;
    cpy_r_r68 = 2;
    cpy_r_r69 = 2;
    cpy_r_r70 = 2;
    cpy_r_r71 = 2;
    cpy_r_r72 = 2;
    cpy_r_r73 = NULL;
    cpy_r_r74 = CPyDef_subtypes___is_subtype(cpy_r_type, cpy_r_value, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 52, CPyStatic_applytype___globals);
        goto CPyL82;
    }
    if (!cpy_r_r74) goto CPyL83;
    cpy_r_r75 = PyList_Append(cpy_r_matching, cpy_r_value);
    CPy_DECREF(cpy_r_value);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 53, CPyStatic_applytype___globals);
        goto CPyL81;
    }
CPyL39: ;
    cpy_r_r77 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r77;
    goto CPyL34;
CPyL40: ;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_matching)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = cpy_r_r80 != 0;
    if (!cpy_r_r81) goto CPyL84;
    cpy_r_r82 = CPyList_GetItemShort(cpy_r_matching, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 55, CPyStatic_applytype___globals);
        goto CPyL85;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_types___Type)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 55, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r82);
        goto CPyL85;
    }
    cpy_r_best = cpy_r_r83;
    cpy_r_r84 = CPyList_GetSlice(cpy_r_matching, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_matching);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 57, CPyStatic_applytype___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 57, CPyStatic_applytype___globals, "list", cpy_r_r84);
        goto CPyL86;
    }
    cpy_r_r86 = 0;
CPyL46: ;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_r85)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 << 1;
    cpy_r_r90 = (Py_ssize_t)cpy_r_r86 < (Py_ssize_t)cpy_r_r89;
    if (!cpy_r_r90) goto CPyL87;
    cpy_r_r91 = CPyList_GetItemUnsafe(cpy_r_r85, cpy_r_r86);
    if (likely(PyObject_TypeCheck(cpy_r_r91, CPyType_types___Type)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 57, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r91);
        goto CPyL88;
    }
    cpy_r_match = cpy_r_r92;
    cpy_r_r93 = NULL;
    cpy_r_r94 = 2;
    cpy_r_r95 = 2;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPyDef_subtypes___is_subtype(cpy_r_match, cpy_r_best, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 58, CPyStatic_applytype___globals);
        goto CPyL89;
    }
    if (cpy_r_r100) {
        goto CPyL90;
    } else
        goto CPyL91;
CPyL50: ;
    cpy_r_best = cpy_r_match;
CPyL51: ;
    cpy_r_r101 = cpy_r_r86 + 2;
    cpy_r_r86 = cpy_r_r101;
    goto CPyL46;
CPyL52: ;
    return cpy_r_best;
CPyL53: ;
    if (!cpy_r_skip_unsatisfied) goto CPyL55;
    cpy_r_r102 = Py_None;
    CPy_INCREF(cpy_r_r102);
    return cpy_r_r102;
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r103 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 63, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL67;
    }
    cpy_r_r104 = ((mypy___types___TypeVarTypeObject *)cpy_r_r103)->_name;
    CPy_INCREF(cpy_r_r104);
    PyObject *cpy_r_r105[4] = {cpy_r_callable, cpy_r_type, cpy_r_r104, cpy_r_context};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_report_incompatible_typevar_value, cpy_r_r106, 4, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 63, CPyStatic_applytype___globals);
        goto CPyL92;
    } else
        goto CPyL93;
CPyL57: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL66;
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r108 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 65, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL67;
    }
    cpy_r_r109 = ((mypy___types___TypeVarTypeObject *)cpy_r_r108)->_upper_bound;
    CPy_INCREF(cpy_r_r109);
    cpy_r_upper_bound = cpy_r_r109;
    cpy_r_r110 = NULL;
    cpy_r_r111 = 2;
    cpy_r_r112 = 2;
    cpy_r_r113 = 2;
    cpy_r_r114 = 2;
    cpy_r_r115 = 2;
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPyDef_subtypes___is_subtype(cpy_r_type, cpy_r_upper_bound, cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116);
    CPy_DECREF(cpy_r_upper_bound);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 66, CPyStatic_applytype___globals);
        goto CPyL67;
    }
    if (cpy_r_r117) goto CPyL66;
    if (!cpy_r_skip_unsatisfied) goto CPyL63;
    cpy_r_r118 = Py_None;
    CPy_INCREF(cpy_r_r118);
    return cpy_r_r118;
CPyL63: ;
    if (likely(Py_TYPE(cpy_r_tvar) == CPyType_types___TypeVarType))
        cpy_r_r119 = cpy_r_tvar;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "get_target_type", 69, CPyStatic_applytype___globals, "mypy.types.TypeVarType", cpy_r_tvar);
        goto CPyL67;
    }
    cpy_r_r120 = ((mypy___types___TypeVarTypeObject *)cpy_r_r119)->_name;
    CPy_INCREF(cpy_r_r120);
    PyObject *cpy_r_r121[4] = {cpy_r_callable, cpy_r_type, cpy_r_r120, cpy_r_context};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_report_incompatible_typevar_value, cpy_r_r122, 4, 0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "get_target_type", 69, CPyStatic_applytype___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL65: ;
    CPy_DECREF(cpy_r_r120);
CPyL66: ;
    CPy_INCREF(cpy_r_type);
    return cpy_r_type;
CPyL67: ;
    cpy_r_r124 = NULL;
    return cpy_r_r124;
CPyL68: ;
    CPy_DecRef(cpy_r_values);
    goto CPyL67;
CPyL69: ;
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_p_type);
    goto CPyL58;
CPyL70: ;
    CPy_DECREF(cpy_r_values);
    CPy_DECREF(cpy_r_p_type);
    goto CPyL12;
CPyL71: ;
    CPy_DECREF(cpy_r_p_type);
    goto CPyL32;
CPyL72: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_p_type);
    goto CPyL67;
CPyL73: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL30;
CPyL74: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r37);
    goto CPyL67;
CPyL75: ;
    CPy_DECREF(cpy_r_v1);
    goto CPyL27;
CPyL76: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_v1);
    goto CPyL67;
CPyL77: ;
    CPy_DECREF(cpy_r_v1);
    goto CPyL25;
CPyL78: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL28;
CPyL79: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL31;
CPyL80: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL40;
CPyL81: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_matching);
    goto CPyL67;
CPyL82: ;
    CPy_DecRef(cpy_r_values);
    CPy_DecRef(cpy_r_matching);
    CPy_DecRef(cpy_r_value);
    goto CPyL67;
CPyL83: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL39;
CPyL84: ;
    CPy_DECREF(cpy_r_matching);
    goto CPyL53;
CPyL85: ;
    CPy_DecRef(cpy_r_matching);
    goto CPyL67;
CPyL86: ;
    CPy_DecRef(cpy_r_best);
    goto CPyL67;
CPyL87: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL52;
CPyL88: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r85);
    goto CPyL67;
CPyL89: ;
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_match);
    goto CPyL67;
CPyL90: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL50;
CPyL91: ;
    CPy_DECREF(cpy_r_match);
    goto CPyL51;
CPyL92: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL67;
CPyL93: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL57;
CPyL94: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL67;
CPyL95: ;
    CPy_DECREF(cpy_r_r123);
    goto CPyL65;
}

PyObject *CPyPy_applytype___get_target_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tvar", "type", "callable", "report_incompatible_typevar_value", "context", "skip_unsatisfied", 0};
    static CPyArg_Parser parser = {"OOOOOO:get_target_type", kwlist, 0};
    PyObject *obj_tvar;
    PyObject *obj_type;
    PyObject *obj_callable;
    PyObject *obj_report_incompatible_typevar_value;
    PyObject *obj_context;
    PyObject *obj_skip_unsatisfied;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tvar, &obj_type, &obj_callable, &obj_report_incompatible_typevar_value, &obj_context, &obj_skip_unsatisfied)) {
        return NULL;
    }
    PyObject *arg_tvar;
    if (likely(PyObject_TypeCheck(obj_tvar, CPyType_types___TypeVarLikeType)))
        arg_tvar = obj_tvar;
    else {
        CPy_TypeError("mypy.types.TypeVarLikeType", obj_tvar); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    PyObject *arg_callable;
    if (likely(Py_TYPE(obj_callable) == CPyType_types___CallableType))
        arg_callable = obj_callable;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callable); 
        goto fail;
    }
    PyObject *arg_report_incompatible_typevar_value = obj_report_incompatible_typevar_value;
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char arg_skip_unsatisfied;
    if (unlikely(!PyBool_Check(obj_skip_unsatisfied))) {
        CPy_TypeError("bool", obj_skip_unsatisfied); goto fail;
    } else
        arg_skip_unsatisfied = obj_skip_unsatisfied == Py_True;
    PyObject *retval = CPyDef_applytype___get_target_type(arg_tvar, arg_type, arg_callable, arg_report_incompatible_typevar_value, arg_context, arg_skip_unsatisfied);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/applytype.py", "get_target_type", 27, CPyStatic_applytype___globals);
    return NULL;
}

PyObject *CPyDef_applytype___apply_generic_arguments(PyObject *cpy_r_callable, PyObject *cpy_r_orig_types, PyObject *cpy_r_report_incompatible_typevar_value, PyObject *cpy_r_context, char cpy_r_skip_unsatisfied) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_tvars;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_id_to_type;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_tvar;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_target_type;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_param_spec;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_nt;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_var_arg;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_star_index;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyPtr cpy_r_r78;
    int64_t cpy_r_r79;
    CPyTagged cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_at;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    CPyPtr cpy_r_r99;
    int64_t cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_at_2;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    CPyTagged cpy_r_r121;
    CPyTagged cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_unpacked_type;
    PyObject *cpy_r_r139;
    CPyPtr cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_expanded_tuple;
    PyObject *cpy_r_r146;
    CPyPtr cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_expanded_unpack;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    CPyPtr cpy_r_r160;
    CPyPtr cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    CPyTagged cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    CPyTagged cpy_r_r177;
    CPyTagged cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject **cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    CPyPtr cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_expanded_tvt;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    CPyTagged cpy_r_r214;
    CPyPtr cpy_r_r215;
    int64_t cpy_r_r216;
    CPyTagged cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r221;
    CPyPtr cpy_r_r222;
    PyObject *cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    CPyTagged cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    CPyPtr cpy_r_r231;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    int32_t cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    CPyPtr cpy_r_r254;
    CPyPtr cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    CPyTagged cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    CPyTagged cpy_r_r271;
    CPyTagged cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    CPyPtr cpy_r_r285;
    int64_t cpy_r_r286;
    PyObject *cpy_r_r287;
    CPyTagged cpy_r_r288;
    CPyPtr cpy_r_r289;
    int64_t cpy_r_r290;
    CPyTagged cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_at_3;
    PyObject *cpy_r_r295;
    char cpy_r_r296;
    CPyTagged cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    CPyTagged cpy_r_r305;
    CPyTagged cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_type_guard;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r328;
    int32_t cpy_r_r329;
    char cpy_r_r330;
    char cpy_r_r331;
    char cpy_r_r332;
    int32_t cpy_r_r333;
    char cpy_r_r334;
    char cpy_r_r335;
    PyObject *cpy_r_remaining_tvars;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    CPyTagged cpy_r_r344;
    CPyTagged cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    if (cpy_r_skip_unsatisfied != 2) goto CPyL2;
    cpy_r_skip_unsatisfied = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_variables;
    CPy_INCREF(cpy_r_r0);
    cpy_r_tvars = cpy_r_r0;
    cpy_r_r1 = CPyObject_Size(cpy_r_tvars);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 91, CPyStatic_applytype___globals);
        goto CPyL186;
    }
    cpy_r_r2 = CPyObject_Size(cpy_r_orig_types);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 91, CPyStatic_applytype___globals);
        goto CPyL187;
    }
    cpy_r_r3 = cpy_r_r1 & 1;
    cpy_r_r4 = cpy_r_r3 == 0;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = cpy_r_r1 == cpy_r_r2;
    CPyTagged_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL6: ;
    cpy_r_r7 = CPyTagged_IsEq_(cpy_r_r1, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r6 = cpy_r_r7;
CPyL7: ;
    if (cpy_r_r6) {
        goto CPyL10;
    } else
        goto CPyL188;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 91, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r9 = PyDict_New();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 95, CPyStatic_applytype___globals);
        goto CPyL186;
    }
    cpy_r_id_to_type = cpy_r_r9;
    cpy_r_r10 = PyObject_GetIter(cpy_r_tvars);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_r11 = PyObject_GetIter(cpy_r_orig_types);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals);
        goto CPyL190;
    }
CPyL13: ;
    cpy_r_r12 = PyIter_Next(cpy_r_r10);
    if (cpy_r_r12 == NULL) goto CPyL191;
    cpy_r_r13 = PyIter_Next(cpy_r_r11);
    if (cpy_r_r13 == NULL) goto CPyL192;
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___TypeVarLikeType)))
        cpy_r_r14 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals, "mypy.types.TypeVarLikeType", cpy_r_r12);
        goto CPyL193;
    }
    cpy_r_tvar = cpy_r_r14;
    if (PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type))
        cpy_r_r15 = cpy_r_r13;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL14;
    if (cpy_r_r13 == Py_None)
        cpy_r_r15 = cpy_r_r13;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL14;
    CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals, "mypy.types.Type or None", cpy_r_r13);
    goto CPyL194;
__LL14: ;
    cpy_r_type = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_types___PartialType;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_type)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r20 = cpy_r_r19 ^ 1;
    if (cpy_r_r20) {
        goto CPyL20;
    } else
        goto CPyL195;
CPyL18: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: must never apply partial type");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 98, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_type == cpy_r_r22;
    if (cpy_r_r23) goto CPyL196;
    if (likely(cpy_r_type != Py_None))
        cpy_r_r24 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 103, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_type);
        goto CPyL194;
    }
    cpy_r_r25 = CPyDef_applytype___get_target_type(cpy_r_tvar, cpy_r_r24, cpy_r_callable, cpy_r_report_incompatible_typevar_value, cpy_r_context, cpy_r_skip_unsatisfied);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 102, CPyStatic_applytype___globals);
        goto CPyL194;
    }
    cpy_r_target_type = cpy_r_r25;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_target_type != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL197;
    if (likely(cpy_r_target_type != Py_None))
        cpy_r_r28 = cpy_r_target_type;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 106, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_target_type);
        goto CPyL194;
    }
    cpy_r_r29 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tvar)->_id;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_tvar);
    cpy_r_r30 = CPyDict_SetItem(cpy_r_id_to_type, cpy_r_r29, cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 106, CPyStatic_applytype___globals);
        goto CPyL198;
    } else
        goto CPyL13;
CPyL26: ;
    cpy_r_r32 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_r33 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 97, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_r34 = CPyDef_types___CallableType___param_spec(cpy_r_callable);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 108, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_param_spec = cpy_r_r34;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_param_spec != cpy_r_r35;
    if (!cpy_r_r36) goto CPyL199;
    if (likely(cpy_r_param_spec != Py_None))
        cpy_r_r37 = cpy_r_param_spec;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 110, CPyStatic_applytype___globals, "mypy.types.ParamSpecType", cpy_r_param_spec);
        goto CPyL200;
    }
    cpy_r_r38 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r37)->_id;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_param_spec);
    cpy_r_r39 = CPyDict_GetWithNone(cpy_r_id_to_type, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 110, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    if (PyObject_TypeCheck(cpy_r_r39, CPyType_types___Type))
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL15;
    if (cpy_r_r39 == Py_None)
        cpy_r_r40 = cpy_r_r39;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL15;
    CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 110, CPyStatic_applytype___globals, "mypy.types.Type or None", cpy_r_r39);
    goto CPyL189;
__LL15: ;
    cpy_r_nt = cpy_r_r40;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_nt != cpy_r_r41;
    if (!cpy_r_r42) goto CPyL201;
    if (likely(cpy_r_nt != Py_None))
        cpy_r_r43 = cpy_r_nt;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 112, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_nt);
        goto CPyL189;
    }
    cpy_r_r44 = CPyDef_types___get_proper_type(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 112, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 112, CPyStatic_applytype___globals, "mypy.types.ProperType", cpy_r_r44);
        goto CPyL189;
    }
    cpy_r_nt = cpy_r_r45;
    cpy_r_r46 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_nt)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL39;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL40;
CPyL39: ;
    cpy_r_r51 = (PyObject *)CPyType_types___Parameters;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_nt)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL40: ;
    if (!cpy_r_r50) goto CPyL201;
    if (Py_TYPE(cpy_r_nt) == CPyType_types___CallableType)
        cpy_r_r55 = cpy_r_nt;
    else {
        cpy_r_r55 = NULL;
    }
    if (cpy_r_r55 != NULL) goto __LL16;
    if (Py_TYPE(cpy_r_nt) == CPyType_types___Parameters)
        cpy_r_r55 = cpy_r_nt;
    else {
        cpy_r_r55 = NULL;
    }
    if (cpy_r_r55 != NULL) goto __LL16;
    CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 114, CPyStatic_applytype___globals, "union[mypy.types.CallableType, mypy.types.Parameters]", cpy_r_nt);
    goto CPyL189;
__LL16: ;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyDef_types___CallableType___expand_param_spec(cpy_r_callable, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 114, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r57;
CPyL44: ;
    cpy_r_r58 = CPyDef_types___CallableType___var_arg(cpy_r_callable);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 117, CPyStatic_applytype___globals);
        goto CPyL202;
    }
    cpy_r_var_arg = cpy_r_r58;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_var_arg != cpy_r_r59;
    if (!cpy_r_r60) goto CPyL203;
    CPy_INCREF(cpy_r_var_arg);
    if (likely(cpy_r_var_arg != Py_None))
        cpy_r_r61 = cpy_r_var_arg;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 118, CPyStatic_applytype___globals, "tuple", cpy_r_var_arg);
        goto CPyL204;
    }
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_r61, 4);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 118, CPyStatic_applytype___globals);
        goto CPyL204;
    }
    cpy_r_r63 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_r62)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    CPy_DECREF(cpy_r_r62);
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL203;
    cpy_r_r67 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_kinds;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r68 == NULL)) {
        goto CPyL205;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 119, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r70 = CPyList_Index(cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 119, CPyStatic_applytype___globals);
        goto CPyL204;
    }
    cpy_r_star_index = cpy_r_r70;
    cpy_r_r71 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyList_GetSlice(cpy_r_r71, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL206;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals, "list", cpy_r_r72);
        goto CPyL206;
    }
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = PyList_New(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL207;
    }
    cpy_r_r77 = 0;
CPyL57: ;
    cpy_r_r78 = (CPyPtr)&((PyVarObject *)cpy_r_r73)->ob_size;
    cpy_r_r79 = *(int64_t *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 << 1;
    cpy_r_r81 = (Py_ssize_t)cpy_r_r77 < (Py_ssize_t)cpy_r_r80;
    if (!cpy_r_r81) goto CPyL208;
    cpy_r_r82 = CPyList_GetItemUnsafe(cpy_r_r73, cpy_r_r77);
    if (likely(PyObject_TypeCheck(cpy_r_r82, CPyType_types___Type)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r82);
        goto CPyL209;
    }
    cpy_r_at = cpy_r_r83;
    cpy_r_r84 = CPyDef_expandtype___expand_type(cpy_r_at, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_at);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL209;
    }
    cpy_r_r85 = CPyList_SetItemUnsafe(cpy_r_r76, cpy_r_r77, cpy_r_r84);
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL209;
    }
    cpy_r_r86 = cpy_r_r77 + 2;
    cpy_r_r77 = cpy_r_r86;
    goto CPyL57;
CPyL62: ;
    cpy_r_r87 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    cpy_r_r88 = CPyList_GetItem(cpy_r_r87, cpy_r_star_index);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 123, CPyStatic_applytype___globals);
        goto CPyL210;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r88, CPyType_types___Type)))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 123, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r88);
        goto CPyL210;
    }
    cpy_r_r90 = PyList_New(1);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 123, CPyStatic_applytype___globals);
        goto CPyL211;
    }
    cpy_r_r91 = (CPyPtr)&((PyListObject *)cpy_r_r90)->ob_item;
    cpy_r_r92 = *(CPyPtr *)cpy_r_r91;
    *(PyObject * *)cpy_r_r92 = cpy_r_r89;
    cpy_r_r93 = PyNumber_Add(cpy_r_r76, cpy_r_r90);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL206;
    }
    if (likely(PyList_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals, "list", cpy_r_r93);
        goto CPyL206;
    }
    cpy_r_r95 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = CPyTagged_Add(cpy_r_star_index, 2);
    cpy_r_r97 = CPyList_GetSlice(cpy_r_r95, cpy_r_r96, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r95);
    CPyTagged_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals);
        goto CPyL212;
    }
    if (likely(PyList_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals, "list", cpy_r_r97);
        goto CPyL212;
    }
    cpy_r_r99 = (CPyPtr)&((PyVarObject *)cpy_r_r98)->ob_size;
    cpy_r_r100 = *(int64_t *)cpy_r_r99;
    cpy_r_r101 = PyList_New(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals);
        goto CPyL213;
    }
    cpy_r_r102 = 0;
CPyL71: ;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r98)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = (Py_ssize_t)cpy_r_r102 < (Py_ssize_t)cpy_r_r105;
    if (!cpy_r_r106) goto CPyL214;
    cpy_r_r107 = CPyList_GetItemUnsafe(cpy_r_r98, cpy_r_r102);
    if (likely(PyObject_TypeCheck(cpy_r_r107, CPyType_types___Type)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r107);
        goto CPyL215;
    }
    cpy_r_at_2 = cpy_r_r108;
    cpy_r_r109 = CPyDef_expandtype___expand_type(cpy_r_at_2, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_at_2);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals);
        goto CPyL215;
    }
    cpy_r_r110 = CPyList_SetItemUnsafe(cpy_r_r101, cpy_r_r102, cpy_r_r109);
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 124, CPyStatic_applytype___globals);
        goto CPyL215;
    }
    cpy_r_r111 = cpy_r_r102 + 2;
    cpy_r_r102 = cpy_r_r111;
    goto CPyL71;
CPyL76: ;
    cpy_r_r112 = PyNumber_Add(cpy_r_r94, cpy_r_r101);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals);
        goto CPyL206;
    }
    if (likely(PyList_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 122, CPyStatic_applytype___globals, "list", cpy_r_r112);
        goto CPyL206;
    }
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = NULL;
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = NULL;
    cpy_r_r127 = NULL;
    cpy_r_r128 = NULL;
    cpy_r_r129 = NULL;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_callable);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 120, CPyStatic_applytype___globals);
        goto CPyL216;
    }
    cpy_r_callable = cpy_r_r132;
    CPy_INCREF(cpy_r_var_arg);
    if (likely(cpy_r_var_arg != Py_None))
        cpy_r_r133 = cpy_r_var_arg;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 128, CPyStatic_applytype___globals, "tuple", cpy_r_var_arg);
        goto CPyL206;
    }
    cpy_r_r134 = CPySequenceTuple_GetItem(cpy_r_r133, 4);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 128, CPyStatic_applytype___globals);
        goto CPyL206;
    }
    if (likely(Py_TYPE(cpy_r_r134) == CPyType_types___UnpackType))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 128, CPyStatic_applytype___globals, "mypy.types.UnpackType", cpy_r_r134);
        goto CPyL206;
    }
    cpy_r_r136 = ((mypy___types___UnpackTypeObject *)cpy_r_r135)->_type;
    CPy_INCREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = CPyDef_types___get_proper_type(cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 128, CPyStatic_applytype___globals);
        goto CPyL206;
    }
    if (likely(cpy_r_r137 != Py_None))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 128, CPyStatic_applytype___globals, "mypy.types.ProperType", cpy_r_r137);
        goto CPyL206;
    }
    cpy_r_unpacked_type = cpy_r_r138;
    cpy_r_r139 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r140 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r141 = *(PyObject * *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 == cpy_r_r139;
    if (cpy_r_r142) {
        goto CPyL217;
    } else
        goto CPyL114;
CPyL85: ;
    if (likely(Py_TYPE(cpy_r_unpacked_type) == CPyType_types___TupleType))
        cpy_r_r143 = cpy_r_unpacked_type;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 132, CPyStatic_applytype___globals, "mypy.types.TupleType", cpy_r_unpacked_type);
        goto CPyL218;
    }
    cpy_r_r144 = CPyDef_expandtype___expand_type(cpy_r_r143, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 132, CPyStatic_applytype___globals);
        goto CPyL218;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r144, CPyType_types___ProperType)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 132, CPyStatic_applytype___globals, "mypy.types.ProperType", cpy_r_r144);
        goto CPyL218;
    }
    cpy_r_expanded_tuple = cpy_r_r145;
    cpy_r_r146 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r147 = (CPyPtr)&((PyObject *)cpy_r_expanded_tuple)->ob_type;
    cpy_r_r148 = *(PyObject * *)cpy_r_r147;
    cpy_r_r149 = cpy_r_r148 == cpy_r_r146;
    if (!cpy_r_r149) goto CPyL219;
    if (likely(Py_TYPE(cpy_r_expanded_tuple) == CPyType_types___TupleType))
        cpy_r_r150 = cpy_r_expanded_tuple;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 136, CPyStatic_applytype___globals, "mypy.types.TupleType", cpy_r_expanded_tuple);
        goto CPyL220;
    }
    cpy_r_r151 = ((mypy___types___TupleTypeObject *)cpy_r_r150)->_items;
    CPy_INCREF(cpy_r_r151);
    cpy_r_r152 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 136, CPyStatic_applytype___globals);
        goto CPyL220;
    }
    cpy_r_expanded_unpack = cpy_r_r152;
    cpy_r_r153 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r154 = cpy_r_expanded_unpack != cpy_r_r153;
    CPy_DECREF(cpy_r_expanded_unpack);
    if (!cpy_r_r154) goto CPyL221;
    cpy_r_r155 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r155);
    cpy_r_r156 = CPyList_GetSlice(cpy_r_r155, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals);
        goto CPyL220;
    }
    if (likely(PyList_Check(cpy_r_r156)))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals, "list", cpy_r_r156);
        goto CPyL220;
    }
    if (likely(Py_TYPE(cpy_r_expanded_tuple) == CPyType_types___TupleType))
        cpy_r_r158 = cpy_r_expanded_tuple;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 141, CPyStatic_applytype___globals, "mypy.types.TupleType", cpy_r_expanded_tuple);
        goto CPyL222;
    }
    cpy_r_r159 = PyList_New(1);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 141, CPyStatic_applytype___globals);
        goto CPyL223;
    }
    cpy_r_r160 = (CPyPtr)&((PyListObject *)cpy_r_r159)->ob_item;
    cpy_r_r161 = *(CPyPtr *)cpy_r_r160;
    *(PyObject * *)cpy_r_r161 = cpy_r_r158;
    cpy_r_r162 = PyNumber_Add(cpy_r_r157, cpy_r_r159);
    CPy_DECREF(cpy_r_r157);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals);
        goto CPyL218;
    }
    if (likely(PyList_Check(cpy_r_r162)))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals, "list", cpy_r_r162);
        goto CPyL218;
    }
    cpy_r_r164 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r164);
    cpy_r_r165 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r166 = CPyList_GetSlice(cpy_r_r164, cpy_r_r165, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r164);
    CPyTagged_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 142, CPyStatic_applytype___globals);
        goto CPyL224;
    }
    if (likely(PyList_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 142, CPyStatic_applytype___globals, "list", cpy_r_r166);
        goto CPyL224;
    }
    cpy_r_r168 = PyNumber_Add(cpy_r_r163, cpy_r_r167);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals);
        goto CPyL202;
    }
    if (likely(PyList_Check(cpy_r_r168)))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 140, CPyStatic_applytype___globals, "list", cpy_r_r168);
        goto CPyL202;
    }
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = NULL;
    cpy_r_r173 = NULL;
    cpy_r_r174 = NULL;
    cpy_r_r175 = NULL;
    cpy_r_r176 = NULL;
    cpy_r_r177 = CPY_INT_TAG;
    cpy_r_r178 = CPY_INT_TAG;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = NULL;
    cpy_r_r182 = NULL;
    cpy_r_r183 = NULL;
    cpy_r_r184 = NULL;
    cpy_r_r185 = NULL;
    cpy_r_r186 = NULL;
    cpy_r_r187 = NULL;
    cpy_r_r188 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183, cpy_r_r184, cpy_r_r185, cpy_r_r186, cpy_r_r187);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_callable);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 138, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r188;
    goto CPyL169;
CPyL104: ;
    if (likely(Py_TYPE(cpy_r_expanded_tuple) == CPyType_types___TupleType))
        cpy_r_r189 = cpy_r_expanded_tuple;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 146, CPyStatic_applytype___globals, "mypy.types.TupleType", cpy_r_expanded_tuple);
        goto CPyL225;
    }
    cpy_r_r190 = ((mypy___types___TupleTypeObject *)cpy_r_r189)->_items;
    CPy_INCREF(cpy_r_r190);
    CPy_DECREF(cpy_r_expanded_tuple);
    cpy_r_r191 = CPyDef_typevartuples___replace_starargs(cpy_r_callable, cpy_r_r190);
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 146, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r191;
    goto CPyL169;
CPyL107: ;
    if (0) {
        goto CPyL226;
    } else
        goto CPyL227;
CPyL108: ;
    cpy_r_r192 = CPyStatics[22]; /* 'mypy bug: unimplemented case, ' */
    cpy_r_r193 = PyObject_Str(cpy_r_expanded_tuple);
    CPy_DECREF(cpy_r_expanded_tuple);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 149, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    cpy_r_r194 = CPyStr_Build(2, cpy_r_r192, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 149, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    cpy_r_r195 = CPyModule_builtins;
    cpy_r_r196 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r197 = CPyObject_GetAttr(cpy_r_r195, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 149, CPyStatic_applytype___globals);
        goto CPyL228;
    }
    PyObject *cpy_r_r198[1] = {cpy_r_r194};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = _PyObject_Vectorcall(cpy_r_r197, cpy_r_r199, 1, 0);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 149, CPyStatic_applytype___globals);
        goto CPyL228;
    }
    CPy_DECREF(cpy_r_r194);
    CPy_Raise(cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 149, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL114: ;
    cpy_r_r201 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r202 = (CPyPtr)&((PyObject *)cpy_r_unpacked_type)->ob_type;
    cpy_r_r203 = *(PyObject * *)cpy_r_r202;
    CPy_DECREF(cpy_r_unpacked_type);
    cpy_r_r204 = cpy_r_r203 == cpy_r_r201;
    if (!cpy_r_r204) goto CPyL229;
    if (likely(cpy_r_var_arg != Py_None))
        cpy_r_r205 = cpy_r_var_arg;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 151, CPyStatic_applytype___globals, "tuple", cpy_r_var_arg);
        goto CPyL218;
    }
    cpy_r_r206 = CPySequenceTuple_GetItem(cpy_r_r205, 4);
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 151, CPyStatic_applytype___globals);
        goto CPyL218;
    }
    if (likely(Py_TYPE(cpy_r_r206) == CPyType_types___UnpackType))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 151, CPyStatic_applytype___globals, "mypy.types.UnpackType", cpy_r_r206);
        goto CPyL218;
    }
    cpy_r_r208 = CPyDef_expandtype___expand_unpack_with_variables(cpy_r_r207, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 151, CPyStatic_applytype___globals);
        goto CPyL218;
    }
    cpy_r_expanded_tvt = cpy_r_r208;
    cpy_r_r209 = (PyObject *)&PyList_Type;
    cpy_r_r210 = PyObject_IsInstance(cpy_r_expanded_tvt, cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 152, CPyStatic_applytype___globals);
        goto CPyL230;
    }
    cpy_r_r212 = cpy_r_r210;
    if (cpy_r_r212) {
        goto CPyL231;
    } else
        goto CPyL132;
CPyL121: ;
    CPy_INCREF(cpy_r_expanded_tvt);
    if (likely(PyList_Check(cpy_r_expanded_tvt)))
        cpy_r_r213 = cpy_r_expanded_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 153, CPyStatic_applytype___globals, "list", cpy_r_expanded_tvt);
        goto CPyL232;
    }
    cpy_r_r214 = 0;
CPyL123: ;
    cpy_r_r215 = (CPyPtr)&((PyVarObject *)cpy_r_r213)->ob_size;
    cpy_r_r216 = *(int64_t *)cpy_r_r215;
    cpy_r_r217 = cpy_r_r216 << 1;
    cpy_r_r218 = (Py_ssize_t)cpy_r_r214 < (Py_ssize_t)cpy_r_r217;
    if (!cpy_r_r218) goto CPyL233;
    cpy_r_r219 = CPyList_GetItemUnsafe(cpy_r_r213, cpy_r_r214);
    if (likely(PyObject_TypeCheck(cpy_r_r219, CPyType_types___Type)))
        cpy_r_r220 = cpy_r_r219;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 153, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r219);
        goto CPyL234;
    }
    cpy_r_t = cpy_r_r220;
    cpy_r_r221 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r222 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r223 = *(PyObject * *)cpy_r_r222;
    CPy_DECREF(cpy_r_t);
    cpy_r_r224 = cpy_r_r223 == cpy_r_r221;
    cpy_r_r225 = cpy_r_r224 ^ 1;
    if (cpy_r_r225) {
        goto CPyL128;
    } else
        goto CPyL235;
CPyL126: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r226 = 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 154, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r227 = cpy_r_r214 + 2;
    cpy_r_r214 = cpy_r_r227;
    goto CPyL123;
CPyL129: ;
    if (likely(PyList_Check(cpy_r_expanded_tvt)))
        cpy_r_r228 = cpy_r_expanded_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 155, CPyStatic_applytype___globals, "list", cpy_r_expanded_tvt);
        goto CPyL202;
    }
    cpy_r_r229 = CPyDef_typevartuples___replace_starargs(cpy_r_callable, cpy_r_r228);
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 155, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r229;
    goto CPyL169;
CPyL132: ;
    cpy_r_r230 = (PyObject *)CPyType_types___Instance;
    cpy_r_r231 = (CPyPtr)&((PyObject *)cpy_r_expanded_tvt)->ob_type;
    cpy_r_r232 = *(PyObject * *)cpy_r_r231;
    cpy_r_r233 = cpy_r_r232 == cpy_r_r230;
    if (cpy_r_r233) {
        goto CPyL135;
    } else
        goto CPyL236;
CPyL133: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r234 = 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 157, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL135: ;
    if (likely(Py_TYPE(cpy_r_expanded_tvt) == CPyType_types___Instance))
        cpy_r_r235 = cpy_r_expanded_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 158, CPyStatic_applytype___globals, "mypy.types.Instance", cpy_r_expanded_tvt);
        goto CPyL230;
    }
    cpy_r_r236 = ((mypy___types___InstanceObject *)cpy_r_r235)->_type;
    cpy_r_r237 = CPY_GET_ATTR(cpy_r_r236, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 158, CPyStatic_applytype___globals);
        goto CPyL230;
    }
CPyL137: ;
    cpy_r_r238 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r239 = PyUnicode_Compare(cpy_r_r237, cpy_r_r238);
    CPy_DECREF(cpy_r_r237);
    cpy_r_r240 = cpy_r_r239 == -1;
    if (!cpy_r_r240) goto CPyL140;
    cpy_r_r241 = PyErr_Occurred();
    cpy_r_r242 = cpy_r_r241 != NULL;
    if (!cpy_r_r242) goto CPyL140;
    cpy_r_r243 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 158, CPyStatic_applytype___globals);
        goto CPyL230;
    }
CPyL140: ;
    cpy_r_r244 = cpy_r_r239 == 0;
    if (cpy_r_r244) {
        goto CPyL143;
    } else
        goto CPyL237;
CPyL141: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r245 = 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 158, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL143: ;
    cpy_r_r246 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r246);
    cpy_r_r247 = CPyList_GetSlice(cpy_r_r246, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals);
        goto CPyL230;
    }
    if (likely(PyList_Check(cpy_r_r247)))
        cpy_r_r248 = cpy_r_r247;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals, "list", cpy_r_r247);
        goto CPyL230;
    }
    if (likely(Py_TYPE(cpy_r_expanded_tvt) == CPyType_types___Instance))
        cpy_r_r249 = cpy_r_expanded_tvt;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 162, CPyStatic_applytype___globals, "mypy.types.Instance", cpy_r_expanded_tvt);
        goto CPyL238;
    }
    cpy_r_r250 = ((mypy___types___InstanceObject *)cpy_r_r249)->_args;
    CPy_INCREF(cpy_r_r250);
    CPy_DECREF(cpy_r_expanded_tvt);
    cpy_r_r251 = CPySequenceTuple_GetItem(cpy_r_r250, 0);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 162, CPyStatic_applytype___globals);
        goto CPyL239;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r251, CPyType_types___Type)))
        cpy_r_r252 = cpy_r_r251;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 162, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r251);
        goto CPyL239;
    }
    cpy_r_r253 = PyList_New(1);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 162, CPyStatic_applytype___globals);
        goto CPyL240;
    }
    cpy_r_r254 = (CPyPtr)&((PyListObject *)cpy_r_r253)->ob_item;
    cpy_r_r255 = *(CPyPtr *)cpy_r_r254;
    *(PyObject * *)cpy_r_r255 = cpy_r_r252;
    cpy_r_r256 = PyNumber_Add(cpy_r_r248, cpy_r_r253);
    CPy_DECREF(cpy_r_r248);
    CPy_DECREF(cpy_r_r253);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals);
        goto CPyL218;
    }
    if (likely(PyList_Check(cpy_r_r256)))
        cpy_r_r257 = cpy_r_r256;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals, "list", cpy_r_r256);
        goto CPyL218;
    }
    cpy_r_r258 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r258);
    cpy_r_r259 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r260 = CPyList_GetSlice(cpy_r_r258, cpy_r_r259, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r258);
    CPyTagged_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 163, CPyStatic_applytype___globals);
        goto CPyL241;
    }
    if (likely(PyList_Check(cpy_r_r260)))
        cpy_r_r261 = cpy_r_r260;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 163, CPyStatic_applytype___globals, "list", cpy_r_r260);
        goto CPyL241;
    }
    cpy_r_r262 = PyNumber_Add(cpy_r_r257, cpy_r_r261);
    CPy_DECREF(cpy_r_r257);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals);
        goto CPyL202;
    }
    if (likely(PyList_Check(cpy_r_r262)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 161, CPyStatic_applytype___globals, "list", cpy_r_r262);
        goto CPyL202;
    }
    cpy_r_r264 = NULL;
    cpy_r_r265 = NULL;
    cpy_r_r266 = NULL;
    cpy_r_r267 = NULL;
    cpy_r_r268 = NULL;
    cpy_r_r269 = NULL;
    cpy_r_r270 = NULL;
    cpy_r_r271 = CPY_INT_TAG;
    cpy_r_r272 = CPY_INT_TAG;
    cpy_r_r273 = NULL;
    cpy_r_r274 = NULL;
    cpy_r_r275 = NULL;
    cpy_r_r276 = NULL;
    cpy_r_r277 = NULL;
    cpy_r_r278 = NULL;
    cpy_r_r279 = NULL;
    cpy_r_r280 = NULL;
    cpy_r_r281 = NULL;
    cpy_r_r282 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_r263, cpy_r_r264, cpy_r_r265, cpy_r_r266, cpy_r_r267, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272, cpy_r_r273, cpy_r_r274, cpy_r_r275, cpy_r_r276, cpy_r_r277, cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281);
    CPy_DECREF(cpy_r_r263);
    CPy_DECREF(cpy_r_callable);
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 159, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r282;
    goto CPyL169;
CPyL157: ;
    if (0) {
        goto CPyL169;
    } else
        goto CPyL242;
CPyL158: ;
    PyErr_SetString(PyExc_AssertionError, "mypy bug: unhandled case applying unpack");
    cpy_r_r283 = 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 167, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    CPy_Unreachable();
CPyL160: ;
    cpy_r_r284 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r284);
    cpy_r_r285 = (CPyPtr)&((PyVarObject *)cpy_r_r284)->ob_size;
    cpy_r_r286 = *(int64_t *)cpy_r_r285;
    cpy_r_r287 = PyList_New(cpy_r_r286);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 170, CPyStatic_applytype___globals);
        goto CPyL243;
    }
    cpy_r_r288 = 0;
CPyL162: ;
    cpy_r_r289 = (CPyPtr)&((PyVarObject *)cpy_r_r284)->ob_size;
    cpy_r_r290 = *(int64_t *)cpy_r_r289;
    cpy_r_r291 = cpy_r_r290 << 1;
    cpy_r_r292 = (Py_ssize_t)cpy_r_r288 < (Py_ssize_t)cpy_r_r291;
    if (!cpy_r_r292) goto CPyL244;
    cpy_r_r293 = CPyList_GetItemUnsafe(cpy_r_r284, cpy_r_r288);
    if (likely(PyObject_TypeCheck(cpy_r_r293, CPyType_types___Type)))
        cpy_r_r294 = cpy_r_r293;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 170, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r293);
        goto CPyL245;
    }
    cpy_r_at_3 = cpy_r_r294;
    cpy_r_r295 = CPyDef_expandtype___expand_type(cpy_r_at_3, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_at_3);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 170, CPyStatic_applytype___globals);
        goto CPyL245;
    }
    cpy_r_r296 = CPyList_SetItemUnsafe(cpy_r_r287, cpy_r_r288, cpy_r_r295);
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 170, CPyStatic_applytype___globals);
        goto CPyL245;
    }
    cpy_r_r297 = cpy_r_r288 + 2;
    cpy_r_r288 = cpy_r_r297;
    goto CPyL162;
CPyL167: ;
    cpy_r_r298 = NULL;
    cpy_r_r299 = NULL;
    cpy_r_r300 = NULL;
    cpy_r_r301 = NULL;
    cpy_r_r302 = NULL;
    cpy_r_r303 = NULL;
    cpy_r_r304 = NULL;
    cpy_r_r305 = CPY_INT_TAG;
    cpy_r_r306 = CPY_INT_TAG;
    cpy_r_r307 = NULL;
    cpy_r_r308 = NULL;
    cpy_r_r309 = NULL;
    cpy_r_r310 = NULL;
    cpy_r_r311 = NULL;
    cpy_r_r312 = NULL;
    cpy_r_r313 = NULL;
    cpy_r_r314 = NULL;
    cpy_r_r315 = NULL;
    cpy_r_r316 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_r287, cpy_r_r298, cpy_r_r299, cpy_r_r300, cpy_r_r301, cpy_r_r302, cpy_r_r303, cpy_r_r304, cpy_r_r305, cpy_r_r306, cpy_r_r307, cpy_r_r308, cpy_r_r309, cpy_r_r310, cpy_r_r311, cpy_r_r312, cpy_r_r313, cpy_r_r314, cpy_r_r315);
    CPy_DECREF(cpy_r_r287);
    CPy_DECREF(cpy_r_callable);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 169, CPyStatic_applytype___globals);
        goto CPyL189;
    }
    cpy_r_callable = cpy_r_r316;
CPyL169: ;
    cpy_r_r317 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_type_guard;
    cpy_r_r318 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r319 = cpy_r_r317 != cpy_r_r318;
    if (!cpy_r_r319) goto CPyL173;
    cpy_r_r320 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_type_guard;
    CPy_INCREF(cpy_r_r320);
    if (likely(cpy_r_r320 != Py_None))
        cpy_r_r321 = cpy_r_r320;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 175, CPyStatic_applytype___globals, "mypy.types.Type", cpy_r_r320);
        goto CPyL202;
    }
    cpy_r_r322 = CPyDef_expandtype___expand_type(cpy_r_r321, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 175, CPyStatic_applytype___globals);
        goto CPyL202;
    }
    cpy_r_type_guard = cpy_r_r322;
    goto CPyL174;
CPyL173: ;
    cpy_r_r323 = Py_None;
    CPy_INCREF(cpy_r_r323);
    cpy_r_type_guard = cpy_r_r323;
CPyL174: ;
    cpy_r_r324 = PyList_New(0);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals);
        goto CPyL246;
    }
    cpy_r_r325 = PyObject_GetIter(cpy_r_tvars);
    CPy_DECREF(cpy_r_tvars);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals);
        goto CPyL247;
    }
CPyL176: ;
    cpy_r_r326 = PyIter_Next(cpy_r_r325);
    if (cpy_r_r326 == NULL) goto CPyL248;
    if (likely(PyObject_TypeCheck(cpy_r_r326, CPyType_types___TypeVarLikeType)))
        cpy_r_r327 = cpy_r_r326;
    else {
        CPy_TypeErrorTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals, "mypy.types.TypeVarLikeType", cpy_r_r326);
        goto CPyL249;
    }
    cpy_r_tv = cpy_r_r327;
    cpy_r_r328 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tv)->_id;
    CPy_INCREF(cpy_r_r328);
    cpy_r_r329 = PyDict_Contains(cpy_r_id_to_type, cpy_r_r328);
    CPy_DECREF(cpy_r_r328);
    cpy_r_r330 = cpy_r_r329 >= 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals);
        goto CPyL250;
    }
    cpy_r_r331 = cpy_r_r329;
    cpy_r_r332 = cpy_r_r331 ^ 1;
    if (!cpy_r_r332) goto CPyL251;
    cpy_r_r333 = PyList_Append(cpy_r_r324, cpy_r_tv);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r334 = cpy_r_r333 >= 0;
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals);
        goto CPyL249;
    } else
        goto CPyL176;
CPyL181: ;
    cpy_r_r335 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r335)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 180, CPyStatic_applytype___globals);
        goto CPyL247;
    }
    cpy_r_remaining_tvars = cpy_r_r324;
    cpy_r_r336 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_ret_type;
    CPy_INCREF(cpy_r_r336);
    cpy_r_r337 = CPyDef_expandtype___expand_type(cpy_r_r336, cpy_r_id_to_type);
    CPy_DECREF(cpy_r_r336);
    CPy_DECREF(cpy_r_id_to_type);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 183, CPyStatic_applytype___globals);
        goto CPyL252;
    }
    cpy_r_r338 = NULL;
    cpy_r_r339 = NULL;
    cpy_r_r340 = NULL;
    cpy_r_r341 = NULL;
    cpy_r_r342 = NULL;
    cpy_r_r343 = NULL;
    cpy_r_r344 = CPY_INT_TAG;
    cpy_r_r345 = CPY_INT_TAG;
    cpy_r_r346 = NULL;
    cpy_r_r347 = NULL;
    cpy_r_r348 = NULL;
    cpy_r_r349 = NULL;
    cpy_r_r350 = NULL;
    cpy_r_r351 = NULL;
    cpy_r_r352 = NULL;
    cpy_r_r353 = NULL;
    cpy_r_r354 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r337, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_remaining_tvars, cpy_r_r344, cpy_r_r345, cpy_r_r346, cpy_r_r347, cpy_r_r348, cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_type_guard, cpy_r_r352, cpy_r_r353);
    CPy_DECREF(cpy_r_r337);
    CPy_DECREF(cpy_r_remaining_tvars);
    CPy_DECREF(cpy_r_type_guard);
    CPy_DECREF(cpy_r_callable);
    if (unlikely(cpy_r_r354 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 182, CPyStatic_applytype___globals);
        goto CPyL185;
    }
    return cpy_r_r354;
CPyL185: ;
    cpy_r_r355 = NULL;
    return cpy_r_r355;
CPyL186: ;
    CPy_DecRef(cpy_r_tvars);
    goto CPyL185;
CPyL187: ;
    CPy_DecRef(cpy_r_tvars);
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL185;
CPyL188: ;
    CPy_DECREF(cpy_r_tvars);
    goto CPyL8;
CPyL189: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    goto CPyL185;
CPyL190: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r10);
    goto CPyL185;
CPyL191: ;
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    goto CPyL26;
CPyL192: ;
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    goto CPyL26;
CPyL193: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL185;
CPyL194: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_tvar);
    goto CPyL185;
CPyL195: ;
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_tvar);
    CPy_DECREF(cpy_r_type);
    goto CPyL18;
CPyL196: ;
    CPy_DECREF(cpy_r_tvar);
    CPy_DECREF(cpy_r_type);
    goto CPyL13;
CPyL197: ;
    CPy_DECREF(cpy_r_tvar);
    CPy_DECREF(cpy_r_target_type);
    goto CPyL13;
CPyL198: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL185;
CPyL199: ;
    CPy_DECREF(cpy_r_param_spec);
    CPy_INCREF(cpy_r_callable);
    goto CPyL44;
CPyL200: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_param_spec);
    goto CPyL185;
CPyL201: ;
    CPy_DECREF(cpy_r_nt);
    CPy_INCREF(cpy_r_callable);
    goto CPyL44;
CPyL202: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    goto CPyL185;
CPyL203: ;
    CPy_DECREF(cpy_r_var_arg);
    goto CPyL160;
CPyL204: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    goto CPyL185;
CPyL205: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPy_DecRef(cpy_r_r67);
    goto CPyL50;
CPyL206: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    goto CPyL185;
CPyL207: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r73);
    goto CPyL185;
CPyL208: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL62;
CPyL209: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    goto CPyL185;
CPyL210: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r76);
    goto CPyL185;
CPyL211: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r89);
    goto CPyL185;
CPyL212: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r94);
    goto CPyL185;
CPyL213: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    goto CPyL185;
CPyL214: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL76;
CPyL215: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r101);
    goto CPyL185;
CPyL216: ;
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_var_arg);
    CPyTagged_DecRef(cpy_r_star_index);
    goto CPyL185;
CPyL217: ;
    CPy_DECREF(cpy_r_var_arg);
    goto CPyL85;
CPyL218: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    goto CPyL185;
CPyL219: ;
    CPyTagged_DECREF(cpy_r_star_index);
    goto CPyL107;
CPyL220: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_tuple);
    goto CPyL185;
CPyL221: ;
    CPyTagged_DECREF(cpy_r_star_index);
    goto CPyL104;
CPyL222: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r157);
    goto CPyL185;
CPyL223: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r158);
    goto CPyL185;
CPyL224: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r163);
    goto CPyL185;
CPyL225: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_expanded_tuple);
    goto CPyL185;
CPyL226: ;
    CPy_DECREF(cpy_r_expanded_tuple);
    goto CPyL169;
CPyL227: ;
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    goto CPyL108;
CPyL228: ;
    CPy_DecRef(cpy_r_r194);
    goto CPyL185;
CPyL229: ;
    CPy_DECREF(cpy_r_var_arg);
    CPyTagged_DECREF(cpy_r_star_index);
    goto CPyL157;
CPyL230: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_tvt);
    goto CPyL185;
CPyL231: ;
    CPyTagged_DECREF(cpy_r_star_index);
    goto CPyL121;
CPyL232: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_expanded_tvt);
    goto CPyL185;
CPyL233: ;
    CPy_DECREF(cpy_r_r213);
    goto CPyL129;
CPyL234: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_expanded_tvt);
    CPy_DecRef(cpy_r_r213);
    goto CPyL185;
CPyL235: ;
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    CPy_DECREF(cpy_r_expanded_tvt);
    CPy_DECREF(cpy_r_r213);
    goto CPyL126;
CPyL236: ;
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_tvt);
    goto CPyL133;
CPyL237: ;
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    CPyTagged_DECREF(cpy_r_star_index);
    CPy_DECREF(cpy_r_expanded_tvt);
    goto CPyL141;
CPyL238: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_expanded_tvt);
    CPy_DecRef(cpy_r_r248);
    goto CPyL185;
CPyL239: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r248);
    goto CPyL185;
CPyL240: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r248);
    CPy_DecRef(cpy_r_r252);
    goto CPyL185;
CPyL241: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r257);
    goto CPyL185;
CPyL242: ;
    CPy_DECREF(cpy_r_callable);
    CPy_DECREF(cpy_r_tvars);
    CPy_DECREF(cpy_r_id_to_type);
    goto CPyL158;
CPyL243: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r284);
    goto CPyL185;
CPyL244: ;
    CPy_DECREF(cpy_r_r284);
    goto CPyL167;
CPyL245: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_r284);
    CPy_DecRef(cpy_r_r287);
    goto CPyL185;
CPyL246: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_tvars);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_type_guard);
    goto CPyL185;
CPyL247: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_type_guard);
    CPy_DecRef(cpy_r_r324);
    goto CPyL185;
CPyL248: ;
    CPy_DECREF(cpy_r_r325);
    goto CPyL181;
CPyL249: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_type_guard);
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r325);
    goto CPyL185;
CPyL250: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_id_to_type);
    CPy_DecRef(cpy_r_type_guard);
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r325);
    CPy_DecRef(cpy_r_tv);
    goto CPyL185;
CPyL251: ;
    CPy_DECREF(cpy_r_tv);
    goto CPyL176;
CPyL252: ;
    CPy_DecRef(cpy_r_callable);
    CPy_DecRef(cpy_r_type_guard);
    CPy_DecRef(cpy_r_remaining_tvars);
    goto CPyL185;
}

PyObject *CPyPy_applytype___apply_generic_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"callable", "orig_types", "report_incompatible_typevar_value", "context", "skip_unsatisfied", 0};
    static CPyArg_Parser parser = {"OOOO|O:apply_generic_arguments", kwlist, 0};
    PyObject *obj_callable;
    PyObject *obj_orig_types;
    PyObject *obj_report_incompatible_typevar_value;
    PyObject *obj_context;
    PyObject *obj_skip_unsatisfied = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_callable, &obj_orig_types, &obj_report_incompatible_typevar_value, &obj_context, &obj_skip_unsatisfied)) {
        return NULL;
    }
    PyObject *arg_callable;
    if (likely(Py_TYPE(obj_callable) == CPyType_types___CallableType))
        arg_callable = obj_callable;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callable); 
        goto fail;
    }
    PyObject *arg_orig_types = obj_orig_types;
    PyObject *arg_report_incompatible_typevar_value = obj_report_incompatible_typevar_value;
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char arg_skip_unsatisfied;
    if (obj_skip_unsatisfied == NULL) {
        arg_skip_unsatisfied = 2;
    } else if (unlikely(!PyBool_Check(obj_skip_unsatisfied))) {
        CPy_TypeError("bool", obj_skip_unsatisfied); goto fail;
    } else
        arg_skip_unsatisfied = obj_skip_unsatisfied == Py_True;
    PyObject *retval = CPyDef_applytype___apply_generic_arguments(arg_callable, arg_orig_types, arg_report_incompatible_typevar_value, arg_context, arg_skip_unsatisfied);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/applytype.py", "apply_generic_arguments", 73, CPyStatic_applytype___globals);
    return NULL;
}

char CPyDef_applytype_____top_level__(void) {
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
    PyObject **cpy_r_r13;
    void *cpy_r_r15;
    void *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", -1, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_applytype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 1, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9070]; /* ('Callable', 'Sequence') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_applytype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 3, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___subtypes;
    PyObject **cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[1] = {5};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9072]; /* (('mypy.subtypes', 'mypy', 'mypy'),) */
    cpy_r_r19 = CPyStatic_applytype___globals;
    cpy_r_r20 = CPyStatics[28]; /* 'mypy/applytype.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL11;
    cpy_r_r23 = CPyStatics[9073]; /* ('expand_type', 'expand_unpack_with_variables') */
    cpy_r_r24 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r25 = CPyStatic_applytype___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 6, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_mypy___expandtype = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9074]; /* ('ARG_STAR', 'Context') */
    cpy_r_r28 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r29 = CPyStatic_applytype___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 7, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_mypy___nodes = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9075]; /* ('AnyType', 'CallableType', 'Instance', 'Parameters',
                                     'ParamSpecType', 'PartialType', 'TupleType', 'Type',
                                     'TypeVarId', 'TypeVarLikeType', 'TypeVarTupleType',
                                     'TypeVarType', 'UnpackType', 'get_proper_type') */
    cpy_r_r32 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r33 = CPyStatic_applytype___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 8, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_mypy___types = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9076]; /* ('find_unpack_in_list', 'replace_starargs') */
    cpy_r_r36 = CPyStatics[52]; /* 'mypy.typevartuples' */
    cpy_r_r37 = CPyStatic_applytype___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/applytype.py", "<module>", 24, CPyStatic_applytype___globals);
        goto CPyL11;
    }
    CPyModule_mypy___typevartuples = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___typevartuples);
    CPy_DECREF(cpy_r_r38);
    return 1;
CPyL11: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
}
