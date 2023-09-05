#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef typevarsmodule_methods[] = {
    {"fill_typevars", (PyCFunction)CPyPy_typevars___fill_typevars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fill_typevars_with_any", (PyCFunction)CPyPy_typevars___fill_typevars_with_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"has_no_typevars", (PyCFunction)CPyPy_typevars___has_no_typevars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typevarsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.typevars",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typevarsmodule_methods
};

PyObject *CPyInit_mypy___typevars(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___typevars_internal) {
        Py_INCREF(CPyModule_mypy___typevars_internal);
        return CPyModule_mypy___typevars_internal;
    }
    CPyModule_mypy___typevars_internal = PyModule_Create(&typevarsmodule);
    if (unlikely(CPyModule_mypy___typevars_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___typevars_internal, "__name__");
    CPyStatic_typevars___globals = PyModule_GetDict(CPyModule_mypy___typevars_internal);
    if (unlikely(CPyStatic_typevars___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_typevars_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___typevars_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___typevars_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_typevars___fill_typevars(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_tvs;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_i;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_tv;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
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
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_inst;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 24, CPyStatic_typevars___globals);
        goto CPyL44;
    }
    cpy_r_tvs = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_defn;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars", "TypeInfo", "defn", 26, CPyStatic_typevars___globals);
        goto CPyL45;
    }
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_r1)->_type_vars;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = 0;
    cpy_r_i = cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r7) goto CPyL46;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_defn;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars", "TypeInfo", "defn", 27, CPyStatic_typevars___globals);
        goto CPyL47;
    }
CPyL5: ;
    cpy_r_r9 = ((mypy___nodes___ClassDefObject *)cpy_r_r8)->_type_vars;
    cpy_r_r10 = CPyList_GetItem(cpy_r_r9, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 27, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_types___TypeVarLikeType)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 27, CPyStatic_typevars___globals, "mypy.types.TypeVarLikeType", cpy_r_r10);
        goto CPyL45;
    }
    cpy_r_tv = cpy_r_r11;
    cpy_r_r12 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType))
        cpy_r_r16 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 30, CPyStatic_typevars___globals, "mypy.types.TypeVarType", cpy_r_tv);
        goto CPyL45;
    }
    cpy_r_r17 = PyDict_New();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 30, CPyStatic_typevars___globals);
        goto CPyL48;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_types___TypeVarType___copy_modified(cpy_r_r16, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, -2, -2, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 30, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    cpy_r_tv = cpy_r_r22;
    goto CPyL33;
CPyL12: ;
    cpy_r_r23 = (PyObject *)CPyType_types___TypeVarTupleType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r27 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 34, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL49;
    }
    cpy_r_r28 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r27)->_name;
    CPy_INCREF(cpy_r_r28);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r29 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 35, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL50;
    }
    cpy_r_r30 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r29)->_fullname;
    CPy_INCREF(cpy_r_r30);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r31 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 36, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL51;
    }
    cpy_r_r32 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r31)->_id;
    CPy_INCREF(cpy_r_r32);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r33 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 37, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL52;
    }
    cpy_r_r34 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r33)->_upper_bound;
    CPy_INCREF(cpy_r_r34);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r35 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 38, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL53;
    }
    cpy_r_r36 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r35)->_tuple_fallback;
    CPy_INCREF(cpy_r_r36);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarTupleType))
        cpy_r_r37 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 39, CPyStatic_typevars___globals, "mypy.types.TypeVarTupleType", cpy_r_tv);
        goto CPyL54;
    }
    cpy_r_r38 = ((mypy___types___TypeVarTupleTypeObject *)cpy_r_r37)->_default;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r39 = CPyDef_types___TypeVarTupleType(cpy_r_r28, cpy_r_r30, cpy_r_r32, cpy_r_r34, cpy_r_r36, cpy_r_r38, -2, -2);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 33, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPyDef_types___UnpackType(cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 32, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    cpy_r_tv = cpy_r_r42;
    goto CPyL33;
CPyL22: ;
    cpy_r_r43 = (PyObject *)CPyType_types___ParamSpecType;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_tv)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (cpy_r_r46) {
        goto CPyL25;
    } else
        goto CPyL55;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r47 = 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 45, CPyStatic_typevars___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r48 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 47, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL49;
    }
    cpy_r_r49 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r48)->_name;
    CPy_INCREF(cpy_r_r49);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r50 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 48, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL56;
    }
    cpy_r_r51 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r50)->_fullname;
    CPy_INCREF(cpy_r_r51);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r52 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 49, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL57;
    }
    cpy_r_r53 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r52)->_id;
    CPy_INCREF(cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r54 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 50, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL58;
    }
    cpy_r_r55 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r54)->_flavor;
    CPyTagged_INCREF(cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r56 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 51, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL59;
    }
    cpy_r_r57 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r56)->_upper_bound;
    CPy_INCREF(cpy_r_r57);
    if (likely(Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType))
        cpy_r_r58 = cpy_r_tv;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 52, CPyStatic_typevars___globals, "mypy.types.ParamSpecType", cpy_r_tv);
        goto CPyL60;
    }
    cpy_r_r59 = ((mypy___types___ParamSpecTypeObject *)cpy_r_r58)->_default;
    CPy_INCREF(cpy_r_r59);
    CPy_DECREF(cpy_r_tv);
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_types___ParamSpecType(cpy_r_r49, cpy_r_r51, cpy_r_r53, cpy_r_r55, cpy_r_r57, cpy_r_r59, -2, -2, cpy_r_r60);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 46, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    cpy_r_tv = cpy_r_r61;
CPyL33: ;
    if (Py_TYPE(cpy_r_tv) == CPyType_types___TypeVarType)
        cpy_r_r62 = cpy_r_tv;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL8098;
    if (Py_TYPE(cpy_r_tv) == CPyType_types___ParamSpecType)
        cpy_r_r62 = cpy_r_tv;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL8098;
    if (Py_TYPE(cpy_r_tv) == CPyType_types___UnpackType)
        cpy_r_r62 = cpy_r_tv;
    else {
        cpy_r_r62 = NULL;
    }
    if (cpy_r_r62 != NULL) goto __LL8098;
    CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 56, CPyStatic_typevars___globals, "union[mypy.types.TypeVarType, mypy.types.ParamSpecType, mypy.types.UnpackType]", cpy_r_tv);
    goto CPyL45;
