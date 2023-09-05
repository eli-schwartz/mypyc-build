#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef maptypemodule_methods[] = {
    {"map_instance_to_supertype", (PyCFunction)CPyPy_maptype___map_instance_to_supertype, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"map_instance_to_supertypes", (PyCFunction)CPyPy_maptype___map_instance_to_supertypes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"class_derivation_paths", (PyCFunction)CPyPy_maptype___class_derivation_paths, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"map_instance_to_direct_supertypes", (PyCFunction)CPyPy_maptype___map_instance_to_direct_supertypes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"instance_to_type_environment", (PyCFunction)CPyPy_maptype___instance_to_type_environment, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef maptypemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.maptype",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    maptypemodule_methods
};

PyObject *CPyInit_mypy___maptype(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___maptype_internal) {
        Py_INCREF(CPyModule_mypy___maptype_internal);
        return CPyModule_mypy___maptype_internal;
    }
    CPyModule_mypy___maptype_internal = PyModule_Create(&maptypemodule);
    if (unlikely(CPyModule_mypy___maptype_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___maptype_internal, "__name__");
    CPyStatic_maptype___globals = PyModule_GetDict(CPyModule_mypy___maptype_internal);
    if (unlikely(CPyStatic_maptype___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_maptype_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___maptype_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___maptype_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_maptype___map_instance_to_supertype(PyObject *cpy_r_instance, PyObject *cpy_r_superclass) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_env;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_tuple_type;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0 == cpy_r_superclass;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r_instance);
    return cpy_r_instance;
CPyL2: ;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_superclass, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 19, CPyStatic_maptype___globals);
        goto CPyL44;
    }
CPyL3: ;
    cpy_r_r3 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 19, CPyStatic_maptype___globals);
        goto CPyL44;
    }
CPyL6: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL35;
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_tuple_type;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertype", "TypeInfo", "tuple_type", 19, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r13) goto CPyL35;
    cpy_r_r14 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_tuple_type;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertype", "TypeInfo", "tuple_type", 20, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r15);
CPyL10: ;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 20, CPyStatic_maptype___globals, "mypy.types.TupleType", cpy_r_r15);
        goto CPyL44;
    }
    cpy_r_r17 = CPyDef_types___has_type_vars(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 20, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    if (!cpy_r_r17) goto CPyL35;
    cpy_r_r18 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_r18)->_special_alias;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertype", "TypeInfo", "special_alias", 23, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r19);
CPyL14: ;
    cpy_r_alias = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_alias != cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL17;
    } else
        goto CPyL45;
CPyL15: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 24, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL17: ;
    if (likely(cpy_r_alias != Py_None))
        cpy_r_r23 = cpy_r_alias;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 25, CPyStatic_maptype___globals, "mypy.nodes.TypeAlias", cpy_r_alias);
        goto CPyL46;
    }
    cpy_r_r24 = ((mypy___nodes___TypeAliasObject *)cpy_r_r23)->__is_recursive;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_alias);
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 != cpy_r_r25;
    if (!cpy_r_r26) goto CPyL47;
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r27 = 2;
    } else
        cpy_r_r27 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 25, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    if (cpy_r_r27) goto CPyL35;
CPyL21: ;
    cpy_r_r28 = CPyDef_maptype___instance_to_type_environment(cpy_r_instance);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 28, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    cpy_r_env = cpy_r_r28;
    cpy_r_r29 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_r29)->_tuple_type;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertype", "TypeInfo", "tuple_type", 29, CPyStatic_maptype___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r30);
