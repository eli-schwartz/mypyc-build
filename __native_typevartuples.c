#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef typevartuplesmodule_methods[] = {
    {"find_unpack_in_list", (PyCFunction)CPyPy_typevartuples___find_unpack_in_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_with_instance", (PyCFunction)CPyPy_typevartuples___split_with_instance, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_with_mapped_and_template", (PyCFunction)CPyPy_typevartuples___split_with_mapped_and_template, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fully_split_with_mapped_and_template", (PyCFunction)CPyPy_typevartuples___fully_split_with_mapped_and_template, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"extract_unpack", (PyCFunction)CPyPy_typevartuples___extract_unpack, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_starargs", (PyCFunction)CPyPy_typevartuples___replace_starargs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typevartuplesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.typevartuples",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typevartuplesmodule_methods
};

PyObject *CPyInit_mypy___typevartuples(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___typevartuples_internal) {
        Py_INCREF(CPyModule_mypy___typevartuples_internal);
        return CPyModule_mypy___typevartuples_internal;
    }
    CPyModule_mypy___typevartuples_internal = PyModule_Create(&typevartuplesmodule);
    if (unlikely(CPyModule_mypy___typevartuples_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___typevartuples_internal, "__name__");
    CPyStatic_typevartuples___globals = PyModule_GetDict(CPyModule_mypy___typevartuples_internal);
    if (unlikely(CPyStatic_typevartuples___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_typevartuples_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___typevartuples_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___typevartuples_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_typevartuples___find_unpack_in_list(PyObject *cpy_r_items) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_unpack_index;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_old_index;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_unpack_index = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_i = 0;
    cpy_r_r2 = PyObject_GetIter(cpy_r_items);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "find_unpack_in_list", 21, CPyStatic_typevartuples___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL13;
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "find_unpack_in_list", 21, CPyStatic_typevartuples___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL14;
    }
    cpy_r_item = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    CPy_DECREF(cpy_r_item);
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL15;
    cpy_r_old_index = cpy_r_unpack_index;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_old_index == cpy_r_r9;
    CPy_DECREF(cpy_r_old_index);
    if (cpy_r_r10) {
        goto CPyL7;
    } else
        goto CPyL16;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/typevartuples.py", "find_unpack_in_list", 27, CPyStatic_typevartuples___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_unpack_index = cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r13;
    cpy_r_i = cpy_r_r13;
    goto CPyL1;
CPyL9: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/typevartuples.py", "find_unpack_in_list", 21, CPyStatic_typevartuples___globals);
        goto CPyL17;
    }
    return cpy_r_unpack_index;
CPyL11: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL12: ;
    CPy_DecRef(cpy_r_unpack_index);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL11;
CPyL13: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r2);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_unpack_index);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL15: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL8;
CPyL16: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r2);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_unpack_index);
    goto CPyL11;
}

PyObject *CPyPy_typevartuples___find_unpack_in_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"items", 0};
    static CPyArg_Parser parser = {"O:find_unpack_in_list", kwlist, 0};
    PyObject *obj_items;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_items)) {
        return NULL;
    }
    PyObject *arg_items = obj_items;
    PyObject *retval = CPyDef_typevartuples___find_unpack_in_list(arg_items);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "find_unpack_in_list", 19, CPyStatic_typevartuples___globals);
    return NULL;
}

tuple_T3OOO CPyDef_typevartuples___split_with_instance(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_r0)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/typevartuples.py", "split_with_instance", "TypeInfo", "type_var_tuple_prefix", 36, CPyStatic_typevartuples___globals);
        goto CPyL14;
    }
CPyL1: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 36, CPyStatic_typevartuples___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_r5)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/typevartuples.py", "split_with_instance", "TypeInfo", "type_var_tuple_suffix", 37, CPyStatic_typevartuples___globals);
        goto CPyL14;
    }
CPyL5: ;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (cpy_r_r8) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 37, CPyStatic_typevartuples___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_typ)->_args;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_r11)->_type_var_tuple_prefix;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/typevartuples.py", "split_with_instance", "TypeInfo", "type_var_tuple_prefix", 39, CPyStatic_typevartuples___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 39, CPyStatic_typevartuples___globals);
        goto CPyL15;
    }
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_type_var_tuple_suffix;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/typevartuples.py", "split_with_instance", "TypeInfo", "type_var_tuple_suffix", 39, CPyStatic_typevartuples___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    if (likely(PyLong_Check(cpy_r_r15)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_r15);
    else {
        CPy_TypeError("int", cpy_r_r15); cpy_r_r16 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 39, CPyStatic_typevartuples___globals);
        goto CPyL16;
    }
    cpy_r_r17 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r10, cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 38, CPyStatic_typevartuples___globals);
        goto CPyL14;
    }
    return cpy_r_r17;
CPyL14: ;
    tuple_T3OOO __tmp8099 = { NULL, NULL, NULL };
    cpy_r_r18 = __tmp8099;
    return cpy_r_r18;
CPyL15: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r10);
    CPyTagged_DecRef(cpy_r_r13);
    goto CPyL14;
}

PyObject *CPyPy_typevartuples___split_with_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:split_with_instance", kwlist, 0};
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
    tuple_T3OOO retval = CPyDef_typevartuples___split_with_instance(arg_typ);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8100 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8100);
    PyObject *__tmp8101 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8101);
    PyObject *__tmp8102 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp8102);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "split_with_instance", 33, CPyStatic_typevartuples___globals);
    return NULL;
}

