#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef enumsmodule_methods[] = {
    {"enum_name_callback", (PyCFunction)CPyPy_enums___enum_name_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_first", (PyCFunction)CPyPy_enums____first, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_infer_value_type_with_auto_fallback", (PyCFunction)CPyPy_enums____infer_value_type_with_auto_fallback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_implements_new", (PyCFunction)CPyPy_enums____implements_new, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"enum_value_callback", (PyCFunction)CPyPy_enums___enum_value_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_extract_underlying_field_name", (PyCFunction)CPyPy_enums____extract_underlying_field_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef enumsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.enums",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    enumsmodule_methods
};

PyObject *CPyInit_mypy___plugins___enums(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___enums_internal) {
        Py_INCREF(CPyModule_mypy___plugins___enums_internal);
        return CPyModule_mypy___plugins___enums_internal;
    }
    CPyModule_mypy___plugins___enums_internal = PyModule_Create(&enumsmodule);
    if (unlikely(CPyModule_mypy___plugins___enums_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___enums_internal, "__name__");
    CPyStatic_enums___globals = PyModule_GetDict(CPyModule_mypy___plugins___enums_internal);
    if (unlikely(CPyStatic_enums___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_enums_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___enums_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___enums_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_enums___ENUM_NAME_ACCESS);
    CPyStatic_enums___ENUM_NAME_ACCESS = NULL;
    CPy_XDECREF(CPyStatic_enums___ENUM_VALUE_ACCESS);
    CPyStatic_enums___ENUM_VALUE_ACCESS = NULL;
    return NULL;
}

PyObject *CPyDef_enums___enum_name_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_enum_field_name;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_literal_type;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 47, CPyStatic_enums___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_name_callback", 47, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL15;
    }
    cpy_r_r2 = CPyDef_enums____extract_underlying_field_name(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 47, CPyStatic_enums___globals);
        goto CPyL15;
    }
    cpy_r_enum_field_name = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_enum_field_name == cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL16;
    } else
        goto CPyL7;
CPyL4: ;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 49, CPyStatic_enums___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_name_callback", 49, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL15;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 51, CPyStatic_enums___globals);
        goto CPyL17;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_checker___TypeChecker))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_name_callback", 51, CPyStatic_enums___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r7);
        goto CPyL17;
    }
    cpy_r_r9 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r10 = PyList_New(0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 51, CPyStatic_enums___globals);
        goto CPyL18;
    }
    cpy_r_r11 = CPY_GET_METHOD_TRAIT(cpy_r_r8, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r8, cpy_r_r9, cpy_r_r10); /* named_generic_type */
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 51, CPyStatic_enums___globals);
        goto CPyL17;
    }
    cpy_r_str_type = cpy_r_r11;
    if (likely(cpy_r_enum_field_name != Py_None))
        cpy_r_r12 = cpy_r_enum_field_name;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_name_callback", 52, CPyStatic_enums___globals, "str", cpy_r_enum_field_name);
        goto CPyL19;
    }
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___LiteralType(cpy_r_r12, cpy_r_str_type, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 52, CPyStatic_enums___globals);
        goto CPyL19;
    }
    cpy_r_literal_type = cpy_r_r15;
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_types___Instance___copy_modified(cpy_r_str_type, cpy_r_r16, cpy_r_literal_type);
    CPy_DECREF(cpy_r_literal_type);
    CPy_DECREF(cpy_r_str_type);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 53, CPyStatic_enums___globals);
        goto CPyL15;
    }
    return cpy_r_r17;
CPyL15: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL16: ;
    CPy_DECREF(cpy_r_enum_field_name);
    goto CPyL4;
CPyL17: ;
    CPy_DecRef(cpy_r_enum_field_name);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_enum_field_name);
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_str_type);
    goto CPyL15;
}

PyObject *CPyPy_enums___enum_name_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:enum_name_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_enums___enum_name_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "enum_name_callback", 32, CPyStatic_enums___globals);
    return NULL;
}

PyObject *CPyDef_enums____first(PyObject *cpy_r_it) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_val;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = PyObject_GetIter(cpy_r_it);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_first", 64, CPyStatic_enums___globals);
        goto CPyL5;
    }
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL3;
    cpy_r_val = cpy_r_r1;
    return cpy_r_val;
CPyL3: ;
    cpy_r_r2 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_first", 64, CPyStatic_enums___globals);
        goto CPyL5;
    }
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_enums____first(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"it", 0};
    static CPyArg_Parser parser = {"O:_first", kwlist, 0};
    PyObject *obj_it;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_it)) {
        return NULL;
    }
    PyObject *arg_it = obj_it;
    PyObject *retval = CPyDef_enums____first(arg_it);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "_first", 59, CPyStatic_enums___globals);
    return NULL;
}

PyObject *CPyDef_enums____infer_value_type_with_auto_fallback(PyObject *cpy_r_ctx, PyObject *cpy_r_proper_type) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_ti;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_type_with_gnv;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_stnode;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_node_type;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_int_type;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_proper_type == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL2: ;
    CPy_INCREF(cpy_r_proper_type);
    if (likely(cpy_r_proper_type != Py_None))
        cpy_r_r3 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 79, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_proper_type);
        goto CPyL64;
    }
    cpy_r_r4 = CPyDef_typeops___fixup_partial_type(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 79, CPyStatic_enums___globals);
        goto CPyL64;
    }
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 79, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 79, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL64;
    }
    cpy_r_proper_type = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_types___Instance;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 80, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_proper_type);
        goto CPyL65;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_type;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 80, CPyStatic_enums___globals);
        goto CPyL65;
    }
CPyL9: ;
    cpy_r_r14 = CPyStatics[4607]; /* 'enum.auto' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 80, CPyStatic_enums___globals);
        goto CPyL65;
    }
CPyL12: ;
    cpy_r_r20 = cpy_r_r15 == 0;
    if (cpy_r_r20) goto CPyL66;
CPyL13: ;
    if (likely(cpy_r_proper_type != Py_None))
        cpy_r_r21 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 81, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_proper_type);
        goto CPyL64;
    }
    return cpy_r_r21;
CPyL15: ;
    cpy_r_r22 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 82, CPyStatic_enums___globals);
        goto CPyL64;
    }
    cpy_r_r23 = (PyObject *)CPyType_types___Instance;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (cpy_r_r26) goto CPyL19;
    PyErr_SetString(PyExc_AssertionError, "An incorrect ctx.type was passed.");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 82, CPyStatic_enums___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r28 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 83, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_types___Instance))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 83, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_r28);
        goto CPyL64;
    }
    cpy_r_r30 = ((mypy___types___InstanceObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_info = cpy_r_r30;
    cpy_r_r31 = PyList_New(0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL67;
    }
    cpy_r_r32 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r32 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'mro' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r32);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL68;
    }
CPyL23: ;
    cpy_r_r33 = 0;
CPyL24: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL69;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely((Py_TYPE(cpy_r_r38) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r38) == CPyType_nodes___TypeInfo)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_r38);
        goto CPyL70;
    }
    cpy_r_ti = cpy_r_r39;
    cpy_r_r40 = ((mypy___nodes___TypeInfoObject *)cpy_r_ti)->_names;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", "TypeInfo", "names", 89, CPyStatic_enums___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r40);
CPyL27: ;
    cpy_r_r41 = CPyStatics[4608]; /* '_generate_next_value_' */
    cpy_r_r42 = CPyDict_GetWithNone(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL71;
    }
    if (Py_TYPE(cpy_r_r42) == CPyType_nodes___SymbolTableNode)
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL4922;
    if (cpy_r_r42 == Py_None)
        cpy_r_r43 = cpy_r_r42;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL4922;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r42);
    goto CPyL71;
