#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef registrymodule_methods[] = {
    {"method_op", (PyCFunction)CPyPy_registry___method_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"function_op", (PyCFunction)CPyPy_registry___function_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"binary_op", (PyCFunction)CPyPy_registry___binary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"custom_op", (PyCFunction)CPyPy_registry___custom_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unary_op", (PyCFunction)CPyPy_registry___unary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_address_op", (PyCFunction)CPyPy_registry___load_address_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef registrymodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.primitives.registry",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    registrymodule_methods
};

PyObject *CPyInit_mypyc___primitives___registry(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___primitives___registry_internal) {
        Py_INCREF(CPyModule_mypyc___primitives___registry_internal);
        return CPyModule_mypyc___primitives___registry_internal;
    }
    CPyModule_mypyc___primitives___registry_internal = PyModule_Create(&registrymodule);
    if (unlikely(CPyModule_mypyc___primitives___registry_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___primitives___registry_internal, "__name__");
    CPyStatic_registry___globals = PyModule_GetDict(CPyModule_mypyc___primitives___registry_internal);
    if (unlikely(CPyStatic_registry___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_registry_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___primitives___registry_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___primitives___registry_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_registry___mypyc___primitives___registry___method_op___extra_int_constants);
    CPyStatic_registry___mypyc___primitives___registry___method_op___extra_int_constants = NULL;
    CPy_XDECREF(CPyStatic_registry___mypyc___primitives___registry___function_op___extra_int_constants);
    CPyStatic_registry___mypyc___primitives___registry___function_op___extra_int_constants = NULL;
    CPy_XDECREF(CPyStatic_registry___mypyc___primitives___registry___binary_op___extra_int_constants);
    CPyStatic_registry___mypyc___primitives___registry___binary_op___extra_int_constants = NULL;
    CPy_XDECREF(CPyStatic_registry___mypyc___primitives___registry___custom_op___extra_int_constants);
    CPyStatic_registry___mypyc___primitives___registry___custom_op___extra_int_constants = NULL;
    CPy_XDECREF(CPyStatic_registry___mypyc___primitives___registry___unary_op___extra_int_constants);
    CPyStatic_registry___mypyc___primitives___registry___unary_op___extra_int_constants = NULL;
    Py_CLEAR(CPyType_registry___CFunctionDescription);
    Py_CLEAR(CPyType_registry___LoadAddressDescription);
    return NULL;
}

PyObject *CPyDef_registry___method_op(PyObject *cpy_r_name, PyObject *cpy_r_arg_types, PyObject *cpy_r_return_type, PyObject *cpy_r_c_function_name, CPyTagged cpy_r_error_kind, PyObject *cpy_r_var_arg_type, PyObject *cpy_r_truncated_type, PyObject *cpy_r_ordering, PyObject *cpy_r_extra_int_constants, PyObject *cpy_r_steals, char cpy_r_is_borrowed, CPyTagged cpy_r_priority) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_desc;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_var_arg_type != NULL) goto CPyL24;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_var_arg_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_truncated_type != NULL) goto CPyL25;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_truncated_type = cpy_r_r1;
CPyL4: ;
    if (cpy_r_ordering != NULL) goto CPyL26;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_ordering = cpy_r_r2;
CPyL6: ;
    if (cpy_r_extra_int_constants != NULL) goto CPyL27;
    cpy_r_r3 = CPyStatic_registry___mypyc___primitives___registry___method_op___extra_int_constants;
    CPy_INCREF(cpy_r_r3);
    cpy_r_extra_int_constants = cpy_r_r3;
CPyL8: ;
    if (cpy_r_steals != NULL) goto CPyL28;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    cpy_r_steals = cpy_r_r4;
CPyL10: ;
    if (cpy_r_is_borrowed != 2) goto CPyL12;
    cpy_r_is_borrowed = 0;
CPyL12: ;
    if (cpy_r_priority != CPY_INT_TAG) goto CPyL29;
    cpy_r_priority = 2;