PyObject *CPyDef_typevartuples___split_with_mapped_and_template(PyObject *cpy_r_mapped, PyObject *cpy_r_mapped_prefix_len, PyObject *cpy_r_mapped_suffix_len, PyObject *cpy_r_template, CPyTagged cpy_r_template_prefix_len, CPyTagged cpy_r_template_suffix_len) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_split_result;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T10OOOOOOOOOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_mapped_prefix;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_mapped_middle_prefix;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_mapped_middle_middle;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_mapped_middle_suffix;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_mapped_suffix;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_template_prefix;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_template_middle_prefix;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_template_middle_middle;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_template_middle_suffix;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_template_suffix;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T6OOOOOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = CPyDef_typevartuples___fully_split_with_mapped_and_template(cpy_r_mapped, cpy_r_mapped_prefix_len, cpy_r_mapped_suffix_len, cpy_r_template, cpy_r_template_prefix_len, cpy_r_template_suffix_len);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 61, CPyStatic_typevartuples___globals);
        goto CPyL13;
    }
    cpy_r_split_result = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_split_result == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL14;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL3: ;
    PyObject *__tmp8103;
    if (unlikely(!(PyTuple_Check(cpy_r_split_result) && PyTuple_GET_SIZE(cpy_r_split_result) == 10))) {
        __tmp8103 = NULL;
        goto __LL8104;
    }
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 0))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 0);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 1))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 1);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 2))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 2);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 3))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 3);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 4))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 4);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 5))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 5);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 6))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 6);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 7))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 7);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 8))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 8);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    if (likely(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_split_result, 9))))
        __tmp8103 = PyTuple_GET_ITEM(cpy_r_split_result, 9);
    else {
        __tmp8103 = NULL;
    }
    if (__tmp8103 == NULL) goto __LL8104;
    __tmp8103 = cpy_r_split_result;
