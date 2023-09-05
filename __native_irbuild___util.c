#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef irbuild___utilmodule_methods[] = {
    {"is_trait_decorator", (PyCFunction)CPyPy_irbuild___util___is_trait_decorator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_trait", (PyCFunction)CPyPy_irbuild___util___is_trait, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dataclass_decorator_type", (PyCFunction)CPyPy_irbuild___util___dataclass_decorator_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_dataclass_decorator", (PyCFunction)CPyPy_irbuild___util___is_dataclass_decorator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_dataclass", (PyCFunction)CPyPy_irbuild___util___is_dataclass, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dataclass_type", (PyCFunction)CPyPy_irbuild___util___dataclass_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_mypyc_attr_literal", (PyCFunction)CPyPy_irbuild___util___get_mypyc_attr_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_mypyc_attr_call", (PyCFunction)CPyPy_irbuild___util___get_mypyc_attr_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_mypyc_attrs", (PyCFunction)CPyPy_irbuild___util___get_mypyc_attrs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_extension_class", (PyCFunction)CPyPy_irbuild___util___is_extension_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_func_def", (PyCFunction)CPyPy_irbuild___util___get_func_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"concrete_arg_kind", (PyCFunction)CPyPy_irbuild___util___concrete_arg_kind, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_constant", (PyCFunction)CPyPy_irbuild___util___is_constant, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"bytes_from_str", (PyCFunction)CPyPy_irbuild___util___bytes_from_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef irbuild___utilmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.util",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    irbuild___utilmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___util(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___util_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___util_internal);
        return CPyModule_mypyc___irbuild___util_internal;
    }
    CPyModule_mypyc___irbuild___util_internal = PyModule_Create(&irbuild___utilmodule);
    if (unlikely(CPyModule_mypyc___irbuild___util_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___util_internal, "__name__");
    CPyStatic_irbuild___util___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___util_internal);
    if (unlikely(CPyStatic_irbuild___util___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_irbuild___util_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___util_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___util_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_irbuild___util___is_trait_decorator(PyObject *cpy_r_d) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (cpy_r_r9) goto CPyL8;
    cpy_r_r14 = cpy_r_r9;
    goto CPyL14;
CPyL8: ;
    CPy_INCREF(cpy_r_d);
    if (likely((Py_TYPE(cpy_r_d) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___RefExpr)))
        cpy_r_r15 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_trait_decorator", 35, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_d);
        goto CPyL15;
    }
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_trait_decorator", 35, CPyStatic_irbuild___util___globals);
        goto CPyL15;
    }
CPyL10: ;
    cpy_r_r17 = CPyStatics[8603]; /* 'mypy_extensions.trait' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_trait_decorator", 35, CPyStatic_irbuild___util___globals);
        goto CPyL15;
    }
CPyL13: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    cpy_r_r14 = cpy_r_r23;
CPyL14: ;
    return cpy_r_r14;
CPyL15: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
}

PyObject *CPyPy_irbuild___util___is_trait_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"d", 0};
    static CPyArg_Parser parser = {"O:is_trait_decorator", kwlist, 0};
    PyObject *obj_d;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_d)) {
        return NULL;
    }
    PyObject *arg_d;
    if (likely(PyObject_TypeCheck(obj_d, CPyType_nodes___Expression)))
        arg_d = obj_d;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_d); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_trait_decorator(arg_d);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_trait_decorator", 34, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util___is_trait(PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_d;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_trait", 39, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_d = cpy_r_r8;
    cpy_r_r9 = CPyDef_irbuild___util___is_trait_decorator(cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_trait", 39, CPyStatic_irbuild___util___globals);
        goto CPyL14;
    }
    if (cpy_r_r9) {
        goto CPyL15;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL1;
CPyL7: ;
    if (!cpy_r_r0) goto CPyL9;
    cpy_r_r11 = cpy_r_r0;
    goto CPyL11;
CPyL9: ;
    cpy_r_r12 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_r12)->_is_protocol;
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_trait", "TypeInfo", "is_protocol", 39, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
CPyL10: ;
    cpy_r_r11 = cpy_r_r13;
CPyL11: ;
    return cpy_r_r11;
CPyL12: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_irbuild___util___is_trait(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:is_trait", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_trait(arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_trait", 38, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___dataclass_decorator_type(PyObject *cpy_r_d) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
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
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_auto;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL19;
    CPy_INCREF(cpy_r_d);
    if (likely((Py_TYPE(cpy_r_d) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 43, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_d);
        goto CPyL62;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_r14, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 43, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
CPyL9: ;
    cpy_r_r16 = CPyStatic_irbuild___util___globals;
    cpy_r_r17 = CPyStatics[8604]; /* 'DATACLASS_DECORATORS' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 43, CPyStatic_irbuild___util___globals);
        goto CPyL63;
    }
    if (likely(PySet_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 43, CPyStatic_irbuild___util___globals, "set", cpy_r_r18);
        goto CPyL63;
    }
    cpy_r_r20 = PySet_Contains(cpy_r_r19, cpy_r_r15);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 43, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL19;
    CPy_INCREF(cpy_r_d);
    if (likely((Py_TYPE(cpy_r_d) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_d) == CPyType_nodes___RefExpr)))
        cpy_r_r23 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 44, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_d);
        goto CPyL62;
    }
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_r23, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 44, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
CPyL15: ;
    cpy_r_r25 = CPyStatics[224]; /* '.' */
    cpy_r_r26 = PyUnicode_Split(cpy_r_r24, cpy_r_r25, -1);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 44, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    cpy_r_r27 = CPyList_GetItemShort(cpy_r_r26, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 44, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 44, CPyStatic_irbuild___util___globals, "str", cpy_r_r27);
        goto CPyL62;
    }
    return cpy_r_r28;
CPyL19: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL61;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r33 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 47, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL62;
    }
    cpy_r_r34 = ((mypy___nodes___CallExprObject *)cpy_r_r33)->_callee;
    cpy_r_r35 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_r34)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL23;
    cpy_r_r39 = cpy_r_r38;
    goto CPyL24;
CPyL23: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_r34)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    cpy_r_r39 = cpy_r_r43;
CPyL24: ;
    if (!cpy_r_r39) goto CPyL26;
    cpy_r_r44 = cpy_r_r39;
    goto CPyL27;
CPyL26: ;
    cpy_r_r45 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_r34)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    cpy_r_r44 = cpy_r_r48;
