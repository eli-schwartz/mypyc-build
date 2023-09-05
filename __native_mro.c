#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef mro___MroError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef mro___MroError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mro___MroError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mro___MroError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MroError",
    .tp_getset = mro___MroError_getseters,
    .tp_methods = mro___MroError_methods,
    .tp_members = mro___MroError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_mro___MroError_template = &CPyType_mro___MroError_template_;

static PyMethodDef mromodule_methods[] = {
    {"calculate_mro", (PyCFunction)CPyPy_mro___calculate_mro, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"linearize_hierarchy", (PyCFunction)CPyPy_mro___linearize_hierarchy, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"merge", (PyCFunction)CPyPy_mro___merge, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mromodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.mro",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mromodule_methods
};

PyObject *CPyInit_mypy___mro(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___mro_internal) {
        Py_INCREF(CPyModule_mypy___mro_internal);
        return CPyModule_mypy___mro_internal;
    }
    CPyModule_mypy___mro_internal = PyModule_Create(&mromodule);
    if (unlikely(CPyModule_mypy___mro_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___mro_internal, "__name__");
    CPyStatic_mro___globals = PyModule_GetDict(CPyModule_mypy___mro_internal);
    if (unlikely(CPyStatic_mro___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mro_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___mro_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___mro_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_mro___MroError);
    return NULL;
}

char CPyDef_mro___calculate_mro(PyObject *cpy_r_info, PyObject *cpy_r_obj_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_mro;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_baseinfo;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    if (cpy_r_obj_type != NULL) goto CPyL26;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_obj_type = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef_mro___linearize_hierarchy(cpy_r_info, cpy_r_obj_type);
    CPy_DECREF(cpy_r_obj_type);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 15, CPyStatic_mro___globals);
        goto CPyL25;
    }
    cpy_r_mro = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_mro)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL10;
    } else
        goto CPyL27;
CPyL4: ;
    cpy_r_r6 = CPyStatics[3927]; /* 'Could not produce a MRO at all for ' */
    cpy_r_r7 = PyObject_Str(cpy_r_info);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 16, CPyStatic_mro___globals);
        goto CPyL25;
    }
    cpy_r_r8 = CPyStr_Build(2, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 16, CPyStatic_mro___globals);
        goto CPyL25;
    }
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 16, CPyStatic_mro___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r8};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 16, CPyStatic_mro___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r8);
    CPy_Raise(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 16, CPyStatic_mro___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL10: ;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro = cpy_r_mro;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 17, CPyStatic_mro___globals);
        goto CPyL25;
    }
    cpy_r_r16 = 0;
    cpy_r_r17 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/mro.py", "calculate_mro", "TypeInfo", "mro", 19, CPyStatic_mro___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r17);
CPyL12: ;
    cpy_r_r18 = 0;
CPyL13: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL29;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (likely((Py_TYPE(cpy_r_r23) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r23) == CPyType_nodes___TypeInfo)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "calculate_mro", 19, CPyStatic_mro___globals, "mypy.nodes.TypeInfo", cpy_r_r23);
        goto CPyL30;
    }
    cpy_r_baseinfo = cpy_r_r24;
    cpy_r_r25 = ((mypy___nodes___TypeInfoObject *)cpy_r_baseinfo)->_fallback_to_any;
    if (unlikely(cpy_r_r25 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'fallback_to_any' of 'TypeInfo' undefined");
    }
    CPy_DECREF(cpy_r_baseinfo);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 19, CPyStatic_mro___globals);
        goto CPyL30;
    }
CPyL16: ;
    if (cpy_r_r25) {
        goto CPyL31;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r16 = 1;
    goto CPyL19;
CPyL18: ;
    cpy_r_r26 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r26;
    goto CPyL13;
CPyL19: ;
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_fallback_to_any = cpy_r_r16;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 19, CPyStatic_mro___globals);
        goto CPyL25;
    }
    cpy_r_r28 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r28 != NULL)) goto CPyL23;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 20, CPyStatic_mro___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r30 = CPyDef_typestate___TypeState___reset_all_subtype_caches_for(cpy_r_r28, cpy_r_info);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/mro.py", "calculate_mro", 20, CPyStatic_mro___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL26: ;
    CPy_INCREF(cpy_r_obj_type);
    goto CPyL2;
CPyL27: ;
    CPy_DECREF(cpy_r_mro);
    goto CPyL4;