CPyL23: ;
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 29, CPyStatic_maptype___globals, "mypy.types.TupleType", cpy_r_r30);
        goto CPyL48;
    }
    cpy_r_r32 = CPyDef_expandtype___expand_type(cpy_r_r31, cpy_r_env);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_env);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 29, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_types___ProperType)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 29, CPyStatic_maptype___globals, "mypy.types.ProperType", cpy_r_r32);
        goto CPyL44;
    }
    cpy_r_tuple_type = cpy_r_r33;
    cpy_r_r34 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_tuple_type)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL49;
    cpy_r_r38 = CPyStatic_maptype___globals;
    cpy_r_r39 = CPyModule_mypy___typeops;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_r39 != cpy_r_r40;
    if (cpy_r_r41) goto CPyL30;
    cpy_r_r42 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r43 = PyImport_Import(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 32, CPyStatic_maptype___globals);
        goto CPyL50;
    }
    CPyModule_mypy___typeops = cpy_r_r43;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r43);
CPyL30: ;
    cpy_r_r44 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r45 = PyImport_GetModuleDict();
    cpy_r_r46 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 32, CPyStatic_maptype___globals);
        goto CPyL50;
    }
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r38, cpy_r_r44, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 32, CPyStatic_maptype___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_tuple_type) == CPyType_types___TupleType))
        cpy_r_r50 = cpy_r_tuple_type;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 34, CPyStatic_maptype___globals, "mypy.types.TupleType", cpy_r_tuple_type);
        goto CPyL44;
    }
    cpy_r_r51 = CPyDef_typeops___tuple_fallback(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 34, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    return cpy_r_r51;
CPyL35: ;
    cpy_r_r52 = ((mypy___nodes___TypeInfoObject *)cpy_r_superclass)->_type_vars;
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertype", "TypeInfo", "type_vars", 36, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r52);
CPyL36: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_r52)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = cpy_r_r55 != 0;
    if (cpy_r_r56) goto CPyL40;
    cpy_r_r57 = PyList_New(0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 38, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    cpy_r_r58 = CPY_INT_TAG;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = CPyDef_types___Instance(cpy_r_superclass, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 38, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    return cpy_r_r62;
CPyL40: ;
    cpy_r_r63 = CPyDef_maptype___map_instance_to_supertypes(cpy_r_instance, cpy_r_superclass);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 40, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    cpy_r_r64 = CPyList_GetItemShort(cpy_r_r63, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 40, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_types___Instance))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertype", 40, CPyStatic_maptype___globals, "mypy.types.Instance", cpy_r_r64);
        goto CPyL44;
    }
    return cpy_r_r65;
CPyL44: ;
    cpy_r_r66 = NULL;
    return cpy_r_r66;
CPyL45: ;
    CPy_DECREF(cpy_r_alias);
    goto CPyL15;
CPyL46: ;
    CPy_DecRef(cpy_r_alias);
    goto CPyL44;
CPyL47: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL21;
CPyL48: ;
    CPy_DecRef(cpy_r_env);
    goto CPyL44;
CPyL49: ;
    CPy_DECREF(cpy_r_tuple_type);
    goto CPyL35;
CPyL50: ;
    CPy_DecRef(cpy_r_tuple_type);
    goto CPyL44;
}

PyObject *CPyPy_maptype___map_instance_to_supertype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"instance", "superclass", 0};
    static CPyArg_Parser parser = {"OO:map_instance_to_supertype", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_superclass;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_superclass)) {
        return NULL;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *arg_superclass;
    if (likely((Py_TYPE(obj_superclass) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_superclass) == CPyType_nodes___TypeInfo)))
        arg_superclass = obj_superclass;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_superclass); 
        goto fail;
    }
    PyObject *retval = CPyDef_maptype___map_instance_to_supertype(arg_instance, arg_superclass);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertype", 8, CPyStatic_maptype___globals);
    return NULL;
}

