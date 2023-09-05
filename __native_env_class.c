#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef env_classmodule_methods[] = {
    {"setup_env_class", (PyCFunction)CPyPy_env_class___setup_env_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"finalize_env_class", (PyCFunction)CPyPy_env_class___finalize_env_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"instantiate_env_class", (PyCFunction)CPyPy_env_class___instantiate_env_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_env_registers", (PyCFunction)CPyPy_env_class___load_env_registers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_outer_env", (PyCFunction)CPyPy_env_class___load_outer_env, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_outer_envs", (PyCFunction)CPyPy_env_class___load_outer_envs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"num_bitmap_args", (PyCFunction)CPyPy_env_class___num_bitmap_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_args_to_env", (PyCFunction)CPyPy_env_class___add_args_to_env, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setup_func_for_recursive_call", (PyCFunction)CPyPy_env_class___setup_func_for_recursive_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_free_variable", (PyCFunction)CPyPy_env_class___is_free_variable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef env_classmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.env_class",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    env_classmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___env_class(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___env_class_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___env_class_internal);
        return CPyModule_mypyc___irbuild___env_class_internal;
    }
    CPyModule_mypyc___irbuild___env_class_internal = PyModule_Create(&env_classmodule);
    if (unlikely(CPyModule_mypyc___irbuild___env_class_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___env_class_internal, "__name__");
    CPyStatic_env_class___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___env_class_internal);
    if (unlikely(CPyStatic_env_class___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_env_class_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___env_class_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___env_class_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_env_class___setup_env_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_env_class;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_context___FuncInfo___namespaced_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 46, CPyStatic_env_class___globals);
        goto CPyL19;
    }
    cpy_r_r2 = CPyStatics[8208]; /* '_env' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 46, CPyStatic_env_class___globals);
        goto CPyL19;
    }
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/env_class.py", "setup_env_class", "IRBuilder", "module_name", 46, CPyStatic_env_class___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_class_ir___ClassIR(cpy_r_r3, cpy_r_r4, cpy_r_r5, 1, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 45, CPyStatic_env_class___globals);
        goto CPyL19;
    }
    cpy_r_env_class = cpy_r_r8;
    cpy_r_r9 = CPyDef_rtypes___RInstance(cpy_r_env_class);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 48, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r10 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_env_class)->_attributes;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/env_class.py", "setup_env_class", "ClassIR", "attributes", 48, CPyStatic_env_class___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r10);
CPyL6: ;
    cpy_r_r11 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r10, cpy_r_r11, cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 48, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r14 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r15 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r14)->_is_nested;
    if (!cpy_r_r15) goto CPyL14;
CPyL8: ;
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_infos;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 52, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_context___FuncInfo))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 52, CPyStatic_env_class___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r17);
        goto CPyL21;
    }
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_r18, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 52, CPyStatic_env_class___globals);
        goto CPyL21;
    }
CPyL11: ;
    cpy_r_r20 = CPyDef_rtypes___RInstance(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 52, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r21 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_env_class)->_attributes;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/env_class.py", "setup_env_class", "ClassIR", "attributes", 52, CPyStatic_env_class___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r21);
CPyL13: ;
    cpy_r_r22 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r23 = CPyDict_SetItem(cpy_r_r21, cpy_r_r22, cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 52, CPyStatic_env_class___globals);
        goto CPyL21;
    }
CPyL14: ;
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 53, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    CPy_INCREF(cpy_r_env_class);
    *(PyObject * *)cpy_r_r27 = cpy_r_env_class;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_env_class)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_env_class)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_env_class)->_mro = cpy_r_r25;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 53, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r29 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r29);
    CPy_INCREF(cpy_r_env_class);
    cpy_r_r30 = CPY_SET_ATTR(cpy_r_r29, CPyType_context___FuncInfo, 7, cpy_r_env_class, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    CPy_DECREF(cpy_r_r29);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 54, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    cpy_r_r31 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PyList_Append(cpy_r_r31, cpy_r_env_class);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 55, CPyStatic_env_class___globals);
        goto CPyL21;
    }
    return cpy_r_env_class;
CPyL19: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_env_class);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_env_class);
    CPy_DecRef(cpy_r_r9);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_env_class);
    CPy_DecRef(cpy_r_r20);
    goto CPyL19;
}

PyObject *CPyPy_env_class___setup_env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:setup_env_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *retval = CPyDef_env_class___setup_env_class(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_env_class", 30, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___finalize_env_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = CPyDef_env_class___instantiate_env_class(cpy_r_builder);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "finalize_env_class", 61, CPyStatic_env_class___globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r2 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r1)->_is_nested;
    if (!cpy_r_r2) goto CPyL4;
CPyL2: ;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_ATTR(cpy_r_r3, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "finalize_env_class", 67, CPyStatic_env_class___globals);
        goto CPyL6;
    }
CPyL3: ;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_env_class___add_args_to_env(cpy_r_builder, 0, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "finalize_env_class", 67, CPyStatic_env_class___globals);
        goto CPyL6;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r7 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_env_class___add_args_to_env(cpy_r_builder, 0, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "finalize_env_class", 69, CPyStatic_env_class___globals);
        goto CPyL6;
    }
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_env_class___finalize_env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:finalize_env_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_env_class___finalize_env_class(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "finalize_env_class", 59, CPyStatic_env_class___globals);
    return NULL;
}

PyObject *CPyDef_env_class___instantiate_env_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_curr_env_reg;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 75, CPyStatic_env_class___globals);
        goto CPyL13;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r1)->_ctor;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ctor' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 75, CPyStatic_env_class___globals);
        goto CPyL13;
    }
CPyL2: ;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 75, CPyStatic_env_class___globals);
        goto CPyL14;
    }
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r5 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r4)->_fitem;
    cpy_r_r6 = ((mypy___nodes___FuncItemObject *)cpy_r_r5)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_ops___Call(cpy_r_r2, cpy_r_r3, cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 75, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    cpy_r_r8 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 74, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    cpy_r_curr_env_reg = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r10 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r9)->_is_nested;
    if (!cpy_r_r10) goto CPyL11;
CPyL6: ;
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_r11, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 79, CPyStatic_env_class___globals);
        goto CPyL15;
    }
CPyL7: ;
    CPy_INCREF(cpy_r_curr_env_reg);
    CPy_DECREF(((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r12)->__curr_env_reg);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r12)->__curr_env_reg = cpy_r_curr_env_reg;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 84, CPyStatic_env_class___globals);
        goto CPyL15;
    }
CPyL8: ;
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_context___ImplicitClass, 5, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* prev_env_reg */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 84, CPyStatic_env_class___globals);
        goto CPyL15;
    }