__LL8104: ;
    if (unlikely(__tmp8103 == NULL)) {
        CPy_TypeError("tuple[tuple, tuple, tuple, tuple, tuple, tuple, tuple, tuple, tuple, tuple]", cpy_r_split_result); cpy_r_r4 = (tuple_T10OOOOOOOOOO) { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    } else {
        PyObject *__tmp8105 = PyTuple_GET_ITEM(cpy_r_split_result, 0);
        CPy_INCREF(__tmp8105);
        PyObject * __tmp8106;
        if (likely(PyTuple_Check(__tmp8105)))
            __tmp8106 = __tmp8105;
        else {
            CPy_TypeError("tuple", __tmp8105); 
            __tmp8106 = NULL;
        }
        cpy_r_r4.f0 = __tmp8106;
        PyObject *__tmp8107 = PyTuple_GET_ITEM(cpy_r_split_result, 1);
        CPy_INCREF(__tmp8107);
        PyObject * __tmp8108;
        if (likely(PyTuple_Check(__tmp8107)))
            __tmp8108 = __tmp8107;
        else {
            CPy_TypeError("tuple", __tmp8107); 
            __tmp8108 = NULL;
        }
        cpy_r_r4.f1 = __tmp8108;
        PyObject *__tmp8109 = PyTuple_GET_ITEM(cpy_r_split_result, 2);
        CPy_INCREF(__tmp8109);
        PyObject * __tmp8110;
        if (likely(PyTuple_Check(__tmp8109)))
            __tmp8110 = __tmp8109;
        else {
            CPy_TypeError("tuple", __tmp8109); 
            __tmp8110 = NULL;
        }
        cpy_r_r4.f2 = __tmp8110;
        PyObject *__tmp8111 = PyTuple_GET_ITEM(cpy_r_split_result, 3);
        CPy_INCREF(__tmp8111);
        PyObject * __tmp8112;
        if (likely(PyTuple_Check(__tmp8111)))
            __tmp8112 = __tmp8111;
        else {
            CPy_TypeError("tuple", __tmp8111); 
            __tmp8112 = NULL;
        }
        cpy_r_r4.f3 = __tmp8112;
        PyObject *__tmp8113 = PyTuple_GET_ITEM(cpy_r_split_result, 4);
        CPy_INCREF(__tmp8113);
        PyObject * __tmp8114;
        if (likely(PyTuple_Check(__tmp8113)))
            __tmp8114 = __tmp8113;
        else {
            CPy_TypeError("tuple", __tmp8113); 
            __tmp8114 = NULL;
        }
        cpy_r_r4.f4 = __tmp8114;
        PyObject *__tmp8115 = PyTuple_GET_ITEM(cpy_r_split_result, 5);
        CPy_INCREF(__tmp8115);
        PyObject * __tmp8116;
        if (likely(PyTuple_Check(__tmp8115)))
            __tmp8116 = __tmp8115;
        else {
            CPy_TypeError("tuple", __tmp8115); 
            __tmp8116 = NULL;
        }
        cpy_r_r4.f5 = __tmp8116;
        PyObject *__tmp8117 = PyTuple_GET_ITEM(cpy_r_split_result, 6);
        CPy_INCREF(__tmp8117);
        PyObject * __tmp8118;
        if (likely(PyTuple_Check(__tmp8117)))
            __tmp8118 = __tmp8117;
        else {
            CPy_TypeError("tuple", __tmp8117); 
            __tmp8118 = NULL;
        }
        cpy_r_r4.f6 = __tmp8118;
        PyObject *__tmp8119 = PyTuple_GET_ITEM(cpy_r_split_result, 7);
        CPy_INCREF(__tmp8119);
        PyObject * __tmp8120;
        if (likely(PyTuple_Check(__tmp8119)))
            __tmp8120 = __tmp8119;
        else {
            CPy_TypeError("tuple", __tmp8119); 
            __tmp8120 = NULL;
        }
        cpy_r_r4.f7 = __tmp8120;
        PyObject *__tmp8121 = PyTuple_GET_ITEM(cpy_r_split_result, 8);
        CPy_INCREF(__tmp8121);
        PyObject * __tmp8122;
        if (likely(PyTuple_Check(__tmp8121)))
            __tmp8122 = __tmp8121;
        else {
            CPy_TypeError("tuple", __tmp8121); 
            __tmp8122 = NULL;
        }
        cpy_r_r4.f8 = __tmp8122;
        PyObject *__tmp8123 = PyTuple_GET_ITEM(cpy_r_split_result, 9);
        CPy_INCREF(__tmp8123);
        PyObject * __tmp8124;
        if (likely(PyTuple_Check(__tmp8123)))
            __tmp8124 = __tmp8123;
        else {
            CPy_TypeError("tuple", __tmp8123); 
            __tmp8124 = NULL;
        }
        cpy_r_r4.f9 = __tmp8124;
    }
    CPy_DECREF(cpy_r_split_result);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 83, CPyStatic_typevartuples___globals);
        goto CPyL13;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_mapped_prefix = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    cpy_r_mapped_middle_prefix = cpy_r_r6;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    cpy_r_mapped_middle_middle = cpy_r_r7;
    cpy_r_r8 = cpy_r_r4.f3;
    CPy_INCREF(cpy_r_r8);
    cpy_r_mapped_middle_suffix = cpy_r_r8;
    cpy_r_r9 = cpy_r_r4.f4;
    CPy_INCREF(cpy_r_r9);
    cpy_r_mapped_suffix = cpy_r_r9;
    cpy_r_r10 = cpy_r_r4.f5;
    CPy_INCREF(cpy_r_r10);
    cpy_r_template_prefix = cpy_r_r10;
    cpy_r_r11 = cpy_r_r4.f6;
    CPy_INCREF(cpy_r_r11);
    cpy_r_template_middle_prefix = cpy_r_r11;
    cpy_r_r12 = cpy_r_r4.f7;
    CPy_INCREF(cpy_r_r12);
    cpy_r_template_middle_middle = cpy_r_r12;
    cpy_r_r13 = cpy_r_r4.f8;
    CPy_INCREF(cpy_r_r13);
    cpy_r_template_middle_suffix = cpy_r_r13;
    cpy_r_r14 = cpy_r_r4.f9;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    CPy_DECREF(cpy_r_r4.f4);
    CPy_DECREF(cpy_r_r4.f5);
    CPy_DECREF(cpy_r_r4.f6);
    CPy_DECREF(cpy_r_r4.f7);
    CPy_DECREF(cpy_r_r4.f8);
    CPy_DECREF(cpy_r_r4.f9);
    cpy_r_template_suffix = cpy_r_r14;
    cpy_r_r15 = PyNumber_Add(cpy_r_mapped_prefix, cpy_r_mapped_middle_prefix);
    CPy_DECREF(cpy_r_mapped_prefix);
    CPy_DECREF(cpy_r_mapped_middle_prefix);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 86, CPyStatic_typevartuples___globals);
        goto CPyL15;
    }
    if (likely(PyTuple_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 86, CPyStatic_typevartuples___globals, "tuple", cpy_r_r15);
        goto CPyL15;
    }
    cpy_r_r17 = PyNumber_Add(cpy_r_mapped_middle_suffix, cpy_r_mapped_suffix);
    CPy_DECREF(cpy_r_mapped_middle_suffix);
    CPy_DECREF(cpy_r_mapped_suffix);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 88, CPyStatic_typevartuples___globals);
        goto CPyL16;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 88, CPyStatic_typevartuples___globals, "tuple", cpy_r_r17);
        goto CPyL16;
    }
    cpy_r_r19 = PyNumber_Add(cpy_r_template_prefix, cpy_r_template_middle_prefix);
    CPy_DECREF(cpy_r_template_prefix);
    CPy_DECREF(cpy_r_template_middle_prefix);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 89, CPyStatic_typevartuples___globals);
        goto CPyL17;
    }
    if (likely(PyTuple_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 89, CPyStatic_typevartuples___globals, "tuple", cpy_r_r19);
        goto CPyL17;
    }
    cpy_r_r21 = PyNumber_Add(cpy_r_template_middle_suffix, cpy_r_template_suffix);
    CPy_DECREF(cpy_r_template_middle_suffix);
    CPy_DECREF(cpy_r_template_suffix);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 91, CPyStatic_typevartuples___globals);
        goto CPyL18;
    }
    if (likely(PyTuple_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 91, CPyStatic_typevartuples___globals, "tuple", cpy_r_r21);
        goto CPyL18;
    }
    cpy_r_r23.f0 = cpy_r_r16;
    cpy_r_r23.f1 = cpy_r_mapped_middle_middle;
    cpy_r_r23.f2 = cpy_r_r18;
    cpy_r_r23.f3 = cpy_r_r20;
    cpy_r_r23.f4 = cpy_r_template_middle_middle;
    cpy_r_r23.f5 = cpy_r_r22;
    CPy_INCREF(cpy_r_r23.f0);
    CPy_INCREF(cpy_r_r23.f1);
    CPy_INCREF(cpy_r_r23.f2);
    CPy_INCREF(cpy_r_r23.f3);
    CPy_INCREF(cpy_r_r23.f4);
    CPy_INCREF(cpy_r_r23.f5);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_mapped_middle_middle);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_template_middle_middle);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = PyTuple_New(6);
    if (unlikely(cpy_r_r24 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8125 = cpy_r_r23.f0;
    PyTuple_SET_ITEM(cpy_r_r24, 0, __tmp8125);
    PyObject *__tmp8126 = cpy_r_r23.f1;
    PyTuple_SET_ITEM(cpy_r_r24, 1, __tmp8126);
    PyObject *__tmp8127 = cpy_r_r23.f2;
    PyTuple_SET_ITEM(cpy_r_r24, 2, __tmp8127);
    PyObject *__tmp8128 = cpy_r_r23.f3;
    PyTuple_SET_ITEM(cpy_r_r24, 3, __tmp8128);
    PyObject *__tmp8129 = cpy_r_r23.f4;
    PyTuple_SET_ITEM(cpy_r_r24, 4, __tmp8129);
    PyObject *__tmp8130 = cpy_r_r23.f5;
    PyTuple_SET_ITEM(cpy_r_r24, 5, __tmp8130);
    return cpy_r_r24;
CPyL13: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL14: ;
    CPy_DECREF(cpy_r_split_result);
    goto CPyL2;
CPyL15: ;
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_mapped_middle_suffix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle_prefix);
    CPy_DecRef(cpy_r_template_middle_middle);
    CPy_DecRef(cpy_r_template_middle_suffix);
    CPy_DecRef(cpy_r_template_suffix);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle_prefix);
    CPy_DecRef(cpy_r_template_middle_middle);
    CPy_DecRef(cpy_r_template_middle_suffix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_r16);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_template_middle_middle);
    CPy_DecRef(cpy_r_template_middle_suffix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_template_middle_middle);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL13;
}

