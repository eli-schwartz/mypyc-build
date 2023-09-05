#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef singledispatchmodule_methods[] = {
    {"get_singledispatch_info", (PyCFunction)CPyPy_singledispatch___get_singledispatch_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_first_arg", (PyCFunction)CPyPy_singledispatch___get_first_arg, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_fake_register_class_instance", (PyCFunction)CPyPy_singledispatch___make_fake_register_class_instance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fail", (PyCFunction)CPyPy_singledispatch___fail, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"create_singledispatch_function_callback", (PyCFunction)CPyPy_singledispatch___create_singledispatch_function_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"singledispatch_register_callback", (PyCFunction)CPyPy_singledispatch___singledispatch_register_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"register_function", (PyCFunction)CPyPy_singledispatch___register_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_dispatch_type", (PyCFunction)CPyPy_singledispatch___get_dispatch_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"call_singledispatch_function_after_register_argument", (PyCFunction)CPyPy_singledispatch___call_singledispatch_function_after_register_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"call_singledispatch_function_callback", (PyCFunction)CPyPy_singledispatch___call_singledispatch_function_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef singledispatchmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.singledispatch",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    singledispatchmodule_methods
};

PyObject *CPyInit_mypy___plugins___singledispatch(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___singledispatch_internal) {
        Py_INCREF(CPyModule_mypy___plugins___singledispatch_internal);
        return CPyModule_mypy___plugins___singledispatch_internal;
    }
    CPyModule_mypy___plugins___singledispatch_internal = PyModule_Create(&singledispatchmodule);
    if (unlikely(CPyModule_mypy___plugins___singledispatch_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___singledispatch_internal, "__name__");
    CPyStatic_singledispatch___globals = PyModule_GetDict(CPyModule_mypy___plugins___singledispatch_internal);
    if (unlikely(CPyStatic_singledispatch___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_singledispatch_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___singledispatch_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___singledispatch_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_singledispatch___SINGLEDISPATCH_REGISTER_METHOD);
    CPyStatic_singledispatch___SINGLEDISPATCH_REGISTER_METHOD = NULL;
    CPy_XDECREF(CPyStatic_singledispatch___SINGLEDISPATCH_CALLABLE_CALL_METHOD);
    CPyStatic_singledispatch___SINGLEDISPATCH_CALLABLE_CALL_METHOD = NULL;
    CPy_XDECREF(CPyStatic_singledispatch___REGISTER_CALLABLE_CALL_METHOD);
    CPyStatic_singledispatch___REGISTER_CALLABLE_CALL_METHOD = NULL;
    Py_CLEAR(CPyType_singledispatch___SingledispatchTypeVars);
    Py_CLEAR(CPyType_singledispatch___RegisterCallableInfo);
    return NULL;
}

PyObject *CPyDef_singledispatch___get_singledispatch_info(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
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
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 4;
    if (!cpy_r_r4) goto CPyL9;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatic_singledispatch___globals;
    cpy_r_r7 = CPyStatics[4627]; /* 'SingledispatchTypeVars' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL11;
    }
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL12;
    }
    cpy_r_r10 = CPyList_Extend(cpy_r_r9, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL4: ;
    cpy_r_r11 = PyList_AsTuple(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL15;
    }
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    cpy_r_r13 = PyObject_Call(cpy_r_r8, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 44, CPyStatic_singledispatch___globals, "tuple", cpy_r_r13);
        goto CPyL10;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL14: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL4;
CPyL15: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL10;
}

PyObject *CPyPy_singledispatch___get_singledispatch_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_singledispatch_info", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_singledispatch___get_singledispatch_info(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_singledispatch_info", 42, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___get_first_arg(PyObject *cpy_r_args) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = CPyList_GetItemShort(cpy_r_args, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 53, CPyStatic_singledispatch___globals);
        goto CPyL9;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 53, CPyStatic_singledispatch___globals, "list", cpy_r_r4);
        goto CPyL9;
    }
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPyList_GetItemShortBorrow(cpy_r_args, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 54, CPyStatic_singledispatch___globals);
        goto CPyL9;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 54, CPyStatic_singledispatch___globals, "list", cpy_r_r10);
        goto CPyL9;
    }
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 54, CPyStatic_singledispatch___globals);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
}

PyObject *CPyPy_singledispatch___get_first_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:get_first_arg", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_singledispatch___get_first_arg(arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_first_arg", 51, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___make_fake_register_class_instance(PyObject *cpy_r_api, PyObject *cpy_r_type_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_defn;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_obj_type;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_func_arg;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    cpy_r_r0 = CPyStatics[4628]; /* '_SingleDispatchRegisterCallable' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 66, CPyStatic_singledispatch___globals);
        goto CPyL27;
    }
    cpy_r_r2 = CPyDef_nodes___Block(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 66, CPyStatic_singledispatch___globals);
        goto CPyL27;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_nodes___ClassDef(cpy_r_r0, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 66, CPyStatic_singledispatch___globals);
        goto CPyL27;
    }
    cpy_r_defn = cpy_r_r7;
    cpy_r_r8 = CPyStatics[4629]; /* 'functools.' */
    cpy_r_r9 = CPyStatics[4628]; /* '_SingleDispatchRegisterCallable' */
    cpy_r_r10 = CPyStr_Build(2, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 67, CPyStatic_singledispatch___globals);
        goto CPyL28;
    }
    cpy_r_r11 = CPY_SET_ATTR(cpy_r_defn, CPyType_nodes___ClassDef, 7, cpy_r_r10, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 67, CPyStatic_singledispatch___globals);
        goto CPyL28;
    }
    cpy_r_r12 = (PyObject *)CPyType_nodes___SymbolTable;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 68, CPyStatic_singledispatch___globals);
        goto CPyL28;
    }
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 68, CPyStatic_singledispatch___globals, "dict", cpy_r_r13);
        goto CPyL28;
    }
    cpy_r_r15 = CPyStatics[2546]; /* 'functools' */
    cpy_r_r16 = CPyDef_nodes___TypeInfo(cpy_r_r14, cpy_r_defn, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 68, CPyStatic_singledispatch___globals);
        goto CPyL28;
    }
    cpy_r_info = cpy_r_r16;
    cpy_r_r17 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 69, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    cpy_r_r19 = CPY_GET_METHOD_TRAIT(cpy_r_api, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_api, cpy_r_r17, cpy_r_r18); /* named_generic_type */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 69, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    cpy_r_r20 = ((mypy___types___InstanceObject *)cpy_r_r19)->_type;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_obj_type = cpy_r_r20;
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 70, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_types___Instance(cpy_r_obj_type, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 70, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    cpy_r_r27 = PyList_New(1);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 70, CPyStatic_singledispatch___globals);
        goto CPyL31;
    }
    cpy_r_r28 = (CPyPtr)&((PyListObject *)cpy_r_r27)->ob_item;
    cpy_r_r29 = *(CPyPtr *)cpy_r_r28;
    *(PyObject * *)cpy_r_r29 = cpy_r_r26;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_bases = cpy_r_r27;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 70, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 71, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    CPy_INCREF(cpy_r_info);
    *(PyObject * *)cpy_r_r33 = cpy_r_info;
    cpy_r_r34 = cpy_r_r33 + 8;
    *(PyObject * *)cpy_r_r34 = cpy_r_obj_type;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro = cpy_r_r31;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 71, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info);
    ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_info = cpy_r_info;
    cpy_r_r37 = CPyStatics[2329]; /* 'name' */
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_nodes___Var(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 74, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPyDef_types___AnyType(16, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 74, CPyStatic_singledispatch___globals);
        goto CPyL32;
    }
    cpy_r_r45 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 74, CPyStatic_singledispatch___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r47 = Py_None;
    cpy_r_r48 = 2;
    cpy_r_r49 = CPyDef_nodes___Argument(cpy_r_r39, cpy_r_r44, cpy_r_r47, cpy_r_r45, cpy_r_r48);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 74, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    cpy_r_func_arg = cpy_r_r49;
    cpy_r_r50 = CPyStatics[706]; /* '__call__' */
    cpy_r_r51 = PyList_New(1);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 75, CPyStatic_singledispatch___globals);
        goto CPyL34;
    }
    cpy_r_r52 = (CPyPtr)&((PyListObject *)cpy_r_r51)->ob_item;
    cpy_r_r53 = *(CPyPtr *)cpy_r_r52;
    *(PyObject * *)cpy_r_r53 = cpy_r_func_arg;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = CPyDef_types___NoneType(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 75, CPyStatic_singledispatch___globals);
        goto CPyL35;
    }
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = 2;
    cpy_r_r60 = 2;
    cpy_r_r61 = CPyDef_plugins___common___add_method_to_class(cpy_r_api, cpy_r_defn, cpy_r_r50, cpy_r_r51, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 75, CPyStatic_singledispatch___globals);
        goto CPyL36;
    }
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_types___Instance(cpy_r_info, cpy_r_type_args, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 77, CPyStatic_singledispatch___globals);
        goto CPyL27;
    }
    return cpy_r_r66;
