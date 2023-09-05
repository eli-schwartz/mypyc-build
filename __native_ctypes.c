#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef ctypesmodule_methods[] = {
    {"_find_simplecdata_base_arg", (PyCFunction)CPyPy_ctypes____find_simplecdata_base_arg, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_autoconvertible_to_cdata", (PyCFunction)CPyPy_ctypes____autoconvertible_to_cdata, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_autounboxed_cdata", (PyCFunction)CPyPy_ctypes____autounboxed_cdata, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_array_element_type", (PyCFunction)CPyPy_ctypes____get_array_element_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_constructor_callback", (PyCFunction)CPyPy_ctypes___array_constructor_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_getitem_callback", (PyCFunction)CPyPy_ctypes___array_getitem_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_setitem_callback", (PyCFunction)CPyPy_ctypes___array_setitem_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_iter_callback", (PyCFunction)CPyPy_ctypes___array_iter_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_value_callback", (PyCFunction)CPyPy_ctypes___array_value_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"array_raw_callback", (PyCFunction)CPyPy_ctypes___array_raw_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ctypesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.ctypes",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ctypesmodule_methods
};

PyObject *CPyInit_mypy___plugins___ctypes(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___ctypes_internal) {
        Py_INCREF(CPyModule_mypy___plugins___ctypes_internal);
        return CPyModule_mypy___plugins___ctypes_internal;
    }
    CPyModule_mypy___plugins___ctypes_internal = PyModule_Create(&ctypesmodule);
    if (unlikely(CPyModule_mypy___plugins___ctypes_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___ctypes_internal, "__name__");
    CPyStatic_ctypes___globals = PyModule_GetDict(CPyModule_mypy___plugins___ctypes_internal);
    if (unlikely(CPyStatic_ctypes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ctypes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___ctypes_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___ctypes_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_ctypes____find_simplecdata_base_arg(PyObject *cpy_r_tp, PyObject *cpy_r_api) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_simplecdata_base;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_tp)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[4481]; /* '_ctypes._SimpleCData' */
    cpy_r_r2 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 33, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    if (!cpy_r_r2) goto CPyL14;
    cpy_r_r3 = CPyStatics[4481]; /* '_ctypes._SimpleCData' */
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_types___AnyType(12, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 36, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 36, CPyStatic_ctypes___globals);
        goto CPyL16;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    *(PyObject * *)cpy_r_r11 = cpy_r_r8;
    cpy_r_r12 = CPY_GET_METHOD_TRAIT(cpy_r_api, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_api, cpy_r_r3, cpy_r_r9); /* named_generic_type */
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 36, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    cpy_r_r13 = ((mypy___types___InstanceObject *)cpy_r_r12)->_type;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyDef_maptype___map_instance_to_supertype(cpy_r_tp, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 34, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    cpy_r_simplecdata_base = cpy_r_r14;
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_simplecdata_base)->_args;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r15)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = cpy_r_r18 == 2;
    if (cpy_r_r19) {
        goto CPyL9;
    } else
        goto CPyL17;
CPyL7: ;
    PyErr_SetString(PyExc_AssertionError, "_SimpleCData takes exactly one type argument");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 38, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_simplecdata_base)->_args;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_simplecdata_base);
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_r21, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 39, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 39, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL15;
    }
    cpy_r_r24 = CPyDef_types___get_proper_type(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 39, CPyStatic_ctypes___globals);
        goto CPyL15;
    }
    if (likely(cpy_r_r24 != Py_None))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 39, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r24);
        goto CPyL15;
    }
    return cpy_r_r25;
CPyL14: ;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    return cpy_r_r26;
CPyL15: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL16: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_simplecdata_base);
    goto CPyL7;
}

PyObject *CPyPy_ctypes____find_simplecdata_base_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", "api", 0};
    static CPyArg_Parser parser = {"OO:_find_simplecdata_base_arg", kwlist, 0};
    PyObject *obj_tp;
    PyObject *obj_api;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tp, &obj_api)) {
        return NULL;
    }
    PyObject *arg_tp;
    if (likely(Py_TYPE(obj_tp) == CPyType_types___Instance))
        arg_tp = obj_tp;
    else {
        CPy_TypeError("mypy.types.Instance", obj_tp); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_checker___TypeChecker))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes____find_simplecdata_base_arg(arg_tp, arg_api);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "_find_simplecdata_base_arg", 26, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes____autoconvertible_to_cdata(PyObject *cpy_r_tp, PyObject *cpy_r_api) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_allowed_types;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_unboxed;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 52, CPyStatic_ctypes___globals);
        goto CPyL27;
    }
    cpy_r_allowed_types = cpy_r_r0;
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 57, CPyStatic_ctypes___globals);
        goto CPyL28;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    CPy_INCREF(cpy_r_tp);
    *(PyObject * *)cpy_r_r3 = cpy_r_tp;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_types___flatten_nested_unions(cpy_r_r1, cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 57, CPyStatic_ctypes___globals);
        goto CPyL28;
    }
    cpy_r_r6 = 0;
CPyL4: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL29;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 57, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL30;
    }
    cpy_r_t = cpy_r_r12;
    cpy_r_r13 = CPyDef_types___get_proper_type(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 58, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 58, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r13);
        goto CPyL30;
    }
    cpy_r_t = cpy_r_r14;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r15 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 60, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r16 = PyList_Append(cpy_r_allowed_types, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 60, CPyStatic_ctypes___globals);
        goto CPyL31;
    }
    cpy_r_r18 = (PyObject *)CPyType_types___Instance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL32;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r22 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 62, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r23 = CPyDef_ctypes____find_simplecdata_base_arg(cpy_r_r22, cpy_r_api);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 62, CPyStatic_ctypes___globals);
        goto CPyL31;
    }
    cpy_r_unboxed = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_unboxed != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL33;
    if (likely(cpy_r_unboxed != Py_None))
        cpy_r_r26 = cpy_r_unboxed;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 67, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_unboxed);
        goto CPyL31;
    }
    cpy_r_r27 = PyList_Append(cpy_r_allowed_types, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 67, CPyStatic_ctypes___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 69, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_t);
    cpy_r_r31 = CPyStatics[4482]; /* 'ctypes._PointerLike' */
    cpy_r_r32 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 69, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    if (!cpy_r_r32) goto CPyL24;
    cpy_r_r33 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r34 = PyList_New(0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 72, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    cpy_r_r35 = CPY_GET_METHOD_TRAIT(cpy_r_api, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_api, cpy_r_r33, cpy_r_r34); /* named_generic_type */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 72, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    cpy_r_r36 = PyList_Append(cpy_r_allowed_types, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 72, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPyDef_types___NoneType(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 73, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
    cpy_r_r41 = PyList_Append(cpy_r_allowed_types, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 73, CPyStatic_ctypes___globals);
        goto CPyL30;
    }
CPyL24: ;
    cpy_r_r43 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r43;
    goto CPyL4;
CPyL25: ;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_typeops___make_simplified_union(cpy_r_allowed_types, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_allowed_types);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 75, CPyStatic_ctypes___globals);
        goto CPyL27;
    }
    return cpy_r_r48;
CPyL27: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL28: ;
    CPy_DecRef(cpy_r_allowed_types);
    goto CPyL27;
CPyL29: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_allowed_types);
    CPy_DecRef(cpy_r_r5);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_allowed_types);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_t);
    goto CPyL27;
CPyL32: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL24;
CPyL33: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_unboxed);
    goto CPyL24;
}

