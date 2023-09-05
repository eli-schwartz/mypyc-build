#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef callable_classmodule_methods[] = {
    {"setup_callable_class", (PyCFunction)CPyPy_callable_class___setup_callable_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_call_to_callable_class", (PyCFunction)CPyPy_callable_class___add_call_to_callable_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_get_to_callable_class", (PyCFunction)CPyPy_callable_class___add_get_to_callable_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"instantiate_callable_class", (PyCFunction)CPyPy_callable_class___instantiate_callable_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef callable_classmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.callable_class",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    callable_classmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___callable_class(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___callable_class_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___callable_class_internal);
        return CPyModule_mypyc___irbuild___callable_class_internal;
    }
    CPyModule_mypyc___irbuild___callable_class_internal = PyModule_Create(&callable_classmodule);
    if (unlikely(CPyModule_mypyc___irbuild___callable_class_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___callable_class_internal, "__name__");
    CPyStatic_callable_class___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___callable_class_internal);
    if (unlikely(CPyStatic_callable_class___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_callable_class_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___callable_class_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___callable_class_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_callable_class___setup_callable_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    PyObject *cpy_r_base_name;
    CPyTagged cpy_r_count;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_callable_class_ir;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_self_target;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_context___FuncInfo___namespaced_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 48, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    cpy_r_r2 = CPyStatics[8136]; /* '_obj' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 48, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r3);
    cpy_r_name = cpy_r_r3;
    cpy_r_base_name = cpy_r_r3;
    cpy_r_count = 0;
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_callable_class_names;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PySet_Contains(cpy_r_r4, cpy_r_name);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 50, CPyStatic_callable_class___globals);
        goto CPyL34;
    }
    cpy_r_r7 = cpy_r_r5;
    if (cpy_r_r7) {
        goto CPyL35;
    } else
        goto CPyL36;
CPyL5: ;
    cpy_r_r8 = CPyStatics[755]; /* '_' */
    cpy_r_r9 = PyUnicode_Concat(cpy_r_base_name, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 51, CPyStatic_callable_class___globals);
        goto CPyL37;
    }
    cpy_r_r10 = CPyTagged_Str(cpy_r_count);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 51, CPyStatic_callable_class___globals);
        goto CPyL38;
    }
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 51, CPyStatic_callable_class___globals);
        goto CPyL37;
    }
    cpy_r_name = cpy_r_r11;
    cpy_r_r12 = CPyTagged_Add(cpy_r_count, 2);
    CPyTagged_DECREF(cpy_r_count);
    cpy_r_count = cpy_r_r12;
    goto CPyL3;
CPyL9: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_callable_class_names;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PySet_Add(cpy_r_r13, cpy_r_name);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 53, CPyStatic_callable_class___globals);
        goto CPyL39;
    }
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "setup_callable_class", "IRBuilder", "module_name", 58, CPyStatic_callable_class___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r16);
CPyL11: ;
    cpy_r_r17 = 2;
    cpy_r_r18 = 2;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_class_ir___ClassIR(cpy_r_name, cpy_r_r16, cpy_r_r17, 1, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 58, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    cpy_r_callable_class_ir = cpy_r_r20;
    cpy_r_r21 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r22 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r21)->_is_nested;
    if (!cpy_r_r22) goto CPyL14;
CPyL13: ;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_callable_class_ir)->_has_dict = 1;
CPyL14: ;
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_infos;
    cpy_r_r25 = CPyList_GetItemShortBorrow(cpy_r_r24, -4);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 69, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_context___FuncInfo))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 69, CPyStatic_callable_class___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r25);
        goto CPyL40;
    }
    cpy_r_r27 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r26)->_contains_nested;
    if (!cpy_r_r27) goto CPyL23;
CPyL17: ;
    cpy_r_r28 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_infos;
    cpy_r_r29 = CPyList_GetItemShortBorrow(cpy_r_r28, -4);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 70, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_context___FuncInfo))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 70, CPyStatic_callable_class___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r29);
        goto CPyL40;
    }
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 70, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
CPyL20: ;
    cpy_r_r32 = CPyDef_rtypes___RInstance(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 70, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r33 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_callable_class_ir)->_attributes;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "setup_callable_class", "ClassIR", "attributes", 70, CPyStatic_callable_class___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r33);
CPyL22: ;
    cpy_r_r34 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 70, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
