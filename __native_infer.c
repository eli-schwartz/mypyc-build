#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef infermodule_methods[] = {
    {"infer_function_type_arguments", (PyCFunction)CPyPy_infer___infer_function_type_arguments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"infer_type_arguments", (PyCFunction)CPyPy_infer___infer_type_arguments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef infermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.infer",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    infermodule_methods
};

PyObject *CPyInit_mypy___infer(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___infer_internal) {
        Py_INCREF(CPyModule_mypy___infer_internal);
        return CPyModule_mypy___infer_internal;
    }
    CPyModule_mypy___infer_internal = PyModule_Create(&infermodule);
    if (unlikely(CPyModule_mypy___infer_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___infer_internal, "__name__");
    CPyStatic_infer___globals = PyModule_GetDict(CPyModule_mypy___infer_internal);
    if (unlikely(CPyStatic_infer___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_infer_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___infer_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___infer_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_infer___ArgumentInferContext);
    return NULL;
}

PyObject *CPyDef_infer___infer_function_type_arguments(PyObject *cpy_r_callee_type, PyObject *cpy_r_arg_types, PyObject *cpy_r_arg_kinds, PyObject *cpy_r_formal_to_actual, PyObject *cpy_r_context, char cpy_r_strict, char cpy_r_allow_polymorphic) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_constraints;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_type_vars;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    if (cpy_r_strict != 2) goto CPyL2;
    cpy_r_strict = 1;
CPyL2: ;
    if (cpy_r_allow_polymorphic != 2) goto CPyL4;
    cpy_r_allow_polymorphic = 0;
CPyL4: ;
    cpy_r_r0 = CPyDef_constraints___infer_constraints_for_callable(cpy_r_callee_type, cpy_r_arg_types, cpy_r_arg_kinds, cpy_r_formal_to_actual, cpy_r_context);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "infer_function_type_arguments", 55, CPyStatic_infer___globals);
        goto CPyL8;
    }
    cpy_r_constraints = cpy_r_r0;
    cpy_r_r1 = CPyDef_types___CallableType___type_var_ids(cpy_r_callee_type);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "infer_function_type_arguments", 60, CPyStatic_infer___globals);
        goto CPyL9;
    }
    cpy_r_type_vars = cpy_r_r1;
    cpy_r_r2 = CPyDef_solve___solve_constraints(cpy_r_type_vars, cpy_r_constraints, cpy_r_strict, cpy_r_allow_polymorphic);
    CPy_DECREF(cpy_r_type_vars);
    CPy_DECREF(cpy_r_constraints);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "infer_function_type_arguments", 61, CPyStatic_infer___globals);
        goto CPyL8;
    }
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
CPyL9: ;
    CPy_DecRef(cpy_r_constraints);
    goto CPyL8;
}

PyObject *CPyPy_infer___infer_function_type_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"callee_type", "arg_types", "arg_kinds", "formal_to_actual", "context", "strict", "allow_polymorphic", 0};
    static CPyArg_Parser parser = {"OOOOO|OO:infer_function_type_arguments", kwlist, 0};
    PyObject *obj_callee_type;
    PyObject *obj_arg_types;
    PyObject *obj_arg_kinds;
    PyObject *obj_formal_to_actual;
    PyObject *obj_context;
    PyObject *obj_strict = NULL;
    PyObject *obj_allow_polymorphic = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_callee_type, &obj_arg_types, &obj_arg_kinds, &obj_formal_to_actual, &obj_context, &obj_strict, &obj_allow_polymorphic)) {
        return NULL;
    }
    PyObject *arg_callee_type;
    if (likely(Py_TYPE(obj_callee_type) == CPyType_types___CallableType))
        arg_callee_type = obj_callee_type;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_callee_type); 
        goto fail;
    }
    PyObject *arg_arg_types = obj_arg_types;
    PyObject *arg_arg_kinds;
    if (likely(PyList_Check(obj_arg_kinds)))
        arg_arg_kinds = obj_arg_kinds;
    else {
        CPy_TypeError("list", obj_arg_kinds); 
        goto fail;
    }
    PyObject *arg_formal_to_actual;
    if (likely(PyList_Check(obj_formal_to_actual)))
        arg_formal_to_actual = obj_formal_to_actual;
    else {
        CPy_TypeError("list", obj_formal_to_actual); 
        goto fail;
    }
    PyObject * arg_context;
    if (likely(PyTuple_Check(obj_context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("tuple", obj_context); 
        goto fail;
    }
    char arg_strict;
    if (obj_strict == NULL) {
        arg_strict = 2;
    } else if (unlikely(!PyBool_Check(obj_strict))) {
        CPy_TypeError("bool", obj_strict); goto fail;
    } else
        arg_strict = obj_strict == Py_True;
    char arg_allow_polymorphic;
    if (obj_allow_polymorphic == NULL) {
        arg_allow_polymorphic = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_polymorphic))) {
        CPy_TypeError("bool", obj_allow_polymorphic); goto fail;
    } else
        arg_allow_polymorphic = obj_allow_polymorphic == Py_True;
    PyObject *retval = CPyDef_infer___infer_function_type_arguments(arg_callee_type, arg_arg_types, arg_arg_kinds, arg_formal_to_actual, arg_context, arg_strict, arg_allow_polymorphic);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/infer.py", "infer_function_type_arguments", 32, CPyStatic_infer___globals);
    return NULL;
}