CPyL27: ;
    if (!cpy_r_r44) goto CPyL61;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r49 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL62;
    }
    cpy_r_r50 = ((mypy___nodes___CallExprObject *)cpy_r_r49)->_callee;
    CPy_INCREF(cpy_r_r50);
    if (likely((Py_TYPE(cpy_r_r50) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r50) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r50) == CPyType_nodes___RefExpr)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_r50);
        goto CPyL62;
    }
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_r51, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
CPyL31: ;
    cpy_r_r53 = CPyStatic_irbuild___util___globals;
    cpy_r_r54 = CPyStatics[8604]; /* 'DATACLASS_DECORATORS' */
    cpy_r_r55 = CPyDict_GetItem(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals);
        goto CPyL64;
    }
    if (likely(PySet_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals, "set", cpy_r_r55);
        goto CPyL64;
    }
    cpy_r_r57 = PySet_Contains(cpy_r_r56, cpy_r_r52);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 48, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    cpy_r_r59 = cpy_r_r57;
    if (!cpy_r_r59) goto CPyL61;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r60 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL62;
    }
    cpy_r_r61 = ((mypy___nodes___CallExprObject *)cpy_r_r60)->_callee;
    CPy_INCREF(cpy_r_r61);
    if (likely((Py_TYPE(cpy_r_r61) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r61) == CPyType_nodes___RefExpr)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_r61);
        goto CPyL62;
    }
    cpy_r_r63 = CPY_GET_ATTR(cpy_r_r62, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
CPyL38: ;
    cpy_r_r64 = CPyStatics[224]; /* '.' */
    cpy_r_r65 = PyUnicode_Split(cpy_r_r63, cpy_r_r64, -1);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    cpy_r_r66 = CPyList_GetItemShort(cpy_r_r65, 0);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals);
        goto CPyL62;
    }
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 50, CPyStatic_irbuild___util___globals, "str", cpy_r_r66);
        goto CPyL62;
    }
    cpy_r_name = cpy_r_r67;
    cpy_r_r68 = CPyStatics[2363]; /* 'attr' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_name, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL44;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL44;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 51, CPyStatic_irbuild___util___globals);
        goto CPyL65;
    }
CPyL44: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (!cpy_r_r74) goto CPyL60;
    cpy_r_r75 = CPyStatics[4397]; /* 'auto_attribs' */
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r76 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 51, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL65;
    }
    cpy_r_r77 = ((mypy___nodes___CallExprObject *)cpy_r_r76)->_arg_names;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = PySequence_Contains(cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 51, CPyStatic_irbuild___util___globals);
        goto CPyL65;
    }
    cpy_r_r80 = cpy_r_r78;
    if (!cpy_r_r80) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r81 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 54, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL65;
    }
    cpy_r_r82 = ((mypy___nodes___CallExprObject *)cpy_r_r81)->_args;
    CPy_INCREF(cpy_r_r82);
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r83 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 54, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL66;
    }
    cpy_r_r84 = ((mypy___nodes___CallExprObject *)cpy_r_r83)->_arg_names;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[4397]; /* 'auto_attribs' */
    cpy_r_r86 = CPyList_Index(cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 54, CPyStatic_irbuild___util___globals);
        goto CPyL66;
    }
    cpy_r_r87 = CPyList_GetItem(cpy_r_r82, cpy_r_r86);
    CPy_DECREF(cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 54, CPyStatic_irbuild___util___globals);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r87, CPyType_nodes___Expression)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 54, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r87);
        goto CPyL65;
    }
    cpy_r_auto = cpy_r_r88;
    cpy_r_r89 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r90 = (CPyPtr)&((PyObject *)cpy_r_auto)->ob_type;
    cpy_r_r91 = *(PyObject * *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 == cpy_r_r89;
    if (!cpy_r_r92) goto CPyL67;
    if (likely(Py_TYPE(cpy_r_auto) == CPyType_nodes___NameExpr))
        cpy_r_r93 = cpy_r_auto;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 55, CPyStatic_irbuild___util___globals, "mypy.nodes.NameExpr", cpy_r_auto);
        goto CPyL68;
    }
    cpy_r_r94 = ((mypy___nodes___NameExprObject *)cpy_r_r93)->_name;
    CPy_INCREF(cpy_r_r94);
    CPy_DECREF(cpy_r_auto);
    cpy_r_r95 = CPyStatics[1151]; /* 'True' */
    cpy_r_r96 = PyUnicode_Compare(cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r97 = cpy_r_r96 == -1;
    if (!cpy_r_r97) goto CPyL58;
    cpy_r_r98 = PyErr_Occurred();
    cpy_r_r99 = cpy_r_r98 != NULL;
    if (!cpy_r_r99) goto CPyL58;
    cpy_r_r100 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 55, CPyStatic_irbuild___util___globals);
        goto CPyL65;
    }
CPyL58: ;
    cpy_r_r101 = cpy_r_r96 == 0;
    if (cpy_r_r101) {
        goto CPyL69;
    } else
        goto CPyL60;
CPyL59: ;
    cpy_r_r102 = CPyStatics[8143]; /* 'attr-auto' */
    CPy_INCREF(cpy_r_r102);
    return cpy_r_r102;
CPyL60: ;
    return cpy_r_name;
CPyL61: ;
    cpy_r_r103 = Py_None;
    CPy_INCREF(cpy_r_r103);
    return cpy_r_r103;
CPyL62: ;
    cpy_r_r104 = NULL;
    return cpy_r_r104;
CPyL63: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL64: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL62;
CPyL65: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r82);
    goto CPyL62;
CPyL67: ;
    CPy_DECREF(cpy_r_auto);
    goto CPyL60;
CPyL68: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_auto);
    goto CPyL62;
CPyL69: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL59;
}