__LL8098: ;
    cpy_r_r63 = PyList_Append(cpy_r_tvs, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 56, CPyStatic_typevars___globals);
        goto CPyL45;
    }
    cpy_r_r65 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r65;
    cpy_r_i = cpy_r_r65;
    goto CPyL3;
CPyL36: ;
    cpy_r_r66 = CPY_INT_TAG;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_types___Instance(cpy_r_typ, cpy_r_tvs, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_tvs);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 57, CPyStatic_typevars___globals);
        goto CPyL44;
    }
    cpy_r_inst = cpy_r_r70;
    cpy_r_r71 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_tuple_type;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars", "TypeInfo", "tuple_type", 58, CPyStatic_typevars___globals);
        goto CPyL61;
    }
CPyL38: ;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_r71 == cpy_r_r72;
    if (!cpy_r_r73) goto CPyL40;
    return cpy_r_inst;
CPyL40: ;
    cpy_r_r74 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_tuple_type;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars", "TypeInfo", "tuple_type", 60, CPyStatic_typevars___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r74);
CPyL41: ;
    if (likely(cpy_r_r74 != Py_None))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars", 60, CPyStatic_typevars___globals, "mypy.types.TupleType", cpy_r_r74);
        goto CPyL61;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_types___TupleType___copy_modified(cpy_r_r75, cpy_r_inst, cpy_r_r76);
    CPy_DECREF(cpy_r_inst);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 60, CPyStatic_typevars___globals);
        goto CPyL44;
    }
    return cpy_r_r77;
CPyL44: ;
    cpy_r_r78 = NULL;
    return cpy_r_r78;
CPyL45: ;
    CPy_DecRef(cpy_r_tvs);
    goto CPyL44;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL36;
CPyL47: ;
    CPy_DecRef(cpy_r_tvs);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_r16);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    goto CPyL44;
CPyL50: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r28);
    goto CPyL44;
CPyL51: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r32);
    goto CPyL44;
CPyL53: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    goto CPyL44;
CPyL54: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL44;
CPyL55: ;
    CPy_DECREF(cpy_r_tvs);
    CPy_DECREF(cpy_r_tv);
    goto CPyL23;
CPyL56: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r49);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    goto CPyL44;
CPyL58: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r53);
    goto CPyL44;
CPyL59: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r53);
    CPyTagged_DecRef(cpy_r_r55);
    goto CPyL44;