PyObject *CPyDef_infer___infer_type_arguments(PyObject *cpy_r_type_var_ids, PyObject *cpy_r_template, PyObject *cpy_r_actual, char cpy_r_is_supertype) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_constraints;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    if (cpy_r_is_supertype != 2) goto CPyL2;
    cpy_r_is_supertype = 0;
CPyL2: ;
    if (!cpy_r_is_supertype) goto CPyL4;
    cpy_r_r0 = 2;
    goto CPyL5;
CPyL4: ;
    cpy_r_r0 = 0;
CPyL5: ;
    cpy_r_r1 = CPyDef_constraints___infer_constraints(cpy_r_template, cpy_r_actual, cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "infer_type_arguments", 69, CPyStatic_infer___globals);
        goto CPyL8;
    }
    cpy_r_constraints = cpy_r_r1;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_solve___solve_constraints(cpy_r_type_var_ids, cpy_r_constraints, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_constraints);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "infer_type_arguments", 70, CPyStatic_infer___globals);
        goto CPyL8;
    }
    return cpy_r_r4;
CPyL8: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_infer___infer_type_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"type_var_ids", "template", "actual", "is_supertype", 0};
    static CPyArg_Parser parser = {"OOO|O:infer_type_arguments", kwlist, 0};
    PyObject *obj_type_var_ids;
    PyObject *obj_template;
    PyObject *obj_actual;
    PyObject *obj_is_supertype = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type_var_ids, &obj_template, &obj_actual, &obj_is_supertype)) {
        return NULL;
    }
    PyObject *arg_type_var_ids;
    if (likely(PyList_Check(obj_type_var_ids)))
        arg_type_var_ids = obj_type_var_ids;
    else {
        CPy_TypeError("list", obj_type_var_ids); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(PyObject_TypeCheck(obj_template, CPyType_types___Type)))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.types.Type", obj_template); 
        goto fail;
    }
    PyObject *arg_actual;
    if (likely(PyObject_TypeCheck(obj_actual, CPyType_types___Type)))
        arg_actual = obj_actual;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual); 
        goto fail;
    }
    char arg_is_supertype;
    if (obj_is_supertype == NULL) {
        arg_is_supertype = 2;
    } else if (unlikely(!PyBool_Check(obj_is_supertype))) {
        CPy_TypeError("bool", obj_is_supertype); goto fail;
    } else
        arg_is_supertype = obj_is_supertype == Py_True;
    PyObject *retval = CPyDef_infer___infer_type_arguments(arg_type_var_ids, arg_template, arg_actual, arg_is_supertype);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/infer.py", "infer_type_arguments", 64, CPyStatic_infer___globals);
    return NULL;
}

char CPyDef_infer_____top_level__(void) {
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
    char cpy_r_r31;
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
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", -1, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_infer___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 3, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9423]; /* ('NamedTuple', 'Sequence') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_infer___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 5, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9424]; /* ('SUBTYPE_OF', 'SUPERTYPE_OF', 'infer_constraints',
                                     'infer_constraints_for_callable') */
    cpy_r_r14 = CPyStatics[917]; /* 'mypy.constraints' */
    cpy_r_r15 = CPyStatic_infer___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 7, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_mypy___constraints = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___constraints);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9425]; /* ('ArgKind',) */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_infer___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 13, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9426]; /* ('solve_constraints',) */
    cpy_r_r22 = CPyStatics[2639]; /* 'mypy.solve' */
    cpy_r_r23 = CPyStatic_infer___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 14, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_mypy___solve = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___solve);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9427]; /* ('CallableType', 'Instance', 'Type', 'TypeVarId') */
    cpy_r_r26 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r27 = CPyStatic_infer___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 15, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_mypy___types = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyModule_typing;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    if (cpy_r_r31) goto CPyL12;
    cpy_r_r32 = CPyStatics[21]; /* 'typing' */
    cpy_r_r33 = PyImport_Import(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL36;
    }
    CPyModule_typing = cpy_r_r33;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r33);