CPyL27: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL28: ;
    CPy_DecRef(cpy_r_defn);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_obj_type);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r26);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r39);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r44);
    goto CPyL19;
CPyL34: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_func_arg);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r51);
    goto CPyL27;
CPyL36: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL27;
}

PyObject *CPyPy_singledispatch___make_fake_register_class_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"api", "type_args", 0};
    static CPyArg_Parser parser = {"OO:make_fake_register_class_instance", kwlist, 0};
    PyObject *obj_api;
    PyObject *obj_type_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_api, &obj_type_args)) {
        return NULL;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_checker___TypeChecker))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.CheckerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *arg_type_args = obj_type_args;
    PyObject *retval = CPyDef_singledispatch___make_fake_register_class_instance(arg_api, arg_type_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "make_fake_register_class_instance", 63, CPyStatic_singledispatch___globals);
    return NULL;
}

char CPyDef_singledispatch___fail(PyObject *cpy_r_ctx, PyObject *cpy_r_msg, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_err_context;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_context != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_context);
    if (likely(cpy_r_context != Py_None))
        cpy_r_r2 = cpy_r_context;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "fail", 93, CPyStatic_singledispatch___globals, "mypy.nodes.Context", cpy_r_context);
        goto CPyL10;
    }
    cpy_r_err_context = cpy_r_r2;
    goto CPyL6;
CPyL3: ;
    cpy_r_r3 = CPyStatics[68]; /* 'context' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "fail", 95, CPyStatic_singledispatch___globals);
        goto CPyL10;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_nodes___Context)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "fail", 95, CPyStatic_singledispatch___globals, "mypy.nodes.Context", cpy_r_r4);
        goto CPyL10;
    }
    cpy_r_err_context = cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = CPyStatics[4369]; /* 'api' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "fail", 96, CPyStatic_singledispatch___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_checker___TypeChecker))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "fail", 96, CPyStatic_singledispatch___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r7);
        goto CPyL11;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_GET_METHOD_TRAIT(cpy_r_r8, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r8, cpy_r_msg, cpy_r_err_context, cpy_r_r9); /* fail */
    CPy_DECREF(cpy_r_err_context);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "fail", 96, CPyStatic_singledispatch___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL11: ;
    CPy_DecRef(cpy_r_err_context);
    goto CPyL10;
}

PyObject *CPyPy_singledispatch___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "msg", "context", 0};
    static CPyArg_Parser parser = {"OOO:fail", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_msg;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_msg, &obj_context)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_context;
    if (PyObject_TypeCheck(obj_context, CPyType_nodes___Context))
        arg_context = obj_context;
    else {
        arg_context = NULL;
    }
    if (arg_context != NULL) goto __LL4938;
    if (obj_context == Py_None)
        arg_context = obj_context;
    else {
        arg_context = NULL;
    }
    if (arg_context != NULL) goto __LL4938;
    CPy_TypeError("mypy.nodes.Context or None", obj_context); 
    goto fail;
__LL4938: ;
    char retval = CPyDef_singledispatch___fail(arg_ctx, arg_msg, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "fail", 83, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___create_singledispatch_function_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_func_type;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
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
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_singledispatch_obj;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T1O cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 101, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 101, CPyStatic_singledispatch___globals, "list", cpy_r_r0);
        goto CPyL39;
    }
    cpy_r_r2 = CPyDef_singledispatch___get_first_arg(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 101, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type))
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL4939;
    if (cpy_r_r2 == Py_None)
        cpy_r_r3 = cpy_r_r2;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL4939;
    CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 101, CPyStatic_singledispatch___globals, "mypy.types.Type or None", cpy_r_r2);
    goto CPyL39;