PyObject *CPyPy_ctypes____autoconvertible_to_cdata(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", "api", 0};
    static CPyArg_Parser parser = {"OO:_autoconvertible_to_cdata", kwlist, 0};
    PyObject *obj_tp;
    PyObject *obj_api;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_tp, &obj_api)) {
        return NULL;
    }
    PyObject *arg_tp;
    if (likely(PyObject_TypeCheck(obj_tp, CPyType_types___Type)))
        arg_tp = obj_tp;
    else {
        CPy_TypeError("mypy.types.Type", obj_tp); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_checker___TypeChecker))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes____autoconvertible_to_cdata(arg_tp, arg_api);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "_autoconvertible_to_cdata", 43, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes____autounboxed_cdata(PyObject *cpy_r_tp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_tp);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 85, CPyStatic_ctypes___globals);
        goto CPyL35;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 85, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL35;
    }
    cpy_r_tp = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals, "mypy.types.UnionType", cpy_r_tp);
        goto CPyL36;
    }
    cpy_r_r7 = ((mypy___types___UnionTypeObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals);
        goto CPyL37;
    }
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL38;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_types___Type)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL39;
    }
    cpy_r_t = cpy_r_r17;
    cpy_r_r18 = CPyDef_ctypes____autounboxed_cdata(cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals);
        goto CPyL39;
    }
    cpy_r_r19 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r18);
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals);
        goto CPyL39;
    }
    cpy_r_r20 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r20;
    goto CPyL6;
CPyL11: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPyDef_typeops___make_simplified_union(cpy_r_r10, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 88, CPyStatic_ctypes___globals);
        goto CPyL35;
    }
    return cpy_r_r25;
CPyL13: ;
    cpy_r_r26 = (PyObject *)CPyType_types___Instance;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r30 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 90, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL36;
    }
    cpy_r_r31 = ((mypy___types___InstanceObject *)cpy_r_r30)->_type;
    cpy_r_r32 = ((mypy___nodes___TypeInfoObject *)cpy_r_r31)->_bases;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/plugins/ctypes.py", "_autounboxed_cdata", "TypeInfo", "bases", 90, CPyStatic_ctypes___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r32);
CPyL16: ;
    cpy_r_r33 = 0;
CPyL17: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL40;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_types___Instance))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 90, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_r38);
        goto CPyL41;
    }
    cpy_r_base = cpy_r_r39;
    cpy_r_r40 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPY_GET_ATTR(cpy_r_r40, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 91, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
CPyL20: ;
    cpy_r_r42 = CPyStatics[4481]; /* '_ctypes._SimpleCData' */
    cpy_r_r43 = PyUnicode_Compare(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 == -1;
    if (!cpy_r_r44) goto CPyL23;
    cpy_r_r45 = PyErr_Occurred();
    cpy_r_r46 = cpy_r_r45 != NULL;
    if (!cpy_r_r46) goto CPyL23;
    cpy_r_r47 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 91, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
CPyL23: ;
    cpy_r_r48 = cpy_r_r43 == 0;
    if (cpy_r_r48) {
        goto CPyL43;
    } else
        goto CPyL44;
CPyL24: ;
    cpy_r_r49 = ((mypy___types___InstanceObject *)cpy_r_base)->_args;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    CPy_DECREF(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = cpy_r_r52 == 2;
    if (cpy_r_r53) {
        goto CPyL27;
    } else
        goto CPyL45;
CPyL25: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 94, CPyStatic_ctypes___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r55 = ((mypy___types___InstanceObject *)cpy_r_base)->_args;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_base);
    cpy_r_r56 = CPySequenceTuple_GetItem(cpy_r_r55, 0);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 95, CPyStatic_ctypes___globals);
        goto CPyL35;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r56, CPyType_types___Type)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 95, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r56);
        goto CPyL35;
    }
    cpy_r_r58 = CPyDef_types___get_proper_type(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 95, CPyStatic_ctypes___globals);
        goto CPyL35;
    }
    if (likely(cpy_r_r58 != Py_None))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 95, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r58);
        goto CPyL35;
    }
    return cpy_r_r59;
CPyL32: ;
    cpy_r_r60 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r60;
    goto CPyL17;
CPyL33: ;
    if (likely(PyObject_TypeCheck(cpy_r_tp, CPyType_types___ProperType)))
        cpy_r_r61 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 98, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_tp);
        goto CPyL35;
    }
    return cpy_r_r61;
CPyL35: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL36: ;
    CPy_DecRef(cpy_r_tp);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL35;
CPyL38: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL11;
CPyL39: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL35;
CPyL40: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r32);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_tp);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_base);
    goto CPyL35;
CPyL43: ;
    CPy_DECREF(cpy_r_tp);
    CPy_DECREF(cpy_r_r32);
    goto CPyL24;
CPyL44: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL32;
CPyL45: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL25;
}

PyObject *CPyPy_ctypes____autounboxed_cdata(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", 0};
    static CPyArg_Parser parser = {"O:_autounboxed_cdata", kwlist, 0};
    PyObject *obj_tp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tp)) {
        return NULL;
    }
    PyObject *arg_tp;
    if (likely(PyObject_TypeCheck(obj_tp, CPyType_types___Type)))
        arg_tp = obj_tp;
    else {
        CPy_TypeError("mypy.types.Type", obj_tp); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes____autounboxed_cdata(arg_tp);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "_autounboxed_cdata", 78, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes____get_array_element_type(PyObject *cpy_r_tp) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_tp);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 103, CPyStatic_ctypes___globals);
        goto CPyL20;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 103, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL20;
    }
    cpy_r_tp = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 105, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL22;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 105, CPyStatic_ctypes___globals);
        goto CPyL22;
    }