CPyL60: ;
    CPy_DecRef(cpy_r_tvs);
    CPy_DecRef(cpy_r_tv);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r53);
    CPyTagged_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    goto CPyL44;
CPyL61: ;
    CPy_DecRef(cpy_r_inst);
    goto CPyL44;
}

PyObject *CPyPy_typevars___fill_typevars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:fill_typevars", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typevars___fill_typevars(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevars.py", "fill_typevars", 19, CPyStatic_typevars___globals);
    return NULL;
}

PyObject *CPyDef_typevars___fill_typevars_with_any(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_inst;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 65, CPyStatic_typevars___globals);
        goto CPyL12;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 65, CPyStatic_typevars___globals);
        goto CPyL13;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r4;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_defn;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars_with_any", "TypeInfo", "defn", 65, CPyStatic_typevars___globals);
        goto CPyL14;
    }
CPyL3: ;
    cpy_r_r9 = ((mypy___nodes___ClassDefObject *)cpy_r_r8)->_type_vars;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = CPySequence_Multiply(cpy_r_r5, cpy_r_r12);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 65, CPyStatic_typevars___globals);
        goto CPyL12;
    }
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyDef_types___Instance(cpy_r_typ, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 65, CPyStatic_typevars___globals);
        goto CPyL12;
    }
    cpy_r_inst = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_tuple_type;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars_with_any", "TypeInfo", "tuple_type", 66, CPyStatic_typevars___globals);
        goto CPyL15;
    }
CPyL6: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 == cpy_r_r20;
    if (!cpy_r_r21) goto CPyL8;
    return cpy_r_inst;
CPyL8: ;
    cpy_r_r22 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_tuple_type;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/typevars.py", "fill_typevars_with_any", "TypeInfo", "tuple_type", 68, CPyStatic_typevars___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r22);
CPyL9: ;
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/typevars.py", "fill_typevars_with_any", 68, CPyStatic_typevars___globals, "mypy.types.TupleType", cpy_r_r22);
        goto CPyL15;
    }
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_types___TupleType___copy_modified(cpy_r_r23, cpy_r_inst, cpy_r_r24);
    CPy_DECREF(cpy_r_inst);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 68, CPyStatic_typevars___globals);
        goto CPyL12;
    }
    return cpy_r_r25;
CPyL12: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL13: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_inst);
    goto CPyL12;
}

PyObject *CPyPy_typevars___fill_typevars_with_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:fill_typevars_with_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_typevars___fill_typevars_with_any(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevars.py", "fill_typevars_with_any", 63, CPyStatic_typevars___globals);
    return NULL;
}

char CPyDef_typevars___has_no_typevars(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_erasetype___erase_typevars(cpy_r_typ, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "has_no_typevars", 78, CPyStatic_typevars___globals);
        goto CPyL4;
    }
    cpy_r_r2 = PyObject_RichCompare(cpy_r_typ, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "has_no_typevars", 78, CPyStatic_typevars___globals);
        goto CPyL4;
    }
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r3 = 2;
    } else
        cpy_r_r3 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/typevars.py", "has_no_typevars", 78, CPyStatic_typevars___globals);
        goto CPyL4;
    }
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_typevars___has_no_typevars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:has_no_typevars", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_typevars___has_no_typevars(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typevars.py", "has_no_typevars", 71, CPyStatic_typevars___globals);
    return NULL;
}

char CPyDef_typevars_____top_level__(void) {
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
    char cpy_r_r21;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "<module>", -1, CPyStatic_typevars___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_typevars___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "<module>", 1, CPyStatic_typevars___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9248]; /* ('erase_typevars',) */
    cpy_r_r10 = CPyStatics[90]; /* 'mypy.erasetype' */
    cpy_r_r11 = CPyStatic_typevars___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "<module>", 3, CPyStatic_typevars___globals);
        goto CPyL8;
    }
    CPyModule_mypy___erasetype = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___erasetype);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9495]; /* ('TypeInfo',) */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_typevars___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "<module>", 4, CPyStatic_typevars___globals);
        goto CPyL8;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9884]; /* ('AnyType', 'Instance', 'ParamSpecType', 'TupleType',
                                     'Type', 'TypeOfAny', 'TypeVarLikeType',
                                     'TypeVarTupleType', 'TypeVarType', 'UnpackType') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_typevars___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typevars.py", "<module>", 5, CPyStatic_typevars___globals);
        goto CPyL8;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL8: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}