CPyL14: ;
    cpy_r_r5 = CPyStatic_registry___globals;
    cpy_r_r6 = CPyStatics[8436]; /* 'method_call_ops' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 125, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "method_op", 125, CPyStatic_registry___globals, "dict", cpy_r_r7);
        goto CPyL30;
    }
    cpy_r_r9 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r8, cpy_r_name, 1);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 125, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "method_op", 125, CPyStatic_registry___globals, "list", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_ops = cpy_r_r10;
    cpy_r_r11 = CPyStatic_registry___globals;
    cpy_r_r12 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 126, CPyStatic_registry___globals);
        goto CPyL31;
    }
    CPyTagged_INCREF(cpy_r_error_kind);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_error_kind);
    cpy_r_r15 = cpy_r_is_borrowed ? Py_True : Py_False;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_priority);
    PyObject *cpy_r_r17[12] = {
        cpy_r_name, cpy_r_arg_types, cpy_r_return_type,
        cpy_r_var_arg_type, cpy_r_truncated_type, cpy_r_c_function_name,
        cpy_r_r14, cpy_r_steals, cpy_r_r15, cpy_r_ordering,
        cpy_r_extra_int_constants, cpy_r_r16
    };
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r18, 12, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 126, CPyStatic_registry___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_var_arg_type);
    CPy_DECREF(cpy_r_truncated_type);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_steals);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_extra_int_constants);
    CPy_DECREF(cpy_r_r16);
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "method_op", 126, CPyStatic_registry___globals, "tuple", cpy_r_r19);
        goto CPyL33;
    }
    cpy_r_desc = cpy_r_r20;
    cpy_r_r21 = PyList_Append(cpy_r_ops, cpy_r_desc);
    CPy_DECREF(cpy_r_ops);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 140, CPyStatic_registry___globals);
        goto CPyL34;
    }
    return cpy_r_desc;
CPyL23: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL24: ;
    CPy_INCREF(cpy_r_var_arg_type);
    goto CPyL2;
CPyL25: ;
    CPy_INCREF(cpy_r_truncated_type);
    goto CPyL4;
CPyL26: ;
    CPy_INCREF(cpy_r_ordering);
    goto CPyL6;
CPyL27: ;
    CPy_INCREF(cpy_r_extra_int_constants);
    goto CPyL8;
CPyL28: ;
    CPy_INCREF(cpy_r_steals);
    goto CPyL10;
CPyL29: ;
    CPyTagged_INCREF(cpy_r_priority);
    goto CPyL14;
CPyL30: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_desc);
    goto CPyL23;
}

PyObject *CPyPy_registry___method_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "arg_types", "return_type", "c_function_name", "error_kind", "var_arg_type", "truncated_type", "ordering", "extra_int_constants", "steals", "is_borrowed", "priority", 0};
    static CPyArg_Parser parser = {"OOOOO|OOOOOOO:method_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_arg_types;
    PyObject *obj_return_type;
    PyObject *obj_c_function_name;
    PyObject *obj_error_kind;
    PyObject *obj_var_arg_type = NULL;
    PyObject *obj_truncated_type = NULL;
    PyObject *obj_ordering = NULL;
    PyObject *obj_extra_int_constants = NULL;
    PyObject *obj_steals = NULL;
    PyObject *obj_is_borrowed = NULL;
    PyObject *obj_priority = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_arg_types, &obj_return_type, &obj_c_function_name, &obj_error_kind, &obj_var_arg_type, &obj_truncated_type, &obj_ordering, &obj_extra_int_constants, &obj_steals, &obj_is_borrowed, &obj_priority)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_arg_types;
    if (likely(PyList_Check(obj_arg_types)))
        arg_arg_types = obj_arg_types;
    else {
        CPy_TypeError("list", obj_arg_types); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    PyObject *arg_var_arg_type;
    if (obj_var_arg_type == NULL) {
        arg_var_arg_type = NULL;
        goto __LL10783;
    }
    if (PyObject_TypeCheck(obj_var_arg_type, CPyType_rtypes___RType))
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10783;
    if (obj_var_arg_type == Py_None)
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10783;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_var_arg_type); 
    goto fail;
__LL10783: ;
    PyObject *arg_truncated_type;
    if (obj_truncated_type == NULL) {
        arg_truncated_type = NULL;
        goto __LL10784;
    }
    if (PyObject_TypeCheck(obj_truncated_type, CPyType_rtypes___RType))
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10784;
    if (obj_truncated_type == Py_None)
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10784;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_truncated_type); 
    goto fail;
__LL10784: ;
    PyObject *arg_ordering;
    if (obj_ordering == NULL) {
        arg_ordering = NULL;
        goto __LL10785;
    }
    if (PyList_Check(obj_ordering))
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10785;
    if (obj_ordering == Py_None)
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10785;
    CPy_TypeError("list or None", obj_ordering); 
    goto fail;
__LL10785: ;
    PyObject *arg_extra_int_constants;
    if (obj_extra_int_constants == NULL) {
        arg_extra_int_constants = NULL;
    } else if (likely(PyList_Check(obj_extra_int_constants)))
        arg_extra_int_constants = obj_extra_int_constants;
    else {
        CPy_TypeError("list", obj_extra_int_constants); 
        goto fail;
    }
    PyObject *arg_steals;
    if (obj_steals == NULL) {
        arg_steals = NULL;
        goto __LL10786;
    }
    if (PyBool_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10786;
    if (PyList_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10786;
    CPy_TypeError("union[bool, list]", obj_steals); 
    goto fail;
__LL10786: ;
    char arg_is_borrowed;
    if (obj_is_borrowed == NULL) {
        arg_is_borrowed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_borrowed))) {
        CPy_TypeError("bool", obj_is_borrowed); goto fail;
    } else
        arg_is_borrowed = obj_is_borrowed == Py_True;
    CPyTagged arg_priority;
    if (obj_priority == NULL) {
        arg_priority = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    PyObject *retval = CPyDef_registry___method_op(arg_name, arg_arg_types, arg_return_type, arg_c_function_name, arg_error_kind, arg_var_arg_type, arg_truncated_type, arg_ordering, arg_extra_int_constants, arg_steals, arg_is_borrowed, arg_priority);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "method_op", 87, CPyStatic_registry___globals);
    return NULL;
}

PyObject *CPyDef_registry___function_op(PyObject *cpy_r_name, PyObject *cpy_r_arg_types, PyObject *cpy_r_return_type, PyObject *cpy_r_c_function_name, CPyTagged cpy_r_error_kind, PyObject *cpy_r_var_arg_type, PyObject *cpy_r_truncated_type, PyObject *cpy_r_ordering, PyObject *cpy_r_extra_int_constants, PyObject *cpy_r_steals, char cpy_r_is_borrowed, CPyTagged cpy_r_priority) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_desc;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_var_arg_type != NULL) goto CPyL24;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_var_arg_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_truncated_type != NULL) goto CPyL25;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_truncated_type = cpy_r_r1;
CPyL4: ;
    if (cpy_r_ordering != NULL) goto CPyL26;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_ordering = cpy_r_r2;
CPyL6: ;
    if (cpy_r_extra_int_constants != NULL) goto CPyL27;
    cpy_r_r3 = CPyStatic_registry___mypyc___primitives___registry___function_op___extra_int_constants;
    CPy_INCREF(cpy_r_r3);
    cpy_r_extra_int_constants = cpy_r_r3;
CPyL8: ;
    if (cpy_r_steals != NULL) goto CPyL28;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    cpy_r_steals = cpy_r_r4;
CPyL10: ;
    if (cpy_r_is_borrowed != 2) goto CPyL12;
    cpy_r_is_borrowed = 0;
CPyL12: ;
    if (cpy_r_priority != CPY_INT_TAG) goto CPyL29;
    cpy_r_priority = 2;
CPyL14: ;
    cpy_r_r5 = CPyStatic_registry___globals;
    cpy_r_r6 = CPyStatics[8077]; /* 'function_ops' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 168, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "function_op", 168, CPyStatic_registry___globals, "dict", cpy_r_r7);
        goto CPyL30;
    }
    cpy_r_r9 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r8, cpy_r_name, 1);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 168, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "function_op", 168, CPyStatic_registry___globals, "list", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_ops = cpy_r_r10;
    cpy_r_r11 = CPyStatic_registry___globals;
    cpy_r_r12 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 169, CPyStatic_registry___globals);
        goto CPyL31;
    }
    CPyTagged_INCREF(cpy_r_error_kind);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_error_kind);
    cpy_r_r15 = cpy_r_is_borrowed ? Py_True : Py_False;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_priority);
    PyObject *cpy_r_r17[12] = {
        cpy_r_name, cpy_r_arg_types, cpy_r_return_type,
        cpy_r_var_arg_type, cpy_r_truncated_type, cpy_r_c_function_name,
        cpy_r_r14, cpy_r_steals, cpy_r_r15, cpy_r_ordering,
        cpy_r_extra_int_constants, cpy_r_r16
    };
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r18, 12, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 169, CPyStatic_registry___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_var_arg_type);
    CPy_DECREF(cpy_r_truncated_type);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_steals);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_extra_int_constants);
    CPy_DECREF(cpy_r_r16);
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "function_op", 169, CPyStatic_registry___globals, "tuple", cpy_r_r19);
        goto CPyL33;
    }
    cpy_r_desc = cpy_r_r20;
    cpy_r_r21 = PyList_Append(cpy_r_ops, cpy_r_desc);
    CPy_DECREF(cpy_r_ops);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 183, CPyStatic_registry___globals);
        goto CPyL34;
    }
    return cpy_r_desc;
CPyL23: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL24: ;
    CPy_INCREF(cpy_r_var_arg_type);
    goto CPyL2;
CPyL25: ;
    CPy_INCREF(cpy_r_truncated_type);
    goto CPyL4;
CPyL26: ;
    CPy_INCREF(cpy_r_ordering);
    goto CPyL6;
CPyL27: ;
    CPy_INCREF(cpy_r_extra_int_constants);
    goto CPyL8;
CPyL28: ;
    CPy_INCREF(cpy_r_steals);
    goto CPyL10;
CPyL29: ;
    CPyTagged_INCREF(cpy_r_priority);
    goto CPyL14;
CPyL30: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_desc);
    goto CPyL23;
}

PyObject *CPyPy_registry___function_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "arg_types", "return_type", "c_function_name", "error_kind", "var_arg_type", "truncated_type", "ordering", "extra_int_constants", "steals", "is_borrowed", "priority", 0};
    static CPyArg_Parser parser = {"OOOOO|OOOOOOO:function_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_arg_types;
    PyObject *obj_return_type;
    PyObject *obj_c_function_name;
    PyObject *obj_error_kind;
    PyObject *obj_var_arg_type = NULL;
    PyObject *obj_truncated_type = NULL;
    PyObject *obj_ordering = NULL;
    PyObject *obj_extra_int_constants = NULL;
    PyObject *obj_steals = NULL;
    PyObject *obj_is_borrowed = NULL;
    PyObject *obj_priority = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_arg_types, &obj_return_type, &obj_c_function_name, &obj_error_kind, &obj_var_arg_type, &obj_truncated_type, &obj_ordering, &obj_extra_int_constants, &obj_steals, &obj_is_borrowed, &obj_priority)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_arg_types;
    if (likely(PyList_Check(obj_arg_types)))
        arg_arg_types = obj_arg_types;
    else {
        CPy_TypeError("list", obj_arg_types); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    PyObject *arg_var_arg_type;
    if (obj_var_arg_type == NULL) {
        arg_var_arg_type = NULL;
        goto __LL10787;
    }
    if (PyObject_TypeCheck(obj_var_arg_type, CPyType_rtypes___RType))
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10787;
    if (obj_var_arg_type == Py_None)
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10787;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_var_arg_type); 
    goto fail;
__LL10787: ;
    PyObject *arg_truncated_type;
    if (obj_truncated_type == NULL) {
        arg_truncated_type = NULL;
        goto __LL10788;
    }
    if (PyObject_TypeCheck(obj_truncated_type, CPyType_rtypes___RType))
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10788;
    if (obj_truncated_type == Py_None)
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10788;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_truncated_type); 
    goto fail;
__LL10788: ;
    PyObject *arg_ordering;
    if (obj_ordering == NULL) {
        arg_ordering = NULL;
        goto __LL10789;
    }
    if (PyList_Check(obj_ordering))
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10789;
    if (obj_ordering == Py_None)
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10789;
    CPy_TypeError("list or None", obj_ordering); 
    goto fail;
__LL10789: ;
    PyObject *arg_extra_int_constants;
    if (obj_extra_int_constants == NULL) {
        arg_extra_int_constants = NULL;
    } else if (likely(PyList_Check(obj_extra_int_constants)))
        arg_extra_int_constants = obj_extra_int_constants;
    else {
        CPy_TypeError("list", obj_extra_int_constants); 
        goto fail;
    }
    PyObject *arg_steals;
    if (obj_steals == NULL) {
        arg_steals = NULL;
        goto __LL10790;
    }
    if (PyBool_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10790;
    if (PyList_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10790;
    CPy_TypeError("union[bool, list]", obj_steals); 
    goto fail;
__LL10790: ;
    char arg_is_borrowed;
    if (obj_is_borrowed == NULL) {
        arg_is_borrowed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_borrowed))) {
        CPy_TypeError("bool", obj_is_borrowed); goto fail;
    } else
        arg_is_borrowed = obj_is_borrowed == Py_True;
    CPyTagged arg_priority;
    if (obj_priority == NULL) {
        arg_priority = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    PyObject *retval = CPyDef_registry___function_op(arg_name, arg_arg_types, arg_return_type, arg_c_function_name, arg_error_kind, arg_var_arg_type, arg_truncated_type, arg_ordering, arg_extra_int_constants, arg_steals, arg_is_borrowed, arg_priority);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "function_op", 144, CPyStatic_registry___globals);
    return NULL;
}

PyObject *CPyDef_registry___binary_op(PyObject *cpy_r_name, PyObject *cpy_r_arg_types, PyObject *cpy_r_return_type, PyObject *cpy_r_c_function_name, CPyTagged cpy_r_error_kind, PyObject *cpy_r_var_arg_type, PyObject *cpy_r_truncated_type, PyObject *cpy_r_ordering, PyObject *cpy_r_extra_int_constants, PyObject *cpy_r_steals, char cpy_r_is_borrowed, CPyTagged cpy_r_priority) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_desc;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_var_arg_type != NULL) goto CPyL24;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_var_arg_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_truncated_type != NULL) goto CPyL25;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_truncated_type = cpy_r_r1;
CPyL4: ;
    if (cpy_r_ordering != NULL) goto CPyL26;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_ordering = cpy_r_r2;
CPyL6: ;
    if (cpy_r_extra_int_constants != NULL) goto CPyL27;
    cpy_r_r3 = CPyStatic_registry___mypyc___primitives___registry___binary_op___extra_int_constants;
    CPy_INCREF(cpy_r_r3);
    cpy_r_extra_int_constants = cpy_r_r3;
CPyL8: ;
    if (cpy_r_steals != NULL) goto CPyL28;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    cpy_r_steals = cpy_r_r4;
CPyL10: ;
    if (cpy_r_is_borrowed != 2) goto CPyL12;
    cpy_r_is_borrowed = 0;
CPyL12: ;
    if (cpy_r_priority != CPY_INT_TAG) goto CPyL29;
    cpy_r_priority = 2;
CPyL14: ;
    cpy_r_r5 = CPyStatic_registry___globals;
    cpy_r_r6 = CPyStatics[8404]; /* 'binary_ops' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 208, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "binary_op", 208, CPyStatic_registry___globals, "dict", cpy_r_r7);
        goto CPyL30;
    }
    cpy_r_r9 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r8, cpy_r_name, 1);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 208, CPyStatic_registry___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "binary_op", 208, CPyStatic_registry___globals, "list", cpy_r_r9);
        goto CPyL30;
    }
    cpy_r_ops = cpy_r_r10;
    cpy_r_r11 = CPyStatic_registry___globals;
    cpy_r_r12 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 209, CPyStatic_registry___globals);
        goto CPyL31;
    }
    CPyTagged_INCREF(cpy_r_error_kind);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_error_kind);
    cpy_r_r15 = cpy_r_is_borrowed ? Py_True : Py_False;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_priority);
    PyObject *cpy_r_r17[12] = {
        cpy_r_name, cpy_r_arg_types, cpy_r_return_type,
        cpy_r_var_arg_type, cpy_r_truncated_type, cpy_r_c_function_name,
        cpy_r_r14, cpy_r_steals, cpy_r_r15, cpy_r_ordering,
        cpy_r_extra_int_constants, cpy_r_r16
    };
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r18, 12, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 209, CPyStatic_registry___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_var_arg_type);
    CPy_DECREF(cpy_r_truncated_type);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_steals);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_extra_int_constants);
    CPy_DECREF(cpy_r_r16);
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "binary_op", 209, CPyStatic_registry___globals, "tuple", cpy_r_r19);
        goto CPyL33;
    }
    cpy_r_desc = cpy_r_r20;
    cpy_r_r21 = PyList_Append(cpy_r_ops, cpy_r_desc);
    CPy_DECREF(cpy_r_ops);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 223, CPyStatic_registry___globals);
        goto CPyL34;
    }
    return cpy_r_desc;
CPyL23: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL24: ;
    CPy_INCREF(cpy_r_var_arg_type);
    goto CPyL2;
CPyL25: ;
    CPy_INCREF(cpy_r_truncated_type);
    goto CPyL4;
CPyL26: ;
    CPy_INCREF(cpy_r_ordering);
    goto CPyL6;
CPyL27: ;
    CPy_INCREF(cpy_r_extra_int_constants);
    goto CPyL8;
CPyL28: ;
    CPy_INCREF(cpy_r_steals);
    goto CPyL10;
CPyL29: ;
    CPyTagged_INCREF(cpy_r_priority);
    goto CPyL14;
CPyL30: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_ops);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_desc);
    goto CPyL23;
}

PyObject *CPyPy_registry___binary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "arg_types", "return_type", "c_function_name", "error_kind", "var_arg_type", "truncated_type", "ordering", "extra_int_constants", "steals", "is_borrowed", "priority", 0};
    static CPyArg_Parser parser = {"OOOOO|OOOOOOO:binary_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_arg_types;
    PyObject *obj_return_type;
    PyObject *obj_c_function_name;
    PyObject *obj_error_kind;
    PyObject *obj_var_arg_type = NULL;
    PyObject *obj_truncated_type = NULL;
    PyObject *obj_ordering = NULL;
    PyObject *obj_extra_int_constants = NULL;
    PyObject *obj_steals = NULL;
    PyObject *obj_is_borrowed = NULL;
    PyObject *obj_priority = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_arg_types, &obj_return_type, &obj_c_function_name, &obj_error_kind, &obj_var_arg_type, &obj_truncated_type, &obj_ordering, &obj_extra_int_constants, &obj_steals, &obj_is_borrowed, &obj_priority)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_arg_types;
    if (likely(PyList_Check(obj_arg_types)))
        arg_arg_types = obj_arg_types;
    else {
        CPy_TypeError("list", obj_arg_types); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    PyObject *arg_var_arg_type;
    if (obj_var_arg_type == NULL) {
        arg_var_arg_type = NULL;
        goto __LL10791;
    }
    if (PyObject_TypeCheck(obj_var_arg_type, CPyType_rtypes___RType))
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10791;
    if (obj_var_arg_type == Py_None)
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10791;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_var_arg_type); 
    goto fail;
__LL10791: ;
    PyObject *arg_truncated_type;
    if (obj_truncated_type == NULL) {
        arg_truncated_type = NULL;
        goto __LL10792;
    }
    if (PyObject_TypeCheck(obj_truncated_type, CPyType_rtypes___RType))
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10792;
    if (obj_truncated_type == Py_None)
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10792;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_truncated_type); 
    goto fail;
__LL10792: ;
    PyObject *arg_ordering;
    if (obj_ordering == NULL) {
        arg_ordering = NULL;
        goto __LL10793;
    }
    if (PyList_Check(obj_ordering))
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10793;
    if (obj_ordering == Py_None)
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10793;
    CPy_TypeError("list or None", obj_ordering); 
    goto fail;
__LL10793: ;
    PyObject *arg_extra_int_constants;
    if (obj_extra_int_constants == NULL) {
        arg_extra_int_constants = NULL;
    } else if (likely(PyList_Check(obj_extra_int_constants)))
        arg_extra_int_constants = obj_extra_int_constants;
    else {
        CPy_TypeError("list", obj_extra_int_constants); 
        goto fail;
    }
    PyObject *arg_steals;
    if (obj_steals == NULL) {
        arg_steals = NULL;
        goto __LL10794;
    }
    if (PyBool_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10794;
    if (PyList_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10794;
    CPy_TypeError("union[bool, list]", obj_steals); 
    goto fail;
__LL10794: ;
    char arg_is_borrowed;
    if (obj_is_borrowed == NULL) {
        arg_is_borrowed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_borrowed))) {
        CPy_TypeError("bool", obj_is_borrowed); goto fail;
    } else
        arg_is_borrowed = obj_is_borrowed == Py_True;
    CPyTagged arg_priority;
    if (obj_priority == NULL) {
        arg_priority = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    PyObject *retval = CPyDef_registry___binary_op(arg_name, arg_arg_types, arg_return_type, arg_c_function_name, arg_error_kind, arg_var_arg_type, arg_truncated_type, arg_ordering, arg_extra_int_constants, arg_steals, arg_is_borrowed, arg_priority);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "binary_op", 187, CPyStatic_registry___globals);
    return NULL;
}

PyObject *CPyDef_registry___custom_op(PyObject *cpy_r_arg_types, PyObject *cpy_r_return_type, PyObject *cpy_r_c_function_name, CPyTagged cpy_r_error_kind, PyObject *cpy_r_var_arg_type, PyObject *cpy_r_truncated_type, PyObject *cpy_r_ordering, PyObject *cpy_r_extra_int_constants, PyObject *cpy_r_steals, char cpy_r_is_borrowed) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    if (cpy_r_var_arg_type != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_var_arg_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_truncated_type != NULL) goto CPyL18;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_truncated_type = cpy_r_r1;
CPyL4: ;
    if (cpy_r_ordering != NULL) goto CPyL19;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_ordering = cpy_r_r2;
CPyL6: ;
    if (cpy_r_extra_int_constants != NULL) goto CPyL20;
    cpy_r_r3 = CPyStatic_registry___mypyc___primitives___registry___custom_op___extra_int_constants;
    CPy_INCREF(cpy_r_r3);
    cpy_r_extra_int_constants = cpy_r_r3;
CPyL8: ;
    if (cpy_r_steals != NULL) goto CPyL21;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    cpy_r_steals = cpy_r_r4;
CPyL10: ;
    if (cpy_r_is_borrowed != 2) goto CPyL12;
    cpy_r_is_borrowed = 0;
CPyL12: ;
    cpy_r_r5 = CPyStatics[8944]; /* '<custom>' */
    cpy_r_r6 = CPyStatic_registry___globals;
    cpy_r_r7 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "custom_op", 243, CPyStatic_registry___globals);
        goto CPyL22;
    }
    CPyTagged_INCREF(cpy_r_error_kind);
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_error_kind);
    cpy_r_r10 = cpy_r_is_borrowed ? Py_True : Py_False;
    cpy_r_r11 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r12[12] = {
        cpy_r_r5, cpy_r_arg_types, cpy_r_return_type,
        cpy_r_var_arg_type, cpy_r_truncated_type, cpy_r_c_function_name,
        cpy_r_r9, cpy_r_steals, cpy_r_r10, cpy_r_ordering,
        cpy_r_extra_int_constants, cpy_r_r11
    };
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r13, 12, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "custom_op", 243, CPyStatic_registry___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_var_arg_type);
    CPy_DECREF(cpy_r_truncated_type);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_steals);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_extra_int_constants);
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "custom_op", 243, CPyStatic_registry___globals, "tuple", cpy_r_r14);
        goto CPyL16;
    }
    return cpy_r_r15;