PyObject *CPyDef_maptype___map_instance_to_supertypes(PyObject *cpy_r_instance, PyObject *cpy_r_supertype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_sup;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_a;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 46, CPyStatic_maptype___globals);
        goto CPyL29;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_maptype___class_derivation_paths(cpy_r_r1, cpy_r_supertype);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 47, CPyStatic_maptype___globals);
        goto CPyL30;
    }
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL31;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertypes", 47, CPyStatic_maptype___globals, "list", cpy_r_r8);
        goto CPyL32;
    }
    cpy_r_path = cpy_r_r9;
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 48, CPyStatic_maptype___globals);
        goto CPyL33;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_instance);
    *(PyObject * *)cpy_r_r12 = cpy_r_instance;
    cpy_r_types = cpy_r_r10;
    cpy_r_r13 = 0;
CPyL7: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_path)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL34;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_path, cpy_r_r13);
    if (likely((Py_TYPE(cpy_r_r18) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r18) == CPyType_nodes___TypeInfo)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertypes", 49, CPyStatic_maptype___globals, "mypy.nodes.TypeInfo", cpy_r_r18);
        goto CPyL35;
    }
    cpy_r_sup = cpy_r_r19;
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 50, CPyStatic_maptype___globals);
        goto CPyL36;
    }
    cpy_r_a = cpy_r_r20;
    cpy_r_r21 = 0;
CPyL11: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL37;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_types___Instance))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_supertypes", 51, CPyStatic_maptype___globals, "mypy.types.Instance", cpy_r_r26);
        goto CPyL38;
    }
    cpy_r_t = cpy_r_r27;
    cpy_r_r28 = CPyDef_maptype___map_instance_to_direct_supertypes(cpy_r_t, cpy_r_sup);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 52, CPyStatic_maptype___globals);
        goto CPyL38;
    }
    cpy_r_r29 = CPyList_Extend(cpy_r_a, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 52, CPyStatic_maptype___globals);
        goto CPyL38;
    } else
        goto CPyL39;
CPyL15: ;
    cpy_r_r30 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r30;
    goto CPyL11;
CPyL16: ;
    cpy_r_types = cpy_r_a;
    cpy_r_r31 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r31;
    goto CPyL7;
CPyL18: ;
    cpy_r_r32 = CPyList_Extend(cpy_r_result, cpy_r_types);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 54, CPyStatic_maptype___globals);
        goto CPyL32;
    } else
        goto CPyL40;
CPyL19: ;
    cpy_r_r33 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r33;
    goto CPyL3;
CPyL20: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = cpy_r_r36 != 0;
    if (!cpy_r_r37) goto CPyL41;
    return cpy_r_result;
CPyL22: ;
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPyDef_types___AnyType(10, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 59, CPyStatic_maptype___globals);
        goto CPyL29;
    }
    cpy_r_any_type = cpy_r_r42;
    cpy_r_r43 = PyList_New(1);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 60, CPyStatic_maptype___globals);
        goto CPyL42;
    }
    cpy_r_r44 = (CPyPtr)&((PyListObject *)cpy_r_r43)->ob_item;
    cpy_r_r45 = *(CPyPtr *)cpy_r_r44;
    *(PyObject * *)cpy_r_r45 = cpy_r_any_type;
    cpy_r_r46 = ((mypy___nodes___TypeInfoObject *)cpy_r_supertype)->_type_vars;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_supertypes", "TypeInfo", "type_vars", 60, CPyStatic_maptype___globals);
        goto CPyL43;
    }
CPyL25: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = CPySequence_Multiply(cpy_r_r43, cpy_r_r49);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 60, CPyStatic_maptype___globals);
        goto CPyL29;
    }
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = NULL;
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_types___Instance(cpy_r_supertype, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 60, CPyStatic_maptype___globals);
        goto CPyL29;
    }
    cpy_r_r56 = PyList_New(1);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 60, CPyStatic_maptype___globals);
        goto CPyL44;
    }
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r56)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    *(PyObject * *)cpy_r_r58 = cpy_r_r55;
    return cpy_r_r56;
CPyL29: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL20;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_path);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL18;
CPyL35: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_types);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_sup);
    goto CPyL29;
CPyL37: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_sup);
    goto CPyL16;
