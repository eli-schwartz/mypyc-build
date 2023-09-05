#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef irbuild___constant_foldmodule_methods[] = {
    {"constant_fold_expr", (PyCFunction)CPyPy_irbuild___constant_fold___constant_fold_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"constant_fold_binary_op_extended", (PyCFunction)CPyPy_irbuild___constant_fold___constant_fold_binary_op_extended, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef irbuild___constant_foldmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.constant_fold",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    irbuild___constant_foldmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___constant_fold(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___constant_fold_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___constant_fold_internal);
        return CPyModule_mypyc___irbuild___constant_fold_internal;
    }
    CPyModule_mypyc___irbuild___constant_fold_internal = PyModule_Create(&irbuild___constant_foldmodule);
    if (unlikely(CPyModule_mypyc___irbuild___constant_fold_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___constant_fold_internal, "__name__");
    CPyStatic_irbuild___constant_fold___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___constant_fold_internal);
    if (unlikely(CPyStatic_irbuild___constant_fold___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_irbuild___constant_fold_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___constant_fold_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___constant_fold_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f0);
    CPy_XDECREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f1);
    CPy_XDECREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f2);
    CPy_XDECREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f3);
    CPy_XDECREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f4);
    CPyStatic_irbuild___constant_fold___CONST_TYPES = (tuple_T5OOOOO) { NULL, NULL, NULL, NULL, NULL };
    return NULL;
}

PyObject *CPyDef_irbuild___constant_fold___constant_fold_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    double cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_final_value;
    tuple_T5OOOOO cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_final;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    tuple_T3OOC cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_final_var;
    char cpy_r_r64;
    char cpy_r_native;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T5OOOOO cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_right;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 43, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r5 = ((mypy___nodes___IntExprObject *)cpy_r_r4)->_value;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___FloatExpr))
        cpy_r_r11 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 45, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.FloatExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r12 = ((mypy___nodes___FloatExprObject *)cpy_r_r11)->_value;
    cpy_r_r13 = PyFloat_FromDouble(cpy_r_r12);
    return cpy_r_r13;
CPyL6: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r18 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 47, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r19 = ((mypy___nodes___StrExprObject *)cpy_r_r18)->_value;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL9: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r24 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 49, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r25 = ((mypy___nodes___BytesExprObject *)cpy_r_r24)->_value;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_irbuild___util___bytes_from_str(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 49, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = (PyObject *)CPyType_nodes___ComplexExpr;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    if (!cpy_r_r30) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComplexExpr))
        cpy_r_r31 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 51, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.ComplexExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r32 = ((mypy___nodes___ComplexExprObject *)cpy_r_r31)->_value;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL16: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r37 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 53, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r38 = ((mypy___nodes___NameExprObject *)cpy_r_r37)->_node;
    CPy_INCREF(cpy_r_r38);
    cpy_r_node = cpy_r_r38;
    cpy_r_r39 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL61;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r43 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 54, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL62;
    }
    cpy_r_r44 = ((mypy___nodes___VarObject *)cpy_r_r43)->_is_final;
    if (!cpy_r_r44) goto CPyL61;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r45 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 55, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL62;
    }
    cpy_r_r46 = ((mypy___nodes___VarObject *)cpy_r_r45)->_final_value;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_node);
    cpy_r_final_value = cpy_r_r46;
    cpy_r_r47 = CPyStatic_irbuild___constant_fold___CONST_TYPES;
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONST_TYPES\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 56, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL25: ;
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_INCREF(cpy_r_r47.f2);
    CPy_INCREF(cpy_r_r47.f3);
    CPy_INCREF(cpy_r_r47.f4);
    cpy_r_r49 = PyTuple_New(5);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10053 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp10053);
    PyObject *__tmp10054 = cpy_r_r47.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp10054);
    PyObject *__tmp10055 = cpy_r_r47.f2;
    PyTuple_SET_ITEM(cpy_r_r49, 2, __tmp10055);
    PyObject *__tmp10056 = cpy_r_r47.f3;
    PyTuple_SET_ITEM(cpy_r_r49, 3, __tmp10056);
    PyObject *__tmp10057 = cpy_r_r47.f4;
    PyTuple_SET_ITEM(cpy_r_r49, 4, __tmp10057);
    cpy_r_r50 = PyObject_IsInstance(cpy_r_final_value, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 56, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL64;
    }
    cpy_r_r52 = cpy_r_r50;
    if (!cpy_r_r52) goto CPyL65;
    return cpy_r_final_value;