__LL4939: ;
    cpy_r_r4 = CPyDef_types___get_proper_type(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 101, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    cpy_r_func_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_func_type)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_func_type) == CPyType_types___CallableType))
        cpy_r_r9 = cpy_r_func_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 103, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func_type);
        goto CPyL41;
    }
    cpy_r_r10 = ((mypy___types___CallableTypeObject *)cpy_r_r9)->_arg_kinds;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)2;
    if (!cpy_r_r14) goto CPyL13;
    cpy_r_r15 = CPyStatics[4630]; /* 'Singledispatch function requires at least one argument' */
    if (likely(Py_TYPE(cpy_r_func_type) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_func_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 105, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func_type);
        goto CPyL41;
    }
    cpy_r_r17 = ((mypy___types___CallableTypeObject *)cpy_r_r16)->_definition;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_func_type);
    cpy_r_r18 = CPyDef_singledispatch___fail(cpy_r_ctx, cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 104, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 107, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 107, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL39;
    }
    return cpy_r_r20;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_func_type) == CPyType_types___CallableType))
        cpy_r_r21 = cpy_r_func_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 109, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func_type);
        goto CPyL41;
    }
    cpy_r_r22 = ((mypy___types___CallableTypeObject *)cpy_r_r21)->_arg_kinds;
    cpy_r_r23 = CPyList_GetItemShort(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 109, CPyStatic_singledispatch___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_nodes___ArgKind))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 109, CPyStatic_singledispatch___globals, "mypy.nodes.ArgKind", cpy_r_r23);
        goto CPyL41;
    }
    cpy_r_r25 = CPyStatics[1166]; /* 'is_positional' */
    cpy_r_r26 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r27[2] = {cpy_r_r24, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = CPyStatics[9077]; /* ('star',) */
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r28, 9223372036854775809ULL, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 109, CPyStatic_singledispatch___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(!PyBool_Check(cpy_r_r30))) {
        CPy_TypeError("bool", cpy_r_r30); cpy_r_r31 = 2;
    } else
        cpy_r_r31 = cpy_r_r30 == Py_True;
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 109, CPyStatic_singledispatch___globals);
        goto CPyL41;
    }
    if (cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPyStatics[4631]; /* ('First argument to singledispatch function must be a '
                                     'positional argument') */
    if (likely(Py_TYPE(cpy_r_func_type) == CPyType_types___CallableType))
        cpy_r_r33 = cpy_r_func_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 113, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func_type);
        goto CPyL41;
    }
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_r33)->_definition;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_func_type);
    cpy_r_r35 = CPyDef_singledispatch___fail(cpy_r_ctx, cpy_r_r32, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 110, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    cpy_r_r36 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 115, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_types___Type)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 115, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r36);
        goto CPyL39;
    }
    return cpy_r_r37;
CPyL24: ;
    cpy_r_r38 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 119, CPyStatic_singledispatch___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 119, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL41;
    }
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 119, CPyStatic_singledispatch___globals);
        goto CPyL41;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 119, CPyStatic_singledispatch___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL41;
    }
    cpy_r_singledispatch_obj = cpy_r_r41;
    cpy_r_r42 = (PyObject *)CPyType_types___Instance;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_singledispatch_obj)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (cpy_r_r45) {
        goto CPyL31;
    } else
        goto CPyL43;
CPyL29: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 120, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_singledispatch_obj) == CPyType_types___Instance))
        cpy_r_r47 = cpy_r_singledispatch_obj;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 121, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_singledispatch_obj);
        goto CPyL44;
    }
    cpy_r_r48 = ((mypy___types___InstanceObject *)cpy_r_r47)->_args;
    CPy_INCREF(cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_func_type) == CPyType_types___CallableType))
        cpy_r_r49 = cpy_r_func_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 121, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func_type);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_singledispatch_obj);
    cpy_r_r50.f0 = cpy_r_r49;
    CPy_INCREF(cpy_r_r50.f0);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = PyTuple_New(1);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4940 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp4940);
    cpy_r_r52 = PyNumber_InPlaceAdd(cpy_r_r48, cpy_r_r51);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 121, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyTuple_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 121, CPyStatic_singledispatch___globals, "tuple", cpy_r_r52);
        goto CPyL39;
    }
    CPy_DECREF(((mypy___types___InstanceObject *)cpy_r_r47)->_args);
    ((mypy___types___InstanceObject *)cpy_r_r47)->_args = cpy_r_r53;
CPyL36: ;
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 8);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 123, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 123, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r55);
        goto CPyL39;
    }
    return cpy_r_r56;
CPyL39: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL40: ;
    CPy_DECREF(cpy_r_func_type);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_func_type);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_func_type);
    CPy_DecRef(cpy_r_r24);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_func_type);
    CPy_DECREF(cpy_r_singledispatch_obj);
    goto CPyL29;
CPyL44: ;
    CPy_DecRef(cpy_r_func_type);
    CPy_DecRef(cpy_r_singledispatch_obj);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_singledispatch_obj);
    CPy_DecRef(cpy_r_r48);
    goto CPyL39;
}

PyObject *CPyPy_singledispatch___create_singledispatch_function_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:create_singledispatch_function_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_singledispatch___create_singledispatch_function_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "create_singledispatch_function_callback", 99, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___singledispatch_register_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_first_arg_type;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_register_type;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_type_args;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_register_callable;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    size_t __tmp4944;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 128, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___Instance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 128, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 130, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 130, CPyStatic_singledispatch___globals, "list", cpy_r_r6);
        goto CPyL54;
    }
    cpy_r_r8 = CPyDef_singledispatch___get_first_arg(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 130, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    if (PyObject_TypeCheck(cpy_r_r8, CPyType_types___Type))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL4941;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL4941;
    CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 130, CPyStatic_singledispatch___globals, "mypy.types.Type or None", cpy_r_r8);
    goto CPyL54;
__LL4941: ;
    cpy_r_r10 = CPyDef_types___get_proper_type(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 130, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    cpy_r_first_arg_type = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_first_arg_type)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL12;
CPyL11: ;
    cpy_r_r16 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_first_arg_type)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL12: ;
    if (!cpy_r_r15) goto CPyL41;
    CPy_INCREF(cpy_r_first_arg_type);
    if (Py_TYPE(cpy_r_first_arg_type) == CPyType_types___CallableType)
        cpy_r_r20 = cpy_r_first_arg_type;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL4942;
    if (Py_TYPE(cpy_r_first_arg_type) == CPyType_types___Overloaded)
        cpy_r_r20 = cpy_r_first_arg_type;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL4942;
    CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 131, CPyStatic_singledispatch___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_first_arg_type);
    goto CPyL55;
__LL4942: ;
    cpy_r_r21 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_r20)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___CallableType))
        cpy_r_r25 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 131, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r20);
        goto CPyL55;
    }
    cpy_r_r26 = CPyDef_types___CallableType___is_type_obj(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 131, CPyStatic_singledispatch___globals);
        goto CPyL55;
    }
    cpy_r_r27 = cpy_r_r26;
    goto CPyL21;
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_types___Overloaded))
        cpy_r_r28 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 131, CPyStatic_singledispatch___globals, "mypy.types.Overloaded", cpy_r_r20);
        goto CPyL55;
    }
    cpy_r_r29 = CPyDef_types___Overloaded___is_type_obj(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 131, CPyStatic_singledispatch___globals);
        goto CPyL55;
    }
    cpy_r_r27 = cpy_r_r29;
CPyL21: ;
    if (!cpy_r_r27) goto CPyL41;
    if (Py_TYPE(cpy_r_first_arg_type) == CPyType_types___CallableType)
        cpy_r_r30 = cpy_r_first_arg_type;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4943;
    if (Py_TYPE(cpy_r_first_arg_type) == CPyType_types___Overloaded)
        cpy_r_r30 = cpy_r_first_arg_type;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4943;
    CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals, "union[mypy.types.CallableType, mypy.types.Overloaded]", cpy_r_first_arg_type);
    goto CPyL54;
__LL4943: ;
    cpy_r_r31 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___CallableType))
        cpy_r_r35 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r30);
        goto CPyL54;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_types___CallableType, 38, mypy___types___CallableTypeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