__LL4922: ;
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_r43 != cpy_r_r44;
    CPy_DECREF(cpy_r_r43);
    if (!cpy_r_r45) goto CPyL72;
    cpy_r_r46 = PyList_Append(cpy_r_r31, cpy_r_ti);
    CPy_DECREF(cpy_r_ti);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL70;
    }
CPyL31: ;
    cpy_r_r48 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r48;
    goto CPyL24;
CPyL32: ;
    cpy_r_r49 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL64;
    }
    cpy_r_r50 = CPyDef_enums____first(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if ((Py_TYPE(cpy_r_r50) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r50) == CPyType_nodes___TypeInfo))
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL4923;
    if (cpy_r_r50 == Py_None)
        cpy_r_r51 = cpy_r_r50;
    else {
        cpy_r_r51 = NULL;
    }
    if (cpy_r_r51 != NULL) goto __LL4923;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 89, CPyStatic_enums___globals, "mypy.nodes.TypeInfo or None", cpy_r_r50);
    goto CPyL64;
__LL4923: ;
    cpy_r_type_with_gnv = cpy_r_r51;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_type_with_gnv == cpy_r_r52;
    if (cpy_r_r53) {
        goto CPyL73;
    } else
        goto CPyL39;
CPyL36: ;
    cpy_r_r54 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 91, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_types___Type)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 91, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r54);
        goto CPyL64;
    }
    return cpy_r_r55;
CPyL39: ;
    if (likely(cpy_r_type_with_gnv != Py_None))
        cpy_r_r56 = cpy_r_type_with_gnv;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 93, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_type_with_gnv);
        goto CPyL74;
    }
    cpy_r_r57 = ((mypy___nodes___TypeInfoObject *)cpy_r_r56)->_names;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", "TypeInfo", "names", 93, CPyStatic_enums___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r57);
CPyL41: ;
    cpy_r_r58 = CPyStatics[4608]; /* '_generate_next_value_' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 93, CPyStatic_enums___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_nodes___SymbolTableNode))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 93, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode", cpy_r_r59);
        goto CPyL74;
    }
    cpy_r_stnode = cpy_r_r60;
    cpy_r_r61 = CPY_GET_ATTR(cpy_r_stnode, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_stnode);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 96, CPyStatic_enums___globals);
        goto CPyL74;
    }
CPyL44: ;
    cpy_r_r62 = CPyDef_types___get_proper_type(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 96, CPyStatic_enums___globals);
        goto CPyL74;
    }
    cpy_r_node_type = cpy_r_r62;
    cpy_r_r63 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_node_type)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    if (!cpy_r_r66) goto CPyL75;
    if (likely(cpy_r_type_with_gnv != Py_None))
        cpy_r_r67 = cpy_r_type_with_gnv;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 98, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_type_with_gnv);
        goto CPyL76;
    }
    cpy_r_r68 = CPY_GET_ATTR(cpy_r_r67, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 98, CPyStatic_enums___globals);
        goto CPyL76;
    }
CPyL48: ;
    CPy_DECREF(cpy_r_type_with_gnv);
    cpy_r_r69 = CPyStatics[4609]; /* 'enum.Enum' */
    cpy_r_r70 = PyUnicode_Compare(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r71 = cpy_r_r70 == -1;
    if (!cpy_r_r71) goto CPyL51;
    cpy_r_r72 = PyErr_Occurred();
    cpy_r_r73 = cpy_r_r72 != NULL;
    if (!cpy_r_r73) goto CPyL51;
    cpy_r_r74 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 98, CPyStatic_enums___globals);
        goto CPyL77;
    }
CPyL51: ;
    cpy_r_r75 = cpy_r_r70 == 0;
    if (cpy_r_r75) {
        goto CPyL78;
    } else
        goto CPyL57;
CPyL52: ;
    cpy_r_r76 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 99, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_checker___TypeChecker))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 99, CPyStatic_enums___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r76);
        goto CPyL64;
    }
    cpy_r_r78 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r79 = PyList_New(0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 99, CPyStatic_enums___globals);
        goto CPyL79;
    }
    cpy_r_r80 = CPY_GET_METHOD_TRAIT(cpy_r_r77, CPyType_plugin___CheckerPluginInterface, 2, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r77, cpy_r_r78, cpy_r_r79); /* named_generic_type */
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 99, CPyStatic_enums___globals);
        goto CPyL64;
    }
    cpy_r_int_type = cpy_r_r80;
    return cpy_r_int_type;
CPyL57: ;
    if (likely(Py_TYPE(cpy_r_node_type) == CPyType_types___CallableType))
        cpy_r_r81 = cpy_r_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 101, CPyStatic_enums___globals, "mypy.types.CallableType", cpy_r_node_type);
        goto CPyL77;
    }
    cpy_r_r82 = ((mypy___types___CallableTypeObject *)cpy_r_r81)->_ret_type;
    CPy_INCREF(cpy_r_r82);
    CPy_DECREF(cpy_r_node_type);
    cpy_r_r83 = CPyDef_types___get_proper_type(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 101, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(cpy_r_r83 != Py_None))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 101, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_r83);
        goto CPyL64;
    }
    return cpy_r_r84;
CPyL61: ;
    cpy_r_r85 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 102, CPyStatic_enums___globals);
        goto CPyL64;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r85, CPyType_types___Type)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 102, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r85);
        goto CPyL64;
    }
    return cpy_r_r86;
CPyL64: ;
    cpy_r_r87 = NULL;
    return cpy_r_r87;
CPyL65: ;
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL64;
CPyL66: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL15;
CPyL67: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL64;
CPyL69: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL32;
CPyL70: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r32);
    goto CPyL64;
CPyL71: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_ti);
    goto CPyL64;