CPyL9: ;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r19 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r18)->_fitem;
    cpy_r_r20 = ((mypy___nodes___FuncItemObject *)cpy_r_r19)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_ops___SetAttr(cpy_r_curr_env_reg, cpy_r_r14, cpy_r_r17, cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 81, CPyStatic_env_class___globals);
        goto CPyL15;
    }
    cpy_r_r22 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 80, CPyStatic_env_class___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL11: ;
    cpy_r_r23 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_curr_env_reg);
    CPy_DECREF(((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r23)->__curr_env_reg);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r23)->__curr_env_reg = cpy_r_curr_env_reg;
CPyL12: ;
    return cpy_r_curr_env_reg;
CPyL13: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL14: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_curr_env_reg);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL12;
}

PyObject *CPyPy_env_class___instantiate_env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:instantiate_env_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *retval = CPyDef_env_class___instantiate_env_class(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "instantiate_env_class", 72, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___load_env_registers(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_fn_info;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_fitem;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = NULL;
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_env_class___add_args_to_env(cpy_r_builder, 1, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 102, CPyStatic_env_class___globals);
        goto CPyL9;
    }
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_fn_info = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r4);
    cpy_r_fitem = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_is_nested;
    if (!cpy_r_r5) goto CPyL10;
CPyL2: ;
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 107, CPyStatic_env_class___globals);
        goto CPyL11;
    }
CPyL3: ;
    cpy_r_r7 = CPyDef_env_class___load_outer_envs(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 107, CPyStatic_env_class___globals);
        goto CPyL11;
    }
    cpy_r_r8 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_fitem)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_fitem) == CPyType_nodes___FuncDef))
        cpy_r_r12 = cpy_r_fitem;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 111, CPyStatic_env_class___globals, "mypy.nodes.FuncDef", cpy_r_fitem);
        goto CPyL12;
    }
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_fn_info);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 111, CPyStatic_env_class___globals);
        goto CPyL13;
    }
CPyL7: ;
    cpy_r_r14 = CPyDef_env_class___setup_func_for_recursive_call(cpy_r_builder, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 111, CPyStatic_env_class___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DECREF(cpy_r_fn_info);
    CPy_DECREF(cpy_r_fitem);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_fitem);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL9;
}

PyObject *CPyPy_env_class___load_env_registers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:load_env_registers", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_env_class___load_env_registers(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_env_registers", 94, CPyStatic_env_class___globals);
    return NULL;
}