CPyL26: ;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL30;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___Overloaded))
        cpy_r_r38 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals, "mypy.types.Overloaded", cpy_r_r30);
        goto CPyL54;
    }
    cpy_r_r39 = CPY_GET_ATTR(cpy_r_r38, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
CPyL29: ;
    cpy_r_r37 = cpy_r_r39;
CPyL30: ;
    cpy_r_r40 = CPyList_GetItemShortBorrow(cpy_r_r37, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals);
        goto CPyL56;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_types___CallableType))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 140, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r40);
        goto CPyL56;
    }
    cpy_r_r42 = ((mypy___types___CallableTypeObject *)cpy_r_r41)->_ret_type;
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r37);
    cpy_r_register_type = cpy_r_r42;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 141, CPyStatic_singledispatch___globals);
        goto CPyL57;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_types___Instance))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 141, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_r43);
        goto CPyL57;
    }
    cpy_r_r45 = CPyStatic_singledispatch___globals;
    cpy_r_r46 = CPyStatics[4632]; /* 'RegisterCallableInfo' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 141, CPyStatic_singledispatch___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r48[2] = {cpy_r_register_type, cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 2, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 141, CPyStatic_singledispatch___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_register_type);
    CPy_DECREF(cpy_r_r44);
    if (likely(PyTuple_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 141, CPyStatic_singledispatch___globals, "tuple", cpy_r_r50);
        goto CPyL54;
    }
    cpy_r_type_args = cpy_r_r51;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 142, CPyStatic_singledispatch___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_checker___TypeChecker))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 142, CPyStatic_singledispatch___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r52);
        goto CPyL59;
    }
    cpy_r_r54 = CPyDef_singledispatch___make_fake_register_class_instance(cpy_r_r53, cpy_r_type_args);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_type_args);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 142, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    cpy_r_register_callable = cpy_r_r54;
    return cpy_r_register_callable;
CPyL41: ;
    cpy_r_r55 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_first_arg_type)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL60;
    cpy_r_r59 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_types___Instance))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_r59);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_first_arg_type);
    if (likely(Py_TYPE(cpy_r_first_arg_type) == CPyType_types___CallableType))
        cpy_r_r61 = cpy_r_first_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_first_arg_type);
        goto CPyL61;
    }
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_checker___TypeChecker))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r62);
        goto CPyL62;
    }
    __tmp4944 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r63)->vtable, 1);
    cpy_r_r64 = *(PyObject * *)((char *)cpy_r_r63 + __tmp4944);
    if (unlikely(cpy_r_r64 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r64);
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals);
        goto CPyL62;
    }
CPyL48: ;
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_singledispatch___register_function(cpy_r_ctx, cpy_r_r60, cpy_r_r61, cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 146, CPyStatic_singledispatch___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_first_arg_type) == CPyType_types___CallableType))
        cpy_r_r67 = cpy_r_first_arg_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 151, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_first_arg_type);
        goto CPyL54;
    }
    return cpy_r_r67;
CPyL51: ;
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 154, CPyStatic_singledispatch___globals);
        goto CPyL54;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_types___Type)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 154, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r68);
        goto CPyL54;
    }
    return cpy_r_r69;
CPyL54: ;
    cpy_r_r70 = NULL;
    return cpy_r_r70;
CPyL55: ;
    CPy_DecRef(cpy_r_first_arg_type);
    goto CPyL54;
CPyL56: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL54;
CPyL57: ;
    CPy_DecRef(cpy_r_register_type);
    goto CPyL54;
CPyL58: ;
    CPy_DecRef(cpy_r_register_type);
    CPy_DecRef(cpy_r_r44);
    goto CPyL54;
CPyL59: ;
    CPy_DecRef(cpy_r_type_args);
    goto CPyL54;
CPyL60: ;
    CPy_DECREF(cpy_r_first_arg_type);
    goto CPyL51;
CPyL61: ;
    CPy_DecRef(cpy_r_first_arg_type);
    CPy_DecRef(cpy_r_r60);
    goto CPyL54;
CPyL62: ;
    CPy_DecRef(cpy_r_first_arg_type);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL54;
}

PyObject *CPyPy_singledispatch___singledispatch_register_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:singledispatch_register_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_singledispatch___singledispatch_register_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "singledispatch_register_callback", 126, CPyStatic_singledispatch___globals);
    return NULL;
}

char CPyDef_singledispatch___register_function(PyObject *cpy_r_ctx, PyObject *cpy_r_singledispatch_obj, PyObject *cpy_r_func, PyObject *cpy_r_options, PyObject *cpy_r_register_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_metadata;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_dispatch_type;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_fallback;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_fallback_dispatch_type;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    if (cpy_r_register_arg != NULL) goto CPyL30;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_register_arg = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_types___get_proper_type(cpy_r_func);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 166, CPyStatic_singledispatch___globals);
        goto CPyL31;
    }
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 166, CPyStatic_singledispatch___globals, "mypy.types.ProperType", cpy_r_r1);
        goto CPyL31;
    }
    cpy_r_func = cpy_r_r2;
    cpy_r_r3 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r4 = (CPyPtr)&((PyObject *)cpy_r_func)->ob_type;
    cpy_r_r5 = *(PyObject * *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 == cpy_r_r3;
    if (cpy_r_r6) {
        goto CPyL6;
    } else
        goto CPyL32;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r7 = CPyDef_singledispatch___get_singledispatch_info(cpy_r_singledispatch_obj);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 169, CPyStatic_singledispatch___globals);
        goto CPyL33;
    }
    cpy_r_metadata = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_metadata == cpy_r_r8;
    if (cpy_r_r9) {
        goto CPyL34;
    } else
        goto CPyL9;
CPyL8: ;
    return 1;
CPyL9: ;
    CPy_INCREF(cpy_r_func);
    if (likely(Py_TYPE(cpy_r_func) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 174, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func);
        goto CPyL35;
    }
    cpy_r_r11 = CPyDef_singledispatch___get_dispatch_type(cpy_r_r10, cpy_r_register_arg);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_register_arg);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 174, CPyStatic_singledispatch___globals);
        goto CPyL36;
    }
    cpy_r_dispatch_type = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_dispatch_type == cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL37;
    } else
        goto CPyL13;
CPyL12: ;
    return 1;
CPyL13: ;
    if (likely(cpy_r_metadata != Py_None))
        cpy_r_r14 = cpy_r_metadata;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 179, CPyStatic_singledispatch___globals, "tuple", cpy_r_metadata);
        goto CPyL38;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 179, CPyStatic_singledispatch___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 179, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL38;
    }
    cpy_r_fallback = cpy_r_r16;
    cpy_r_r17 = ((mypy___types___CallableTypeObject *)cpy_r_fallback)->_arg_types;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 181, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 181, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_fallback);
    cpy_r_fallback_dispatch_type = cpy_r_r19;
    CPy_INCREF(cpy_r_dispatch_type);
    if (likely(cpy_r_dispatch_type != Py_None))
        cpy_r_r20 = cpy_r_dispatch_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 182, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_dispatch_type);
        goto CPyL40;
    }
    cpy_r_r21 = NULL;
    cpy_r_r22 = 2;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPyDef_subtypes___is_subtype(cpy_r_r20, cpy_r_fallback_dispatch_type, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 182, CPyStatic_singledispatch___globals);
        goto CPyL40;
    }
    if (cpy_r_r28) goto CPyL41;
    if (likely(cpy_r_dispatch_type != Py_None))
        cpy_r_r29 = cpy_r_dispatch_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 186, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_dispatch_type);
        goto CPyL42;
    }
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_messages___format_type(cpy_r_r29, cpy_r_options, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 186, CPyStatic_singledispatch___globals);
        goto CPyL42;
    }
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_messages___format_type(cpy_r_fallback_dispatch_type, cpy_r_options, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_fallback_dispatch_type);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 186, CPyStatic_singledispatch___globals);
        goto CPyL43;
    }
    cpy_r_r36 = CPyStatics[4633]; /* 'Dispatch type ' */
    cpy_r_r37 = CPyStatics[4634]; /* ' must be subtype of fallback function first argument ' */
    cpy_r_r38 = CPyStr_Build(4, cpy_r_r36, cpy_r_r32, cpy_r_r37, cpy_r_r35);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 185, CPyStatic_singledispatch___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_func) == CPyType_types___CallableType))
        cpy_r_r39 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "register_function", 188, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_func);
        goto CPyL45;
    }
    cpy_r_r40 = ((mypy___types___CallableTypeObject *)cpy_r_r39)->_definition;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_func);
    cpy_r_r41 = CPyDef_singledispatch___fail(cpy_r_ctx, cpy_r_r38, cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 183, CPyStatic_singledispatch___globals);
        goto CPyL29;
    }
    return 1;