CPyL16: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL17: ;
    CPy_INCREF(cpy_r_var_arg_type);
    goto CPyL2;
CPyL18: ;
    CPy_INCREF(cpy_r_truncated_type);
    goto CPyL4;
CPyL19: ;
    CPy_INCREF(cpy_r_ordering);
    goto CPyL6;
CPyL20: ;
    CPy_INCREF(cpy_r_extra_int_constants);
    goto CPyL8;
CPyL21: ;
    CPy_INCREF(cpy_r_steals);
    goto CPyL10;
CPyL22: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_var_arg_type);
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
}

PyObject *CPyPy_registry___custom_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"arg_types", "return_type", "c_function_name", "error_kind", "var_arg_type", "truncated_type", "ordering", "extra_int_constants", "steals", "is_borrowed", 0};
    static CPyArg_Parser parser = {"OOOO|OOOOOO:custom_op", kwlist, 0};
    PyObject *obj_arg_types;
    PyObject *obj_return_type;
    PyObject *obj_c_function_name;
    PyObject *obj_error_kind;
    PyObject *obj_var_arg_type = NULL;
    PyObject *obj_truncated_type = NULL;
    PyObject *obj_ordering = NULL;
    PyObject *obj_extra_int_constants = NULL;
    PyObject *obj_steals = NULL;
    PyObject *obj_is_borrowed = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_arg_types, &obj_return_type, &obj_c_function_name, &obj_error_kind, &obj_var_arg_type, &obj_truncated_type, &obj_ordering, &obj_extra_int_constants, &obj_steals, &obj_is_borrowed)) {
        return NULL;
    }
    PyObject *arg_arg_types;
    if (likely(PyList_Check(obj_arg_types)))
        arg_arg_types = obj_arg_types;
    else {
        CPy_TypeError("list", obj_arg_types); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    PyObject *arg_var_arg_type;
    if (obj_var_arg_type == NULL) {
        arg_var_arg_type = NULL;
        goto __LL10795;
    }
    if (PyObject_TypeCheck(obj_var_arg_type, CPyType_rtypes___RType))
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10795;
    if (obj_var_arg_type == Py_None)
        arg_var_arg_type = obj_var_arg_type;
    else {
        arg_var_arg_type = NULL;
    }
    if (arg_var_arg_type != NULL) goto __LL10795;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_var_arg_type); 
    goto fail;