PyObject *CPyDef_env_class___load_outer_env(PyObject *cpy_r_builder, PyObject *cpy_r_base, PyObject *cpy_r_outer_env) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_env;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T4CIOO cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_symbol;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
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
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_symbol_target;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r2 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r1)->_fitem;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_r2)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_ops___GetAttr(cpy_r_base, cpy_r_r0, cpy_r_r3, cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 128, CPyStatic_env_class___globals);
        goto CPyL28;
    }
    cpy_r_r6 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 128, CPyStatic_env_class___globals);
        goto CPyL28;
    }
    cpy_r_env = cpy_r_r6;
    cpy_r_r7 = ((mypyc___ir___ops___ValueObject *)cpy_r_env)->_type;
    cpy_r_r8 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (cpy_r_r11) goto CPyL9;
    cpy_r_r12 = PyObject_Str(cpy_r_env);
    CPy_DECREF(cpy_r_env);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 129, CPyStatic_env_class___globals);
        goto CPyL28;
    }
    cpy_r_r13 = CPyStatics[8209]; /* ' must be of type RInstance' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 129, CPyStatic_env_class___globals);
        goto CPyL28;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 129, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 129, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r14);
    CPy_Raise(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 129, CPyStatic_env_class___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r21 = 0;
    cpy_r_r22 = PyDict_Size(cpy_r_outer_env);
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = CPyDict_GetItemsIter(cpy_r_outer_env);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 131, CPyStatic_env_class___globals);
        goto CPyL30;
    }
CPyL10: ;
    cpy_r_r25 = CPyDict_NextItem(cpy_r_r24, cpy_r_r21);
    cpy_r_r26 = cpy_r_r25.f1;
    cpy_r_r21 = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f0;
    if (!cpy_r_r27) goto CPyL31;
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = cpy_r_r25.f3;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    if (likely(PyObject_TypeCheck(cpy_r_r28, CPyType_nodes___SymbolNode)))
        cpy_r_r30 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 131, CPyStatic_env_class___globals, "mypy.nodes.SymbolNode", cpy_r_r28);
        goto CPyL32;
    }
    if (Py_TYPE(cpy_r_r29) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r31 = cpy_r_r29;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL10098;
    if (Py_TYPE(cpy_r_r29) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r31 = cpy_r_r29;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL10098;
    CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 131, CPyStatic_env_class___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r29);
    goto CPyL33;
__LL10098: ;
    cpy_r_symbol = cpy_r_r30;
    cpy_r_target = cpy_r_r31;
    cpy_r_r32 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r36 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 132, CPyStatic_env_class___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL34;
    }
    cpy_r_r37 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r36)->_type;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37;
    goto CPyL18;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r39 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 132, CPyStatic_env_class___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL34;
    }
    cpy_r_r40 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r39)->_type;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r38 = cpy_r_r40;
CPyL18: ;
    cpy_r_r41 = ((mypyc___ir___ops___ValueObject *)cpy_r_env)->_type;
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_rtypes___RInstance))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 132, CPyStatic_env_class___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r41);
        goto CPyL35;
    }
    cpy_r_r43 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r42)->_class_ir;
    cpy_r_r44 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r43)->_attributes;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/env_class.py", "load_outer_env", "ClassIR", "attributes", 132, CPyStatic_env_class___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r44);
CPyL20: ;
    cpy_r_r45 = CPY_GET_ATTR_TRAIT(cpy_r_symbol, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 132, CPyStatic_env_class___globals);
        goto CPyL36;
    }
CPyL21: ;
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r38);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 132, CPyStatic_env_class___globals);
        goto CPyL34;
    }
    cpy_r_r48 = CPY_GET_ATTR_TRAIT(cpy_r_symbol, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 133, CPyStatic_env_class___globals);
        goto CPyL34;
    }
CPyL23: ;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_targets___AssignmentTargetAttr(cpy_r_env, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 133, CPyStatic_env_class___globals);
        goto CPyL34;
    }
    cpy_r_symbol_target = cpy_r_r50;
    cpy_r_r51 = CPyDef_builder___IRBuilder___add_target(cpy_r_builder, cpy_r_symbol, cpy_r_symbol_target);
    CPy_DECREF(cpy_r_symbol);
    CPy_DECREF(cpy_r_symbol_target);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 134, CPyStatic_env_class___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL25: ;
    cpy_r_r52 = CPyDict_CheckSize(cpy_r_outer_env, cpy_r_r23);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 131, CPyStatic_env_class___globals);
        goto CPyL37;
    } else
        goto CPyL10;
CPyL26: ;
    cpy_r_r53 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 131, CPyStatic_env_class___globals);
        goto CPyL30;
    }
    return cpy_r_env;
CPyL28: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL29: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_env);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r29);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r30);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_symbol);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_symbol);
    CPy_DecRef(cpy_r_r38);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_symbol);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r44);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_env);
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL38: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL25;
}

PyObject *CPyPy_env_class___load_outer_env(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base", "outer_env", 0};
    static CPyArg_Parser parser = {"OOO:load_outer_env", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base;
    PyObject *obj_outer_env;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_base, &obj_outer_env)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(PyObject_TypeCheck(obj_base, CPyType_ops___Value)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_base); 
        goto fail;
    }
    PyObject *arg_outer_env;
    if (likely(PyDict_Check(obj_outer_env)))
        arg_outer_env = obj_outer_env;
    else {
        CPy_TypeError("dict", obj_outer_env); 
        goto fail;
    }
    PyObject *retval = CPyDef_env_class___load_outer_env(arg_builder, arg_base, arg_outer_env);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_env", 114, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___load_outer_envs(PyObject *cpy_r_builder, PyObject *cpy_r_base) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_env_reg;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_index;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_outer_env;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = NULL;
    cpy_r_env_reg = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builders;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyTagged_Subtract(cpy_r_r4, 4);
    cpy_r_index = cpy_r_r5;
    cpy_r_r6 = cpy_r_index & 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL2;
    cpy_r_r8 = CPyTagged_IsLt_(2, cpy_r_index);
    if (cpy_r_r8) {
        goto CPyL28;
    } else
        goto CPyL16;
CPyL2: ;
    cpy_r_r9 = (Py_ssize_t)cpy_r_index > (Py_ssize_t)2;
    if (cpy_r_r9) {
        goto CPyL28;
    } else
        goto CPyL16;
CPyL3: ;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r11 = CPyList_GetItem(cpy_r_r10, cpy_r_index);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 146, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 146, CPyStatic_env_class___globals, "dict", cpy_r_r11);
        goto CPyL29;
    }
    cpy_r_outer_env = cpy_r_r12;
    cpy_r_r13 = (PyObject *)CPyType_context___GeneratorClass;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL11;
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass))
        cpy_r_r17 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 148, CPyStatic_env_class___globals, "mypyc.irbuild.context.GeneratorClass", cpy_r_base);
        goto CPyL30;
    }
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_r17, CPyType_context___GeneratorClass, 3, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 148, CPyStatic_env_class___globals);
        goto CPyL30;
    }
CPyL8: ;
    cpy_r_r19 = CPyDef_env_class___load_outer_env(cpy_r_builder, cpy_r_r18, cpy_r_outer_env);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_outer_env);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 148, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass))
        cpy_r_r20 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 148, CPyStatic_env_class___globals, "mypyc.irbuild.context.GeneratorClass", cpy_r_base);
        goto CPyL31;
    }
    cpy_r_r21 = CPY_SET_ATTR(cpy_r_r20, CPyType_context___GeneratorClass, 6, cpy_r_r19, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* prev_env_reg */
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 148, CPyStatic_env_class___globals);
        goto CPyL29;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_base, CPyType_context___ImplicitClass, 1, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* self_reg */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 150, CPyStatic_env_class___globals);
        goto CPyL30;
    }