CPyL28: ;
    return 1;
CPyL29: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL30: ;
    CPy_INCREF(cpy_r_register_arg);
    goto CPyL2;
CPyL31: ;
    CPy_DecRef(cpy_r_register_arg);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_register_arg);
    goto CPyL5;
CPyL33: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_register_arg);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_register_arg);
    CPy_DECREF(cpy_r_metadata);
    goto CPyL8;
CPyL35: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_register_arg);
    CPy_DecRef(cpy_r_metadata);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_metadata);
    goto CPyL29;
CPyL37: ;
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_metadata);
    CPy_DECREF(cpy_r_dispatch_type);
    goto CPyL12;
CPyL38: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_dispatch_type);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_dispatch_type);
    CPy_DecRef(cpy_r_fallback);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_dispatch_type);
    CPy_DecRef(cpy_r_fallback_dispatch_type);
    goto CPyL29;
CPyL41: ;
    CPy_DECREF(cpy_r_func);
    CPy_DECREF(cpy_r_dispatch_type);
    CPy_DECREF(cpy_r_fallback_dispatch_type);
    goto CPyL28;
CPyL42: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_fallback_dispatch_type);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r32);
    goto CPyL29;
CPyL44: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL29;
CPyL45: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r38);
    goto CPyL29;
}

PyObject *CPyPy_singledispatch___register_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "singledispatch_obj", "func", "options", "register_arg", 0};
    static CPyArg_Parser parser = {"OOOO|O:register_function", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_singledispatch_obj;
    PyObject *obj_func;
    PyObject *obj_options;
    PyObject *obj_register_arg = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_singledispatch_obj, &obj_func, &obj_options, &obj_register_arg)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_singledispatch_obj;
    if (likely(Py_TYPE(obj_singledispatch_obj) == CPyType_types___Instance))
        arg_singledispatch_obj = obj_singledispatch_obj;
    else {
        CPy_TypeError("mypy.types.Instance", obj_singledispatch_obj); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(PyObject_TypeCheck(obj_func, CPyType_types___Type)))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.types.Type", obj_func); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_register_arg;
    if (obj_register_arg == NULL) {
        arg_register_arg = NULL;
        goto __LL4945;
    }
    if (PyObject_TypeCheck(obj_register_arg, CPyType_types___Type))
        arg_register_arg = obj_register_arg;
    else {
        arg_register_arg = NULL;
    }
    if (arg_register_arg != NULL) goto __LL4945;
    if (obj_register_arg == Py_None)
        arg_register_arg = obj_register_arg;
    else {
        arg_register_arg = NULL;
    }
    if (arg_register_arg != NULL) goto __LL4945;
    CPy_TypeError("mypy.types.Type or None", obj_register_arg); 
    goto fail;
__LL4945: ;
    char retval = CPyDef_singledispatch___register_function(arg_ctx, arg_singledispatch_obj, arg_func, arg_options, arg_register_arg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "register_function", 157, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___get_dispatch_type(PyObject *cpy_r_func, PyObject *cpy_r_register_arg) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_register_arg != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_register_arg);
    if (likely(cpy_r_register_arg != Py_None))
        cpy_r_r2 = cpy_r_register_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "get_dispatch_type", 196, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_register_arg);
        goto CPyL8;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = ((mypy___types___CallableTypeObject *)cpy_r_func)->_arg_types;
    cpy_r_r9 = CPyList_GetItemShort(cpy_r_r8, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_dispatch_type", 198, CPyStatic_singledispatch___globals);
        goto CPyL8;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "get_dispatch_type", 198, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
}

PyObject *CPyPy_singledispatch___get_dispatch_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func", "register_arg", 0};
    static CPyArg_Parser parser = {"OO:get_dispatch_type", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_register_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_register_arg)) {
        return NULL;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_types___CallableType))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_func); 
        goto fail;
    }
    PyObject *arg_register_arg;
    if (PyObject_TypeCheck(obj_register_arg, CPyType_types___Type))
        arg_register_arg = obj_register_arg;
    else {
        arg_register_arg = NULL;
    }
    if (arg_register_arg != NULL) goto __LL4946;
    if (obj_register_arg == Py_None)
        arg_register_arg = obj_register_arg;
    else {
        arg_register_arg = NULL;
    }
    if (arg_register_arg != NULL) goto __LL4946;
    CPy_TypeError("mypy.types.Type or None", obj_register_arg); 
    goto fail;