CPyL38: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_sup);
    CPy_DecRef(cpy_r_a);
    goto CPyL29;
CPyL39: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL15;
CPyL40: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL19;
CPyL41: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL22;
CPyL42: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL29;
CPyL44: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL29;
}

PyObject *CPyPy_maptype___map_instance_to_supertypes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"instance", "supertype", 0};
    static CPyArg_Parser parser = {"OO:map_instance_to_supertypes", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_supertype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_supertype)) {
        return NULL;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *arg_supertype;
    if (likely((Py_TYPE(obj_supertype) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_supertype) == CPyType_nodes___TypeInfo)))
        arg_supertype = obj_supertype;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_supertype); 
        goto fail;
    }
    PyObject *retval = CPyDef_maptype___map_instance_to_supertypes(arg_instance, arg_supertype);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/maptype.py", "map_instance_to_supertypes", 43, CPyStatic_maptype___globals);
    return NULL;
}

PyObject *CPyDef_maptype___class_derivation_paths(PyObject *cpy_r_typ, PyObject *cpy_r_supertype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_btype;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 73, CPyStatic_maptype___globals);
        goto CPyL19;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_bases;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "class_derivation_paths", "TypeInfo", "bases", 75, CPyStatic_maptype___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL21;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___Instance))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "class_derivation_paths", 75, CPyStatic_maptype___globals, "mypy.types.Instance", cpy_r_r7);
        goto CPyL22;
    }
    cpy_r_base = cpy_r_r8;
    cpy_r_r9 = ((mypy___types___InstanceObject *)cpy_r_base)->_type;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_base);
    cpy_r_btype = cpy_r_r9;
    cpy_r_r10 = cpy_r_btype == cpy_r_supertype;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 78, CPyStatic_maptype___globals);
        goto CPyL23;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_btype;
    cpy_r_r14 = PyList_Append(cpy_r_result, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 78, CPyStatic_maptype___globals);
        goto CPyL22;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r16 = CPyDef_maptype___class_derivation_paths(cpy_r_btype, cpy_r_supertype);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 81, CPyStatic_maptype___globals);
        goto CPyL23;
    }
    cpy_r_r17 = 0;
CPyL10: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL24;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "class_derivation_paths", 81, CPyStatic_maptype___globals, "list", cpy_r_r22);
        goto CPyL25;
    }
    cpy_r_path = cpy_r_r23;
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 82, CPyStatic_maptype___globals);
        goto CPyL26;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    CPy_INCREF(cpy_r_btype);
    *(PyObject * *)cpy_r_r26 = cpy_r_btype;
    cpy_r_r27 = PyNumber_Add(cpy_r_r24, cpy_r_path);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 82, CPyStatic_maptype___globals);
        goto CPyL25;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "class_derivation_paths", 82, CPyStatic_maptype___globals, "list", cpy_r_r27);
        goto CPyL25;
    }
    cpy_r_r29 = PyList_Append(cpy_r_result, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 82, CPyStatic_maptype___globals);
        goto CPyL25;
    }
    cpy_r_r31 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r31;
    goto CPyL10;
CPyL17: ;
    cpy_r_r32 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r32;
    goto CPyL3;
CPyL18: ;
    return cpy_r_result;
CPyL19: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL20: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL19;
CPyL21: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_btype);
    goto CPyL19;
CPyL24: ;
    CPy_DECREF(cpy_r_btype);
    CPy_DECREF(cpy_r_r16);
    goto CPyL17;
CPyL25: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_btype);
    CPy_DecRef(cpy_r_r16);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_btype);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_path);
    goto CPyL19;
}

PyObject *CPyPy_maptype___class_derivation_paths(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "supertype", 0};
    static CPyArg_Parser parser = {"OO:class_derivation_paths", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_supertype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_supertype)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    PyObject *arg_supertype;
    if (likely((Py_TYPE(obj_supertype) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_supertype) == CPyType_nodes___TypeInfo)))
        arg_supertype = obj_supertype;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_supertype); 
        goto fail;
    }
    PyObject *retval = CPyDef_maptype___class_derivation_paths(arg_typ, arg_supertype);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/maptype.py", "class_derivation_paths", 63, CPyStatic_maptype___globals);
    return NULL;
}