CPyL28: ;
    cpy_r_r53 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL40;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r57 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 59, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r58 = CPyDef_builder___IRBuilder___get_final_ref(cpy_r_builder, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 59, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    cpy_r_final = cpy_r_r58;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_final != cpy_r_r59;
    if (!cpy_r_r60) goto CPyL66;
    PyObject *__tmp10058;
    if (unlikely(!(PyTuple_Check(cpy_r_final) && PyTuple_GET_SIZE(cpy_r_final) == 3))) {
        __tmp10058 = NULL;
        goto __LL10059;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_final, 0))))
        __tmp10058 = PyTuple_GET_ITEM(cpy_r_final, 0);
    else {
        __tmp10058 = NULL;
    }
    if (__tmp10058 == NULL) goto __LL10059;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_final, 1)) == CPyType_nodes___Var))
        __tmp10058 = PyTuple_GET_ITEM(cpy_r_final, 1);
    else {
        __tmp10058 = NULL;
    }
    if (__tmp10058 == NULL) goto __LL10059;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_final, 2))))
        __tmp10058 = PyTuple_GET_ITEM(cpy_r_final, 2);
    else {
        __tmp10058 = NULL;
    }
    if (__tmp10058 == NULL) goto __LL10059;
    __tmp10058 = cpy_r_final;
__LL10059: ;
    if (unlikely(__tmp10058 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.Var, bool]", cpy_r_final); cpy_r_r61 = (tuple_T3OOC) { NULL, NULL, 2 };
    } else {
        PyObject *__tmp10060 = PyTuple_GET_ITEM(cpy_r_final, 0);
        CPy_INCREF(__tmp10060);
        PyObject *__tmp10061;
        if (likely(PyUnicode_Check(__tmp10060)))
            __tmp10061 = __tmp10060;
        else {
            CPy_TypeError("str", __tmp10060); 
            __tmp10061 = NULL;
        }
        cpy_r_r61.f0 = __tmp10061;
        PyObject *__tmp10062 = PyTuple_GET_ITEM(cpy_r_final, 1);
        CPy_INCREF(__tmp10062);
        PyObject *__tmp10063;
        if (likely(Py_TYPE(__tmp10062) == CPyType_nodes___Var))
            __tmp10063 = __tmp10062;
        else {
            CPy_TypeError("mypy.nodes.Var", __tmp10062); 
            __tmp10063 = NULL;
        }
        cpy_r_r61.f1 = __tmp10063;
        PyObject *__tmp10064 = PyTuple_GET_ITEM(cpy_r_final, 2);
        char __tmp10065;
        if (unlikely(!PyBool_Check(__tmp10064))) {
            CPy_TypeError("bool", __tmp10064); __tmp10065 = 2;
        } else
            __tmp10065 = __tmp10064 == Py_True;
        cpy_r_r61.f2 = __tmp10065;
    }
    CPy_DECREF(cpy_r_final);
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 61, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    cpy_r_r62 = cpy_r_r61.f0;
    CPy_INCREF(cpy_r_r62);
    cpy_r_fn = cpy_r_r62;
    CPy_DECREF(cpy_r_fn);
    cpy_r_r63 = cpy_r_r61.f1;
    CPy_INCREF(cpy_r_r63);
    cpy_r_final_var = cpy_r_r63;
    cpy_r_r64 = cpy_r_r61.f2;
    CPy_DECREF(cpy_r_r61.f0);
    CPy_DECREF(cpy_r_r61.f1);
    cpy_r_native = cpy_r_r64;
    cpy_r_r65 = ((mypy___nodes___VarObject *)cpy_r_final_var)->_is_final;
    if (!cpy_r_r65) goto CPyL67;