CPyL12: ;
    cpy_r_r23 = CPyDef_env_class___load_outer_env(cpy_r_builder, cpy_r_r22, cpy_r_outer_env);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_outer_env);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 150, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    cpy_r_r24 = CPY_SET_ATTR(cpy_r_base, CPyType_context___ImplicitClass, 6, cpy_r_r23, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* prev_env_reg */
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 150, CPyStatic_env_class___globals);
        goto CPyL29;
    }
CPyL14: ;
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_base, CPyType_context___ImplicitClass, 5, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* prev_env_reg */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 151, CPyStatic_env_class___globals);
        goto CPyL29;
    }
CPyL15: ;
    cpy_r_env_reg = cpy_r_r25;
    cpy_r_r26 = CPyTagged_Subtract(cpy_r_index, 2);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_index = cpy_r_r26;
CPyL16: ;
    cpy_r_r27 = cpy_r_index & 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (!cpy_r_r28) goto CPyL18;
    cpy_r_r29 = CPyTagged_IsLt_(2, cpy_r_index);
    if (cpy_r_r29) {
        goto CPyL19;
    } else
        goto CPyL32;
CPyL18: ;
    cpy_r_r30 = (Py_ssize_t)cpy_r_index > (Py_ssize_t)2;
    if (!cpy_r_r30) goto CPyL32;
