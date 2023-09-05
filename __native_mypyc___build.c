#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef mypyc___buildmodule_methods[] = {
    {"get_extension", (PyCFunction)CPyPy_mypyc___build___get_extension, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setup_mypycify_vars", (PyCFunction)CPyPy_mypyc___build___setup_mypycify_vars, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fail", (PyCFunction)CPyPy_mypyc___build___fail, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"emit_messages", (PyCFunction)CPyPy_mypyc___build___emit_messages, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_mypy_config", (PyCFunction)CPyPy_mypyc___build___get_mypy_config, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_c_extension_shim", (PyCFunction)CPyPy_mypyc___build___generate_c_extension_shim, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"group_name", (PyCFunction)CPyPy_mypyc___build___group_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"include_dir", (PyCFunction)CPyPy_mypyc___build___include_dir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_c", (PyCFunction)CPyPy_mypyc___build___generate_c, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"build_using_shared_lib", (PyCFunction)CPyPy_mypyc___build___build_using_shared_lib, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"build_single_module", (PyCFunction)CPyPy_mypyc___build___build_single_module, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"write_file", (PyCFunction)CPyPy_mypyc___build___write_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"construct_groups", (PyCFunction)CPyPy_mypyc___build___construct_groups, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_header_deps", (PyCFunction)CPyPy_mypyc___build___get_header_deps, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mypyc_build", (PyCFunction)CPyPy_mypyc___build___mypyc_build, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mypycify", (PyCFunction)CPyPy_mypyc___build___mypycify, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypyc___buildmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.build",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypyc___buildmodule_methods
};

PyObject *CPyInit_mypyc___build(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___build_internal) {
        Py_INCREF(CPyModule_mypyc___build_internal);
        return CPyModule_mypyc___build_internal;
    }
    CPyModule_mypyc___build_internal = PyModule_Create(&mypyc___buildmodule);
    if (unlikely(CPyModule_mypyc___build_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___build_internal, "__name__");
    CPyStatic_mypyc___build___globals = PyModule_GetDict(CPyModule_mypyc___build_internal);
    if (unlikely(CPyStatic_mypyc___build___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypyc___build_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___build_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___build_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_mypyc___build___get_extension(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_use_setuptools;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2II cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_extension_class;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = CPyStatics[6782]; /* 'setuptools' */
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[635]; /* 'modules' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 73, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    if (likely(PyDict_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_extension", 73, CPyStatic_mypyc___build___globals, "dict", cpy_r_r3);
        goto CPyL22;
    }
    cpy_r_r5 = PyDict_Contains(cpy_r_r4, cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 73, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    cpy_r_r7 = cpy_r_r5;
    cpy_r_use_setuptools = cpy_r_r7;
    cpy_r_r8 = CPyModule_sys;
    cpy_r_r9 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 76, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    if (likely(PyTuple_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_extension", 76, CPyStatic_mypyc___build___globals, "tuple", cpy_r_r10);
        goto CPyL22;
    }
    cpy_r_r12.f0 = 6;
    cpy_r_r12.f1 = 24;
    CPyTagged_INCREF(cpy_r_r12.f0);
    CPyTagged_INCREF(cpy_r_r12.f1);
    cpy_r_r13 = PyTuple_New(2);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9024 = CPyTagged_StealAsObject(cpy_r_r12.f0);
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp9024);
    PyObject *__tmp9025 = CPyTagged_StealAsObject(cpy_r_r12.f1);
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp9025);
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r11, cpy_r_r13, 0);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 76, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 76, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    if (!cpy_r_r15) goto CPyL16;
    if (cpy_r_use_setuptools) goto CPyL16;
    cpy_r_r16 = CPyStatic_mypyc___build___globals;
    cpy_r_r17 = CPyModule_distutils___core;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyStatics[6783]; /* 'distutils.core' */
    cpy_r_r21 = PyImport_Import(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 77, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    CPyModule_distutils___core = cpy_r_r21;
    CPy_INCREF(CPyModule_distutils___core);
    CPy_DECREF(cpy_r_r21);
CPyL12: ;
    cpy_r_r22 = CPyStatics[6784]; /* 'distutils' */
    cpy_r_r23 = PyImport_GetModuleDict();
    cpy_r_r24 = CPyStatics[6784]; /* 'distutils' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 77, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    cpy_r_r26 = CPyDict_SetItem(cpy_r_r16, cpy_r_r22, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 77, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    cpy_r_r28 = CPyModule_distutils___core;
    cpy_r_r29 = CPyStatics[6785]; /* 'Extension' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 79, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    cpy_r_extension_class = cpy_r_r30;
    goto CPyL21;
CPyL16: ;
    if (cpy_r_use_setuptools) goto CPyL19;
    cpy_r_r31 = CPyStatics[6786]; /* 'error: setuptools not installed' */
    cpy_r_r32 = CPyModule_sys;
    cpy_r_r33 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 82, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 82, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL19: ;
    cpy_r_r38 = CPyModule_setuptools;
    cpy_r_r39 = CPyStatics[6785]; /* 'Extension' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_extension", 83, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    cpy_r_extension_class = cpy_r_r40;
CPyL21: ;
    return cpy_r_extension_class;
CPyL22: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL23: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL19;
}

PyObject *CPyPy_mypyc___build___get_extension(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_extension", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_mypyc___build___get_extension();
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "get_extension", 70, CPyStatic_mypyc___build___globals);
    return NULL;
}

char CPyDef_mypyc___build___setup_mypycify_vars(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_vars;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyStatic_mypyc___build___globals;
    cpy_r_r1 = CPyStatics[4236]; /* 'sysconfig' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 93, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    cpy_r_r3 = CPyStatics[6787]; /* 'get_config_vars' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 93, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r4, 0, 0, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 93, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "setup_mypycify_vars", 93, CPyStatic_mypyc___build___globals, "dict", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_vars = cpy_r_r6;
    CPy_DECREF(cpy_r_vars);
    cpy_r_r7 = CPyModule_sys;
    cpy_r_r8 = CPyStatics[305]; /* 'platform' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 94, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "setup_mypycify_vars", 94, CPyStatic_mypyc___build___globals, "str", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_r11 = CPyStatics[1983]; /* 'darwin' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL9;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 94, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
CPyL9: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (!cpy_r_r17) goto CPyL12;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 97, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
}

PyObject *CPyPy_mypyc___build___setup_mypycify_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":setup_mypycify_vars", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_mypyc___build___setup_mypycify_vars();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "setup_mypycify_vars", 88, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___fail(PyObject *cpy_r_message) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "fail", 104, CPyStatic_mypyc___build___globals);
        goto CPyL3;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_message};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "fail", 104, CPyStatic_mypyc___build___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL2;
}

PyObject *CPyPy_mypyc___build___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"message", 0};
    static CPyArg_Parser parser = {"O:fail", kwlist, 0};
    PyObject *obj_message;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_message)) {
        return NULL;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___fail(arg_message);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "fail", 102, CPyStatic_mypyc___build___globals);
    return NULL;
}

char CPyDef_mypyc___build___emit_messages(PyObject *cpy_r_options, PyObject *cpy_r_messages, double cpy_r_dt, char cpy_r_serious) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    tuple_T2II cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2II cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_py_version;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    if (cpy_r_serious != 2) goto CPyL2;
    cpy_r_serious = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL18;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "emit_messages", 109, CPyStatic_mypyc___build___globals, "str", cpy_r_r0);
        goto CPyL17;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL11;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r5.f0);
    CPyTagged_INCREF(cpy_r_r5.f1);
    cpy_r_r6 = cpy_r_r5.f0;
    CPyTagged_INCREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r5.f0);
    CPyTagged_DECREF(cpy_r_r5.f1);
    cpy_r_r7 = CPyTagged_Str(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 110, CPyStatic_mypyc___build___globals);
        goto CPyL17;
    }
    cpy_r_r8 = CPyStatics[755]; /* '_' */
    cpy_r_r9 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    cpy_r_r10 = cpy_r_r9.f1;
    CPyTagged_INCREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r9.f0);
    CPyTagged_DECREF(cpy_r_r9.f1);
    cpy_r_r11 = CPyTagged_Str(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 110, CPyStatic_mypyc___build___globals);
        goto CPyL19;
    }
    cpy_r_r12 = CPyStr_Build(3, cpy_r_r7, cpy_r_r8, cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 110, CPyStatic_mypyc___build___globals);
        goto CPyL17;
    }
    cpy_r_py_version = cpy_r_r12;
    cpy_r_r13 = ((mypy___options___OptionsObject *)cpy_r_options)->_junit_xml;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "emit_messages", 111, CPyStatic_mypyc___build___globals, "str", cpy_r_r13);
        goto CPyL20;
    }
    cpy_r_r15 = ((mypy___options___OptionsObject *)cpy_r_options)->_platform;
    CPy_INCREF(cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "emit_messages", 111, CPyStatic_mypyc___build___globals, "str", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_r17 = CPyDef_mypy___util___write_junit_xml(cpy_r_dt, cpy_r_serious, cpy_r_messages, cpy_r_r14, cpy_r_py_version, cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_py_version);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 111, CPyStatic_mypyc___build___globals);
        goto CPyL17;
    }
CPyL11: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r22 = CPyStatics[189]; /* '\n' */
    cpy_r_r23 = PyUnicode_Join(cpy_r_r22, cpy_r_messages);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 113, CPyStatic_mypyc___build___globals);
        goto CPyL17;
    }
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[190]; /* 'print' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 113, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "emit_messages", 113, CPyStatic_mypyc___build___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL15: ;
    CPy_DECREF(cpy_r_r23);
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL18: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_py_version);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_py_version);
    CPy_DecRef(cpy_r_r14);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL15;
}

PyObject *CPyPy_mypyc___build___emit_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", "messages", "dt", "serious", 0};
    static CPyArg_Parser parser = {"OOO|O:emit_messages", kwlist, 0};
    PyObject *obj_options;
    PyObject *obj_messages;
    PyObject *obj_dt;
    PyObject *obj_serious = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_options, &obj_messages, &obj_dt, &obj_serious)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    double arg_dt;
    arg_dt = PyFloat_AsDouble(obj_dt);
    if (arg_dt == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_dt); goto fail;
    }
    char arg_serious;
    if (obj_serious == NULL) {
        arg_serious = 2;
    } else if (unlikely(!PyBool_Check(obj_serious))) {
        CPy_TypeError("bool", obj_serious); goto fail;
    } else
        arg_serious = obj_serious == Py_True;
    char retval = CPyDef_mypyc___build___emit_messages(arg_options, arg_messages, arg_dt, arg_serious);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "emit_messages", 107, CPyStatic_mypyc___build___globals);
    return NULL;
}

tuple_T3OOO CPyDef_mypyc___build___get_mypy_config(PyObject *cpy_r_mypy_options, PyObject *cpy_r_only_compile_paths, PyObject *cpy_r_compiler_options, PyObject *cpy_r_fscache) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_all_sources;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_paths_set;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_mypyc_sources;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T2II cpy_r_r65;
    char cpy_r_r66;
    tuple_T2II cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyPtr cpy_r_r84;
    int64_t cpy_r_r85;
    CPyTagged cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = NULL;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_mypy___main___process_options(cpy_r_mypy_options, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fscache, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 123, CPyStatic_mypyc___build___globals);
        goto CPyL50;
    }
    cpy_r_r7 = cpy_r_r6.f0;
    CPy_INCREF(cpy_r_r7);
    cpy_r_all_sources = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f1;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    cpy_r_options = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_only_compile_paths != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL12;
    cpy_r_r11 = PySet_New(cpy_r_only_compile_paths);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 125, CPyStatic_mypyc___build___globals);
        goto CPyL51;
    }
    cpy_r_paths_set = cpy_r_r11;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 126, CPyStatic_mypyc___build___globals);
        goto CPyL52;
    }
    cpy_r_r13 = 0;
CPyL5: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_all_sources)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL53;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_all_sources, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_modulefinder___BuildSource))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 126, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r18);
        goto CPyL54;
    }
    cpy_r_s = cpy_r_r19;
    cpy_r_r20 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_s)->_path;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PySet_Contains(cpy_r_paths_set, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 126, CPyStatic_mypyc___build___globals);
        goto CPyL55;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL56;
    cpy_r_r24 = PyList_Append(cpy_r_r12, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 126, CPyStatic_mypyc___build___globals);
        goto CPyL54;
    }
CPyL10: ;
    cpy_r_r26 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r26;
    goto CPyL5;
CPyL11: ;
    cpy_r_mypyc_sources = cpy_r_r12;
    goto CPyL13;
CPyL12: ;
    CPy_INCREF(cpy_r_all_sources);
    cpy_r_mypyc_sources = cpy_r_all_sources;
CPyL13: ;
    cpy_r_r27 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_separate;
    if (!cpy_r_r27) goto CPyL29;
CPyL14: ;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 131, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    cpy_r_r29 = 0;
CPyL16: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_mypyc_sources)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL58;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_mypyc_sources, cpy_r_r29);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_modulefinder___BuildSource))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 131, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r34);
        goto CPyL59;
    }
    cpy_r_src = cpy_r_r35;
    cpy_r_r36 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_src)->_path;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_r36 != cpy_r_r37;
    if (!cpy_r_r38) goto CPyL21;
    CPy_INCREF(cpy_r_r36);
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r39 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 132, CPyStatic_mypyc___build___globals, "str", cpy_r_r36);
        goto CPyL60;
    }
    cpy_r_r40 = CPyStr_IsTrue(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (cpy_r_r40) goto CPyL61;
CPyL21: ;
    cpy_r_r41 = cpy_r_r36;
    goto CPyL24;
CPyL22: ;
    cpy_r_r42 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_src)->_path;
    CPy_INCREF(cpy_r_r42);
    if (likely(cpy_r_r42 != Py_None))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 132, CPyStatic_mypyc___build___globals, "str", cpy_r_r42);
        goto CPyL62;
    }
    cpy_r_r44 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r45 = CPyStr_Endswith(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 ^ 1;
    cpy_r_r47 = cpy_r_r46 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r41 = cpy_r_r47;
CPyL24: ;
    cpy_r_r48 = PyObject_IsTrue(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", -1, CPyStatic_mypyc___build___globals);
        goto CPyL62;
    }
    cpy_r_r50 = cpy_r_r48;
    if (!cpy_r_r50) goto CPyL63;
    cpy_r_r51 = PyList_Append(cpy_r_r28, cpy_r_src);
    CPy_DECREF(cpy_r_src);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 131, CPyStatic_mypyc___build___globals);
        goto CPyL59;
    }
CPyL27: ;
    cpy_r_r53 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r53;
    goto CPyL16;
CPyL28: ;
    cpy_r_mypyc_sources = cpy_r_r28;
CPyL29: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_mypyc_sources)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (cpy_r_r57) goto CPyL31;
    cpy_r_r58.f0 = cpy_r_mypyc_sources;
    cpy_r_r58.f1 = cpy_r_all_sources;
    cpy_r_r58.f2 = cpy_r_options;
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_INCREF(cpy_r_r58.f2);
    CPy_DECREF(cpy_r_mypyc_sources);
    CPy_DECREF(cpy_r_all_sources);
    CPy_DECREF(cpy_r_options);
    return cpy_r_r58;
CPyL31: ;
    cpy_r_r59 = CPyModule_sys;
    cpy_r_r60 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 140, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    if (likely(PyTuple_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 140, CPyStatic_mypyc___build___globals, "tuple", cpy_r_r61);
        goto CPyL57;
    }
    cpy_r_r63 = CPySequenceTuple_GetSlice(cpy_r_r62, 0, 4);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 140, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    if (likely(PyTuple_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 140, CPyStatic_mypyc___build___globals, "tuple", cpy_r_r63);
        goto CPyL57;
    }
    PyObject *__tmp9026;
    if (unlikely(!(PyTuple_Check(cpy_r_r64) && PyTuple_GET_SIZE(cpy_r_r64) == 2))) {
        __tmp9026 = NULL;
        goto __LL9027;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r64, 0))))
        __tmp9026 = PyTuple_GET_ITEM(cpy_r_r64, 0);
    else {
        __tmp9026 = NULL;
    }
    if (__tmp9026 == NULL) goto __LL9027;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r64, 1))))
        __tmp9026 = PyTuple_GET_ITEM(cpy_r_r64, 1);
    else {
        __tmp9026 = NULL;
    }
    if (__tmp9026 == NULL) goto __LL9027;
    __tmp9026 = cpy_r_r64;
__LL9027: ;
    if (unlikely(__tmp9026 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r64); cpy_r_r65 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp9028 = PyTuple_GET_ITEM(cpy_r_r64, 0);
        CPyTagged __tmp9029;
        if (likely(PyLong_Check(__tmp9028)))
            __tmp9029 = CPyTagged_FromObject(__tmp9028);
        else {
            CPy_TypeError("int", __tmp9028); __tmp9029 = CPY_INT_TAG;
        }
        cpy_r_r65.f0 = __tmp9029;
        PyObject *__tmp9030 = PyTuple_GET_ITEM(cpy_r_r64, 1);
        CPyTagged __tmp9031;
        if (likely(PyLong_Check(__tmp9030)))
            __tmp9031 = CPyTagged_FromObject(__tmp9030);
        else {
            CPy_TypeError("int", __tmp9030); __tmp9031 = CPY_INT_TAG;
        }
        cpy_r_r65.f1 = __tmp9031;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 140, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_python_version.f0);
    CPyTagged_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_python_version.f1);
    ((mypy___options___OptionsObject *)cpy_r_options)->_python_version = cpy_r_r65;
    cpy_r_r67 = ((mypy___options___OptionsObject *)cpy_r_options)->_python_version;
    CPyTagged_INCREF(cpy_r_r67.f0);
    CPyTagged_INCREF(cpy_r_r67.f1);
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9032 = CPyTagged_StealAsObject(cpy_r_r67.f0);
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp9032);
    PyObject *__tmp9033 = CPyTagged_StealAsObject(cpy_r_r67.f1);
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp9033);
    cpy_r_r69 = CPyStatics[9015]; /* 0 */
    cpy_r_r70 = PyObject_GetItem(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 142, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r70)))
        cpy_r_r71 = CPyTagged_FromObject(cpy_r_r70);
    else {
        CPy_TypeError("int", cpy_r_r70); cpy_r_r71 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 142, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    cpy_r_r72 = cpy_r_r71 == 4;
    CPyTagged_DECREF(cpy_r_r71);
    if (!cpy_r_r72) goto CPyL40;
    cpy_r_r73 = CPyStatics[6788]; /* 'Python 2 not supported' */
    cpy_r_r74 = CPyDef_mypyc___build___fail(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 143, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    } else
        goto CPyL64;
CPyL40: ;
    cpy_r_r75 = ((mypy___options___OptionsObject *)cpy_r_options)->_strict_optional;
    if (cpy_r_r75) goto CPyL42;
CPyL41: ;
    cpy_r_r76 = CPyStatics[6789]; /* 'Disabling strict optional checking not supported' */
    cpy_r_r77 = CPyDef_mypyc___build___fail(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 145, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    } else
        goto CPyL65;
CPyL42: ;
    ((mypy___options___OptionsObject *)cpy_r_options)->_show_traceback = 1;
    ((mypy___options___OptionsObject *)cpy_r_options)->_export_types = 1;
    cpy_r_r80 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_separate;
    ((mypy___options___OptionsObject *)cpy_r_options)->_incremental = cpy_r_r80;
    ((mypy___options___OptionsObject *)cpy_r_options)->_preserve_asts = 1;
    cpy_r_r83 = 0;
CPyL43: ;
    cpy_r_r84 = (CPyPtr)&((PyVarObject *)cpy_r_mypyc_sources)->ob_size;
    cpy_r_r85 = *(int64_t *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 << 1;
    cpy_r_r87 = (Py_ssize_t)cpy_r_r83 < (Py_ssize_t)cpy_r_r86;
    if (!cpy_r_r87) goto CPyL49;
    cpy_r_r88 = CPyList_GetItemUnsafe(cpy_r_mypyc_sources, cpy_r_r83);
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_modulefinder___BuildSource))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 153, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r88);
        goto CPyL57;
    }
    cpy_r_source = cpy_r_r89;
    cpy_r_r90 = ((mypy___options___OptionsObject *)cpy_r_options)->_per_module_options;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r91);
    CPy_DECREF(cpy_r_source);
    cpy_r_r92 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r90, cpy_r_r91, 2);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 154, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    if (likely(PyDict_Check(cpy_r_r92)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_mypy_config", 154, CPyStatic_mypyc___build___globals, "dict", cpy_r_r92);
        goto CPyL57;
    }
    cpy_r_r94 = CPyStatics[4257]; /* 'mypyc' */
    cpy_r_r95 = 1 ? Py_True : Py_False;
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r93, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 154, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    cpy_r_r98 = cpy_r_r83 + 2;
    cpy_r_r83 = cpy_r_r98;
    goto CPyL43;
CPyL49: ;
    cpy_r_r99.f0 = cpy_r_mypyc_sources;
    cpy_r_r99.f1 = cpy_r_all_sources;
    cpy_r_r99.f2 = cpy_r_options;
    CPy_INCREF(cpy_r_r99.f0);
    CPy_INCREF(cpy_r_r99.f1);
    CPy_INCREF(cpy_r_r99.f2);
    CPy_DECREF(cpy_r_mypyc_sources);
    CPy_DECREF(cpy_r_all_sources);
    CPy_DECREF(cpy_r_options);
    return cpy_r_r99;
CPyL50: ;
    tuple_T3OOO __tmp9034 = { NULL, NULL, NULL };
    cpy_r_r100 = __tmp9034;
    return cpy_r_r100;
CPyL51: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_paths_set);
    goto CPyL50;
CPyL53: ;
    CPy_DECREF(cpy_r_paths_set);
    goto CPyL11;
CPyL54: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_paths_set);
    CPy_DecRef(cpy_r_r12);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_paths_set);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_s);
    goto CPyL50;
CPyL56: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL10;
CPyL57: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_mypyc_sources);
    goto CPyL50;
CPyL58: ;
    CPy_DECREF(cpy_r_mypyc_sources);
    goto CPyL28;
CPyL59: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_mypyc_sources);
    CPy_DecRef(cpy_r_r28);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_mypyc_sources);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r36);
    goto CPyL50;
CPyL61: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL22;
CPyL62: ;
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_mypyc_sources);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_src);
    goto CPyL50;
CPyL63: ;
    CPy_DECREF(cpy_r_src);
    goto CPyL27;
CPyL64: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL40;
CPyL65: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL42;
}

PyObject *CPyPy_mypyc___build___get_mypy_config(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mypy_options", "only_compile_paths", "compiler_options", "fscache", 0};
    static CPyArg_Parser parser = {"OOOO:get_mypy_config", kwlist, 0};
    PyObject *obj_mypy_options;
    PyObject *obj_only_compile_paths;
    PyObject *obj_compiler_options;
    PyObject *obj_fscache;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mypy_options, &obj_only_compile_paths, &obj_compiler_options, &obj_fscache)) {
        return NULL;
    }
    PyObject *arg_mypy_options;
    if (likely(PyList_Check(obj_mypy_options)))
        arg_mypy_options = obj_mypy_options;
    else {
        CPy_TypeError("list", obj_mypy_options); 
        goto fail;
    }
    PyObject *arg_only_compile_paths;
    arg_only_compile_paths = obj_only_compile_paths;
    if (arg_only_compile_paths != NULL) goto __LL9035;
    if (obj_only_compile_paths == Py_None)
        arg_only_compile_paths = obj_only_compile_paths;
    else {
        arg_only_compile_paths = NULL;
    }
    if (arg_only_compile_paths != NULL) goto __LL9035;
    CPy_TypeError("object or None", obj_only_compile_paths); 
    goto fail;