CPyL5: ;
    cpy_r_r9 = CPyStatics[4483]; /* '_ctypes.Array' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 105, CPyStatic_ctypes___globals);
        goto CPyL22;
    }
CPyL8: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (cpy_r_r15) {
        goto CPyL11;
    } else
        goto CPyL23;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 105, CPyStatic_ctypes___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r17 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 106, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL22;
    }
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_r17)->_args;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 == 2;
    if (!cpy_r_r22) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 107, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL22;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_args;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r25 = CPySequenceTuple_GetItem(cpy_r_r24, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 107, CPyStatic_ctypes___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 107, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL20;
    }
    cpy_r_r27 = CPyDef_types___get_proper_type(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 107, CPyStatic_ctypes___globals);
        goto CPyL20;
    }
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 107, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r27);
        goto CPyL20;
    }
    return cpy_r_r28;
CPyL19: ;
    cpy_r_r29 = Py_None;
    CPy_INCREF(cpy_r_r29);
    return cpy_r_r29;
CPyL20: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL21: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_tp);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL9;
}

PyObject *CPyPy_ctypes____get_array_element_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"tp", 0};
    static CPyArg_Parser parser = {"O:_get_array_element_type", kwlist, 0};
    PyObject *obj_tp;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tp)) {
        return NULL;
    }
    PyObject *arg_tp;
    if (likely(PyObject_TypeCheck(obj_tp, CPyType_types___Type)))
        arg_tp = obj_tp;
    else {
        CPy_TypeError("mypy.types.Type", obj_tp); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes____get_array_element_type(arg_tp);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "_get_array_element_type", 101, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_constructor_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_allowed;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2IT2OO cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_arg_num;
    tuple_T2OO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_arg_kind;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_ty;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    CPyPtr cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_it;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    size_t __tmp4790;
    size_t __tmp4791;
    size_t __tmp4792;
    size_t __tmp4793;
    size_t __tmp4794;
    size_t __tmp4795;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 115, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___Type)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 115, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r0);
        goto CPyL86;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 115, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL87;
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r5 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 117, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL88;
    }
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 117, CPyStatic_ctypes___globals);
        goto CPyL89;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checker___TypeChecker))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 117, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r6);
        goto CPyL89;
    }
    cpy_r_r8 = CPyDef_ctypes____autoconvertible_to_cdata(cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 117, CPyStatic_ctypes___globals);
        goto CPyL88;
    }
    cpy_r_allowed = cpy_r_r8;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 119, CPyStatic_ctypes___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 119, CPyStatic_ctypes___globals, "list", cpy_r_r9);
        goto CPyL90;
    }
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = cpy_r_r13 == 2;
    if (cpy_r_r14) {
        goto CPyL13;
    } else
        goto CPyL91;
CPyL11: ;
    PyErr_SetString(PyExc_AssertionError, "The stub of the ctypes.Array constructor should have a single vararg parameter");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 118, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals, "list", cpy_r_r16);
        goto CPyL90;
    }
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals, "list", cpy_r_r18);
        goto CPyL90;
    }
    cpy_r_r20 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals, "list", cpy_r_r20);
        goto CPyL92;
    }
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_r21, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals, "list", cpy_r_r22);
        goto CPyL92;
    }
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[794]; /* 'zip' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r27[2] = {cpy_r_r19, cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 2, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[4484]; /* 'enumerate' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL94;
    }
    cpy_r_r33 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r34[2] = {cpy_r_r29, cpy_r_r33};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r35, 2, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL94;
    }
    CPy_DECREF(cpy_r_r29);
    cpy_r_r37 = PyObject_GetIter(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL90;
    }
CPyL26: ;
    cpy_r_r38 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r38 == NULL) goto CPyL95;
    PyObject *__tmp4777;
    if (unlikely(!(PyTuple_Check(cpy_r_r38) && PyTuple_GET_SIZE(cpy_r_r38) == 2))) {
        __tmp4777 = NULL;
        goto __LL4778;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r38, 0))))
        __tmp4777 = PyTuple_GET_ITEM(cpy_r_r38, 0);
    else {
        __tmp4777 = NULL;
    }
    if (__tmp4777 == NULL) goto __LL4778;
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r38, 1)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(cpy_r_r38, 1)) == 2))) {
        __tmp4777 = NULL;
        goto __LL4779;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r38, 1), 0)) == CPyType_nodes___ArgKind))
        __tmp4777 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r38, 1), 0);
    else {
        __tmp4777 = NULL;
    }
    if (__tmp4777 == NULL) goto __LL4779;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r38, 1), 1), CPyType_types___Type)))
        __tmp4777 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r38, 1), 1);
    else {
        __tmp4777 = NULL;
    }
    if (__tmp4777 == NULL) goto __LL4779;
    __tmp4777 = PyTuple_GET_ITEM(cpy_r_r38, 1);
__LL4779: ;
    if (__tmp4777 == NULL) goto __LL4778;
    __tmp4777 = cpy_r_r38;
__LL4778: ;
    if (unlikely(__tmp4777 == NULL)) {
        CPy_TypeError("tuple[int, tuple[mypy.nodes.ArgKind, mypy.types.Type]]", cpy_r_r38); cpy_r_r39 = (tuple_T2IT2OO) { CPY_INT_TAG, { NULL, NULL } };
    } else {
        PyObject *__tmp4780 = PyTuple_GET_ITEM(cpy_r_r38, 0);
        CPyTagged __tmp4781;
        if (likely(PyLong_Check(__tmp4780)))
            __tmp4781 = CPyTagged_FromObject(__tmp4780);
        else {
            CPy_TypeError("int", __tmp4780); __tmp4781 = CPY_INT_TAG;
        }
        cpy_r_r39.f0 = __tmp4781;
        PyObject *__tmp4782 = PyTuple_GET_ITEM(cpy_r_r38, 1);
        tuple_T2OO __tmp4783;
        PyObject *__tmp4784;
        if (unlikely(!(PyTuple_Check(__tmp4782) && PyTuple_GET_SIZE(__tmp4782) == 2))) {
            __tmp4784 = NULL;
            goto __LL4785;
        }
        if (likely(Py_TYPE(PyTuple_GET_ITEM(__tmp4782, 0)) == CPyType_nodes___ArgKind))
            __tmp4784 = PyTuple_GET_ITEM(__tmp4782, 0);
        else {
            __tmp4784 = NULL;
        }
        if (__tmp4784 == NULL) goto __LL4785;
        if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(__tmp4782, 1), CPyType_types___Type)))
            __tmp4784 = PyTuple_GET_ITEM(__tmp4782, 1);
        else {
            __tmp4784 = NULL;
        }
        if (__tmp4784 == NULL) goto __LL4785;
        __tmp4784 = __tmp4782;
__LL4785: ;
        if (unlikely(__tmp4784 == NULL)) {
            CPy_TypeError("tuple[mypy.nodes.ArgKind, mypy.types.Type]", __tmp4782); __tmp4783 = (tuple_T2OO) { NULL, NULL };
        } else {
            PyObject *__tmp4786 = PyTuple_GET_ITEM(__tmp4782, 0);
            CPy_INCREF(__tmp4786);
            PyObject *__tmp4787;
            if (likely(Py_TYPE(__tmp4786) == CPyType_nodes___ArgKind))
                __tmp4787 = __tmp4786;
            else {
                CPy_TypeError("mypy.nodes.ArgKind", __tmp4786); 
                __tmp4787 = NULL;
            }
            __tmp4783.f0 = __tmp4787;
            PyObject *__tmp4788 = PyTuple_GET_ITEM(__tmp4782, 1);
            CPy_INCREF(__tmp4788);
            PyObject *__tmp4789;
            if (likely(PyObject_TypeCheck(__tmp4788, CPyType_types___Type)))
                __tmp4789 = __tmp4788;
            else {
                CPy_TypeError("mypy.types.Type", __tmp4788); 
                __tmp4789 = NULL;
            }
            __tmp4783.f1 = __tmp4789;
        }
        cpy_r_r39.f1 = __tmp4783;
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL96;
    }
    cpy_r_r40 = cpy_r_r39.f0;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_arg_num = cpy_r_r40;
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPyTagged_DECREF(cpy_r_r39.f0);
    CPy_DECREF(cpy_r_r39.f1.f0);
    CPy_DECREF(cpy_r_r39.f1.f1);
    cpy_r_r42 = cpy_r_r41.f0;
    CPy_INCREF(cpy_r_r42);
    cpy_r_arg_kind = cpy_r_r42;
    cpy_r_r43 = cpy_r_r41.f1;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r41.f0);
    CPy_DECREF(cpy_r_r41.f1);
    cpy_r_arg_type = cpy_r_r43;
    cpy_r_r44 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL97;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 122, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r46 = cpy_r_arg_kind == cpy_r_r44;
    if (!cpy_r_r46) goto CPyL51;
    cpy_r_r47 = NULL;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = 2;
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_subtypes___is_subtype(cpy_r_arg_type, cpy_r_allowed, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 122, CPyStatic_ctypes___globals);
        goto CPyL98;
    }
    if (cpy_r_r54) {
        goto CPyL51;
    } else
        goto CPyL99;
CPyL34: ;
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 123, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_checker___TypeChecker))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 123, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r55);
        goto CPyL100;
    }
    __tmp4790 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r56)->vtable, 0);
    cpy_r_r57 = *(PyObject * *)((char *)cpy_r_r56 + __tmp4790);
    if (unlikely(cpy_r_r57 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r57);
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 123, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
CPyL37: ;
    cpy_r_r58 = CPyTagged_Str(cpy_r_arg_num);
    CPyTagged_DECREF(cpy_r_arg_num);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 124, CPyStatic_ctypes___globals);
        goto CPyL101;
    }
    cpy_r_r59 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 127, CPyStatic_ctypes___globals);
        goto CPyL102;
    }
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_checker___TypeChecker))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 127, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r59);
        goto CPyL102;
    }
    __tmp4791 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r60)->vtable, 1);
    cpy_r_r61 = *(PyObject * *)((char *)cpy_r_r60 + __tmp4791);
    if (unlikely(cpy_r_r61 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r61);
    }
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 127, CPyStatic_ctypes___globals);
        goto CPyL102;
    }
CPyL41: ;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = 2;
    cpy_r_r64 = CPyDef_messages___format_type(cpy_r_arg_type, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 127, CPyStatic_ctypes___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r65 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 128, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL104;
    }
    cpy_r_r66 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 128, CPyStatic_ctypes___globals);
        goto CPyL105;
    }
    if (likely(Py_TYPE(cpy_r_r66) == CPyType_checker___TypeChecker))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 128, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r66);
        goto CPyL105;
    }
    __tmp4792 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r67)->vtable, 1);
    cpy_r_r68 = *(PyObject * *)((char *)cpy_r_r67 + __tmp4792);
    if (unlikely(cpy_r_r68 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r68);
    }
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 128, CPyStatic_ctypes___globals);
        goto CPyL105;
    }
CPyL46: ;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = 2;
    cpy_r_r71 = CPyDef_messages___format_type(cpy_r_r65, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 128, CPyStatic_ctypes___globals);
        goto CPyL104;
    }
    cpy_r_r72 = CPyStatics[4485]; /* 'Array constructor argument ' */
    cpy_r_r73 = CPyStatics[4486]; /* ' of type ' */
    cpy_r_r74 = CPyStatics[4487]; /* ' is not convertible to the array element type ' */
    cpy_r_r75 = CPyStr_Build(6, cpy_r_r72, cpy_r_r58, cpy_r_r73, cpy_r_r64, cpy_r_r74, cpy_r_r71);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 124, CPyStatic_ctypes___globals);
        goto CPyL106;
    }
    cpy_r_r76 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 130, CPyStatic_ctypes___globals);
        goto CPyL107;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r76, CPyType_nodes___Context)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 130, CPyStatic_ctypes___globals, "mypy.nodes.Context", cpy_r_r76);
        goto CPyL107;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = 2;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_messages___MessageBuilder___fail(cpy_r_r57, cpy_r_r75, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 123, CPyStatic_ctypes___globals);
        goto CPyL96;
    } else
        goto CPyL26;