PyObject *CPyPy_typevartuples___split_with_mapped_and_template(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapped", "mapped_prefix_len", "mapped_suffix_len", "template", "template_prefix_len", "template_suffix_len", 0};
    static CPyArg_Parser parser = {"OOOOOO:split_with_mapped_and_template", kwlist, 0};
    PyObject *obj_mapped;
    PyObject *obj_mapped_prefix_len;
    PyObject *obj_mapped_suffix_len;
    PyObject *obj_template;
    PyObject *obj_template_prefix_len;
    PyObject *obj_template_suffix_len;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapped, &obj_mapped_prefix_len, &obj_mapped_suffix_len, &obj_template, &obj_template_prefix_len, &obj_template_suffix_len)) {
        return NULL;
    }
    PyObject * arg_mapped;
    if (likely(PyTuple_Check(obj_mapped)))
        arg_mapped = obj_mapped;
    else {
        CPy_TypeError("tuple", obj_mapped); 
        goto fail;
    }
    PyObject *arg_mapped_prefix_len;
    if (PyLong_Check(obj_mapped_prefix_len))
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL8131;
    if (obj_mapped_prefix_len == Py_None)
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL8131;
    CPy_TypeError("int or None", obj_mapped_prefix_len); 
    goto fail;
__LL8131: ;
    PyObject *arg_mapped_suffix_len;
    if (PyLong_Check(obj_mapped_suffix_len))
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL8132;
    if (obj_mapped_suffix_len == Py_None)
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL8132;
    CPy_TypeError("int or None", obj_mapped_suffix_len); 
    goto fail;
__LL8132: ;
    PyObject * arg_template;
    if (likely(PyTuple_Check(obj_template)))
        arg_template = obj_template;
    else {
        CPy_TypeError("tuple", obj_template); 
        goto fail;
    }
    CPyTagged arg_template_prefix_len;
    if (likely(PyLong_Check(obj_template_prefix_len)))
        arg_template_prefix_len = CPyTagged_BorrowFromObject(obj_template_prefix_len);
    else {
        CPy_TypeError("int", obj_template_prefix_len); goto fail;
    }
    CPyTagged arg_template_suffix_len;
    if (likely(PyLong_Check(obj_template_suffix_len)))
        arg_template_suffix_len = CPyTagged_BorrowFromObject(obj_template_suffix_len);
    else {
        CPy_TypeError("int", obj_template_suffix_len); goto fail;
    }
    PyObject *retval = CPyDef_typevartuples___split_with_mapped_and_template(arg_mapped, arg_mapped_prefix_len, arg_mapped_suffix_len, arg_template, arg_template_prefix_len, arg_template_suffix_len);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "split_with_mapped_and_template", 43, CPyStatic_typevartuples___globals);
    return NULL;
}

PyObject *CPyDef_typevartuples___fully_split_with_mapped_and_template(PyObject *cpy_r_mapped, PyObject *cpy_r_mapped_prefix_len, PyObject *cpy_r_mapped_suffix_len, PyObject *cpy_r_template, CPyTagged cpy_r_template_prefix_len, CPyTagged cpy_r_template_suffix_len) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_mapped_prefix;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_mapped_middle;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_mapped_suffix;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_template_prefix;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_template_middle;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_template_suffix;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_unpack_prefix;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    tuple_T0 cpy_r_r26;
    tuple_T0 cpy_r_r27;
    tuple_T0 cpy_r_r28;
    tuple_T0 cpy_r_r29;
    tuple_T10OT0OT0OOT0OT0O cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_unpack_suffix;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_mapped_middle_prefix;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_mapped_middle_middle;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_mapped_middle_suffix;
    CPyTagged cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_template_middle_prefix;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_template_middle_middle;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_template_middle_suffix;
    tuple_T10OOOOOOOOOO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_mapped_prefix_len != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL9;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_mapped_suffix_len != cpy_r_r2;
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 118, CPyStatic_typevartuples___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = PySequence_Tuple(cpy_r_mapped);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 120, CPyStatic_typevartuples___globals);
        goto CPyL30;
    }
    if (likely(PyLong_Check(cpy_r_mapped_prefix_len)))
        cpy_r_r6 = CPyTagged_FromObject(cpy_r_mapped_prefix_len);
    else {
        CPy_TypeError("int", cpy_r_mapped_prefix_len); cpy_r_r6 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 120, CPyStatic_typevartuples___globals);
        goto CPyL31;
    }
    if (likely(PyLong_Check(cpy_r_mapped_suffix_len)))
        cpy_r_r7 = CPyTagged_FromObject(cpy_r_mapped_suffix_len);
    else {
        CPy_TypeError("int", cpy_r_mapped_suffix_len); cpy_r_r7 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 120, CPyStatic_typevartuples___globals);
        goto CPyL32;
    }
    cpy_r_r8 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 119, CPyStatic_typevartuples___globals);
        goto CPyL30;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_mapped_prefix = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    cpy_r_mapped_middle = cpy_r_r10;
    cpy_r_r11 = cpy_r_r8.f2;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r8.f2);
    cpy_r_mapped_suffix = cpy_r_r11;
    goto CPyL14;
CPyL9: ;
    cpy_r_r12 = (PyObject *)&PyTuple_Type;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 123, CPyStatic_typevartuples___globals);
        goto CPyL30;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 123, CPyStatic_typevartuples___globals, "tuple", cpy_r_r13);
        goto CPyL30;
    }
    cpy_r_mapped_prefix = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&PyTuple_Type;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r15, 0, 0, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 124, CPyStatic_typevartuples___globals);
        goto CPyL33;
    }
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 124, CPyStatic_typevartuples___globals, "tuple", cpy_r_r16);
        goto CPyL33;
    }
    cpy_r_mapped_suffix = cpy_r_r17;
    CPy_INCREF(cpy_r_mapped);
    cpy_r_mapped_middle = cpy_r_mapped;