__LL9035: ;
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache))
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL9036;
    if (obj_fscache == Py_None)
        arg_fscache = obj_fscache;
    else {
        arg_fscache = NULL;
    }
    if (arg_fscache != NULL) goto __LL9036;
    CPy_TypeError("mypy.fscache.FileSystemCache or None", obj_fscache); 
    goto fail;
__LL9036: ;
    tuple_T3OOO retval = CPyDef_mypyc___build___get_mypy_config(arg_mypy_options, arg_only_compile_paths, arg_compiler_options, arg_fscache);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9037 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9037);
    PyObject *__tmp9038 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9038);
    PyObject *__tmp9039 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp9039);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "get_mypy_config", 116, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___generate_c_extension_shim(PyObject *cpy_r_full_module_name, PyObject *cpy_r_module_name, PyObject *cpy_r_dir_name, PyObject *cpy_r_group_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_shim_template;
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
    PyObject *cpy_r_cname;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_cpath;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    tuple_T3OOO cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    cpy_r_r0 = NULL;
    cpy_r_shim_template = cpy_r_r0;
    cpy_r_r1 = CPyStatics[224]; /* '.' */
    cpy_r_r2 = CPyStatic_mypyc___build___globals;
    cpy_r_r3 = CPyStatics[389]; /* 'os' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 170, CPyStatic_mypyc___build___globals);
        goto CPyL54;
    }
    cpy_r_r5 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 170, CPyStatic_mypyc___build___globals);
        goto CPyL54;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c_extension_shim", 170, CPyStatic_mypyc___build___globals, "str", cpy_r_r6);
        goto CPyL54;
    }
    cpy_r_r8 = PyUnicode_Replace(cpy_r_full_module_name, cpy_r_r1, cpy_r_r7, -1);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 170, CPyStatic_mypyc___build___globals);
        goto CPyL54;
    }
    cpy_r_r9 = CPyStatics[6790]; /* '.c' */
    cpy_r_r10 = CPyStr_Build(2, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 170, CPyStatic_mypyc___build___globals);
        goto CPyL54;
    }
    cpy_r_cname = cpy_r_r10;
    cpy_r_r11 = CPyModule_os___path;
    cpy_r_r12 = CPyStatics[175]; /* 'join' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 171, CPyStatic_mypyc___build___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r14[2] = {cpy_r_dir_name, cpy_r_cname};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 2, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 171, CPyStatic_mypyc___build___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_cname);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c_extension_shim", 171, CPyStatic_mypyc___build___globals, "str", cpy_r_r16);
        goto CPyL54;
    }
    cpy_r_cpath = cpy_r_r17;
    cpy_r_r18 = CPyDef_mypyc___build___include_dir();
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL56;
    }
    cpy_r_r19 = CPyStatics[6791]; /* 'module_shim.tmpl' */
    cpy_r_r20 = CPyModule_os___path;
    cpy_r_r21 = CPyStatics[175]; /* 'join' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r23[2] = {cpy_r_r18, cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 2, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals, "str", cpy_r_r25);
        goto CPyL56;
    }
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[199]; /* 'open' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r26);
    cpy_r_r33 = PyObject_Type(cpy_r_r32);
    cpy_r_r34 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL59;
    }
    cpy_r_r36 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r36);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_r32};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL60;
    }
    cpy_r_r41 = 1;
    cpy_r_f = cpy_r_r40;
    cpy_r_r42 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r43[1] = {cpy_r_f};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r42, cpy_r_r44, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 176, CPyStatic_mypyc___build___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeError("str", cpy_r_r45); 
        cpy_r_r46 = NULL;
    }
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 176, CPyStatic_mypyc___build___globals);
        goto CPyL21;
    } else
        goto CPyL62;
CPyL20: ;
    cpy_r_shim_template = cpy_r_r46;
    goto CPyL29;
CPyL21: ;
    cpy_r_r47 = CPy_CatchError();
    cpy_r_r41 = 0;
    cpy_r_r48 = CPy_GetExcInfo();
    cpy_r_r49 = cpy_r_r48.f0;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = cpy_r_r48.f1;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = cpy_r_r48.f2;
    CPy_INCREF(cpy_r_r51);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    PyObject *cpy_r_r52[4] = {cpy_r_r32, cpy_r_r49, cpy_r_r50, cpy_r_r51};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r53, 4, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL63;
    }
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    cpy_r_r55 = PyObject_IsTrue(cpy_r_r54);
    CPy_DecRef(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL27;
    }
    cpy_r_r57 = cpy_r_r55;
    if (cpy_r_r57) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL64;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    goto CPyL29;
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    cpy_r_r58 = CPy_KeepPropagating();
    if (!cpy_r_r58) {
        goto CPyL30;
    } else
        goto CPyL65;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    tuple_T3OOO __tmp9040 = { NULL, NULL, NULL };
    cpy_r_r59 = __tmp9040;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL31;
CPyL30: ;
    cpy_r_r61 = CPy_CatchError();
    cpy_r_r60 = cpy_r_r61;
CPyL31: ;
    if (!cpy_r_r41) goto CPyL66;
    cpy_r_r62 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r63[4] = {cpy_r_r32, cpy_r_r62, cpy_r_r62, cpy_r_r62};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r35, cpy_r_r64, 4, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 175, CPyStatic_mypyc___build___globals);
        goto CPyL67;
    } else
        goto CPyL68;
CPyL33: ;
    CPy_DECREF(cpy_r_r32);
CPyL34: ;
    if (cpy_r_r60.f0 == NULL) {
        goto CPyL41;
    } else
        goto CPyL69;
CPyL35: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL70;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    if (cpy_r_r60.f0 == NULL) goto CPyL39;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_XDECREF(cpy_r_r60.f0);
    CPy_XDECREF(cpy_r_r60.f1);
    CPy_XDECREF(cpy_r_r60.f2);
CPyL39: ;
    cpy_r_r66 = CPy_KeepPropagating();
    if (!cpy_r_r66) goto CPyL53;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r67 = CPyDef_mypyc___common___shared_lib_name(cpy_r_group_name);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 182, CPyStatic_mypyc___build___globals);
        goto CPyL56;
    }
    cpy_r_r68 = CPyDef_namegen___exported_name(cpy_r_full_module_name);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 183, CPyStatic_mypyc___build___globals);
        goto CPyL71;
    }
    cpy_r_r69 = CPyStatics[193]; /* 'format' */
    if (cpy_r_shim_template == NULL) {
        goto CPyL72;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"shim_template\" referenced before assignment");
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", -1, CPyStatic_mypyc___build___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL46: ;
    PyObject *cpy_r_r71[4] = {cpy_r_shim_template, cpy_r_module_name, cpy_r_r67, cpy_r_r68};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = CPyStatics[9918]; /* ('modname', 'libname', 'full_modname') */
    cpy_r_r74 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r72, 9223372036854775809ULL, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 180, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    if (cpy_r_shim_template == NULL) {
        goto CPyL74;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"shim_template\" referenced before assignment");
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", -1, CPyStatic_mypyc___build___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL50: ;
    CPy_XDECREF(cpy_r_shim_template);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    if (likely(PyUnicode_Check(cpy_r_r74)))
        cpy_r_r76 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c_extension_shim", 180, CPyStatic_mypyc___build___globals, "str", cpy_r_r74);
        goto CPyL75;
    }
    cpy_r_r77 = CPyDef_mypyc___build___write_file(cpy_r_cpath, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 178, CPyStatic_mypyc___build___globals);
        goto CPyL75;
    }
    return cpy_r_cpath;
CPyL53: ;
    cpy_r_r78 = NULL;
    return cpy_r_r78;
CPyL54: ;
    CPy_XDecRef(cpy_r_shim_template);
    goto CPyL53;
CPyL55: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cname);
    goto CPyL53;
CPyL56: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    goto CPyL53;
CPyL57: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r18);
    goto CPyL53;
CPyL58: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r26);
    goto CPyL53;
CPyL59: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r33);
    goto CPyL53;
CPyL60: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL21;
CPyL62: ;
    CPy_XDECREF(cpy_r_shim_template);
    goto CPyL20;
CPyL63: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL27;
CPyL64: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    goto CPyL25;
CPyL65: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r35);
    goto CPyL28;
CPyL66: ;
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r35);
    goto CPyL34;
CPyL67: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r32);
    goto CPyL37;
CPyL68: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL33;
CPyL69: ;
    CPy_XDECREF(cpy_r_shim_template);
    CPy_DECREF(cpy_r_cpath);
    goto CPyL35;
CPyL70: ;
    CPy_XDECREF(cpy_r_r60.f0);
    CPy_XDECREF(cpy_r_r60.f1);
    CPy_XDECREF(cpy_r_r60.f2);
    goto CPyL36;
CPyL71: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r67);
    goto CPyL53;
CPyL72: ;
    CPy_DECREF(cpy_r_cpath);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    goto CPyL44;
CPyL73: ;
    CPy_XDecRef(cpy_r_shim_template);
    CPy_DecRef(cpy_r_cpath);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r68);
    goto CPyL53;
CPyL74: ;
    CPy_DECREF(cpy_r_cpath);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r74);
    goto CPyL48;
CPyL75: ;
    CPy_DecRef(cpy_r_cpath);
    goto CPyL53;
}

PyObject *CPyPy_mypyc___build___generate_c_extension_shim(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"full_module_name", "module_name", "dir_name", "group_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_c_extension_shim", kwlist, 0};
    PyObject *obj_full_module_name;
    PyObject *obj_module_name;
    PyObject *obj_dir_name;
    PyObject *obj_group_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_full_module_name, &obj_module_name, &obj_dir_name, &obj_group_name)) {
        return NULL;
    }
    PyObject *arg_full_module_name;
    if (likely(PyUnicode_Check(obj_full_module_name)))
        arg_full_module_name = obj_full_module_name;
    else {
        CPy_TypeError("str", obj_full_module_name); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *arg_dir_name;
    if (likely(PyUnicode_Check(obj_dir_name)))
        arg_dir_name = obj_dir_name;
    else {
        CPy_TypeError("str", obj_dir_name); 
        goto fail;
    }
    PyObject *arg_group_name;
    if (likely(PyUnicode_Check(obj_group_name)))
        arg_group_name = obj_group_name;
    else {
        CPy_TypeError("str", obj_group_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___generate_c_extension_shim(arg_full_module_name, arg_module_name, arg_dir_name, arg_group_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "generate_c_extension_shim", 159, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___group_name(PyObject *cpy_r_modules) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_h;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 == 2;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = CPyList_GetItemShort(cpy_r_modules, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 193, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "group_name", 193, CPyStatic_mypyc___build___globals, "str", cpy_r_r4);
        goto CPyL14;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = CPyModule_hashlib;
    cpy_r_r7 = CPyStatics[6795]; /* 'sha1' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 195, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r8, 0, 0, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 195, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    cpy_r_h = cpy_r_r9;
    cpy_r_r10 = CPyStatics[242]; /* ',' */
    cpy_r_r11 = PyUnicode_Join(cpy_r_r10, cpy_r_modules);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 196, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPy_Encode(cpy_r_r11, NULL, NULL);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 196, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    cpy_r_r13 = CPyStatics[1308]; /* 'update' */
    PyObject *cpy_r_r14[2] = {cpy_r_h, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 196, CPyStatic_mypyc___build___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL9: ;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r17 = CPyStatics[6551]; /* 'hexdigest' */
    PyObject *cpy_r_r18[1] = {cpy_r_h};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 197, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_h);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "group_name", 197, CPyStatic_mypyc___build___globals, "str", cpy_r_r20);
        goto CPyL14;
    }
    cpy_r_r22 = CPyStr_GetSlice(cpy_r_r21, 0, 40);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "group_name", 197, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "group_name", 197, CPyStatic_mypyc___build___globals, "str", cpy_r_r22);
        goto CPyL14;
    }
    return cpy_r_r23;
CPyL14: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL15: ;
    CPy_DecRef(cpy_r_h);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_h);
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL9;
}

PyObject *CPyPy_mypyc___build___group_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", 0};
    static CPyArg_Parser parser = {"O:group_name", kwlist, 0};
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___group_name(arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "group_name", 190, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___include_dir(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatic_mypyc___build___globals;
    cpy_r_r1 = CPyStatics[150]; /* '__file__' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals, "str", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = CPyModule_os___path;
    cpy_r_r5 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals, "str", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_r11 = CPyModule_os___path;
    cpy_r_r12 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r10};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals, "str", cpy_r_r16);
        goto CPyL12;
    }
    cpy_r_r18 = CPyStatics[6796]; /* 'lib-rt' */
    cpy_r_r19 = CPyModule_os___path;
    cpy_r_r20 = CPyStatics[175]; /* 'join' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r22[2] = {cpy_r_r17, cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 2, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "include_dir", 202, CPyStatic_mypyc___build___globals, "str", cpy_r_r24);
        goto CPyL12;
    }
    return cpy_r_r25;
CPyL12: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL13: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL12;
}

PyObject *CPyPy_mypyc___build___include_dir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":include_dir", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_mypyc___build___include_dir();
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "include_dir", 200, CPyStatic_mypyc___build___globals);
    return NULL;
}

tuple_T2OO CPyDef_mypyc___build___generate_c(PyObject *cpy_r_sources, PyObject *cpy_r_options, PyObject *cpy_r_groups, PyObject *cpy_r_fscache, PyObject *cpy_r_compiler_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    double cpy_r_r5;
    char cpy_r_r6;
    double cpy_r_t0;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    double cpy_r_r22;
    char cpy_r_r23;
    double cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    double cpy_r_r43;
    char cpy_r_r44;
    double cpy_r_t1;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    double cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    double cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyPtr cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_errors;
    char cpy_r_r90;
    tuple_T2OO cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_ctext;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    double cpy_r_r98;
    char cpy_r_r99;
    double cpy_r_t2;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    double cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    double cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject **cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    CPyPtr cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject **cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    tuple_T2OO cpy_r_r142;
    tuple_T2OO cpy_r_r143;
    cpy_r_r0 = NULL;
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyModule_time;
    cpy_r_r2 = CPyStatics[147]; /* 'time' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 220, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r3, 0, 0, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 220, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r5 = PyFloat_AsDouble(cpy_r_r4);
    if (cpy_r_r5 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r4); cpy_r_r5 = -113.0;
    }
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 == -113.0;
    if (unlikely(cpy_r_r6)) goto CPyL4;
CPyL3: ;
    cpy_r_t0 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = PyErr_Occurred();
    if (unlikely(cpy_r_r7 != NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 220, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    } else
        goto CPyL3;
CPyL5: ;
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emitmodule___parse_and_typecheck(cpy_r_sources, cpy_r_options, cpy_r_compiler_options, cpy_r_groups, cpy_r_fscache, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 223, CPyStatic_mypyc___build___globals);
        goto CPyL7;
    } else
        goto CPyL74;
CPyL6: ;
    cpy_r_result = cpy_r_r9;
    goto CPyL25;
CPyL7: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = (PyObject *)CPyType_mypy___errors___CompileError;
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL75;
    cpy_r_r13 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_mypy___errors___CompileError))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c", 226, CPyStatic_mypyc___build___globals, "mypy.errors.CompileError", cpy_r_r13);
        goto CPyL76;
    }
    cpy_r_e = cpy_r_r14;
    cpy_r_r15 = CPyStatics[135]; /* 'messages' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_e, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL77;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals, "list", cpy_r_r16);
        goto CPyL77;
    }
    cpy_r_r18 = CPyModule_time;
    cpy_r_r19 = CPyStatics[147]; /* 'time' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL78;
    }
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r20, 0, 0, 0);
    CPy_DecRef(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL78;
    }
    cpy_r_r22 = PyFloat_AsDouble(cpy_r_r21);
    if (cpy_r_r22 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r21); cpy_r_r22 = -113.0;
    }
    CPy_DecRef(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 == -113.0;
    if (unlikely(cpy_r_r23)) goto CPyL15;
CPyL14: ;
    cpy_r_r24 = cpy_r_r22 - cpy_r_t0;
    cpy_r_r25 = CPyStatics[134]; /* 'use_stdout' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_e, cpy_r_r25);
    CPy_DecRef(cpy_r_e);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL79;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r27 = PyErr_Occurred();
    if (unlikely(cpy_r_r27 != NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL78;
    } else
        goto CPyL14;
CPyL16: ;
    if (unlikely(!PyBool_Check(cpy_r_r26))) {
        CPy_TypeError("bool", cpy_r_r26); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r26 == Py_True;
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL79;
    }
    cpy_r_r29 = cpy_r_r28 ^ 1;
    cpy_r_r30 = CPyDef_mypyc___build___emit_messages(cpy_r_options, cpy_r_r17, cpy_r_r24, cpy_r_r29);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 227, CPyStatic_mypyc___build___globals);
        goto CPyL76;
    }
    cpy_r_r31 = CPyModule_sys;
    cpy_r_r32 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 228, CPyStatic_mypyc___build___globals);
        goto CPyL76;
    }
    cpy_r_r34 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r35[1] = {cpy_r_r34};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r36, 1, 0);
    CPy_DecRef(cpy_r_r33);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 228, CPyStatic_mypyc___build___globals);
        goto CPyL76;
    } else
        goto CPyL80;
CPyL20: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL23;
    } else
        goto CPyL81;
CPyL21: ;
    CPy_Unreachable();
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL25;
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) goto CPyL72;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r39 = CPyModule_time;
    cpy_r_r40 = CPyStatics[147]; /* 'time' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 230, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r41, 0, 0, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 230, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r43 = PyFloat_AsDouble(cpy_r_r42);
    if (cpy_r_r43 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r42); cpy_r_r43 = -113.0;
    }
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 == -113.0;
    if (unlikely(cpy_r_r44)) goto CPyL29;
CPyL28: ;
    cpy_r_t1 = cpy_r_r43;
    if (cpy_r_result == NULL) {
        goto CPyL30;
    } else
        goto CPyL32;
CPyL29: ;
    cpy_r_r45 = PyErr_Occurred();
    if (unlikely(cpy_r_r45 != NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 230, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    } else
        goto CPyL28;
CPyL30: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 231, CPyStatic_mypyc___build___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r47 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = cpy_r_r50 != 0;
    if (!cpy_r_r51) goto CPyL39;
    if (cpy_r_result != NULL) goto CPyL36;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 232, CPyStatic_mypyc___build___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r53 = ((mypy___build___BuildResultObject *)cpy_r_result)->_errors;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r55 = 2;
    cpy_r_r56 = CPyDef_mypyc___build___emit_messages(cpy_r_options, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 232, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r57 = CPyModule_sys;
    cpy_r_r58 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 233, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r60 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r61[1] = {cpy_r_r60};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r59, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 233, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    } else
        goto CPyL82;
CPyL39: ;
    cpy_r_r64 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_verbose;
    if (!cpy_r_r64) goto CPyL47;
CPyL40: ;
    cpy_r_r65 = CPyStatics[163]; /* '' */
    cpy_r_r66 = CPyStatics[6797]; /* 'Parsed and typechecked in ' */
    cpy_r_r67 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r68 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r69 = CPyStatics[440]; /* '.3f' */
    cpy_r_r70 = CPyStatics[193]; /* 'format' */
    cpy_r_r71 = PyFloat_FromDouble(cpy_r_r68);
    PyObject *cpy_r_r72[3] = {cpy_r_r67, cpy_r_r71, cpy_r_r69};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r73, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals);
        goto CPyL83;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(PyUnicode_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals, "str", cpy_r_r74);
        goto CPyL73;
    }
    cpy_r_r76 = CPyStatics[1417]; /* 's' */
    cpy_r_r77 = PyList_New(3);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals);
        goto CPyL84;
    }
    cpy_r_r78 = (CPyPtr)&((PyListObject *)cpy_r_r77)->ob_item;
    cpy_r_r79 = *(CPyPtr *)cpy_r_r78;
    CPy_INCREF(cpy_r_r66);
    *(PyObject * *)cpy_r_r79 = cpy_r_r66;
    cpy_r_r80 = cpy_r_r79 + 8;
    *(PyObject * *)cpy_r_r80 = cpy_r_r75;
    cpy_r_r81 = cpy_r_r79 + 16;
    CPy_INCREF(cpy_r_r76);
    *(PyObject * *)cpy_r_r81 = cpy_r_r76;
    cpy_r_r82 = PyUnicode_Join(cpy_r_r65, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_r83 = CPyModule_builtins;
    cpy_r_r84 = CPyStatics[190]; /* 'print' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals);
        goto CPyL85;
    }
    PyObject *cpy_r_r86[1] = {cpy_r_r82};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 236, CPyStatic_mypyc___build___globals);
        goto CPyL85;
    } else
        goto CPyL86;
CPyL46: ;
    CPy_DECREF(cpy_r_r82);
CPyL47: ;
    cpy_r_r89 = CPyDef_mypyc___errors___Errors(cpy_r_options);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 238, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_errors = cpy_r_r89;
    if (cpy_r_result == NULL) {
        goto CPyL87;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 239, CPyStatic_mypyc___build___globals);
        goto CPyL72;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r91 = CPyDef_emitmodule___compile_modules_to_c(cpy_r_result, cpy_r_compiler_options, cpy_r_errors, cpy_r_groups);
    CPy_XDECREF(cpy_r_result);
    if (unlikely(cpy_r_r91.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 239, CPyStatic_mypyc___build___globals);
        goto CPyL88;
    }
    cpy_r_r92 = cpy_r_r91.f0;
    CPy_INCREF(cpy_r_r92);
    cpy_r_modules = cpy_r_r92;
    cpy_r_r93 = cpy_r_r91.f1;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r91.f0);
    CPy_DECREF(cpy_r_r91.f1);
    cpy_r_ctext = cpy_r_r93;
    cpy_r_r94 = CPyModule_time;
    cpy_r_r95 = CPyStatics[147]; /* 'time' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 242, CPyStatic_mypyc___build___globals);
        goto CPyL89;
    }
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r96, 0, 0, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 242, CPyStatic_mypyc___build___globals);
        goto CPyL89;
    }
    cpy_r_r98 = PyFloat_AsDouble(cpy_r_r97);
    if (cpy_r_r98 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r97); cpy_r_r98 = -113.0;
    }
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 == -113.0;
    if (unlikely(cpy_r_r99)) goto CPyL56;
CPyL55: ;
    cpy_r_t2 = cpy_r_r98;
    cpy_r_r100 = CPyDef_mypyc___errors___Errors___new_messages(cpy_r_errors);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 243, CPyStatic_mypyc___build___globals);
        goto CPyL89;
    } else
        goto CPyL57;
CPyL56: ;
    cpy_r_r101 = PyErr_Occurred();
    if (unlikely(cpy_r_r101 != NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 242, CPyStatic_mypyc___build___globals);
        goto CPyL89;
    } else
        goto CPyL55;
CPyL57: ;
    cpy_r_r102 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r103 = 2;
    cpy_r_r104 = CPyDef_mypyc___build___emit_messages(cpy_r_options, cpy_r_r100, cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r104 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 243, CPyStatic_mypyc___build___globals);
        goto CPyL89;
    }
    cpy_r_r105 = ((mypyc___errors___ErrorsObject *)cpy_r_errors)->_num_errors;
    CPyTagged_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_errors);
    cpy_r_r106 = cpy_r_r105 != 0;
    CPyTagged_DECREF(cpy_r_r105);
    if (!cpy_r_r106) goto CPyL61;
    cpy_r_r107 = CPyModule_sys;
    cpy_r_r108 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r109 = CPyObject_GetAttr(cpy_r_r107, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 246, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    cpy_r_r110 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r111[1] = {cpy_r_r110};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r109, cpy_r_r112, 1, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 246, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL61: ;
    cpy_r_r114 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_verbose;
    if (!cpy_r_r114) goto CPyL69;
CPyL62: ;
    cpy_r_r115 = CPyStatics[163]; /* '' */
    cpy_r_r116 = CPyStatics[6798]; /* 'Compiled to C in ' */
    cpy_r_r117 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r118 = cpy_r_t2 - cpy_r_t1;
    cpy_r_r119 = CPyStatics[440]; /* '.3f' */
    cpy_r_r120 = CPyStatics[193]; /* 'format' */
    cpy_r_r121 = PyFloat_FromDouble(cpy_r_r118);
    PyObject *cpy_r_r122[3] = {cpy_r_r117, cpy_r_r121, cpy_r_r119};
    cpy_r_r123 = (PyObject **)&cpy_r_r122;
    cpy_r_r124 = PyObject_VectorcallMethod(cpy_r_r120, cpy_r_r123, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r121);
    if (likely(PyUnicode_Check(cpy_r_r124)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals, "str", cpy_r_r124);
        goto CPyL90;
    }
    cpy_r_r126 = CPyStatics[1417]; /* 's' */
    cpy_r_r127 = PyList_New(3);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    cpy_r_r128 = (CPyPtr)&((PyListObject *)cpy_r_r127)->ob_item;
    cpy_r_r129 = *(CPyPtr *)cpy_r_r128;
    CPy_INCREF(cpy_r_r116);
    *(PyObject * *)cpy_r_r129 = cpy_r_r116;
    cpy_r_r130 = cpy_r_r129 + 8;
    *(PyObject * *)cpy_r_r130 = cpy_r_r125;
    cpy_r_r131 = cpy_r_r129 + 16;
    CPy_INCREF(cpy_r_r126);
    *(PyObject * *)cpy_r_r131 = cpy_r_r126;
    cpy_r_r132 = PyUnicode_Join(cpy_r_r115, cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    cpy_r_r133 = CPyModule_builtins;
    cpy_r_r134 = CPyStatics[190]; /* 'print' */
    cpy_r_r135 = CPyObject_GetAttr(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals);
        goto CPyL94;
    }
    PyObject *cpy_r_r136[1] = {cpy_r_r132};
    cpy_r_r137 = (PyObject **)&cpy_r_r136;
    cpy_r_r138 = _PyObject_Vectorcall(cpy_r_r135, cpy_r_r137, 1, 0);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 249, CPyStatic_mypyc___build___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL68: ;
    CPy_DECREF(cpy_r_r132);
CPyL69: ;
    cpy_r_r139 = CPyStatics[189]; /* '\n' */
    cpy_r_r140 = CPyDef_pprint___format_modules(cpy_r_modules);
    CPy_DECREF(cpy_r_modules);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 251, CPyStatic_mypyc___build___globals);
        goto CPyL96;
    }
    cpy_r_r141 = PyUnicode_Join(cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "generate_c", 251, CPyStatic_mypyc___build___globals);
        goto CPyL96;
    }
    cpy_r_r142.f0 = cpy_r_ctext;
    cpy_r_r142.f1 = cpy_r_r141;
    CPy_INCREF(cpy_r_r142.f0);
    CPy_INCREF(cpy_r_r142.f1);
    CPy_DECREF(cpy_r_ctext);
    CPy_DECREF(cpy_r_r141);
    return cpy_r_r142;