CPyL51: ;
    cpy_r_r83 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r83 == NULL)) {
        goto CPyL108;
    } else
        goto CPyL54;
CPyL52: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 132, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r85 = cpy_r_arg_kind == cpy_r_r83;
    CPy_DECREF(cpy_r_arg_kind);
    if (!cpy_r_r85) goto CPyL109;
    cpy_r_r86 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 133, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r86) == CPyType_checker___TypeChecker))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 133, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r86);
        goto CPyL100;
    }
    cpy_r_r88 = CPyStatics[757]; /* 'typing.Iterable' */
    cpy_r_r89 = PyList_New(1);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 133, CPyStatic_ctypes___globals);
        goto CPyL110;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    CPy_INCREF(cpy_r_allowed);
    *(PyObject * *)cpy_r_r91 = cpy_r_allowed;
    cpy_r_r92 = CPY_GET_METHOD_TRAIT(cpy_r_r87, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r87, cpy_r_r88, cpy_r_r89); /* named_generic_type */
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 133, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    cpy_r_ty = cpy_r_r92;
    cpy_r_r93 = NULL;
    cpy_r_r94 = 2;
    cpy_r_r95 = 2;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPyDef_subtypes___is_subtype(cpy_r_arg_type, cpy_r_ty, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_ty);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 134, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    if (cpy_r_r100) goto CPyL109;
    cpy_r_r101 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 135, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_checker___TypeChecker))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 135, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r101);
        goto CPyL100;
    }
    cpy_r_r103 = CPyStatics[757]; /* 'typing.Iterable' */
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r104 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 135, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL111;
    }
    cpy_r_r105 = PyList_New(1);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 135, CPyStatic_ctypes___globals);
        goto CPyL112;
    }
    cpy_r_r106 = (CPyPtr)&((PyListObject *)cpy_r_r105)->ob_item;
    cpy_r_r107 = *(CPyPtr *)cpy_r_r106;
    *(PyObject * *)cpy_r_r107 = cpy_r_r104;
    cpy_r_r108 = CPY_GET_METHOD_TRAIT(cpy_r_r102, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r102, cpy_r_r103, cpy_r_r105); /* named_generic_type */
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 135, CPyStatic_ctypes___globals);
        goto CPyL100;
    }
    cpy_r_it = cpy_r_r108;
    cpy_r_r109 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 136, CPyStatic_ctypes___globals);
        goto CPyL113;
    }
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_checker___TypeChecker))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 136, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r109);
        goto CPyL113;
    }
    __tmp4793 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r110)->vtable, 0);
    cpy_r_r111 = *(PyObject * *)((char *)cpy_r_r110 + __tmp4793);
    if (unlikely(cpy_r_r111 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r111);
    }
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 136, CPyStatic_ctypes___globals);
        goto CPyL113;
    }
CPyL69: ;
    cpy_r_r112 = CPyTagged_Str(cpy_r_arg_num);
    CPyTagged_DECREF(cpy_r_arg_num);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 137, CPyStatic_ctypes___globals);
        goto CPyL114;
    }
    cpy_r_r113 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 140, CPyStatic_ctypes___globals);
        goto CPyL115;
    }
    if (likely(Py_TYPE(cpy_r_r113) == CPyType_checker___TypeChecker))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 140, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r113);
        goto CPyL115;
    }
    __tmp4794 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r114)->vtable, 1);
    cpy_r_r115 = *(PyObject * *)((char *)cpy_r_r114 + __tmp4794);
    if (unlikely(cpy_r_r115 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r115);
    }
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 140, CPyStatic_ctypes___globals);
        goto CPyL115;
    }
CPyL73: ;
    cpy_r_r116 = CPY_INT_TAG;
    cpy_r_r117 = 2;
    cpy_r_r118 = CPyDef_messages___format_type(cpy_r_arg_type, cpy_r_r115, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_arg_type);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 140, CPyStatic_ctypes___globals);
        goto CPyL116;
    }
    cpy_r_r119 = CPySequenceTuple_GetItem(cpy_r_ctx, 14);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 141, CPyStatic_ctypes___globals);
        goto CPyL117;
    }
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_checker___TypeChecker))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 141, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r119);
        goto CPyL117;
    }
    __tmp4795 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r120)->vtable, 1);
    cpy_r_r121 = *(PyObject * *)((char *)cpy_r_r120 + __tmp4795);
    if (unlikely(cpy_r_r121 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r121);
    }
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 141, CPyStatic_ctypes___globals);
        goto CPyL117;
    }