CPyL23: ;
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 71, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    CPy_INCREF(cpy_r_callable_class_ir);
    *(PyObject * *)cpy_r_r39 = cpy_r_callable_class_ir;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_callable_class_ir)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_callable_class_ir)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_callable_class_ir)->_mro = cpy_r_r37;
    cpy_r_r40 = 1;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 71, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r41 = CPyDef_context___ImplicitClass(cpy_r_callable_class_ir);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 72, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r43 = CPY_SET_ATTR(cpy_r_r42, CPyType_context___FuncInfo, 5, cpy_r_r41, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 72, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyList_Append(cpy_r_r44, cpy_r_callable_class_ir);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 73, CPyStatic_callable_class___globals);
        goto CPyL40;
    }
    cpy_r_r47 = CPyDef_builder___IRBuilder___add_self_to_env(cpy_r_builder, cpy_r_callable_class_ir);
    CPy_DECREF(cpy_r_callable_class_ir);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 77, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    cpy_r_self_target = cpy_r_r47;
    cpy_r_r48 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r49 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r48)->_fitem;
    cpy_r_r50 = ((mypy___nodes___FuncItemObject *)cpy_r_r49)->_line;
    CPyTagged_INCREF(cpy_r_r50);
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_self_target, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_self_target);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 78, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    cpy_r_r53 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r54 = CPY_GET_ATTR(cpy_r_r53, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 78, CPyStatic_callable_class___globals);
        goto CPyL42;
    }
CPyL31: ;
    cpy_r_r55 = CPY_SET_ATTR(cpy_r_r54, CPyType_context___ImplicitClass, 2, cpy_r_r52, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* self_reg */
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 78, CPyStatic_callable_class___globals);
        goto CPyL33;
    }
    return 1;
CPyL33: ;
    cpy_r_r56 = 2;
    return cpy_r_r56;
CPyL34: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_base_name);
    CPyTagged_DecRef(cpy_r_count);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL5;
CPyL36: ;
    CPy_DECREF(cpy_r_base_name);
    CPyTagged_DECREF(cpy_r_count);
    goto CPyL9;
CPyL37: ;
    CPy_DecRef(cpy_r_base_name);
    CPyTagged_DecRef(cpy_r_count);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_base_name);
    CPyTagged_DecRef(cpy_r_count);
    CPy_DecRef(cpy_r_r9);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_callable_class_ir);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_callable_class_ir);
    CPy_DecRef(cpy_r_r32);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL33;
}

PyObject *CPyPy_callable_class___setup_callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:setup_callable_class", kwlist, 0};
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
    char retval = CPyDef_callable_class___setup_callable_class(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/callable_class.py", "setup_callable_class", 19, CPyStatic_callable_class___globals);
    return NULL;
}

PyObject *CPyDef_callable_class___add_call_to_callable_class(PyObject *cpy_r_builder, PyObject *cpy_r_args, PyObject *cpy_r_blocks, PyObject *cpy_r_sig, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_nargs;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T1O cpy_r_r12;
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
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_call_fn_decl;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_call_fn_ir;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_num_bitmap_args;
    cpy_r_r5 = CPyTagged_Subtract(cpy_r_r3, cpy_r_r4);
    cpy_r_nargs = cpy_r_r5;
    cpy_r_r6 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r7 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL22;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_func_ir___RuntimeArg(cpy_r_r6, cpy_r_r7, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals);
        goto CPyL23;
    }
    cpy_r_r12.f0 = cpy_r_r11;
    CPy_INCREF(cpy_r_r12.f0);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_args;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPySequenceTuple_GetSlice(cpy_r_r13, 0, cpy_r_nargs);
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_nargs);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals);
        goto CPyL24;
    }
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals, "tuple", cpy_r_r14);
        goto CPyL24;
    }
    cpy_r_r16 = PyTuple_New(1);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9999 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp9999);
    cpy_r_r17 = PyNumber_Add(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals);
        goto CPyL21;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 97, CPyStatic_callable_class___globals, "tuple", cpy_r_r17);
        goto CPyL21;
    }
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_func_ir___FuncSignature(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 96, CPyStatic_callable_class___globals);
        goto CPyL21;
    }
    cpy_r_sig = cpy_r_r20;
    cpy_r_r21 = CPyStatics[706]; /* '__call__' */
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 99, CPyStatic_callable_class___globals);
        goto CPyL25;
    }