CPyL14: ;
    cpy_r_r18 = PySequence_Tuple(cpy_r_template);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 128, CPyStatic_typevartuples___globals);
        goto CPyL34;
    }
    cpy_r_r19 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_r18, cpy_r_template_prefix_len, cpy_r_template_suffix_len);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 127, CPyStatic_typevartuples___globals);
        goto CPyL34;
    }
    cpy_r_r20 = cpy_r_r19.f0;
    CPy_INCREF(cpy_r_r20);
    cpy_r_template_prefix = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f1;
    CPy_INCREF(cpy_r_r21);
    cpy_r_template_middle = cpy_r_r21;
    cpy_r_r22 = cpy_r_r19.f2;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r19.f0);
    CPy_DECREF(cpy_r_r19.f1);
    CPy_DECREF(cpy_r_r19.f2);
    cpy_r_template_suffix = cpy_r_r22;
    cpy_r_r23 = CPyDef_typevartuples___find_unpack_in_list(cpy_r_template_middle);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 131, CPyStatic_typevartuples___globals);
        goto CPyL35;
    }
    cpy_r_unpack_prefix = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_unpack_prefix == cpy_r_r24;
    if (cpy_r_r25) {
        goto CPyL36;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r26.empty_struct_error_flag = 0;
    cpy_r_r27.empty_struct_error_flag = 0;
    cpy_r_r28.empty_struct_error_flag = 0;
    cpy_r_r29.empty_struct_error_flag = 0;
    cpy_r_r30.f0 = cpy_r_mapped_prefix;
    cpy_r_r30.f1 = cpy_r_r26;
    cpy_r_r30.f2 = cpy_r_mapped_middle;
    cpy_r_r30.f3 = cpy_r_r27;
    cpy_r_r30.f4 = cpy_r_mapped_suffix;
    cpy_r_r30.f5 = cpy_r_template_prefix;
    cpy_r_r30.f6 = cpy_r_r28;
    cpy_r_r30.f7 = cpy_r_template_middle;
    cpy_r_r30.f8 = cpy_r_r29;
    cpy_r_r30.f9 = cpy_r_template_suffix;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f2);
    CPy_INCREF(cpy_r_r30.f4);
    CPy_INCREF(cpy_r_r30.f5);
    CPy_INCREF(cpy_r_r30.f7);
    CPy_INCREF(cpy_r_r30.f9);
    CPy_DECREF(cpy_r_mapped_prefix);
    CPy_DECREF(cpy_r_mapped_middle);
    CPy_DECREF(cpy_r_mapped_suffix);
    CPy_DECREF(cpy_r_template_prefix);
    CPy_DECREF(cpy_r_template_middle);
    CPy_DECREF(cpy_r_template_suffix);
    cpy_r_r31 = PyTuple_New(10);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8133 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp8133);
    PyObject *__tmp8134 = PyTuple_New(0);
    if (unlikely(__tmp8134 == NULL))
        CPyError_OutOfMemory();
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp8134);
    PyObject *__tmp8135 = cpy_r_r30.f2;
    PyTuple_SET_ITEM(cpy_r_r31, 2, __tmp8135);
    PyObject *__tmp8136 = PyTuple_New(0);
    if (unlikely(__tmp8136 == NULL))
        CPyError_OutOfMemory();
    PyTuple_SET_ITEM(cpy_r_r31, 3, __tmp8136);
    PyObject *__tmp8137 = cpy_r_r30.f4;
    PyTuple_SET_ITEM(cpy_r_r31, 4, __tmp8137);
    PyObject *__tmp8138 = cpy_r_r30.f5;
    PyTuple_SET_ITEM(cpy_r_r31, 5, __tmp8138);
    PyObject *__tmp8139 = PyTuple_New(0);
    if (unlikely(__tmp8139 == NULL))
        CPyError_OutOfMemory();
    PyTuple_SET_ITEM(cpy_r_r31, 6, __tmp8139);
    PyObject *__tmp8140 = cpy_r_r30.f7;
    PyTuple_SET_ITEM(cpy_r_r31, 7, __tmp8140);
    PyObject *__tmp8141 = PyTuple_New(0);
    if (unlikely(__tmp8141 == NULL))
        CPyError_OutOfMemory();
    PyTuple_SET_ITEM(cpy_r_r31, 8, __tmp8141);
    PyObject *__tmp8142 = cpy_r_r30.f9;
    PyTuple_SET_ITEM(cpy_r_r31, 9, __tmp8142);
    return cpy_r_r31;
CPyL19: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_template_middle)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    if (likely(PyLong_Check(cpy_r_unpack_prefix)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_unpack_prefix);
    else {
        CPy_TypeError("int", cpy_r_unpack_prefix); cpy_r_r35 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 146, CPyStatic_typevartuples___globals);
        goto CPyL37;
    }
    cpy_r_r36 = CPyTagged_Subtract(cpy_r_r34, cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r35);
    cpy_r_r37 = CPyTagged_Subtract(cpy_r_r36, 2);
    CPyTagged_DECREF(cpy_r_r36);
    cpy_r_unpack_suffix = cpy_r_r37;
    if (likely(PyLong_Check(cpy_r_unpack_prefix)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_unpack_prefix);
    else {
        CPy_TypeError("int", cpy_r_unpack_prefix); cpy_r_r38 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 148, CPyStatic_typevartuples___globals);
        goto CPyL38;
    }
    cpy_r_r39 = CPyTagged_Add(cpy_r_r38, cpy_r_unpack_suffix);
    CPyTagged_DECREF(cpy_r_r38);
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_mapped_middle)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = cpy_r_r39 & 1;
    cpy_r_r44 = cpy_r_r43 != 0;
    if (!cpy_r_r44) goto CPyL23;
    cpy_r_r45 = CPyTagged_IsLt_(cpy_r_r42, cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r39);
    if (cpy_r_r45) {
        goto CPyL39;
    } else
        goto CPyL25;