CPyL77: ;
    cpy_r_r122 = CPY_INT_TAG;
    cpy_r_r123 = 2;
    cpy_r_r124 = CPyDef_messages___format_type(cpy_r_it, cpy_r_r121, cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_it);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 141, CPyStatic_ctypes___globals);
        goto CPyL118;
    }
    cpy_r_r125 = CPyStatics[4485]; /* 'Array constructor argument ' */
    cpy_r_r126 = CPyStatics[4486]; /* ' of type ' */
    cpy_r_r127 = CPyStatics[4487]; /* ' is not convertible to the array element type ' */
    cpy_r_r128 = CPyStr_Build(6, cpy_r_r125, cpy_r_r112, cpy_r_r126, cpy_r_r118, cpy_r_r127, cpy_r_r124);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 137, CPyStatic_ctypes___globals);
        goto CPyL119;
    }
    cpy_r_r129 = CPySequenceTuple_GetItem(cpy_r_ctx, 12);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 143, CPyStatic_ctypes___globals);
        goto CPyL120;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r129, CPyType_nodes___Context)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 143, CPyStatic_ctypes___globals, "mypy.nodes.Context", cpy_r_r129);
        goto CPyL120;
    }
    cpy_r_r131 = NULL;
    cpy_r_r132 = NULL;
    cpy_r_r133 = 2;
    cpy_r_r134 = NULL;
    cpy_r_r135 = CPyDef_messages___MessageBuilder___fail(cpy_r_r111, cpy_r_r128, cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r128);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 136, CPyStatic_ctypes___globals);
        goto CPyL96;
    } else
        goto CPyL26;
CPyL82: ;
    cpy_r_r136 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 121, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
CPyL83: ;
    cpy_r_r137 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 146, CPyStatic_ctypes___globals);
        goto CPyL86;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r137, CPyType_types___Type)))
        cpy_r_r138 = cpy_r_r137;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 146, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r137);
        goto CPyL86;
    }
    return cpy_r_r138;
CPyL86: ;
    cpy_r_r139 = NULL;
    return cpy_r_r139;
CPyL87: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_et);
    goto CPyL86;
CPyL89: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_r5);
    goto CPyL86;
CPyL90: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    goto CPyL86;
CPyL91: ;
    CPy_DECREF(cpy_r_et);
    CPy_DECREF(cpy_r_allowed);
    goto CPyL11;
CPyL92: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r19);
    goto CPyL86;
CPyL93: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r23);
    goto CPyL86;
CPyL94: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r29);
    goto CPyL86;
CPyL95: ;
    CPy_DECREF(cpy_r_et);
    CPy_DECREF(cpy_r_allowed);
    CPy_DECREF(cpy_r_r37);
    goto CPyL82;
CPyL96: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    goto CPyL86;
CPyL97: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL29;
CPyL98: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL86;
CPyL99: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL34;
CPyL100: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL86;
CPyL101: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r57);
    goto CPyL86;
CPyL102: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    goto CPyL86;
CPyL103: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    goto CPyL86;
CPyL104: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r64);
    goto CPyL86;
CPyL105: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL86;
CPyL106: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r57);
    goto CPyL86;
CPyL107: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r75);
    goto CPyL86;
CPyL108: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL52;
CPyL109: ;
    CPyTagged_DECREF(cpy_r_arg_num);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL26;
CPyL110: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r87);
    goto CPyL86;
CPyL111: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r102);
    goto CPyL86;
CPyL112: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r104);
    goto CPyL86;
CPyL113: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPyTagged_DecRef(cpy_r_arg_num);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_it);
    goto CPyL86;
CPyL114: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_it);
    CPy_DecRef(cpy_r_r111);
    goto CPyL86;
CPyL115: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_it);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    goto CPyL86;
CPyL116: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_it);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    goto CPyL86;
CPyL117: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_it);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r118);
    goto CPyL86;
CPyL118: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r118);
    goto CPyL86;
CPyL119: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r111);
    goto CPyL86;
CPyL120: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r128);
    goto CPyL86;
}

PyObject *CPyPy_ctypes___array_constructor_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_constructor_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_constructor_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_constructor_callback", 111, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_getitem_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_unboxed;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_index_type;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 151, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 151, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL42;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 151, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL43;
    if (likely(cpy_r_et != Py_None))
        cpy_r_r5 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 153, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL42;
    }
    cpy_r_r6 = CPyDef_ctypes____autounboxed_cdata(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 153, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    cpy_r_unboxed = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 155, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 155, CPyStatic_ctypes___globals, "list", cpy_r_r7);
        goto CPyL44;
    }
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = cpy_r_r11 == 2;
    if (cpy_r_r12) {
        goto CPyL11;
    } else
        goto CPyL45;
CPyL9: ;
    PyErr_SetString(PyExc_AssertionError, "The stub of ctypes.Array.__getitem__ should have exactly one parameter");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 154, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 158, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 158, CPyStatic_ctypes___globals, "list", cpy_r_r14);
        goto CPyL44;
    }
    cpy_r_r16 = CPyList_GetItemShortBorrow(cpy_r_r15, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 158, CPyStatic_ctypes___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 158, CPyStatic_ctypes___globals, "list", cpy_r_r16);
        goto CPyL46;
    }
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 == 2;
    CPy_DECREF(cpy_r_r15);
    if (cpy_r_r21) {
        goto CPyL18;
    } else
        goto CPyL47;
CPyL16: ;
    PyErr_SetString(PyExc_AssertionError, "ctypes.Array.__getitem__'s parameter should not be variadic");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 157, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals, "list", cpy_r_r23);
        goto CPyL44;
    }
    cpy_r_r25 = CPyList_GetItemShortBorrow(cpy_r_r24, 0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals, "list", cpy_r_r25);
        goto CPyL48;
    }
    cpy_r_r27 = CPyList_GetItemShort(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r27);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r24);
    cpy_r_r29 = CPyDef_types___get_proper_type(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 160, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r29);
        goto CPyL44;
    }
    cpy_r_index_type = cpy_r_r30;
    cpy_r_r31 = (PyObject *)CPyType_types___Instance;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_index_type)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL49;
    if (likely(Py_TYPE(cpy_r_index_type) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_index_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 162, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_index_type);
        goto CPyL50;
    }
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_r35)->_type;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r38 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 162, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    if (cpy_r_r38) {
        goto CPyL51;
    } else
        goto CPyL31;
CPyL30: ;
    return cpy_r_unboxed;
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_index_type) == CPyType_types___Instance))
        cpy_r_r39 = cpy_r_index_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 164, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_index_type);
        goto CPyL50;
    }
    cpy_r_r40 = ((mypy___types___InstanceObject *)cpy_r_r39)->_type;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_index_type);
    cpy_r_r41 = CPyStatics[1213]; /* 'builtins.slice' */
    cpy_r_r42 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 164, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (!cpy_r_r42) goto CPyL52;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 165, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_checker___TypeChecker))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 165, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r43);
        goto CPyL44;
    }
    cpy_r_r45 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r46 = PyList_New(1);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 165, CPyStatic_ctypes___globals);
        goto CPyL53;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_unboxed;
    cpy_r_r49 = CPY_GET_METHOD_TRAIT(cpy_r_r44, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r44, cpy_r_r45, cpy_r_r46); /* named_generic_type */
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 165, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    return cpy_r_r49;
CPyL39: ;
    cpy_r_r50 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 166, CPyStatic_ctypes___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r50, CPyType_types___Type)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 166, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r50);
        goto CPyL42;
    }
    return cpy_r_r51;
CPyL42: ;
    cpy_r_r52 = NULL;
    return cpy_r_r52;
CPyL43: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_unboxed);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_unboxed);
    goto CPyL9;
CPyL46: ;
    CPy_DecRef(cpy_r_unboxed);
    CPy_DecRef(cpy_r_r15);
    goto CPyL42;
CPyL47: ;
    CPy_DECREF(cpy_r_unboxed);
    goto CPyL16;
CPyL48: ;
    CPy_DecRef(cpy_r_unboxed);
    CPy_DecRef(cpy_r_r24);
    goto CPyL42;