CPyL72: ;
    tuple_T2OO __tmp9041 = { NULL, NULL };
    cpy_r_r143 = __tmp9041;
    return cpy_r_r143;
CPyL73: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL72;
CPyL74: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL6;
CPyL75: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL20;
CPyL76: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL23;
CPyL77: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    goto CPyL23;
CPyL78: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL79: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL80: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL22;
CPyL81: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL21;
CPyL82: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL39;
CPyL83: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r71);
    goto CPyL72;
CPyL84: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r75);
    goto CPyL72;
CPyL85: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r82);
    goto CPyL72;
CPyL86: ;
    CPy_DECREF(cpy_r_r88);
    goto CPyL46;
CPyL87: ;
    CPy_DECREF(cpy_r_errors);
    goto CPyL49;
CPyL88: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL72;
CPyL89: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    goto CPyL72;
CPyL90: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    goto CPyL72;
CPyL91: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL61;
CPyL92: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_r121);
    goto CPyL72;
CPyL93: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_r125);
    goto CPyL72;
CPyL94: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_r132);
    goto CPyL72;
CPyL95: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL68;
CPyL96: ;
    CPy_DecRef(cpy_r_ctext);
    goto CPyL72;
}

PyObject *CPyPy_mypyc___build___generate_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "options", "groups", "fscache", "compiler_options", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_c", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_options;
    PyObject *obj_groups;
    PyObject *obj_fscache;
    PyObject *obj_compiler_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_options, &obj_groups, &obj_fscache, &obj_compiler_options)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_groups;
    if (likely(PyList_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("list", obj_groups); 
        goto fail;
    }
    PyObject *arg_fscache;
    if (likely(PyObject_TypeCheck(obj_fscache, CPyType_fscache___FileSystemCache)))
        arg_fscache = obj_fscache;
    else {
        CPy_TypeError("mypy.fscache.FileSystemCache", obj_fscache); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_mypyc___build___generate_c(arg_sources, arg_options, arg_groups, arg_fscache, arg_compiler_options);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9042 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9042);
    PyObject *__tmp9043 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9043);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "generate_c", 205, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___build_using_shared_lib(PyObject *cpy_r_sources, PyObject *cpy_r_group_name, PyObject *cpy_r_cfiles, PyObject *cpy_r_deps, PyObject *cpy_r_build_dir, PyObject *cpy_r_extra_compile_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_extensions;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_module_name;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_shim_file;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_full_module_name;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T2OO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    cpy_r_r0 = CPyDef_mypyc___build___get_extension();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 274, CPyStatic_mypyc___build___globals);
        goto CPyL34;
    }
    cpy_r_r1 = CPyDef_mypyc___common___shared_lib_name(cpy_r_group_name);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 275, CPyStatic_mypyc___build___globals);
        goto CPyL35;
    }
    cpy_r_r2 = CPyDef_mypyc___build___include_dir();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 277, CPyStatic_mypyc___build___globals);
        goto CPyL36;
    }
    cpy_r_r3 = PyList_New(2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 277, CPyStatic_mypyc___build___globals);
        goto CPyL37;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    *(PyObject * *)cpy_r_r5 = cpy_r_r2;
    cpy_r_r6 = cpy_r_r5 + 8;
    CPy_INCREF(cpy_r_build_dir);
    *(PyObject * *)cpy_r_r6 = cpy_r_build_dir;
    PyObject *cpy_r_r7[5] = {
        cpy_r_r1, cpy_r_cfiles, cpy_r_r3, cpy_r_deps,
        cpy_r_extra_compile_args
    };
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = CPyStatics[9919]; /* ('sources', 'include_dirs', 'depends',
                                    'extra_compile_args') */
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r0, cpy_r_r8, 1, cpy_r_r9);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 274, CPyStatic_mypyc___build___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 273, CPyStatic_mypyc___build___globals);
        goto CPyL39;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_extensions = cpy_r_r11;
    cpy_r_r14 = 0;
CPyL7: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL33;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_modulefinder___BuildSource))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "build_using_shared_lib", 283, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r19);
        goto CPyL40;
    }
    cpy_r_source = cpy_r_r20;
    cpy_r_r21 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[224]; /* '.' */
    cpy_r_r23 = PyUnicode_Split(cpy_r_r21, cpy_r_r22, -1);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 284, CPyStatic_mypyc___build___globals);
        goto CPyL41;
    }
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, -2);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 284, CPyStatic_mypyc___build___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "build_using_shared_lib", 284, CPyStatic_mypyc___build___globals, "str", cpy_r_r24);
        goto CPyL41;
    }
    cpy_r_module_name = cpy_r_r25;
    cpy_r_r26 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyDef_mypyc___build___generate_c_extension_shim(cpy_r_r26, cpy_r_module_name, cpy_r_build_dir, cpy_r_group_name);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_module_name);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 285, CPyStatic_mypyc___build___globals);
        goto CPyL41;
    }
    cpy_r_shim_file = cpy_r_r27;
    cpy_r_r28 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_module;
    CPy_INCREF(cpy_r_r28);
    cpy_r_full_module_name = cpy_r_r28;
    cpy_r_r29 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    if (!cpy_r_r31) goto CPyL42;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r32 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "build_using_shared_lib", 290, CPyStatic_mypyc___build___globals, "str", cpy_r_r29);
        goto CPyL43;
    }
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (cpy_r_r33) {
        goto CPyL18;
    } else
        goto CPyL44;
CPyL16: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 290, CPyStatic_mypyc___build___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r35 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source)->_path;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_source);
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "build_using_shared_lib", 291, CPyStatic_mypyc___build___globals, "str", cpy_r_r35);
        goto CPyL45;
    }
    cpy_r_r37 = CPyModule_os___path;
    cpy_r_r38 = CPyStatics[369]; /* 'split' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 291, CPyStatic_mypyc___build___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r36};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 291, CPyStatic_mypyc___build___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r36);
    PyObject *__tmp9044;
    if (unlikely(!(PyTuple_Check(cpy_r_r42) && PyTuple_GET_SIZE(cpy_r_r42) == 2))) {
        __tmp9044 = NULL;
        goto __LL9045;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r42, 0))))
        __tmp9044 = PyTuple_GET_ITEM(cpy_r_r42, 0);
    else {
        __tmp9044 = NULL;
    }
    if (__tmp9044 == NULL) goto __LL9045;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r42, 1))))
        __tmp9044 = PyTuple_GET_ITEM(cpy_r_r42, 1);
    else {
        __tmp9044 = NULL;
    }
    if (__tmp9044 == NULL) goto __LL9045;
    __tmp9044 = cpy_r_r42;
__LL9045: ;
    if (unlikely(__tmp9044 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r42); cpy_r_r43 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9046 = PyTuple_GET_ITEM(cpy_r_r42, 0);
        CPy_INCREF(__tmp9046);
        PyObject *__tmp9047;
        if (likely(PyUnicode_Check(__tmp9046)))
            __tmp9047 = __tmp9046;
        else {
            CPy_TypeError("str", __tmp9046); 
            __tmp9047 = NULL;
        }
        cpy_r_r43.f0 = __tmp9047;
        PyObject *__tmp9048 = PyTuple_GET_ITEM(cpy_r_r42, 1);
        CPy_INCREF(__tmp9048);
        PyObject *__tmp9049;
        if (likely(PyUnicode_Check(__tmp9048)))
            __tmp9049 = __tmp9048;
        else {
            CPy_TypeError("str", __tmp9048); 
            __tmp9049 = NULL;
        }
        cpy_r_r43.f1 = __tmp9049;
    }
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 291, CPyStatic_mypyc___build___globals);
        goto CPyL45;
    }
    cpy_r_r44 = cpy_r_r43.f1;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r43.f0);
    CPy_DECREF(cpy_r_r43.f1);
    cpy_r_r45 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL25;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL25;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 291, CPyStatic_mypyc___build___globals);
        goto CPyL45;
    }
CPyL25: ;
    cpy_r_r51 = cpy_r_r46 == 0;
    if (!cpy_r_r51) goto CPyL28;
    cpy_r_r52 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r53 = CPyStr_Append(cpy_r_full_module_name, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 292, CPyStatic_mypyc___build___globals);
        goto CPyL47;
    }
    cpy_r_full_module_name = cpy_r_r53;
CPyL28: ;
    cpy_r_r54 = CPyDef_mypyc___build___get_extension();
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 294, CPyStatic_mypyc___build___globals);
        goto CPyL45;
    }
    cpy_r_r55 = PyList_New(1);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 295, CPyStatic_mypyc___build___globals);
        goto CPyL48;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    *(PyObject * *)cpy_r_r57 = cpy_r_shim_file;
    PyObject *cpy_r_r58[3] = {cpy_r_full_module_name, cpy_r_r55, cpy_r_extra_compile_args};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = CPyStatics[9920]; /* ('sources', 'extra_compile_args') */
    cpy_r_r61 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r59, 1, cpy_r_r60);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 294, CPyStatic_mypyc___build___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_full_module_name);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r62 = PyList_Append(cpy_r_extensions, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 293, CPyStatic_mypyc___build___globals);
        goto CPyL40;
    }
    cpy_r_r64 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r64;
    goto CPyL7;
CPyL33: ;
    return cpy_r_extensions;
CPyL34: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_extensions);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_source);
    goto CPyL34;
CPyL42: ;
    CPy_DECREF(cpy_r_extensions);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_shim_file);
    CPy_DECREF(cpy_r_full_module_name);
    CPy_DECREF(cpy_r_r29);
    goto CPyL16;
CPyL43: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_source);
    CPy_DecRef(cpy_r_shim_file);
    CPy_DecRef(cpy_r_full_module_name);
    goto CPyL34;
CPyL44: ;
    CPy_DECREF(cpy_r_extensions);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_shim_file);
    CPy_DECREF(cpy_r_full_module_name);
    goto CPyL16;
CPyL45: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_shim_file);
    CPy_DecRef(cpy_r_full_module_name);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_shim_file);
    CPy_DecRef(cpy_r_full_module_name);
    CPy_DecRef(cpy_r_r36);
    goto CPyL34;
CPyL47: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_shim_file);
    goto CPyL34;
CPyL48: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_shim_file);
    CPy_DecRef(cpy_r_full_module_name);
    CPy_DecRef(cpy_r_r54);
    goto CPyL34;
CPyL49: ;
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_full_module_name);
    CPy_DecRef(cpy_r_r55);
    goto CPyL34;
}

PyObject *CPyPy_mypyc___build___build_using_shared_lib(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "group_name", "cfiles", "deps", "build_dir", "extra_compile_args", 0};
    static CPyArg_Parser parser = {"OOOOOO:build_using_shared_lib", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_group_name;
    PyObject *obj_cfiles;
    PyObject *obj_deps;
    PyObject *obj_build_dir;
    PyObject *obj_extra_compile_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_group_name, &obj_cfiles, &obj_deps, &obj_build_dir, &obj_extra_compile_args)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_group_name;
    if (likely(PyUnicode_Check(obj_group_name)))
        arg_group_name = obj_group_name;
    else {
        CPy_TypeError("str", obj_group_name); 
        goto fail;
    }
    PyObject *arg_cfiles;
    if (likely(PyList_Check(obj_cfiles)))
        arg_cfiles = obj_cfiles;
    else {
        CPy_TypeError("list", obj_cfiles); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyList_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("list", obj_deps); 
        goto fail;
    }
    PyObject *arg_build_dir;
    if (likely(PyUnicode_Check(obj_build_dir)))
        arg_build_dir = obj_build_dir;
    else {
        CPy_TypeError("str", obj_build_dir); 
        goto fail;
    }
    PyObject *arg_extra_compile_args;
    if (likely(PyList_Check(obj_extra_compile_args)))
        arg_extra_compile_args = obj_extra_compile_args;
    else {
        CPy_TypeError("list", obj_extra_compile_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___build_using_shared_lib(arg_sources, arg_group_name, arg_cfiles, arg_deps, arg_build_dir, arg_extra_compile_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "build_using_shared_lib", 254, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___build_single_module(PyObject *cpy_r_sources, PyObject *cpy_r_cfiles, PyObject *cpy_r_extra_compile_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyDef_mypyc___build___get_extension();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 310, CPyStatic_mypyc___build___globals);
        goto CPyL8;
    }
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_sources, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 311, CPyStatic_mypyc___build___globals);
        goto CPyL9;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_modulefinder___BuildSource))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "build_single_module", 311, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r1);
        goto CPyL9;
    }
    cpy_r_r3 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_r2)->_module;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_mypyc___build___include_dir();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 313, CPyStatic_mypyc___build___globals);
        goto CPyL10;
    }
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 313, CPyStatic_mypyc___build___globals);
        goto CPyL11;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r4;
    PyObject *cpy_r_r8[4] = {cpy_r_r3, cpy_r_cfiles, cpy_r_r5, cpy_r_extra_compile_args};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[9921]; /* ('sources', 'include_dirs', 'extra_compile_args') */
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r0, cpy_r_r9, 1, cpy_r_r10);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 310, CPyStatic_mypyc___build___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "build_single_module", 309, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r11;
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL8;
}

PyObject *CPyPy_mypyc___build___build_single_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "cfiles", "extra_compile_args", 0};
    static CPyArg_Parser parser = {"OOO:build_single_module", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_cfiles;
    PyObject *obj_extra_compile_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_cfiles, &obj_extra_compile_args)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_cfiles;
    if (likely(PyList_Check(obj_cfiles)))
        arg_cfiles = obj_cfiles;
    else {
        CPy_TypeError("list", obj_cfiles); 
        goto fail;
    }
    PyObject *arg_extra_compile_args;
    if (likely(PyList_Check(obj_extra_compile_args)))
        arg_extra_compile_args = obj_extra_compile_args;
    else {
        CPy_TypeError("list", obj_extra_compile_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___build_single_module(arg_sources, arg_cfiles, arg_extra_compile_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "build_single_module", 302, CPyStatic_mypyc___build___globals);
    return NULL;
}

char CPyDef_mypyc___build___write_file(PyObject *cpy_r_path, PyObject *cpy_r_contents) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_old_contents;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_encoded_contents;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_g;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    tuple_T3OOO cpy_r_r91;
    tuple_T3OOO cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    tuple_T3OOO cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    double cpy_r_r122;
    char cpy_r_r123;
    double cpy_r_r124;
    double cpy_r_new_mtime;
    tuple_T2FF cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    cpy_r_r0 = NULL;
    cpy_r_old_contents = cpy_r_r0;
    cpy_r_r1 = CPyStatics[344]; /* 'utf-8' */
    cpy_r_r2 = CPy_Encode(cpy_r_contents, cpy_r_r1, NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 328, CPyStatic_mypyc___build___globals);
        goto CPyL92;
    }
    cpy_r_encoded_contents = cpy_r_r2;
    cpy_r_r3 = CPyStatics[198]; /* 'rb' */
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[199]; /* 'open' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r7[2] = {cpy_r_path, cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 2, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    cpy_r_r10 = PyObject_Type(cpy_r_r9);
    cpy_r_r11 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL94;
    }
    cpy_r_r13 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL95;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL95;
    }
    cpy_r_r18 = 1;
    cpy_r_f = cpy_r_r17;
    cpy_r_r19 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r20[1] = {cpy_r_f};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_VectorcallMethod(cpy_r_r19, cpy_r_r21, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 331, CPyStatic_mypyc___build___globals);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyBytes_Check(cpy_r_r22) || PyByteArray_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeError("bytes", cpy_r_r22); 
        cpy_r_r23 = NULL;
    }
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 331, CPyStatic_mypyc___build___globals);
        goto CPyL11;
    } else
        goto CPyL97;
CPyL10: ;
    cpy_r_old_contents = cpy_r_r23;
    goto CPyL19;
CPyL11: ;
    cpy_r_r24 = CPy_CatchError();
    cpy_r_r18 = 0;
    cpy_r_r25 = CPy_GetExcInfo();
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    PyObject *cpy_r_r29[4] = {cpy_r_r9, cpy_r_r26, cpy_r_r27, cpy_r_r28};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r30, 4, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL98;
    }
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    cpy_r_r32 = PyObject_IsTrue(cpy_r_r31);
    CPy_DecRef(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL17;
    }
    cpy_r_r34 = cpy_r_r32;
    if (cpy_r_r34) goto CPyL16;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL99;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL19;
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r24);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    cpy_r_r35 = CPy_KeepPropagating();
    if (!cpy_r_r35) {
        goto CPyL20;
    } else
        goto CPyL100;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    tuple_T3OOO __tmp9050 = { NULL, NULL, NULL };
    cpy_r_r36 = __tmp9050;
    cpy_r_r37 = cpy_r_r36;
    goto CPyL21;
CPyL20: ;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r37 = cpy_r_r38;
CPyL21: ;
    if (!cpy_r_r18) goto CPyL101;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r40[4] = {cpy_r_r9, cpy_r_r39, cpy_r_r39, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r41, 4, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 330, CPyStatic_mypyc___build___globals);
        goto CPyL102;
    } else
        goto CPyL103;
CPyL23: ;
    CPy_DECREF(cpy_r_r9);
CPyL24: ;
    if (cpy_r_r37.f0 == NULL) {
        goto CPyL39;
    } else
        goto CPyL104;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL105;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    if (cpy_r_r37.f0 == NULL) goto CPyL29;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_XDECREF(cpy_r_r37.f0);
    CPy_XDECREF(cpy_r_r37.f1);
    CPy_XDECREF(cpy_r_r37.f2);
CPyL29: ;
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) {
        goto CPyL31;
    } else
        goto CPyL106;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r44 = CPy_CatchError();
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 332, CPyStatic_mypyc___build___globals);
        goto CPyL107;
    }
    cpy_r_r48 = CPy_ExceptionMatches(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (!cpy_r_r48) goto CPyL108;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    cpy_r_old_contents = cpy_r_r49;
    goto CPyL36;
CPyL34: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL109;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DECREF(cpy_r_r44.f0);
    CPy_DECREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_r44.f2);
    goto CPyL39;
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DECREF(cpy_r_r44.f0);
    CPy_DECREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_r44.f2);
    cpy_r_r50 = CPy_KeepPropagating();
    if (!cpy_r_r50) goto CPyL91;
    CPy_Unreachable();
CPyL39: ;
    if (cpy_r_old_contents == NULL) {
        goto CPyL110;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"old_contents\" referenced before assignment");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 334, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r52 = PyObject_RichCompare(cpy_r_old_contents, cpy_r_encoded_contents, 3);
    CPy_XDECREF(cpy_r_old_contents);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 334, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 334, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    if (!cpy_r_r53) goto CPyL112;
    cpy_r_r54 = CPyModule_os___path;
    cpy_r_r55 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    PyObject *cpy_r_r57[1] = {cpy_r_path};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r56, cpy_r_r58, 1, 0);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals, "str", cpy_r_r59);
        goto CPyL111;
    }
    cpy_r_r61 = CPyStatic_mypyc___build___globals;
    cpy_r_r62 = CPyStatics[389]; /* 'os' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals);
        goto CPyL113;
    }
    cpy_r_r64 = CPyStatics[3796]; /* 'makedirs' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals);
        goto CPyL113;
    }
    cpy_r_r66 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r67[2] = {cpy_r_r60, cpy_r_r66};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = CPyStatics[9523]; /* ('exist_ok',) */
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r68, 1, cpy_r_r69);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 335, CPyStatic_mypyc___build___globals);
        goto CPyL113;
    } else
        goto CPyL114;