CPyL72: ;
    CPy_DECREF(cpy_r_ti);
    goto CPyL31;
CPyL73: ;
    CPy_DECREF(cpy_r_type_with_gnv);
    goto CPyL36;
CPyL74: ;
    CPy_DecRef(cpy_r_type_with_gnv);
    goto CPyL64;
CPyL75: ;
    CPy_DECREF(cpy_r_type_with_gnv);
    CPy_DECREF(cpy_r_node_type);
    goto CPyL61;
CPyL76: ;
    CPy_DecRef(cpy_r_type_with_gnv);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL64;
CPyL77: ;
    CPy_DecRef(cpy_r_node_type);
    goto CPyL64;
CPyL78: ;
    CPy_DECREF(cpy_r_node_type);
    goto CPyL52;
CPyL79: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL64;
}

PyObject *CPyPy_enums____infer_value_type_with_auto_fallback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "proper_type", 0};
    static CPyArg_Parser parser = {"OO:_infer_value_type_with_auto_fallback", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_proper_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_proper_type)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_proper_type;
    if (PyObject_TypeCheck(obj_proper_type, CPyType_types___ProperType))
        arg_proper_type = obj_proper_type;
    else {
        arg_proper_type = NULL;
    }
    if (arg_proper_type != NULL) goto __LL4924;
    if (obj_proper_type == Py_None)
        arg_proper_type = obj_proper_type;
    else {
        arg_proper_type = NULL;
    }
    if (arg_proper_type != NULL) goto __LL4924;
    CPy_TypeError("mypy.types.ProperType or None", obj_proper_type); 
    goto fail;
__LL4924: ;
    PyObject *retval = CPyDef_enums____infer_value_type_with_auto_fallback(arg_ctx, arg_proper_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "_infer_value_type_with_auto_fallback", 69, CPyStatic_enums___globals);
    return NULL;
}

char CPyDef_enums____implements_new(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_ti;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_type_with_new;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals);
        goto CPyL43;
    }
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/plugins/enums.py", "_implements_new", "TypeInfo", "mro", 112, CPyStatic_enums___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL45;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely((Py_TYPE(cpy_r_r7) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r7) == CPyType_nodes___TypeInfo)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_r7);
        goto CPyL46;
    }
    cpy_r_ti = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_ti)->_names;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/plugins/enums.py", "_implements_new", "TypeInfo", "names", 113, CPyStatic_enums___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = CPyStatics[721]; /* '__new__' */
    cpy_r_r11 = CPyDict_GetWithNone(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 113, CPyStatic_enums___globals);
        goto CPyL47;
    }
    if (Py_TYPE(cpy_r_r11) == CPyType_nodes___SymbolTableNode)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4925;
    if (cpy_r_r11 == Py_None)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4925;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 113, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r11);
    goto CPyL47;
__LL4925: ;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (cpy_r_r14) goto CPyL48;
    cpy_r_r15 = cpy_r_r12;
    goto CPyL12;
CPyL10: ;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_ti, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 113, CPyStatic_enums___globals);
        goto CPyL47;
    }
CPyL11: ;
    cpy_r_r17 = CPyStatics[1360]; /* 'builtins.' */
    cpy_r_r18 = CPyStr_Startswith(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 ^ 1;
    cpy_r_r20 = cpy_r_r19 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r15 = cpy_r_r20;
CPyL12: ;
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", -1, CPyStatic_enums___globals);
        goto CPyL47;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL49;
    cpy_r_r24 = PyList_Append(cpy_r_r0, cpy_r_ti);
    CPy_DECREF(cpy_r_ti);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals);
        goto CPyL46;
    }
CPyL15: ;
    cpy_r_r26 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r26;
    goto CPyL3;
CPyL16: ;
    cpy_r_r27 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals);
        goto CPyL43;
    }
    cpy_r_r28 = CPyDef_enums____first(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals);
        goto CPyL43;
    }
    if ((Py_TYPE(cpy_r_r28) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r28) == CPyType_nodes___TypeInfo))
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4926;
    if (cpy_r_r28 == Py_None)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4926;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 110, CPyStatic_enums___globals, "mypy.nodes.TypeInfo or None", cpy_r_r28);
    goto CPyL43;
__LL4926: ;
    cpy_r_type_with_new = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_type_with_new == cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL50;
    } else
        goto CPyL21;
CPyL20: ;
    return 0;
CPyL21: ;
    if (likely(cpy_r_type_with_new != Py_None))
        cpy_r_r32 = cpy_r_type_with_new;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_type_with_new);
        goto CPyL51;
    }
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_r32, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals);
        goto CPyL51;
    }
CPyL23: ;
    cpy_r_r34 = CPyStatics[4609]; /* 'enum.Enum' */
    cpy_r_r35 = PyUnicode_Compare(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = cpy_r_r35 == -1;
    if (!cpy_r_r36) goto CPyL26;
    cpy_r_r37 = PyErr_Occurred();
    cpy_r_r38 = cpy_r_r37 != NULL;
    if (!cpy_r_r38) goto CPyL26;
    cpy_r_r39 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", -1, CPyStatic_enums___globals);
        goto CPyL51;
    }
CPyL26: ;
    cpy_r_r40 = cpy_r_r35 != 0;
    if (cpy_r_r40) goto CPyL28;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL34;
CPyL28: ;
    if (likely(cpy_r_type_with_new != Py_None))
        cpy_r_r42 = cpy_r_type_with_new;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_type_with_new);
        goto CPyL51;
    }
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_r42, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals);
        goto CPyL51;
    }
CPyL30: ;
    cpy_r_r44 = CPyStatics[4610]; /* 'enum.IntEnum' */
    cpy_r_r45 = PyUnicode_Compare(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL33;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL33;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", -1, CPyStatic_enums___globals);
        goto CPyL51;
    }
CPyL33: ;
    cpy_r_r50 = cpy_r_r45 != 0;
    cpy_r_r41 = cpy_r_r50;
CPyL34: ;
    if (cpy_r_r41) {
        goto CPyL36;
    } else
        goto CPyL52;
CPyL35: ;
    cpy_r_r51 = cpy_r_r41;
    goto CPyL42;
CPyL36: ;
    if (likely(cpy_r_type_with_new != Py_None))
        cpy_r_r52 = cpy_r_type_with_new;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals, "mypy.nodes.TypeInfo", cpy_r_type_with_new);
        goto CPyL51;
    }
    cpy_r_r53 = CPY_GET_ATTR(cpy_r_r52, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 117, CPyStatic_enums___globals);
        goto CPyL51;
    }