CPyL12: ;
    cpy_r_r34 = PyImport_GetModuleDict();
    cpy_r_r35 = CPyStatics[21]; /* 'typing' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL36;
    }
    cpy_r_r37 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL36;
    }
    cpy_r_r39 = PyTuple_Pack(1, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL36;
    }
    cpy_r_r40 = CPyModule_typing;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_r40 != cpy_r_r41;
    if (cpy_r_r42) goto CPyL18;
    cpy_r_r43 = CPyStatics[21]; /* 'typing' */
    cpy_r_r44 = PyImport_Import(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL37;
    }
    CPyModule_typing = cpy_r_r44;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r44);
CPyL18: ;
    cpy_r_r45 = PyImport_GetModuleDict();
    cpy_r_r46 = CPyStatics[21]; /* 'typing' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL37;
    }
    cpy_r_r48 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL37;
    }
    cpy_r_r50 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r51 = PyObject_HasAttr(cpy_r_r49, cpy_r_r50);
    if (!cpy_r_r51) goto CPyL25;
    cpy_r_r52 = CPyStatics[1165]; /* 'ArgumentInferContext' */
    cpy_r_r53 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r55[2] = {cpy_r_r52, cpy_r_r39};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 2, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL38;
    }
    if (likely(PyDict_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals, "dict", cpy_r_r57);
        goto CPyL38;
    }
    cpy_r_r59 = cpy_r_r58;
    goto CPyL27;
CPyL25: ;
    cpy_r_r60 = PyDict_New();
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL38;
    }
    cpy_r_r59 = cpy_r_r60;
CPyL27: ;
    cpy_r_r61 = PyDict_New();
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL39;
    }
    cpy_r_r62 = (PyObject *)CPyType_types___Instance;
    cpy_r_r63 = CPyStatics[2640]; /* 'mapping_type' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r61, cpy_r_r63, cpy_r_r62);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 28, CPyStatic_infer___globals);
        goto CPyL40;
    }
    cpy_r_r66 = (PyObject *)CPyType_types___Instance;
    cpy_r_r67 = CPyStatics[2641]; /* 'iterable_type' */
    cpy_r_r68 = CPyDict_SetItem(cpy_r_r61, cpy_r_r67, cpy_r_r66);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 29, CPyStatic_infer___globals);
        goto CPyL40;
    }
    cpy_r_r70 = CPyStatics[1165]; /* 'ArgumentInferContext' */
    cpy_r_r71 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r59, cpy_r_r71, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL39;
    }
    cpy_r_r74 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r75 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r59, cpy_r_r75, cpy_r_r74);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL39;
    }
    cpy_r_r78 = CPyStatics[1235]; /* 'mypy.infer' */
    cpy_r_r79 = CPyStatics[619]; /* '__module__' */
    cpy_r_r80 = CPyDict_SetItem(cpy_r_r59, cpy_r_r79, cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL39;
    }
    PyObject *cpy_r_r82[3] = {cpy_r_r70, cpy_r_r39, cpy_r_r59};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r83, 3, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r59);
    CPyType_infer___ArgumentInferContext = (PyTypeObject *)cpy_r_r84;
    CPy_INCREF(CPyType_infer___ArgumentInferContext);
    cpy_r_r85 = CPyStatic_infer___globals;
    cpy_r_r86 = CPyStatics[1165]; /* 'ArgumentInferContext' */
    cpy_r_r87 = CPyDict_SetItem(cpy_r_r85, cpy_r_r86, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/infer.py", "<module>", 18, CPyStatic_infer___globals);
        goto CPyL36;
    }
    cpy_r_r89 = (PyObject *)CPyType_infer___ArgumentInferContext;
    return 1;
CPyL36: ;
    cpy_r_r90 = 2;
    return cpy_r_r90;
CPyL37: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r49);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r59);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r61);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r59);
    goto CPyL36;
}