CPyL51: ;
    CPy_DECREF(cpy_r_r60);
    cpy_r_r71 = CPyStatics[4755]; /* 'wb' */
    cpy_r_r72 = CPyModule_builtins;
    cpy_r_r73 = CPyStatics[199]; /* 'open' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    PyObject *cpy_r_r75[2] = {cpy_r_path, cpy_r_r71};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 2, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL111;
    }
    cpy_r_r78 = PyObject_Type(cpy_r_r77);
    cpy_r_r79 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL115;
    }
    cpy_r_r81 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r82 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r81);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL116;
    }
    PyObject *cpy_r_r83[1] = {cpy_r_r77};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL116;
    }
    cpy_r_r86 = 1;
    cpy_r_g = cpy_r_r85;
    cpy_r_r87 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r88[2] = {cpy_r_g, cpy_r_encoded_contents};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = PyObject_VectorcallMethod(cpy_r_r87, cpy_r_r89, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 337, CPyStatic_mypyc___build___globals);
        goto CPyL117;
    } else
        goto CPyL118;
CPyL58: ;
    CPy_DECREF(cpy_r_g);
    CPy_DECREF(cpy_r_encoded_contents);
    goto CPyL67;
CPyL59: ;
    cpy_r_r91 = CPy_CatchError();
    cpy_r_r86 = 0;
    cpy_r_r92 = CPy_GetExcInfo();
    cpy_r_r93 = cpy_r_r92.f0;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = cpy_r_r92.f1;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = cpy_r_r92.f2;
    CPy_INCREF(cpy_r_r95);
    CPy_DecRef(cpy_r_r92.f0);
    CPy_DecRef(cpy_r_r92.f1);
    CPy_DecRef(cpy_r_r92.f2);
    PyObject *cpy_r_r96[4] = {cpy_r_r77, cpy_r_r93, cpy_r_r94, cpy_r_r95};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r97, 4, 0);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL119;
    }
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    cpy_r_r99 = PyObject_IsTrue(cpy_r_r98);
    CPy_DecRef(cpy_r_r98);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL65;
    }
    cpy_r_r101 = cpy_r_r99;
    if (cpy_r_r101) goto CPyL64;
    CPy_Reraise();
    if (!0) {
        goto CPyL65;
    } else
        goto CPyL120;
CPyL63: ;
    CPy_Unreachable();
CPyL64: ;
    CPy_RestoreExcInfo(cpy_r_r91);
    CPy_DecRef(cpy_r_r91.f0);
    CPy_DecRef(cpy_r_r91.f1);
    CPy_DecRef(cpy_r_r91.f2);
    goto CPyL67;
CPyL65: ;
    CPy_RestoreExcInfo(cpy_r_r91);
    CPy_DecRef(cpy_r_r91.f0);
    CPy_DecRef(cpy_r_r91.f1);
    CPy_DecRef(cpy_r_r91.f2);
    cpy_r_r102 = CPy_KeepPropagating();
    if (!cpy_r_r102) {
        goto CPyL68;
    } else
        goto CPyL121;
CPyL66: ;
    CPy_Unreachable();
CPyL67: ;
    tuple_T3OOO __tmp9051 = { NULL, NULL, NULL };
    cpy_r_r103 = __tmp9051;
    cpy_r_r104 = cpy_r_r103;
    goto CPyL69;
CPyL68: ;
    cpy_r_r105 = CPy_CatchError();
    cpy_r_r104 = cpy_r_r105;
CPyL69: ;
    if (!cpy_r_r86) goto CPyL122;
    cpy_r_r106 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r107[4] = {cpy_r_r77, cpy_r_r106, cpy_r_r106, cpy_r_r106};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = _PyObject_Vectorcall(cpy_r_r80, cpy_r_r108, 4, 0);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 336, CPyStatic_mypyc___build___globals);
        goto CPyL123;
    } else
        goto CPyL124;
CPyL71: ;
    CPy_DECREF(cpy_r_r77);
CPyL72: ;
    if (cpy_r_r104.f0 == NULL) goto CPyL79;
    CPy_Reraise();
    if (!0) {
        goto CPyL75;
    } else
        goto CPyL125;
CPyL74: ;
    CPy_Unreachable();
CPyL75: ;
    if (cpy_r_r104.f0 == NULL) goto CPyL77;
    CPy_RestoreExcInfo(cpy_r_r104);
    CPy_XDECREF(cpy_r_r104.f0);
    CPy_XDECREF(cpy_r_r104.f1);
    CPy_XDECREF(cpy_r_r104.f2);
CPyL77: ;
    cpy_r_r110 = CPy_KeepPropagating();
    if (!cpy_r_r110) goto CPyL91;
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r111 = CPyStatic_mypyc___build___globals;
    cpy_r_r112 = CPyStatics[389]; /* 'os' */
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    cpy_r_r114 = CPyStatics[504]; /* 'stat' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r116[1] = {cpy_r_path};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r115, cpy_r_r117, 1, 0);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    if (likely(PyTuple_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals, "tuple", cpy_r_r118);
        goto CPyL91;
    }
    cpy_r_r120 = CPyStatics[329]; /* 'st_mtime' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    cpy_r_r122 = PyFloat_AsDouble(cpy_r_r121);
    if (cpy_r_r122 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r121); cpy_r_r122 = -113.0;
    }
    CPy_DECREF(cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 == -113.0;
    if (unlikely(cpy_r_r123)) goto CPyL86;
CPyL85: ;
    cpy_r_r124 = cpy_r_r122 + 1.0;
    cpy_r_new_mtime = cpy_r_r124;
    cpy_r_r125.f0 = cpy_r_new_mtime;
    cpy_r_r125.f1 = cpy_r_new_mtime;
    cpy_r_r126 = CPyStatic_mypyc___build___globals;
    cpy_r_r127 = CPyStatics[389]; /* 'os' */
    cpy_r_r128 = CPyDict_GetItem(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 344, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    } else
        goto CPyL87;
CPyL86: ;
    cpy_r_r129 = PyErr_Occurred();
    if (unlikely(cpy_r_r129 != NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 343, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    } else
        goto CPyL85;
CPyL87: ;
    cpy_r_r130 = CPyStatics[3799]; /* 'utime' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r130);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 344, CPyStatic_mypyc___build___globals);
        goto CPyL91;
    }
    cpy_r_r132 = PyTuple_New(2);
    if (unlikely(cpy_r_r132 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9052 = PyFloat_FromDouble(cpy_r_r125.f0);
    PyTuple_SET_ITEM(cpy_r_r132, 0, __tmp9052);
    PyObject *__tmp9053 = PyFloat_FromDouble(cpy_r_r125.f1);
    PyTuple_SET_ITEM(cpy_r_r132, 1, __tmp9053);
    PyObject *cpy_r_r133[2] = {cpy_r_path, cpy_r_r132};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = CPyStatics[9524]; /* ('times',) */
    cpy_r_r136 = _PyObject_Vectorcall(cpy_r_r131, cpy_r_r134, 1, cpy_r_r135);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "write_file", 344, CPyStatic_mypyc___build___globals);
        goto CPyL126;
    } else
        goto CPyL127;
CPyL89: ;
    CPy_DECREF(cpy_r_r132);
CPyL90: ;
    return 1;
CPyL91: ;
    cpy_r_r137 = 2;
    return cpy_r_r137;
CPyL92: ;
    CPy_XDecRef(cpy_r_old_contents);
    goto CPyL91;
CPyL93: ;
    CPy_XDecRef(cpy_r_old_contents);
    goto CPyL31;
CPyL94: ;
    CPy_XDecRef(cpy_r_old_contents);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL95: ;
    CPy_XDecRef(cpy_r_old_contents);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL31;
CPyL96: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL11;
CPyL97: ;
    CPy_XDECREF(cpy_r_old_contents);
    goto CPyL10;
CPyL98: ;
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL17;
CPyL99: ;
    CPy_XDecRef(cpy_r_old_contents);
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r24.f0);
    CPy_DecRef(cpy_r_r24.f1);
    CPy_DecRef(cpy_r_r24.f2);
    goto CPyL15;
CPyL100: ;
    CPy_XDecRef(cpy_r_old_contents);
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL101: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    goto CPyL24;
CPyL102: ;
    CPy_XDecRef(cpy_r_old_contents);
    CPy_DecRef(cpy_r_r9);
    goto CPyL27;
CPyL103: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL23;
CPyL104: ;
    CPy_XDECREF(cpy_r_old_contents);
    goto CPyL25;
CPyL105: ;
    CPy_DECREF(cpy_r_encoded_contents);
    CPy_XDECREF(cpy_r_r37.f0);
    CPy_XDECREF(cpy_r_r37.f1);
    CPy_XDECREF(cpy_r_r37.f2);
    goto CPyL26;
CPyL106: ;
    CPy_DECREF(cpy_r_encoded_contents);
    goto CPyL30;
CPyL107: ;
    CPy_DecRef(cpy_r_encoded_contents);
    goto CPyL37;
CPyL108: ;
    CPy_DECREF(cpy_r_encoded_contents);
    goto CPyL34;
CPyL109: ;
    CPy_DECREF(cpy_r_r44.f0);
    CPy_DECREF(cpy_r_r44.f1);
    CPy_DECREF(cpy_r_r44.f2);
    goto CPyL35;
CPyL110: ;
    CPy_DECREF(cpy_r_encoded_contents);
    goto CPyL40;
CPyL111: ;
    CPy_DecRef(cpy_r_encoded_contents);
    goto CPyL91;
CPyL112: ;
    CPy_DECREF(cpy_r_encoded_contents);
    goto CPyL90;
CPyL113: ;
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_r60);
    goto CPyL91;
CPyL114: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL51;
CPyL115: ;
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    goto CPyL91;
CPyL116: ;
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r80);
    goto CPyL91;
CPyL117: ;
    CPy_DecRef(cpy_r_encoded_contents);
    CPy_DecRef(cpy_r_g);
    goto CPyL59;
CPyL118: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL58;
CPyL119: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    goto CPyL65;
CPyL120: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r91.f0);
    CPy_DecRef(cpy_r_r91.f1);
    CPy_DecRef(cpy_r_r91.f2);
    goto CPyL63;
CPyL121: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r80);
    goto CPyL66;
CPyL122: ;
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r80);
    goto CPyL72;
CPyL123: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL75;
CPyL124: ;
    CPy_DECREF(cpy_r_r109);
    goto CPyL71;
CPyL125: ;
    CPy_XDECREF(cpy_r_r104.f0);
    CPy_XDECREF(cpy_r_r104.f1);
    CPy_XDECREF(cpy_r_r104.f2);
    goto CPyL74;
CPyL126: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL91;
CPyL127: ;
    CPy_DECREF(cpy_r_r136);
    goto CPyL89;
}

PyObject *CPyPy_mypyc___build___write_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", "contents", 0};
    static CPyArg_Parser parser = {"OO:write_file", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_contents;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_contents)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_contents;
    if (likely(PyUnicode_Check(obj_contents)))
        arg_contents = obj_contents;
    else {
        CPy_TypeError("str", obj_contents); 
        goto fail;
    }
    char retval = CPyDef_mypyc___build___write_file(arg_path, arg_contents);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "write_file", 319, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___construct_groups(PyObject *cpy_r_sources, PyObject *cpy_r_separate, char cpy_r_use_shared_lib) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_source;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    tuple_T2OC cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_used_sources;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2OO cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_files;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_group_sources;
    tuple_T2OO cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_src_2;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_unused_sources;
    CPyPtr cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_source_2;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    tuple_T2OC cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    tuple_T2OC cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyTagged cpy_r_r99;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    tuple_T2OO cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_group;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyPtr cpy_r_r117;
    int64_t cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_source_3;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    tuple_T2OO cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    cpy_r_r0 = 1 ? Py_True : Py_False;
    cpy_r_r1 = cpy_r_separate == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL9;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 363, CPyStatic_mypyc___build___globals);
        goto CPyL65;
    }
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_modulefinder___BuildSource))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 363, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r10);
        goto CPyL66;
    }
    cpy_r_source = cpy_r_r11;
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 363, CPyStatic_mypyc___build___globals);
        goto CPyL67;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_source;
    cpy_r_r15.f0 = cpy_r_r12;
    cpy_r_r15.f1 = 1;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = PyTuple_New(2);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9054 = cpy_r_r15.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp9054);
    PyObject *__tmp9055 = Py_None;
    CPy_INCREF(__tmp9055);
    PyTuple_SET_ITEM(cpy_r_r16, 1, __tmp9055);
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 363, CPyStatic_mypyc___build___globals);
        goto CPyL66;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL3;
CPyL8: ;
    cpy_r_groups = cpy_r_r4;
    goto CPyL47;
CPyL9: ;
    cpy_r_r19 = (PyObject *)&PyList_Type;
    cpy_r_r20 = PyObject_IsInstance(cpy_r_separate, cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 364, CPyStatic_mypyc___build___globals);
        goto CPyL65;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL45;
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 365, CPyStatic_mypyc___build___globals);
        goto CPyL65;
    }
    cpy_r_groups = cpy_r_r23;
    cpy_r_r24 = PySet_New(NULL);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 366, CPyStatic_mypyc___build___globals);
        goto CPyL68;
    }
    cpy_r_used_sources = cpy_r_r24;
    CPy_INCREF(cpy_r_separate);
    if (likely(PyList_Check(cpy_r_separate)))
        cpy_r_r25 = cpy_r_separate;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 367, CPyStatic_mypyc___build___globals, "list", cpy_r_separate);
        goto CPyL69;
    }
    cpy_r_r26 = 0;
CPyL15: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r25)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_r29;
    if (!cpy_r_r30) goto CPyL70;
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_r25, cpy_r_r26);
    PyObject *__tmp9056;
    if (unlikely(!(PyTuple_Check(cpy_r_r31) && PyTuple_GET_SIZE(cpy_r_r31) == 2))) {
        __tmp9056 = NULL;
        goto __LL9057;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r31, 0))))
        __tmp9056 = PyTuple_GET_ITEM(cpy_r_r31, 0);
    else {
        __tmp9056 = NULL;
    }
    if (__tmp9056 == NULL) goto __LL9057;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r31, 1)))
        __tmp9056 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    else {
        __tmp9056 = NULL;
    }
    if (__tmp9056 != NULL) goto __LL9058;
    if (PyTuple_GET_ITEM(cpy_r_r31, 1) == Py_None)
        __tmp9056 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    else {
        __tmp9056 = NULL;
    }
    if (__tmp9056 != NULL) goto __LL9058;
    __tmp9056 = NULL;
__LL9058: ;
    if (__tmp9056 == NULL) goto __LL9057;
    __tmp9056 = cpy_r_r31;
__LL9057: ;
    if (unlikely(__tmp9056 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r31); cpy_r_r32 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9059 = PyTuple_GET_ITEM(cpy_r_r31, 0);
        CPy_INCREF(__tmp9059);
        PyObject *__tmp9060;
        if (likely(PyList_Check(__tmp9059)))
            __tmp9060 = __tmp9059;
        else {
            CPy_TypeError("list", __tmp9059); 
            __tmp9060 = NULL;
        }
        cpy_r_r32.f0 = __tmp9060;
        PyObject *__tmp9061 = PyTuple_GET_ITEM(cpy_r_r31, 1);
        CPy_INCREF(__tmp9061);
        PyObject *__tmp9062;
        if (PyUnicode_Check(__tmp9061))
            __tmp9062 = __tmp9061;
        else {
            __tmp9062 = NULL;
        }
        if (__tmp9062 != NULL) goto __LL9063;
        if (__tmp9061 == Py_None)
            __tmp9062 = __tmp9061;
        else {
            __tmp9062 = NULL;
        }
        if (__tmp9062 != NULL) goto __LL9063;
        CPy_TypeError("str or None", __tmp9061); 
        __tmp9062 = NULL;
__LL9063: ;
        cpy_r_r32.f1 = __tmp9062;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 367, CPyStatic_mypyc___build___globals);
        goto CPyL71;
    }
    cpy_r_r33 = cpy_r_r32.f0;
    CPy_INCREF(cpy_r_r33);
    cpy_r_files = cpy_r_r33;
    cpy_r_r34 = cpy_r_r32.f1;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r32.f0);
    CPy_DECREF(cpy_r_r32.f1);
    cpy_r_name = cpy_r_r34;
    cpy_r_r35 = PyList_New(0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 368, CPyStatic_mypyc___build___globals);
        goto CPyL72;
    }
    cpy_r_r36 = 0;
CPyL19: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL73;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r36);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_modulefinder___BuildSource))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 368, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r41);
        goto CPyL74;
    }
    cpy_r_src = cpy_r_r42;
    cpy_r_r43 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_src)->_path;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = PySequence_Contains(cpy_r_files, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 368, CPyStatic_mypyc___build___globals);
        goto CPyL75;
    }
    cpy_r_r46 = cpy_r_r44;
    if (!cpy_r_r46) goto CPyL76;
    cpy_r_r47 = PyList_Append(cpy_r_r35, cpy_r_src);
    CPy_DECREF(cpy_r_src);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 368, CPyStatic_mypyc___build___globals);
        goto CPyL74;
    }
CPyL24: ;
    cpy_r_r49 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r49;
    goto CPyL19;
CPyL25: ;
    cpy_r_group_sources = cpy_r_r35;
    cpy_r_r50.f0 = cpy_r_group_sources;
    cpy_r_r50.f1 = cpy_r_name;
    CPy_INCREF(cpy_r_r50.f0);
    CPy_INCREF(cpy_r_r50.f1);
    CPy_DECREF(cpy_r_name);
    cpy_r_r51 = PyTuple_New(2);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9064 = cpy_r_r50.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp9064);
    PyObject *__tmp9065 = cpy_r_r50.f1;
    PyTuple_SET_ITEM(cpy_r_r51, 1, __tmp9065);
    cpy_r_r52 = PyList_Append(cpy_r_groups, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 369, CPyStatic_mypyc___build___globals);
        goto CPyL77;
    }
    cpy_r_r54 = _PySet_Update(cpy_r_used_sources, cpy_r_group_sources);
    CPy_DECREF(cpy_r_group_sources);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 370, CPyStatic_mypyc___build___globals);
        goto CPyL71;
    }
    cpy_r_r56 = cpy_r_r26 + 2;
    cpy_r_r26 = cpy_r_r56;
    goto CPyL15;
CPyL28: ;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 371, CPyStatic_mypyc___build___globals);
        goto CPyL69;
    }
    cpy_r_r58 = 0;
CPyL30: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_sources)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL78;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_sources, cpy_r_r58);
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_modulefinder___BuildSource))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 371, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r63);
        goto CPyL79;
    }
    cpy_r_src_2 = cpy_r_r64;
    cpy_r_r65 = PySet_Contains(cpy_r_used_sources, cpy_r_src_2);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 371, CPyStatic_mypyc___build___globals);
        goto CPyL80;
    }
    cpy_r_r67 = cpy_r_r65;
    cpy_r_r68 = cpy_r_r67 ^ 1;
    if (!cpy_r_r68) goto CPyL81;
    cpy_r_r69 = PyList_Append(cpy_r_r57, cpy_r_src_2);
    CPy_DECREF(cpy_r_src_2);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 371, CPyStatic_mypyc___build___globals);
        goto CPyL79;
    }
CPyL35: ;
    cpy_r_r71 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r71;
    goto CPyL30;
CPyL36: ;
    cpy_r_unused_sources = cpy_r_r57;
    cpy_r_r72 = (CPyPtr)&((PyVarObject *)cpy_r_unused_sources)->ob_size;
    cpy_r_r73 = *(int64_t *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = cpy_r_r74 != 0;
    if (!cpy_r_r75) goto CPyL82;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_unused_sources)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = PyList_New(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 373, CPyStatic_mypyc___build___globals);
        goto CPyL83;
    }
    cpy_r_r79 = 0;
CPyL39: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_unused_sources)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL84;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_unused_sources, cpy_r_r79);
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_modulefinder___BuildSource))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 373, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r84);
        goto CPyL85;
    }
    cpy_r_source_2 = cpy_r_r85;
    cpy_r_r86 = PyList_New(1);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 373, CPyStatic_mypyc___build___globals);
        goto CPyL86;
    }
    cpy_r_r87 = (CPyPtr)&((PyListObject *)cpy_r_r86)->ob_item;
    cpy_r_r88 = *(CPyPtr *)cpy_r_r87;
    *(PyObject * *)cpy_r_r88 = cpy_r_source_2;
    cpy_r_r89.f0 = cpy_r_r86;
    cpy_r_r89.f1 = 1;
    CPy_INCREF(cpy_r_r89.f0);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = PyTuple_New(2);
    if (unlikely(cpy_r_r90 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9066 = cpy_r_r89.f0;
    PyTuple_SET_ITEM(cpy_r_r90, 0, __tmp9066);
    PyObject *__tmp9067 = Py_None;
    CPy_INCREF(__tmp9067);
    PyTuple_SET_ITEM(cpy_r_r90, 1, __tmp9067);
    cpy_r_r91 = CPyList_SetItemUnsafe(cpy_r_r78, cpy_r_r79, cpy_r_r90);
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 373, CPyStatic_mypyc___build___globals);
        goto CPyL85;
    }
    cpy_r_r92 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r92;
    goto CPyL39;
CPyL44: ;
    cpy_r_r93 = CPyList_Extend(cpy_r_groups, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 373, CPyStatic_mypyc___build___globals);
        goto CPyL68;
    } else
        goto CPyL87;
CPyL45: ;
    cpy_r_r94.f0 = cpy_r_sources;
    cpy_r_r94.f1 = 1;
    CPy_INCREF(cpy_r_r94.f0);
    cpy_r_r95 = PyList_New(1);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 375, CPyStatic_mypyc___build___globals);
        goto CPyL88;
    }
    cpy_r_r96 = PyTuple_New(2);
    if (unlikely(cpy_r_r96 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9068 = cpy_r_r94.f0;
    PyTuple_SET_ITEM(cpy_r_r96, 0, __tmp9068);
    PyObject *__tmp9069 = Py_None;
    CPy_INCREF(__tmp9069);
    PyTuple_SET_ITEM(cpy_r_r96, 1, __tmp9069);
    cpy_r_r97 = (CPyPtr)&((PyListObject *)cpy_r_r95)->ob_item;
    cpy_r_r98 = *(CPyPtr *)cpy_r_r97;
    *(PyObject * *)cpy_r_r98 = cpy_r_r96;
    cpy_r_groups = cpy_r_r95;
CPyL47: ;
    cpy_r_r99 = 0;
    cpy_r_i = 0;
    cpy_r_r100 = 0;
CPyL48: ;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = (Py_ssize_t)cpy_r_r100 < (Py_ssize_t)cpy_r_r103;
    if (!cpy_r_r104) goto CPyL89;
    cpy_r_r105 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r100);
    PyObject *__tmp9070;
    if (unlikely(!(PyTuple_Check(cpy_r_r105) && PyTuple_GET_SIZE(cpy_r_r105) == 2))) {
        __tmp9070 = NULL;
        goto __LL9071;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r105, 0))))
        __tmp9070 = PyTuple_GET_ITEM(cpy_r_r105, 0);
    else {
        __tmp9070 = NULL;
    }
    if (__tmp9070 == NULL) goto __LL9071;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r105, 1)))
        __tmp9070 = PyTuple_GET_ITEM(cpy_r_r105, 1);
    else {
        __tmp9070 = NULL;
    }
    if (__tmp9070 != NULL) goto __LL9072;
    if (PyTuple_GET_ITEM(cpy_r_r105, 1) == Py_None)
        __tmp9070 = PyTuple_GET_ITEM(cpy_r_r105, 1);
    else {
        __tmp9070 = NULL;
    }
    if (__tmp9070 != NULL) goto __LL9072;
    __tmp9070 = NULL;
__LL9072: ;
    if (__tmp9070 == NULL) goto __LL9071;
    __tmp9070 = cpy_r_r105;