CPyL38: ;
    CPy_DECREF(cpy_r_type_with_new);
    cpy_r_r54 = CPyStatics[4611]; /* 'enum.StrEnum' */
    cpy_r_r55 = PyUnicode_Compare(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r56 = cpy_r_r55 == -1;
    if (!cpy_r_r56) goto CPyL41;
    cpy_r_r57 = PyErr_Occurred();
    cpy_r_r58 = cpy_r_r57 != NULL;
    if (!cpy_r_r58) goto CPyL41;
    cpy_r_r59 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", -1, CPyStatic_enums___globals);
        goto CPyL43;
    }
CPyL41: ;
    cpy_r_r60 = cpy_r_r55 != 0;
    cpy_r_r51 = cpy_r_r60;
CPyL42: ;
    return cpy_r_r51;
CPyL43: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL43;
CPyL45: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL43;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_ti);
    goto CPyL43;
CPyL48: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL10;
CPyL49: ;
    CPy_DECREF(cpy_r_ti);
    goto CPyL15;
CPyL50: ;
    CPy_DECREF(cpy_r_type_with_new);
    goto CPyL20;
CPyL51: ;
    CPy_DecRef(cpy_r_type_with_new);
    goto CPyL43;
CPyL52: ;
    CPy_DECREF(cpy_r_type_with_new);
    goto CPyL35;
}

PyObject *CPyPy_enums____implements_new(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:_implements_new", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_enums____implements_new(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "_implements_new", 105, CPyStatic_enums___globals);
    return NULL;
}

PyObject *CPyDef_enums___enum_value_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_enum_field_name;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_info;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T3CIO cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_stnodes;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_node_types;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_proper_types;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_underlying_type;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    CPyTagged cpy_r_r94;
    char cpy_r_all_same_value_type;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_proper_type_2;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_all_equivalent_types;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_stnode;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
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
    PyObject *cpy_r_r153;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 143, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r0, CPyType_types___ProperType)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 143, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL123;
    }
    cpy_r_r2 = CPyDef_enums____extract_underlying_field_name(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 143, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_enum_field_name = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_enum_field_name == cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL124;
    } else
        goto CPyL96;
CPyL4: ;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 150, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_r6 = (PyObject *)CPyType_types___Instance;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL93;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 151, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 151, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_r10);
        goto CPyL123;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_type;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_info = cpy_r_r12;
    cpy_r_r13 = CPyDef_enums____implements_new(cpy_r_info);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 156, CPyStatic_enums___globals);
        goto CPyL125;
    }
    if (cpy_r_r13) {
        goto CPyL126;
    } else
        goto CPyL13;
CPyL10: ;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 157, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 157, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL123;
    }
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL125;
    }
    cpy_r_r17 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/plugins/enums.py", "enum_value_callback", "TypeInfo", "names", 159, CPyStatic_enums___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r17);
CPyL15: ;
    cpy_r_r18 = 0;
    cpy_r_r19 = PyDict_Size(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = CPyDict_GetKeysIter(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL128;
    }
CPyL16: ;
    cpy_r_r22 = CPyDict_NextKey(cpy_r_r21, cpy_r_r18);
    cpy_r_r23 = cpy_r_r22.f1;
    cpy_r_r18 = cpy_r_r23;
    cpy_r_r24 = cpy_r_r22.f0;
    if (!cpy_r_r24) goto CPyL129;
    cpy_r_r25 = cpy_r_r22.f2;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r22.f2);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals, "str", cpy_r_r25);
        goto CPyL130;
    }
    cpy_r_name = cpy_r_r26;
    cpy_r_r27 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL130;
    }
    cpy_r_r28 = PyList_Append(cpy_r_r16, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL130;
    }
    cpy_r_r30 = CPyDict_CheckSize(cpy_r_r17, cpy_r_r20);
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL130;
    } else
        goto CPyL16;
CPyL21: ;
    cpy_r_r31 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL131;
    }
    cpy_r_r32 = PyObject_GetIter(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 159, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_stnodes = cpy_r_r32;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals);
        goto CPyL132;
    }
    cpy_r_r34 = PyObject_GetIter(cpy_r_stnodes);
    CPy_DECREF(cpy_r_stnodes);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals);
        goto CPyL133;
    }
CPyL25: ;
    cpy_r_r35 = PyIter_Next(cpy_r_r34);
    if (cpy_r_r35 == NULL) goto CPyL134;
    if (Py_TYPE(cpy_r_r35) == CPyType_nodes___SymbolTableNode)
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL4927;
    if (cpy_r_r35 == Py_None)
        cpy_r_r36 = cpy_r_r35;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL4927;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r35);
    goto CPyL135;
__LL4927: ;
    cpy_r_n = cpy_r_r36;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_n == cpy_r_r37;
    if (!cpy_r_r38) goto CPyL29;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL31;
CPyL29: ;
    if (likely(cpy_r_n != Py_None))
        cpy_r_r40 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 167, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode", cpy_r_n);
        goto CPyL136;
    }
    cpy_r_r41 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r40)->_implicit;
    cpy_r_r42 = cpy_r_r41 ^ 1;
    cpy_r_r39 = cpy_r_r42;
CPyL31: ;
    if (!cpy_r_r39) goto CPyL137;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_n != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL138;
    if (likely(cpy_r_n != Py_None))
        cpy_r_r45 = cpy_r_n;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 165, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode", cpy_r_n);
        goto CPyL136;
    }
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 165, CPyStatic_enums___globals);
        goto CPyL136;
    }
CPyL35: ;
    CPy_DECREF(cpy_r_n);
    cpy_r_r47 = CPyDef_types___get_proper_type(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 165, CPyStatic_enums___globals);
        goto CPyL135;
    }
    cpy_r_r48 = cpy_r_r47;
    goto CPyL38;
CPyL37: ;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r48 = cpy_r_r49;
CPyL38: ;
    cpy_r_r50 = PyList_Append(cpy_r_r33, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals);
        goto CPyL135;
    } else
        goto CPyL25;
CPyL39: ;
    cpy_r_r52 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals);
        goto CPyL133;
    }
    cpy_r_r53 = PyObject_GetIter(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 164, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_node_types = cpy_r_r53;
    cpy_r_r54 = PyList_New(0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL139;
    }
    cpy_r_r55 = PyObject_GetIter(cpy_r_node_types);
    CPy_DECREF(cpy_r_node_types);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL140;
    }
CPyL43: ;
    cpy_r_r56 = PyIter_Next(cpy_r_r55);
    if (cpy_r_r56 == NULL) goto CPyL141;
    if (PyObject_TypeCheck(cpy_r_r56, CPyType_types___ProperType))
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL4928;
    if (cpy_r_r56 == Py_None)
        cpy_r_r57 = cpy_r_r56;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL4928;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals, "mypy.types.ProperType or None", cpy_r_r56);
    goto CPyL142;