__LL4946: ;
    PyObject *retval = CPyDef_singledispatch___get_dispatch_type(arg_func, arg_register_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "get_dispatch_type", 194, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___call_singledispatch_function_after_register_argument(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_register_callable;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
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
    PyObject *cpy_r_type_args;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_func;
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
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    size_t __tmp4948;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 204, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 204, CPyStatic_singledispatch___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL30;
    }
    cpy_r_register_callable = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_register_callable)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_register_callable) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_register_callable;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_register_callable);
        goto CPyL32;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_args;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_register_callable);
    cpy_r_r8 = CPyStatic_singledispatch___globals;
    cpy_r_r9 = CPyStatics[4632]; /* 'RegisterCallableInfo' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL33;
    }
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL34;
    }
    cpy_r_r12 = CPyList_Extend(cpy_r_r11, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL7: ;
    cpy_r_r13 = PyList_AsTuple(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL37;
    }
    cpy_r_r14 = PyDict_New();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL38;
    }
    cpy_r_r15 = PyObject_Call(cpy_r_r10, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    if (likely(PyTuple_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 206, CPyStatic_singledispatch___globals, "tuple", cpy_r_r15);
        goto CPyL30;
    }
    cpy_r_type_args = cpy_r_r16;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 207, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 207, CPyStatic_singledispatch___globals, "list", cpy_r_r17);
        goto CPyL39;
    }
    cpy_r_r19 = CPyDef_singledispatch___get_first_arg(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 207, CPyStatic_singledispatch___globals);
        goto CPyL39;
    }
    if (PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type))
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL4947;
    if (cpy_r_r19 == Py_None)
        cpy_r_r20 = cpy_r_r19;
    else {
        cpy_r_r20 = NULL;
    }
    if (cpy_r_r20 != NULL) goto __LL4947;
    CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 207, CPyStatic_singledispatch___globals, "mypy.types.Type or None", cpy_r_r19);
    goto CPyL39;
__LL4947: ;
    cpy_r_func = cpy_r_r20;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_func != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL40;
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_type_args, 2);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_types___Instance))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_r23);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_func);
    if (likely(cpy_r_func != Py_None))
        cpy_r_r25 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_func);
        goto CPyL42;
    }
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_ctx, 16);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_checker___TypeChecker))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r26);
        goto CPyL43;
    }
    __tmp4948 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r27)->vtable, 1);
    cpy_r_r28 = *(PyObject * *)((char *)cpy_r_r27 + __tmp4948);
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals);
        goto CPyL43;
    }
CPyL22: ;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_type_args, 0);
    CPy_DECREF(cpy_r_type_args);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 210, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL44;
    }
    cpy_r_r31 = CPyDef_singledispatch___register_function(cpy_r_ctx, cpy_r_r24, cpy_r_r25, cpy_r_r28, cpy_r_r30);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 209, CPyStatic_singledispatch___globals);
        goto CPyL45;
    }
    if (likely(cpy_r_func != Py_None))
        cpy_r_r32 = cpy_r_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 213, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_func);
        goto CPyL30;
    }
    return cpy_r_r32;
CPyL27: ;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_ctx, 10);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 214, CPyStatic_singledispatch___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r33, CPyType_types___Type)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 214, CPyStatic_singledispatch___globals, "mypy.types.Type", cpy_r_r33);
        goto CPyL30;
    }
    return cpy_r_r34;
CPyL30: ;
    cpy_r_r35 = NULL;
    return cpy_r_r35;
CPyL31: ;
    CPy_DECREF(cpy_r_register_callable);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_register_callable);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
CPyL37: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r13);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_type_args);
    goto CPyL30;
CPyL40: ;
    CPy_DECREF(cpy_r_type_args);
    CPy_DECREF(cpy_r_func);
    goto CPyL27;
CPyL41: ;
    CPy_DecRef(cpy_r_type_args);
    CPy_DecRef(cpy_r_func);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_type_args);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r24);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_type_args);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL30;
CPyL44: ;
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    goto CPyL30;
CPyL45: ;
    CPy_DecRef(cpy_r_func);
    goto CPyL30;
}

PyObject *CPyPy_singledispatch___call_singledispatch_function_after_register_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:call_singledispatch_function_after_register_argument", kwlist, 0};
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
    PyObject *retval = CPyDef_singledispatch___call_singledispatch_function_after_register_argument(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_after_register_argument", 202, CPyStatic_singledispatch___globals);
    return NULL;
}

PyObject *CPyDef_singledispatch___call_singledispatch_function_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_metadata;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 219, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___Instance;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) goto CPyL5;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 220, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 220, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL16;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 221, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___Instance))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 221, CPyStatic_singledispatch___globals, "mypy.types.Instance", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = CPyDef_singledispatch___get_singledispatch_info(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 221, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    cpy_r_metadata = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_metadata == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL17;
    } else
        goto CPyL12;
CPyL9: ;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 223, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_types___CallableType))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 223, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r12);
        goto CPyL16;
    }
    return cpy_r_r13;
CPyL12: ;
    if (likely(cpy_r_metadata != Py_None))
        cpy_r_r14 = cpy_r_metadata;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 224, CPyStatic_singledispatch___globals, "tuple", cpy_r_metadata);
        goto CPyL16;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_r14, 2);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 224, CPyStatic_singledispatch___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_types___CallableType))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 224, CPyStatic_singledispatch___globals, "mypy.types.CallableType", cpy_r_r15);
        goto CPyL16;
    }
    return cpy_r_r16;
CPyL16: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL17: ;
    CPy_DECREF(cpy_r_metadata);
    goto CPyL9;
}

PyObject *CPyPy_singledispatch___call_singledispatch_function_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:call_singledispatch_function_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_singledispatch___call_singledispatch_function_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/singledispatch.py", "call_singledispatch_function_callback", 217, CPyStatic_singledispatch___globals);
    return NULL;
}

char CPyDef_singledispatch_____top_level__(void) {
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
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
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
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject **cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject **cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    tuple_T2OO cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    char cpy_r_r227;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", -1, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_singledispatch___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 1, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9632]; /* ('Final', 'NamedTuple', 'Sequence', 'TypeVar', 'Union') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_singledispatch___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 3, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r14 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r15 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r16 = CPyStatic_singledispatch___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 4, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_typing_extensions = cpy_r_r17;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9432]; /* ('format_type',) */
    cpy_r_r19 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r20 = CPyStatic_singledispatch___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 6, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___messages = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9633]; /* ('ARG_POS', 'Argument', 'Block', 'ClassDef', 'Context',
                                     'SymbolTable', 'TypeInfo', 'Var') */
    cpy_r_r23 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r24 = CPyStatic_singledispatch___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 7, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___nodes = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r27 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r28 = CPyStatic_singledispatch___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 8, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___options = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9634]; /* ('CheckerPluginInterface', 'FunctionContext',
                                     'MethodContext', 'MethodSigContext') */
    cpy_r_r31 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r32 = CPyStatic_singledispatch___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 9, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___plugin = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9630]; /* ('add_method_to_class',) */
    cpy_r_r35 = CPyStatics[4441]; /* 'mypy.plugins.common' */
    cpy_r_r36 = CPyStatic_singledispatch___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 10, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___plugins___common = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___plugins___common);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r39 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r40 = CPyStatic_singledispatch___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 11, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___subtypes = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9635]; /* ('AnyType', 'CallableType', 'FunctionLike', 'Instance',
                                     'NoneType', 'Overloaded', 'Type', 'TypeOfAny',
                                     'get_proper_type') */
    cpy_r_r43 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r44 = CPyStatic_singledispatch___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 12, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_mypy___types = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyModule_typing;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_r46 != cpy_r_r47;
    if (cpy_r_r48) goto CPyL16;
    cpy_r_r49 = CPyStatics[21]; /* 'typing' */
    cpy_r_r50 = PyImport_Import(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_typing = cpy_r_r50;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r50);