__LL9071: ;
    if (unlikely(__tmp9070 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r105); cpy_r_r106 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9073 = PyTuple_GET_ITEM(cpy_r_r105, 0);
        CPy_INCREF(__tmp9073);
        PyObject *__tmp9074;
        if (likely(PyList_Check(__tmp9073)))
            __tmp9074 = __tmp9073;
        else {
            CPy_TypeError("list", __tmp9073); 
            __tmp9074 = NULL;
        }
        cpy_r_r106.f0 = __tmp9074;
        PyObject *__tmp9075 = PyTuple_GET_ITEM(cpy_r_r105, 1);
        CPy_INCREF(__tmp9075);
        PyObject *__tmp9076;
        if (PyUnicode_Check(__tmp9075))
            __tmp9076 = __tmp9075;
        else {
            __tmp9076 = NULL;
        }
        if (__tmp9076 != NULL) goto __LL9077;
        if (__tmp9075 == Py_None)
            __tmp9076 = __tmp9075;
        else {
            __tmp9076 = NULL;
        }
        if (__tmp9076 != NULL) goto __LL9077;
        CPy_TypeError("str or None", __tmp9075); 
        __tmp9076 = NULL;
__LL9077: ;
        cpy_r_r106.f1 = __tmp9076;
    }
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 378, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    cpy_r_r107 = cpy_r_r106.f0;
    CPy_INCREF(cpy_r_r107);
    cpy_r_group = cpy_r_r107;
    cpy_r_r108 = cpy_r_r106.f1;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r106.f0);
    CPy_DECREF(cpy_r_r106.f1);
    cpy_r_name = cpy_r_r108;
    if (!cpy_r_use_shared_lib) goto CPyL62;
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_name != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL91;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r111 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 367, CPyStatic_mypyc___build___globals, "str", cpy_r_name);
        goto CPyL92;
    }
    cpy_r_r112 = CPyStr_IsTrue(cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (cpy_r_r112) {
        goto CPyL62;
    } else
        goto CPyL91;
CPyL54: ;
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_group)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    cpy_r_r115 = PyList_New(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 380, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    cpy_r_r116 = 0;
CPyL56: ;
    cpy_r_r117 = (CPyPtr)&((PyVarObject *)cpy_r_group)->ob_size;
    cpy_r_r118 = *(int64_t *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 << 1;
    cpy_r_r120 = (Py_ssize_t)cpy_r_r116 < (Py_ssize_t)cpy_r_r119;
    if (!cpy_r_r120) goto CPyL60;
    cpy_r_r121 = CPyList_GetItemUnsafe(cpy_r_group, cpy_r_r116);
    if (likely(Py_TYPE(cpy_r_r121) == CPyType_modulefinder___BuildSource))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "construct_groups", 380, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r121);
        goto CPyL94;
    }
    cpy_r_source_3 = cpy_r_r122;
    cpy_r_r123 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_source_3)->_module;
    CPy_INCREF(cpy_r_r123);
    CPy_DECREF(cpy_r_source_3);
    cpy_r_r124 = CPyList_SetItemUnsafe(cpy_r_r115, cpy_r_r116, cpy_r_r123);
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 380, CPyStatic_mypyc___build___globals);
        goto CPyL94;
    }
    cpy_r_r125 = cpy_r_r116 + 2;
    cpy_r_r116 = cpy_r_r125;
    goto CPyL56;
CPyL60: ;
    cpy_r_r126 = CPyDef_mypyc___build___group_name(cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 380, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    cpy_r_name = cpy_r_r126;
CPyL62: ;
    cpy_r_r127.f0 = cpy_r_group;
    cpy_r_r127.f1 = cpy_r_name;
    CPy_INCREF(cpy_r_r127.f0);
    CPy_INCREF(cpy_r_r127.f1);
    CPy_DECREF(cpy_r_group);
    CPy_DECREF(cpy_r_name);
    cpy_r_r128 = PyTuple_New(2);
    if (unlikely(cpy_r_r128 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9078 = cpy_r_r127.f0;
    PyTuple_SET_ITEM(cpy_r_r128, 0, __tmp9078);
    PyObject *__tmp9079 = cpy_r_r127.f1;
    PyTuple_SET_ITEM(cpy_r_r128, 1, __tmp9079);
    cpy_r_r129 = CPyList_SetItem(cpy_r_groups, cpy_r_i, cpy_r_r128);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypyc/build.py", "construct_groups", 381, CPyStatic_mypyc___build___globals);
        goto CPyL68;
    }
    cpy_r_r130 = cpy_r_r99 + 2;
    cpy_r_r99 = cpy_r_r130;
    cpy_r_i = cpy_r_r130;
    cpy_r_r131 = cpy_r_r100 + 2;
    cpy_r_r100 = cpy_r_r131;
    goto CPyL48;
CPyL64: ;
    return cpy_r_groups;
CPyL65: ;
    cpy_r_r132 = NULL;
    return cpy_r_r132;
CPyL66: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_source);
    goto CPyL65;
CPyL68: ;
    CPy_DecRef(cpy_r_groups);
    goto CPyL65;
CPyL69: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    goto CPyL65;
CPyL70: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL28;
CPyL71: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r25);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_files);
    CPy_DecRef(cpy_r_name);
    goto CPyL65;
CPyL73: ;
    CPy_DECREF(cpy_r_files);
    goto CPyL25;
CPyL74: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_files);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r35);
    goto CPyL65;
CPyL75: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_files);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_src);
    goto CPyL65;
CPyL76: ;
    CPy_DECREF(cpy_r_src);
    goto CPyL24;
CPyL77: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_group_sources);
    goto CPyL65;
CPyL78: ;
    CPy_DECREF(cpy_r_used_sources);
    goto CPyL36;
CPyL79: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r57);
    goto CPyL65;
CPyL80: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_used_sources);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_src_2);
    goto CPyL65;
CPyL81: ;
    CPy_DECREF(cpy_r_src_2);
    goto CPyL35;
CPyL82: ;
    CPy_DECREF(cpy_r_unused_sources);
    goto CPyL47;
CPyL83: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_unused_sources);
    goto CPyL65;
CPyL84: ;
    CPy_DECREF(cpy_r_unused_sources);
    goto CPyL44;
CPyL85: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_unused_sources);
    CPy_DecRef(cpy_r_r78);
    goto CPyL65;
CPyL86: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_unused_sources);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_source_2);
    goto CPyL65;
CPyL87: ;
    CPy_DECREF(cpy_r_r93);
    goto CPyL47;
CPyL88: ;
    CPy_DecRef(cpy_r_r94.f0);
    goto CPyL65;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL64;
CPyL90: ;
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL65;
CPyL91: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL54;
CPyL92: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_name);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_group);
    goto CPyL65;
CPyL93: ;
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_group);
    goto CPyL65;
CPyL94: ;
    CPy_DecRef(cpy_r_groups);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_group);
    CPy_DecRef(cpy_r_r115);
    goto CPyL65;
}

PyObject *CPyPy_mypyc___build___construct_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sources", "separate", "use_shared_lib", 0};
    static CPyArg_Parser parser = {"OOO:construct_groups", kwlist, 0};
    PyObject *obj_sources;
    PyObject *obj_separate;
    PyObject *obj_use_shared_lib;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sources, &obj_separate, &obj_use_shared_lib)) {
        return NULL;
    }
    PyObject *arg_sources;
    if (likely(PyList_Check(obj_sources)))
        arg_sources = obj_sources;
    else {
        CPy_TypeError("list", obj_sources); 
        goto fail;
    }
    PyObject *arg_separate;
    if (PyBool_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9080;
    if (PyList_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9080;
    CPy_TypeError("union[bool, list]", obj_separate); 
    goto fail;
__LL9080: ;
    char arg_use_shared_lib;
    if (unlikely(!PyBool_Check(obj_use_shared_lib))) {
        CPy_TypeError("bool", obj_use_shared_lib); goto fail;
    } else
        arg_use_shared_lib = obj_use_shared_lib == Py_True;
    PyObject *retval = CPyDef_mypyc___build___construct_groups(arg_sources, arg_separate, arg_use_shared_lib);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "construct_groups", 347, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___get_header_deps(PyObject *cpy_r_cfiles) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_headers;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r__;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_contents;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 395, CPyStatic_mypyc___build___globals);
        goto CPyL13;
    }
    cpy_r_headers = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_cfiles)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL9;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_cfiles, cpy_r_r1);
    PyObject *__tmp9081;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 2))) {
        __tmp9081 = NULL;
        goto __LL9082;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 0))))
        __tmp9081 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp9081 = NULL;
    }
    if (__tmp9081 == NULL) goto __LL9082;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r6, 1))))
        __tmp9081 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp9081 = NULL;
    }
    if (__tmp9081 == NULL) goto __LL9082;
    __tmp9081 = cpy_r_r6;
__LL9082: ;
    if (unlikely(__tmp9081 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r6); cpy_r_r7 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9083 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp9083);
        PyObject *__tmp9084;
        if (likely(PyUnicode_Check(__tmp9083)))
            __tmp9084 = __tmp9083;
        else {
            CPy_TypeError("str", __tmp9083); 
            __tmp9084 = NULL;
        }
        cpy_r_r7.f0 = __tmp9084;
        PyObject *__tmp9085 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp9085);
        PyObject *__tmp9086;
        if (likely(PyUnicode_Check(__tmp9085)))
            __tmp9086 = __tmp9085;
        else {
            CPy_TypeError("str", __tmp9085); 
            __tmp9086 = NULL;
        }
        cpy_r_r7.f1 = __tmp9086;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 396, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r__ = cpy_r_r8;
    CPy_DECREF(cpy_r__);
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_contents = cpy_r_r9;
    cpy_r_r10 = CPyStatics[6802]; /* '#include "(.*)"' */
    cpy_r_r11 = CPyModule_re;
    cpy_r_r12 = CPyStatics[6803]; /* 'findall' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 397, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r14[2] = {cpy_r_r10, cpy_r_contents};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 2, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 397, CPyStatic_mypyc___build___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_contents);
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_header_deps", 397, CPyStatic_mypyc___build___globals, "list", cpy_r_r16);
        goto CPyL14;
    }
    cpy_r_r18 = _PySet_Update(cpy_r_headers, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 397, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    cpy_r_r20 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r20;
    goto CPyL2;
CPyL9: ;
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 399, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_headers};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "get_header_deps", 399, CPyStatic_mypyc___build___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_headers);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "get_header_deps", 399, CPyStatic_mypyc___build___globals, "list", cpy_r_r26);
        goto CPyL13;
    }
    return cpy_r_r27;
CPyL13: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL14: ;
    CPy_DecRef(cpy_r_headers);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_headers);
    CPy_DecRef(cpy_r_contents);
    goto CPyL13;
}

PyObject *CPyPy_mypyc___build___get_header_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cfiles", 0};
    static CPyArg_Parser parser = {"O:get_header_deps", kwlist, 0};
    PyObject *obj_cfiles;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cfiles)) {
        return NULL;
    }
    PyObject *arg_cfiles;
    if (likely(PyList_Check(obj_cfiles)))
        arg_cfiles = obj_cfiles;
    else {
        CPy_TypeError("list", obj_cfiles); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___build___get_header_deps(arg_cfiles);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "get_header_deps", 386, CPyStatic_mypyc___build___globals);
    return NULL;
}

tuple_T2OO CPyDef_mypyc___build___mypyc_build(PyObject *cpy_r_paths, PyObject *cpy_r_compiler_options, PyObject *cpy_r_separate, PyObject *cpy_r_only_compile_paths, PyObject *cpy_r_skip_cgen_input, char cpy_r_always_use_shared_lib) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_fscache;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_mypyc_sources;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_all_sources;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_options;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_use_shared_lib;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_group_cfiles;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_ops_text;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_group_cfilenames;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_cfiles;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_cfilenames;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_cfile;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_ctext;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    tuple_T2OO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyPtr cpy_r_r95;
    int64_t cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    CPyPtr cpy_r_r99;
    int64_t cpy_r_r100;
    CPyTagged cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_dep;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_deps;
    tuple_T2OO cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    tuple_T2OO cpy_r_r120;
    tuple_T2OO cpy_r_r121;
    if (cpy_r_separate != NULL) goto CPyL70;
    cpy_r_r0 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r0);
    cpy_r_separate = cpy_r_r0;
CPyL2: ;
    if (cpy_r_only_compile_paths != NULL) goto CPyL71;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_only_compile_paths = cpy_r_r1;
CPyL4: ;
    if (cpy_r_skip_cgen_input != NULL) goto CPyL72;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_skip_cgen_input = cpy_r_r2;
CPyL6: ;
    if (cpy_r_always_use_shared_lib != 2) goto CPyL8;
    cpy_r_always_use_shared_lib = 0;
CPyL8: ;
    cpy_r_r3 = CPyDef_fscache___FileSystemCache();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 412, CPyStatic_mypyc___build___globals);
        goto CPyL73;
    }
    cpy_r_fscache = cpy_r_r3;
    cpy_r_r4 = CPyDef_mypyc___build___get_mypy_config(cpy_r_paths, cpy_r_only_compile_paths, cpy_r_compiler_options, cpy_r_fscache);
    CPy_DECREF(cpy_r_only_compile_paths);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 413, CPyStatic_mypyc___build___globals);
        goto CPyL74;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_mypyc_sources = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    cpy_r_all_sources = cpy_r_r6;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    CPy_DECREF(cpy_r_r4.f2);
    cpy_r_options = cpy_r_r7;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_mypyc_sources)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r10 > (Py_ssize_t)2;
    if (!cpy_r_r11) goto CPyL12;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL23;
CPyL12: ;
    cpy_r_r13 = 0;
    cpy_r_r14 = 0;
CPyL13: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_mypyc_sources)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL19;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_mypyc_sources, cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_modulefinder___BuildSource))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 422, CPyStatic_mypyc___build___globals, "mypy.modulefinder.BuildSource", cpy_r_r19);
        goto CPyL75;
    }
    cpy_r_x = cpy_r_r20;
    cpy_r_r21 = CPyStatics[224]; /* '.' */
    cpy_r_r22 = ((mypy___modulefinder___BuildSourceObject *)cpy_r_x)->_module;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_x);
    cpy_r_r23 = PySequence_Contains(cpy_r_r22, cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 422, CPyStatic_mypyc___build___globals);
        goto CPyL75;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r13 = 1;
    goto CPyL19;
CPyL18: ;
    cpy_r_r26 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r26;
    goto CPyL13;
CPyL19: ;
    if (!cpy_r_r13) goto CPyL21;
    cpy_r_r27 = cpy_r_r13;
    goto CPyL22;
CPyL21: ;
    cpy_r_r27 = cpy_r_always_use_shared_lib;
CPyL22: ;
    cpy_r_r12 = cpy_r_r27;
CPyL23: ;
    cpy_r_use_shared_lib = cpy_r_r12;
    cpy_r_r28 = CPyDef_mypyc___build___construct_groups(cpy_r_mypyc_sources, cpy_r_separate, cpy_r_use_shared_lib);
    CPy_DECREF(cpy_r_mypyc_sources);
    CPy_DECREF(cpy_r_separate);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 426, CPyStatic_mypyc___build___globals);
        goto CPyL76;
    }
    cpy_r_groups = cpy_r_r28;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_skip_cgen_input != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL77;
    CPy_INCREF(cpy_r_skip_cgen_input);
    cpy_r_r31 = cpy_r_skip_cgen_input;
    cpy_r_r32 = PyObject_IsTrue(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 408, CPyStatic_mypyc___build___globals);
        goto CPyL78;
    }
    cpy_r_r34 = cpy_r_r32;
    if (cpy_r_r34) {
        goto CPyL79;
    } else
        goto CPyL77;
CPyL28: ;
    cpy_r_r35 = CPyDef_mypyc___build___generate_c(cpy_r_all_sources, cpy_r_options, cpy_r_groups, cpy_r_fscache, cpy_r_compiler_options);
    CPy_DECREF(cpy_r_all_sources);
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_fscache);
    if (unlikely(cpy_r_r35.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 431, CPyStatic_mypyc___build___globals);
        goto CPyL80;
    }
    cpy_r_r36 = cpy_r_r35.f0;
    CPy_INCREF(cpy_r_r36);
    cpy_r_group_cfiles = cpy_r_r36;
    cpy_r_r37 = cpy_r_r35.f1;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r35.f0);
    CPy_DECREF(cpy_r_r35.f1);
    cpy_r_ops_text = cpy_r_r37;
    cpy_r_r38 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_target_dir;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[6804]; /* 'ops.txt' */
    cpy_r_r40 = CPyModule_os___path;
    cpy_r_r41 = CPyStatics[175]; /* 'join' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 435, CPyStatic_mypyc___build___globals);
        goto CPyL81;
    }
    PyObject *cpy_r_r43[2] = {cpy_r_r38, cpy_r_r39};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r42, cpy_r_r44, 2, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 435, CPyStatic_mypyc___build___globals);
        goto CPyL81;
    }
    CPy_DECREF(cpy_r_r38);
    if (likely(PyUnicode_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 435, CPyStatic_mypyc___build___globals, "str", cpy_r_r45);
        goto CPyL82;
    }
    cpy_r_r47 = CPyDef_mypyc___build___write_file(cpy_r_r46, cpy_r_ops_text);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_ops_text);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 435, CPyStatic_mypyc___build___globals);
        goto CPyL83;
    } else
        goto CPyL35;
CPyL33: ;
    if (likely(PyList_Check(cpy_r_skip_cgen_input)))
        cpy_r_r48 = cpy_r_skip_cgen_input;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 437, CPyStatic_mypyc___build___globals, "list", cpy_r_skip_cgen_input);
        goto CPyL80;
    }
    cpy_r_group_cfiles = cpy_r_r48;
CPyL35: ;
    cpy_r_r49 = PyList_New(0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 441, CPyStatic_mypyc___build___globals);
        goto CPyL83;
    }
    cpy_r_group_cfilenames = cpy_r_r49;
    cpy_r_r50 = 0;
CPyL37: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_group_cfiles)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r50 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL84;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_group_cfiles, cpy_r_r50);
    if (likely(PyList_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 442, CPyStatic_mypyc___build___globals, "list", cpy_r_r55);
        goto CPyL85;
    }
    cpy_r_cfiles = cpy_r_r56;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 443, CPyStatic_mypyc___build___globals);
        goto CPyL86;
    }
    cpy_r_cfilenames = cpy_r_r57;
    cpy_r_r58 = 0;
CPyL41: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_cfiles)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL56;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_cfiles, cpy_r_r58);
    PyObject *__tmp9087;
    if (unlikely(!(PyTuple_Check(cpy_r_r63) && PyTuple_GET_SIZE(cpy_r_r63) == 2))) {
        __tmp9087 = NULL;
        goto __LL9088;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 0))))
        __tmp9087 = PyTuple_GET_ITEM(cpy_r_r63, 0);
    else {
        __tmp9087 = NULL;
    }
    if (__tmp9087 == NULL) goto __LL9088;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 1))))
        __tmp9087 = PyTuple_GET_ITEM(cpy_r_r63, 1);
    else {
        __tmp9087 = NULL;
    }
    if (__tmp9087 == NULL) goto __LL9088;
    __tmp9087 = cpy_r_r63;
__LL9088: ;
    if (unlikely(__tmp9087 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r63); cpy_r_r64 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9089 = PyTuple_GET_ITEM(cpy_r_r63, 0);
        CPy_INCREF(__tmp9089);
        PyObject *__tmp9090;
        if (likely(PyUnicode_Check(__tmp9089)))
            __tmp9090 = __tmp9089;
        else {
            CPy_TypeError("str", __tmp9089); 
            __tmp9090 = NULL;
        }
        cpy_r_r64.f0 = __tmp9090;
        PyObject *__tmp9091 = PyTuple_GET_ITEM(cpy_r_r63, 1);
        CPy_INCREF(__tmp9091);
        PyObject *__tmp9092;
        if (likely(PyUnicode_Check(__tmp9091)))
            __tmp9092 = __tmp9091;
        else {
            CPy_TypeError("str", __tmp9091); 
            __tmp9092 = NULL;
        }
        cpy_r_r64.f1 = __tmp9092;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 444, CPyStatic_mypyc___build___globals);
        goto CPyL87;
    }
    cpy_r_r65 = cpy_r_r64.f0;
    CPy_INCREF(cpy_r_r65);
    cpy_r_cfile = cpy_r_r65;
    cpy_r_r66 = cpy_r_r64.f1;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r64.f0);
    CPy_DECREF(cpy_r_r64.f1);
    cpy_r_ctext = cpy_r_r66;
    cpy_r_r67 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_target_dir;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPyModule_os___path;
    cpy_r_r69 = CPyStatics[175]; /* 'join' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 445, CPyStatic_mypyc___build___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r71[2] = {cpy_r_r67, cpy_r_cfile};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 2, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 445, CPyStatic_mypyc___build___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_cfile);
    if (likely(PyUnicode_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 445, CPyStatic_mypyc___build___globals, "str", cpy_r_r73);
        goto CPyL89;
    }
    cpy_r_cfile = cpy_r_r74;
    cpy_r_r75 = CPyDef_mypyc___build___write_file(cpy_r_cfile, cpy_r_ctext);
    CPy_DECREF(cpy_r_ctext);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 446, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    cpy_r_r76 = CPyModule_os___path;
    cpy_r_r77 = CPyStatics[370]; /* 'splitext' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 447, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    PyObject *cpy_r_r79[1] = {cpy_r_cfile};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r80, 1, 0);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 447, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    PyObject *__tmp9093;
    if (unlikely(!(PyTuple_Check(cpy_r_r81) && PyTuple_GET_SIZE(cpy_r_r81) == 2))) {
        __tmp9093 = NULL;
        goto __LL9094;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r81, 0))))
        __tmp9093 = PyTuple_GET_ITEM(cpy_r_r81, 0);
    else {
        __tmp9093 = NULL;
    }
    if (__tmp9093 == NULL) goto __LL9094;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r81, 1))))
        __tmp9093 = PyTuple_GET_ITEM(cpy_r_r81, 1);
    else {
        __tmp9093 = NULL;
    }
    if (__tmp9093 == NULL) goto __LL9094;
    __tmp9093 = cpy_r_r81;
__LL9094: ;
    if (unlikely(__tmp9093 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r81); cpy_r_r82 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9095 = PyTuple_GET_ITEM(cpy_r_r81, 0);
        CPy_INCREF(__tmp9095);
        PyObject *__tmp9096;
        if (likely(PyUnicode_Check(__tmp9095)))
            __tmp9096 = __tmp9095;
        else {
            CPy_TypeError("str", __tmp9095); 
            __tmp9096 = NULL;
        }
        cpy_r_r82.f0 = __tmp9096;
        PyObject *__tmp9097 = PyTuple_GET_ITEM(cpy_r_r81, 1);
        CPy_INCREF(__tmp9097);
        PyObject *__tmp9098;
        if (likely(PyUnicode_Check(__tmp9097)))
            __tmp9098 = __tmp9097;
        else {
            CPy_TypeError("str", __tmp9097); 
            __tmp9098 = NULL;
        }
        cpy_r_r82.f1 = __tmp9098;
    }
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 447, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
    cpy_r_r83 = cpy_r_r82.f1;
    CPy_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r82.f0);
    CPy_DECREF(cpy_r_r82.f1);
    cpy_r_r84 = CPyStatics[6790]; /* '.c' */
    cpy_r_r85 = PyUnicode_Compare(cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 == -1;
    if (!cpy_r_r86) goto CPyL53;
    cpy_r_r87 = PyErr_Occurred();
    cpy_r_r88 = cpy_r_r87 != NULL;
    if (!cpy_r_r88) goto CPyL53;
    cpy_r_r89 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 447, CPyStatic_mypyc___build___globals);
        goto CPyL90;
    }
