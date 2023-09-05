#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef mypyc___commonmodule_methods[] = {
    {"shared_lib_name", (PyCFunction)CPyPy_mypyc___common___shared_lib_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"short_name", (PyCFunction)CPyPy_mypyc___common___short_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"use_fastcall", (PyCFunction)CPyPy_mypyc___common___use_fastcall, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"use_vectorcall", (PyCFunction)CPyPy_mypyc___common___use_vectorcall, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"use_method_vectorcall", (PyCFunction)CPyPy_mypyc___common___use_method_vectorcall, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_id_from_name", (PyCFunction)CPyPy_mypyc___common___get_id_from_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"short_id_from_name", (PyCFunction)CPyPy_mypyc___common___short_id_from_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"bitmap_name", (PyCFunction)CPyPy_mypyc___common___bitmap_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypyc___commonmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.common",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypyc___commonmodule_methods
};

PyObject *CPyInit_mypyc___common(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___common_internal) {
        Py_INCREF(CPyModule_mypyc___common_internal);
        return CPyModule_mypyc___common_internal;
    }
    CPyModule_mypyc___common_internal = PyModule_Create(&mypyc___commonmodule);
    if (unlikely(CPyModule_mypyc___common_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___common_internal, "__name__");
    CPyStatic_mypyc___common___globals = PyModule_GetDict(CPyModule_mypyc___common_internal);
    if (unlikely(CPyStatic_mypyc___common___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypyc___common_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___common_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___common_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG);
    CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG = NULL;
    CPyTagged_XDECREF(CPyStatic_mypyc___common___SIZEOF_SIZE_T);
    CPyStatic_mypyc___common___SIZEOF_SIZE_T = CPY_INT_TAG;
    CPyStatic_mypyc___common___IS_32_BIT_PLATFORM = 2;
    CPy_XDECREF(CPyStatic_mypyc___common___MAX_SHORT_INT);
    CPyStatic_mypyc___common___MAX_SHORT_INT = NULL;
    CPy_XDECREF(CPyStatic_mypyc___common___MIN_SHORT_INT);
    CPyStatic_mypyc___common___MIN_SHORT_INT = NULL;
    CPy_XDECREF(CPyStatic_mypyc___common___MAX_LITERAL_SHORT_INT);
    CPyStatic_mypyc___common___MAX_LITERAL_SHORT_INT = NULL;
    CPy_XDECREF(CPyStatic_mypyc___common___MIN_LITERAL_SHORT_INT);
    CPyStatic_mypyc___common___MIN_LITERAL_SHORT_INT = NULL;
    CPy_XDECREF(CPyStatic_mypyc___common___RUNTIME_C_FILES);
    CPyStatic_mypyc___common___RUNTIME_C_FILES = NULL;
    return NULL;
}

PyObject *CPyDef_mypyc___common___shared_lib_name(PyObject *cpy_r_group_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyStatics[7703]; /* '__mypyc' */
    cpy_r_r1 = CPyStr_Build(2, cpy_r_group_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "shared_lib_name", 92, CPyStatic_mypyc___common___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypyc___common___shared_lib_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"group_name", 0};
    static CPyArg_Parser parser = {"O:shared_lib_name", kwlist, 0};
    PyObject *obj_group_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_group_name)) {
        return NULL;
    }
    PyObject *arg_group_name;
    if (likely(PyUnicode_Check(obj_group_name)))
        arg_group_name = obj_group_name;
    else {
        CPy_TypeError("str", obj_group_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___common___shared_lib_name(arg_group_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "shared_lib_name", 87, CPyStatic_mypyc___common___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___common___short_name(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[1360]; /* 'builtins.' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_name, cpy_r_r0);
    if (!cpy_r_r1) goto CPyL4;
    cpy_r_r2 = CPyStr_GetSlice(cpy_r_name, 18, 9223372036854775806LL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "short_name", 97, CPyStatic_mypyc___common___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/common.py", "short_name", 97, CPyStatic_mypyc___common___globals, "str", cpy_r_r2);
        goto CPyL5;
    }
    return cpy_r_r3;
CPyL4: ;
    CPy_INCREF(cpy_r_name);
    return cpy_r_name;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_mypyc___common___short_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:short_name", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___common___short_name(arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "short_name", 95, CPyStatic_mypyc___common___globals);
    return NULL;
}

char CPyDef_mypyc___common___use_fastcall(tuple_T2II cpy_r_capi_version) {
    tuple_T2II cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0.f0 = 6;
    cpy_r_r0.f1 = 14;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    CPyTagged_INCREF(cpy_r_capi_version.f0);
    CPyTagged_INCREF(cpy_r_capi_version.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9726 = CPyTagged_StealAsObject(cpy_r_capi_version.f0);
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp9726);
    PyObject *__tmp9727 = CPyTagged_StealAsObject(cpy_r_capi_version.f1);
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp9727);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9728 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp9728);
    PyObject *__tmp9729 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp9729);
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "use_fastcall", 103, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/common.py", "use_fastcall", 103, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_mypyc___common___use_fastcall(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"capi_version", 0};
    static CPyArg_Parser parser = {"O:use_fastcall", kwlist, 0};
    PyObject *obj_capi_version;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_capi_version)) {
        return NULL;
    }
    tuple_T2II arg_capi_version;
    PyObject *__tmp9730;
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        __tmp9730 = NULL;
        goto __LL9731;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        __tmp9730 = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        __tmp9730 = NULL;
    }
    if (__tmp9730 == NULL) goto __LL9731;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        __tmp9730 = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        __tmp9730 = NULL;
    }
    if (__tmp9730 == NULL) goto __LL9731;
    __tmp9730 = obj_capi_version;
__LL9731: ;
    if (unlikely(__tmp9730 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_capi_version); goto fail;
    } else {
        PyObject *__tmp9732 = PyTuple_GET_ITEM(obj_capi_version, 0);
        CPyTagged __tmp9733;
        if (likely(PyLong_Check(__tmp9732)))
            __tmp9733 = CPyTagged_BorrowFromObject(__tmp9732);
        else {
            CPy_TypeError("int", __tmp9732); goto fail;
        }
        arg_capi_version.f0 = __tmp9733;
        PyObject *__tmp9734 = PyTuple_GET_ITEM(obj_capi_version, 1);
        CPyTagged __tmp9735;
        if (likely(PyLong_Check(__tmp9734)))
            __tmp9735 = CPyTagged_BorrowFromObject(__tmp9734);
        else {
            CPy_TypeError("int", __tmp9734); goto fail;
        }
        arg_capi_version.f1 = __tmp9735;
    }
    char retval = CPyDef_mypyc___common___use_fastcall(arg_capi_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "use_fastcall", 101, CPyStatic_mypyc___common___globals);
    return NULL;
}

char CPyDef_mypyc___common___use_vectorcall(tuple_T2II cpy_r_capi_version) {
    tuple_T2II cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0.f0 = 6;
    cpy_r_r0.f1 = 16;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    CPyTagged_INCREF(cpy_r_capi_version.f0);
    CPyTagged_INCREF(cpy_r_capi_version.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9736 = CPyTagged_StealAsObject(cpy_r_capi_version.f0);
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp9736);
    PyObject *__tmp9737 = CPyTagged_StealAsObject(cpy_r_capi_version.f1);
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp9737);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9738 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp9738);
    PyObject *__tmp9739 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp9739);
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "use_vectorcall", 108, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/common.py", "use_vectorcall", 108, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_mypyc___common___use_vectorcall(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"capi_version", 0};
    static CPyArg_Parser parser = {"O:use_vectorcall", kwlist, 0};
    PyObject *obj_capi_version;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_capi_version)) {
        return NULL;
    }
    tuple_T2II arg_capi_version;
    PyObject *__tmp9740;
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        __tmp9740 = NULL;
        goto __LL9741;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        __tmp9740 = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        __tmp9740 = NULL;
    }
    if (__tmp9740 == NULL) goto __LL9741;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        __tmp9740 = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        __tmp9740 = NULL;
    }
    if (__tmp9740 == NULL) goto __LL9741;
    __tmp9740 = obj_capi_version;
__LL9741: ;
    if (unlikely(__tmp9740 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_capi_version); goto fail;
    } else {
        PyObject *__tmp9742 = PyTuple_GET_ITEM(obj_capi_version, 0);
        CPyTagged __tmp9743;
        if (likely(PyLong_Check(__tmp9742)))
            __tmp9743 = CPyTagged_BorrowFromObject(__tmp9742);
        else {
            CPy_TypeError("int", __tmp9742); goto fail;
        }
        arg_capi_version.f0 = __tmp9743;
        PyObject *__tmp9744 = PyTuple_GET_ITEM(obj_capi_version, 1);
        CPyTagged __tmp9745;
        if (likely(PyLong_Check(__tmp9744)))
            __tmp9745 = CPyTagged_BorrowFromObject(__tmp9744);
        else {
            CPy_TypeError("int", __tmp9744); goto fail;
        }
        arg_capi_version.f1 = __tmp9745;
    }
    char retval = CPyDef_mypyc___common___use_vectorcall(arg_capi_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "use_vectorcall", 106, CPyStatic_mypyc___common___globals);
    return NULL;
}

char CPyDef_mypyc___common___use_method_vectorcall(tuple_T2II cpy_r_capi_version) {
    tuple_T2II cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0.f0 = 6;
    cpy_r_r0.f1 = 18;
    CPyTagged_INCREF(cpy_r_r0.f0);
    CPyTagged_INCREF(cpy_r_r0.f1);
    CPyTagged_INCREF(cpy_r_capi_version.f0);
    CPyTagged_INCREF(cpy_r_capi_version.f1);
    cpy_r_r1 = PyTuple_New(2);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9746 = CPyTagged_StealAsObject(cpy_r_capi_version.f0);
    PyTuple_SET_ITEM(cpy_r_r1, 0, __tmp9746);
    PyObject *__tmp9747 = CPyTagged_StealAsObject(cpy_r_capi_version.f1);
    PyTuple_SET_ITEM(cpy_r_r1, 1, __tmp9747);
    cpy_r_r2 = PyTuple_New(2);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9748 = CPyTagged_StealAsObject(cpy_r_r0.f0);
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp9748);
    PyObject *__tmp9749 = CPyTagged_StealAsObject(cpy_r_r0.f1);
    PyTuple_SET_ITEM(cpy_r_r2, 1, __tmp9749);
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 5);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "use_method_vectorcall", 113, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/common.py", "use_method_vectorcall", 113, CPyStatic_mypyc___common___globals);
        goto CPyL3;
    }
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_mypyc___common___use_method_vectorcall(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"capi_version", 0};
    static CPyArg_Parser parser = {"O:use_method_vectorcall", kwlist, 0};
    PyObject *obj_capi_version;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_capi_version)) {
        return NULL;
    }
    tuple_T2II arg_capi_version;
    PyObject *__tmp9750;
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        __tmp9750 = NULL;
        goto __LL9751;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        __tmp9750 = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        __tmp9750 = NULL;
    }
    if (__tmp9750 == NULL) goto __LL9751;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        __tmp9750 = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        __tmp9750 = NULL;
    }
    if (__tmp9750 == NULL) goto __LL9751;
    __tmp9750 = obj_capi_version;
__LL9751: ;
    if (unlikely(__tmp9750 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_capi_version); goto fail;
    } else {
        PyObject *__tmp9752 = PyTuple_GET_ITEM(obj_capi_version, 0);
        CPyTagged __tmp9753;
        if (likely(PyLong_Check(__tmp9752)))
            __tmp9753 = CPyTagged_BorrowFromObject(__tmp9752);
        else {
            CPy_TypeError("int", __tmp9752); goto fail;
        }
        arg_capi_version.f0 = __tmp9753;
        PyObject *__tmp9754 = PyTuple_GET_ITEM(obj_capi_version, 1);
        CPyTagged __tmp9755;
        if (likely(PyLong_Check(__tmp9754)))
            __tmp9755 = CPyTagged_BorrowFromObject(__tmp9754);
        else {
            CPy_TypeError("int", __tmp9754); goto fail;
        }
        arg_capi_version.f1 = __tmp9755;
    }
    char retval = CPyDef_mypyc___common___use_method_vectorcall(arg_capi_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "use_method_vectorcall", 111, CPyStatic_mypyc___common___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___common___get_id_from_name(PyObject *cpy_r_name, PyObject *cpy_r_fullname, CPyTagged cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_mypy___util___unnamed_function(cpy_r_name);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/common.py", "get_id_from_name", 123, CPyStatic_mypyc___common___globals);
        goto CPyL6;
    }
    if (!cpy_r_r0) goto CPyL5;
    cpy_r_r1 = CPyStatics[224]; /* '.' */
    cpy_r_r2 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "get_id_from_name", 124, CPyStatic_mypyc___common___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStr_Build(3, cpy_r_fullname, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "get_id_from_name", 124, CPyStatic_mypyc___common___globals);
        goto CPyL6;
    }
    return cpy_r_r3;
CPyL5: ;
    CPy_INCREF(cpy_r_fullname);
    return cpy_r_fullname;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_mypyc___common___get_id_from_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "fullname", "line", 0};
    static CPyArg_Parser parser = {"OOO:get_id_from_name", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_fullname;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_fullname, &obj_line)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_mypyc___common___get_id_from_name(arg_name, arg_fullname, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "get_id_from_name", 116, CPyStatic_mypyc___common___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___common___short_id_from_name(PyObject *cpy_r_func_name, PyObject *cpy_r_shortname, PyObject *cpy_r_line) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_partial_name;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_mypy___util___unnamed_function(cpy_r_func_name);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 130, CPyStatic_mypyc___common___globals);
        goto CPyL11;
    }
    if (!cpy_r_r0) goto CPyL9;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_line != cpy_r_r1;
    if (cpy_r_r2) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 131, CPyStatic_mypyc___common___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = CPyStatics[224]; /* '.' */
    if (likely(PyLong_Check(cpy_r_line)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_line);
    else {
        CPy_TypeError("int", cpy_r_line); cpy_r_r5 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 132, CPyStatic_mypyc___common___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyTagged_Str(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 132, CPyStatic_mypyc___common___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPyStr_Build(3, cpy_r_shortname, cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 132, CPyStatic_mypyc___common___globals);
        goto CPyL11;
    }
    cpy_r_partial_name = cpy_r_r7;
    goto CPyL10;
CPyL9: ;
    CPy_INCREF(cpy_r_shortname);
    cpy_r_partial_name = cpy_r_shortname;
CPyL10: ;
    return cpy_r_partial_name;
CPyL11: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_mypyc___common___short_id_from_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func_name", "shortname", "line", 0};
    static CPyArg_Parser parser = {"OOO:short_id_from_name", kwlist, 0};
    PyObject *obj_func_name;
    PyObject *obj_shortname;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func_name, &obj_shortname, &obj_line)) {
        return NULL;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_shortname;
    if (likely(PyUnicode_Check(obj_shortname)))
        arg_shortname = obj_shortname;
    else {
        CPy_TypeError("str", obj_shortname); 
        goto fail;
    }
    PyObject *arg_line;
    if (PyLong_Check(obj_line))
        arg_line = obj_line;
    else {
        arg_line = NULL;
    }
    if (arg_line != NULL) goto __LL9756;
    if (obj_line == Py_None)
        arg_line = obj_line;
    else {
        arg_line = NULL;
    }
    if (arg_line != NULL) goto __LL9756;
    CPy_TypeError("int or None", obj_line); 
    goto fail;
__LL9756: ;
    PyObject *retval = CPyDef_mypyc___common___short_id_from_name(arg_func_name, arg_shortname, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "short_id_from_name", 129, CPyStatic_mypyc___common___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___common___bitmap_name(CPyTagged cpy_r_index) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = cpy_r_index == 0;
    if (!cpy_r_r0) goto CPyL2;
    cpy_r_r1 = CPyStatics[7704]; /* '__bitmap' */
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPyStatics[7704]; /* '__bitmap' */
    cpy_r_r3 = CPyTagged_Add(cpy_r_index, 2);
    cpy_r_r4 = CPyTagged_Str(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "bitmap_name", 141, CPyStatic_mypyc___common___globals);
        goto CPyL5;
    }
    cpy_r_r5 = CPyStr_Build(2, cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "bitmap_name", 141, CPyStatic_mypyc___common___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_mypyc___common___bitmap_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"index", 0};
    static CPyArg_Parser parser = {"O:bitmap_name", kwlist, 0};
    PyObject *obj_index;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_index)) {
        return NULL;
    }
    CPyTagged arg_index;
    if (likely(PyLong_Check(obj_index)))
        arg_index = CPyTagged_BorrowFromObject(obj_index);
    else {
        CPy_TypeError("int", obj_index); goto fail;
    }
    PyObject *retval = CPyDef_mypyc___common___bitmap_name(arg_index);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/common.py", "bitmap_name", 138, CPyStatic_mypyc___common___globals);
    return NULL;
}