CPyL49: ;
    CPy_DECREF(cpy_r_unboxed);
    CPy_DECREF(cpy_r_index_type);
    goto CPyL39;
CPyL50: ;
    CPy_DecRef(cpy_r_unboxed);
    CPy_DecRef(cpy_r_index_type);
    goto CPyL42;
CPyL51: ;
    CPy_DECREF(cpy_r_index_type);
    goto CPyL30;
CPyL52: ;
    CPy_DECREF(cpy_r_unboxed);
    goto CPyL39;
CPyL53: ;
    CPy_DecRef(cpy_r_unboxed);
    CPy_DecRef(cpy_r_r44);
    goto CPyL42;
}

PyObject *CPyPy_ctypes___array_getitem_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_getitem_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_getitem_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_getitem_callback", 149, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_setitem_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_allowed;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_index_type;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 171, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 171, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL48;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 171, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL49;
    if (likely(cpy_r_et != Py_None))
        cpy_r_r5 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 173, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL48;
    }
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 173, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checker___TypeChecker))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 173, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r6);
        goto CPyL50;
    }
    cpy_r_r8 = CPyDef_ctypes____autoconvertible_to_cdata(cpy_r_r5, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 173, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    cpy_r_allowed = cpy_r_r8;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 174, CPyStatic_ctypes___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 174, CPyStatic_ctypes___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL51;
    }
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_r10)->_arg_types;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 == 4;
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r15) {
        goto CPyL13;
    } else
        goto CPyL52;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 174, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_types___CallableType))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals, "mypy.types.CallableType", cpy_r_r17);
        goto CPyL51;
    }
    cpy_r_r19 = ((mypy___types___CallableTypeObject *)cpy_r_r18)->_arg_types;
    cpy_r_r20 = CPyList_GetItemShort(cpy_r_r19, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals);
        goto CPyL53;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___Type)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r20);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals);
        goto CPyL51;
    }
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 175, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r22);
        goto CPyL51;
    }
    cpy_r_index_type = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_types___Instance;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_index_type)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL54;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    cpy_r_arg_type = cpy_r_r28;
    if (likely(Py_TYPE(cpy_r_index_type) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_index_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 178, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_index_type);
        goto CPyL55;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r32 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 178, CPyStatic_ctypes___globals);
        goto CPyL55;
    }
    if (cpy_r_r32) {
        goto CPyL56;
    } else
        goto CPyL24;
CPyL23: ;
    cpy_r_arg_type = cpy_r_allowed;
    goto CPyL32;
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_index_type) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_index_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 180, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_index_type);
        goto CPyL55;
    }
    cpy_r_r34 = ((mypy___types___InstanceObject *)cpy_r_r33)->_type;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_index_type);
    cpy_r_r35 = CPyStatics[1213]; /* 'builtins.slice' */
    cpy_r_r36 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 180, CPyStatic_ctypes___globals);
        goto CPyL57;
    }
    if (cpy_r_r36) {
        goto CPyL58;
    } else
        goto CPyL59;
CPyL27: ;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 181, CPyStatic_ctypes___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_checker___TypeChecker))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 181, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r37);
        goto CPyL51;
    }
    cpy_r_r39 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 181, CPyStatic_ctypes___globals);
        goto CPyL60;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    *(PyObject * *)cpy_r_r42 = cpy_r_allowed;
    cpy_r_r43 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_r39, cpy_r_r40); /* named_generic_type */
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 181, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    cpy_r_arg_type = cpy_r_r43;
CPyL32: ;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_arg_type != cpy_r_r44;
    if (!cpy_r_r45) goto CPyL61;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 185, CPyStatic_ctypes___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_types___CallableType))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 185, CPyStatic_ctypes___globals, "mypy.types.CallableType", cpy_r_r46);
        goto CPyL62;
    }
    cpy_r_r48 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_types___CallableType))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals, "mypy.types.CallableType", cpy_r_r48);
        goto CPyL63;
    }
    cpy_r_r50 = ((mypy___types___CallableTypeObject *)cpy_r_r49)->_arg_types;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = CPyList_GetSlice(cpy_r_r50, 0, 2);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals);
        goto CPyL63;
    }
    if (likely(PyList_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals, "list", cpy_r_r51);
        goto CPyL63;
    }
    if (likely(cpy_r_arg_type != Py_None))
        cpy_r_r53 = cpy_r_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_arg_type);
        goto CPyL64;
    }
    cpy_r_r54 = PyList_New(1);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_r53;
    cpy_r_r57 = PyNumber_Add(cpy_r_r52, cpy_r_r54);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 186, CPyStatic_ctypes___globals, "list", cpy_r_r57);
        goto CPyL66;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPY_INT_TAG;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = NULL;
    cpy_r_r71 = NULL;
    cpy_r_r72 = NULL;
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_types___CallableType___copy_modified(cpy_r_r47, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 185, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    return cpy_r_r77;
CPyL45: ;
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 188, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_types___CallableType))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 188, CPyStatic_ctypes___globals, "mypy.types.CallableType", cpy_r_r78);
        goto CPyL48;
    }
    return cpy_r_r79;
CPyL48: ;
    cpy_r_r80 = NULL;
    return cpy_r_r80;
CPyL49: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL48;
CPyL51: ;
    CPy_DecRef(cpy_r_allowed);
    goto CPyL48;
CPyL52: ;
    CPy_DECREF(cpy_r_allowed);
    goto CPyL11;
CPyL53: ;
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r18);
    goto CPyL48;
CPyL54: ;
    CPy_DECREF(cpy_r_allowed);
    CPy_DECREF(cpy_r_index_type);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_index_type);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL48;
CPyL56: ;
    CPy_DECREF(cpy_r_index_type);
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL23;
CPyL57: ;
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL48;
CPyL58: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL27;
CPyL59: ;
    CPy_DECREF(cpy_r_allowed);
    goto CPyL32;
CPyL60: ;
    CPy_DecRef(cpy_r_allowed);
    CPy_DecRef(cpy_r_r38);
    goto CPyL48;
CPyL61: ;
    CPy_DECREF(cpy_r_arg_type);
    goto CPyL45;
CPyL62: ;
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL48;
CPyL63: ;
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r47);
    goto CPyL48;
CPyL64: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    goto CPyL48;
CPyL65: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    goto CPyL48;
CPyL66: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL48;
}

PyObject *CPyPy_ctypes___array_setitem_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_setitem_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_setitem_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_setitem_callback", 169, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_iter_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_unboxed;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 193, CPyStatic_ctypes___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 193, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 193, CPyStatic_ctypes___globals);
        goto CPyL14;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL15;
    if (likely(cpy_r_et != Py_None))
        cpy_r_r5 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 195, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL14;
    }
    cpy_r_r6 = CPyDef_ctypes____autounboxed_cdata(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 195, CPyStatic_ctypes___globals);
        goto CPyL14;
    }
    cpy_r_unboxed = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 196, CPyStatic_ctypes___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_checker___TypeChecker))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 196, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = CPyStatics[3756]; /* 'typing.Iterator' */
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 196, CPyStatic_ctypes___globals);
        goto CPyL17;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    *(PyObject * *)cpy_r_r12 = cpy_r_unboxed;
    cpy_r_r13 = CPY_GET_METHOD_TRAIT(cpy_r_r8, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r8, cpy_r_r9, cpy_r_r10); /* named_generic_type */
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 196, CPyStatic_ctypes___globals);
        goto CPyL14;
    }
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 197, CPyStatic_ctypes___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 197, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL14;
    }
    return cpy_r_r15;
CPyL14: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL15: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_unboxed);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_unboxed);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
}