CPyL53: ;
    cpy_r_r90 = cpy_r_r85 == 0;
    if (!cpy_r_r90) goto CPyL91;
    cpy_r_r91 = PyList_Append(cpy_r_cfilenames, cpy_r_cfile);
    CPy_DECREF(cpy_r_cfile);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 448, CPyStatic_mypyc___build___globals);
        goto CPyL87;
    }
CPyL55: ;
    cpy_r_r93 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r93;
    goto CPyL41;
CPyL56: ;
    cpy_r_r94 = CPyDef_mypyc___build___get_header_deps(cpy_r_cfiles);
    CPy_DECREF(cpy_r_cfiles);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals);
        goto CPyL92;
    }
    cpy_r_r95 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r96 = *(int64_t *)cpy_r_r95;
    cpy_r_r97 = PyList_New(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals);
        goto CPyL93;
    }
    cpy_r_r98 = 0;
CPyL59: ;
    cpy_r_r99 = (CPyPtr)&((PyVarObject *)cpy_r_r94)->ob_size;
    cpy_r_r100 = *(int64_t *)cpy_r_r99;
    cpy_r_r101 = cpy_r_r100 << 1;
    cpy_r_r102 = (Py_ssize_t)cpy_r_r98 < (Py_ssize_t)cpy_r_r101;
    if (!cpy_r_r102) goto CPyL94;
    cpy_r_r103 = CPyList_GetItemUnsafe(cpy_r_r94, cpy_r_r98);
    if (likely(PyUnicode_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals, "str", cpy_r_r103);
        goto CPyL95;
    }
    cpy_r_dep = cpy_r_r104;
    cpy_r_r105 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_target_dir;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyModule_os___path;
    cpy_r_r107 = CPyStatics[175]; /* 'join' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals);
        goto CPyL96;
    }
    PyObject *cpy_r_r109[2] = {cpy_r_r105, cpy_r_dep};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 2, 0);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_dep);
    if (likely(PyUnicode_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals, "str", cpy_r_r111);
        goto CPyL95;
    }
    cpy_r_r113 = CPyList_SetItemUnsafe(cpy_r_r97, cpy_r_r98, cpy_r_r112);
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 450, CPyStatic_mypyc___build___globals);
        goto CPyL95;
    }
    cpy_r_r114 = cpy_r_r98 + 2;
    cpy_r_r98 = cpy_r_r114;
    goto CPyL59;
CPyL66: ;
    cpy_r_deps = cpy_r_r97;
    cpy_r_r115.f0 = cpy_r_cfilenames;
    cpy_r_r115.f1 = cpy_r_deps;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_cfilenames);
    CPy_DECREF(cpy_r_deps);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9099 = cpy_r_r115.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp9099);
    PyObject *__tmp9100 = cpy_r_r115.f1;
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp9100);
    cpy_r_r117 = PyList_Append(cpy_r_group_cfilenames, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/build.py", "mypyc_build", 451, CPyStatic_mypyc___build___globals);
        goto CPyL85;
    }
    cpy_r_r119 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r119;
    goto CPyL37;
CPyL68: ;
    cpy_r_r120.f0 = cpy_r_groups;
    cpy_r_r120.f1 = cpy_r_group_cfilenames;
    CPy_INCREF(cpy_r_r120.f0);
    CPy_INCREF(cpy_r_r120.f1);
    CPy_DECREF(cpy_r_groups);
    CPy_DECREF(cpy_r_group_cfilenames);
    return cpy_r_r120;
CPyL69: ;
    tuple_T2OO __tmp9101 = { NULL, NULL };
    cpy_r_r121 = __tmp9101;
    return cpy_r_r121;
CPyL70: ;
    CPy_INCREF(cpy_r_separate);
    goto CPyL2;
CPyL71: ;
    CPy_INCREF(cpy_r_only_compile_paths);
    goto CPyL4;
CPyL72: ;
    CPy_INCREF(cpy_r_skip_cgen_input);
    goto CPyL6;
CPyL73: ;
    CPy_DecRef(cpy_r_separate);
    CPy_DecRef(cpy_r_only_compile_paths);
    CPy_DecRef(cpy_r_skip_cgen_input);
    goto CPyL69;
CPyL74: ;
    CPy_DecRef(cpy_r_separate);
    CPy_DecRef(cpy_r_skip_cgen_input);
    CPy_DecRef(cpy_r_fscache);
    goto CPyL69;
CPyL75: ;
    CPy_DecRef(cpy_r_separate);
    CPy_DecRef(cpy_r_skip_cgen_input);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_mypyc_sources);
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    goto CPyL69;
CPyL76: ;
    CPy_DecRef(cpy_r_skip_cgen_input);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    goto CPyL69;
CPyL77: ;
    CPy_DECREF(cpy_r_skip_cgen_input);
    goto CPyL28;
CPyL78: ;
    CPy_DecRef(cpy_r_skip_cgen_input);
    CPy_DecRef(cpy_r_fscache);
    CPy_DecRef(cpy_r_all_sources);
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_groups);
    goto CPyL69;
CPyL79: ;
    CPy_DECREF(cpy_r_fscache);
    CPy_DECREF(cpy_r_all_sources);
    CPy_DECREF(cpy_r_options);
    goto CPyL33;
CPyL80: ;
    CPy_DecRef(cpy_r_groups);
    goto CPyL69;
CPyL81: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_ops_text);
    CPy_DecRef(cpy_r_r38);
    goto CPyL69;
CPyL82: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_ops_text);
    goto CPyL69;
CPyL83: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    goto CPyL69;
CPyL84: ;
    CPy_DECREF(cpy_r_group_cfiles);
    goto CPyL68;
CPyL85: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    goto CPyL69;
CPyL86: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfiles);
    goto CPyL69;
CPyL87: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfiles);
    CPy_DecRef(cpy_r_cfilenames);
    goto CPyL69;
CPyL88: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfiles);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_cfile);
    CPy_DecRef(cpy_r_ctext);
    CPy_DecRef(cpy_r_r67);
    goto CPyL69;
CPyL89: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfiles);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_ctext);
    goto CPyL69;
CPyL90: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfiles);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_cfile);
    goto CPyL69;
CPyL91: ;
    CPy_DECREF(cpy_r_cfile);
    goto CPyL55;
CPyL92: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfilenames);
    goto CPyL69;
CPyL93: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_r94);
    goto CPyL69;
CPyL94: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL66;
CPyL95: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    goto CPyL69;
CPyL96: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfiles);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_dep);
    CPy_DecRef(cpy_r_r105);
    goto CPyL69;
}

PyObject *CPyPy_mypyc___build___mypyc_build(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"paths", "compiler_options", "separate", "only_compile_paths", "skip_cgen_input", "always_use_shared_lib", 0};
    static CPyArg_Parser parser = {"OO|$OOOO:mypyc_build", kwlist, 0};
    PyObject *obj_paths;
    PyObject *obj_compiler_options;
    PyObject *obj_separate = NULL;
    PyObject *obj_only_compile_paths = NULL;
    PyObject *obj_skip_cgen_input = NULL;
    PyObject *obj_always_use_shared_lib = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_paths, &obj_compiler_options, &obj_separate, &obj_only_compile_paths, &obj_skip_cgen_input, &obj_always_use_shared_lib)) {
        return NULL;
    }
    PyObject *arg_paths;
    if (likely(PyList_Check(obj_paths)))
        arg_paths = obj_paths;
    else {
        CPy_TypeError("list", obj_paths); 
        goto fail;
    }
    PyObject *arg_compiler_options;
    if (likely(Py_TYPE(obj_compiler_options) == CPyType_mypyc___options___CompilerOptions))
        arg_compiler_options = obj_compiler_options;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_compiler_options); 
        goto fail;
    }
    PyObject *arg_separate;
    if (obj_separate == NULL) {
        arg_separate = NULL;
        goto __LL9102;
    }
    if (PyBool_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9102;
    if (PyList_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9102;
    CPy_TypeError("union[bool, list]", obj_separate); 
    goto fail;
__LL9102: ;
    PyObject *arg_only_compile_paths;
    if (obj_only_compile_paths == NULL) {
        arg_only_compile_paths = NULL;
        goto __LL9103;
    }
    arg_only_compile_paths = obj_only_compile_paths;
    if (arg_only_compile_paths != NULL) goto __LL9103;
    if (obj_only_compile_paths == Py_None)
        arg_only_compile_paths = obj_only_compile_paths;
    else {
        arg_only_compile_paths = NULL;
    }
    if (arg_only_compile_paths != NULL) goto __LL9103;
    CPy_TypeError("object or None", obj_only_compile_paths); 
    goto fail;
__LL9103: ;
    PyObject *arg_skip_cgen_input;
    if (obj_skip_cgen_input == NULL) {
        arg_skip_cgen_input = NULL;
        goto __LL9104;
    }
    arg_skip_cgen_input = obj_skip_cgen_input;
    if (arg_skip_cgen_input != NULL) goto __LL9104;
    if (obj_skip_cgen_input == Py_None)
        arg_skip_cgen_input = obj_skip_cgen_input;
    else {
        arg_skip_cgen_input = NULL;
    }
    if (arg_skip_cgen_input != NULL) goto __LL9104;
    CPy_TypeError("object or None", obj_skip_cgen_input); 
    goto fail;
__LL9104: ;
    char arg_always_use_shared_lib;
    if (obj_always_use_shared_lib == NULL) {
        arg_always_use_shared_lib = 2;
    } else if (unlikely(!PyBool_Check(obj_always_use_shared_lib))) {
        CPy_TypeError("bool", obj_always_use_shared_lib); goto fail;
    } else
        arg_always_use_shared_lib = obj_always_use_shared_lib == Py_True;
    tuple_T2OO retval = CPyDef_mypyc___build___mypyc_build(arg_paths, arg_compiler_options, arg_separate, arg_only_compile_paths, arg_skip_cgen_input, arg_always_use_shared_lib);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9105 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp9105);
    PyObject *__tmp9106 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp9106);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "mypyc_build", 402, CPyStatic_mypyc___build___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___build___mypycify(PyObject *cpy_r_paths, PyObject *cpy_r_only_compile_paths, char cpy_r_verbose, PyObject *cpy_r_opt_level, PyObject *cpy_r_debug_level, char cpy_r_strip_asserts, char cpy_r_multi_file, PyObject *cpy_r_separate, PyObject *cpy_r_skip_cgen_input, PyObject *cpy_r_target_dir, PyObject *cpy_r_include_runtime_files) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_compiler_options;
    char cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_group_cfilenames;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_compiler;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_build_dir;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_cflags;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyPtr cpy_r_r137;
    CPyPtr cpy_r_r138;
    CPyPtr cpy_r_r139;
    CPyPtr cpy_r_r140;
    CPyPtr cpy_r_r141;
    CPyPtr cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyPtr cpy_r_r148;
    CPyPtr cpy_r_r149;
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_shared_cfilenames;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    CPyTagged cpy_r_r157;
    CPyPtr cpy_r_r158;
    int64_t cpy_r_r159;
    CPyTagged cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject **cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_rt_file;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject **cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject **cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r196;
    PyObject **cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    tuple_T3OOO cpy_r_r202;
    tuple_T3OOO cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject **cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    tuple_T3OOO cpy_r_r214;
    tuple_T3OOO cpy_r_r215;
    tuple_T3OOO cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject **cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    CPyTagged cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_extensions;
    CPyTagged cpy_r_r226;
    CPyTagged cpy_r_r227;
    CPyPtr cpy_r_r228;
    int64_t cpy_r_r229;
    CPyTagged cpy_r_r230;
    char cpy_r_r231;
    CPyPtr cpy_r_r232;
    int64_t cpy_r_r233;
    CPyTagged cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    tuple_T2OO cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_group_sources;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_lib_name;
    PyObject *cpy_r_r240;
    tuple_T2OO cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_cfilenames;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_deps;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    CPyTagged cpy_r_r257;
    CPyTagged cpy_r_r258;
    PyObject *cpy_r_r259;
    if (cpy_r_only_compile_paths != NULL) goto CPyL164;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_only_compile_paths = cpy_r_r0;
CPyL2: ;
    if (cpy_r_verbose != 2) goto CPyL4;
    cpy_r_verbose = 0;
CPyL4: ;
    if (cpy_r_opt_level != NULL) goto CPyL165;
    cpy_r_r1 = CPyStatics[6805]; /* '3' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_opt_level = cpy_r_r1;
CPyL6: ;
    if (cpy_r_debug_level != NULL) goto CPyL166;
    cpy_r_r2 = CPyStatics[3858]; /* '1' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_debug_level = cpy_r_r2;
CPyL8: ;
    if (cpy_r_strip_asserts != 2) goto CPyL10;
    cpy_r_strip_asserts = 0;
CPyL10: ;
    if (cpy_r_multi_file != 2) goto CPyL12;
    cpy_r_multi_file = 0;
CPyL12: ;
    if (cpy_r_separate != NULL) goto CPyL167;
    cpy_r_r3 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r3);
    cpy_r_separate = cpy_r_r3;
CPyL14: ;
    if (cpy_r_skip_cgen_input != NULL) goto CPyL168;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    cpy_r_skip_cgen_input = cpy_r_r4;
CPyL16: ;
    if (cpy_r_target_dir != NULL) goto CPyL169;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    cpy_r_target_dir = cpy_r_r5;
CPyL18: ;
    if (cpy_r_include_runtime_files != NULL) goto CPyL170;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    cpy_r_include_runtime_files = cpy_r_r6;
CPyL20: ;
    cpy_r_r7 = 0 ? Py_True : Py_False;
    cpy_r_r8 = cpy_r_separate == cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 ^ 1;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_mypyc___options___CompilerOptions(cpy_r_strip_asserts, cpy_r_multi_file, cpy_r_verbose, cpy_r_r9, cpy_r_target_dir, cpy_r_include_runtime_files, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_target_dir);
    CPy_DECREF(cpy_r_include_runtime_files);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 511, CPyStatic_mypyc___build___globals);
        goto CPyL171;
    }
    cpy_r_compiler_options = cpy_r_r12;
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_mypyc___build___mypyc_build(cpy_r_paths, cpy_r_compiler_options, cpy_r_separate, cpy_r_only_compile_paths, cpy_r_skip_cgen_input, cpy_r_r13);
    CPy_DECREF(cpy_r_separate);
    CPy_DECREF(cpy_r_only_compile_paths);
    CPy_DECREF(cpy_r_skip_cgen_input);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 521, CPyStatic_mypyc___build___globals);
        goto CPyL172;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    cpy_r_groups = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f1;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    cpy_r_group_cfilenames = cpy_r_r16;
    cpy_r_r17 = CPyDef_mypyc___build___setup_mypycify_vars();
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 530, CPyStatic_mypyc___build___globals);
        goto CPyL173;
    }
    cpy_r_r18 = CPyStatic_mypyc___build___globals;
    cpy_r_r19 = CPyStatics[6806]; /* 'ccompiler' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 535, CPyStatic_mypyc___build___globals);
        goto CPyL173;
    }
    cpy_r_r21 = CPyStatics[6807]; /* 'new_compiler' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 535, CPyStatic_mypyc___build___globals);
        goto CPyL173;
    }
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r22, 0, 0, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 535, CPyStatic_mypyc___build___globals);
        goto CPyL173;
    }
    cpy_r_compiler = cpy_r_r23;
    cpy_r_r24 = CPyStatic_mypyc___build___globals;
    cpy_r_r25 = CPyStatics[4236]; /* 'sysconfig' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 536, CPyStatic_mypyc___build___globals);
        goto CPyL174;
    }
    cpy_r_r27 = CPyStatics[6808]; /* 'customize_compiler' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 536, CPyStatic_mypyc___build___globals);
        goto CPyL174;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_compiler};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 536, CPyStatic_mypyc___build___globals);
        goto CPyL174;
    } else
        goto CPyL175;
CPyL29: ;
    cpy_r_r32 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_target_dir;
    CPy_INCREF(cpy_r_r32);
    cpy_r_build_dir = cpy_r_r32;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 540, CPyStatic_mypyc___build___globals);
        goto CPyL176;
    }
    cpy_r_cflags = cpy_r_r33;
    cpy_r_r34 = CPyStatics[6809]; /* 'compiler_type' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_compiler, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 541, CPyStatic_mypyc___build___globals);
        goto CPyL177;
    }
    cpy_r_r36 = CPyStatics[6810]; /* 'unix' */
    cpy_r_r37 = PyObject_RichCompare(cpy_r_r35, cpy_r_r36, 2);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 541, CPyStatic_mypyc___build___globals);
        goto CPyL177;
    }
    cpy_r_r38 = PyObject_IsTrue(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 541, CPyStatic_mypyc___build___globals);
        goto CPyL177;
    }
    cpy_r_r40 = cpy_r_r38;
    if (cpy_r_r40) {
        goto CPyL178;
    } else
        goto CPyL40;
CPyL34: ;
    cpy_r_r41 = CPyStatics[6811]; /* '-O' */
    cpy_r_r42 = CPyStr_Build(2, cpy_r_r41, cpy_r_opt_level);
    CPy_DECREF(cpy_r_opt_level);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 543, CPyStatic_mypyc___build___globals);
        goto CPyL179;
    }
    cpy_r_r43 = CPyStatics[6812]; /* '-g' */
    cpy_r_r44 = CPyStr_Build(2, cpy_r_r43, cpy_r_debug_level);
    CPy_DECREF(cpy_r_debug_level);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 544, CPyStatic_mypyc___build___globals);
        goto CPyL180;
    }
    cpy_r_r45 = CPyStatics[6813]; /* '-Werror' */
    cpy_r_r46 = CPyStatics[6814]; /* '-Wno-unused-function' */
    cpy_r_r47 = CPyStatics[6815]; /* '-Wno-unused-label' */
    cpy_r_r48 = CPyStatics[6816]; /* '-Wno-unreachable-code' */
    cpy_r_r49 = CPyStatics[6817]; /* '-Wno-unused-variable' */
    cpy_r_r50 = CPyStatics[6818]; /* '-Wno-unused-command-line-argument' */
    cpy_r_r51 = CPyStatics[6819]; /* '-Wno-unknown-warning-option' */
    cpy_r_r52 = CPyStatics[6820]; /* '-Wno-unused-but-set-variable' */
    cpy_r_r53 = CPyStatics[6821]; /* '-Wno-ignored-optimization-argument' */
    cpy_r_r54 = CPyStatics[6822]; /* '-Wno-cpp' */
    CPy_INCREF(cpy_r_r45);
    CPy_INCREF(cpy_r_r46);
    CPy_INCREF(cpy_r_r47);
    CPy_INCREF(cpy_r_r48);
    CPy_INCREF(cpy_r_r49);
    CPy_INCREF(cpy_r_r50);
    CPy_INCREF(cpy_r_r51);
    CPy_INCREF(cpy_r_r52);
    CPy_INCREF(cpy_r_r53);
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyList_Build(12, cpy_r_r42, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 542, CPyStatic_mypyc___build___globals);
        goto CPyL181;
    }
    cpy_r_r56 = PyNumber_InPlaceAdd(cpy_r_cflags, cpy_r_r55);
    CPy_DECREF(cpy_r_cflags);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 542, CPyStatic_mypyc___build___globals);
        goto CPyL182;
    }
    if (likely(PyList_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 542, CPyStatic_mypyc___build___globals, "list", cpy_r_r56);
        goto CPyL182;
    }
    cpy_r_cflags = cpy_r_r57;
    goto CPyL97;