__LL10795: ;
    PyObject *arg_truncated_type;
    if (obj_truncated_type == NULL) {
        arg_truncated_type = NULL;
        goto __LL10796;
    }
    if (PyObject_TypeCheck(obj_truncated_type, CPyType_rtypes___RType))
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10796;
    if (obj_truncated_type == Py_None)
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10796;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_truncated_type); 
    goto fail;
__LL10796: ;
    PyObject *arg_ordering;
    if (obj_ordering == NULL) {
        arg_ordering = NULL;
        goto __LL10797;
    }
    if (PyList_Check(obj_ordering))
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10797;
    if (obj_ordering == Py_None)
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10797;
    CPy_TypeError("list or None", obj_ordering); 
    goto fail;
__LL10797: ;
    PyObject *arg_extra_int_constants;
    if (obj_extra_int_constants == NULL) {
        arg_extra_int_constants = NULL;
    } else if (likely(PyList_Check(obj_extra_int_constants)))
        arg_extra_int_constants = obj_extra_int_constants;
    else {
        CPy_TypeError("list", obj_extra_int_constants); 
        goto fail;
    }
    PyObject *arg_steals;
    if (obj_steals == NULL) {
        arg_steals = NULL;
        goto __LL10798;
    }
    if (PyBool_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10798;
    if (PyList_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10798;
    CPy_TypeError("union[bool, list]", obj_steals); 
    goto fail;
__LL10798: ;
    char arg_is_borrowed;
    if (obj_is_borrowed == NULL) {
        arg_is_borrowed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_borrowed))) {
        CPy_TypeError("bool", obj_is_borrowed); goto fail;
    } else
        arg_is_borrowed = obj_is_borrowed == Py_True;
    PyObject *retval = CPyDef_registry___custom_op(arg_arg_types, arg_return_type, arg_c_function_name, arg_error_kind, arg_var_arg_type, arg_truncated_type, arg_ordering, arg_extra_int_constants, arg_steals, arg_is_borrowed);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "custom_op", 227, CPyStatic_registry___globals);
    return NULL;
}