__LL4928: ;
    cpy_r_t = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_t == cpy_r_r58;
    if (!cpy_r_r59) goto CPyL47;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL48;
CPyL47: ;
    cpy_r_r61 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r65 = cpy_r_r64 ^ 1;
    cpy_r_r60 = cpy_r_r65;
CPyL48: ;
    if (!cpy_r_r60) goto CPyL143;
    cpy_r_r66 = CPyDef_enums____infer_value_type_with_auto_fallback(cpy_r_ctx, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 170, CPyStatic_enums___globals);
        goto CPyL142;
    }
    cpy_r_r67 = PyList_Append(cpy_r_r54, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL142;
    } else
        goto CPyL43;
CPyL51: ;
    cpy_r_r69 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL140;
    }
    cpy_r_r70 = PyObject_GetIter(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_r71 = PySequence_List(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 169, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_proper_types = cpy_r_r71;
    cpy_r_r72 = CPyDef_enums____first(cpy_r_proper_types);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 174, CPyStatic_enums___globals);
        goto CPyL144;
    }
    if (PyObject_TypeCheck(cpy_r_r72, CPyType_types___Type))
        cpy_r_r73 = cpy_r_r72;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL4929;
    if (cpy_r_r72 == Py_None)
        cpy_r_r73 = cpy_r_r72;
    else {
        cpy_r_r73 = NULL;
    }
    if (cpy_r_r73 != NULL) goto __LL4929;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 174, CPyStatic_enums___globals, "mypy.types.Type or None", cpy_r_r72);
    goto CPyL144;
__LL4929: ;
    cpy_r_underlying_type = cpy_r_r73;
    cpy_r_r74 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r75 = cpy_r_underlying_type == cpy_r_r74;
    if (cpy_r_r75) {
        goto CPyL145;
    } else
        goto CPyL60;
CPyL57: ;
    cpy_r_r76 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 176, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r76, CPyType_types___Type)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 176, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r76);
        goto CPyL123;
    }
    return cpy_r_r77;
CPyL60: ;
    cpy_r_r78 = 1;
    cpy_r_r79 = 0;
CPyL61: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_proper_types)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL73;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_proper_types, cpy_r_r79);
    if (PyObject_TypeCheck(cpy_r_r84, CPyType_types___Type))
        cpy_r_r85 = cpy_r_r84;
    else {
        cpy_r_r85 = NULL;
    }
    if (cpy_r_r85 != NULL) goto __LL4930;
    if (cpy_r_r84 == Py_None)
        cpy_r_r85 = cpy_r_r84;
    else {
        cpy_r_r85 = NULL;
    }
    if (cpy_r_r85 != NULL) goto __LL4930;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 182, CPyStatic_enums___globals, "mypy.types.Type or None", cpy_r_r84);
    goto CPyL146;
__LL4930: ;
    cpy_r_proper_type = cpy_r_r85;
    cpy_r_r86 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r87 = cpy_r_proper_type != cpy_r_r86;
    if (cpy_r_r87) {
        goto CPyL65;
    } else
        goto CPyL147;
CPyL64: ;
    cpy_r_r88 = cpy_r_r87;
    goto CPyL70;
CPyL65: ;
    if (likely(cpy_r_proper_type != Py_None))
        cpy_r_r89 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 183, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_proper_type);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_underlying_type);
    if (likely(cpy_r_underlying_type != Py_None))
        cpy_r_r90 = cpy_r_underlying_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 183, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_underlying_type);
        goto CPyL148;
    }
    cpy_r_r91 = PyObject_RichCompare(cpy_r_r89, cpy_r_r90, 2);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 183, CPyStatic_enums___globals);
        goto CPyL146;
    }
    if (unlikely(!PyBool_Check(cpy_r_r91))) {
        CPy_TypeError("bool", cpy_r_r91); cpy_r_r92 = 2;
    } else
        cpy_r_r92 = cpy_r_r91 == Py_True;
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 183, CPyStatic_enums___globals);
        goto CPyL146;
    }
    cpy_r_r88 = cpy_r_r92;
CPyL70: ;
    cpy_r_r93 = cpy_r_r88 ^ 1;
    if (!cpy_r_r93) goto CPyL72;
    cpy_r_r78 = 0;
    goto CPyL73;
CPyL72: ;
    cpy_r_r94 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r94;
    goto CPyL61;
CPyL73: ;
    cpy_r_all_same_value_type = cpy_r_r78;
    if (!cpy_r_all_same_value_type) goto CPyL78;
    if (likely(cpy_r_underlying_type != Py_None))
        cpy_r_r95 = cpy_r_underlying_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 187, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_underlying_type);
        goto CPyL146;
    }
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_r95 != cpy_r_r96;
    if (cpy_r_r97) {
        goto CPyL149;
    } else
        goto CPyL78;
CPyL76: ;
    if (likely(cpy_r_underlying_type != Py_None))
        cpy_r_r98 = cpy_r_underlying_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 188, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_underlying_type);
        goto CPyL123;
    }
    return cpy_r_r98;
CPyL78: ;
    cpy_r_r99 = 1;
    cpy_r_r100 = 0;
CPyL79: ;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_proper_types)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = (Py_ssize_t)cpy_r_r100 < (Py_ssize_t)cpy_r_r103;
    if (!cpy_r_r104) goto CPyL150;
    cpy_r_r105 = CPyList_GetItemUnsafe(cpy_r_proper_types, cpy_r_r100);
    if (PyObject_TypeCheck(cpy_r_r105, CPyType_types___Type))
        cpy_r_r106 = cpy_r_r105;
    else {
        cpy_r_r106 = NULL;
    }
    if (cpy_r_r106 != NULL) goto __LL4931;
    if (cpy_r_r105 == Py_None)
        cpy_r_r106 = cpy_r_r105;
    else {
        cpy_r_r106 = NULL;
    }
    if (cpy_r_r106 != NULL) goto __LL4931;
    CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 204, CPyStatic_enums___globals, "mypy.types.Type or None", cpy_r_r105);
    goto CPyL146;
__LL4931: ;
    cpy_r_proper_type_2 = cpy_r_r106;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r108 = cpy_r_proper_type_2 != cpy_r_r107;
    if (cpy_r_r108) {
        goto CPyL83;
    } else
        goto CPyL151;
CPyL82: ;
    cpy_r_r109 = cpy_r_r108;
    goto CPyL87;