CPyL40: ;
    cpy_r_r58 = CPyStatics[6809]; /* 'compiler_type' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_compiler, cpy_r_r58);
    CPy_DECREF(cpy_r_compiler);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 558, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
    cpy_r_r60 = CPyStatics[6823]; /* 'msvc' */
    cpy_r_r61 = PyObject_RichCompare(cpy_r_r59, cpy_r_r60, 2);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 558, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
    cpy_r_r62 = PyObject_IsTrue(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 558, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
    cpy_r_r64 = cpy_r_r62;
    if (!cpy_r_r64) goto CPyL184;
    cpy_r_r65 = CPyStatics[3720]; /* '0' */
    cpy_r_r66 = PyUnicode_Compare(cpy_r_opt_level, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 == -1;
    if (!cpy_r_r67) goto CPyL47;
    cpy_r_r68 = PyErr_Occurred();
    cpy_r_r69 = cpy_r_r68 != NULL;
    if (!cpy_r_r69) goto CPyL47;
    cpy_r_r70 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 560, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL47: ;
    cpy_r_r71 = cpy_r_r66 == 0;
    if (cpy_r_r71) {
        goto CPyL185;
    } else
        goto CPyL49;
CPyL48: ;
    cpy_r_r72 = CPyStatics[1459]; /* 'd' */
    CPy_INCREF(cpy_r_r72);
    cpy_r_opt_level = cpy_r_r72;
    goto CPyL66;
CPyL49: ;
    cpy_r_r73 = CPyStatics[3858]; /* '1' */
    cpy_r_r74 = PyUnicode_Compare(cpy_r_opt_level, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 == -1;
    if (!cpy_r_r75) goto CPyL52;
    cpy_r_r76 = PyErr_Occurred();
    cpy_r_r77 = cpy_r_r76 != NULL;
    if (!cpy_r_r77) goto CPyL52;
    cpy_r_r78 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", -1, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL52: ;
    cpy_r_r79 = cpy_r_r74 == 0;
    if (!cpy_r_r79) goto CPyL54;
    cpy_r_r80 = cpy_r_r79;
    goto CPyL58;
CPyL54: ;
    cpy_r_r81 = CPyStatics[6824]; /* '2' */
    cpy_r_r82 = PyUnicode_Compare(cpy_r_opt_level, cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 == -1;
    if (!cpy_r_r83) goto CPyL57;
    cpy_r_r84 = PyErr_Occurred();
    cpy_r_r85 = cpy_r_r84 != NULL;
    if (!cpy_r_r85) goto CPyL57;
    cpy_r_r86 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", -1, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL57: ;
    cpy_r_r87 = cpy_r_r82 == 0;
    cpy_r_r80 = cpy_r_r87;
CPyL58: ;
    if (!cpy_r_r80) goto CPyL60;
    cpy_r_r88 = cpy_r_r80;
    goto CPyL64;
CPyL60: ;
    cpy_r_r89 = CPyStatics[6805]; /* '3' */
    cpy_r_r90 = PyUnicode_Compare(cpy_r_opt_level, cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 == -1;
    if (!cpy_r_r91) goto CPyL63;
    cpy_r_r92 = PyErr_Occurred();
    cpy_r_r93 = cpy_r_r92 != NULL;
    if (!cpy_r_r93) goto CPyL63;
    cpy_r_r94 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", -1, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL63: ;
    cpy_r_r95 = cpy_r_r90 == 0;
    cpy_r_r88 = cpy_r_r95;
CPyL64: ;
    if (cpy_r_r88) {
        goto CPyL186;
    } else
        goto CPyL66;
CPyL65: ;
    cpy_r_r96 = CPyStatics[6824]; /* '2' */
    CPy_INCREF(cpy_r_r96);
    cpy_r_opt_level = cpy_r_r96;
CPyL66: ;
    cpy_r_r97 = CPyStatics[3720]; /* '0' */
    cpy_r_r98 = PyUnicode_Compare(cpy_r_debug_level, cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 == -1;
    if (!cpy_r_r99) goto CPyL69;
    cpy_r_r100 = PyErr_Occurred();
    cpy_r_r101 = cpy_r_r100 != NULL;
    if (!cpy_r_r101) goto CPyL69;
    cpy_r_r102 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 564, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL69: ;
    cpy_r_r103 = cpy_r_r98 == 0;
    if (cpy_r_r103) {
        goto CPyL187;
    } else
        goto CPyL71;
CPyL70: ;
    cpy_r_r104 = CPyStatics[6825]; /* 'NONE' */
    CPy_INCREF(cpy_r_r104);
    cpy_r_debug_level = cpy_r_r104;
    goto CPyL87;
CPyL71: ;
    cpy_r_r105 = CPyStatics[3858]; /* '1' */
    cpy_r_r106 = PyUnicode_Compare(cpy_r_debug_level, cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 == -1;
    if (!cpy_r_r107) goto CPyL74;
    cpy_r_r108 = PyErr_Occurred();
    cpy_r_r109 = cpy_r_r108 != NULL;
    if (!cpy_r_r109) goto CPyL74;
    cpy_r_r110 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 566, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL74: ;
    cpy_r_r111 = cpy_r_r106 == 0;
    if (cpy_r_r111) {
        goto CPyL188;
    } else
        goto CPyL76;
CPyL75: ;
    cpy_r_r112 = CPyStatics[6826]; /* 'FASTLINK' */
    CPy_INCREF(cpy_r_r112);
    cpy_r_debug_level = cpy_r_r112;
    goto CPyL87;
CPyL76: ;
    cpy_r_r113 = CPyStatics[6824]; /* '2' */
    cpy_r_r114 = PyUnicode_Compare(cpy_r_debug_level, cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 == -1;
    if (!cpy_r_r115) goto CPyL79;
    cpy_r_r116 = PyErr_Occurred();
    cpy_r_r117 = cpy_r_r116 != NULL;
    if (!cpy_r_r117) goto CPyL79;
    cpy_r_r118 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", -1, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL79: ;
    cpy_r_r119 = cpy_r_r114 == 0;
    if (!cpy_r_r119) goto CPyL81;
    cpy_r_r120 = cpy_r_r119;
    goto CPyL85;
CPyL81: ;
    cpy_r_r121 = CPyStatics[6805]; /* '3' */
    cpy_r_r122 = PyUnicode_Compare(cpy_r_debug_level, cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 == -1;
    if (!cpy_r_r123) goto CPyL84;
    cpy_r_r124 = PyErr_Occurred();
    cpy_r_r125 = cpy_r_r124 != NULL;
    if (!cpy_r_r125) goto CPyL84;
    cpy_r_r126 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", -1, CPyStatic_mypyc___build___globals);
        goto CPyL183;
    }
CPyL84: ;
    cpy_r_r127 = cpy_r_r122 == 0;
    cpy_r_r120 = cpy_r_r127;
CPyL85: ;
    if (cpy_r_r120) {
        goto CPyL189;
    } else
        goto CPyL87;
CPyL86: ;
    cpy_r_r128 = CPyStatics[6827]; /* 'FULL' */
    CPy_INCREF(cpy_r_r128);
    cpy_r_debug_level = cpy_r_r128;
CPyL87: ;
    cpy_r_r129 = CPyStatics[6828]; /* '/O' */
    cpy_r_r130 = CPyStr_Build(2, cpy_r_r129, cpy_r_opt_level);
    CPy_DECREF(cpy_r_opt_level);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 571, CPyStatic_mypyc___build___globals);
        goto CPyL179;
    }
    cpy_r_r131 = CPyStatics[6829]; /* '/DEBUG:' */
    cpy_r_r132 = CPyStr_Build(2, cpy_r_r131, cpy_r_debug_level);
    CPy_DECREF(cpy_r_debug_level);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 572, CPyStatic_mypyc___build___globals);
        goto CPyL190;
    }
    cpy_r_r133 = CPyStatics[6830]; /* '/wd4102' */
    cpy_r_r134 = CPyStatics[6831]; /* '/wd4101' */
    cpy_r_r135 = CPyStatics[6832]; /* '/wd4146' */
    cpy_r_r136 = PyList_New(5);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 570, CPyStatic_mypyc___build___globals);
        goto CPyL191;
    }
    cpy_r_r137 = (CPyPtr)&((PyListObject *)cpy_r_r136)->ob_item;
    cpy_r_r138 = *(CPyPtr *)cpy_r_r137;
    *(PyObject * *)cpy_r_r138 = cpy_r_r130;
    cpy_r_r139 = cpy_r_r138 + 8;
    *(PyObject * *)cpy_r_r139 = cpy_r_r132;
    cpy_r_r140 = cpy_r_r138 + 16;
    CPy_INCREF(cpy_r_r133);
    *(PyObject * *)cpy_r_r140 = cpy_r_r133;
    cpy_r_r141 = cpy_r_r138 + 24;
    CPy_INCREF(cpy_r_r134);
    *(PyObject * *)cpy_r_r141 = cpy_r_r134;
    cpy_r_r142 = cpy_r_r138 + 32;
    CPy_INCREF(cpy_r_r135);
    *(PyObject * *)cpy_r_r142 = cpy_r_r135;
    cpy_r_r143 = PyNumber_InPlaceAdd(cpy_r_cflags, cpy_r_r136);
    CPy_DECREF(cpy_r_cflags);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 570, CPyStatic_mypyc___build___globals);
        goto CPyL182;
    }
    if (likely(PyList_Check(cpy_r_r143)))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 570, CPyStatic_mypyc___build___globals, "list", cpy_r_r143);
        goto CPyL182;
    }
    cpy_r_cflags = cpy_r_r144;
    if (!cpy_r_multi_file) goto CPyL97;
    cpy_r_r145 = CPyStatics[6833]; /* '/GL-' */
    cpy_r_r146 = CPyStatics[6834]; /* '/wd9025' */
    cpy_r_r147 = PyList_New(2);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 581, CPyStatic_mypyc___build___globals);
        goto CPyL181;
    }
    cpy_r_r148 = (CPyPtr)&((PyListObject *)cpy_r_r147)->ob_item;
    cpy_r_r149 = *(CPyPtr *)cpy_r_r148;
    CPy_INCREF(cpy_r_r145);
    *(PyObject * *)cpy_r_r149 = cpy_r_r145;
    cpy_r_r150 = cpy_r_r149 + 8;
    CPy_INCREF(cpy_r_r146);
    *(PyObject * *)cpy_r_r150 = cpy_r_r146;
    cpy_r_r151 = PyNumber_InPlaceAdd(cpy_r_cflags, cpy_r_r147);
    CPy_DECREF(cpy_r_cflags);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 581, CPyStatic_mypyc___build___globals);
        goto CPyL182;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 581, CPyStatic_mypyc___build___globals, "list", cpy_r_r151);
        goto CPyL182;
    }
    cpy_r_cflags = cpy_r_r152;
CPyL97: ;
    cpy_r_r153 = PyList_New(0);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 586, CPyStatic_mypyc___build___globals);
        goto CPyL181;
    }
    cpy_r_shared_cfilenames = cpy_r_r153;
    cpy_r_r154 = ((mypyc___options___CompilerOptionsObject *)cpy_r_compiler_options)->_include_runtime_files;
    CPy_DECREF(cpy_r_compiler_options);
    if (cpy_r_r154) goto CPyL143;
CPyL99: ;
    cpy_r_r155 = CPyStatic_mypyc___common___RUNTIME_C_FILES;
    if (unlikely(cpy_r_r155 == NULL)) {
        goto CPyL192;
    } else
        goto CPyL102;
CPyL100: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"RUNTIME_C_FILES\" was not set");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 588, CPyStatic_mypyc___build___globals);
        goto CPyL163;
    }
    CPy_Unreachable();
CPyL102: ;
    cpy_r_r157 = 0;
CPyL103: ;
    cpy_r_r158 = (CPyPtr)&((PyVarObject *)cpy_r_r155)->ob_size;
    cpy_r_r159 = *(int64_t *)cpy_r_r158;
    cpy_r_r160 = cpy_r_r159 << 1;
    cpy_r_r161 = (Py_ssize_t)cpy_r_r157 < (Py_ssize_t)cpy_r_r160;
    if (!cpy_r_r161) goto CPyL143;
    cpy_r_r162 = CPyList_GetItemUnsafe(cpy_r_r155, cpy_r_r157);
    if (likely(PyUnicode_Check(cpy_r_r162)))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 588, CPyStatic_mypyc___build___globals, "str", cpy_r_r162);
        goto CPyL193;
    }
    cpy_r_name = cpy_r_r163;
    cpy_r_r164 = CPyModule_os___path;
    cpy_r_r165 = CPyStatics[175]; /* 'join' */
    cpy_r_r166 = CPyObject_GetAttr(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 589, CPyStatic_mypyc___build___globals);
        goto CPyL194;
    }
    PyObject *cpy_r_r167[2] = {cpy_r_build_dir, cpy_r_name};
    cpy_r_r168 = (PyObject **)&cpy_r_r167;
    cpy_r_r169 = _PyObject_Vectorcall(cpy_r_r166, cpy_r_r168, 2, 0);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 589, CPyStatic_mypyc___build___globals);
        goto CPyL194;
    }
    if (likely(PyUnicode_Check(cpy_r_r169)))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 589, CPyStatic_mypyc___build___globals, "str", cpy_r_r169);
        goto CPyL194;
    }
    cpy_r_rt_file = cpy_r_r170;
    cpy_r_r171 = CPyDef_mypyc___build___include_dir();
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL195;
    }
    cpy_r_r172 = CPyModule_os___path;
    cpy_r_r173 = CPyStatics[175]; /* 'join' */
    cpy_r_r174 = CPyObject_GetAttr(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL196;
    }
    PyObject *cpy_r_r175[2] = {cpy_r_r171, cpy_r_name};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = _PyObject_Vectorcall(cpy_r_r174, cpy_r_r176, 2, 0);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL196;
    }
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_name);
    if (likely(PyUnicode_Check(cpy_r_r177)))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals, "str", cpy_r_r177);
        goto CPyL197;
    }
    cpy_r_r179 = CPyStatics[344]; /* 'utf-8' */
    cpy_r_r180 = CPyModule_builtins;
    cpy_r_r181 = CPyStatics[199]; /* 'open' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL198;
    }
    PyObject *cpy_r_r183[2] = {cpy_r_r178, cpy_r_r179};
    cpy_r_r184 = (PyObject **)&cpy_r_r183;
    cpy_r_r185 = CPyStatics[9097]; /* ('encoding',) */
    cpy_r_r186 = _PyObject_Vectorcall(cpy_r_r182, cpy_r_r184, 1, cpy_r_r185);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL198;
    }
    CPy_DECREF(cpy_r_r178);
    cpy_r_r187 = PyObject_Type(cpy_r_r186);
    cpy_r_r188 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r189 = CPyObject_GetAttr(cpy_r_r187, cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL199;
    }
    cpy_r_r190 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r191 = CPyObject_GetAttr(cpy_r_r187, cpy_r_r190);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL200;
    }
    PyObject *cpy_r_r192[1] = {cpy_r_r186};
    cpy_r_r193 = (PyObject **)&cpy_r_r192;
    cpy_r_r194 = _PyObject_Vectorcall(cpy_r_r191, cpy_r_r193, 1, 0);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL200;
    }
    cpy_r_r195 = 1;
    cpy_r_f = cpy_r_r194;
    cpy_r_r196 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r197[1] = {cpy_r_f};
    cpy_r_r198 = (PyObject **)&cpy_r_r197;
    cpy_r_r199 = PyObject_VectorcallMethod(cpy_r_r196, cpy_r_r198, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 591, CPyStatic_mypyc___build___globals);
        goto CPyL201;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyUnicode_Check(cpy_r_r199)))
        cpy_r_r200 = cpy_r_r199;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 591, CPyStatic_mypyc___build___globals, "str", cpy_r_r199);
        goto CPyL121;
    }
    cpy_r_r201 = CPyDef_mypyc___build___write_file(cpy_r_rt_file, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r201 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 591, CPyStatic_mypyc___build___globals);
    } else
        goto CPyL129;
CPyL121: ;
    cpy_r_r202 = CPy_CatchError();
    cpy_r_r195 = 0;
    cpy_r_r203 = CPy_GetExcInfo();
    cpy_r_r204 = cpy_r_r203.f0;
    CPy_INCREF(cpy_r_r204);
    cpy_r_r205 = cpy_r_r203.f1;
    CPy_INCREF(cpy_r_r205);
    cpy_r_r206 = cpy_r_r203.f2;
    CPy_INCREF(cpy_r_r206);
    CPy_DecRef(cpy_r_r203.f0);
    CPy_DecRef(cpy_r_r203.f1);
    CPy_DecRef(cpy_r_r203.f2);
    PyObject *cpy_r_r207[4] = {cpy_r_r186, cpy_r_r204, cpy_r_r205, cpy_r_r206};
    cpy_r_r208 = (PyObject **)&cpy_r_r207;
    cpy_r_r209 = _PyObject_Vectorcall(cpy_r_r189, cpy_r_r208, 4, 0);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL202;
    }
    CPy_DecRef(cpy_r_r204);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r206);
    cpy_r_r210 = PyObject_IsTrue(cpy_r_r209);
    CPy_DecRef(cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL127;
    }
    cpy_r_r212 = cpy_r_r210;
    if (cpy_r_r212) goto CPyL126;
    CPy_Reraise();
    if (!0) {
        goto CPyL127;
    } else
        goto CPyL203;
CPyL125: ;
    CPy_Unreachable();
CPyL126: ;
    CPy_RestoreExcInfo(cpy_r_r202);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r202.f2);
    goto CPyL129;
CPyL127: ;
    CPy_RestoreExcInfo(cpy_r_r202);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r202.f2);
    cpy_r_r213 = CPy_KeepPropagating();
    if (!cpy_r_r213) {
        goto CPyL130;
    } else
        goto CPyL204;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    tuple_T3OOO __tmp9107 = { NULL, NULL, NULL };
    cpy_r_r214 = __tmp9107;
    cpy_r_r215 = cpy_r_r214;
    goto CPyL131;
CPyL130: ;
    cpy_r_r216 = CPy_CatchError();
    cpy_r_r215 = cpy_r_r216;
CPyL131: ;
    if (!cpy_r_r195) goto CPyL205;
    cpy_r_r217 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r218[4] = {cpy_r_r186, cpy_r_r217, cpy_r_r217, cpy_r_r217};
    cpy_r_r219 = (PyObject **)&cpy_r_r218;
    cpy_r_r220 = _PyObject_Vectorcall(cpy_r_r189, cpy_r_r219, 4, 0);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 590, CPyStatic_mypyc___build___globals);
        goto CPyL206;
    } else
        goto CPyL207;
CPyL133: ;
    CPy_DECREF(cpy_r_r186);
CPyL134: ;
    if (cpy_r_r215.f0 == NULL) {
        goto CPyL141;
    } else
        goto CPyL208;
CPyL135: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL137;
    } else
        goto CPyL209;
CPyL136: ;
    CPy_Unreachable();
CPyL137: ;
    if (cpy_r_r215.f0 == NULL) goto CPyL139;
    CPy_RestoreExcInfo(cpy_r_r215);
    CPy_XDECREF(cpy_r_r215.f0);
    CPy_XDECREF(cpy_r_r215.f1);
    CPy_XDECREF(cpy_r_r215.f2);
CPyL139: ;
    cpy_r_r221 = CPy_KeepPropagating();
    if (!cpy_r_r221) goto CPyL163;
    CPy_Unreachable();
CPyL141: ;
    cpy_r_r222 = PyList_Append(cpy_r_shared_cfilenames, cpy_r_rt_file);
    CPy_DECREF(cpy_r_rt_file);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 592, CPyStatic_mypyc___build___globals);
        goto CPyL193;
    }
    cpy_r_r224 = cpy_r_r157 + 2;
    cpy_r_r157 = cpy_r_r224;
    goto CPyL103;
CPyL143: ;
    cpy_r_r225 = PyList_New(0);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 594, CPyStatic_mypyc___build___globals);
        goto CPyL193;
    }
    cpy_r_extensions = cpy_r_r225;
    cpy_r_r226 = 0;
    cpy_r_r227 = 0;
CPyL145: ;
    cpy_r_r228 = (CPyPtr)&((PyVarObject *)cpy_r_groups)->ob_size;
    cpy_r_r229 = *(int64_t *)cpy_r_r228;
    cpy_r_r230 = cpy_r_r229 << 1;
    cpy_r_r231 = (Py_ssize_t)cpy_r_r226 < (Py_ssize_t)cpy_r_r230;
    if (!cpy_r_r231) goto CPyL210;
    cpy_r_r232 = (CPyPtr)&((PyVarObject *)cpy_r_group_cfilenames)->ob_size;
    cpy_r_r233 = *(int64_t *)cpy_r_r232;
    cpy_r_r234 = cpy_r_r233 << 1;
    cpy_r_r235 = (Py_ssize_t)cpy_r_r227 < (Py_ssize_t)cpy_r_r234;
    if (!cpy_r_r235) goto CPyL210;
    cpy_r_r236 = CPyList_GetItemUnsafe(cpy_r_groups, cpy_r_r226);
    PyObject *__tmp9108;
    if (unlikely(!(PyTuple_Check(cpy_r_r236) && PyTuple_GET_SIZE(cpy_r_r236) == 2))) {
        __tmp9108 = NULL;
        goto __LL9109;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r236, 0))))
        __tmp9108 = PyTuple_GET_ITEM(cpy_r_r236, 0);
    else {
        __tmp9108 = NULL;
    }
    if (__tmp9108 == NULL) goto __LL9109;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r236, 1)))
        __tmp9108 = PyTuple_GET_ITEM(cpy_r_r236, 1);
    else {
        __tmp9108 = NULL;
    }
    if (__tmp9108 != NULL) goto __LL9110;
    if (PyTuple_GET_ITEM(cpy_r_r236, 1) == Py_None)
        __tmp9108 = PyTuple_GET_ITEM(cpy_r_r236, 1);
    else {
        __tmp9108 = NULL;
    }
    if (__tmp9108 != NULL) goto __LL9110;
    __tmp9108 = NULL;
__LL9110: ;
    if (__tmp9108 == NULL) goto __LL9109;
    __tmp9108 = cpy_r_r236;
__LL9109: ;
    if (unlikely(__tmp9108 == NULL)) {
        CPy_TypeError("tuple[list, union[str, None]]", cpy_r_r236); cpy_r_r237 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9111 = PyTuple_GET_ITEM(cpy_r_r236, 0);
        CPy_INCREF(__tmp9111);
        PyObject *__tmp9112;
        if (likely(PyList_Check(__tmp9111)))
            __tmp9112 = __tmp9111;
        else {
            CPy_TypeError("list", __tmp9111); 
            __tmp9112 = NULL;
        }
        cpy_r_r237.f0 = __tmp9112;
        PyObject *__tmp9113 = PyTuple_GET_ITEM(cpy_r_r236, 1);
        CPy_INCREF(__tmp9113);
        PyObject *__tmp9114;
        if (PyUnicode_Check(__tmp9113))
            __tmp9114 = __tmp9113;
        else {
            __tmp9114 = NULL;
        }
        if (__tmp9114 != NULL) goto __LL9115;
        if (__tmp9113 == Py_None)
            __tmp9114 = __tmp9113;
        else {
            __tmp9114 = NULL;
        }
        if (__tmp9114 != NULL) goto __LL9115;
        CPy_TypeError("str or None", __tmp9113); 
        __tmp9114 = NULL;
__LL9115: ;
        cpy_r_r237.f1 = __tmp9114;
    }
    CPy_DECREF(cpy_r_r236);
    if (unlikely(cpy_r_r237.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 595, CPyStatic_mypyc___build___globals);
        goto CPyL211;
    }
    cpy_r_r238 = cpy_r_r237.f0;
    CPy_INCREF(cpy_r_r238);
    cpy_r_group_sources = cpy_r_r238;
    cpy_r_r239 = cpy_r_r237.f1;
    CPy_INCREF(cpy_r_r239);
    CPy_DECREF(cpy_r_r237.f0);
    CPy_DECREF(cpy_r_r237.f1);
    cpy_r_lib_name = cpy_r_r239;
    cpy_r_r240 = CPyList_GetItemUnsafe(cpy_r_group_cfilenames, cpy_r_r227);
    PyObject *__tmp9116;
    if (unlikely(!(PyTuple_Check(cpy_r_r240) && PyTuple_GET_SIZE(cpy_r_r240) == 2))) {
        __tmp9116 = NULL;
        goto __LL9117;
    }
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r240, 0))))
        __tmp9116 = PyTuple_GET_ITEM(cpy_r_r240, 0);
    else {
        __tmp9116 = NULL;
    }
    if (__tmp9116 == NULL) goto __LL9117;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r240, 1))))
        __tmp9116 = PyTuple_GET_ITEM(cpy_r_r240, 1);
    else {
        __tmp9116 = NULL;
    }
    if (__tmp9116 == NULL) goto __LL9117;
    __tmp9116 = cpy_r_r240;
__LL9117: ;
    if (unlikely(__tmp9116 == NULL)) {
        CPy_TypeError("tuple[list, list]", cpy_r_r240); cpy_r_r241 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9118 = PyTuple_GET_ITEM(cpy_r_r240, 0);
        CPy_INCREF(__tmp9118);
        PyObject *__tmp9119;
        if (likely(PyList_Check(__tmp9118)))
            __tmp9119 = __tmp9118;
        else {
            CPy_TypeError("list", __tmp9118); 
            __tmp9119 = NULL;
        }
        cpy_r_r241.f0 = __tmp9119;
        PyObject *__tmp9120 = PyTuple_GET_ITEM(cpy_r_r240, 1);
        CPy_INCREF(__tmp9120);
        PyObject *__tmp9121;
        if (likely(PyList_Check(__tmp9120)))
            __tmp9121 = __tmp9120;
        else {
            CPy_TypeError("list", __tmp9120); 
            __tmp9121 = NULL;
        }
        cpy_r_r241.f1 = __tmp9121;
    }
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r241.f0 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 595, CPyStatic_mypyc___build___globals);
        goto CPyL212;
    }
    cpy_r_r242 = cpy_r_r241.f0;
    CPy_INCREF(cpy_r_r242);
    cpy_r_cfilenames = cpy_r_r242;
    cpy_r_r243 = cpy_r_r241.f1;
    CPy_INCREF(cpy_r_r243);
    CPy_DECREF(cpy_r_r241.f0);
    CPy_DECREF(cpy_r_r241.f1);
    cpy_r_deps = cpy_r_r243;
    cpy_r_r244 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r245 = cpy_r_lib_name != cpy_r_r244;
    if (!cpy_r_r245) goto CPyL213;
    CPy_INCREF(cpy_r_lib_name);
    if (likely(cpy_r_lib_name != Py_None))
        cpy_r_r246 = cpy_r_lib_name;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 595, CPyStatic_mypyc___build___globals, "str", cpy_r_lib_name);
        goto CPyL214;
    }
    cpy_r_r247 = CPyStr_IsTrue(cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    if (!cpy_r_r247) goto CPyL213;
    if (likely(cpy_r_lib_name != Py_None))
        cpy_r_r248 = cpy_r_lib_name;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 600, CPyStatic_mypyc___build___globals, "str", cpy_r_lib_name);
        goto CPyL215;
    }
    cpy_r_r249 = PyNumber_Add(cpy_r_cfilenames, cpy_r_shared_cfilenames);
    CPy_DECREF(cpy_r_cfilenames);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 601, CPyStatic_mypyc___build___globals);
        goto CPyL216;
    }
    if (likely(PyList_Check(cpy_r_r249)))
        cpy_r_r250 = cpy_r_r249;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 601, CPyStatic_mypyc___build___globals, "list", cpy_r_r249);
        goto CPyL216;
    }
    cpy_r_r251 = CPyDef_mypyc___build___build_using_shared_lib(cpy_r_group_sources, cpy_r_r248, cpy_r_r250, cpy_r_deps, cpy_r_build_dir, cpy_r_cflags);
    CPy_DECREF(cpy_r_group_sources);
    CPy_DECREF(cpy_r_r248);
    CPy_DECREF(cpy_r_r250);
    CPy_DECREF(cpy_r_deps);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 598, CPyStatic_mypyc___build___globals);
        goto CPyL211;
    }
    cpy_r_r252 = CPyList_Extend(cpy_r_extensions, cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 597, CPyStatic_mypyc___build___globals);
        goto CPyL211;
    } else
        goto CPyL217;