PyObject *CPyDef_registry___unary_op(PyObject *cpy_r_name, PyObject *cpy_r_arg_type, PyObject *cpy_r_return_type, PyObject *cpy_r_c_function_name, CPyTagged cpy_r_error_kind, PyObject *cpy_r_truncated_type, PyObject *cpy_r_ordering, PyObject *cpy_r_extra_int_constants, PyObject *cpy_r_steals, char cpy_r_is_borrowed, CPyTagged cpy_r_priority) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_desc;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    if (cpy_r_truncated_type != NULL) goto CPyL23;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_truncated_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_ordering != NULL) goto CPyL24;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_ordering = cpy_r_r1;
CPyL4: ;
    if (cpy_r_extra_int_constants != NULL) goto CPyL25;
    cpy_r_r2 = CPyStatic_registry___mypyc___primitives___registry___unary_op___extra_int_constants;
    CPy_INCREF(cpy_r_r2);
    cpy_r_extra_int_constants = cpy_r_r2;
CPyL6: ;
    if (cpy_r_steals != NULL) goto CPyL26;
    cpy_r_r3 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r3);
    cpy_r_steals = cpy_r_r3;
CPyL8: ;
    if (cpy_r_is_borrowed != 2) goto CPyL10;
    cpy_r_is_borrowed = 0;
CPyL10: ;
    if (cpy_r_priority != CPY_INT_TAG) goto CPyL27;
    cpy_r_priority = 2;