CPyL34: ;
    cpy_r_r66 = ((mypy___nodes___VarObject *)cpy_r_final_var)->_final_value;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_final_var);
    cpy_r_final_value = cpy_r_r66;
    cpy_r_r67 = CPyStatic_irbuild___constant_fold___CONST_TYPES;
    if (unlikely(cpy_r_r67.f0 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONST_TYPES\" was not set");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 64, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_INCREF(cpy_r_r67.f1);
    CPy_INCREF(cpy_r_r67.f2);
    CPy_INCREF(cpy_r_r67.f3);
    CPy_INCREF(cpy_r_r67.f4);
    cpy_r_r69 = PyTuple_New(5);
    if (unlikely(cpy_r_r69 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10066 = cpy_r_r67.f0;
    PyTuple_SET_ITEM(cpy_r_r69, 0, __tmp10066);
    PyObject *__tmp10067 = cpy_r_r67.f1;
    PyTuple_SET_ITEM(cpy_r_r69, 1, __tmp10067);
    PyObject *__tmp10068 = cpy_r_r67.f2;
    PyTuple_SET_ITEM(cpy_r_r69, 2, __tmp10068);
    PyObject *__tmp10069 = cpy_r_r67.f3;
    PyTuple_SET_ITEM(cpy_r_r69, 3, __tmp10069);
    PyObject *__tmp10070 = cpy_r_r67.f4;
    PyTuple_SET_ITEM(cpy_r_r69, 4, __tmp10070);
    cpy_r_r70 = PyObject_IsInstance(cpy_r_final_value, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 64, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL64;
    }
    cpy_r_r72 = cpy_r_r70;
    if (!cpy_r_r72) goto CPyL65;
    return cpy_r_final_value;
CPyL40: ;
    cpy_r_r73 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    if (!cpy_r_r76) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r77 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 67, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r78 = ((mypy___nodes___OpExprObject *)cpy_r_r77)->_left;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_builder, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 67, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    cpy_r_left = cpy_r_r79;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r80 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 68, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL69;
    }
    cpy_r_r81 = ((mypy___nodes___OpExprObject *)cpy_r_r80)->_right;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_builder, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 68, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL69;
    }
    cpy_r_right = cpy_r_r82;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r84 = cpy_r_left != cpy_r_r83;
    if (!cpy_r_r84) goto CPyL70;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_right != cpy_r_r85;
    if (!cpy_r_r86) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r87 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 70, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL71;
    }
    cpy_r_r88 = ((mypy___nodes___OpExprObject *)cpy_r_r87)->_op;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyDef_irbuild___constant_fold___constant_fold_binary_op_extended(cpy_r_r88, cpy_r_left, cpy_r_right);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 70, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    return cpy_r_r89;
CPyL50: ;
    cpy_r_r90 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r91 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r92 = *(PyObject * *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 == cpy_r_r90;
    if (!cpy_r_r93) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r94 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 72, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r95 = ((mypy___nodes___UnaryExprObject *)cpy_r_r94)->_expr;
    CPy_INCREF(cpy_r_r95);
    cpy_r_r96 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_builder, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 72, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    cpy_r_value = cpy_r_r96;
    cpy_r_r97 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r98 = cpy_r_value != cpy_r_r97;
    if (!cpy_r_r98) goto CPyL72;
    cpy_r_r99 = (PyObject *)&PyBytes_Type;
    cpy_r_r100 = PyObject_IsInstance(cpy_r_value, cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 73, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL73;
    }
    cpy_r_r102 = cpy_r_r100;
    if (cpy_r_r102) goto CPyL72;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r103 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 74, CPyStatic_irbuild___constant_fold___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL73;
    }
    cpy_r_r104 = ((mypy___nodes___UnaryExprObject *)cpy_r_r103)->_op;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = CPyDef_mypy___constant_fold___constant_fold_unary_op(cpy_r_r104, cpy_r_value);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 74, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL60;
    }
    return cpy_r_r105;