CPyL28: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL25;
CPyL29: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL19;
CPyL30: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL17;
}

PyObject *CPyPy_mro___calculate_mro(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "obj_type", 0};
    static CPyArg_Parser parser = {"O|O:calculate_mro", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_obj_type = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_obj_type)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_obj_type;
    if (obj_obj_type == NULL) {
        arg_obj_type = NULL;
        goto __LL3717;
    }
    arg_obj_type = obj_obj_type;
    if (arg_obj_type != NULL) goto __LL3717;
    if (obj_obj_type == Py_None)
        arg_obj_type = obj_obj_type;
    else {
        arg_obj_type = NULL;
    }
    if (arg_obj_type != NULL) goto __LL3717;
    CPy_TypeError("object or None", obj_obj_type); 
    goto fail;
__LL3717: ;
    char retval = CPyDef_mro___calculate_mro(arg_info, arg_obj_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/mro.py", "calculate_mro", 10, CPyStatic_mro___globals);
    return NULL;
}

PyObject *CPyDef_mro___linearize_hierarchy(PyObject *cpy_r_info, PyObject *cpy_r_obj_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_bases;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_lin_bases;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    if (cpy_r_obj_type != NULL) goto CPyL40;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_obj_type = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/mro.py", "linearize_hierarchy", "TypeInfo", "mro", 31, CPyStatic_mro___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r1);
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL42;
    } else
        goto CPyL6;
CPyL4: ;
    cpy_r_r6 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/mro.py", "linearize_hierarchy", "TypeInfo", "mro", 32, CPyStatic_mro___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r7 = CPyDef_nodes___TypeInfo___direct_base_classes(cpy_r_info);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 33, CPyStatic_mro___globals);
        goto CPyL41;
    }
    cpy_r_bases = cpy_r_r7;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r10 != 0;
    if (cpy_r_r11) goto CPyL18;
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 34, CPyStatic_mro___globals);
        goto CPyL43;
    }
CPyL9: ;
    cpy_r_r13 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL12;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL12;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 34, CPyStatic_mro___globals);
        goto CPyL43;
    }
CPyL12: ;
    cpy_r_r19 = cpy_r_r14 != 0;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_obj_type != cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL44;
    } else
        goto CPyL18;
CPyL14: ;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_obj_type, 0, 0, 0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 37, CPyStatic_mro___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_types___Instance))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "linearize_hierarchy", 37, CPyStatic_mro___globals, "mypy.types.Instance", cpy_r_r22);
        goto CPyL45;
    }
    cpy_r_r24 = ((mypy___types___InstanceObject *)cpy_r_r23)->_type;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 37, CPyStatic_mro___globals);
        goto CPyL46;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_r24;
    cpy_r_bases = cpy_r_r25;
CPyL18: ;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 38, CPyStatic_mro___globals);
        goto CPyL43;
    }
    cpy_r_lin_bases = cpy_r_r28;
    cpy_r_r29 = 0;
CPyL20: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_bases)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL47;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_bases, cpy_r_r29);
    if (likely((Py_TYPE(cpy_r_r34) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r34) == CPyType_nodes___TypeInfo)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "linearize_hierarchy", 39, CPyStatic_mro___globals, "mypy.nodes.TypeInfo", cpy_r_r34);
        goto CPyL48;
    }
    cpy_r_base = cpy_r_r35;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_base != cpy_r_r36;
    if (cpy_r_r37) {
        goto CPyL30;
    } else
        goto CPyL49;
CPyL23: ;
    cpy_r_r38 = CPyStatics[3928]; /* 'Cannot linearize bases for ' */
    cpy_r_r39 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL50;
    }
CPyL24: ;
    cpy_r_r40 = CPyStatics[295]; /* ' ' */
    cpy_r_r41 = PyObject_Str(cpy_r_bases);
    CPy_DECREF(cpy_r_bases);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL51;
    }
    cpy_r_r42 = CPyStr_Build(4, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL39;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_Raise(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 40, CPyStatic_mro___globals);
        goto CPyL39;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r49 = CPyDef_mro___linearize_hierarchy(cpy_r_base, cpy_r_obj_type);
    CPy_DECREF(cpy_r_base);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 41, CPyStatic_mro___globals);
        goto CPyL48;
    }
    cpy_r_r50 = PyList_Append(cpy_r_lin_bases, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 41, CPyStatic_mro___globals);
        goto CPyL48;
    }
    cpy_r_r52 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r52;
    goto CPyL20;