CPyL16: ;
    cpy_r_r51 = PyImport_GetModuleDict();
    cpy_r_r52 = CPyStatics[21]; /* 'typing' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r54 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r56 = PyTuple_Pack(1, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r57 = CPyModule_typing;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    if (cpy_r_r59) goto CPyL22;
    cpy_r_r60 = CPyStatics[21]; /* 'typing' */
    cpy_r_r61 = PyImport_Import(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL83;
    }
    CPyModule_typing = cpy_r_r61;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r61);
CPyL22: ;
    cpy_r_r62 = PyImport_GetModuleDict();
    cpy_r_r63 = CPyStatics[21]; /* 'typing' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL83;
    }
    cpy_r_r65 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL83;
    }
    cpy_r_r67 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r68 = PyObject_HasAttr(cpy_r_r66, cpy_r_r67);
    if (!cpy_r_r68) goto CPyL29;
    cpy_r_r69 = CPyStatics[4627]; /* 'SingledispatchTypeVars' */
    cpy_r_r70 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r72[2] = {cpy_r_r69, cpy_r_r56};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 2, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL84;
    }
    if (likely(PyDict_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals, "dict", cpy_r_r74);
        goto CPyL84;
    }
    cpy_r_r76 = cpy_r_r75;
    goto CPyL31;
CPyL29: ;
    cpy_r_r77 = PyDict_New();
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL84;
    }
    cpy_r_r76 = cpy_r_r77;
CPyL31: ;
    cpy_r_r78 = PyDict_New();
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL85;
    }
    cpy_r_r79 = (PyObject *)CPyType_types___Type;
    cpy_r_r80 = CPyStatics[4635]; /* 'return_type' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r78, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 26, CPyStatic_singledispatch___globals);
        goto CPyL86;
    }
    cpy_r_r83 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r84 = CPyStatics[4636]; /* 'fallback' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r78, cpy_r_r84, cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 27, CPyStatic_singledispatch___globals);
        goto CPyL86;
    }
    cpy_r_r87 = CPyStatics[4627]; /* 'SingledispatchTypeVars' */
    cpy_r_r88 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r76, cpy_r_r88, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL85;
    }
    cpy_r_r91 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r92 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r76, cpy_r_r92, cpy_r_r91);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL85;
    }
    cpy_r_r95 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r96 = CPyStatics[619]; /* '__module__' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r76, cpy_r_r96, cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL85;
    }
    PyObject *cpy_r_r99[3] = {cpy_r_r87, cpy_r_r56, cpy_r_r76};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r100, 3, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r76);
    CPyType_singledispatch___SingledispatchTypeVars = (PyTypeObject *)cpy_r_r101;
    CPy_INCREF(CPyType_singledispatch___SingledispatchTypeVars);
    cpy_r_r102 = CPyStatic_singledispatch___globals;
    cpy_r_r103 = CPyStatics[4627]; /* 'SingledispatchTypeVars' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 25, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r106 = (PyObject *)CPyType_singledispatch___SingledispatchTypeVars;
    cpy_r_r107 = CPyModule_typing;
    cpy_r_r108 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r109 = cpy_r_r107 != cpy_r_r108;
    if (cpy_r_r109) goto CPyL42;
    cpy_r_r110 = CPyStatics[21]; /* 'typing' */
    cpy_r_r111 = PyImport_Import(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyModule_typing = cpy_r_r111;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r111);
CPyL42: ;
    cpy_r_r112 = PyImport_GetModuleDict();
    cpy_r_r113 = CPyStatics[21]; /* 'typing' */
    cpy_r_r114 = CPyDict_GetItem(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r115 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r117 = PyTuple_Pack(1, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r118 = CPyModule_typing;
    cpy_r_r119 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r120 = cpy_r_r118 != cpy_r_r119;
    if (cpy_r_r120) goto CPyL48;
    cpy_r_r121 = CPyStatics[21]; /* 'typing' */
    cpy_r_r122 = PyImport_Import(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL88;
    }
    CPyModule_typing = cpy_r_r122;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r122);
CPyL48: ;
    cpy_r_r123 = PyImport_GetModuleDict();
    cpy_r_r124 = CPyStatics[21]; /* 'typing' */
    cpy_r_r125 = CPyDict_GetItem(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL88;
    }
    cpy_r_r126 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r127 = CPyObject_GetAttr(cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL88;
    }
    cpy_r_r128 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r129 = PyObject_HasAttr(cpy_r_r127, cpy_r_r128);
    if (!cpy_r_r129) goto CPyL55;
    cpy_r_r130 = CPyStatics[4632]; /* 'RegisterCallableInfo' */
    cpy_r_r131 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r127, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL89;
    }
    PyObject *cpy_r_r133[2] = {cpy_r_r130, cpy_r_r117};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = _PyObject_Vectorcall(cpy_r_r132, cpy_r_r134, 2, 0);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL89;
    }
    if (likely(PyDict_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals, "dict", cpy_r_r135);
        goto CPyL89;
    }
    cpy_r_r137 = cpy_r_r136;
    goto CPyL57;
CPyL55: ;
    cpy_r_r138 = PyDict_New();
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL89;
    }
    cpy_r_r137 = cpy_r_r138;