CPyL83: ;
    if (likely(cpy_r_proper_type_2 != Py_None))
        cpy_r_r110 = cpy_r_proper_type_2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 205, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_proper_type_2);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_underlying_type);
    if (likely(cpy_r_underlying_type != Py_None))
        cpy_r_r111 = cpy_r_underlying_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 205, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_underlying_type);
        goto CPyL152;
    }
    cpy_r_r112 = 2;
    cpy_r_r113 = 2;
    cpy_r_r114 = NULL;
    cpy_r_r115 = NULL;
    cpy_r_r116 = CPyDef_subtypes___is_equivalent(cpy_r_r110, cpy_r_r111, cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 205, CPyStatic_enums___globals);
        goto CPyL146;
    }
    cpy_r_r109 = cpy_r_r116;
CPyL87: ;
    cpy_r_r117 = cpy_r_r109 ^ 1;
    if (cpy_r_r117) {
        goto CPyL153;
    } else
        goto CPyL89;
CPyL88: ;
    cpy_r_r99 = 0;
    goto CPyL90;
CPyL89: ;
    cpy_r_r118 = cpy_r_r100 + 2;
    cpy_r_r100 = cpy_r_r118;
    goto CPyL79;
CPyL90: ;
    cpy_r_all_equivalent_types = cpy_r_r99;
    if (!cpy_r_all_equivalent_types) goto CPyL154;
    cpy_r_r119 = CPY_INT_TAG;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = 2;
    cpy_r_r122 = 2;
    cpy_r_r123 = CPyDef_typeops___make_simplified_union(cpy_r_proper_types, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_proper_types);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 209, CPyStatic_enums___globals);
        goto CPyL123;
    }
    return cpy_r_r123;
CPyL93: ;
    cpy_r_r124 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 210, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r124, CPyType_types___Type)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 210, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r124);
        goto CPyL123;
    }
    return cpy_r_r125;
CPyL96: ;
    cpy_r_r126 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 212, CPyStatic_enums___globals);
        goto CPyL155;
    }
    cpy_r_r127 = (PyObject *)CPyType_types___Instance;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    CPy_DECREF(cpy_r_r126);
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (cpy_r_r130) {
        goto CPyL100;
    } else
        goto CPyL156;
CPyL98: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 212, CPyStatic_enums___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r132 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 213, CPyStatic_enums___globals);
        goto CPyL155;
    }
    if (likely(Py_TYPE(cpy_r_r132) == CPyType_types___Instance))
        cpy_r_r133 = cpy_r_r132;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 213, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_r132);
        goto CPyL155;
    }
    cpy_r_r134 = ((mypy___types___InstanceObject *)cpy_r_r133)->_type;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    cpy_r_info = cpy_r_r134;
    cpy_r_r135 = CPyDef_enums____implements_new(cpy_r_info);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 218, CPyStatic_enums___globals);
        goto CPyL157;
    }
    if (cpy_r_r135) {
        goto CPyL158;
    } else
        goto CPyL107;
CPyL104: ;
    cpy_r_r136 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 219, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r136, CPyType_types___Type)))
        cpy_r_r137 = cpy_r_r136;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 219, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r136);
        goto CPyL123;
    }
    return cpy_r_r137;
CPyL107: ;
    if (likely(cpy_r_enum_field_name != Py_None))
        cpy_r_r138 = cpy_r_enum_field_name;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 221, CPyStatic_enums___globals, "str", cpy_r_enum_field_name);
        goto CPyL125;
    }
    cpy_r_r139 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 221, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_stnode = cpy_r_r139;
    cpy_r_r140 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r141 = cpy_r_stnode == cpy_r_r140;
    if (cpy_r_r141) {
        goto CPyL159;
    } else
        goto CPyL113;
CPyL110: ;
    cpy_r_r142 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 223, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r142, CPyType_types___Type)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 223, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r142);
        goto CPyL123;
    }
    return cpy_r_r143;
CPyL113: ;
    if (likely(cpy_r_stnode != Py_None))
        cpy_r_r144 = cpy_r_stnode;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 225, CPyStatic_enums___globals, "mypy.nodes.SymbolTableNode", cpy_r_stnode);
        goto CPyL160;
    }
    cpy_r_r145 = CPY_GET_ATTR(cpy_r_r144, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 225, CPyStatic_enums___globals);
        goto CPyL160;
    }
CPyL115: ;
    CPy_DECREF(cpy_r_stnode);
    cpy_r_r146 = CPyDef_types___get_proper_type(cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 225, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_r147 = CPyDef_enums____infer_value_type_with_auto_fallback(cpy_r_ctx, cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 225, CPyStatic_enums___globals);
        goto CPyL123;
    }
    cpy_r_underlying_type = cpy_r_r147;
    cpy_r_r148 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r149 = cpy_r_underlying_type == cpy_r_r148;
    if (cpy_r_r149) {
        goto CPyL161;
    } else
        goto CPyL121;
CPyL118: ;
    cpy_r_r150 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 227, CPyStatic_enums___globals);
        goto CPyL123;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r150, CPyType_types___Type)))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 227, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_r150);
        goto CPyL123;
    }
    return cpy_r_r151;
CPyL121: ;
    if (likely(cpy_r_underlying_type != Py_None))
        cpy_r_r152 = cpy_r_underlying_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "enum_value_callback", 229, CPyStatic_enums___globals, "mypy.types.Type", cpy_r_underlying_type);
        goto CPyL123;
    }
    return cpy_r_r152;
CPyL123: ;
    cpy_r_r153 = NULL;
    return cpy_r_r153;
CPyL124: ;
    CPy_DECREF(cpy_r_enum_field_name);
    goto CPyL4;
CPyL125: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL123;
CPyL126: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL10;
CPyL127: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r16);
    goto CPyL123;
CPyL128: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL123;
CPyL129: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22.f2);
    goto CPyL21;
CPyL130: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r21);
    goto CPyL123;
CPyL131: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL123;
CPyL132: ;
    CPy_DecRef(cpy_r_stnodes);
    goto CPyL123;
CPyL133: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL123;
CPyL134: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL39;
CPyL135: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL123;
CPyL136: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_n);
    goto CPyL123;
CPyL137: ;
    CPy_DECREF(cpy_r_n);
    goto CPyL25;
CPyL138: ;
    CPy_DECREF(cpy_r_n);
    goto CPyL37;
CPyL139: ;
    CPy_DecRef(cpy_r_node_types);
    goto CPyL123;
CPyL140: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL123;
CPyL141: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL51;
CPyL142: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    goto CPyL123;
CPyL143: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL43;
CPyL144: ;
    CPy_DecRef(cpy_r_proper_types);
    goto CPyL123;
CPyL145: ;
    CPy_DECREF(cpy_r_proper_types);
    CPy_DECREF(cpy_r_underlying_type);
    goto CPyL57;
CPyL146: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_underlying_type);
    goto CPyL123;
CPyL147: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL64;
CPyL148: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_underlying_type);
    CPy_DecRef(cpy_r_r89);
    goto CPyL123;