CPyL33: ;
    cpy_r_r53 = PyList_Append(cpy_r_lin_bases, cpy_r_bases);
    CPy_DECREF(cpy_r_bases);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 42, CPyStatic_mro___globals);
        goto CPyL53;
    }
    cpy_r_r55 = PyList_New(1);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 43, CPyStatic_mro___globals);
        goto CPyL53;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    CPy_INCREF(cpy_r_info);
    *(PyObject * *)cpy_r_r57 = cpy_r_info;
    cpy_r_r58 = CPyDef_mro___merge(cpy_r_lin_bases);
    CPy_DECREF(cpy_r_lin_bases);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 43, CPyStatic_mro___globals);
        goto CPyL54;
    }
    cpy_r_r59 = PyNumber_Add(cpy_r_r55, cpy_r_r58);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 43, CPyStatic_mro___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "linearize_hierarchy", 43, CPyStatic_mro___globals, "list", cpy_r_r59);
        goto CPyL39;
    }
    return cpy_r_r60;
CPyL39: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL40: ;
    CPy_INCREF(cpy_r_obj_type);
    goto CPyL2;
CPyL41: ;
    CPy_DecRef(cpy_r_obj_type);
    goto CPyL39;
CPyL42: ;
    CPy_DECREF(cpy_r_obj_type);
    goto CPyL4;
CPyL43: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_bases);
    goto CPyL39;
CPyL44: ;
    CPy_DECREF(cpy_r_bases);
    goto CPyL14;
CPyL45: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r22);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r24);
    goto CPyL39;
CPyL47: ;
    CPy_DECREF(cpy_r_obj_type);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_bases);
    CPy_DecRef(cpy_r_lin_bases);
    goto CPyL39;
CPyL49: ;
    CPy_DECREF(cpy_r_obj_type);
    CPy_DECREF(cpy_r_lin_bases);
    CPy_DECREF(cpy_r_base);
    goto CPyL23;
CPyL50: ;
    CPy_DecRef(cpy_r_bases);
    goto CPyL39;
CPyL51: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL39;
CPyL52: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL39;
CPyL53: ;
    CPy_DecRef(cpy_r_lin_bases);
    goto CPyL39;
CPyL54: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL39;
}

PyObject *CPyPy_mro___linearize_hierarchy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", "obj_type", 0};
    static CPyArg_Parser parser = {"O|O:linearize_hierarchy", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_obj_type = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_obj_type)) {
        return NULL;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_obj_type;
    if (obj_obj_type == NULL) {
        arg_obj_type = NULL;
        goto __LL3718;
    }
    arg_obj_type = obj_obj_type;
    if (arg_obj_type != NULL) goto __LL3718;
    if (obj_obj_type == Py_None)
        arg_obj_type = obj_obj_type;
    else {
        arg_obj_type = NULL;
    }
    if (arg_obj_type != NULL) goto __LL3718;
    CPy_TypeError("object or None", obj_obj_type); 
    goto fail;
__LL3718: ;
    PyObject *retval = CPyDef_mro___linearize_hierarchy(arg_info, arg_obj_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mro.py", "linearize_hierarchy", 27, CPyStatic_mro___globals);
    return NULL;
}

PyObject *CPyDef_mro___merge(PyObject *cpy_r_seqs) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_s_2;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_seq;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_head;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_s_3;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_s_4;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = PyList_New(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 47, CPyStatic_mro___globals);
        goto CPyL51;
    }
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_seqs, cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 47, CPyStatic_mro___globals, "list", cpy_r_r8);
        goto CPyL52;
    }
    cpy_r_s = cpy_r_r9;
    cpy_r_r10 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r11[1] = {cpy_r_s};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 47, CPyStatic_mro___globals);
        goto CPyL53;
    }
    CPy_DECREF(cpy_r_s);
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 47, CPyStatic_mro___globals, "list", cpy_r_r13);
        goto CPyL52;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r2, cpy_r_r3, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 47, CPyStatic_mro___globals);
        goto CPyL52;
    }
    cpy_r_r16 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r16;
    goto CPyL2;
CPyL8: ;
    cpy_r_seqs = cpy_r_r2;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 48, CPyStatic_mro___globals);
        goto CPyL54;
    }
    cpy_r_result = cpy_r_r17;