PyObject *CPyPy_irbuild___util___dataclass_decorator_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"d", 0};
    static CPyArg_Parser parser = {"O:dataclass_decorator_type", kwlist, 0};
    PyObject *obj_d;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_d)) {
        return NULL;
    }
    PyObject *arg_d;
    if (likely(PyObject_TypeCheck(obj_d, CPyType_nodes___Expression)))
        arg_d = obj_d;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_d); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___dataclass_decorator_type(arg_d);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_decorator_type", 42, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util___is_dataclass_decorator(PyObject *cpy_r_d) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_irbuild___util___dataclass_decorator_type(cpy_r_d);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_dataclass_decorator", 63, CPyStatic_irbuild___util___globals);
        goto CPyL2;
    }
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_irbuild___util___is_dataclass_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"d", 0};
    static CPyArg_Parser parser = {"O:is_dataclass_decorator", kwlist, 0};
    PyObject *obj_d;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_d)) {
        return NULL;
    }
    PyObject *arg_d;
    if (likely(PyObject_TypeCheck(obj_d, CPyType_nodes___Expression)))
        arg_d = obj_d;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_d); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_dataclass_decorator(arg_d);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_dataclass_decorator", 62, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util___is_dataclass(PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_d;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_dataclass", 67, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_d = cpy_r_r8;
    cpy_r_r9 = CPyDef_irbuild___util___is_dataclass_decorator(cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_dataclass", 67, CPyStatic_irbuild___util___globals);
        goto CPyL10;
    }
    if (cpy_r_r9) {
        goto CPyL11;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r10 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r10;
    goto CPyL1;
CPyL7: ;
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL5;
}

PyObject *CPyPy_irbuild___util___is_dataclass(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:is_dataclass", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_dataclass(arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_dataclass", 66, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___dataclass_type(PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_type", 71, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_d = cpy_r_r7;
    cpy_r_r8 = CPyDef_irbuild___util___dataclass_decorator_type(cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_type", 72, CPyStatic_irbuild___util___globals);
        goto CPyL11;
    }
    cpy_r_typ = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_typ != cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL12;
    } else
        goto CPyL13;
CPyL5: ;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r11 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "dataclass_type", 74, CPyStatic_irbuild___util___globals, "str", cpy_r_typ);
        goto CPyL9;
    }
    return cpy_r_r11;
CPyL7: ;
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL1;
CPyL8: ;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL13: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL7;
}

PyObject *CPyPy_irbuild___util___dataclass_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:dataclass_type", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___dataclass_type(arg_cdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "dataclass_type", 70, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___get_mypyc_attr_literal(PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    double cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL17;
    CPy_INCREF(cpy_r_e);
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___StrExpr)
        cpy_r_r14 = cpy_r_e;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL10587;
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___IntExpr)
        cpy_r_r14 = cpy_r_e;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL10587;
    if (Py_TYPE(cpy_r_e) == CPyType_nodes___FloatExpr)
        cpy_r_r14 = cpy_r_e;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL10587;
    CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 83, CPyStatic_irbuild___util___globals, "union[mypy.nodes.StrExpr, mypy.nodes.IntExpr, mypy.nodes.FloatExpr]", cpy_r_e);
    goto CPyL60;
__LL10587: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___StrExpr))
        cpy_r_r19 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 83, CPyStatic_irbuild___util___globals, "mypy.nodes.StrExpr", cpy_r_r14);
        goto CPyL60;
    }
    cpy_r_r20 = ((mypy___nodes___StrExprObject *)cpy_r_r19)->_value;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20;
    goto CPyL16;
CPyL11: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___IntExpr))
        cpy_r_r26 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 83, CPyStatic_irbuild___util___globals, "mypy.nodes.IntExpr", cpy_r_r14);
        goto CPyL60;
    }
    cpy_r_r27 = ((mypy___nodes___IntExprObject *)cpy_r_r26)->_value;
    CPyTagged_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_r27);
    cpy_r_r21 = cpy_r_r28;
    goto CPyL16;
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___FloatExpr))
        cpy_r_r29 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 83, CPyStatic_irbuild___util___globals, "mypy.nodes.FloatExpr", cpy_r_r14);
        goto CPyL60;
    }
    cpy_r_r30 = ((mypy___nodes___FloatExprObject *)cpy_r_r29)->_value;
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = PyFloat_FromDouble(cpy_r_r30);
    cpy_r_r21 = cpy_r_r31;
CPyL16: ;
    return cpy_r_r21;
CPyL17: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL19;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL20;
CPyL19: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    cpy_r_r36 = cpy_r_r40;
CPyL20: ;
    if (!cpy_r_r36) goto CPyL22;
    cpy_r_r41 = cpy_r_r36;
    goto CPyL23;
CPyL22: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    cpy_r_r41 = cpy_r_r45;
CPyL23: ;
    if (!cpy_r_r41) goto CPyL31;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r46 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 84, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL60;
    }
    cpy_r_r47 = CPY_GET_ATTR(cpy_r_r46, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 84, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL26: ;
    cpy_r_r48 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL29;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL29;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 84, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL29: ;
    cpy_r_r54 = cpy_r_r49 == 0;
    if (!cpy_r_r54) goto CPyL31;
    cpy_r_r55 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r55);
    return cpy_r_r55;
CPyL31: ;
    cpy_r_r56 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r57 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r58 = *(PyObject * *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 == cpy_r_r56;
    if (!cpy_r_r59) goto CPyL33;
    cpy_r_r60 = cpy_r_r59;
    goto CPyL34;
CPyL33: ;
    cpy_r_r61 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r62 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r63 = *(PyObject * *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 == cpy_r_r61;
    cpy_r_r60 = cpy_r_r64;
CPyL34: ;
    if (!cpy_r_r60) goto CPyL36;
    cpy_r_r65 = cpy_r_r60;
    goto CPyL37;
CPyL36: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    cpy_r_r65 = cpy_r_r69;
CPyL37: ;
    if (!cpy_r_r65) goto CPyL45;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r70 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 86, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL60;
    }
    cpy_r_r71 = CPY_GET_ATTR(cpy_r_r70, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 86, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL40: ;
    cpy_r_r72 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r73 = PyUnicode_Compare(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r74 = cpy_r_r73 == -1;
    if (!cpy_r_r74) goto CPyL43;
    cpy_r_r75 = PyErr_Occurred();
    cpy_r_r76 = cpy_r_r75 != NULL;
    if (!cpy_r_r76) goto CPyL43;
    cpy_r_r77 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 86, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL43: ;
    cpy_r_r78 = cpy_r_r73 == 0;
    if (!cpy_r_r78) goto CPyL45;
    cpy_r_r79 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r79);
    return cpy_r_r79;
CPyL45: ;
    cpy_r_r80 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r81 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r82 = *(PyObject * *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 == cpy_r_r80;
    if (!cpy_r_r83) goto CPyL47;
    cpy_r_r84 = cpy_r_r83;
    goto CPyL48;
CPyL47: ;
    cpy_r_r85 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    cpy_r_r84 = cpy_r_r88;
CPyL48: ;
    if (!cpy_r_r84) goto CPyL50;
    cpy_r_r89 = cpy_r_r84;
    goto CPyL51;
CPyL50: ;
    cpy_r_r90 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r91 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r92 = *(PyObject * *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 == cpy_r_r90;
    cpy_r_r89 = cpy_r_r93;
CPyL51: ;
    if (!cpy_r_r89) goto CPyL59;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r94 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 88, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL60;
    }
    cpy_r_r95 = CPY_GET_ATTR(cpy_r_r94, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 88, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL54: ;
    cpy_r_r96 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r97 = PyUnicode_Compare(cpy_r_r95, cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 == -1;
    if (!cpy_r_r98) goto CPyL57;
    cpy_r_r99 = PyErr_Occurred();
    cpy_r_r100 = cpy_r_r99 != NULL;
    if (!cpy_r_r100) goto CPyL57;
    cpy_r_r101 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 88, CPyStatic_irbuild___util___globals);
        goto CPyL60;
    }
CPyL57: ;
    cpy_r_r102 = cpy_r_r97 == 0;
    if (!cpy_r_r102) goto CPyL59;
    cpy_r_r103 = Py_None;
    CPy_INCREF(cpy_r_r103);
    return cpy_r_r103;
CPyL59: ;
    cpy_r_r104 = (PyObject *)&_Py_NotImplementedStruct;
    CPy_INCREF(cpy_r_r104);
    return cpy_r_r104;
CPyL60: ;
    cpy_r_r105 = NULL;
    return cpy_r_r105;
}

PyObject *CPyPy_irbuild___util___get_mypyc_attr_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:get_mypyc_attr_literal", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___get_mypyc_attr_literal(arg_e);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_literal", 78, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___get_mypyc_attr_call(PyObject *cpy_r_d) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
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
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_d)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 97, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL19;
    }
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_r4)->_callee;
    cpy_r_r6 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL4;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL5;