CPyL59: ;
    cpy_r_r106 = Py_None;
    CPy_INCREF(cpy_r_r106);
    return cpy_r_r106;
CPyL60: ;
    cpy_r_r107 = NULL;
    return cpy_r_r107;
CPyL61: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL60;
CPyL63: ;
    CPy_DecRef(cpy_r_final_value);
    goto CPyL23;
CPyL64: ;
    CPy_DecRef(cpy_r_final_value);
    goto CPyL60;
CPyL65: ;
    CPy_DECREF(cpy_r_final_value);
    goto CPyL59;
CPyL66: ;
    CPy_DECREF(cpy_r_final);
    goto CPyL59;
CPyL67: ;
    CPy_DECREF(cpy_r_final_var);
    goto CPyL59;
CPyL68: ;
    CPy_DecRef(cpy_r_final_value);
    goto CPyL35;
CPyL69: ;
    CPy_DecRef(cpy_r_left);
    goto CPyL60;
CPyL70: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL59;
CPyL71: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL60;
CPyL72: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL59;
CPyL73: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL60;
}

PyObject *CPyPy_irbuild___constant_fold___constant_fold_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:constant_fold_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_irbuild___constant_fold___constant_fold_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_expr", 37, CPyStatic_irbuild___constant_fold___globals);
    return NULL;
}