CPyL19: ;
    cpy_r_r31 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r32 = CPyList_GetItem(cpy_r_r31, cpy_r_index);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 157, CPyStatic_env_class___globals);
        goto CPyL33;
    }
    if (likely(PyDict_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 157, CPyStatic_env_class___globals, "dict", cpy_r_r32);
        goto CPyL33;
    }
    cpy_r_outer_env = cpy_r_r33;
    if (cpy_r_env_reg == NULL) {
        goto CPyL34;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"env_reg\" referenced before assignment");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 158, CPyStatic_env_class___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r35 = CPyDef_env_class___load_outer_env(cpy_r_builder, cpy_r_env_reg, cpy_r_outer_env);
    CPy_XDECREF(cpy_r_env_reg);
    CPy_DECREF(cpy_r_outer_env);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 158, CPyStatic_env_class___globals);
        goto CPyL29;
    }
    cpy_r_env_reg = cpy_r_r35;
    cpy_r_r36 = CPyTagged_Subtract(cpy_r_index, 2);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_index = cpy_r_r36;
    goto CPyL16;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL28: ;
    CPy_XDECREF(cpy_r_env_reg);
    goto CPyL3;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL27;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_outer_env);
    goto CPyL27;
CPyL31: ;
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_r19);
    goto CPyL27;
CPyL32: ;
    CPy_XDECREF(cpy_r_env_reg);
    CPyTagged_DECREF(cpy_r_index);
    goto CPyL26;
CPyL33: ;
    CPy_XDecRef(cpy_r_env_reg);
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL27;
CPyL34: ;
    CPyTagged_DECREF(cpy_r_index);
    CPy_DECREF(cpy_r_outer_env);
    goto CPyL22;
}

PyObject *CPyPy_env_class___load_outer_envs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base", 0};
    static CPyArg_Parser parser = {"OO:load_outer_envs", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_base)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely((Py_TYPE(obj_base) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_base) == CPyType_context___ImplicitClass)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_base); 
        goto fail;
    }
    char retval = CPyDef_env_class___load_outer_envs(arg_builder, arg_base);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "load_outer_envs", 139, CPyStatic_env_class___globals);
    return NULL;
}

CPyTagged CPyDef_env_class___num_bitmap_args(PyObject *cpy_r_builder, PyObject *cpy_r_args) {
    CPyTagged cpy_r_n;
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_t;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    cpy_r_n = 0;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL10;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___Argument))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 164, CPyStatic_env_class___globals, "mypy.nodes.Argument", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_arg = cpy_r_r6;
    cpy_r_r7 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r8 = ((mypy___nodes___VarObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 165, CPyStatic_env_class___globals);
        goto CPyL14;
    }
    cpy_r_t = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_t)->_error_overlap;
    CPy_DECREF(cpy_r_t);
    if (!cpy_r_r10) goto CPyL15;
CPyL5: ;
    cpy_r_r11 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r12 = CPyStatics[1075]; /* 'is_optional' */
    PyObject *cpy_r_r13[1] = {cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 166, CPyStatic_env_class___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!PyBool_Check(cpy_r_r15))) {
        CPy_TypeError("bool", cpy_r_r15); cpy_r_r16 = 2;
    } else
        cpy_r_r16 = cpy_r_r15 == Py_True;
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 166, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    if (!cpy_r_r16) goto CPyL9;
    cpy_r_r17 = CPyTagged_Add(cpy_r_n, 2);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r18;
    goto CPyL1;
CPyL10: ;
    cpy_r_r19 = CPyTagged_Add(cpy_r_n, 62);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_r20 = CPyTagged_FloorDivide(cpy_r_r19, 64);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 168, CPyStatic_env_class___globals);
        goto CPyL12;
    }
    return cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = CPY_INT_TAG;
    return cpy_r_r21;
CPyL13: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL12;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_arg);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL9;
CPyL16: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r11);
    goto CPyL12;
}

PyObject *CPyPy_env_class___num_bitmap_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "args", 0};
    static CPyArg_Parser parser = {"OO:num_bitmap_args", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_args)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    CPyTagged retval = CPyDef_env_class___num_bitmap_args(arg_builder, arg_args);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "num_bitmap_args", 162, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___add_args_to_env(PyObject *cpy_r_builder, char cpy_r_local, PyObject *cpy_r_base, char cpy_r_reassign) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fn_info;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_args;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_nb;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    if (cpy_r_local != 2) goto CPyL2;
    cpy_r_local = 1;
CPyL2: ;
    if (cpy_r_base != NULL) goto CPyL45;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_base = cpy_r_r0;
CPyL4: ;
    if (cpy_r_reassign != 2) goto CPyL6;
    cpy_r_reassign = 1;
CPyL6: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_fn_info = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_r2)->_arguments;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/env_class.py", "add_args_to_env", "FuncItem", "arguments", 178, CPyStatic_env_class___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r3);
CPyL7: ;
    cpy_r_args = cpy_r_r3;
    cpy_r_r4 = CPyDef_env_class___num_bitmap_args(cpy_r_builder, cpy_r_args);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 179, CPyStatic_env_class___globals);
        goto CPyL47;
    }
    cpy_r_nb = cpy_r_r4;
    if (cpy_r_local) {
        goto CPyL48;
    } else
        goto CPyL49;