CPyL4: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL5: ;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL8;
CPyL7: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL8: ;
    if (!cpy_r_r15) goto CPyL18;
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r20 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 98, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL19;
    }
    cpy_r_r21 = ((mypy___nodes___CallExprObject *)cpy_r_r20)->_callee;
    CPy_INCREF(cpy_r_r21);
    if (likely((Py_TYPE(cpy_r_r21) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r21) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r21) == CPyType_nodes___RefExpr)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 98, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_r21);
        goto CPyL19;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 98, CPyStatic_irbuild___util___globals);
        goto CPyL19;
    }
CPyL12: ;
    cpy_r_r24 = CPyStatics[8605]; /* 'mypy_extensions.mypyc_attr' */
    cpy_r_r25 = PyUnicode_Compare(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 == -1;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = PyErr_Occurred();
    cpy_r_r28 = cpy_r_r27 != NULL;
    if (!cpy_r_r28) goto CPyL15;
    cpy_r_r29 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 98, CPyStatic_irbuild___util___globals);
        goto CPyL19;
    }
CPyL15: ;
    cpy_r_r30 = cpy_r_r25 == 0;
    if (!cpy_r_r30) goto CPyL18;
    CPy_INCREF(cpy_r_d);
    if (likely(Py_TYPE(cpy_r_d) == CPyType_nodes___CallExpr))
        cpy_r_r31 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 100, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL19;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL19: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
}

PyObject *CPyPy_irbuild___util___get_mypyc_attr_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"d", 0};
    static CPyArg_Parser parser = {"O:get_mypyc_attr_call", kwlist, 0};
    PyObject *obj_d;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_d)) {
        return NULL;
    }
    PyObject *arg_d;
    if (likely(PyObject_TypeCheck(obj_d, CPyType_nodes___Expression)))
        arg_d = obj_d;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_d); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___get_mypyc_attr_call(arg_d);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attr_call", 93, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___get_mypyc_attrs(PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attrs;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_dec;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 106, CPyStatic_irbuild___util___globals);
        goto CPyL28;
    }
    cpy_r_attrs = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_nodes___ClassDef;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL4;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___ClassDef))
        cpy_r_r5 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 107, CPyStatic_irbuild___util___globals, "mypy.nodes.ClassDef", cpy_r_stmt);
        goto CPyL29;
    }
    cpy_r_r6 = ((mypy___nodes___ClassDefObject *)cpy_r_r5)->_decorators;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL6;
CPyL4: ;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___Decorator))
        cpy_r_r8 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 107, CPyStatic_irbuild___util___globals, "mypy.nodes.Decorator", cpy_r_stmt);
        goto CPyL29;
    }
    cpy_r_r9 = ((mypy___nodes___DecoratorObject *)cpy_r_r8)->_decorators;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = 0;
CPyL7: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL30;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Expression)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 107, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL31;
    }
    cpy_r_dec = cpy_r_r16;
    cpy_r_r17 = CPyDef_irbuild___util___get_mypyc_attr_call(cpy_r_dec);
    CPy_DECREF(cpy_r_dec);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 108, CPyStatic_irbuild___util___globals);
        goto CPyL31;
    }
    cpy_r_d = cpy_r_r17;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_d != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL32;
    if (likely(cpy_r_d != Py_None))
        cpy_r_r20 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 110, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL33;
    }
    cpy_r_r21 = ((mypy___nodes___CallExprObject *)cpy_r_r20)->_arg_names;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 0;
    if (likely(cpy_r_d != Py_None))
        cpy_r_r23 = cpy_r_d;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 110, CPyStatic_irbuild___util___globals, "mypy.nodes.CallExpr", cpy_r_d);
        goto CPyL34;
    }
    cpy_r_r24 = ((mypy___nodes___CallExprObject *)cpy_r_r23)->_args;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_d);
    cpy_r_r25 = 0;
CPyL14: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL35;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL35;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (PyUnicode_Check(cpy_r_r34))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL10588;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL10588;
    CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 110, CPyStatic_irbuild___util___globals, "str or None", cpy_r_r34);
    goto CPyL36;
__LL10588: ;
    cpy_r_name = cpy_r_r35;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_r24, cpy_r_r25);
    if (likely(PyObject_TypeCheck(cpy_r_r36, CPyType_nodes___Expression)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 110, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r36);
        goto CPyL37;
    }
    cpy_r_arg = cpy_r_r37;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_name == cpy_r_r38;
    if (cpy_r_r39) {
        goto CPyL38;
    } else
        goto CPyL22;