PyObject *CPyDef_irbuild___constant_fold___constant_fold_binary_op_extended(PyObject *cpy_r_op, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    cpy_r_r0 = (PyObject *)&PyBytes_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_left, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 85, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL6;
    cpy_r_r4 = (PyObject *)&PyBytes_Type;
    cpy_r_r5 = PyObject_IsInstance(cpy_r_right, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 85, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r7 = cpy_r_r5;
    if (cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPyDef_mypy___constant_fold___constant_fold_binary_op(cpy_r_op, cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 86, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = CPyStatics[886]; /* '+' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_op, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL9;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 88, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
CPyL9: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL18;
    cpy_r_r16 = (PyObject *)&PyBytes_Type;
    cpy_r_r17 = PyObject_IsInstance(cpy_r_left, cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 88, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL18;
    cpy_r_r20 = (PyObject *)&PyBytes_Type;
    cpy_r_r21 = PyObject_IsInstance(cpy_r_right, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 88, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL18;
    CPy_INCREF(cpy_r_left);
    if (likely(PyBytes_Check(cpy_r_left) || PyByteArray_Check(cpy_r_left)))
        cpy_r_r24 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 89, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_left);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyBytes_Check(cpy_r_right) || PyByteArray_Check(cpy_r_right)))
        cpy_r_r25 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 89, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_right);
        goto CPyL46;
    }
    cpy_r_r26 = CPyBytes_Concat(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 89, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r27 = CPyStatics[282]; /* '*' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_op, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL21;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 90, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
CPyL21: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL31;
    cpy_r_r34 = (PyObject *)&PyBytes_Type;
    cpy_r_r35 = PyObject_IsInstance(cpy_r_left, cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 90, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r37 = cpy_r_r35;
    if (!cpy_r_r37) goto CPyL31;
    cpy_r_r38 = (PyObject *)&PyLong_Type;
    cpy_r_r39 = PyObject_IsInstance(cpy_r_right, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 90, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL31;
    CPy_INCREF(cpy_r_left);
    if (likely(PyBytes_Check(cpy_r_left) || PyByteArray_Check(cpy_r_left)))
        cpy_r_r42 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 91, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_left);
        goto CPyL45;
    }
    if (likely(PyLong_Check(cpy_r_right)))
        cpy_r_r43 = CPyTagged_FromObject(cpy_r_right);
    else {
        CPy_TypeError("int", cpy_r_right); cpy_r_r43 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 91, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL47;
    }
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r43);
    cpy_r_r45 = PyNumber_Multiply(cpy_r_r42, cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 91, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    if (likely(PyBytes_Check(cpy_r_r45) || PyByteArray_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 91, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_r45);
        goto CPyL45;
    }
    return cpy_r_r46;
CPyL31: ;
    cpy_r_r47 = CPyStatics[282]; /* '*' */
    cpy_r_r48 = PyUnicode_Compare(cpy_r_op, cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL34;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL34;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 92, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
CPyL34: ;
    cpy_r_r53 = cpy_r_r48 == 0;
    if (!cpy_r_r53) goto CPyL44;
    cpy_r_r54 = (PyObject *)&PyLong_Type;
    cpy_r_r55 = PyObject_IsInstance(cpy_r_left, cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 92, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL44;
    cpy_r_r58 = (PyObject *)&PyBytes_Type;
    cpy_r_r59 = PyObject_IsInstance(cpy_r_right, cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 92, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL44;
    if (likely(PyLong_Check(cpy_r_left)))
        cpy_r_r62 = CPyTagged_FromObject(cpy_r_left);
    else {
        CPy_TypeError("int", cpy_r_left); cpy_r_r62 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 93, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyBytes_Check(cpy_r_right) || PyByteArray_Check(cpy_r_right)))
        cpy_r_r63 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 93, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_right);
        goto CPyL48;
    }
    cpy_r_r64 = CPyTagged_StealAsObject(cpy_r_r62);
    cpy_r_r65 = PyNumber_Multiply(cpy_r_r64, cpy_r_r63);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 93, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL45;
    }
    if (likely(PyBytes_Check(cpy_r_r65) || PyByteArray_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 93, CPyStatic_irbuild___constant_fold___globals, "bytes", cpy_r_r65);
        goto CPyL45;
    }
    return cpy_r_r66;
CPyL44: ;
    cpy_r_r67 = Py_None;
    CPy_INCREF(cpy_r_r67);
    return cpy_r_r67;
CPyL45: ;
    cpy_r_r68 = NULL;
    return cpy_r_r68;
CPyL46: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL45;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_r62);
    goto CPyL45;
}

PyObject *CPyPy_irbuild___constant_fold___constant_fold_binary_op_extended(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:constant_fold_binary_op_extended", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    PyObject *arg_left;
    if (PyLong_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL10071;
    if (CPyFloat_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL10071;
    arg_left = obj_left;
    if (arg_left != NULL) goto __LL10071;
    if (PyUnicode_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL10071;
    if (PyBytes_Check(obj_left) || PyByteArray_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL10071;
    CPy_TypeError("union[int, float, object, str, bytes]", obj_left); 
    goto fail;
__LL10071: ;
    PyObject *arg_right;
    if (PyLong_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL10072;
    if (CPyFloat_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL10072;
    arg_right = obj_right;
    if (arg_right != NULL) goto __LL10072;
    if (PyUnicode_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL10072;
    if (PyBytes_Check(obj_right) || PyByteArray_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL10072;
    CPy_TypeError("union[int, float, object, str, bytes]", obj_right); 
    goto fail;
__LL10072: ;
    PyObject *retval = CPyDef_irbuild___constant_fold___constant_fold_binary_op_extended(arg_op, arg_left, arg_right);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "constant_fold_binary_op_extended", 78, CPyStatic_irbuild___constant_fold___globals);
    return NULL;
}

char CPyDef_irbuild___constant_fold_____top_level__(void) {
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
    tuple_T5OOOOO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T5OOOOO cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", -1, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 11, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9285]; /* ('Final', 'Union') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 13, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10077]; /* ('constant_fold_binary_op', 'constant_fold_unary_op') */
    cpy_r_r14 = CPyStatics[5059]; /* 'mypy.constant_fold' */
    cpy_r_r15 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 15, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_mypy___constant_fold = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___constant_fold);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10078]; /* ('BytesExpr', 'ComplexExpr', 'Expression', 'FloatExpr',
                                      'IntExpr', 'MemberExpr', 'NameExpr', 'OpExpr',
                                      'StrExpr', 'UnaryExpr', 'Var') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 16, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r22 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r23 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 29, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10079]; /* ('bytes_from_str',) */
    cpy_r_r26 = CPyStatics[8101]; /* 'mypyc.irbuild.util' */
    cpy_r_r27 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 30, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___util = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___irbuild___util);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r30 = CPyStatics[84]; /* 'Union' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 33, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    cpy_r_r32 = (PyObject *)&PyLong_Type;
    cpy_r_r33 = (PyObject *)&PyFloat_Type;
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 33, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL17;
    }
    cpy_r_r37 = (PyObject *)&PyUnicode_Type;
    cpy_r_r38 = (PyObject *)&PyBytes_Type;
    cpy_r_r39.f0 = cpy_r_r32;
    cpy_r_r39.f1 = cpy_r_r33;
    cpy_r_r39.f2 = cpy_r_r36;
    cpy_r_r39.f3 = cpy_r_r37;
    cpy_r_r39.f4 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_INCREF(cpy_r_r39.f2);
    CPy_INCREF(cpy_r_r39.f3);
    CPy_INCREF(cpy_r_r39.f4);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r40 = PyTuple_New(5);
    if (unlikely(cpy_r_r40 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10073 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r40, 0, __tmp10073);
    PyObject *__tmp10074 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r40, 1, __tmp10074);
    PyObject *__tmp10075 = cpy_r_r39.f2;
    PyTuple_SET_ITEM(cpy_r_r40, 2, __tmp10075);
    PyObject *__tmp10076 = cpy_r_r39.f3;
    PyTuple_SET_ITEM(cpy_r_r40, 3, __tmp10076);
    PyObject *__tmp10077 = cpy_r_r39.f4;
    PyTuple_SET_ITEM(cpy_r_r40, 4, __tmp10077);
    cpy_r_r41 = PyObject_GetItem(cpy_r_r31, cpy_r_r40);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 33, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    cpy_r_r42 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r43 = CPyStatics[1603]; /* 'ConstantValue' */
    cpy_r_r44 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 33, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    cpy_r_r46 = (PyObject *)&PyLong_Type;
    cpy_r_r47 = (PyObject *)&PyFloat_Type;
    cpy_r_r48 = CPyModule_builtins;
    cpy_r_r49 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 34, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    cpy_r_r51 = (PyObject *)&PyUnicode_Type;
    cpy_r_r52 = (PyObject *)&PyBytes_Type;
    cpy_r_r53.f0 = cpy_r_r46;
    cpy_r_r53.f1 = cpy_r_r47;
    cpy_r_r53.f2 = cpy_r_r50;
    cpy_r_r53.f3 = cpy_r_r51;
    cpy_r_r53.f4 = cpy_r_r52;
    CPy_INCREF(cpy_r_r53.f0);
    CPy_INCREF(cpy_r_r53.f1);
    CPy_INCREF(cpy_r_r53.f2);
    CPy_INCREF(cpy_r_r53.f3);
    CPy_INCREF(cpy_r_r53.f4);
    CPy_DECREF(cpy_r_r50);
    CPyStatic_irbuild___constant_fold___CONST_TYPES = cpy_r_r53;
    CPy_INCREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f0);
    CPy_INCREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f1);
    CPy_INCREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f2);
    CPy_INCREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f3);
    CPy_INCREF(CPyStatic_irbuild___constant_fold___CONST_TYPES.f4);
    cpy_r_r54 = CPyStatic_irbuild___constant_fold___globals;
    cpy_r_r55 = CPyStatics[1604]; /* 'CONST_TYPES' */
    cpy_r_r56 = PyTuple_New(5);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10078 = cpy_r_r53.f0;
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp10078);
    PyObject *__tmp10079 = cpy_r_r53.f1;
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp10079);
    PyObject *__tmp10080 = cpy_r_r53.f2;
    PyTuple_SET_ITEM(cpy_r_r56, 2, __tmp10080);
    PyObject *__tmp10081 = cpy_r_r53.f3;
    PyTuple_SET_ITEM(cpy_r_r56, 3, __tmp10081);
    PyObject *__tmp10082 = cpy_r_r53.f4;
    PyTuple_SET_ITEM(cpy_r_r56, 4, __tmp10082);
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r54, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/constant_fold.py", "<module>", 34, CPyStatic_irbuild___constant_fold___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL17: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL16;
}