CPyL9: ;
    cpy_r_r5 = 0;
CPyL10: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL50;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_nodes___Argument))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 181, CPyStatic_env_class___globals, "mypy.nodes.Argument", cpy_r_r10);
        goto CPyL51;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r13 = ((mypy___nodes___VarObject *)cpy_r_r12)->_type;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 182, CPyStatic_env_class___globals);
        goto CPyL52;
    }
    cpy_r_rtype = cpy_r_r14;
    cpy_r_r15 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r16 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_builder, cpy_r_r15, cpy_r_rtype, 1);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 183, CPyStatic_env_class___globals);
        goto CPyL51;
    } else
        goto CPyL53;
CPyL14: ;
    cpy_r_r17 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r17;
    goto CPyL10;
CPyL15: ;
    cpy_r_r18 = (PyObject *)&PyRange_Type;
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_nb);
    PyObject *cpy_r_r20[1] = {cpy_r_r19};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r21, 1, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyRange_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals, "range", cpy_r_r22);
        goto CPyL44;
    }
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_r30 = PyObject_GetIter(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL44;
    }
CPyL20: ;
    cpy_r_r31 = PyIter_Next(cpy_r_r30);
    if (cpy_r_r31 == NULL) goto CPyL56;
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL57;
    }
    cpy_r_i = cpy_r_r32;
    cpy_r_r33 = CPyDef_mypyc___common___bitmap_name(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 185, CPyStatic_env_class___globals);
        goto CPyL57;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_nodes___Var(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 185, CPyStatic_env_class___globals);
        goto CPyL57;
    }
    cpy_r_r36 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL58;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 185, CPyStatic_env_class___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r38 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_builder, cpy_r_r35, cpy_r_r36, 1);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 185, CPyStatic_env_class___globals);
        goto CPyL57;
    } else
        goto CPyL59;
CPyL28: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 184, CPyStatic_env_class___globals);
        goto CPyL44;
    } else
        goto CPyL43;
CPyL29: ;
    cpy_r_r40 = 0;
CPyL30: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL60;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_nodes___Argument))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 187, CPyStatic_env_class___globals, "mypy.nodes.Argument", cpy_r_r45);
        goto CPyL47;
    }
    cpy_r_arg = cpy_r_r46;
    cpy_r_r47 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_env_class___is_free_variable(cpy_r_builder, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 188, CPyStatic_env_class___globals);
        goto CPyL61;
    }
    if (cpy_r_r48) goto CPyL36;
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 188, CPyStatic_env_class___globals);
        goto CPyL61;
    }
CPyL35: ;
    if (!cpy_r_r49) goto CPyL62;
CPyL36: ;
    cpy_r_r50 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r51 = ((mypy___nodes___VarObject *)cpy_r_r50)->_type;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 189, CPyStatic_env_class___globals);
        goto CPyL61;
    }
    cpy_r_rtype = cpy_r_r52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r54 = cpy_r_base != cpy_r_r53;
    if (cpy_r_r54) {
        goto CPyL40;
    } else
        goto CPyL63;
CPyL38: ;
    PyErr_SetString(PyExc_AssertionError, "base cannot be None for adding nonlocal args");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 190, CPyStatic_env_class___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r56 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_arg);
    CPy_INCREF(cpy_r_base);
    if (Py_TYPE(cpy_r_base) == CPyType_context___FuncInfo)
        cpy_r_r57 = cpy_r_base;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL10099;
    if ((Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass) || (Py_TYPE(cpy_r_base) == CPyType_context___ImplicitClass))
        cpy_r_r57 = cpy_r_base;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL10099;
    CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 191, CPyStatic_env_class___globals, "union[mypyc.irbuild.context.FuncInfo, mypyc.irbuild.context.ImplicitClass]", cpy_r_base);
    goto CPyL64;
__LL10099: ;
    cpy_r_r58 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_builder, cpy_r_r56, cpy_r_rtype, cpy_r_r57, cpy_r_reassign);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_rtype);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 191, CPyStatic_env_class___globals);
        goto CPyL47;
    } else
        goto CPyL65;
CPyL42: ;
    cpy_r_r59 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r59;
    goto CPyL30;
CPyL43: ;
    return 1;
CPyL44: ;
    cpy_r_r60 = 2;
    return cpy_r_r60;
CPyL45: ;
    CPy_INCREF(cpy_r_base);
    goto CPyL4;
CPyL46: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_args);
    goto CPyL44;
CPyL48: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_fn_info);
    goto CPyL9;
CPyL49: ;
    CPyTagged_DECREF(cpy_r_nb);
    goto CPyL29;