CPyL19: ;
    cpy_r_r40 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_arg) == CPyType_nodes___StrExpr))
        cpy_r_r44 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 113, CPyStatic_irbuild___util___globals, "mypy.nodes.StrExpr", cpy_r_arg);
        goto CPyL40;
    }
    cpy_r_r45 = ((mypy___nodes___StrExprObject *)cpy_r_r44)->_value;
    CPy_INCREF(cpy_r_r45);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r46 = 1 ? Py_True : Py_False;
    cpy_r_r47 = CPyDict_SetItem(cpy_r_attrs, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 113, CPyStatic_irbuild___util___globals);
        goto CPyL36;
    } else
        goto CPyL25;
CPyL22: ;
    cpy_r_r49 = CPyDef_irbuild___util___get_mypyc_attr_literal(cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 115, CPyStatic_irbuild___util___globals);
        goto CPyL37;
    }
    if (likely(cpy_r_name != Py_None))
        cpy_r_r50 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 115, CPyStatic_irbuild___util___globals, "str", cpy_r_name);
        goto CPyL41;
    }
    cpy_r_r51 = CPyDict_SetItem(cpy_r_attrs, cpy_r_r50, cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 115, CPyStatic_irbuild___util___globals);
        goto CPyL36;
    }
CPyL25: ;
    cpy_r_r53 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r53;
    cpy_r_r54 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r54;
    goto CPyL14;
CPyL26: ;
    cpy_r_r55 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r55;
    goto CPyL7;
CPyL27: ;
    return cpy_r_attrs;
CPyL28: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL29: ;
    CPy_DecRef(cpy_r_attrs);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_d);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_d);
    CPy_DecRef(cpy_r_r21);
    goto CPyL28;
CPyL35: ;
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r24);
    goto CPyL26;
CPyL36: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_name);
    goto CPyL28;
CPyL38: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL19;
CPyL39: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL25;
CPyL40: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_arg);
    goto CPyL28;
CPyL41: ;
    CPy_DecRef(cpy_r_attrs);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r49);
    goto CPyL28;
}

PyObject *CPyPy_irbuild___util___get_mypyc_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:get_mypyc_attrs", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_stmt;
    if (Py_TYPE(obj_stmt) == CPyType_nodes___ClassDef)
        arg_stmt = obj_stmt;
    else {
        arg_stmt = NULL;
    }
    if (arg_stmt != NULL) goto __LL10589;
    if (Py_TYPE(obj_stmt) == CPyType_nodes___Decorator)
        arg_stmt = obj_stmt;
    else {
        arg_stmt = NULL;
    }
    if (arg_stmt != NULL) goto __LL10589;
    CPy_TypeError("union[mypy.nodes.ClassDef, mypy.nodes.Decorator]", obj_stmt); 
    goto fail;
__LL10589: ;
    PyObject *retval = CPyDef_irbuild___util___get_mypyc_attrs(arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "get_mypyc_attrs", 104, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util___is_extension_class(PyObject *cpy_r_cdef) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_d;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL54;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_extension_class", 121, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL55;
    }
    cpy_r_d = cpy_r_r8;
    cpy_r_r9 = CPyDef_irbuild___util___is_trait_decorator(cpy_r_d);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 122, CPyStatic_irbuild___util___globals);
        goto CPyL56;
    }
    cpy_r_r10 = cpy_r_r9 ^ 1;
    if (cpy_r_r10) {
        goto CPyL6;
    } else
        goto CPyL57;
CPyL5: ;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL13;
CPyL6: ;
    cpy_r_r12 = CPyDef_irbuild___util___is_dataclass_decorator(cpy_r_d);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 122, CPyStatic_irbuild___util___globals);
        goto CPyL56;
    }
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (cpy_r_r13) {
        goto CPyL9;
    } else
        goto CPyL58;
CPyL8: ;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL12;
CPyL9: ;
    cpy_r_r15 = CPyDef_irbuild___util___get_mypyc_attr_call(cpy_r_d);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 122, CPyStatic_irbuild___util___globals);
        goto CPyL55;
    }
    cpy_r_r16 = PyObject_Not(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 122, CPyStatic_irbuild___util___globals);
        goto CPyL55;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r14 = cpy_r_r18;
CPyL12: ;
    cpy_r_r11 = cpy_r_r14;
CPyL13: ;
    if (cpy_r_r11) {
        goto CPyL59;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r0 = 1;
    goto CPyL16;
CPyL15: ;
    cpy_r_r19 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r19;
    goto CPyL1;
CPyL16: ;
    if (!cpy_r_r0) goto CPyL18;
    return 0;
CPyL18: ;
    cpy_r_r20 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r21 = ((mypy___nodes___TypeInfoObject *)cpy_r_r20)->_typeddict_type;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "typeddict_type", 126, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_r21 != cpy_r_r22;
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r23) goto CPyL21;
    return 0;
CPyL21: ;
    cpy_r_r24 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r25 = ((mypy___nodes___TypeInfoObject *)cpy_r_r24)->_is_named_tuple;
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "is_named_tuple", 128, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL22: ;
    if (!cpy_r_r25) goto CPyL24;
CPyL23: ;
    return 0;
CPyL24: ;
    cpy_r_r26 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r27 = ((mypy___nodes___TypeInfoObject *)cpy_r_r26)->_metaclass_type;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "metaclass_type", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r27);