CPyL57: ;
    cpy_r_r139 = PyDict_New();
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL90;
    }
    cpy_r_r140 = (PyObject *)CPyType_types___Type;
    cpy_r_r141 = CPyStatics[4637]; /* 'register_type' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r139, cpy_r_r141, cpy_r_r140);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 31, CPyStatic_singledispatch___globals);
        goto CPyL91;
    }
    cpy_r_r144 = (PyObject *)CPyType_types___Instance;
    cpy_r_r145 = CPyStatics[4638]; /* 'singledispatch_obj' */
    cpy_r_r146 = CPyDict_SetItem(cpy_r_r139, cpy_r_r145, cpy_r_r144);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 32, CPyStatic_singledispatch___globals);
        goto CPyL91;
    }
    cpy_r_r148 = CPyStatics[4632]; /* 'RegisterCallableInfo' */
    cpy_r_r149 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r150 = CPyDict_SetItem(cpy_r_r137, cpy_r_r149, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL90;
    }
    cpy_r_r152 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r153 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r154 = CPyDict_SetItem(cpy_r_r137, cpy_r_r153, cpy_r_r152);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL90;
    }
    cpy_r_r156 = CPyStatics[4551]; /* 'mypy.plugins.singledispatch' */
    cpy_r_r157 = CPyStatics[619]; /* '__module__' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r137, cpy_r_r157, cpy_r_r156);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r160[3] = {cpy_r_r148, cpy_r_r117, cpy_r_r137};
    cpy_r_r161 = (PyObject **)&cpy_r_r160;
    cpy_r_r162 = _PyObject_Vectorcall(cpy_r_r127, cpy_r_r161, 3, 0);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r137);
    CPyType_singledispatch___RegisterCallableInfo = (PyTypeObject *)cpy_r_r162;
    CPy_INCREF(CPyType_singledispatch___RegisterCallableInfo);
    cpy_r_r163 = CPyStatic_singledispatch___globals;
    cpy_r_r164 = CPyStatics[4632]; /* 'RegisterCallableInfo' */
    cpy_r_r165 = CPyDict_SetItem(cpy_r_r163, cpy_r_r164, cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 30, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r167 = (PyObject *)CPyType_singledispatch___RegisterCallableInfo;
    cpy_r_r168 = CPyStatics[4639]; /* 'functools._SingleDispatchCallable' */
    cpy_r_r169 = CPyStatic_singledispatch___globals;
    cpy_r_r170 = CPyStatics[4640]; /* 'SINGLEDISPATCH_TYPE' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r169, cpy_r_r170, cpy_r_r168);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 35, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r173 = CPyStatics[4639]; /* 'functools._SingleDispatchCallable' */
    cpy_r_r174 = CPyStatics[4641]; /* '.register' */
    cpy_r_r175 = CPyStr_Build(2, cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 37, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyStatic_singledispatch___SINGLEDISPATCH_REGISTER_METHOD = cpy_r_r175;
    CPy_INCREF(CPyStatic_singledispatch___SINGLEDISPATCH_REGISTER_METHOD);
    cpy_r_r176 = CPyStatic_singledispatch___globals;
    cpy_r_r177 = CPyStatics[4642]; /* 'SINGLEDISPATCH_REGISTER_METHOD' */
    cpy_r_r178 = CPyDict_SetItem(cpy_r_r176, cpy_r_r177, cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 37, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r180 = CPyStatics[4639]; /* 'functools._SingleDispatchCallable' */
    cpy_r_r181 = CPyStatics[846]; /* '.__call__' */
    cpy_r_r182 = CPyStr_Build(2, cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 39, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyStatic_singledispatch___SINGLEDISPATCH_CALLABLE_CALL_METHOD = cpy_r_r182;
    CPy_INCREF(CPyStatic_singledispatch___SINGLEDISPATCH_CALLABLE_CALL_METHOD);
    cpy_r_r183 = CPyStatic_singledispatch___globals;
    cpy_r_r184 = CPyStatics[4643]; /* 'SINGLEDISPATCH_CALLABLE_CALL_METHOD' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 39, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r187 = CPyStatics[1088]; /* 'T' */
    cpy_r_r188 = CPyStatic_singledispatch___globals;
    cpy_r_r189 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 48, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r191[1] = {cpy_r_r187};
    cpy_r_r192 = (PyObject **)&cpy_r_r191;
    cpy_r_r193 = _PyObject_Vectorcall(cpy_r_r190, cpy_r_r192, 1, 0);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 48, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r194 = CPyStatic_singledispatch___globals;
    cpy_r_r195 = CPyStatics[1088]; /* 'T' */
    cpy_r_r196 = CPyDict_SetItem(cpy_r_r194, cpy_r_r195, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 48, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r198 = CPyStatics[4628]; /* '_SingleDispatchRegisterCallable' */
    cpy_r_r199 = CPyStatic_singledispatch___globals;
    cpy_r_r200 = CPyStatics[4644]; /* 'REGISTER_RETURN_CLASS' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r199, cpy_r_r200, cpy_r_r198);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 58, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r203 = CPyStatics[4629]; /* 'functools.' */
    cpy_r_r204 = CPyStatics[4628]; /* '_SingleDispatchRegisterCallable' */
    cpy_r_r205 = CPyStatics[846]; /* '.__call__' */
    cpy_r_r206 = CPyStr_Build(3, cpy_r_r203, cpy_r_r204, cpy_r_r205);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 60, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    CPyStatic_singledispatch___REGISTER_CALLABLE_CALL_METHOD = cpy_r_r206;
    CPy_INCREF(CPyStatic_singledispatch___REGISTER_CALLABLE_CALL_METHOD);
    cpy_r_r207 = CPyStatic_singledispatch___globals;
    cpy_r_r208 = CPyStatics[4645]; /* 'REGISTER_CALLABLE_CALL_METHOD' */
    cpy_r_r209 = CPyDict_SetItem(cpy_r_r207, cpy_r_r208, cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 60, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r211 = CPyStatic_singledispatch___globals;
    cpy_r_r212 = CPyStatics[84]; /* 'Union' */
    cpy_r_r213 = CPyDict_GetItem(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 80, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r214 = CPyStatic_singledispatch___globals;
    cpy_r_r215 = CPyStatics[1160]; /* 'FunctionContext' */
    cpy_r_r216 = CPyDict_GetItem(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 80, CPyStatic_singledispatch___globals);
        goto CPyL93;
    }
    cpy_r_r217 = CPyStatic_singledispatch___globals;
    cpy_r_r218 = CPyStatics[1161]; /* 'MethodContext' */
    cpy_r_r219 = CPyDict_GetItem(cpy_r_r217, cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 80, CPyStatic_singledispatch___globals);
        goto CPyL94;
    }
    cpy_r_r220.f0 = cpy_r_r216;
    cpy_r_r220.f1 = cpy_r_r219;
    CPy_INCREF(cpy_r_r220.f0);
    CPy_INCREF(cpy_r_r220.f1);
    CPy_DECREF(cpy_r_r216);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r221 = PyTuple_New(2);
    if (unlikely(cpy_r_r221 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4949 = cpy_r_r220.f0;
    PyTuple_SET_ITEM(cpy_r_r221, 0, __tmp4949);
    PyObject *__tmp4950 = cpy_r_r220.f1;
    PyTuple_SET_ITEM(cpy_r_r221, 1, __tmp4950);
    cpy_r_r222 = PyObject_GetItem(cpy_r_r213, cpy_r_r221);
    CPy_DECREF(cpy_r_r213);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 80, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    cpy_r_r223 = CPyStatic_singledispatch___globals;
    cpy_r_r224 = CPyStatics[4646]; /* 'PluginContext' */
    cpy_r_r225 = CPyDict_SetItem(cpy_r_r223, cpy_r_r224, cpy_r_r222);
    CPy_DECREF(cpy_r_r222);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/plugins/singledispatch.py", "<module>", 80, CPyStatic_singledispatch___globals);
        goto CPyL82;
    }
    return 1;
CPyL82: ;
    cpy_r_r227 = 2;
    return cpy_r_r227;
CPyL83: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL82;
CPyL84: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r66);
    goto CPyL82;
CPyL85: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r76);
    goto CPyL82;
CPyL86: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    goto CPyL82;
CPyL87: ;
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r76);
    goto CPyL82;
CPyL88: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL82;
CPyL89: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r127);
    goto CPyL82;
CPyL90: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r137);
    goto CPyL82;
CPyL91: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r139);
    goto CPyL82;
CPyL92: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r137);
    goto CPyL82;
CPyL93: ;
    CPy_DecRef(cpy_r_r213);
    goto CPyL82;
CPyL94: ;
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r216);
    goto CPyL82;
}