CPyL10: ;
    if (!1) goto CPyL55;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 50, CPyStatic_mro___globals);
        goto CPyL56;
    }
    cpy_r_r19 = 0;
CPyL13: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL57;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_seqs, cpy_r_r19);
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 50, CPyStatic_mro___globals, "list", cpy_r_r24);
        goto CPyL58;
    }
    cpy_r_s_2 = cpy_r_r25;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_s_2)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (!cpy_r_r29) goto CPyL59;
    cpy_r_r30 = PyList_Append(cpy_r_r18, cpy_r_s_2);
    CPy_DECREF(cpy_r_s_2);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 50, CPyStatic_mro___globals);
        goto CPyL58;
    }
CPyL17: ;
    cpy_r_r32 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r32;
    goto CPyL13;
CPyL18: ;
    cpy_r_seqs = cpy_r_r18;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (cpy_r_r36) {
        goto CPyL20;
    } else
        goto CPyL60;
CPyL19: ;
    return cpy_r_result;
CPyL20: ;
    cpy_r_r37 = 0;
CPyL21: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL61;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_seqs, cpy_r_r37);
    if (likely(PyList_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 53, CPyStatic_mro___globals, "list", cpy_r_r42);
        goto CPyL56;
    }
    cpy_r_seq = cpy_r_r43;
    cpy_r_r44 = CPyList_GetItemShort(cpy_r_seq, 0);
    CPy_DECREF(cpy_r_seq);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 54, CPyStatic_mro___globals);
        goto CPyL56;
    }
    if (likely((Py_TYPE(cpy_r_r44) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r44) == CPyType_nodes___TypeInfo)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 54, CPyStatic_mro___globals, "mypy.nodes.TypeInfo", cpy_r_r44);
        goto CPyL56;
    }
    cpy_r_head = cpy_r_r45;
    cpy_r_r46 = PyList_New(0);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals);
        goto CPyL62;
    }
    cpy_r_r47 = 0;
CPyL27: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r51) goto CPyL35;
    cpy_r_r52 = CPyList_GetItemUnsafe(cpy_r_seqs, cpy_r_r47);
    if (likely(PyList_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals, "list", cpy_r_r52);
        goto CPyL63;
    }
    cpy_r_s_3 = cpy_r_r53;
    cpy_r_r54 = CPyList_GetSlice(cpy_r_s_3, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals, "list", cpy_r_r54);
        goto CPyL64;
    }
    cpy_r_r56 = PySequence_Contains(cpy_r_r55, cpy_r_head);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals);
        goto CPyL64;
    }
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL65;
    cpy_r_r59 = PyList_Append(cpy_r_r46, cpy_r_s_3);
    CPy_DECREF(cpy_r_s_3);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 55, CPyStatic_mro___globals);
        goto CPyL63;
    }
CPyL34: ;
    cpy_r_r61 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r61;
    goto CPyL27;
CPyL35: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r46)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    CPy_DECREF(cpy_r_r46);
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = cpy_r_r64 != 0;
    if (cpy_r_r65) {
        goto CPyL66;
    } else
        goto CPyL41;
CPyL36: ;
    cpy_r_r66 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r66;
    goto CPyL21;
CPyL37: ;
    cpy_r_r67 = (PyObject *)CPyType_mro___MroError;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r67, 0, 0, 0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 58, CPyStatic_mro___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_mro___MroError))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 58, CPyStatic_mro___globals, "mypy.mro.MroError", cpy_r_r68);
        goto CPyL51;
    }
    CPy_Raise(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 58, CPyStatic_mro___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r70 = PyList_Append(cpy_r_result, cpy_r_head);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 59, CPyStatic_mro___globals);
        goto CPyL62;
    }
    cpy_r_r72 = 0;
CPyL43: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_seqs)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL67;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_seqs, cpy_r_r72);
    if (likely(PyList_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 60, CPyStatic_mro___globals, "list", cpy_r_r77);
        goto CPyL62;
    }
    cpy_r_s_4 = cpy_r_r78;
    cpy_r_r79 = CPyList_GetItemShort(cpy_r_s_4, 0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 61, CPyStatic_mro___globals);
        goto CPyL68;
    }
    if (likely((Py_TYPE(cpy_r_r79) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r79) == CPyType_nodes___TypeInfo)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/mro.py", "merge", 61, CPyStatic_mro___globals, "mypy.nodes.TypeInfo", cpy_r_r79);
        goto CPyL68;
    }
    cpy_r_r81 = cpy_r_r80 == cpy_r_head;
    CPy_DECREF(cpy_r_r80);
    if (!cpy_r_r81) goto CPyL69;
    cpy_r_r82 = CPyStatics[9015]; /* 0 */
    cpy_r_r83 = PyObject_DelItem(cpy_r_s_4, cpy_r_r82);
    CPy_DECREF(cpy_r_s_4);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/mro.py", "merge", 62, CPyStatic_mro___globals);
        goto CPyL62;
    }