CPyL10: ;
    cpy_r_r23 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r22)->_ir;
    cpy_r_r24 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r23)->_name;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", "IRBuilder", "module_name", 99, CPyStatic_callable_class___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r25);
CPyL11: ;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = 2;
    cpy_r_r28 = 2;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_func_ir___FuncDecl(cpy_r_r21, cpy_r_r24, cpy_r_r25, cpy_r_sig, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_sig);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 99, CPyStatic_callable_class___globals);
        goto CPyL21;
    }
    cpy_r_call_fn_decl = cpy_r_r30;
    cpy_r_r31 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r32 = ((mypy___nodes___FuncItemObject *)cpy_r_r31)->_line;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_r33 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_r33, CPyType_nodes___FuncItem, 6, mypy___nodes___FuncItemObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 101, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL13: ;
    cpy_r_r35 = CPyDef_func_ir___FuncIR(cpy_r_call_fn_decl, cpy_r_args, cpy_r_blocks, cpy_r_r32, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 100, CPyStatic_callable_class___globals);
        goto CPyL28;
    }
    cpy_r_call_fn_ir = cpy_r_r35;
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 103, CPyStatic_callable_class___globals);
        goto CPyL29;
    }
CPyL15: ;
    cpy_r_r37 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r36)->_ir;
    cpy_r_r38 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r37)->_methods;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", "ClassIR", "methods", 103, CPyStatic_callable_class___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r38);
CPyL16: ;
    cpy_r_r39 = CPyStatics[706]; /* '__call__' */
    cpy_r_r40 = CPyDict_SetItem(cpy_r_r38, cpy_r_r39, cpy_r_call_fn_ir);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 103, CPyStatic_callable_class___globals);
        goto CPyL29;
    }
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 104, CPyStatic_callable_class___globals);
        goto CPyL29;
    }
CPyL18: ;
    cpy_r_r43 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r42)->_ir;
    cpy_r_r44 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r43)->_method_decls;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", "ClassIR", "method_decls", 104, CPyStatic_callable_class___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r44);
CPyL19: ;
    cpy_r_r45 = CPyStatics[706]; /* '__call__' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_call_fn_decl);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_call_fn_decl);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 104, CPyStatic_callable_class___globals);
        goto CPyL30;
    }
    return cpy_r_call_fn_ir;
CPyL21: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL22: ;
    CPyTagged_DecRef(cpy_r_nargs);
    goto CPyL1;
CPyL23: ;
    CPyTagged_DecRef(cpy_r_nargs);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r12.f0);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_call_fn_decl);
    CPyTagged_DecRef(cpy_r_r32);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_call_fn_decl);
    goto CPyL21;
CPyL29: ;
    CPy_DecRef(cpy_r_call_fn_decl);
    CPy_DecRef(cpy_r_call_fn_ir);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_call_fn_ir);
    goto CPyL21;
}

PyObject *CPyPy_callable_class___add_call_to_callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "args", "blocks", "sig", "fn_info", 0};
    static CPyArg_Parser parser = {"OOOOO:add_call_to_callable_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_args;
    PyObject *obj_blocks;
    PyObject *obj_sig;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_args, &obj_blocks, &obj_sig, &obj_fn_info)) {
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
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_callable_class___add_call_to_callable_class(arg_builder, arg_args, arg_blocks, arg_sig, arg_fn_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_call_to_callable_class", 81, CPyStatic_callable_class___globals);
    return NULL;
}

char CPyDef_callable_class___add_get_to_callable_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_instance;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_instance_block;
    PyObject *cpy_r_class_block;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_comparison;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    tuple_T3OOO cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    tuple_T3OOO cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_r0)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_line = cpy_r_r1;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 112, CPyStatic_callable_class___globals);
        goto CPyL61;
    }
CPyL1: ;
    cpy_r_r3 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r2)->_ir;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[707]; /* '__get__' */
    cpy_r_r5 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 114, CPyStatic_callable_class___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 116, CPyStatic_callable_class___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r9 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r10[6] = {
        cpy_r_builder, cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_fn_info,
        cpy_r_r7
    };
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[10058]; /* ('self_type',) */
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775813ULL, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r14 = PyObject_Type(cpy_r_r13);
    cpy_r_r15 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL65;
    }
    cpy_r_r17 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r17);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_r13};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL66;
    } else
        goto CPyL67;