CPyL149: ;
    CPy_DECREF(cpy_r_proper_types);
    goto CPyL76;
CPyL150: ;
    CPy_DECREF(cpy_r_underlying_type);
    goto CPyL90;
CPyL151: ;
    CPy_DECREF(cpy_r_proper_type_2);
    goto CPyL82;
CPyL152: ;
    CPy_DecRef(cpy_r_proper_types);
    CPy_DecRef(cpy_r_underlying_type);
    CPy_DecRef(cpy_r_r110);
    goto CPyL123;
CPyL153: ;
    CPy_DECREF(cpy_r_underlying_type);
    goto CPyL88;
CPyL154: ;
    CPy_DECREF(cpy_r_proper_types);
    goto CPyL93;
CPyL155: ;
    CPy_DecRef(cpy_r_enum_field_name);
    goto CPyL123;
CPyL156: ;
    CPy_DECREF(cpy_r_enum_field_name);
    goto CPyL98;
CPyL157: ;
    CPy_DecRef(cpy_r_enum_field_name);
    CPy_DecRef(cpy_r_info);
    goto CPyL123;
CPyL158: ;
    CPy_DECREF(cpy_r_enum_field_name);
    CPy_DECREF(cpy_r_info);
    goto CPyL104;
CPyL159: ;
    CPy_DECREF(cpy_r_stnode);
    goto CPyL110;
CPyL160: ;
    CPy_DecRef(cpy_r_stnode);
    goto CPyL123;
CPyL161: ;
    CPy_DECREF(cpy_r_underlying_type);
    goto CPyL118;
}

PyObject *CPyPy_enums___enum_value_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:enum_value_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_enums___enum_value_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "enum_value_callback", 120, CPyStatic_enums___globals);
    return NULL;
}

PyObject *CPyDef_enums____extract_underlying_field_name(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_underlying_literal;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 243, CPyStatic_enums___globals);
        goto CPyL19;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 243, CPyStatic_enums___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL19;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL20;
CPyL3: ;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r7 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 247, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL21;
    }
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_type;
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_r8)->_is_enum;
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AttributeError("mypy/plugins/enums.py", "_extract_underlying_field_name", "TypeInfo", "is_enum", 247, CPyStatic_enums___globals);
        goto CPyL21;
    }
CPyL6: ;
    if (cpy_r_r9) {
        goto CPyL8;
    } else
        goto CPyL22;
CPyL7: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    return cpy_r_r10;
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r11 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 250, CPyStatic_enums___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL21;
    }
    cpy_r_r12 = ((mypy___types___InstanceObject *)cpy_r_r11)->_last_known_value;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_typ);
    cpy_r_underlying_literal = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_underlying_literal == cpy_r_r13;
    if (cpy_r_r14) {
        goto CPyL23;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL11: ;
    if (likely(cpy_r_underlying_literal != Py_None))
        cpy_r_r16 = cpy_r_underlying_literal;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 257, CPyStatic_enums___globals, "mypy.types.LiteralType", cpy_r_underlying_literal);
        goto CPyL24;
    }
    cpy_r_r17 = ((mypy___types___LiteralTypeObject *)cpy_r_r16)->_value;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = (PyObject *)&PyUnicode_Type;
    cpy_r_r19 = PyObject_IsInstance(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 257, CPyStatic_enums___globals);
        goto CPyL24;
    }
    cpy_r_r21 = cpy_r_r19;
    if (cpy_r_r21) {
        goto CPyL16;
    } else
        goto CPyL25;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 257, CPyStatic_enums___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL16: ;
    if (likely(cpy_r_underlying_literal != Py_None))
        cpy_r_r23 = cpy_r_underlying_literal;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 258, CPyStatic_enums___globals, "mypy.types.LiteralType", cpy_r_underlying_literal);
        goto CPyL24;
    }
    cpy_r_r24 = ((mypy___types___LiteralTypeObject *)cpy_r_r23)->_value;
    CPy_INCREF(cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 258, CPyStatic_enums___globals, "str", cpy_r_r24);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_underlying_literal);
    return cpy_r_r25;
CPyL19: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL20: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL3;
CPyL21: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL7;
CPyL23: ;
    CPy_DECREF(cpy_r_underlying_literal);
    goto CPyL10;
CPyL24: ;
    CPy_DecRef(cpy_r_underlying_literal);
    goto CPyL19;
CPyL25: ;
    CPy_DECREF(cpy_r_underlying_literal);
    goto CPyL14;
}

PyObject *CPyPy_enums____extract_underlying_field_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:_extract_underlying_field_name", kwlist, 0};
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
    PyObject *retval = CPyDef_enums____extract_underlying_field_name(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/enums.py", "_extract_underlying_field_name", 232, CPyStatic_enums___globals);
    return NULL;
}

char CPyDef_enums_____top_level__(void) {
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
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_prefix;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_prefix_2;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_prefix_3;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_prefix_4;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", -1, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_enums___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 13, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9625]; /* ('Final', 'Iterable', 'Sequence', 'TypeVar', 'cast') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_enums___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 15, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = (PyObject **)&CPyModule_mypy___plugin;
    PyObject **cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (void *)&cpy_r_r14;
    int64_t cpy_r_r16[1] = {17};
    cpy_r_r17 = (void *)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9582]; /* (('mypy.plugin', 'mypy', 'mypy'),) */
    cpy_r_r19 = CPyStatic_enums___globals;
    cpy_r_r20 = CPyStatics[4612]; /* 'mypy/plugins/enums.py' */
    cpy_r_r21 = CPyStatics[17]; /* '<module>' */
    cpy_r_r22 = CPyImport_ImportMany(cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r17);
    if (!cpy_r_r22) goto CPyL61;
    cpy_r_r23 = CPyStatics[9495]; /* ('TypeInfo',) */
    cpy_r_r24 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r25 = CPyStatic_enums___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 18, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_mypy___nodes = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[9233]; /* ('ENUM_BASES',) */
    cpy_r_r28 = CPyStatics[1016]; /* 'mypy.semanal_enum' */
    cpy_r_r29 = CPyStatic_enums___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 19, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_mypy___semanal_enum = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy___semanal_enum);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9626]; /* ('is_equivalent',) */
    cpy_r_r32 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r33 = CPyStatic_enums___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 20, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_mypy___subtypes = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9627]; /* ('fixup_partial_type', 'make_simplified_union') */
    cpy_r_r36 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r37 = CPyStatic_enums___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 21, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_mypy___typeops = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9628]; /* ('CallableType', 'Instance', 'LiteralType', 'ProperType',
                                     'Type', 'get_proper_type') */
    cpy_r_r40 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r41 = CPyStatic_enums___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 22, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPyModule_mypy___types = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = PySet_New(NULL);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL61;
    }
    cpy_r_r44 = CPyStatic_semanal_enum___ENUM_BASES;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_BASES\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r46 = PyObject_GetIter(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL63;
    }