CPyL25: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    CPy_DECREF(cpy_r_r27);
    if (!cpy_r_r29) goto CPyL52;
    cpy_r_r30 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r31 = ((mypy___nodes___TypeInfoObject *)cpy_r_r30)->_metaclass_type;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "metaclass_type", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL27: ;
    if (likely(cpy_r_r31 != Py_None))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals, "mypy.types.Instance", cpy_r_r31);
        goto CPyL53;
    }
    cpy_r_r33 = ((mypy___types___InstanceObject *)cpy_r_r32)->_type;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_r33, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL29: ;
    cpy_r_r35 = CPyStatics[732]; /* 'abc.ABCMeta' */
    cpy_r_r36 = PyUnicode_Compare(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 == -1;
    if (!cpy_r_r37) goto CPyL32;
    cpy_r_r38 = PyErr_Occurred();
    cpy_r_r39 = cpy_r_r38 != NULL;
    if (!cpy_r_r39) goto CPyL32;
    cpy_r_r40 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", -1, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL32: ;
    cpy_r_r41 = cpy_r_r36 != 0;
    if (cpy_r_r41) goto CPyL34;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL41;
CPyL34: ;
    cpy_r_r43 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_r43)->_metaclass_type;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "metaclass_type", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL35: ;
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals, "mypy.types.Instance", cpy_r_r44);
        goto CPyL53;
    }
    cpy_r_r46 = ((mypy___types___InstanceObject *)cpy_r_r45)->_type;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPY_GET_ATTR(cpy_r_r46, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL37: ;
    cpy_r_r48 = CPyStatics[8606]; /* 'typing.TypingMeta' */
    cpy_r_r49 = PyUnicode_Compare(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 == -1;
    if (!cpy_r_r50) goto CPyL40;
    cpy_r_r51 = PyErr_Occurred();
    cpy_r_r52 = cpy_r_r51 != NULL;
    if (!cpy_r_r52) goto CPyL40;
    cpy_r_r53 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", -1, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL40: ;
    cpy_r_r54 = cpy_r_r49 != 0;
    cpy_r_r42 = cpy_r_r54;
CPyL41: ;
    if (cpy_r_r42) goto CPyL43;
    cpy_r_r55 = cpy_r_r42;
    goto CPyL50;
CPyL43: ;
    cpy_r_r56 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    cpy_r_r57 = ((mypy___nodes___TypeInfoObject *)cpy_r_r56)->_metaclass_type;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/util.py", "is_extension_class", "TypeInfo", "metaclass_type", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL44: ;
    if (likely(cpy_r_r57 != Py_None))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals, "mypy.types.Instance", cpy_r_r57);
        goto CPyL53;
    }
    cpy_r_r59 = ((mypy___types___InstanceObject *)cpy_r_r58)->_type;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPY_GET_ATTR(cpy_r_r59, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 130, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL46: ;
    cpy_r_r61 = CPyStatics[8607]; /* 'typing.GenericMeta' */
    cpy_r_r62 = PyUnicode_Compare(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 == -1;
    if (!cpy_r_r63) goto CPyL49;
    cpy_r_r64 = PyErr_Occurred();
    cpy_r_r65 = cpy_r_r64 != NULL;
    if (!cpy_r_r65) goto CPyL49;
    cpy_r_r66 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", -1, CPyStatic_irbuild___util___globals);
        goto CPyL53;
    }
CPyL49: ;
    cpy_r_r67 = cpy_r_r62 != 0;
    cpy_r_r55 = cpy_r_r67;
CPyL50: ;
    if (!cpy_r_r55) goto CPyL52;
    return 0;
CPyL52: ;
    return 1;
CPyL53: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
CPyL54: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL55: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_d);
    goto CPyL53;
CPyL57: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL5;
CPyL58: ;
    CPy_DECREF(cpy_r_d);
    goto CPyL8;
CPyL59: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL14;
}

PyObject *CPyPy_irbuild___util___is_extension_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cdef", 0};
    static CPyArg_Parser parser = {"O:is_extension_class", kwlist, 0};
    PyObject *obj_cdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_extension_class(arg_cdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_extension_class", 120, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___get_func_def(PyObject *cpy_r_op) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL15;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r4 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_func_def", 141, CPyStatic_irbuild___util___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_op);
        goto CPyL14;
    }
    cpy_r_r5 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r4)->_impl;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_func_def", 141, CPyStatic_irbuild___util___globals);
        goto CPyL14;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL6;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "get_func_def", 141, CPyStatic_irbuild___util___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL6: ;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r10 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_func_def", 142, CPyStatic_irbuild___util___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_op);
        goto CPyL14;
    }
    cpy_r_r11 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r10)->_impl;
    CPy_INCREF(cpy_r_r11);
    if (Py_TYPE(cpy_r_r11) == CPyType_nodes___FuncDef)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL10590;
    if (Py_TYPE(cpy_r_r11) == CPyType_nodes___Decorator)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL10590;
    CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_func_def", 142, CPyStatic_irbuild___util___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r11);
    goto CPyL14;
__LL10590: ;
    cpy_r_op = cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_nodes___Decorator))
        cpy_r_r17 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_func_def", 144, CPyStatic_irbuild___util___globals, "mypy.nodes.Decorator", cpy_r_op);
        goto CPyL16;
    }
    cpy_r_r18 = ((mypy___nodes___DecoratorObject *)cpy_r_r17)->_func;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_op);
    cpy_r_op = cpy_r_r18;
CPyL12: ;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_nodes___FuncDef))
        cpy_r_r19 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "get_func_def", 145, CPyStatic_irbuild___util___globals, "mypy.nodes.FuncDef", cpy_r_op);
        goto CPyL14;
    }
    return cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL15: ;
    CPy_INCREF(cpy_r_op);
    goto CPyL9;
CPyL16: ;
    CPy_DecRef(cpy_r_op);
    goto CPyL14;
}

PyObject *CPyPy_irbuild___util___get_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", 0};
    static CPyArg_Parser parser = {"O:get_func_def", kwlist, 0};
    PyObject *obj_op;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_op)) {
        return NULL;
    }
    PyObject *arg_op;
    if (Py_TYPE(obj_op) == CPyType_nodes___FuncDef)
        arg_op = obj_op;
    else {
        arg_op = NULL;
    }
    if (arg_op != NULL) goto __LL10591;
    if (Py_TYPE(obj_op) == CPyType_nodes___Decorator)
        arg_op = obj_op;
    else {
        arg_op = NULL;
    }
    if (arg_op != NULL) goto __LL10591;
    if (Py_TYPE(obj_op) == CPyType_nodes___OverloadedFuncDef)
        arg_op = obj_op;
    else {
        arg_op = NULL;
    }
    if (arg_op != NULL) goto __LL10591;
    CPy_TypeError("union[mypy.nodes.FuncDef, mypy.nodes.Decorator, mypy.nodes.OverloadedFuncDef]", obj_op); 
    goto fail;