CPyL12: ;
    cpy_r_r4 = CPyStatic_registry___globals;
    cpy_r_r5 = CPyStatics[8411]; /* 'unary_ops' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 279, CPyStatic_registry___globals);
        goto CPyL28;
    }
    if (likely(PyDict_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "unary_op", 279, CPyStatic_registry___globals, "dict", cpy_r_r6);
        goto CPyL28;
    }
    cpy_r_r8 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r7, cpy_r_name, 1);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 279, CPyStatic_registry___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "unary_op", 279, CPyStatic_registry___globals, "list", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_ops = cpy_r_r9;
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 282, CPyStatic_registry___globals);
        goto CPyL29;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_arg_type);
    *(PyObject * *)cpy_r_r12 = cpy_r_arg_type;
    cpy_r_r13 = CPyStatic_registry___globals;
    cpy_r_r14 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 280, CPyStatic_registry___globals);
        goto CPyL30;
    }
    cpy_r_r16 = Py_None;
    CPyTagged_INCREF(cpy_r_error_kind);
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_error_kind);
    cpy_r_r18 = cpy_r_is_borrowed ? Py_True : Py_False;
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_priority);
    PyObject *cpy_r_r20[12] = {
        cpy_r_name, cpy_r_r10, cpy_r_return_type, cpy_r_r16,
        cpy_r_truncated_type, cpy_r_c_function_name, cpy_r_r17,
        cpy_r_steals, cpy_r_r18, cpy_r_ordering,
        cpy_r_extra_int_constants, cpy_r_r19
    };
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r21, 12, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 280, CPyStatic_registry___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_truncated_type);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_steals);
    CPy_DECREF(cpy_r_ordering);
    CPy_DECREF(cpy_r_extra_int_constants);
    CPy_DECREF(cpy_r_r19);
    if (likely(PyTuple_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "unary_op", 280, CPyStatic_registry___globals, "tuple", cpy_r_r22);
        goto CPyL32;
    }
    cpy_r_desc = cpy_r_r23;
    cpy_r_r24 = PyList_Append(cpy_r_ops, cpy_r_desc);
    CPy_DECREF(cpy_r_ops);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 294, CPyStatic_registry___globals);
        goto CPyL33;
    }
    return cpy_r_desc;
CPyL22: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL23: ;
    CPy_INCREF(cpy_r_truncated_type);
    goto CPyL2;
CPyL24: ;
    CPy_INCREF(cpy_r_ordering);
    goto CPyL4;
CPyL25: ;
    CPy_INCREF(cpy_r_extra_int_constants);
    goto CPyL6;
CPyL26: ;
    CPy_INCREF(cpy_r_steals);
    goto CPyL8;
CPyL27: ;
    CPyTagged_INCREF(cpy_r_priority);
    goto CPyL12;
CPyL28: ;
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    CPy_DecRef(cpy_r_ops);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPyTagged_DecRef(cpy_r_priority);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r10);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_truncated_type);
    CPy_DecRef(cpy_r_ordering);
    CPy_DecRef(cpy_r_extra_int_constants);
    CPy_DecRef(cpy_r_steals);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_ops);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_desc);
    goto CPyL22;
}

PyObject *CPyPy_registry___unary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "arg_type", "return_type", "c_function_name", "error_kind", "truncated_type", "ordering", "extra_int_constants", "steals", "is_borrowed", "priority", 0};
    static CPyArg_Parser parser = {"OOOOO|OOOOOO:unary_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_arg_type;
    PyObject *obj_return_type;
    PyObject *obj_c_function_name;
    PyObject *obj_error_kind;
    PyObject *obj_truncated_type = NULL;
    PyObject *obj_ordering = NULL;
    PyObject *obj_extra_int_constants = NULL;
    PyObject *obj_steals = NULL;
    PyObject *obj_is_borrowed = NULL;
    PyObject *obj_priority = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_arg_type, &obj_return_type, &obj_c_function_name, &obj_error_kind, &obj_truncated_type, &obj_ordering, &obj_extra_int_constants, &obj_steals, &obj_is_borrowed, &obj_priority)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_arg_type;
    if (likely(PyObject_TypeCheck(obj_arg_type, CPyType_rtypes___RType)))
        arg_arg_type = obj_arg_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_arg_type); 
        goto fail;
    }
    PyObject *arg_return_type;
    if (likely(PyObject_TypeCheck(obj_return_type, CPyType_rtypes___RType)))
        arg_return_type = obj_return_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_return_type); 
        goto fail;
    }
    PyObject *arg_c_function_name;
    if (likely(PyUnicode_Check(obj_c_function_name)))
        arg_c_function_name = obj_c_function_name;
    else {
        CPy_TypeError("str", obj_c_function_name); 
        goto fail;
    }
    CPyTagged arg_error_kind;
    if (likely(PyLong_Check(obj_error_kind)))
        arg_error_kind = CPyTagged_BorrowFromObject(obj_error_kind);
    else {
        CPy_TypeError("int", obj_error_kind); goto fail;
    }
    PyObject *arg_truncated_type;
    if (obj_truncated_type == NULL) {
        arg_truncated_type = NULL;
        goto __LL10799;
    }
    if (PyObject_TypeCheck(obj_truncated_type, CPyType_rtypes___RType))
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10799;
    if (obj_truncated_type == Py_None)
        arg_truncated_type = obj_truncated_type;
    else {
        arg_truncated_type = NULL;
    }
    if (arg_truncated_type != NULL) goto __LL10799;
    CPy_TypeError("mypyc.ir.rtypes.RType or None", obj_truncated_type); 
    goto fail;
__LL10799: ;
    PyObject *arg_ordering;
    if (obj_ordering == NULL) {
        arg_ordering = NULL;
        goto __LL10800;
    }
    if (PyList_Check(obj_ordering))
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10800;
    if (obj_ordering == Py_None)
        arg_ordering = obj_ordering;
    else {
        arg_ordering = NULL;
    }
    if (arg_ordering != NULL) goto __LL10800;
    CPy_TypeError("list or None", obj_ordering); 
    goto fail;
__LL10800: ;
    PyObject *arg_extra_int_constants;
    if (obj_extra_int_constants == NULL) {
        arg_extra_int_constants = NULL;
    } else if (likely(PyList_Check(obj_extra_int_constants)))
        arg_extra_int_constants = obj_extra_int_constants;
    else {
        CPy_TypeError("list", obj_extra_int_constants); 
        goto fail;
    }
    PyObject *arg_steals;
    if (obj_steals == NULL) {
        arg_steals = NULL;
        goto __LL10801;
    }
    if (PyBool_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10801;
    if (PyList_Check(obj_steals))
        arg_steals = obj_steals;
    else {
        arg_steals = NULL;
    }
    if (arg_steals != NULL) goto __LL10801;
    CPy_TypeError("union[bool, list]", obj_steals); 
    goto fail;
__LL10801: ;
    char arg_is_borrowed;
    if (obj_is_borrowed == NULL) {
        arg_is_borrowed = 2;
    } else if (unlikely(!PyBool_Check(obj_is_borrowed))) {
        CPy_TypeError("bool", obj_is_borrowed); goto fail;
    } else
        arg_is_borrowed = obj_is_borrowed == Py_True;
    CPyTagged arg_priority;
    if (obj_priority == NULL) {
        arg_priority = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    PyObject *retval = CPyDef_registry___unary_op(arg_name, arg_arg_type, arg_return_type, arg_c_function_name, arg_error_kind, arg_truncated_type, arg_ordering, arg_extra_int_constants, arg_steals, arg_is_borrowed, arg_priority);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "unary_op", 259, CPyStatic_registry___globals);
    return NULL;
}

PyObject *CPyDef_registry___load_address_op(PyObject *cpy_r_name, PyObject *cpy_r_type, PyObject *cpy_r_src) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = CPyStatic_registry___globals;
    cpy_r_r1 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL16;
    }
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals, "dict", cpy_r_r2);
        goto CPyL16;
    }
    cpy_r_r4 = PyDict_Contains(cpy_r_r3, cpy_r_name);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL16;
    }
    cpy_r_r6 = cpy_r_r4;
    cpy_r_r7 = cpy_r_r6 ^ 1;
    if (cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyStatics[8945]; /* 'already defined: ' */
    cpy_r_r9 = CPyStr_Build(2, cpy_r_r8, cpy_r_name);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r9);
    CPy_Raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 299, CPyStatic_registry___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r16.f0 = cpy_r_type;
    cpy_r_r16.f1 = cpy_r_src;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    cpy_r_r17 = CPyStatic_registry___globals;
    cpy_r_r18 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 300, CPyStatic_registry___globals);
        goto CPyL18;
    }
    if (likely(PyDict_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "load_address_op", 300, CPyStatic_registry___globals, "dict", cpy_r_r19);
        goto CPyL18;
    }
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10802 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp10802);
    PyObject *__tmp10803 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp10803);
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r20, cpy_r_name, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 300, CPyStatic_registry___globals);
        goto CPyL16;
    }
    cpy_r_r24 = CPyStatic_registry___globals;
    cpy_r_r25 = CPyStatics[8946]; /* 'LoadAddressDescription' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 301, CPyStatic_registry___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r27[3] = {cpy_r_name, cpy_r_type, cpy_r_src};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 3, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 301, CPyStatic_registry___globals);
        goto CPyL16;
    }
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "load_address_op", 301, CPyStatic_registry___globals, "tuple", cpy_r_r29);
        goto CPyL16;
    }
    return cpy_r_r30;
CPyL16: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL17: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    goto CPyL16;
}

PyObject *CPyPy_registry___load_address_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "type", "src", 0};
    static CPyArg_Parser parser = {"OOO:load_address_op", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_type;
    PyObject *obj_src;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_type, &obj_src)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_rtypes___RType)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_type); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(PyUnicode_Check(obj_src)))
        arg_src = obj_src;
    else {
        CPy_TypeError("str", obj_src); 
        goto fail;
    }
    PyObject *retval = CPyDef_registry___load_address_op(arg_name, arg_type, arg_src);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/primitives/registry.py", "load_address_op", 298, CPyStatic_registry___globals);
    return NULL;
}

char CPyDef_registry_____top_level__(void) {
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
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
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
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject **cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject **cpy_r_r222;
    PyObject **cpy_r_r223;
    PyObject **cpy_r_r224;
    PyObject **cpy_r_r225;
    PyObject **cpy_r_r226;
    PyObject **cpy_r_r227;
    PyObject **cpy_r_r228;
    PyObject **cpy_r_r229;
    void *cpy_r_r231;
    void *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", -1, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_registry___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 38, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9254]; /* ('Final', 'NamedTuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_registry___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 40, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10270]; /* ('StealsDescription',) */
    cpy_r_r14 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r15 = CPyStatic_registry___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 42, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9982]; /* ('RType',) */
    cpy_r_r18 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r19 = CPyStatic_registry___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 43, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatic_registry___globals;
    cpy_r_r22 = CPyStatics[8442]; /* 'ERR_NEG_INT' */
    cpy_r_r23 = CPyStatics[9022]; /* 10 */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 47, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r26 = CPyModule_typing;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (cpy_r_r28) goto CPyL11;
    cpy_r_r29 = CPyStatics[21]; /* 'typing' */
    cpy_r_r30 = PyImport_Import(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_typing = cpy_r_r30;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r30);