CPyL16: ;
    cpy_r_r47 = PyIter_Next(cpy_r_r46);
    if (cpy_r_r47 == NULL) goto CPyL64;
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals, "str", cpy_r_r47);
        goto CPyL65;
    }
    cpy_r_prefix = cpy_r_r48;
    cpy_r_r49 = CPyStatics[4613]; /* '.name' */
    cpy_r_r50 = CPyStr_Build(2, cpy_r_prefix, cpy_r_r49);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL65;
    }
    cpy_r_r51 = PySet_Add(cpy_r_r43, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL65;
    } else
        goto CPyL16;
CPyL20: ;
    cpy_r_r53 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL63;
    }
    cpy_r_r54 = PySet_New(NULL);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL63;
    }
    cpy_r_r55 = CPyStatic_semanal_enum___ENUM_BASES;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL66;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_BASES\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 25, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r57 = PyObject_GetIter(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL67;
    }
CPyL26: ;
    cpy_r_r58 = PyIter_Next(cpy_r_r57);
    if (cpy_r_r58 == NULL) goto CPyL68;
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals, "str", cpy_r_r58);
        goto CPyL69;
    }
    cpy_r_prefix_2 = cpy_r_r59;
    cpy_r_r60 = CPyStatics[4614]; /* '._name_' */
    cpy_r_r61 = CPyStr_Build(2, cpy_r_prefix_2, cpy_r_r60);
    CPy_DECREF(cpy_r_prefix_2);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 25, CPyStatic_enums___globals);
        goto CPyL69;
    }
    cpy_r_r62 = PySet_Add(cpy_r_r54, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL69;
    } else
        goto CPyL26;
CPyL30: ;
    cpy_r_r64 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL67;
    }
    cpy_r_r65 = PyNumber_Or(cpy_r_r43, cpy_r_r54);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL61;
    }
    if (likely(PySet_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals, "set", cpy_r_r65);
        goto CPyL61;
    }
    CPyStatic_enums___ENUM_NAME_ACCESS = cpy_r_r66;
    CPy_INCREF(CPyStatic_enums___ENUM_NAME_ACCESS);
    cpy_r_r67 = CPyStatic_enums___globals;
    cpy_r_r68 = CPyStatics[4615]; /* 'ENUM_NAME_ACCESS' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 24, CPyStatic_enums___globals);
        goto CPyL61;
    }
    cpy_r_r71 = PySet_New(NULL);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL61;
    }
    cpy_r_r72 = CPyStatic_semanal_enum___ENUM_BASES;
    if (unlikely(cpy_r_r72 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_BASES\" was not set");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r74 = PyObject_GetIter(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL71;
    }
CPyL39: ;
    cpy_r_r75 = PyIter_Next(cpy_r_r74);
    if (cpy_r_r75 == NULL) goto CPyL72;
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals, "str", cpy_r_r75);
        goto CPyL73;
    }
    cpy_r_prefix_3 = cpy_r_r76;
    cpy_r_r77 = CPyStatics[4616]; /* '.value' */
    cpy_r_r78 = CPyStr_Build(2, cpy_r_prefix_3, cpy_r_r77);
    CPy_DECREF(cpy_r_prefix_3);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL73;
    }
    cpy_r_r79 = PySet_Add(cpy_r_r71, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL73;
    } else
        goto CPyL39;
CPyL43: ;
    cpy_r_r81 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL71;
    }
    cpy_r_r82 = PySet_New(NULL);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL71;
    }
    cpy_r_r83 = CPyStatic_semanal_enum___ENUM_BASES;
    if (unlikely(cpy_r_r83 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENUM_BASES\" was not set");
    cpy_r_r84 = 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 28, CPyStatic_enums___globals);
        goto CPyL61;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r85 = PyObject_GetIter(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL75;
    }
CPyL49: ;
    cpy_r_r86 = PyIter_Next(cpy_r_r85);
    if (cpy_r_r86 == NULL) goto CPyL76;
    if (likely(PyUnicode_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals, "str", cpy_r_r86);
        goto CPyL77;
    }
    cpy_r_prefix_4 = cpy_r_r87;
    cpy_r_r88 = CPyStatics[4617]; /* '._value_' */
    cpy_r_r89 = CPyStr_Build(2, cpy_r_prefix_4, cpy_r_r88);
    CPy_DECREF(cpy_r_prefix_4);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 28, CPyStatic_enums___globals);
        goto CPyL77;
    }
    cpy_r_r90 = PySet_Add(cpy_r_r82, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL77;
    } else
        goto CPyL49;
CPyL53: ;
    cpy_r_r92 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL75;
    }
    cpy_r_r93 = PyNumber_Or(cpy_r_r71, cpy_r_r82);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL61;
    }
    if (likely(PySet_Check(cpy_r_r93)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals, "set", cpy_r_r93);
        goto CPyL61;
    }
    CPyStatic_enums___ENUM_VALUE_ACCESS = cpy_r_r94;
    CPy_INCREF(CPyStatic_enums___ENUM_VALUE_ACCESS);
    cpy_r_r95 = CPyStatic_enums___globals;
    cpy_r_r96 = CPyStatics[4618]; /* 'ENUM_VALUE_ACCESS' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 27, CPyStatic_enums___globals);
        goto CPyL61;
    }
    cpy_r_r99 = CPyStatics[4619]; /* '_T' */
    cpy_r_r100 = CPyStatic_enums___globals;
    cpy_r_r101 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 56, CPyStatic_enums___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r103[1] = {cpy_r_r99};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 1, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 56, CPyStatic_enums___globals);
        goto CPyL61;
    }
    cpy_r_r106 = CPyStatic_enums___globals;
    cpy_r_r107 = CPyStatics[4619]; /* '_T' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r106, cpy_r_r107, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/plugins/enums.py", "<module>", 56, CPyStatic_enums___globals);
        goto CPyL61;
    }
    return 1;
CPyL61: ;
    cpy_r_r110 = 2;
    return cpy_r_r110;
CPyL62: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL13;
CPyL63: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL61;
CPyL64: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL20;
CPyL65: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL61;
CPyL66: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r54);
    goto CPyL23;
CPyL67: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r54);
    goto CPyL61;
CPyL68: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL30;
CPyL69: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r57);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL36;
CPyL71: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL61;
CPyL72: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL43;
CPyL73: ;
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r74);
    goto CPyL61;
CPyL74: ;
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r82);
    goto CPyL46;
CPyL75: ;
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r82);
    goto CPyL61;
CPyL76: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL53;
CPyL77: ;
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r85);
    goto CPyL61;
}