__LL10591: ;
    PyObject *retval = CPyDef_irbuild___util___get_func_def(arg_op);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "get_func_def", 139, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___concrete_arg_kind(PyObject *cpy_r_kind) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyStatic_nodes___ARG_OPT;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "concrete_arg_kind", 150, CPyStatic_irbuild___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_kind == cpy_r_r0;
    if (!cpy_r_r2) goto CPyL8;
    cpy_r_r3 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r3 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "concrete_arg_kind", 151, CPyStatic_irbuild___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL7: ;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL8: ;
    cpy_r_r5 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (likely(cpy_r_r5 != NULL)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "concrete_arg_kind", 152, CPyStatic_irbuild___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r7 = cpy_r_kind == cpy_r_r5;
    if (!cpy_r_r7) goto CPyL16;
    cpy_r_r8 = CPyStatic_nodes___ARG_NAMED;
    if (likely(cpy_r_r8 != NULL)) goto CPyL15;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "concrete_arg_kind", 153, CPyStatic_irbuild___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL15: ;
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL16: ;
    CPy_INCREF(cpy_r_kind);
    return cpy_r_kind;
CPyL17: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_irbuild___util___concrete_arg_kind(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"kind", 0};
    static CPyArg_Parser parser = {"O:concrete_arg_kind", kwlist, 0};
    PyObject *obj_kind;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_kind)) {
        return NULL;
    }
    PyObject *arg_kind;
    if (likely(Py_TYPE(obj_kind) == CPyType_nodes___ArgKind))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("mypy.nodes.ArgKind", obj_kind); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___concrete_arg_kind(arg_kind);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "concrete_arg_kind", 148, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util___is_constant(PyObject *cpy_r_e) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_e_2;
    char cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyPtr cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r14 = cpy_r_r9;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL9: ;
    if (!cpy_r_r14) goto CPyL11;
    cpy_r_r19 = cpy_r_r14;
    goto CPyL88;
CPyL11: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (cpy_r_r23) goto CPyL13;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL25;
CPyL13: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r25 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 169, CPyStatic_irbuild___util___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r26 = ((mypy___nodes___UnaryExprObject *)cpy_r_r25)->_op;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[1198]; /* '-' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL17;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL17;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 169, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL17: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (cpy_r_r33) goto CPyL19;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL24;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r35 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 169, CPyStatic_irbuild___util___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r36 = ((mypy___nodes___UnaryExprObject *)cpy_r_r35)->_expr;
    cpy_r_r37 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL22;
    cpy_r_r41 = cpy_r_r40;
    goto CPyL23;
CPyL22: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r36)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    cpy_r_r41 = cpy_r_r45;
CPyL23: ;
    cpy_r_r34 = cpy_r_r41;
CPyL24: ;
    cpy_r_r24 = cpy_r_r34;
CPyL25: ;
    if (!cpy_r_r24) goto CPyL27;
    cpy_r_r46 = cpy_r_r24;
    goto CPyL87;
CPyL27: ;
    cpy_r_r47 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (cpy_r_r50) goto CPyL29;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL38;
CPyL29: ;
    cpy_r_r52 = 1;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___TupleExpr))
        cpy_r_r53 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 170, CPyStatic_irbuild___util___globals, "mypy.nodes.TupleExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r54 = ((mypy___nodes___TupleExprObject *)cpy_r_r53)->_items;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = 0;
CPyL31: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r54)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r55 < (Py_ssize_t)cpy_r_r58;
    if (!cpy_r_r59) goto CPyL90;
    cpy_r_r60 = CPyList_GetItemUnsafe(cpy_r_r54, cpy_r_r55);
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_nodes___Expression)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 170, CPyStatic_irbuild___util___globals, "mypy.nodes.Expression", cpy_r_r60);
        goto CPyL91;
    }
    cpy_r_e_2 = cpy_r_r61;
    cpy_r_r62 = CPyDef_irbuild___util___is_constant(cpy_r_e_2);
    CPy_DECREF(cpy_r_e_2);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 170, CPyStatic_irbuild___util___globals);
        goto CPyL91;
    }
    cpy_r_r63 = cpy_r_r62 ^ 1;
    if (cpy_r_r63) {
        goto CPyL92;
    } else
        goto CPyL36;
CPyL35: ;
    cpy_r_r52 = 0;
    goto CPyL37;
CPyL36: ;
    cpy_r_r64 = cpy_r_r55 + 2;
    cpy_r_r55 = cpy_r_r64;
    goto CPyL31;
CPyL37: ;
    cpy_r_r51 = cpy_r_r52;
CPyL38: ;
    if (!cpy_r_r51) goto CPyL40;
    cpy_r_r65 = cpy_r_r51;
    goto CPyL86;
CPyL40: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL42;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL43;
CPyL42: ;
    cpy_r_r71 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    cpy_r_r70 = cpy_r_r74;
CPyL43: ;
    if (!cpy_r_r70) goto CPyL45;
    cpy_r_r75 = cpy_r_r70;
    goto CPyL46;
CPyL45: ;
    cpy_r_r76 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    cpy_r_r75 = cpy_r_r79;
CPyL46: ;
    if (cpy_r_r75) goto CPyL48;
    cpy_r_r80 = cpy_r_r75;
    goto CPyL85;
CPyL48: ;
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r81 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 173, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r82 = ((mypy___nodes___RefExprObject *)cpy_r_r81)->_kind;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[9016]; /* 1 */
    cpy_r_r84 = PyObject_RichCompare(cpy_r_r82, cpy_r_r83, 2);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 173, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
    if (unlikely(!PyBool_Check(cpy_r_r84))) {
        CPy_TypeError("bool", cpy_r_r84); cpy_r_r85 = 2;
    } else
        cpy_r_r85 = cpy_r_r84 == Py_True;
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 173, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
    if (cpy_r_r85) goto CPyL53;
    cpy_r_r86 = cpy_r_r85;
    goto CPyL84;