CPyL23: ;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r39 > (Py_ssize_t)cpy_r_r42;
    CPyTagged_DECREF(cpy_r_r39);
    if (cpy_r_r46) {
        goto CPyL39;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r47 = Py_None;
    CPy_INCREF(cpy_r_r47);
    return cpy_r_r47;
CPyL25: ;
    if (likely(PyLong_Check(cpy_r_unpack_prefix)))
        cpy_r_r48 = CPyTagged_FromObject(cpy_r_unpack_prefix);
    else {
        CPy_TypeError("int", cpy_r_unpack_prefix); cpy_r_r48 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 155, CPyStatic_typevartuples___globals);
        goto CPyL38;
    }
    cpy_r_r49 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_mapped_middle, cpy_r_r48, cpy_r_unpack_suffix);
    CPy_DECREF(cpy_r_mapped_middle);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 155, CPyStatic_typevartuples___globals);
        goto CPyL40;
    }
    cpy_r_r50 = cpy_r_r49.f0;
    CPy_INCREF(cpy_r_r50);
    cpy_r_mapped_middle_prefix = cpy_r_r50;
    cpy_r_r51 = cpy_r_r49.f1;
    CPy_INCREF(cpy_r_r51);
    cpy_r_mapped_middle_middle = cpy_r_r51;
    cpy_r_r52 = cpy_r_r49.f2;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r49.f0);
    CPy_DECREF(cpy_r_r49.f1);
    CPy_DECREF(cpy_r_r49.f2);
    cpy_r_mapped_middle_suffix = cpy_r_r52;
    if (likely(PyLong_Check(cpy_r_unpack_prefix)))
        cpy_r_r53 = CPyTagged_FromObject(cpy_r_unpack_prefix);
    else {
        CPy_TypeError("int", cpy_r_unpack_prefix); cpy_r_r53 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_unpack_prefix);
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 160, CPyStatic_typevartuples___globals);
        goto CPyL41;
    }
    cpy_r_r54 = CPyDef_types___split_with_prefix_and_suffix(cpy_r_template_middle, cpy_r_r53, cpy_r_unpack_suffix);
    CPy_DECREF(cpy_r_template_middle);
    CPyTagged_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_unpack_suffix);
    if (unlikely(cpy_r_r54.f0 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 160, CPyStatic_typevartuples___globals);
        goto CPyL42;
    }
    cpy_r_r55 = cpy_r_r54.f0;
    CPy_INCREF(cpy_r_r55);
    cpy_r_template_middle_prefix = cpy_r_r55;
    cpy_r_r56 = cpy_r_r54.f1;
    CPy_INCREF(cpy_r_r56);
    cpy_r_template_middle_middle = cpy_r_r56;
    cpy_r_r57 = cpy_r_r54.f2;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r54.f0);
    CPy_DECREF(cpy_r_r54.f1);
    CPy_DECREF(cpy_r_r54.f2);
    cpy_r_template_middle_suffix = cpy_r_r57;
    cpy_r_r58.f0 = cpy_r_mapped_prefix;
    cpy_r_r58.f1 = cpy_r_mapped_middle_prefix;
    cpy_r_r58.f2 = cpy_r_mapped_middle_middle;
    cpy_r_r58.f3 = cpy_r_mapped_middle_suffix;
    cpy_r_r58.f4 = cpy_r_mapped_suffix;
    cpy_r_r58.f5 = cpy_r_template_prefix;
    cpy_r_r58.f6 = cpy_r_template_middle_prefix;
    cpy_r_r58.f7 = cpy_r_template_middle_middle;
    cpy_r_r58.f8 = cpy_r_template_middle_suffix;
    cpy_r_r58.f9 = cpy_r_template_suffix;
    CPy_INCREF(cpy_r_r58.f0);
    CPy_INCREF(cpy_r_r58.f1);
    CPy_INCREF(cpy_r_r58.f2);
    CPy_INCREF(cpy_r_r58.f3);
    CPy_INCREF(cpy_r_r58.f4);
    CPy_INCREF(cpy_r_r58.f5);
    CPy_INCREF(cpy_r_r58.f6);
    CPy_INCREF(cpy_r_r58.f7);
    CPy_INCREF(cpy_r_r58.f8);
    CPy_INCREF(cpy_r_r58.f9);
    CPy_DECREF(cpy_r_mapped_prefix);
    CPy_DECREF(cpy_r_mapped_middle_prefix);
    CPy_DECREF(cpy_r_mapped_middle_middle);
    CPy_DECREF(cpy_r_mapped_middle_suffix);
    CPy_DECREF(cpy_r_mapped_suffix);
    CPy_DECREF(cpy_r_template_prefix);
    CPy_DECREF(cpy_r_template_middle_prefix);
    CPy_DECREF(cpy_r_template_middle_middle);
    CPy_DECREF(cpy_r_template_middle_suffix);
    CPy_DECREF(cpy_r_template_suffix);
    cpy_r_r59 = PyTuple_New(10);
    if (unlikely(cpy_r_r59 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8143 = cpy_r_r58.f0;
    PyTuple_SET_ITEM(cpy_r_r59, 0, __tmp8143);
    PyObject *__tmp8144 = cpy_r_r58.f1;
    PyTuple_SET_ITEM(cpy_r_r59, 1, __tmp8144);
    PyObject *__tmp8145 = cpy_r_r58.f2;
    PyTuple_SET_ITEM(cpy_r_r59, 2, __tmp8145);
    PyObject *__tmp8146 = cpy_r_r58.f3;
    PyTuple_SET_ITEM(cpy_r_r59, 3, __tmp8146);
    PyObject *__tmp8147 = cpy_r_r58.f4;
    PyTuple_SET_ITEM(cpy_r_r59, 4, __tmp8147);
    PyObject *__tmp8148 = cpy_r_r58.f5;
    PyTuple_SET_ITEM(cpy_r_r59, 5, __tmp8148);
    PyObject *__tmp8149 = cpy_r_r58.f6;
    PyTuple_SET_ITEM(cpy_r_r59, 6, __tmp8149);
    PyObject *__tmp8150 = cpy_r_r58.f7;
    PyTuple_SET_ITEM(cpy_r_r59, 7, __tmp8150);
    PyObject *__tmp8151 = cpy_r_r58.f8;
    PyTuple_SET_ITEM(cpy_r_r59, 8, __tmp8151);
    PyObject *__tmp8152 = cpy_r_r58.f9;
    PyTuple_SET_ITEM(cpy_r_r59, 9, __tmp8152);
    return cpy_r_r59;
CPyL30: ;
    cpy_r_r60 = NULL;
    return cpy_r_r60;
CPyL31: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_r6);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle);
    CPy_DecRef(cpy_r_template_suffix);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_unpack_prefix);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_unpack_prefix);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_middle);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_unpack_prefix);
    CPyTagged_DecRef(cpy_r_unpack_suffix);
    goto CPyL30;
CPyL39: ;
    CPy_DECREF(cpy_r_mapped_prefix);
    CPy_DECREF(cpy_r_mapped_middle);
    CPy_DECREF(cpy_r_mapped_suffix);
    CPy_DECREF(cpy_r_template_prefix);
    CPy_DECREF(cpy_r_template_middle);
    CPy_DECREF(cpy_r_template_suffix);
    CPy_DECREF(cpy_r_unpack_prefix);
    CPyTagged_DECREF(cpy_r_unpack_suffix);
    goto CPyL24;