CPyL11: ;
    cpy_r_r22 = 1;
    cpy_r_r23 = CPyStatics[8137]; /* 'instance' */
    cpy_r_r24 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 118, CPyStatic_callable_class___globals);
        goto CPyL39;
    } else
        goto CPyL69;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r23, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 118, CPyStatic_callable_class___globals);
        goto CPyL70;
    }
    cpy_r_instance = cpy_r_r27;
    cpy_r_r28 = CPyStatics[8138]; /* 'owner' */
    cpy_r_r29 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r29 == NULL)) {
        goto CPyL71;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 119, CPyStatic_callable_class___globals);
        goto CPyL39;
    } else
        goto CPyL72;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r28, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 119, CPyStatic_callable_class___globals);
        goto CPyL73;
    } else
        goto CPyL74;
CPyL20: ;
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPyDef_ops___BasicBlock(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 124, CPyStatic_callable_class___globals);
        goto CPyL73;
    }
    cpy_r_r35 = cpy_r_r34;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_ops___BasicBlock(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 124, CPyStatic_callable_class___globals);
        goto CPyL75;
    }
    cpy_r_r38 = cpy_r_r37;
    cpy_r_instance_block = cpy_r_r35;
    cpy_r_class_block = cpy_r_r38;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_instance, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 126, CPyStatic_callable_class___globals);
        goto CPyL76;
    }
    cpy_r_r42 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 126, CPyStatic_callable_class___globals);
        goto CPyL77;
    }
    cpy_r_r43 = CPyStatics[861]; /* 'is' */
    cpy_r_r44 = CPyDef_builder___IRBuilder___translate_is_op(cpy_r_builder, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_line);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 125, CPyStatic_callable_class___globals);
        goto CPyL76;
    }
    cpy_r_comparison = cpy_r_r44;
    cpy_r_r45 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_class_block, cpy_r_instance_block);
    CPy_DECREF(cpy_r_comparison);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 128, CPyStatic_callable_class___globals);
        goto CPyL76;
    }
    cpy_r_r46 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_class_block);
    CPy_DECREF(cpy_r_class_block);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 130, CPyStatic_callable_class___globals);
        goto CPyL78;
    }
    cpy_r_r47 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 131, CPyStatic_callable_class___globals);
        goto CPyL78;
    }
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_ops___Return(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 131, CPyStatic_callable_class___globals);
        goto CPyL78;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 131, CPyStatic_callable_class___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL30: ;
    cpy_r_r51 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_instance_block);
    CPy_DECREF(cpy_r_instance_block);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 133, CPyStatic_callable_class___globals);
        goto CPyL73;
    }
    cpy_r_r52 = CPyStatic_callable_class___globals;
    cpy_r_r53 = CPyStatics[8139]; /* 'method_new_op' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL73;
    }
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals, "tuple", cpy_r_r54);
        goto CPyL73;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL80;
    }
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = 2;
    cpy_r_r59 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_instance, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_instance);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL81;
    }
    cpy_r_r60 = PyList_New(2);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL82;
    }
    cpy_r_r61 = (CPyPtr)&((PyListObject *)cpy_r_r60)->ob_item;
    cpy_r_r62 = *(CPyPtr *)cpy_r_r61;
    *(PyObject * *)cpy_r_r62 = cpy_r_r56;
    cpy_r_r63 = cpy_r_r62 + 8;
    *(PyObject * *)cpy_r_r63 = cpy_r_r59;
    cpy_r_r64 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r55, cpy_r_r60, cpy_r_line);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r60);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL39;
    }
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = CPyDef_ops___Return(cpy_r_r64, cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 135, CPyStatic_callable_class___globals);
        goto CPyL39;
    }
    cpy_r_r67 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 134, CPyStatic_callable_class___globals);
    } else
        goto CPyL83;
CPyL39: ;
    cpy_r_r68 = CPy_CatchError();
    cpy_r_r22 = 0;
    cpy_r_r69 = CPy_GetExcInfo();
    cpy_r_r70 = cpy_r_r69.f0;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = cpy_r_r69.f1;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = cpy_r_r69.f2;
    CPy_INCREF(cpy_r_r72);
    CPy_DecRef(cpy_r_r69.f0);
    CPy_DecRef(cpy_r_r69.f1);
    CPy_DecRef(cpy_r_r69.f2);
    PyObject *cpy_r_r73[4] = {cpy_r_r13, cpy_r_r70, cpy_r_r71, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r74, 4, 0);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL84;
    }
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DecRef(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL45;
    }
    cpy_r_r78 = cpy_r_r76;
    if (cpy_r_r78) goto CPyL44;
    CPy_Reraise();
    if (!0) {
        goto CPyL45;
    } else
        goto CPyL85;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL47;
CPyL45: ;
    CPy_RestoreExcInfo(cpy_r_r68);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) {
        goto CPyL48;
    } else
        goto CPyL86;
CPyL46: ;
    CPy_Unreachable();
CPyL47: ;
    tuple_T3OOO __tmp10000 = { NULL, NULL, NULL };
    cpy_r_r80 = __tmp10000;
    cpy_r_r81 = cpy_r_r80;
    goto CPyL49;
CPyL48: ;
    cpy_r_r82 = CPy_CatchError();
    cpy_r_r81 = cpy_r_r82;
CPyL49: ;
    if (!cpy_r_r22) goto CPyL87;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r84[4] = {cpy_r_r13, cpy_r_r83, cpy_r_r83, cpy_r_r83};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r85, 4, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 111, CPyStatic_callable_class___globals);
        goto CPyL88;
    } else
        goto CPyL89;
CPyL51: ;
    CPy_DECREF(cpy_r_r13);
CPyL52: ;
    if (cpy_r_r81.f0 == NULL) goto CPyL59;
    CPy_Reraise();
    if (!0) {
        goto CPyL55;
    } else
        goto CPyL90;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    if (cpy_r_r81.f0 == NULL) goto CPyL57;
    CPy_RestoreExcInfo(cpy_r_r81);
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
CPyL57: ;
    cpy_r_r87 = CPy_KeepPropagating();
    if (!cpy_r_r87) goto CPyL60;
    CPy_Unreachable();
CPyL59: ;
    return 1;
CPyL60: ;
    cpy_r_r88 = 2;
    return cpy_r_r88;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL60;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r3);
    goto CPyL2;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r3);
    goto CPyL60;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL60;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL60;
CPyL67: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL11;
CPyL68: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL13;
CPyL69: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL39;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    goto CPyL17;
CPyL72: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL18;
CPyL73: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    goto CPyL39;
CPyL74: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL20;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_r35);
    goto CPyL39;
CPyL76: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_instance_block);
    CPy_DecRef(cpy_r_class_block);
    goto CPyL39;
CPyL77: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_instance_block);
    CPy_DecRef(cpy_r_class_block);
    CPy_DecRef(cpy_r_r41);
    goto CPyL39;
CPyL78: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_instance_block);
    goto CPyL39;
CPyL79: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL30;
CPyL80: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_instance);
    CPy_DecRef(cpy_r_r55);
    goto CPyL39;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    goto CPyL39;
CPyL82: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    goto CPyL39;
CPyL83: ;
    CPy_DECREF(cpy_r_r67);
    goto CPyL47;
CPyL84: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r72);
    goto CPyL45;
CPyL85: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    CPy_DecRef(cpy_r_r68.f2);
    goto CPyL43;
CPyL86: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL46;
CPyL87: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    goto CPyL52;
CPyL88: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL55;
CPyL89: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL51;
CPyL90: ;
    CPy_XDECREF(cpy_r_r81.f0);
    CPy_XDECREF(cpy_r_r81.f1);
    CPy_XDECREF(cpy_r_r81.f2);
    goto CPyL54;
}

PyObject *CPyPy_callable_class___add_get_to_callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:add_get_to_callable_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    char retval = CPyDef_callable_class___add_get_to_callable_class(arg_builder, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/callable_class.py", "add_get_to_callable_class", 108, CPyStatic_callable_class___globals);
    return NULL;
}

PyObject *CPyDef_callable_class___instantiate_callable_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fitem;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_curr_env_reg;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fitem = cpy_r_r0;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 149, CPyStatic_callable_class___globals);
        goto CPyL23;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r1)->_ir;
    cpy_r_r3 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r2)->_ctor;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/callable_class.py", "instantiate_callable_class", "ClassIR", "ctor", 149, CPyStatic_callable_class___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 149, CPyStatic_callable_class___globals);
        goto CPyL24;
    }
    cpy_r_r5 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_ops___Call(cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 149, CPyStatic_callable_class___globals);
        goto CPyL23;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 149, CPyStatic_callable_class___globals);
        goto CPyL23;
    }
    cpy_r_func_reg = cpy_r_r7;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    cpy_r_curr_env_reg = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_r9, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 165, CPyStatic_callable_class___globals);
        goto CPyL25;
    }
CPyL6: ;
    if (cpy_r_r10) {
        goto CPyL26;
    } else
        goto CPyL10;
CPyL7: ;
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_r11, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 166, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL8: ;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_context___GeneratorClass, 3, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* curr_env_reg */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 166, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL9: ;
    cpy_r_curr_env_reg = cpy_r_r13;
    goto CPyL17;