CPyL53: ;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r87 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r88 = CPY_GET_ATTR(cpy_r_r87, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL55: ;
    cpy_r_r89 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r90 = PyUnicode_Compare(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r91 = cpy_r_r90 == -1;
    if (!cpy_r_r91) goto CPyL58;
    cpy_r_r92 = PyErr_Occurred();
    cpy_r_r93 = cpy_r_r92 != NULL;
    if (!cpy_r_r93) goto CPyL58;
    cpy_r_r94 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", -1, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL58: ;
    cpy_r_r95 = cpy_r_r90 == 0;
    if (!cpy_r_r95) goto CPyL60;
    cpy_r_r96 = cpy_r_r95;
    goto CPyL66;
CPyL60: ;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r97 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r98 = CPY_GET_ATTR(cpy_r_r97, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL62: ;
    cpy_r_r99 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r100 = PyUnicode_Compare(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r101 = cpy_r_r100 == -1;
    if (!cpy_r_r101) goto CPyL65;
    cpy_r_r102 = PyErr_Occurred();
    cpy_r_r103 = cpy_r_r102 != NULL;
    if (!cpy_r_r103) goto CPyL65;
    cpy_r_r104 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", -1, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL65: ;
    cpy_r_r105 = cpy_r_r100 == 0;
    cpy_r_r96 = cpy_r_r105;
CPyL66: ;
    if (!cpy_r_r96) goto CPyL68;
    cpy_r_r106 = cpy_r_r96;
    goto CPyL74;
CPyL68: ;
    CPy_INCREF(cpy_r_e);
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r107 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r108 = CPY_GET_ATTR(cpy_r_r107, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 175, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL70: ;
    cpy_r_r109 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r110 = PyUnicode_Compare(cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r111 = cpy_r_r110 == -1;
    if (!cpy_r_r111) goto CPyL73;
    cpy_r_r112 = PyErr_Occurred();
    cpy_r_r113 = cpy_r_r112 != NULL;
    if (!cpy_r_r113) goto CPyL73;
    cpy_r_r114 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", -1, CPyStatic_irbuild___util___globals);
        goto CPyL89;
    }
CPyL73: ;
    cpy_r_r115 = cpy_r_r110 == 0;
    cpy_r_r106 = cpy_r_r115;
CPyL74: ;
    if (!cpy_r_r106) goto CPyL76;
    cpy_r_r116 = cpy_r_r106;
    goto CPyL83;
CPyL76: ;
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r117 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 176, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r118 = ((mypy___nodes___RefExprObject *)cpy_r_r117)->_node;
    cpy_r_r119 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r120 = (CPyPtr)&((PyObject *)cpy_r_r118)->ob_type;
    cpy_r_r121 = *(PyObject * *)cpy_r_r120;
    cpy_r_r122 = cpy_r_r121 == cpy_r_r119;
    if (cpy_r_r122) goto CPyL79;
    cpy_r_r123 = cpy_r_r122;
    goto CPyL82;
CPyL79: ;
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r124 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 176, CPyStatic_irbuild___util___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL89;
    }
    cpy_r_r125 = ((mypy___nodes___RefExprObject *)cpy_r_r124)->_node;
    if (likely(Py_TYPE(cpy_r_r125) == CPyType_nodes___Var))
        cpy_r_r126 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "is_constant", 176, CPyStatic_irbuild___util___globals, "mypy.nodes.Var", cpy_r_r125);
        goto CPyL89;
    }
    cpy_r_r127 = ((mypy___nodes___VarObject *)cpy_r_r126)->_is_final;
    cpy_r_r123 = cpy_r_r127;
CPyL82: ;
    cpy_r_r116 = cpy_r_r123;
CPyL83: ;
    cpy_r_r86 = cpy_r_r116;
CPyL84: ;
    cpy_r_r80 = cpy_r_r86;
CPyL85: ;
    cpy_r_r65 = cpy_r_r80;
CPyL86: ;
    cpy_r_r46 = cpy_r_r65;
CPyL87: ;
    cpy_r_r19 = cpy_r_r46;
CPyL88: ;
    return cpy_r_r19;
CPyL89: ;
    cpy_r_r128 = 2;
    return cpy_r_r128;
CPyL90: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL37;
CPyL91: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL89;
CPyL92: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL35;
}

PyObject *CPyPy_irbuild___util___is_constant(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"e", 0};
    static CPyArg_Parser parser = {"O:is_constant", kwlist, 0};
    PyObject *obj_e;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_e)) {
        return NULL;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    char retval = CPyDef_irbuild___util___is_constant(arg_e);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "is_constant", 158, CPyStatic_irbuild___util___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___util___bytes_from_str(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyStatics[1752]; /* 'utf8' */
    cpy_r_r1 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r2[2] = {cpy_r_value, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = _PyObject_Vectorcall(cpy_r_r1, cpy_r_r3, 2, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "bytes_from_str", 189, CPyStatic_irbuild___util___globals);
        goto CPyL5;
    }
    if (likely(PyBytes_Check(cpy_r_r4) || PyByteArray_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/util.py", "bytes_from_str", 189, CPyStatic_irbuild___util___globals, "bytes", cpy_r_r4);
        goto CPyL5;
    }
    cpy_r_r6 = CPyStatics[8608]; /* 'unicode-escape' */
    cpy_r_r7 = CPy_Decode(cpy_r_r5, cpy_r_r6, NULL);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "bytes_from_str", 189, CPyStatic_irbuild___util___globals);
        goto CPyL5;
    }
    cpy_r_r8 = CPyStatics[8609]; /* 'raw-unicode-escape' */
    cpy_r_r9 = CPy_Encode(cpy_r_r7, cpy_r_r8, NULL);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "bytes_from_str", 189, CPyStatic_irbuild___util___globals);
        goto CPyL5;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_irbuild___util___bytes_from_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:bytes_from_str", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___util___bytes_from_str(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/util.py", "bytes_from_str", 182, CPyStatic_irbuild___util___globals);
    return NULL;
}

char CPyDef_irbuild___util_____top_level__(void) {
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
    int32_t cpy_r_r21;
    char cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", -1, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_irbuild___util___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 3, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10237]; /* ('Any',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_irbuild___util___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 5, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10238]; /* ('ARG_NAMED', 'ARG_NAMED_OPT', 'ARG_OPT', 'ARG_POS',
                                      'GDEF', 'ArgKind', 'BytesExpr', 'CallExpr', 'ClassDef',
                                      'Decorator', 'Expression', 'FloatExpr', 'FuncDef',
                                      'IntExpr', 'NameExpr', 'OverloadedFuncDef', 'RefExpr',
                                      'StrExpr', 'TupleExpr', 'UnaryExpr', 'Var') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_irbuild___util___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 7, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[4534]; /* 'dataclasses.dataclass' */
    cpy_r_r18 = CPyStatics[4444]; /* 'attr.s' */
    cpy_r_r19 = CPyStatics[4445]; /* 'attr.attrs' */
    cpy_r_r20 = PySet_New(NULL);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 31, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    cpy_r_r21 = PySet_Add(cpy_r_r20, cpy_r_r17);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 31, CPyStatic_irbuild___util___globals);
        goto CPyL13;
    }
    cpy_r_r23 = PySet_Add(cpy_r_r20, cpy_r_r18);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 31, CPyStatic_irbuild___util___globals);
        goto CPyL13;
    }
    cpy_r_r25 = PySet_Add(cpy_r_r20, cpy_r_r19);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 31, CPyStatic_irbuild___util___globals);
        goto CPyL13;
    }
    cpy_r_r27 = CPyStatic_irbuild___util___globals;
    cpy_r_r28 = CPyStatics[8604]; /* 'DATACLASS_DECORATORS' */
    cpy_r_r29 = CPyDict_SetItem(cpy_r_r27, cpy_r_r28, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/util.py", "<module>", 31, CPyStatic_irbuild___util___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL13: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL12;
}