CPyL157: ;
    cpy_r_r253 = PyNumber_Add(cpy_r_cfilenames, cpy_r_shared_cfilenames);
    CPy_DECREF(cpy_r_cfilenames);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 609, CPyStatic_mypyc___build___globals);
        goto CPyL218;
    }
    if (likely(PyList_Check(cpy_r_r253)))
        cpy_r_r254 = cpy_r_r253;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "mypycify", 609, CPyStatic_mypyc___build___globals, "list", cpy_r_r253);
        goto CPyL218;
    }
    cpy_r_r255 = CPyDef_mypyc___build___build_single_module(cpy_r_group_sources, cpy_r_r254, cpy_r_cflags);
    CPy_DECREF(cpy_r_group_sources);
    CPy_DECREF(cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 609, CPyStatic_mypyc___build___globals);
        goto CPyL211;
    }
    cpy_r_r256 = CPyList_Extend(cpy_r_extensions, cpy_r_r255);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r256 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "mypycify", 608, CPyStatic_mypyc___build___globals);
        goto CPyL211;
    } else
        goto CPyL219;
CPyL161: ;
    cpy_r_r257 = cpy_r_r226 + 2;
    cpy_r_r226 = cpy_r_r257;
    cpy_r_r258 = cpy_r_r227 + 2;
    cpy_r_r227 = cpy_r_r258;
    goto CPyL145;
CPyL162: ;
    return cpy_r_extensions;
CPyL163: ;
    cpy_r_r259 = NULL;
    return cpy_r_r259;
CPyL164: ;
    CPy_INCREF(cpy_r_only_compile_paths);
    goto CPyL2;
CPyL165: ;
    CPy_INCREF(cpy_r_opt_level);
    goto CPyL6;
CPyL166: ;
    CPy_INCREF(cpy_r_debug_level);
    goto CPyL8;
CPyL167: ;
    CPy_INCREF(cpy_r_separate);
    goto CPyL14;
CPyL168: ;
    CPy_INCREF(cpy_r_skip_cgen_input);
    goto CPyL16;
CPyL169: ;
    CPy_INCREF(cpy_r_target_dir);
    goto CPyL18;
CPyL170: ;
    CPy_INCREF(cpy_r_include_runtime_files);
    goto CPyL20;
CPyL171: ;
    CPy_DecRef(cpy_r_only_compile_paths);
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_separate);
    CPy_DecRef(cpy_r_skip_cgen_input);
    goto CPyL163;
CPyL172: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    goto CPyL163;
CPyL173: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    goto CPyL163;
CPyL174: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_compiler);
    goto CPyL163;
CPyL175: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL29;
CPyL176: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_compiler);
    CPy_DecRef(cpy_r_build_dir);
    goto CPyL163;
CPyL177: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_compiler);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    goto CPyL163;
CPyL178: ;
    CPy_DECREF(cpy_r_compiler);
    goto CPyL34;
CPyL179: ;
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    goto CPyL163;
CPyL180: ;
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_r42);
    goto CPyL163;
CPyL181: ;
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    goto CPyL163;
CPyL182: ;
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    goto CPyL163;
CPyL183: ;
    CPy_DecRef(cpy_r_opt_level);
    CPy_DecRef(cpy_r_debug_level);
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    goto CPyL163;
CPyL184: ;
    CPy_DECREF(cpy_r_opt_level);
    CPy_DECREF(cpy_r_debug_level);
    goto CPyL97;
CPyL185: ;
    CPy_DECREF(cpy_r_opt_level);
    goto CPyL48;
CPyL186: ;
    CPy_DECREF(cpy_r_opt_level);
    goto CPyL65;
CPyL187: ;
    CPy_DECREF(cpy_r_debug_level);
    goto CPyL70;
CPyL188: ;
    CPy_DECREF(cpy_r_debug_level);
    goto CPyL75;
CPyL189: ;
    CPy_DECREF(cpy_r_debug_level);
    goto CPyL86;
CPyL190: ;
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_r130);
    goto CPyL163;
CPyL191: ;
    CPy_DecRef(cpy_r_compiler_options);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r132);
    goto CPyL163;
CPyL192: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    goto CPyL100;
CPyL193: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    goto CPyL163;
CPyL194: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_name);
    goto CPyL163;
CPyL195: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_rt_file);
    goto CPyL163;
CPyL196: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r171);
    goto CPyL163;
CPyL197: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    goto CPyL163;
CPyL198: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r178);
    goto CPyL163;
CPyL199: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    goto CPyL163;
CPyL200: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r189);
    goto CPyL163;
CPyL201: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL121;
CPyL202: ;
    CPy_DecRef(cpy_r_r204);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r206);
    goto CPyL127;
CPyL203: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r189);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r202.f2);
    goto CPyL125;
CPyL204: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r189);
    goto CPyL128;
CPyL205: ;
    CPy_DECREF(cpy_r_r186);
    CPy_DECREF(cpy_r_r189);
    goto CPyL134;
CPyL206: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_rt_file);
    CPy_DecRef(cpy_r_r186);
    goto CPyL137;
CPyL207: ;
    CPy_DECREF(cpy_r_r220);
    goto CPyL133;
CPyL208: ;
    CPy_DECREF(cpy_r_groups);
    CPy_DECREF(cpy_r_group_cfilenames);
    CPy_DECREF(cpy_r_build_dir);
    CPy_DECREF(cpy_r_cflags);
    CPy_DECREF(cpy_r_shared_cfilenames);
    CPy_DECREF(cpy_r_rt_file);
    goto CPyL135;
CPyL209: ;
    CPy_XDECREF(cpy_r_r215.f0);
    CPy_XDECREF(cpy_r_r215.f1);
    CPy_XDECREF(cpy_r_r215.f2);
    goto CPyL136;
CPyL210: ;
    CPy_DECREF(cpy_r_groups);
    CPy_DECREF(cpy_r_group_cfilenames);
    CPy_DECREF(cpy_r_build_dir);
    CPy_DECREF(cpy_r_cflags);
    CPy_DECREF(cpy_r_shared_cfilenames);
    goto CPyL162;
CPyL211: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    goto CPyL163;
CPyL212: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_lib_name);
    goto CPyL163;
CPyL213: ;
    CPy_DECREF(cpy_r_lib_name);
    CPy_DECREF(cpy_r_deps);
    goto CPyL157;
CPyL214: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_lib_name);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_deps);
    goto CPyL163;
CPyL215: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_cfilenames);
    CPy_DecRef(cpy_r_deps);
    goto CPyL163;
CPyL216: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_group_sources);
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r248);
    goto CPyL163;
CPyL217: ;
    CPy_DECREF(cpy_r_r252);
    goto CPyL161;
CPyL218: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_group_cfilenames);
    CPy_DecRef(cpy_r_build_dir);
    CPy_DecRef(cpy_r_cflags);
    CPy_DecRef(cpy_r_shared_cfilenames);
    CPy_DecRef(cpy_r_extensions);
    CPy_DecRef(cpy_r_group_sources);
    goto CPyL163;
CPyL219: ;
    CPy_DECREF(cpy_r_r256);
    goto CPyL161;
}

PyObject *CPyPy_mypyc___build___mypycify(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"paths", "only_compile_paths", "verbose", "opt_level", "debug_level", "strip_asserts", "multi_file", "separate", "skip_cgen_input", "target_dir", "include_runtime_files", 0};
    static CPyArg_Parser parser = {"O|$OOOOOOOOOO:mypycify", kwlist, 0};
    PyObject *obj_paths;
    PyObject *obj_only_compile_paths = NULL;
    PyObject *obj_verbose = NULL;
    PyObject *obj_opt_level = NULL;
    PyObject *obj_debug_level = NULL;
    PyObject *obj_strip_asserts = NULL;
    PyObject *obj_multi_file = NULL;
    PyObject *obj_separate = NULL;
    PyObject *obj_skip_cgen_input = NULL;
    PyObject *obj_target_dir = NULL;
    PyObject *obj_include_runtime_files = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_paths, &obj_only_compile_paths, &obj_verbose, &obj_opt_level, &obj_debug_level, &obj_strip_asserts, &obj_multi_file, &obj_separate, &obj_skip_cgen_input, &obj_target_dir, &obj_include_runtime_files)) {
        return NULL;
    }
    PyObject *arg_paths;
    if (likely(PyList_Check(obj_paths)))
        arg_paths = obj_paths;
    else {
        CPy_TypeError("list", obj_paths); 
        goto fail;
    }
    PyObject *arg_only_compile_paths;
    if (obj_only_compile_paths == NULL) {
        arg_only_compile_paths = NULL;
        goto __LL9122;
    }
    arg_only_compile_paths = obj_only_compile_paths;
    if (arg_only_compile_paths != NULL) goto __LL9122;
    if (obj_only_compile_paths == Py_None)
        arg_only_compile_paths = obj_only_compile_paths;
    else {
        arg_only_compile_paths = NULL;
    }
    if (arg_only_compile_paths != NULL) goto __LL9122;
    CPy_TypeError("object or None", obj_only_compile_paths); 
    goto fail;
__LL9122: ;
    char arg_verbose;
    if (obj_verbose == NULL) {
        arg_verbose = 2;
    } else if (unlikely(!PyBool_Check(obj_verbose))) {
        CPy_TypeError("bool", obj_verbose); goto fail;
    } else
        arg_verbose = obj_verbose == Py_True;
    PyObject *arg_opt_level;
    if (obj_opt_level == NULL) {
        arg_opt_level = NULL;
    } else if (likely(PyUnicode_Check(obj_opt_level)))
        arg_opt_level = obj_opt_level;
    else {
        CPy_TypeError("str", obj_opt_level); 
        goto fail;
    }
    PyObject *arg_debug_level;
    if (obj_debug_level == NULL) {
        arg_debug_level = NULL;
    } else if (likely(PyUnicode_Check(obj_debug_level)))
        arg_debug_level = obj_debug_level;
    else {
        CPy_TypeError("str", obj_debug_level); 
        goto fail;
    }
    char arg_strip_asserts;
    if (obj_strip_asserts == NULL) {
        arg_strip_asserts = 2;
    } else if (unlikely(!PyBool_Check(obj_strip_asserts))) {
        CPy_TypeError("bool", obj_strip_asserts); goto fail;
    } else
        arg_strip_asserts = obj_strip_asserts == Py_True;
    char arg_multi_file;
    if (obj_multi_file == NULL) {
        arg_multi_file = 2;
    } else if (unlikely(!PyBool_Check(obj_multi_file))) {
        CPy_TypeError("bool", obj_multi_file); goto fail;
    } else
        arg_multi_file = obj_multi_file == Py_True;
    PyObject *arg_separate;
    if (obj_separate == NULL) {
        arg_separate = NULL;
        goto __LL9123;
    }
    if (PyBool_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9123;
    if (PyList_Check(obj_separate))
        arg_separate = obj_separate;
    else {
        arg_separate = NULL;
    }
    if (arg_separate != NULL) goto __LL9123;
    CPy_TypeError("union[bool, list]", obj_separate); 
    goto fail;
__LL9123: ;
    PyObject *arg_skip_cgen_input;
    if (obj_skip_cgen_input == NULL) {
        arg_skip_cgen_input = NULL;
        goto __LL9124;
    }
    arg_skip_cgen_input = obj_skip_cgen_input;
    if (arg_skip_cgen_input != NULL) goto __LL9124;
    if (obj_skip_cgen_input == Py_None)
        arg_skip_cgen_input = obj_skip_cgen_input;
    else {
        arg_skip_cgen_input = NULL;
    }
    if (arg_skip_cgen_input != NULL) goto __LL9124;
    CPy_TypeError("object or None", obj_skip_cgen_input); 
    goto fail;
__LL9124: ;
    PyObject *arg_target_dir;
    if (obj_target_dir == NULL) {
        arg_target_dir = NULL;
        goto __LL9125;
    }
    if (PyUnicode_Check(obj_target_dir))
        arg_target_dir = obj_target_dir;
    else {
        arg_target_dir = NULL;
    }
    if (arg_target_dir != NULL) goto __LL9125;
    if (obj_target_dir == Py_None)
        arg_target_dir = obj_target_dir;
    else {
        arg_target_dir = NULL;
    }
    if (arg_target_dir != NULL) goto __LL9125;
    CPy_TypeError("str or None", obj_target_dir); 
    goto fail;
__LL9125: ;
    PyObject *arg_include_runtime_files;
    if (obj_include_runtime_files == NULL) {
        arg_include_runtime_files = NULL;
        goto __LL9126;
    }
    if (PyBool_Check(obj_include_runtime_files))
        arg_include_runtime_files = obj_include_runtime_files;
    else {
        arg_include_runtime_files = NULL;
    }
    if (arg_include_runtime_files != NULL) goto __LL9126;
    if (obj_include_runtime_files == Py_None)
        arg_include_runtime_files = obj_include_runtime_files;
    else {
        arg_include_runtime_files = NULL;
    }
    if (arg_include_runtime_files != NULL) goto __LL9126;
    CPy_TypeError("bool or None", obj_include_runtime_files); 
    goto fail;
__LL9126: ;
    PyObject *retval = CPyDef_mypyc___build___mypycify(arg_paths, arg_only_compile_paths, arg_verbose, arg_opt_level, arg_debug_level, arg_strip_asserts, arg_multi_file, arg_separate, arg_skip_cgen_input, arg_target_dir, arg_include_runtime_files);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/build.py", "mypycify", 456, CPyStatic_mypyc___build___globals);
    return NULL;
}

char CPyDef_mypyc___build_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    PyObject **cpy_r_r11;
    PyObject **cpy_r_r12;
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
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
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
    tuple_T2II cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    tuple_T2OO cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject **cpy_r_r103;
    void *cpy_r_r105;
    void *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", -1, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypyc___build___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 21, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_hashlib;
    cpy_r_r10 = (PyObject **)&CPyModule_os___path;
    cpy_r_r11 = (PyObject **)&CPyModule_re;
    cpy_r_r12 = (PyObject **)&CPyModule_sys;
    cpy_r_r13 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r14[5] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[5] = {23, 24, 25, 26, 27};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9922]; /* (('hashlib', 'hashlib', 'hashlib'),
                                     ('os.path', 'os', 'os'), ('re', 're', 're'),
                                     ('sys', 'sys', 'sys'), ('time', 'time', 'time')) */
    cpy_r_r19 = CPyStatic_mypyc___build___globals;
    cpy_r_r20 = CPyStatics[6835]; /* 'mypyc/build.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL44;
    cpy_r_r23 = CPyStatics[9923]; /* ('TYPE_CHECKING', 'Any', 'Dict', 'Iterable', 'NoReturn',
                                     'Union', 'cast') */
    cpy_r_r24 = CPyStatics[21]; /* 'typing' */
    cpy_r_r25 = CPyStatic_mypyc___build___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 28, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9772]; /* ('BuildSource',) */
    cpy_r_r28 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r29 = CPyStatic_mypyc___build___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 30, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___build = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9490]; /* ('CompileError',) */
    cpy_r_r32 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r33 = CPyStatic_mypyc___build___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 31, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___errors = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9146]; /* ('FileSystemCache',) */
    cpy_r_r36 = CPyStatics[564]; /* 'mypy.fscache' */
    cpy_r_r37 = CPyStatic_mypyc___build___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 32, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___fscache = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___fscache);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9924]; /* ('process_options',) */
    cpy_r_r40 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r41 = CPyStatic_mypyc___build___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 33, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___main = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___main);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r44 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r45 = CPyStatic_mypyc___build___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 34, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___options = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9305]; /* ('write_junit_xml',) */
    cpy_r_r48 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r49 = CPyStatic_mypyc___build___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 35, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypy___util = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9925]; /* ('emitmodule',) */
    cpy_r_r52 = CPyStatics[6838]; /* 'mypyc.codegen' */
    cpy_r_r53 = CPyStatic_mypyc___build___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 36, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___codegen = cpy_r_r54;
    CPy_INCREF(CPyModule_mypyc___codegen);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9926]; /* ('RUNTIME_C_FILES', 'shared_lib_name') */
    cpy_r_r56 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r57 = CPyStatic_mypyc___build___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 37, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___common = cpy_r_r58;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r60 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r61 = CPyStatic_mypyc___build___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 38, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___errors = cpy_r_r62;
    CPy_INCREF(CPyModule_mypyc___errors);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9927]; /* ('format_modules',) */
    cpy_r_r64 = CPyStatics[6758]; /* 'mypyc.ir.pprint' */
    cpy_r_r65 = CPyStatic_mypyc___build___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 39, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___ir___pprint = cpy_r_r66;
    CPy_INCREF(CPyModule_mypyc___ir___pprint);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9928]; /* ('exported_name',) */
    cpy_r_r68 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r69 = CPyStatic_mypyc___build___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 40, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___namegen = cpy_r_r70;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[9929]; /* ('CompilerOptions',) */
    cpy_r_r72 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r73 = CPyStatic_mypyc___build___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 41, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_mypyc___options = cpy_r_r74;
    CPy_INCREF(CPyModule_mypyc___options);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyModule_sys;
    cpy_r_r76 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 43, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    if (likely(PyTuple_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/build.py", "<module>", 43, CPyStatic_mypyc___build___globals, "tuple", cpy_r_r77);
        goto CPyL44;
    }
    cpy_r_r79.f0 = 6;
    cpy_r_r79.f1 = 24;
    CPyTagged_INCREF(cpy_r_r79.f0);
    CPyTagged_INCREF(cpy_r_r79.f1);
    cpy_r_r80 = PyTuple_New(2);
    if (unlikely(cpy_r_r80 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9127 = CPyTagged_StealAsObject(cpy_r_r79.f0);
    PyTuple_SET_ITEM(cpy_r_r80, 0, __tmp9127);
    PyObject *__tmp9128 = CPyTagged_StealAsObject(cpy_r_r79.f1);
    PyTuple_SET_ITEM(cpy_r_r80, 1, __tmp9128);
    cpy_r_r81 = PyObject_RichCompare(cpy_r_r78, cpy_r_r80, 0);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 43, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r81))) {
        CPy_TypeError("bool", cpy_r_r81); cpy_r_r82 = 2;
    } else
        cpy_r_r82 = cpy_r_r81 == Py_True;
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 43, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    if (!cpy_r_r82) goto CPyL41;
    cpy_r_r83 = CPyStatic_mypyc___build___globals;
    cpy_r_r84 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r85 = CPyDict_GetItem(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 44, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r85))) {
        CPy_TypeError("bool", cpy_r_r85); cpy_r_r86 = 2;
    } else
        cpy_r_r86 = cpy_r_r85 == Py_True;
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 44, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    if (!cpy_r_r86) goto CPyL31;
    cpy_r_r87 = CPyStatic_mypyc___build___globals;
    cpy_r_r88 = CPyStatics[84]; /* 'Union' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 50, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    cpy_r_r90 = CPyStatic_mypyc___build___globals;
    cpy_r_r91 = CPyStatics[6848]; /* '_setuptools_Extension' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 50, CPyStatic_mypyc___build___globals);
        goto CPyL45;
    }
    cpy_r_r93 = CPyStatic_mypyc___build___globals;
    cpy_r_r94 = CPyStatics[6849]; /* '_distutils_Extension' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 50, CPyStatic_mypyc___build___globals);
        goto CPyL46;
    }
    cpy_r_r96.f0 = cpy_r_r92;
    cpy_r_r96.f1 = cpy_r_r95;
    CPy_INCREF(cpy_r_r96.f0);
    CPy_INCREF(cpy_r_r96.f1);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = PyTuple_New(2);
    if (unlikely(cpy_r_r97 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9129 = cpy_r_r96.f0;
    PyTuple_SET_ITEM(cpy_r_r97, 0, __tmp9129);
    PyObject *__tmp9130 = cpy_r_r96.f1;
    PyTuple_SET_ITEM(cpy_r_r97, 1, __tmp9130);
    cpy_r_r98 = PyObject_GetItem(cpy_r_r89, cpy_r_r97);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 50, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    cpy_r_r99 = CPyStatic_mypyc___build___globals;
    cpy_r_r100 = CPyStatics[6785]; /* 'Extension' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 50, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
CPyL31: ;
    cpy_r_r103 = (PyObject **)&CPyModule_setuptools;
    PyObject **cpy_r_r104[1] = {cpy_r_r103};
    cpy_r_r105 = (void *)&cpy_r_r104;
    int64_t cpy_r_r106[1] = {54};
    cpy_r_r107 = (void *)&cpy_r_r106;
    cpy_r_r108 = CPyStatics[9931]; /* (('setuptools', 'setuptools', 'setuptools'),) */
    cpy_r_r109 = CPyStatic_mypyc___build___globals;
    cpy_r_r110 = CPyStatics[6835]; /* 'mypyc/build.py' */
    cpy_r_r111 = CPyStatics[17]; /* '<module>' */
    cpy_r_r112 = CPyImport_ImportMany(cpy_r_r108, cpy_r_r105, cpy_r_r109, cpy_r_r110, cpy_r_r111, cpy_r_r107);
    if (cpy_r_r112) goto CPyL39;
    cpy_r_r113 = CPy_CatchError();
    cpy_r_r114 = CPyModule_builtins;
    cpy_r_r115 = CPyStatics[1973]; /* 'ImportError' */
    cpy_r_r116 = CPyObject_GetAttr(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 55, CPyStatic_mypyc___build___globals);
        goto CPyL37;
    }
    cpy_r_r117 = CPy_ExceptionMatches(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (cpy_r_r117) goto CPyL36;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL47;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    CPy_RestoreExcInfo(cpy_r_r113);
    CPy_DECREF(cpy_r_r113.f0);
    CPy_DECREF(cpy_r_r113.f1);
    CPy_DECREF(cpy_r_r113.f2);
    goto CPyL39;
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r113);
    CPy_DECREF(cpy_r_r113.f0);
    CPy_DECREF(cpy_r_r113.f1);
    CPy_DECREF(cpy_r_r113.f2);
    cpy_r_r118 = CPy_KeepPropagating();
    if (!cpy_r_r118) goto CPyL44;
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r119 = CPyStatics[9932]; /* ('ccompiler', 'sysconfig') */
    cpy_r_r120 = CPyStatics[6784]; /* 'distutils' */
    cpy_r_r121 = CPyStatic_mypyc___build___globals;
    cpy_r_r122 = CPyImport_ImportFromMany(cpy_r_r120, cpy_r_r119, cpy_r_r119, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 57, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPyModule_distutils = cpy_r_r122;
    CPy_INCREF(CPyModule_distutils);
    CPy_DECREF(cpy_r_r122);
    goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/build.py", "<module>", 59, CPyStatic_mypyc___build___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL43: ;
    return 1;
CPyL44: ;
    cpy_r_r124 = 2;
    return cpy_r_r124;
CPyL45: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r92);
    goto CPyL44;
CPyL47: ;
    CPy_DECREF(cpy_r_r113.f0);
    CPy_DECREF(cpy_r_r113.f1);
    CPy_DECREF(cpy_r_r113.f2);
    goto CPyL35;
}