CPyL50: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL15;
CPyL51: ;
    CPy_DecRef(cpy_r_args);
    CPyTagged_DecRef(cpy_r_nb);
    goto CPyL44;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPyTagged_DecRef(cpy_r_nb);
    CPy_DecRef(cpy_r_arg);
    goto CPyL44;
CPyL53: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL14;
CPyL54: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL44;
CPyL56: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL28;
CPyL57: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL44;
CPyL58: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r35);
    goto CPyL25;
CPyL59: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL20;
CPyL60: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_fn_info);
    CPy_DECREF(cpy_r_args);
    goto CPyL43;
CPyL61: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    goto CPyL44;
CPyL62: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL42;
CPyL63: ;
    CPy_DECREF(cpy_r_base);
    CPy_DECREF(cpy_r_fn_info);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL38;
CPyL64: ;
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_r56);
    goto CPyL44;
CPyL65: ;
    CPy_DECREF(cpy_r_r58);
    goto CPyL42;
}

PyObject *CPyPy_env_class___add_args_to_env(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "local", "base", "reassign", 0};
    static CPyArg_Parser parser = {"O|OOO:add_args_to_env", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_local = NULL;
    PyObject *obj_base = NULL;
    PyObject *obj_reassign = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_local, &obj_base, &obj_reassign)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char arg_local;
    if (obj_local == NULL) {
        arg_local = 2;
    } else if (unlikely(!PyBool_Check(obj_local))) {
        CPy_TypeError("bool", obj_local); goto fail;
    } else
        arg_local = obj_local == Py_True;
    PyObject *arg_base;
    if (obj_base == NULL) {
        arg_base = NULL;
        goto __LL10100;
    }
    if (Py_TYPE(obj_base) == CPyType_context___FuncInfo)
        arg_base = obj_base;
    else {
        arg_base = NULL;
    }
    if (arg_base != NULL) goto __LL10100;
    if ((Py_TYPE(obj_base) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_base) == CPyType_context___ImplicitClass))
        arg_base = obj_base;
    else {
        arg_base = NULL;
    }
    if (arg_base != NULL) goto __LL10100;
    if (obj_base == Py_None)
        arg_base = obj_base;
    else {
        arg_base = NULL;
    }
    if (arg_base != NULL) goto __LL10100;
    CPy_TypeError("union[mypyc.irbuild.context.FuncInfo, mypyc.irbuild.context.ImplicitClass, None]", obj_base); 
    goto fail;
__LL10100: ;
    char arg_reassign;
    if (obj_reassign == NULL) {
        arg_reassign = 2;
    } else if (unlikely(!PyBool_Check(obj_reassign))) {
        CPy_TypeError("bool", obj_reassign); goto fail;
    } else
        arg_reassign = obj_reassign == Py_True;
    char retval = CPyDef_env_class___add_args_to_env(arg_builder, arg_local, arg_base, arg_reassign);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "add_args_to_env", 171, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___setup_func_for_recursive_call(PyObject *cpy_r_builder, PyObject *cpy_r_fdef, PyObject *cpy_r_base) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_prev_env;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_prev_env_reg;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_target;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_infos;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -4);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 203, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_context___FuncInfo))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 203, CPyStatic_env_class___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r1);
        goto CPyL24;
    }
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_r2, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 203, CPyStatic_env_class___globals);
        goto CPyL24;
    }
CPyL3: ;
    cpy_r_prev_env = cpy_r_r3;
    cpy_r_r4 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 204, CPyStatic_env_class___globals);
        goto CPyL25;
    }
    cpy_r_r6 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_prev_env)->_attributes;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'attributes' of 'ClassIR' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_prev_env);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 204, CPyStatic_env_class___globals);
        goto CPyL26;
    }
CPyL5: ;
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 204, CPyStatic_env_class___globals);
        goto CPyL27;
    }
CPyL6: ;
    cpy_r_r8 = CPyDict_SetItem(cpy_r_r6, cpy_r_r7, cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 204, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    cpy_r_r10 = (PyObject *)CPyType_context___GeneratorClass;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_base)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL13;
    CPy_INCREF(cpy_r_base);
    if (likely(Py_TYPE(cpy_r_base) == CPyType_context___GeneratorClass))
        cpy_r_r14 = cpy_r_base;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 210, CPyStatic_env_class___globals, "mypyc.irbuild.context.GeneratorClass", cpy_r_base);
        goto CPyL24;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_context___GeneratorClass, 3, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* curr_env_reg */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 210, CPyStatic_env_class___globals);
        goto CPyL24;
    }