CPyL40: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_unpack_prefix);
    CPyTagged_DecRef(cpy_r_unpack_suffix);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_middle);
    CPy_DecRef(cpy_r_template_suffix);
    CPyTagged_DecRef(cpy_r_unpack_suffix);
    CPy_DecRef(cpy_r_mapped_middle_prefix);
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_mapped_middle_suffix);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_mapped_prefix);
    CPy_DecRef(cpy_r_mapped_suffix);
    CPy_DecRef(cpy_r_template_prefix);
    CPy_DecRef(cpy_r_template_suffix);
    CPy_DecRef(cpy_r_mapped_middle_prefix);
    CPy_DecRef(cpy_r_mapped_middle_middle);
    CPy_DecRef(cpy_r_mapped_middle_suffix);
    goto CPyL30;
}

PyObject *CPyPy_typevartuples___fully_split_with_mapped_and_template(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mapped", "mapped_prefix_len", "mapped_suffix_len", "template", "template_prefix_len", "template_suffix_len", 0};
    static CPyArg_Parser parser = {"OOOOOO:fully_split_with_mapped_and_template", kwlist, 0};
    PyObject *obj_mapped;
    PyObject *obj_mapped_prefix_len;
    PyObject *obj_mapped_suffix_len;
    PyObject *obj_template;
    PyObject *obj_template_prefix_len;
    PyObject *obj_template_suffix_len;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mapped, &obj_mapped_prefix_len, &obj_mapped_suffix_len, &obj_template, &obj_template_prefix_len, &obj_template_suffix_len)) {
        return NULL;
    }
    PyObject * arg_mapped;
    if (likely(PyTuple_Check(obj_mapped)))
        arg_mapped = obj_mapped;
    else {
        CPy_TypeError("tuple", obj_mapped); 
        goto fail;
    }
    PyObject *arg_mapped_prefix_len;
    if (PyLong_Check(obj_mapped_prefix_len))
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL8153;
    if (obj_mapped_prefix_len == Py_None)
        arg_mapped_prefix_len = obj_mapped_prefix_len;
    else {
        arg_mapped_prefix_len = NULL;
    }
    if (arg_mapped_prefix_len != NULL) goto __LL8153;
    CPy_TypeError("int or None", obj_mapped_prefix_len); 
    goto fail;
__LL8153: ;
    PyObject *arg_mapped_suffix_len;
    if (PyLong_Check(obj_mapped_suffix_len))
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL8154;
    if (obj_mapped_suffix_len == Py_None)
        arg_mapped_suffix_len = obj_mapped_suffix_len;
    else {
        arg_mapped_suffix_len = NULL;
    }
    if (arg_mapped_suffix_len != NULL) goto __LL8154;
    CPy_TypeError("int or None", obj_mapped_suffix_len); 
    goto fail;
__LL8154: ;
    PyObject * arg_template;
    if (likely(PyTuple_Check(obj_template)))
        arg_template = obj_template;
    else {
        CPy_TypeError("tuple", obj_template); 
        goto fail;
    }
    CPyTagged arg_template_prefix_len;
    if (likely(PyLong_Check(obj_template_prefix_len)))
        arg_template_prefix_len = CPyTagged_BorrowFromObject(obj_template_prefix_len);
    else {
        CPy_TypeError("int", obj_template_prefix_len); goto fail;
    }
    CPyTagged arg_template_suffix_len;
    if (likely(PyLong_Check(obj_template_suffix_len)))
        arg_template_suffix_len = CPyTagged_BorrowFromObject(obj_template_suffix_len);
    else {
        CPy_TypeError("int", obj_template_suffix_len); goto fail;
    }
    PyObject *retval = CPyDef_typevartuples___fully_split_with_mapped_and_template(arg_mapped, arg_mapped_prefix_len, arg_mapped_suffix_len, arg_template, arg_template_prefix_len, arg_template_suffix_len);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "fully_split_with_mapped_and_template", 95, CPyStatic_typevartuples___globals);
    return NULL;
}

PyObject *CPyDef_typevartuples___extract_unpack(PyObject *cpy_r_types) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyObject_Size(cpy_r_types);
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "extract_unpack", 178, CPyStatic_typevartuples___globals);
        goto CPyL10;
    }
    cpy_r_r1 = cpy_r_r0 == 2;
    CPyTagged_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL9;
    cpy_r_r2 = CPyStatics[9015]; /* 0 */
    cpy_r_r3 = PyObject_GetItem(cpy_r_types, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "extract_unpack", 179, CPyStatic_typevartuples___globals);
        goto CPyL10;
    }
    cpy_r_r4 = (PyObject *)CPyType_types___UnpackType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r8 = CPyStatics[9015]; /* 0 */
    cpy_r_r9 = PyObject_GetItem(cpy_r_types, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "extract_unpack", 180, CPyStatic_typevartuples___globals);
        goto CPyL10;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___UnpackType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "extract_unpack", 180, CPyStatic_typevartuples___globals, "mypy.types.UnpackType", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_r11 = ((mypy___types___UnpackTypeObject *)cpy_r_r10)->_type;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = CPyDef_types___get_proper_type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "extract_unpack", 180, CPyStatic_typevartuples___globals);
        goto CPyL10;
    }
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "extract_unpack", 180, CPyStatic_typevartuples___globals, "mypy.types.ProperType", cpy_r_r12);
        goto CPyL10;
    }
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = Py_None;
    CPy_INCREF(cpy_r_r14);
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
}

PyObject *CPyPy_typevartuples___extract_unpack(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:extract_unpack", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types = obj_types;
    PyObject *retval = CPyDef_typevartuples___extract_unpack(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "extract_unpack", 176, CPyStatic_typevartuples___globals);
    return NULL;
}