char CPyDef_mypyc___common_____top_level__(void) {
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
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
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
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject **cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject **cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    CPyTagged cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    CPyTagged cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject **cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    CPyTagged cpy_r_r148;
    char cpy_r_r149;
    int64_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    CPyTagged cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    CPyTagged cpy_r_r168;
    char cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyTagged cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    int32_t cpy_r_r208;
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
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    int32_t cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    tuple_T2OO cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    char cpy_r_r248;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", -1, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypyc___common___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 1, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_sys;
    cpy_r_r10 = (PyObject **)&CPyModule_sysconfig;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {3, 4};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9999]; /* (('sys', 'sys', 'sys'),
                                     ('sysconfig', 'sysconfig', 'sysconfig')) */
    cpy_r_r16 = CPyStatic_mypyc___common___globals;
    cpy_r_r17 = CPyStatics[7705]; /* 'mypyc/common.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL88;
    cpy_r_r20 = CPyStatics[10000]; /* ('Any', 'Dict', 'Final') */
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = CPyStatic_mypyc___common___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 5, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyModule_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[10001]; /* ('unnamed_function',) */
    cpy_r_r25 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r26 = CPyStatic_mypyc___common___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 7, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyModule_mypy___util = cpy_r_r27;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r29 = CPyStatic_mypyc___common___globals;
    cpy_r_r30 = CPyStatics[7270]; /* 'PREFIX' */
    cpy_r_r31 = CPyDict_SetItem(cpy_r_r29, cpy_r_r30, cpy_r_r28);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 9, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r33 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r34 = CPyStatic_mypyc___common___globals;
    cpy_r_r35 = CPyStatics[7016]; /* 'NATIVE_PREFIX' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 10, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r38 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r39 = CPyStatic_mypyc___common___globals;
    cpy_r_r40 = CPyStatics[7674]; /* 'DUNDER_PREFIX' */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r38);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 11, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r43 = CPyStatics[6862]; /* 'cpy_r_' */
    cpy_r_r44 = CPyStatic_mypyc___common___globals;
    cpy_r_r45 = CPyStatics[7017]; /* 'REG_PREFIX' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r43);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 12, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r48 = CPyStatics[6877]; /* 'CPyStatic_' */
    cpy_r_r49 = CPyStatic_mypyc___common___globals;
    cpy_r_r50 = CPyStatics[7018]; /* 'STATIC_PREFIX' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r49, cpy_r_r50, cpy_r_r48);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 13, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r53 = CPyStatics[6878]; /* 'CPyType_' */
    cpy_r_r54 = CPyStatic_mypyc___common___globals;
    cpy_r_r55 = CPyStatics[7019]; /* 'TYPE_PREFIX' */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 14, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r58 = CPyStatics[7397]; /* 'CPyModule_' */
    cpy_r_r59 = CPyStatic_mypyc___common___globals;
    cpy_r_r60 = CPyStatics[7401]; /* 'MODULE_PREFIX' */
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r59, cpy_r_r60, cpy_r_r58);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 15, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r63 = CPyStatics[755]; /* '_' */
    cpy_r_r64 = CPyStatic_mypyc___common___globals;
    cpy_r_r65 = CPyStatics[7013]; /* 'ATTR_PREFIX' */
    cpy_r_r66 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 16, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r68 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r69 = CPyStatic_mypyc___common___globals;
    cpy_r_r70 = CPyStatics[7707]; /* 'ENV_ATTR_NAME' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r68);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 18, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r73 = CPyStatics[7708]; /* '__mypyc_next_label__' */
    cpy_r_r74 = CPyStatic_mypyc___common___globals;
    cpy_r_r75 = CPyStatics[7709]; /* 'NEXT_LABEL_ATTR_NAME' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r73);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 19, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r78 = CPyStatics[7710]; /* '__mypyc_temp__' */
    cpy_r_r79 = CPyStatic_mypyc___common___globals;
    cpy_r_r80 = CPyStatics[7711]; /* 'TEMP_ATTR_NAME' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r79, cpy_r_r80, cpy_r_r78);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 20, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r83 = CPyStatics[7712]; /* '__mypyc_lambda__' */
    cpy_r_r84 = CPyStatic_mypyc___common___globals;
    cpy_r_r85 = CPyStatics[7713]; /* 'LAMBDA_NAME' */
    cpy_r_r86 = CPyDict_SetItem(cpy_r_r84, cpy_r_r85, cpy_r_r83);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 21, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r88 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r89 = CPyStatic_mypyc___common___globals;
    cpy_r_r90 = CPyStatics[7715]; /* 'PROPSET_PREFIX' */
    cpy_r_r91 = CPyDict_SetItem(cpy_r_r89, cpy_r_r90, cpy_r_r88);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 22, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r93 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r94 = CPyStatic_mypyc___common___globals;
    cpy_r_r95 = CPyStatics[7717]; /* 'SELF_NAME' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r94, cpy_r_r95, cpy_r_r93);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 23, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r98 = CPyStatics[7424]; /* '__top_level__' */
    cpy_r_r99 = CPyStatic_mypyc___common___globals;
    cpy_r_r100 = CPyStatics[7552]; /* 'TOP_LEVEL_NAME' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 28, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r103 = CPyStatic_mypyc___common___globals;
    cpy_r_r104 = CPyStatics[7015]; /* 'FAST_ISINSTANCE_MAX_SUBCLASSES' */
    cpy_r_r105 = CPyStatics[9018]; /* 2 */
    cpy_r_r106 = CPyDict_SetItem(cpy_r_r103, cpy_r_r104, cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 31, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r108 = CPyStatics[7718]; /* 'SIZEOF_SIZE_T' */
    cpy_r_r109 = CPyModule_sysconfig;
    cpy_r_r110 = CPyStatics[4223]; /* 'get_config_var' */
    cpy_r_r111 = CPyObject_GetAttr(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 34, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    PyObject *cpy_r_r112[1] = {cpy_r_r108};
    cpy_r_r113 = (PyObject **)&cpy_r_r112;
    cpy_r_r114 = _PyObject_Vectorcall(cpy_r_r111, cpy_r_r113, 1, 0);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 34, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG = cpy_r_r114;
    CPy_INCREF(CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG);
    cpy_r_r115 = CPyStatic_mypyc___common___globals;
    cpy_r_r116 = CPyStatics[7719]; /* 'SIZEOF_SIZE_T_SYSCONFIG' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 34, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r119 = CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG;
    if (likely(cpy_r_r119 != NULL)) goto CPyL29;
    PyErr_SetString(PyExc_NameError, "value for final name \"SIZEOF_SIZE_T_SYSCONFIG\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 38, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r121 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r122 = cpy_r_r119 != cpy_r_r121;
    if (!cpy_r_r122) goto CPyL36;
    cpy_r_r123 = CPyStatic_mypyc___common___SIZEOF_SIZE_T_SYSCONFIG;
    if (likely(cpy_r_r123 != NULL)) goto CPyL33;
    PyErr_SetString(PyExc_NameError, "value for final name \"SIZEOF_SIZE_T_SYSCONFIG\" was not set");
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 37, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r125 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r126[1] = {cpy_r_r123};
    cpy_r_r127 = (PyObject **)&cpy_r_r126;
    cpy_r_r128 = _PyObject_Vectorcall(cpy_r_r125, cpy_r_r127, 1, 0);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 37, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    if (likely(PyLong_Check(cpy_r_r128)))
        cpy_r_r129 = CPyTagged_FromObject(cpy_r_r128);
    else {
        CPy_TypeError("int", cpy_r_r128); cpy_r_r129 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 37, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r130 = cpy_r_r129;
    goto CPyL42;
CPyL36: ;
    cpy_r_r131 = CPyModule_sys;
    cpy_r_r132 = CPyStatics[3895]; /* 'maxsize' */
    cpy_r_r133 = CPyObject_GetAttr(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 39, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    if (likely(PyLong_Check(cpy_r_r133)))
        cpy_r_r134 = CPyTagged_FromObject(cpy_r_r133);
    else {
        CPy_TypeError("int", cpy_r_r133); cpy_r_r134 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 39, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r135 = CPyTagged_Add(cpy_r_r134, 2);
    CPyTagged_DECREF(cpy_r_r134);
    cpy_r_r136 = CPyStatics[7720]; /* 'bit_length' */
    cpy_r_r137 = CPyTagged_StealAsObject(cpy_r_r135);
    PyObject *cpy_r_r138[1] = {cpy_r_r137};
    cpy_r_r139 = (PyObject **)&cpy_r_r138;
    cpy_r_r140 = PyObject_VectorcallMethod(cpy_r_r136, cpy_r_r139, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 39, CPyStatic_mypyc___common___globals);
        goto CPyL89;
    }
    CPy_DECREF(cpy_r_r137);
    if (likely(PyLong_Check(cpy_r_r140)))
        cpy_r_r141 = CPyTagged_FromObject(cpy_r_r140);
    else {
        CPy_TypeError("int", cpy_r_r140); cpy_r_r141 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r141 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 39, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r142 = CPyTagged_Rshift(cpy_r_r141, 6);
    CPyTagged_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", -1, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r130 = cpy_r_r142;
CPyL42: ;
    CPyStatic_mypyc___common___SIZEOF_SIZE_T = cpy_r_r130;
    CPyTagged_INCREF(CPyStatic_mypyc___common___SIZEOF_SIZE_T);
    cpy_r_r143 = CPyStatic_mypyc___common___globals;
    cpy_r_r144 = CPyStatics[7718]; /* 'SIZEOF_SIZE_T' */
    cpy_r_r145 = CPyTagged_StealAsObject(cpy_r_r130);
    cpy_r_r146 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 37, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r148 = CPyStatic_mypyc___common___SIZEOF_SIZE_T;
    if (likely(cpy_r_r148 != CPY_INT_TAG)) goto CPyL46;
    PyErr_SetString(PyExc_NameError, "value for final name \"SIZEOF_SIZE_T\" was not set");
    cpy_r_r149 = 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 42, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r150 = cpy_r_r148 & 1;
    cpy_r_r151 = cpy_r_r150 == 0;
    if (!cpy_r_r151) goto CPyL48;
    cpy_r_r152 = cpy_r_r148 == 8;
    cpy_r_r153 = cpy_r_r152;
    goto CPyL49;
CPyL48: ;
    cpy_r_r154 = CPyTagged_IsEq_(cpy_r_r148, 8);
    cpy_r_r153 = cpy_r_r154;
CPyL49: ;
    CPyStatic_mypyc___common___IS_32_BIT_PLATFORM = cpy_r_r153;
    cpy_r_r155 = CPyStatic_mypyc___common___globals;
    cpy_r_r156 = CPyStatics[7721]; /* 'IS_32_BIT_PLATFORM' */
    cpy_r_r157 = cpy_r_r153 ? Py_True : Py_False;
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r155, cpy_r_r156, cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 42, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r160 = CPyStatic_mypyc___common___IS_32_BIT_PLATFORM;
    if (likely(cpy_r_r160 != 2)) goto CPyL53;
    PyErr_SetString(PyExc_NameError, "value for final name \"IS_32_BIT_PLATFORM\" was not set");
    cpy_r_r161 = 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 44, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL53: ;
    if (!cpy_r_r160) goto CPyL55;
    cpy_r_r162 = 8;
    goto CPyL56;
CPyL55: ;
    cpy_r_r162 = 16;
CPyL56: ;
    cpy_r_r163 = CPyStatic_mypyc___common___globals;
    cpy_r_r164 = CPyStatics[7722]; /* 'PLATFORM_SIZE' */
    cpy_r_r165 = CPyTagged_StealAsObject(cpy_r_r162);
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r163, cpy_r_r164, cpy_r_r165);
    CPy_DECREF(cpy_r_r165);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 44, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r168 = CPyStatic_mypyc___common___SIZEOF_SIZE_T;
    if (likely(cpy_r_r168 != CPY_INT_TAG)) goto CPyL60;
    PyErr_SetString(PyExc_NameError, "value for final name \"SIZEOF_SIZE_T\" was not set");
    cpy_r_r169 = 0;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 47, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r170 = CPyTagged_Multiply(16, cpy_r_r168);
    cpy_r_r171 = CPyTagged_Subtract(cpy_r_r170, 4);
    CPyTagged_DECREF(cpy_r_r170);
    cpy_r_r172 = CPyStatics[9018]; /* 2 */
    cpy_r_r173 = CPyTagged_StealAsObject(cpy_r_r171);
    cpy_r_r174 = CPyNumber_Power(cpy_r_r172, cpy_r_r173);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 47, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r175 = CPyStatics[9016]; /* 1 */
    cpy_r_r176 = PyNumber_Subtract(cpy_r_r174, cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 47, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyStatic_mypyc___common___MAX_SHORT_INT = cpy_r_r176;
    CPy_INCREF(CPyStatic_mypyc___common___MAX_SHORT_INT);
    cpy_r_r177 = CPyStatic_mypyc___common___globals;
    cpy_r_r178 = CPyStatics[7723]; /* 'MAX_SHORT_INT' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r177, cpy_r_r178, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 47, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r181 = CPyStatic_mypyc___common___MAX_SHORT_INT;
    if (likely(cpy_r_r181 != NULL)) goto CPyL66;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAX_SHORT_INT\" was not set");
    cpy_r_r182 = 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 50, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL66: ;
    cpy_r_r183 = PyNumber_Negative(cpy_r_r181);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 50, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r184 = CPyStatics[9016]; /* 1 */
    cpy_r_r185 = PyNumber_Subtract(cpy_r_r183, cpy_r_r184);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 50, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyStatic_mypyc___common___MIN_SHORT_INT = cpy_r_r185;
    CPy_INCREF(CPyStatic_mypyc___common___MIN_SHORT_INT);
    cpy_r_r186 = CPyStatic_mypyc___common___globals;
    cpy_r_r187 = CPyStatics[7724]; /* 'MIN_SHORT_INT' */
    cpy_r_r188 = CPyDict_SetItem(cpy_r_r186, cpy_r_r187, cpy_r_r185);
    CPy_DECREF(cpy_r_r185);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 50, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r190 = CPyStatic_mypyc___common___MAX_SHORT_INT;
    if (likely(cpy_r_r190 != NULL)) goto CPyL72;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAX_SHORT_INT\" was not set");
    cpy_r_r191 = 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 55, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL72: ;
    CPyStatic_mypyc___common___MAX_LITERAL_SHORT_INT = cpy_r_r190;
    CPy_INCREF(CPyStatic_mypyc___common___MAX_LITERAL_SHORT_INT);
    cpy_r_r192 = CPyStatic_mypyc___common___globals;
    cpy_r_r193 = CPyStatics[7725]; /* 'MAX_LITERAL_SHORT_INT' */
    cpy_r_r194 = CPyDict_SetItem(cpy_r_r192, cpy_r_r193, cpy_r_r190);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 55, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r196 = CPyStatic_mypyc___common___MAX_LITERAL_SHORT_INT;
    if (likely(cpy_r_r196 != NULL)) goto CPyL76;
    PyErr_SetString(PyExc_NameError, "value for final name \"MAX_LITERAL_SHORT_INT\" was not set");
    cpy_r_r197 = 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 56, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r198 = PyNumber_Negative(cpy_r_r196);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 56, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r199 = CPyStatics[9016]; /* 1 */
    cpy_r_r200 = PyNumber_Subtract(cpy_r_r198, cpy_r_r199);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 56, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyStatic_mypyc___common___MIN_LITERAL_SHORT_INT = cpy_r_r200;
    CPy_INCREF(CPyStatic_mypyc___common___MIN_LITERAL_SHORT_INT);
    cpy_r_r201 = CPyStatic_mypyc___common___globals;
    cpy_r_r202 = CPyStatics[7726]; /* 'MIN_LITERAL_SHORT_INT' */
    cpy_r_r203 = CPyDict_SetItem(cpy_r_r201, cpy_r_r202, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 56, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r205 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r206 = CPyStatic_mypyc___common___globals;
    cpy_r_r207 = CPyStatics[7269]; /* 'BITMAP_TYPE' */
    cpy_r_r208 = CPyDict_SetItem(cpy_r_r206, cpy_r_r207, cpy_r_r205);
    cpy_r_r209 = cpy_r_r208 >= 0;
    if (unlikely(!cpy_r_r209)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 62, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r210 = CPyStatic_mypyc___common___globals;
    cpy_r_r211 = CPyStatics[7014]; /* 'BITMAP_BITS' */
    cpy_r_r212 = CPyStatics[9043]; /* 32 */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_r210, cpy_r_r211, cpy_r_r212);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 63, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r215 = CPyStatics[7727]; /* 'init.c' */
    cpy_r_r216 = CPyStatics[7728]; /* 'getargs.c' */
    cpy_r_r217 = CPyStatics[7729]; /* 'getargsfast.c' */
    cpy_r_r218 = CPyStatics[7730]; /* 'int_ops.c' */
    cpy_r_r219 = CPyStatics[7731]; /* 'float_ops.c' */
    cpy_r_r220 = CPyStatics[7732]; /* 'str_ops.c' */
    cpy_r_r221 = CPyStatics[7733]; /* 'bytes_ops.c' */
    cpy_r_r222 = CPyStatics[7734]; /* 'list_ops.c' */
    cpy_r_r223 = CPyStatics[7735]; /* 'dict_ops.c' */
    cpy_r_r224 = CPyStatics[7736]; /* 'set_ops.c' */
    cpy_r_r225 = CPyStatics[7737]; /* 'tuple_ops.c' */
    cpy_r_r226 = CPyStatics[7738]; /* 'exc_ops.c' */
    cpy_r_r227 = CPyStatics[7739]; /* 'misc_ops.c' */
    cpy_r_r228 = CPyStatics[7740]; /* 'generic_ops.c' */
    CPy_INCREF(cpy_r_r215);
    CPy_INCREF(cpy_r_r216);
    CPy_INCREF(cpy_r_r217);
    CPy_INCREF(cpy_r_r218);
    CPy_INCREF(cpy_r_r219);
    CPy_INCREF(cpy_r_r220);
    CPy_INCREF(cpy_r_r221);
    CPy_INCREF(cpy_r_r222);
    CPy_INCREF(cpy_r_r223);
    CPy_INCREF(cpy_r_r224);
    CPy_INCREF(cpy_r_r225);
    CPy_INCREF(cpy_r_r226);
    CPy_INCREF(cpy_r_r227);
    CPy_INCREF(cpy_r_r228);
    cpy_r_r229 = CPyList_Build(14, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 66, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    CPyStatic_mypyc___common___RUNTIME_C_FILES = cpy_r_r229;
    CPy_INCREF(CPyStatic_mypyc___common___RUNTIME_C_FILES);
    cpy_r_r230 = CPyStatic_mypyc___common___globals;
    cpy_r_r231 = CPyStatics[6839]; /* 'RUNTIME_C_FILES' */
    cpy_r_r232 = CPyDict_SetItem(cpy_r_r230, cpy_r_r231, cpy_r_r229);
    CPy_DECREF(cpy_r_r229);
    cpy_r_r233 = cpy_r_r232 >= 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 66, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r234 = CPyStatic_mypyc___common___globals;
    cpy_r_r235 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r236 = CPyDict_GetItem(cpy_r_r234, cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 84, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r237 = (PyObject *)&PyUnicode_Type;
    cpy_r_r238 = CPyStatic_mypyc___common___globals;
    cpy_r_r239 = CPyStatics[507]; /* 'Any' */
    cpy_r_r240 = CPyDict_GetItem(cpy_r_r238, cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 84, CPyStatic_mypyc___common___globals);
        goto CPyL90;
    }
    cpy_r_r241.f0 = cpy_r_r237;
    cpy_r_r241.f1 = cpy_r_r240;
    CPy_INCREF(cpy_r_r241.f0);
    CPy_INCREF(cpy_r_r241.f1);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r242 = PyTuple_New(2);
    if (unlikely(cpy_r_r242 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9757 = cpy_r_r241.f0;
    PyTuple_SET_ITEM(cpy_r_r242, 0, __tmp9757);
    PyObject *__tmp9758 = cpy_r_r241.f1;
    PyTuple_SET_ITEM(cpy_r_r242, 1, __tmp9758);
    cpy_r_r243 = PyObject_GetItem(cpy_r_r236, cpy_r_r242);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 84, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    cpy_r_r244 = CPyStatic_mypyc___common___globals;
    cpy_r_r245 = CPyStatics[4051]; /* 'JsonDict' */
    cpy_r_r246 = CPyDict_SetItem(cpy_r_r244, cpy_r_r245, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("mypyc/common.py", "<module>", 84, CPyStatic_mypyc___common___globals);
        goto CPyL88;
    }
    return 1;
CPyL88: ;
    cpy_r_r248 = 2;
    return cpy_r_r248;
CPyL89: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL88;
CPyL90: ;
    CPy_DecRef(cpy_r_r236);
    goto CPyL88;
}