CPyL49: ;
    cpy_r_r85 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r85;
    goto CPyL43;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r86 = NULL;
    return cpy_r_r86;
CPyL52: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_s);
    goto CPyL51;
CPyL54: ;
    CPy_DecRef(cpy_r_seqs);
    goto CPyL51;
CPyL55: ;
    CPy_DECREF(cpy_r_seqs);
    CPy_DECREF(cpy_r_result);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    goto CPyL51;
CPyL57: ;
    CPy_DECREF(cpy_r_seqs);
    goto CPyL18;
CPyL58: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r18);
    goto CPyL51;
CPyL59: ;
    CPy_DECREF(cpy_r_s_2);
    goto CPyL17;
CPyL60: ;
    CPy_DECREF(cpy_r_seqs);
    goto CPyL19;
CPyL61: ;
    CPy_DECREF(cpy_r_seqs);
    CPy_DECREF(cpy_r_result);
    goto CPyL37;
CPyL62: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_head);
    goto CPyL51;
CPyL63: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_head);
    CPy_DecRef(cpy_r_r46);
    goto CPyL51;
CPyL64: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_head);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_s_3);
    goto CPyL51;
CPyL65: ;
    CPy_DECREF(cpy_r_s_3);
    goto CPyL34;
CPyL66: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL36;
CPyL67: ;
    CPy_DECREF(cpy_r_head);
    goto CPyL10;
CPyL68: ;
    CPy_DecRef(cpy_r_seqs);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_head);
    CPy_DecRef(cpy_r_s_4);
    goto CPyL51;
CPyL69: ;
    CPy_DECREF(cpy_r_s_4);
    goto CPyL49;
}

PyObject *CPyPy_mro___merge(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"seqs", 0};
    static CPyArg_Parser parser = {"O:merge", kwlist, 0};
    PyObject *obj_seqs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_seqs)) {
        return NULL;
    }
    PyObject *arg_seqs;
    if (likely(PyList_Check(obj_seqs)))
        arg_seqs = obj_seqs;
    else {
        CPy_TypeError("list", obj_seqs); 
        goto fail;
    }
    PyObject *retval = CPyDef_mro___merge(arg_seqs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/mro.py", "merge", 46, CPyStatic_mro___globals);
    return NULL;
}

char CPyDef_mro_____top_level__(void) {
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
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", -1, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mro___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 1, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9429]; /* ('Callable',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_mro___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 3, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9495]; /* ('TypeInfo',) */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_mro___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 5, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9549]; /* ('Instance',) */
    cpy_r_r18 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r19 = CPyStatic_mro___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 6, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule_mypy___types = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9241]; /* ('type_state',) */
    cpy_r_r22 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r23 = CPyStatic_mro___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 7, CPyStatic_mro___globals);
        goto CPyL15;
    }
    CPyModule_mypy___typestate = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___typestate);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL15;
    }
    cpy_r_r28 = PyTuple_Pack(1, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL15;
    }
    cpy_r_r29 = CPyStatics[942]; /* 'mypy.mro' */
    cpy_r_r30 = (PyObject *)CPyType_mro___MroError_template;
    cpy_r_r31 = CPyType_FromTemplate(cpy_r_r30, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL15;
    }
    cpy_r_r32 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r33 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r34 = PyTuple_Pack(1, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL16;
    }
    cpy_r_r35 = PyObject_SetAttr(cpy_r_r31, cpy_r_r32, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL16;
    }
    CPyType_mro___MroError = (PyTypeObject *)cpy_r_r31;
    CPy_INCREF(CPyType_mro___MroError);
    cpy_r_r37 = CPyStatic_mro___globals;
    cpy_r_r38 = CPyStatics[940]; /* 'MroError' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/mro.py", "<module>", 23, CPyStatic_mro___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL16: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL15;
}