PyObject *CPyPy_ctypes___array_iter_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_iter_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_iter_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_iter_callback", 191, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_value_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_tp;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    size_t __tmp4796;
    size_t __tmp4797;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 202, CPyStatic_ctypes___globals);
        goto CPyL59;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 202, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL59;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 202, CPyStatic_ctypes___globals);
        goto CPyL59;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL60;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 204, CPyStatic_ctypes___globals);
        goto CPyL61;
    }
    cpy_r_types = cpy_r_r5;
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r6 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 205, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL62;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 205, CPyStatic_ctypes___globals);
        goto CPyL63;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_types___flatten_nested_unions(cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 205, CPyStatic_ctypes___globals);
        goto CPyL62;
    }
    cpy_r_r12 = 0;
CPyL9: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL64;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 205, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL65;
    }
    cpy_r_tp = cpy_r_r18;
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_tp);
    CPy_DECREF(cpy_r_tp);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 206, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 206, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL65;
    }
    cpy_r_tp = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___AnyType))
        cpy_r_r25 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 208, CPyStatic_ctypes___globals, "mypy.types.AnyType", cpy_r_tp);
        goto CPyL65;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPyDef_types___AnyType(14, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 208, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    cpy_r_r30 = PyList_Append(cpy_r_types, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 208, CPyStatic_ctypes___globals);
        goto CPyL65;
    } else
        goto CPyL53;
CPyL17: ;
    cpy_r_r32 = (PyObject *)CPyType_types___Instance;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r36 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 209, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL66;
    }
    cpy_r_r37 = ((mypy___types___InstanceObject *)cpy_r_r36)->_type;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPY_GET_ATTR(cpy_r_r37, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 209, CPyStatic_ctypes___globals);
        goto CPyL66;
    }
CPyL20: ;
    cpy_r_r39 = CPyStatics[4488]; /* 'ctypes.c_char' */
    cpy_r_r40 = PyUnicode_Compare(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r41 = cpy_r_r40 == -1;
    if (!cpy_r_r41) goto CPyL23;
    cpy_r_r42 = PyErr_Occurred();
    cpy_r_r43 = cpy_r_r42 != NULL;
    if (!cpy_r_r43) goto CPyL23;
    cpy_r_r44 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 209, CPyStatic_ctypes___globals);
        goto CPyL66;
    }
CPyL23: ;
    cpy_r_r45 = cpy_r_r40 == 0;
    if (cpy_r_r45) {
        goto CPyL67;
    } else
        goto CPyL29;
CPyL24: ;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 210, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_checker___TypeChecker))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 210, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r46);
        goto CPyL65;
    }
    cpy_r_r48 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r49 = PyList_New(0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 210, CPyStatic_ctypes___globals);
        goto CPyL68;
    }
    cpy_r_r50 = CPY_GET_METHOD_TRAIT(cpy_r_r47, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r47, cpy_r_r48, cpy_r_r49); /* named_generic_type */
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 210, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    cpy_r_r51 = PyList_Append(cpy_r_types, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 210, CPyStatic_ctypes___globals);
        goto CPyL65;
    } else
        goto CPyL53;
CPyL29: ;
    cpy_r_r53 = (PyObject *)CPyType_types___Instance;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL69;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r57 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 211, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL66;
    }
    cpy_r_r58 = ((mypy___types___InstanceObject *)cpy_r_r57)->_type;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r59 = CPY_GET_ATTR(cpy_r_r58, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 211, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
CPyL32: ;
    cpy_r_r60 = CPyStatics[4489]; /* 'ctypes.c_wchar' */
    cpy_r_r61 = PyUnicode_Compare(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL35;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL35;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 211, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
CPyL35: ;
    cpy_r_r66 = cpy_r_r61 == 0;
    if (!cpy_r_r66) goto CPyL41;
    cpy_r_r67 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 212, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_checker___TypeChecker))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 212, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r67);
        goto CPyL65;
    }
    cpy_r_r69 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r70 = PyList_New(0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 212, CPyStatic_ctypes___globals);
        goto CPyL70;
    }
    cpy_r_r71 = CPY_GET_METHOD_TRAIT(cpy_r_r68, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r68, cpy_r_r69, cpy_r_r70); /* named_generic_type */
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 212, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    cpy_r_r72 = PyList_Append(cpy_r_types, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 212, CPyStatic_ctypes___globals);
        goto CPyL65;
    } else
        goto CPyL53;
CPyL41: ;
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 214, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_checker___TypeChecker))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 214, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r74);
        goto CPyL65;
    }
    __tmp4796 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r75)->vtable, 0);
    cpy_r_r76 = *(PyObject * *)((char *)cpy_r_r75 + __tmp4796);
    if (unlikely(cpy_r_r76 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r76);
    }
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 214, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
CPyL44: ;
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r77 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 217, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL71;
    }
    cpy_r_r78 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 217, CPyStatic_ctypes___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_r78) == CPyType_checker___TypeChecker))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 217, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r78);
        goto CPyL72;
    }
    __tmp4797 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r79)->vtable, 1);
    cpy_r_r80 = *(PyObject * *)((char *)cpy_r_r79 + __tmp4797);
    if (unlikely(cpy_r_r80 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r80);
    }
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 217, CPyStatic_ctypes___globals);
        goto CPyL72;
    }
CPyL48: ;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = 2;
    cpy_r_r83 = CPyDef_messages___format_type(cpy_r_r77, cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 217, CPyStatic_ctypes___globals);
        goto CPyL71;
    }
    cpy_r_r84 = CPyStatics[4490]; /* ('Array attribute "value" is only available with '
                                     'element type "c_char" or "c_wchar", not ') */
    cpy_r_r85 = CPyStr_Build(2, cpy_r_r84, cpy_r_r83);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 215, CPyStatic_ctypes___globals);
        goto CPyL71;
    }
    cpy_r_r86 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 219, CPyStatic_ctypes___globals);
        goto CPyL73;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Context)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 219, CPyStatic_ctypes___globals, "mypy.nodes.Context", cpy_r_r86);
        goto CPyL73;
    }
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = 2;
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPyDef_messages___MessageBuilder___fail(cpy_r_r76, cpy_r_r85, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 214, CPyStatic_ctypes___globals);
        goto CPyL65;
    }
CPyL53: ;
    cpy_r_r93 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r93;
    goto CPyL9;
CPyL54: ;
    cpy_r_r94 = CPY_INT_TAG;
    cpy_r_r95 = CPY_INT_TAG;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 221, CPyStatic_ctypes___globals);
        goto CPyL59;
    }
    return cpy_r_r98;
CPyL56: ;
    cpy_r_r99 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 222, CPyStatic_ctypes___globals);
        goto CPyL59;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r99, CPyType_types___Type)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_value_callback", 222, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r99);
        goto CPyL59;
    }
    return cpy_r_r100;
CPyL59: ;
    cpy_r_r101 = NULL;
    return cpy_r_r101;
CPyL60: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL56;
CPyL61: ;
    CPy_DecRef(cpy_r_et);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    goto CPyL59;
CPyL63: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r6);
    goto CPyL59;
CPyL64: ;
    CPy_DECREF(cpy_r_et);
    CPy_DECREF(cpy_r_r11);
    goto CPyL54;
CPyL65: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    goto CPyL59;
CPyL66: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_tp);
    goto CPyL59;
CPyL67: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL24;
CPyL68: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r47);
    goto CPyL59;
CPyL69: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL41;
CPyL70: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r68);
    goto CPyL59;
CPyL71: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r76);
    goto CPyL59;
CPyL72: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r77);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r85);
    goto CPyL59;
}