CPyL11: ;
    cpy_r_r31 = PyImport_GetModuleDict();
    cpy_r_r32 = CPyStatics[21]; /* 'typing' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r34 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r36 = PyTuple_Pack(1, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r37 = CPyModule_typing;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    if (cpy_r_r39) goto CPyL17;
    cpy_r_r40 = CPyStatics[21]; /* 'typing' */
    cpy_r_r41 = PyImport_Import(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL89;
    }
    CPyModule_typing = cpy_r_r41;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r41);
CPyL17: ;
    cpy_r_r42 = PyImport_GetModuleDict();
    cpy_r_r43 = CPyStatics[21]; /* 'typing' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL89;
    }
    cpy_r_r45 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL89;
    }
    cpy_r_r47 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r48 = PyObject_HasAttr(cpy_r_r46, cpy_r_r47);
    if (!cpy_r_r48) goto CPyL24;
    cpy_r_r49 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r50 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r52[2] = {cpy_r_r49, cpy_r_r36};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 2, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL90;
    }
    if (likely(PyDict_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals, "dict", cpy_r_r54);
        goto CPyL90;
    }
    cpy_r_r56 = cpy_r_r55;
    goto CPyL26;
CPyL24: ;
    cpy_r_r57 = PyDict_New();
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL90;
    }
    cpy_r_r56 = cpy_r_r57;
CPyL26: ;
    cpy_r_r58 = PyDict_New();
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL91;
    }
    cpy_r_r59 = (PyObject *)&PyUnicode_Type;
    cpy_r_r60 = CPyStatics[2329]; /* 'name' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r58, cpy_r_r60, cpy_r_r59);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 51, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r63 = (PyObject *)&PyList_Type;
    cpy_r_r64 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r58, cpy_r_r64, cpy_r_r63);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 52, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r67 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r68 = CPyStatics[4635]; /* 'return_type' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r58, cpy_r_r68, cpy_r_r67);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 53, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r71 = (PyObject *)&PyType_Type;
    cpy_r_r72 = CPyStatics[8947]; /* 'var_arg_type' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r58, cpy_r_r72, cpy_r_r71);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 54, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r75 = (PyObject *)&PyType_Type;
    cpy_r_r76 = CPyStatics[8948]; /* 'truncated_type' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r58, cpy_r_r76, cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 55, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r79 = (PyObject *)&PyUnicode_Type;
    cpy_r_r80 = CPyStatics[8949]; /* 'c_function_name' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r58, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 56, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r83 = (PyObject *)&PyLong_Type;
    cpy_r_r84 = CPyStatics[7830]; /* 'error_kind' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r58, cpy_r_r84, cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 57, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r87 = (PyObject *)&PyType_Type;
    cpy_r_r88 = CPyStatics[7854]; /* 'steals' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r58, cpy_r_r88, cpy_r_r87);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 58, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r91 = (PyObject *)&PyBool_Type;
    cpy_r_r92 = CPyStatics[7828]; /* 'is_borrowed' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r58, cpy_r_r92, cpy_r_r91);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 59, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r95 = (PyObject *)&PyType_Type;
    cpy_r_r96 = CPyStatics[8950]; /* 'ordering' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r58, cpy_r_r96, cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 60, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r99 = (PyObject *)&PyList_Type;
    cpy_r_r100 = CPyStatics[8951]; /* 'extra_int_constants' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r58, cpy_r_r100, cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 61, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r103 = (PyObject *)&PyLong_Type;
    cpy_r_r104 = CPyStatics[2283]; /* 'priority' */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r58, cpy_r_r104, cpy_r_r103);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 62, CPyStatic_registry___globals);
        goto CPyL92;
    }
    cpy_r_r107 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r108 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r56, cpy_r_r108, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL91;
    }
    cpy_r_r111 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r112 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r56, cpy_r_r112, cpy_r_r111);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL91;
    }
    cpy_r_r115 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r116 = CPyStatics[619]; /* '__module__' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r56, cpy_r_r116, cpy_r_r115);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r119[3] = {cpy_r_r107, cpy_r_r36, cpy_r_r56};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r120, 3, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL93;
    }
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r56);
    CPyType_registry___CFunctionDescription = (PyTypeObject *)cpy_r_r121;
    CPy_INCREF(CPyType_registry___CFunctionDescription);
    cpy_r_r122 = CPyStatic_registry___globals;
    cpy_r_r123 = CPyStatics[8106]; /* 'CFunctionDescription' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 50, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r126 = (PyObject *)CPyType_registry___CFunctionDescription;
    cpy_r_r127 = CPyModule_typing;
    cpy_r_r128 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r129 = cpy_r_r127 != cpy_r_r128;
    if (cpy_r_r129) goto CPyL47;
    cpy_r_r130 = CPyStatics[21]; /* 'typing' */
    cpy_r_r131 = PyImport_Import(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyModule_typing = cpy_r_r131;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r131);
CPyL47: ;
    cpy_r_r132 = PyImport_GetModuleDict();
    cpy_r_r133 = CPyStatics[21]; /* 'typing' */
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r135 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r137 = PyTuple_Pack(1, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r138 = CPyModule_typing;
    cpy_r_r139 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r140 = cpy_r_r138 != cpy_r_r139;
    if (cpy_r_r140) goto CPyL53;
    cpy_r_r141 = CPyStatics[21]; /* 'typing' */
    cpy_r_r142 = PyImport_Import(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL94;
    }
    CPyModule_typing = cpy_r_r142;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r142);
CPyL53: ;
    cpy_r_r143 = PyImport_GetModuleDict();
    cpy_r_r144 = CPyStatics[21]; /* 'typing' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL94;
    }
    cpy_r_r146 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL94;
    }
    cpy_r_r148 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r149 = PyObject_HasAttr(cpy_r_r147, cpy_r_r148);
    if (!cpy_r_r149) goto CPyL60;
    cpy_r_r150 = CPyStatics[8946]; /* 'LoadAddressDescription' */
    cpy_r_r151 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r152 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r153[2] = {cpy_r_r150, cpy_r_r137};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = _PyObject_Vectorcall(cpy_r_r152, cpy_r_r154, 2, 0);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL95;
    }
    if (likely(PyDict_Check(cpy_r_r155)))
        cpy_r_r156 = cpy_r_r155;
    else {
        CPy_TypeErrorTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals, "dict", cpy_r_r155);
        goto CPyL95;
    }
    cpy_r_r157 = cpy_r_r156;
    goto CPyL62;
CPyL60: ;
    cpy_r_r158 = PyDict_New();
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL95;
    }
    cpy_r_r157 = cpy_r_r158;