PyObject *CPyDef_typevartuples___replace_starargs(PyObject *cpy_r_callable, PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_star_index;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
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
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_kinds;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 185, CPyStatic_typevartuples___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = CPyList_Index(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 185, CPyStatic_typevartuples___globals);
        goto CPyL37;
    }
    cpy_r_star_index = cpy_r_r3;
    cpy_r_r4 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_kinds;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyList_GetSlice(cpy_r_r4, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals, "list", cpy_r_r5);
        goto CPyL39;
    }
    cpy_r_r7 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 188, CPyStatic_typevartuples___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 188, CPyStatic_typevartuples___globals);
        goto CPyL41;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_r7);
    *(PyObject * *)cpy_r_r11 = cpy_r_r7;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = CPySequence_Multiply(cpy_r_r9, cpy_r_r14);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 188, CPyStatic_typevartuples___globals);
        goto CPyL41;
    }
    cpy_r_r16 = PyNumber_Add(cpy_r_r6, cpy_r_r15);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals, "list", cpy_r_r16);
        goto CPyL39;
    }
    cpy_r_r18 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_kinds;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyTagged_Add(cpy_r_star_index, 2);
    cpy_r_r20 = CPyList_GetSlice(cpy_r_r18, cpy_r_r19, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 189, CPyStatic_typevartuples___globals);
        goto CPyL42;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 189, CPyStatic_typevartuples___globals, "list", cpy_r_r20);
        goto CPyL42;
    }
    cpy_r_r22 = PyNumber_Add(cpy_r_r17, cpy_r_r21);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 187, CPyStatic_typevartuples___globals, "list", cpy_r_r22);
        goto CPyL39;
    }
    cpy_r_arg_kinds = cpy_r_r23;
    cpy_r_r24 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_names;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyList_GetSlice(cpy_r_r24, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals);
        goto CPyL43;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals, "list", cpy_r_r25);
        goto CPyL43;
    }
    cpy_r_r27 = PyList_New(1);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 193, CPyStatic_typevartuples___globals);
        goto CPyL44;
    }
    cpy_r_r28 = Py_None;
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r27)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    CPy_INCREF(cpy_r_r28);
    *(PyObject * *)cpy_r_r30 = cpy_r_r28;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = CPySequence_Multiply(cpy_r_r27, cpy_r_r33);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 193, CPyStatic_typevartuples___globals);
        goto CPyL44;
    }
    cpy_r_r35 = PyNumber_Add(cpy_r_r26, cpy_r_r34);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals);
        goto CPyL43;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals, "list", cpy_r_r35);
        goto CPyL43;
    }
    cpy_r_r37 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_names;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyTagged_Add(cpy_r_star_index, 2);
    cpy_r_r39 = CPyList_GetSlice(cpy_r_r37, cpy_r_r38, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 194, CPyStatic_typevartuples___globals);
        goto CPyL45;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 194, CPyStatic_typevartuples___globals, "list", cpy_r_r39);
        goto CPyL45;
    }
    cpy_r_r41 = PyNumber_Add(cpy_r_r36, cpy_r_r40);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals);
        goto CPyL43;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 192, CPyStatic_typevartuples___globals, "list", cpy_r_r41);
        goto CPyL43;
    }
    cpy_r_arg_names = cpy_r_r42;
    cpy_r_r43 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyList_GetSlice(cpy_r_r43, 0, cpy_r_star_index);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals, "list", cpy_r_r44);
        goto CPyL46;
    }
    cpy_r_r46 = PyNumber_Add(cpy_r_r45, cpy_r_types);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals, "list", cpy_r_r46);
        goto CPyL46;
    }
    cpy_r_r48 = ((mypy___types___CallableTypeObject *)cpy_r_callable)->_arg_types;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyTagged_Add(cpy_r_star_index, 2);
    CPyTagged_DECREF(cpy_r_star_index);
    cpy_r_r50 = CPyList_GetSlice(cpy_r_r48, cpy_r_r49, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals, "list", cpy_r_r50);
        goto CPyL47;
    }
    cpy_r_r52 = PyNumber_Add(cpy_r_r47, cpy_r_r51);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals);
        goto CPyL48;
    }
    if (likely(PyList_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/typevartuples.py", "replace_starargs", 196, CPyStatic_typevartuples___globals, "list", cpy_r_r52);
        goto CPyL48;
    }
    cpy_r_arg_types = cpy_r_r53;
    cpy_r_r54 = NULL;
    cpy_r_r55 = NULL;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = NULL;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_types___CallableType___copy_modified(cpy_r_callable, cpy_r_arg_types, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 198, CPyStatic_typevartuples___globals);
        goto CPyL37;
    }
    return cpy_r_r70;
CPyL37: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL1;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_star_index);
    goto CPyL37;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r6);
    goto CPyL37;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_r17);
    goto CPyL37;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL37;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r26);
    goto CPyL37;
CPyL45: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_r36);
    goto CPyL37;
CPyL46: ;
    CPyTagged_DecRef(cpy_r_star_index);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r47);
    goto CPyL37;
CPyL48: ;
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL37;
}

PyObject *CPyPy_typevartuples___replace_starargs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"callable", "types", 0};
    static CPyArg_Parser parser = {"OO:replace_starargs", kwlist, 0};
    PyObject *obj_callable;
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_callable, &obj_types)) {
        return NULL;
    }
    PyObject *arg_callable;
    if (likely(Py_TYPE(obj_callable) == CPyType_types___CallableType))
        arg_callable = obj_callable;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callable); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_typevartuples___replace_starargs(arg_callable, arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typevartuples.py", "replace_starargs", 184, CPyStatic_typevartuples___globals);
    return NULL;
}

char CPyDef_typevartuples_____top_level__(void) {
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
        CPy_AddTraceback("mypy/typevartuples.py", "<module>", -1, CPyStatic_typevartuples___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_typevartuples___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "<module>", 3, CPyStatic_typevartuples___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9736]; /* ('Sequence',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_typevartuples___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "<module>", 5, CPyStatic_typevartuples___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9885]; /* ('ARG_POS', 'ARG_STAR') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_typevartuples___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "<module>", 7, CPyStatic_typevartuples___globals);
        goto CPyL8;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9886]; /* ('CallableType', 'Instance', 'ProperType', 'Type',
                                     'UnpackType', 'get_proper_type',
                                     'split_with_prefix_and_suffix') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_typevartuples___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/typevartuples.py", "<module>", 8, CPyStatic_typevartuples___globals);
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