PyObject *CPyDef_maptype___map_instance_to_direct_supertypes(PyObject *cpy_r_instance, PyObject *cpy_r_supertype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_b;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_env;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 90, CPyStatic_maptype___globals);
        goto CPyL25;
    }
    cpy_r_result = cpy_r_r1;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_typ)->_bases;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'bases' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 92, CPyStatic_maptype___globals);
        goto CPyL26;
    }
CPyL2: ;
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL27;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 92, CPyStatic_maptype___globals, "mypy.types.Instance", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_b = cpy_r_r9;
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_b)->_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r10 == cpy_r_supertype;
    CPy_DECREF(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL29;
    cpy_r_r12 = CPyDef_maptype___instance_to_type_environment(cpy_r_instance);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 94, CPyStatic_maptype___globals);
        goto CPyL30;
    }
    cpy_r_env = cpy_r_r12;
    cpy_r_r13 = CPyDef_expandtype___expand_type(cpy_r_b, cpy_r_env);
    CPy_DECREF(cpy_r_b);
    CPy_DECREF(cpy_r_env);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 95, CPyStatic_maptype___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___ProperType)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 95, CPyStatic_maptype___globals, "mypy.types.ProperType", cpy_r_r13);
        goto CPyL28;
    }
    cpy_r_t = cpy_r_r14;
    cpy_r_r15 = (PyObject *)CPyType_types___Instance;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (cpy_r_r18) {
        goto CPyL12;
    } else
        goto CPyL31;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 96, CPyStatic_maptype___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r20 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 97, CPyStatic_maptype___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL28;
    }
    cpy_r_r21 = PyList_Append(cpy_r_result, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 97, CPyStatic_maptype___globals);
        goto CPyL28;
    }
CPyL14: ;
    cpy_r_r23 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r23;
    goto CPyL3;
CPyL15: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_result)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_r26 != 0;
    if (!cpy_r_r27) goto CPyL32;
    return cpy_r_result;
CPyL17: ;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPyDef_types___AnyType(2, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 104, CPyStatic_maptype___globals);
        goto CPyL24;
    }
    cpy_r_any_type = cpy_r_r32;
    cpy_r_r33 = PyList_New(1);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 105, CPyStatic_maptype___globals);
        goto CPyL33;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    *(PyObject * *)cpy_r_r35 = cpy_r_any_type;
    cpy_r_r36 = ((mypy___nodes___TypeInfoObject *)cpy_r_supertype)->_type_vars;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "map_instance_to_direct_supertypes", "TypeInfo", "type_vars", 105, CPyStatic_maptype___globals);
        goto CPyL34;
    }
CPyL20: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = CPySequence_Multiply(cpy_r_r33, cpy_r_r39);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 105, CPyStatic_maptype___globals);
        goto CPyL24;
    }
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_types___Instance(cpy_r_supertype, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 105, CPyStatic_maptype___globals);
        goto CPyL24;
    }
    cpy_r_r46 = PyList_New(1);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 105, CPyStatic_maptype___globals);
        goto CPyL35;
    }
    cpy_r_r47 = (CPyPtr)&((PyListObject *)cpy_r_r46)->ob_item;
    cpy_r_r48 = *(CPyPtr *)cpy_r_r47;
    *(PyObject * *)cpy_r_r48 = cpy_r_r45;
    return cpy_r_r46;
CPyL24: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL25: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL15;
CPyL28: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_b);
    goto CPyL14;
CPyL30: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_b);
    goto CPyL24;
CPyL31: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_t);
    goto CPyL10;
CPyL32: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL17;
CPyL33: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL24;
CPyL34: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL24;
}