CPyL10: ;
    cpy_r_r14 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r15 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r14)->_is_nested;
    if (cpy_r_r15) {
        goto CPyL28;
    } else
        goto CPyL14;
CPyL11: ;
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 168, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL12: ;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_r17, CPyType_context___ImplicitClass, 3, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* curr_env_reg */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 168, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL13: ;
    cpy_r_curr_env_reg = cpy_r_r18;
    goto CPyL17;
CPyL14: ;
    cpy_r_r19 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r20 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r19)->_contains_nested;
    if (cpy_r_r20) {
        goto CPyL29;
    } else
        goto CPyL17;
CPyL15: ;
    cpy_r_r21 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_r21, CPyType_context___FuncInfo, 10, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* curr_env_reg */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 170, CPyStatic_callable_class___globals);
        goto CPyL27;
    }
CPyL16: ;
    cpy_r_curr_env_reg = cpy_r_r22;
CPyL17: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_curr_env_reg != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL30;
    cpy_r_r25 = CPyStatics[7706]; /* '__mypyc_env__' */
    if (likely(cpy_r_curr_env_reg != Py_None))
        cpy_r_r26 = cpy_r_curr_env_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 172, CPyStatic_callable_class___globals, "mypyc.ir.ops.Value", cpy_r_curr_env_reg);
        goto CPyL27;
    }
    cpy_r_r27 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_fitem);
    cpy_r_r28 = CPyDef_ops___SetAttr(cpy_r_func_reg, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 172, CPyStatic_callable_class___globals);
        goto CPyL31;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 172, CPyStatic_callable_class___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL21: ;
    return cpy_r_func_reg;