CPyL10: ;
    cpy_r_r16 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_ops___GetAttr(cpy_r_r15, cpy_r_r16, -2, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 210, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    cpy_r_r19 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 210, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    cpy_r_prev_env_reg = cpy_r_r19;
    goto CPyL15;
CPyL13: ;
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_base, CPyType_context___ImplicitClass, 5, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* prev_env_reg */
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 212, CPyStatic_env_class___globals);
        goto CPyL24;
    }
CPyL14: ;
    cpy_r_prev_env_reg = cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 216, CPyStatic_env_class___globals);
        goto CPyL28;
    }
CPyL16: ;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_ops___GetAttr(cpy_r_prev_env_reg, cpy_r_r21, -2, cpy_r_r22);
    CPy_DECREF(cpy_r_prev_env_reg);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 216, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 216, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    cpy_r_val = cpy_r_r24;
    cpy_r_r25 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL29;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 217, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_builder, cpy_r_fdef, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 217, CPyStatic_env_class___globals);
        goto CPyL30;
    }
    cpy_r_target = cpy_r_r28;
    cpy_r_r29 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_val, -2);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 218, CPyStatic_env_class___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL25: ;
    CPy_DecRef(cpy_r_prev_env);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_prev_env_reg);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL19;
CPyL30: ;
    CPy_DecRef(cpy_r_val);
    goto CPyL24;
}

PyObject *CPyPy_env_class___setup_func_for_recursive_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fdef", "base", 0};
    static CPyArg_Parser parser = {"OOO:setup_func_for_recursive_call", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fdef;
    PyObject *obj_base;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fdef, &obj_base)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely((Py_TYPE(obj_base) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_base) == CPyType_context___ImplicitClass)))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_base); 
        goto fail;
    }
    char retval = CPyDef_env_class___setup_func_for_recursive_call(arg_builder, arg_fdef, arg_base);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "setup_func_for_recursive_call", 194, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class___is_free_variable(PyObject *cpy_r_builder, PyObject *cpy_r_symbol) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fitem;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r0)->_fitem;
    CPy_INCREF(cpy_r_r1);
    cpy_r_fitem = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_free_variables;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyDict_Contains(cpy_r_r2, cpy_r_fitem);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "is_free_variable", 223, CPyStatic_env_class___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) {
        goto CPyL3;
    } else
        goto CPyL10;
CPyL2: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL3: ;
    cpy_r_r7 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_free_variables;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r7, cpy_r_fitem);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_fitem);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "is_free_variable", 223, CPyStatic_env_class___globals);
        goto CPyL8;
    }
    if (likely(PySet_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/env_class.py", "is_free_variable", 223, CPyStatic_env_class___globals, "set", cpy_r_r8);
        goto CPyL8;
    }
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_symbol);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "is_free_variable", 223, CPyStatic_env_class___globals);
        goto CPyL8;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r6 = cpy_r_r12;
CPyL7: ;
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_fitem);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_fitem);
    goto CPyL2;
}

PyObject *CPyPy_env_class___is_free_variable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "symbol", 0};
    static CPyArg_Parser parser = {"OO:is_free_variable", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_symbol;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_symbol)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_symbol;
    if (likely(PyObject_TypeCheck(obj_symbol, CPyType_nodes___SymbolNode)))
        arg_symbol = obj_symbol;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_symbol); 
        goto fail;
    }
    char retval = CPyDef_env_class___is_free_variable(arg_builder, arg_symbol);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/env_class.py", "is_free_variable", 221, CPyStatic_env_class___globals);
    return NULL;
}

char CPyDef_env_class_____top_level__(void) {
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
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", -1, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_env_class___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 18, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10083]; /* ('Argument', 'FuncDef', 'SymbolNode', 'Var') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_env_class___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 20, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10084]; /* ('BITMAP_BITS', 'ENV_ATTR_NAME', 'SELF_NAME',
                                      'bitmap_name') */
    cpy_r_r14 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r15 = CPyStatic_env_class___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 21, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___common = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r18 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r19 = CPyStatic_env_class___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 22, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10085]; /* ('Call', 'GetAttr', 'SetAttr', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_env_class___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 23, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10086]; /* ('RInstance', 'bitmap_rprimitive', 'object_rprimitive') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_env_class___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 24, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10087]; /* ('IRBuilder', 'SymbolTarget') */
    cpy_r_r30 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r31 = CPyStatic_env_class___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 25, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10088]; /* ('FuncInfo', 'GeneratorClass', 'ImplicitClass') */
    cpy_r_r34 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r35 = CPyStatic_env_class___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 26, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___irbuild___context = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___irbuild___context);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10089]; /* ('AssignmentTargetAttr',) */
    cpy_r_r38 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r39 = CPyStatic_env_class___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/env_class.py", "<module>", 27, CPyStatic_env_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r40);
    return 1;
CPyL13: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
}