PyObject *CPyPy_ctypes___array_value_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_value_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_value_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_value_callback", 200, CPyStatic_ctypes___globals);
    return NULL;
}

PyObject *CPyDef_ctypes___array_raw_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_et;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_tp;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
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
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    size_t __tmp4798;
    size_t __tmp4799;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 227, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 227, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL44;
    }
    cpy_r_r2 = CPyDef_ctypes____get_array_element_type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 227, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    cpy_r_et = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_et != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL45;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 229, CPyStatic_ctypes___globals);
        goto CPyL46;
    }
    cpy_r_types = cpy_r_r5;
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r6 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 230, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL47;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 230, CPyStatic_ctypes___globals);
        goto CPyL48;
    }
    cpy_r_r8 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r9 = *(CPyPtr *)cpy_r_r8;
    *(PyObject * *)cpy_r_r9 = cpy_r_r6;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_types___flatten_nested_unions(cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 230, CPyStatic_ctypes___globals);
        goto CPyL47;
    }
    cpy_r_r12 = 0;
CPyL9: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL49;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 230, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL50;
    }
    cpy_r_tp = cpy_r_r18;
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_tp);
    CPy_DECREF(cpy_r_tp);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 231, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 231, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL50;
    }
    cpy_r_tp = cpy_r_r20;
    cpy_r_r21 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (cpy_r_r24) goto CPyL51;
    cpy_r_r25 = (PyObject *)CPyType_types___Instance;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_tp)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (!cpy_r_r28) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_tp) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_tp;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 235, CPyStatic_ctypes___globals, "mypy.types.Instance", cpy_r_tp);
        goto CPyL53;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_tp);
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 235, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
CPyL17: ;
    cpy_r_r32 = CPyStatics[4488]; /* 'ctypes.c_char' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL20;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL20;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 235, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
CPyL20: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL26;
CPyL21: ;
    cpy_r_r39 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 237, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_checker___TypeChecker))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 237, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r39);
        goto CPyL50;
    }
    cpy_r_r41 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r42 = PyList_New(0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 237, CPyStatic_ctypes___globals);
        goto CPyL54;
    }
    cpy_r_r43 = CPY_GET_METHOD_TRAIT(cpy_r_r40, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r40, cpy_r_r41, cpy_r_r42); /* named_generic_type */
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 237, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    cpy_r_r44 = PyList_Append(cpy_r_types, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 237, CPyStatic_ctypes___globals);
        goto CPyL50;
    } else
        goto CPyL38;
CPyL26: ;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 239, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_checker___TypeChecker))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 239, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r46);
        goto CPyL50;
    }
    __tmp4798 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r47)->vtable, 0);
    cpy_r_r48 = *(PyObject * *)((char *)cpy_r_r47 + __tmp4798);
    if (unlikely(cpy_r_r48 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r48);
    }
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 239, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
CPyL29: ;
    CPy_INCREF(cpy_r_et);
    if (likely(cpy_r_et != Py_None))
        cpy_r_r49 = cpy_r_et;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 241, CPyStatic_ctypes___globals, "mypy.types.ProperType", cpy_r_et);
        goto CPyL55;
    }
    cpy_r_r50 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 241, CPyStatic_ctypes___globals);
        goto CPyL56;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_checker___TypeChecker))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 241, CPyStatic_ctypes___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r50);
        goto CPyL56;
    }
    __tmp4799 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r51)->vtable, 1);
    cpy_r_r52 = *(PyObject * *)((char *)cpy_r_r51 + __tmp4799);
    if (unlikely(cpy_r_r52 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r52);
    }
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 241, CPyStatic_ctypes___globals);
        goto CPyL56;
    }
CPyL33: ;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = 2;
    cpy_r_r55 = CPyDef_messages___format_type(cpy_r_r49, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 241, CPyStatic_ctypes___globals);
        goto CPyL55;
    }
    cpy_r_r56 = CPyStatics[4491]; /* ('Array attribute "raw" is only available with element '
                                     'type "c_char", not ') */
    cpy_r_r57 = CPyStr_Build(2, cpy_r_r56, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 240, CPyStatic_ctypes___globals);
        goto CPyL55;
    }
    cpy_r_r58 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 242, CPyStatic_ctypes___globals);
        goto CPyL57;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r58, CPyType_nodes___Context)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 242, CPyStatic_ctypes___globals, "mypy.nodes.Context", cpy_r_r58);
        goto CPyL57;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = 2;
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_messages___MessageBuilder___fail(cpy_r_r48, cpy_r_r57, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 239, CPyStatic_ctypes___globals);
        goto CPyL50;
    }
CPyL38: ;
    cpy_r_r65 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r65;
    goto CPyL9;
CPyL39: ;
    cpy_r_r66 = CPY_INT_TAG;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = 2;
    cpy_r_r69 = 2;
    cpy_r_r70 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 244, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    return cpy_r_r70;
CPyL41: ;
    cpy_r_r71 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 245, CPyStatic_ctypes___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_types___Type)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 245, CPyStatic_ctypes___globals, "mypy.types.Type", cpy_r_r71);
        goto CPyL44;
    }
    return cpy_r_r72;
CPyL44: ;
    cpy_r_r73 = NULL;
    return cpy_r_r73;
CPyL45: ;
    CPy_DECREF(cpy_r_et);
    goto CPyL41;
CPyL46: ;
    CPy_DecRef(cpy_r_et);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r6);
    goto CPyL44;
CPyL49: ;
    CPy_DECREF(cpy_r_et);
    CPy_DECREF(cpy_r_r11);
    goto CPyL39;
CPyL50: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    goto CPyL44;
CPyL51: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL21;
CPyL52: ;
    CPy_DECREF(cpy_r_tp);
    goto CPyL26;
CPyL53: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_tp);
    goto CPyL44;
CPyL54: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r40);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r48);
    goto CPyL44;
CPyL56: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL44;
CPyL57: ;
    CPy_DecRef(cpy_r_et);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r57);
    goto CPyL44;
}

PyObject *CPyPy_ctypes___array_raw_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:array_raw_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_ctypes___array_raw_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/ctypes.py", "array_raw_callback", 225, CPyStatic_ctypes___globals);
    return NULL;
}

char CPyDef_ctypes_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
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
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", -1, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_ctypes___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 3, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_mypy___plugin;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {6};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9582]; /* (('mypy.plugin', 'mypy', 'mypy'),) */
    cpy_r_r15 = CPyStatic_ctypes___globals;
    cpy_r_r16 = CPyStatics[4492]; /* 'mypy/plugins/ctypes.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPyStatics[9080]; /* ('nodes',) */
    cpy_r_r20 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r21 = CPyStatic_ctypes___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 7, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy = cpy_r_r22;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r24 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r25 = CPyStatic_ctypes___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 8, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy___maptype = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9432]; /* ('format_type',) */
    cpy_r_r28 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r29 = CPyStatic_ctypes___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 9, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy___messages = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r32 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r33 = CPyStatic_ctypes___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 10, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy___subtypes = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9357]; /* ('make_simplified_union',) */
    cpy_r_r36 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r37 = CPyStatic_ctypes___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 11, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy___typeops = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9604]; /* ('AnyType', 'CallableType', 'Instance', 'NoneType',
                                     'ProperType', 'Type', 'TypeOfAny', 'UnionType',
                                     'flatten_nested_unions', 'get_proper_type') */
    cpy_r_r40 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r41 = CPyStatic_ctypes___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/ctypes.py", "<module>", 12, CPyStatic_ctypes___globals);
        goto CPyL12;
    }
    CPyModule_mypy___types = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r42);
    return 1;
CPyL12: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
}