CPyL22: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL23: ;
    CPy_DecRef(cpy_r_fitem);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r3);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_curr_env_reg);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_curr_env_reg);
    goto CPyL7;
CPyL27: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL22;
CPyL28: ;
    CPy_DECREF(cpy_r_curr_env_reg);
    goto CPyL11;
CPyL29: ;
    CPy_DECREF(cpy_r_curr_env_reg);
    goto CPyL15;
CPyL30: ;
    CPy_DECREF(cpy_r_fitem);
    CPy_DECREF(cpy_r_curr_env_reg);
    goto CPyL21;
CPyL31: ;
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL22;
CPyL32: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL21;
}

PyObject *CPyPy_callable_class___instantiate_callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:instantiate_callable_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_callable_class___instantiate_callable_class(arg_builder, arg_fn_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/callable_class.py", "instantiate_callable_class", 139, CPyStatic_callable_class___globals);
    return NULL;
}

char CPyDef_callable_class_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", -1, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_callable_class___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 7, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10059]; /* ('ENV_ATTR_NAME', 'SELF_NAME') */
    cpy_r_r10 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r11 = CPyStatic_callable_class___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 9, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___common = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r14 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r15 = CPyStatic_callable_class___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 10, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10060]; /* ('FuncDecl', 'FuncIR', 'FuncSignature', 'RuntimeArg') */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_callable_class___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 11, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10061]; /* ('BasicBlock', 'Call', 'Register', 'Return', 'SetAttr',
                                      'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_callable_class___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 12, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10062]; /* ('RInstance', 'object_rprimitive') */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_callable_class___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 13, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r30 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r31 = CPyStatic_callable_class___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 14, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10046]; /* ('FuncInfo', 'ImplicitClass') */
    cpy_r_r34 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r35 = CPyStatic_callable_class___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 15, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___irbuild___context = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___irbuild___context);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10063]; /* ('method_new_op',) */
    cpy_r_r38 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r39 = CPyStatic_callable_class___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/callable_class.py", "<module>", 16, CPyStatic_callable_class___globals);
        goto CPyL13;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r40);
    return 1;
CPyL13: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
}