PyObject *CPyPy_maptype___map_instance_to_direct_supertypes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"instance", "supertype", 0};
    static CPyArg_Parser parser = {"OO:map_instance_to_direct_supertypes", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_supertype;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_supertype)) {
        return NULL;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *arg_supertype;
    if (likely((Py_TYPE(obj_supertype) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_supertype) == CPyType_nodes___TypeInfo)))
        arg_supertype = obj_supertype;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_supertype); 
        goto fail;
    }
    PyObject *retval = CPyDef_maptype___map_instance_to_direct_supertypes(arg_instance, arg_supertype);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/maptype.py", "map_instance_to_direct_supertypes", 87, CPyStatic_maptype___globals);
    return NULL;
}

PyObject *CPyDef_maptype___instance_to_type_environment(PyObject *cpy_r_instance) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_binder;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "instance_to_type_environment", 118, CPyStatic_maptype___globals);
        goto CPyL11;
    }
    cpy_r_r1 = ((mypy___types___InstanceObject *)cpy_r_instance)->_type;
    cpy_r_r2 = ((mypy___nodes___TypeInfoObject *)cpy_r_r1)->_defn;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/maptype.py", "instance_to_type_environment", "TypeInfo", "defn", 118, CPyStatic_maptype___globals);
        goto CPyL12;
    }
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_type_vars;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_instance)->_args;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL3: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL13;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___TypeVarLikeType)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "instance_to_type_environment", 118, CPyStatic_maptype___globals, "mypy.types.TypeVarLikeType", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_binder = cpy_r_r16;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "instance_to_type_environment", 118, CPyStatic_maptype___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/maptype.py", "instance_to_type_environment", 118, CPyStatic_maptype___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL15;
    }
    cpy_r_arg = cpy_r_r18;
    cpy_r_r19 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_binder)->_id;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_binder);
    cpy_r_r20 = CPyDict_SetItem(cpy_r_r0, cpy_r_r19, cpy_r_arg);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/maptype.py", "instance_to_type_environment", 118, CPyStatic_maptype___globals);
        goto CPyL14;
    }
    cpy_r_r22 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r22;
    cpy_r_r23 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r23;
    goto CPyL3;
CPyL10: ;
    return cpy_r_r0;
CPyL11: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_binder);
    goto CPyL11;
}

PyObject *CPyPy_maptype___instance_to_type_environment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"instance", 0};
    static CPyArg_Parser parser = {"O:instance_to_type_environment", kwlist, 0};
    PyObject *obj_instance;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_instance)) {
        return NULL;
    }
    PyObject *arg_instance;
    if (likely(Py_TYPE(obj_instance) == CPyType_types___Instance))
        arg_instance = obj_instance;
    else {
        CPy_TypeError("mypy.types.Instance", obj_instance); 
        goto fail;
    }
    PyObject *retval = CPyDef_maptype___instance_to_type_environment(arg_instance);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/maptype.py", "instance_to_type_environment", 108, CPyStatic_maptype___globals);
    return NULL;
}

char CPyDef_maptype_____top_level__(void) {
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
        CPy_AddTraceback("mypy/maptype.py", "<module>", -1, CPyStatic_maptype___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_maptype___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "<module>", 1, CPyStatic_maptype___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9494]; /* ('expand_type',) */
    cpy_r_r10 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r11 = CPyStatic_maptype___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "<module>", 3, CPyStatic_maptype___globals);
        goto CPyL8;
    }
    CPyModule_mypy___expandtype = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9495]; /* ('TypeInfo',) */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_maptype___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "<module>", 4, CPyStatic_maptype___globals);
        goto CPyL8;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9496]; /* ('AnyType', 'Instance', 'TupleType', 'Type', 'TypeOfAny',
                                     'TypeVarId', 'has_type_vars') */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_maptype___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/maptype.py", "<module>", 5, CPyStatic_maptype___globals);
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