CPyL62: ;
    cpy_r_r159 = PyDict_New();
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL96;
    }
    cpy_r_r160 = (PyObject *)&PyUnicode_Type;
    cpy_r_r161 = CPyStatics[2329]; /* 'name' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r159, cpy_r_r161, cpy_r_r160);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 67, CPyStatic_registry___globals);
        goto CPyL97;
    }
    cpy_r_r164 = (PyObject *)CPyType_rtypes___RType;
    cpy_r_r165 = CPyStatics[802]; /* 'type' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r159, cpy_r_r165, cpy_r_r164);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 68, CPyStatic_registry___globals);
        goto CPyL97;
    }
    cpy_r_r168 = (PyObject *)&PyUnicode_Type;
    cpy_r_r169 = CPyStatics[6937]; /* 'src' */
    cpy_r_r170 = CPyDict_SetItem(cpy_r_r159, cpy_r_r169, cpy_r_r168);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 69, CPyStatic_registry___globals);
        goto CPyL97;
    }
    cpy_r_r172 = CPyStatics[8946]; /* 'LoadAddressDescription' */
    cpy_r_r173 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r174 = CPyDict_SetItem(cpy_r_r157, cpy_r_r173, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL96;
    }
    cpy_r_r176 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r177 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r178 = CPyDict_SetItem(cpy_r_r157, cpy_r_r177, cpy_r_r176);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL96;
    }
    cpy_r_r180 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r181 = CPyStatics[619]; /* '__module__' */
    cpy_r_r182 = CPyDict_SetItem(cpy_r_r157, cpy_r_r181, cpy_r_r180);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL96;
    }
    PyObject *cpy_r_r184[3] = {cpy_r_r172, cpy_r_r137, cpy_r_r157};
    cpy_r_r185 = (PyObject **)&cpy_r_r184;
    cpy_r_r186 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r185, 3, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r157);
    CPyType_registry___LoadAddressDescription = (PyTypeObject *)cpy_r_r186;
    CPy_INCREF(CPyType_registry___LoadAddressDescription);
    cpy_r_r187 = CPyStatic_registry___globals;
    cpy_r_r188 = CPyStatics[8946]; /* 'LoadAddressDescription' */
    cpy_r_r189 = CPyDict_SetItem(cpy_r_r187, cpy_r_r188, cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 66, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r191 = (PyObject *)CPyType_registry___LoadAddressDescription;
    cpy_r_r192 = PyDict_New();
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 73, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r193 = CPyStatic_registry___globals;
    cpy_r_r194 = CPyStatics[8436]; /* 'method_call_ops' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r193, cpy_r_r194, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 73, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r197 = PyDict_New();
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 76, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r198 = CPyStatic_registry___globals;
    cpy_r_r199 = CPyStatics[8077]; /* 'function_ops' */
    cpy_r_r200 = CPyDict_SetItem(cpy_r_r198, cpy_r_r199, cpy_r_r197);
    CPy_DECREF(cpy_r_r197);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 76, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r202 = PyDict_New();
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 79, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r203 = CPyStatic_registry___globals;
    cpy_r_r204 = CPyStatics[8404]; /* 'binary_ops' */
    cpy_r_r205 = CPyDict_SetItem(cpy_r_r203, cpy_r_r204, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 79, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r207 = PyDict_New();
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 82, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r208 = CPyStatic_registry___globals;
    cpy_r_r209 = CPyStatics[8411]; /* 'unary_ops' */
    cpy_r_r210 = CPyDict_SetItem(cpy_r_r208, cpy_r_r209, cpy_r_r207);
    CPy_DECREF(cpy_r_r207);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 82, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r212 = PyDict_New();
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 84, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r213 = CPyStatic_registry___globals;
    cpy_r_r214 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r213, cpy_r_r214, cpy_r_r212);
    CPy_DECREF(cpy_r_r212);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 84, CPyStatic_registry___globals);
        goto CPyL88;
    }
    cpy_r_r217 = PyList_New(0);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 96, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyStatic_registry___mypyc___primitives___registry___method_op___extra_int_constants = cpy_r_r217;
    CPy_INCREF(CPyStatic_registry___mypyc___primitives___registry___method_op___extra_int_constants);
    CPy_DECREF(cpy_r_r217);
    cpy_r_r218 = PyList_New(0);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 153, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyStatic_registry___mypyc___primitives___registry___function_op___extra_int_constants = cpy_r_r218;
    CPy_INCREF(CPyStatic_registry___mypyc___primitives___registry___function_op___extra_int_constants);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r219 = PyList_New(0);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 196, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyStatic_registry___mypyc___primitives___registry___binary_op___extra_int_constants = cpy_r_r219;
    CPy_INCREF(CPyStatic_registry___mypyc___primitives___registry___binary_op___extra_int_constants);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r220 = PyList_New(0);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 235, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyStatic_registry___mypyc___primitives___registry___custom_op___extra_int_constants = cpy_r_r220;
    CPy_INCREF(CPyStatic_registry___mypyc___primitives___registry___custom_op___extra_int_constants);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r221 = PyList_New(0);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypyc/primitives/registry.py", "<module>", 267, CPyStatic_registry___globals);
        goto CPyL88;
    }
    CPyStatic_registry___mypyc___primitives___registry___unary_op___extra_int_constants = cpy_r_r221;
    CPy_INCREF(CPyStatic_registry___mypyc___primitives___registry___unary_op___extra_int_constants);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r222 = (PyObject **)&CPyModule_mypyc___primitives___bytes_ops;
    cpy_r_r223 = (PyObject **)&CPyModule_mypyc___primitives___dict_ops;
    cpy_r_r224 = (PyObject **)&CPyModule_mypyc___primitives___float_ops;
    cpy_r_r225 = (PyObject **)&CPyModule_mypyc___primitives___int_ops;
    cpy_r_r226 = (PyObject **)&CPyModule_mypyc___primitives___list_ops;
    cpy_r_r227 = (PyObject **)&CPyModule_mypyc___primitives___misc_ops;
    cpy_r_r228 = (PyObject **)&CPyModule_mypyc___primitives___str_ops;
    cpy_r_r229 = (PyObject **)&CPyModule_mypyc___primitives___tuple_ops;
    PyObject **cpy_r_r230[8] = {
        cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226,
        cpy_r_r227, cpy_r_r228, cpy_r_r229
    };
    cpy_r_r231 = (void *)&cpy_r_r230;
    int64_t cpy_r_r232[8] = {304, 305, 306, 309, 310, 311, 312, 313};
    cpy_r_r233 = (void *)&cpy_r_r232;
    cpy_r_r234 = CPyStatics[10279]; /* (('mypyc.primitives.bytes_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.dict_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.float_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.int_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.list_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.misc_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.str_ops', 'mypyc', 'mypyc'),
                                       ('mypyc.primitives.tuple_ops', 'mypyc', 'mypyc')) */
    cpy_r_r235 = CPyStatic_registry___globals;
    cpy_r_r236 = CPyStatics[8952]; /* 'mypyc/primitives/registry.py' */
    cpy_r_r237 = CPyStatics[17]; /* '<module>' */
    cpy_r_r238 = CPyImport_ImportMany(cpy_r_r234, cpy_r_r231, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r233);
    if (!cpy_r_r238) goto CPyL88;
    return 1;
CPyL88: ;
    cpy_r_r239 = 2;
    return cpy_r_r239;
CPyL89: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL88;
CPyL90: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r46);
    goto CPyL88;
CPyL91: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    goto CPyL88;
CPyL92: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r58);
    goto CPyL88;
CPyL93: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r56);
    goto CPyL88;
CPyL94: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL88;
CPyL95: ;
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r147);
    goto CPyL88;
CPyL96: ;
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r157);
    goto CPyL88;
CPyL97: ;
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    goto CPyL88;
CPyL98: ;
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r157);
    goto CPyL88;
}
