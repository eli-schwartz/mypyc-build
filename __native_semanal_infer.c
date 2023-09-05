#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef semanal_infermodule_methods[] = {
    {"infer_decorator_signature_if_simple", (PyCFunction)CPyPy_semanal_infer___infer_decorator_signature_if_simple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_identity_signature", (PyCFunction)CPyPy_semanal_infer___is_identity_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_return_type", (PyCFunction)CPyPy_semanal_infer___calculate_return_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_fixed_callable_return", (PyCFunction)CPyPy_semanal_infer___find_fixed_callable_return, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_infermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_infer",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_infermodule_methods
};

PyObject *CPyInit_mypy___semanal_infer(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_infer_internal) {
        Py_INCREF(CPyModule_mypy___semanal_infer_internal);
        return CPyModule_mypy___semanal_infer_internal;
    }
    CPyModule_mypy___semanal_infer_internal = PyModule_Create(&semanal_infermodule);
    if (unlikely(CPyModule_mypy___semanal_infer_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_infer_internal, "__name__");
    CPyStatic_semanal_infer___globals = PyModule_GetDict(CPyModule_mypy___semanal_infer_internal);
    if (unlikely(CPyStatic_semanal_infer___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_infer_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_infer_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_infer_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_semanal_infer___infer_decorator_signature_if_simple(PyObject *cpy_r_dec, PyObject *cpy_r_analyzer) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_decorator_preserves_type;
    PyObject *cpy_r_r60;
    CPyTagged cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_expr;
    char cpy_r_preserve_type;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    CPyTagged cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_return_type;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyPtr cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_orig_sig;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    cpy_r_r1 = ((mypy___nodes___VarObject *)cpy_r_r0)->_is_property;
    if (!cpy_r_r1) goto CPyL18;
CPyL1: ;
    cpy_r_r2 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    cpy_r_r3 = ((mypy___nodes___FuncDefObject *)cpy_r_r2)->_type;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 == cpy_r_r4;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_types___AnyType(12, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 36, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 36, CPyStatic_semanal_infer___globals);
        goto CPyL69;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r14 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 37, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 37, CPyStatic_semanal_infer___globals);
        goto CPyL71;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_r14);
    *(PyObject * *)cpy_r_r18 = cpy_r_r14;
    cpy_r_r19 = PyList_New(1);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 38, CPyStatic_semanal_infer___globals);
        goto CPyL72;
    }
    cpy_r_r20 = Py_None;
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r19)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    CPy_INCREF(cpy_r_r20);
    *(PyObject * *)cpy_r_r22 = cpy_r_r20;
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_types___AnyType(12, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 39, CPyStatic_semanal_infer___globals);
        goto CPyL73;
    }
    cpy_r_r28 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_GET_METHOD_TRAIT(cpy_r_analyzer, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_analyzer, cpy_r_r28, cpy_r_r29); /* named_type */
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 40, CPyStatic_semanal_infer___globals);
        goto CPyL74;
    }
    cpy_r_r31 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 41, CPyStatic_semanal_infer___globals);
        goto CPyL75;
    }
CPyL12: ;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = 2;
    cpy_r_r38 = 2;
    cpy_r_r39 = NULL;
    cpy_r_r40 = 2;
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = NULL;
    cpy_r_r44 = 2;
    cpy_r_r45 = 2;
    cpy_r_r46 = CPyDef_types___CallableType(cpy_r_r11, cpy_r_r16, cpy_r_r19, cpy_r_r27, cpy_r_r30, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 35, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_r47 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r47)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r47)->_type = cpy_r_r46;
    goto CPyL17;
CPyL14: ;
    cpy_r_r49 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    cpy_r_r50 = ((mypy___nodes___FuncDefObject *)cpy_r_r49)->_type;
    cpy_r_r51 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r50)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL17;
    cpy_r_r55 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    cpy_r_r56 = ((mypy___nodes___FuncDefObject *)cpy_r_r55)->_type;
    CPy_INCREF(cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_types___CallableType))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 44, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_r56);
        goto CPyL68;
    }
    cpy_r_r58 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r58)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r58)->_type = cpy_r_r57;
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_decorator_preserves_type = 1;
    cpy_r_r60 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = 0;
CPyL19: ;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r60)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r61 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL76;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_r60, cpy_r_r61);
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_nodes___Expression)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 47, CPyStatic_semanal_infer___globals, "mypy.nodes.Expression", cpy_r_r66);
        goto CPyL77;
    }
    cpy_r_expr = cpy_r_r67;
    cpy_r_preserve_type = 0;
    cpy_r_r68 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL23;
    cpy_r_r72 = cpy_r_r71;
    goto CPyL24;
CPyL23: ;
    cpy_r_r73 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    cpy_r_r72 = cpy_r_r76;
CPyL24: ;
    if (!cpy_r_r72) goto CPyL26;
    cpy_r_r77 = cpy_r_r72;
    goto CPyL27;
CPyL26: ;
    cpy_r_r78 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    cpy_r_r77 = cpy_r_r81;
CPyL27: ;
    if (!cpy_r_r77) goto CPyL78;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r82 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 49, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL79;
    }
    cpy_r_r83 = ((mypy___nodes___RefExprObject *)cpy_r_r82)->_node;
    cpy_r_r84 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_r83)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (!cpy_r_r87) goto CPyL78;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r88 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL79;
    }
    cpy_r_r89 = ((mypy___nodes___RefExprObject *)cpy_r_r88)->_node;
    if (likely(Py_TYPE(cpy_r_r89) == CPyType_nodes___FuncDef))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals, "mypy.nodes.FuncDef", cpy_r_r89);
        goto CPyL79;
    }
    cpy_r_r91 = ((mypy___nodes___FuncDefObject *)cpy_r_r90)->_type;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r93 = cpy_r_r91 != cpy_r_r92;
    CPy_DECREF(cpy_r_r91);
    if (!cpy_r_r93) goto CPyL78;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r94 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL79;
    }
    cpy_r_r95 = ((mypy___nodes___RefExprObject *)cpy_r_r94)->_node;
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___FuncDef))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals, "mypy.nodes.FuncDef", cpy_r_r95);
        goto CPyL79;
    }
    cpy_r_r97 = ((mypy___nodes___FuncDefObject *)cpy_r_r96)->_type;
    CPy_INCREF(cpy_r_r97);
    if (likely(cpy_r_r97 != Py_None))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals, "mypy.types.ProperType", cpy_r_r97);
        goto CPyL79;
    }
    CPy_DECREF(cpy_r_expr);
    cpy_r_r99 = CPyDef_semanal_infer___is_identity_signature(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 50, CPyStatic_semanal_infer___globals);
        goto CPyL77;
    }
    if (!cpy_r_r99) goto CPyL39;
    cpy_r_preserve_type = 1;
CPyL39: ;
    if (cpy_r_preserve_type) {
        goto CPyL41;
    } else
        goto CPyL80;
CPyL40: ;
    cpy_r_decorator_preserves_type = 0;
    goto CPyL42;
CPyL41: ;
    cpy_r_r100 = cpy_r_r61 + 2;
    cpy_r_r61 = cpy_r_r100;
    goto CPyL19;
CPyL42: ;
    if (!cpy_r_decorator_preserves_type) goto CPyL46;
    cpy_r_r101 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r101);
    cpy_r_r102 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r103 = NULL;
    cpy_r_r104 = CPY_GET_METHOD_TRAIT(cpy_r_analyzer, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_analyzer, cpy_r_r102, cpy_r_r103); /* named_type */
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 58, CPyStatic_semanal_infer___globals);
        goto CPyL81;
    }
    cpy_r_r105 = CPyDef_typeops___function_type(cpy_r_r101, cpy_r_r104);
    CPy_DECREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 58, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_r106 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r106)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r106)->_type = cpy_r_r105;
CPyL46: ;
    cpy_r_r108 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_r108)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    CPy_DECREF(cpy_r_r108);
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = cpy_r_r111 != 0;
    if (!cpy_r_r112) goto CPyL67;
    cpy_r_r113 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    cpy_r_r114 = CPyList_GetItemShort(cpy_r_r113, 0);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 60, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r114, CPyType_nodes___Expression)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 60, CPyStatic_semanal_infer___globals, "mypy.nodes.Expression", cpy_r_r114);
        goto CPyL68;
    }
    cpy_r_r116 = CPyDef_semanal_infer___calculate_return_type(cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 60, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_return_type = cpy_r_r116;
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = cpy_r_return_type != cpy_r_r117;
    if (!cpy_r_r118) goto CPyL82;
    cpy_r_r119 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r120 = (CPyPtr)&((PyObject *)cpy_r_return_type)->ob_type;
    cpy_r_r121 = *(PyObject * *)cpy_r_r120;
    cpy_r_r122 = cpy_r_r121 == cpy_r_r119;
    if (!cpy_r_r122) goto CPyL82;
    if (likely(Py_TYPE(cpy_r_return_type) == CPyType_types___AnyType))
        cpy_r_r123 = cpy_r_return_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 64, CPyStatic_semanal_infer___globals, "mypy.types.AnyType", cpy_r_return_type);
        goto CPyL68;
    }
    cpy_r_r124 = NULL;
    cpy_r_r125 = CPY_INT_TAG;
    cpy_r_r126 = CPY_INT_TAG;
    cpy_r_r127 = CPyDef_types___AnyType(14, cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 64, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_r128 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r128)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r128)->_type = cpy_r_r127;
CPyL55: ;
    cpy_r_r130 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_decorators;
    cpy_r_r131 = CPyList_GetItemShort(cpy_r_r130, 0);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 65, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r131, CPyType_nodes___Expression)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 65, CPyStatic_semanal_infer___globals, "mypy.nodes.Expression", cpy_r_r131);
        goto CPyL68;
    }
    cpy_r_r133 = CPyDef_semanal_infer___find_fixed_callable_return(cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 65, CPyStatic_semanal_infer___globals);
        goto CPyL68;
    }
    cpy_r_sig = cpy_r_r133;
    cpy_r_r134 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r135 = cpy_r_sig != cpy_r_r134;
    if (!cpy_r_r135) goto CPyL83;
    cpy_r_r136 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r136);
    cpy_r_r137 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r138 = NULL;
    cpy_r_r139 = CPY_GET_METHOD_TRAIT(cpy_r_analyzer, CPyType_semanal_shared___SemanticAnalyzerInterface, 1, mypy___semanal_shared___SemanticAnalyzerInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_analyzer, cpy_r_r137, cpy_r_r138); /* named_type */
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 69, CPyStatic_semanal_infer___globals);
        goto CPyL84;
    }
    cpy_r_r140 = CPyDef_typeops___function_type(cpy_r_r136, cpy_r_r139);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 69, CPyStatic_semanal_infer___globals);
        goto CPyL85;
    }
    cpy_r_orig_sig = cpy_r_r140;
    cpy_r_r141 = CPY_GET_ATTR(cpy_r_orig_sig, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_orig_sig);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 70, CPyStatic_semanal_infer___globals);
        goto CPyL85;
    }
CPyL62: ;
    cpy_r_r142 = CPyList_GetItemShortBorrow(cpy_r_r141, 0);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 70, CPyStatic_semanal_infer___globals);
        goto CPyL86;
    }
    if (likely(Py_TYPE(cpy_r_r142) == CPyType_types___CallableType))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 70, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_r142);
        goto CPyL86;
    }
    cpy_r_r144 = ((mypy___types___CallableTypeObject *)cpy_r_r143)->_name;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r141);
    if (likely(cpy_r_sig != Py_None))
        cpy_r_r145 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 70, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL87;
    }
    CPy_DECREF(((mypy___types___CallableTypeObject *)cpy_r_r145)->_name);
    ((mypy___types___CallableTypeObject *)cpy_r_r145)->_name = cpy_r_r144;
    if (likely(cpy_r_sig != Py_None))
        cpy_r_r147 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 71, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL68;
    }
    cpy_r_r148 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_var;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r148)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r148)->_type = cpy_r_r147;
CPyL67: ;
    return 1;
CPyL68: ;
    cpy_r_r150 = 2;
    return cpy_r_r150;
CPyL69: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL68;
CPyL70: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL5;
CPyL71: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL68;
CPyL72: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    goto CPyL68;
CPyL73: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL68;
CPyL74: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    goto CPyL68;
CPyL75: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL68;
CPyL76: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL42;
CPyL77: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL68;
CPyL78: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL39;
CPyL79: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_expr);
    goto CPyL68;
CPyL80: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL40;
CPyL81: ;
    CPy_DecRef(cpy_r_r101);
    goto CPyL68;
CPyL82: ;
    CPy_DECREF(cpy_r_return_type);
    goto CPyL55;
CPyL83: ;
    CPy_DECREF(cpy_r_sig);
    goto CPyL67;
CPyL84: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r136);
    goto CPyL68;
CPyL85: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL68;
CPyL86: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r141);
    goto CPyL68;
CPyL87: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r144);
    goto CPyL68;
}

PyObject *CPyPy_semanal_infer___infer_decorator_signature_if_simple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dec", "analyzer", 0};
    static CPyArg_Parser parser = {"OO:infer_decorator_signature_if_simple", kwlist, 0};
    PyObject *obj_dec;
    PyObject *obj_analyzer;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dec, &obj_analyzer)) {
        return NULL;
    }
    PyObject *arg_dec;
    if (likely(Py_TYPE(obj_dec) == CPyType_nodes___Decorator))
        arg_dec = obj_dec;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_dec); 
        goto fail;
    }
    PyObject *arg_analyzer;
    if (likely(Py_TYPE(obj_analyzer) == CPyType_semanal___SemanticAnalyzer))
        arg_analyzer = obj_analyzer;
    else {
        CPy_TypeError("mypy.semanal_shared.SemanticAnalyzerInterface", obj_analyzer); 
        goto fail;
    }
    char retval = CPyDef_semanal_infer___infer_decorator_signature_if_simple(arg_dec, arg_analyzer);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_infer.py", "infer_decorator_signature_if_simple", 20, CPyStatic_semanal_infer___globals);
    return NULL;
}

char CPyDef_semanal_infer___is_identity_signature(PyObject *cpy_r_sig) {
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
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
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
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_sig);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 76, CPyStatic_semanal_infer___globals);
        goto CPyL25;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 76, CPyStatic_semanal_infer___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL25;
    }
    cpy_r_sig = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_sig)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_sig) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 77, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL27;
    }
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_r6)->_arg_kinds;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 77, CPyStatic_semanal_infer___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 77, CPyStatic_semanal_infer___globals);
        goto CPyL29;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_r8);
    *(PyObject * *)cpy_r_r12 = cpy_r_r8;
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r7, cpy_r_r10, 2);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 77, CPyStatic_semanal_infer___globals);
        goto CPyL27;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 77, CPyStatic_semanal_infer___globals);
        goto CPyL27;
    }
    if (!cpy_r_r14) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_sig) == CPyType_types___CallableType))
        cpy_r_r15 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 78, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL27;
    }
    cpy_r_r16 = ((mypy___types___CallableTypeObject *)cpy_r_r15)->_arg_types;
    cpy_r_r17 = CPyList_GetItemShortBorrow(cpy_r_r16, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 78, CPyStatic_semanal_infer___globals);
        goto CPyL27;
    }
    cpy_r_r18 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_sig) == CPyType_types___CallableType))
        cpy_r_r22 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 78, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL27;
    }
    cpy_r_r23 = ((mypy___types___CallableTypeObject *)cpy_r_r22)->_ret_type;
    cpy_r_r24 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r23)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_sig) == CPyType_types___CallableType))
        cpy_r_r28 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL27;
    }
    cpy_r_r29 = ((mypy___types___CallableTypeObject *)cpy_r_r28)->_arg_types;
    cpy_r_r30 = CPyList_GetItemShortBorrow(cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___TypeVarType))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals, "mypy.types.TypeVarType", cpy_r_r30);
        goto CPyL27;
    }
    cpy_r_r32 = ((mypy___types___TypeVarTypeObject *)cpy_r_r31)->_id;
    CPy_INCREF(cpy_r_r32);
    if (likely(Py_TYPE(cpy_r_sig) == CPyType_types___CallableType))
        cpy_r_r33 = cpy_r_sig;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_sig);
        goto CPyL30;
    }
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_r33)->_ret_type;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_types___TypeVarType))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals, "mypy.types.TypeVarType", cpy_r_r34);
        goto CPyL30;
    }
    cpy_r_r36 = ((mypy___types___TypeVarTypeObject *)cpy_r_r35)->_id;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_sig);
    cpy_r_r37 = CPyDef_types___TypeVarId_____eq__(cpy_r_r32, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals);
        goto CPyL25;
    }
    if (unlikely(!PyBool_Check(cpy_r_r37))) {
        CPy_TypeError("bool", cpy_r_r37); cpy_r_r38 = 2;
    } else
        cpy_r_r38 = cpy_r_r37 == Py_True;
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 79, CPyStatic_semanal_infer___globals);
        goto CPyL25;
    }
    return cpy_r_r38;
CPyL24: ;
    return 0;
CPyL25: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL26: ;
    CPy_DECREF(cpy_r_sig);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r7);
    goto CPyL5;
CPyL29: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r7);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r32);
    goto CPyL25;
}

PyObject *CPyPy_semanal_infer___is_identity_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sig", 0};
    static CPyArg_Parser parser = {"O:is_identity_signature", kwlist, 0};
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_sig;
    if (likely(PyObject_TypeCheck(obj_sig, CPyType_types___Type)))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypy.types.Type", obj_sig); 
        goto fail;
    }
    char retval = CPyDef_semanal_infer___is_identity_signature(arg_sig);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_infer.py", "is_identity_signature", 74, CPyStatic_semanal_infer___globals);
    return NULL;
}

PyObject *CPyDef_semanal_infer___calculate_return_type(PyObject *cpy_r_expr) {
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL26;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 91, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL31;
    }
    cpy_r_r15 = ((mypy___nodes___RefExprObject *)cpy_r_r14)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL20;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r20 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 92, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL31;
    }
    cpy_r_r21 = ((mypy___nodes___RefExprObject *)cpy_r_r20)->_node;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___FuncDef))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 92, CPyStatic_semanal_infer___globals, "mypy.nodes.FuncDef", cpy_r_r21);
        goto CPyL31;
    }
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_r22)->_type;
    CPy_INCREF(cpy_r_r23);
    cpy_r_typ = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_typ == cpy_r_r24;
    if (cpy_r_r25) {
        goto CPyL32;
    } else
        goto CPyL14;
CPyL12: ;
    cpy_r_r26 = NULL;
    cpy_r_r27 = NULL;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = CPyDef_types___AnyType(2, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "calculate_return_type", 95, CPyStatic_semanal_infer___globals);
        goto CPyL31;
    }
    return cpy_r_r30;
CPyL14: ;
    cpy_r_r31 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r35 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 98, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r36 = ((mypy___types___CallableTypeObject *)cpy_r_r35)->_ret_type;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r37 = CPyDef_types___get_proper_type(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "calculate_return_type", 98, CPyStatic_semanal_infer___globals);
        goto CPyL31;
    }
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 98, CPyStatic_semanal_infer___globals, "mypy.types.ProperType", cpy_r_r37);
        goto CPyL31;
    }
    return cpy_r_r38;
CPyL19: ;
    cpy_r_r39 = Py_None;
    CPy_INCREF(cpy_r_r39);
    return cpy_r_r39;
CPyL20: ;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r40 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 100, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL31;
    }
    cpy_r_r41 = ((mypy___nodes___RefExprObject *)cpy_r_r40)->_node;
    cpy_r_r42 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_r41)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL30;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r46 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 101, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL31;
    }
    cpy_r_r47 = ((mypy___nodes___RefExprObject *)cpy_r_r46)->_node;
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_nodes___Var))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 101, CPyStatic_semanal_infer___globals, "mypy.nodes.Var", cpy_r_r47);
        goto CPyL31;
    }
    cpy_r_r49 = ((mypy___nodes___VarObject *)cpy_r_r48)->_type;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = CPyDef_types___get_proper_type(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "calculate_return_type", 101, CPyStatic_semanal_infer___globals);
        goto CPyL31;
    }
    return cpy_r_r50;
CPyL26: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r55 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "calculate_return_type", 103, CPyStatic_semanal_infer___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL31;
    }
    cpy_r_r56 = ((mypy___nodes___CallExprObject *)cpy_r_r55)->_callee;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_semanal_infer___calculate_return_type(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "calculate_return_type", 103, CPyStatic_semanal_infer___globals);
        goto CPyL31;
    }
    return cpy_r_r57;
CPyL30: ;
    cpy_r_r58 = Py_None;
    CPy_INCREF(cpy_r_r58);
    return cpy_r_r58;
CPyL31: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL32: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL12;
CPyL33: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL19;
CPyL34: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL31;
}

PyObject *CPyPy_semanal_infer___calculate_return_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:calculate_return_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_infer___calculate_return_type(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_infer.py", "calculate_return_type", 83, CPyStatic_semanal_infer___globals);
    return NULL;
}

PyObject *CPyDef_semanal_infer___find_fixed_callable_return(PyObject *cpy_r_expr) {
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL22;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r14 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 115, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL33;
    }
    cpy_r_r15 = ((mypy___nodes___RefExprObject *)cpy_r_r14)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL32;
    if (likely((Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r20 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 116, CPyStatic_semanal_infer___globals, "mypy.nodes.RefExpr", cpy_r_expr);
        goto CPyL33;
    }
    cpy_r_r21 = ((mypy___nodes___RefExprObject *)cpy_r_r20)->_node;
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___FuncDef))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 116, CPyStatic_semanal_infer___globals, "mypy.nodes.FuncDef", cpy_r_r21);
        goto CPyL33;
    }
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_r22)->_type;
    CPy_INCREF(cpy_r_r23);
    cpy_r_typ = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_typ != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL34;
    cpy_r_r26 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r30 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 118, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL35;
    }
    cpy_r_r31 = ((mypy___types___CallableTypeObject *)cpy_r_r30)->_ret_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_typevars___has_no_typevars(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 118, CPyStatic_semanal_infer___globals);
        goto CPyL35;
    }
    if (!cpy_r_r32) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r33 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 119, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL35;
    }
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_r33)->_ret_type;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r35 = CPyDef_types___get_proper_type(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 119, CPyStatic_semanal_infer___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 119, CPyStatic_semanal_infer___globals, "mypy.types.ProperType", cpy_r_r35);
        goto CPyL33;
    }
    cpy_r_ret_type = cpy_r_r36;
    cpy_r_r37 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___CallableType))
        cpy_r_r41 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 121, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_ret_type);
        goto CPyL33;
    }
    return cpy_r_r41;
CPyL22: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r46 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 123, CPyStatic_semanal_infer___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL33;
    }
    cpy_r_r47 = ((mypy___nodes___CallExprObject *)cpy_r_r46)->_callee;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyDef_semanal_infer___find_fixed_callable_return(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 123, CPyStatic_semanal_infer___globals);
        goto CPyL33;
    }
    cpy_r_t = cpy_r_r48;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_t != cpy_r_r49;
    if (!cpy_r_r50) goto CPyL37;
    if (likely(cpy_r_t != Py_None))
        cpy_r_r51 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 125, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL38;
    }
    cpy_r_r52 = ((mypy___types___CallableTypeObject *)cpy_r_r51)->_ret_type;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_t);
    cpy_r_r53 = CPyDef_types___get_proper_type(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 125, CPyStatic_semanal_infer___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r53 != Py_None))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 125, CPyStatic_semanal_infer___globals, "mypy.types.ProperType", cpy_r_r53);
        goto CPyL33;
    }
    cpy_r_ret_type = cpy_r_r54;
    cpy_r_r55 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL36;
    if (likely(Py_TYPE(cpy_r_ret_type) == CPyType_types___CallableType))
        cpy_r_r59 = cpy_r_ret_type;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 127, CPyStatic_semanal_infer___globals, "mypy.types.CallableType", cpy_r_ret_type);
        goto CPyL33;
    }
    return cpy_r_r59;
CPyL32: ;
    cpy_r_r60 = Py_None;
    CPy_INCREF(cpy_r_r60);
    return cpy_r_r60;
CPyL33: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL34: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL33;
}

PyObject *CPyPy_semanal_infer___find_fixed_callable_return(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:find_fixed_callable_return", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_infer___find_fixed_callable_return(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_infer.py", "find_fixed_callable_return", 107, CPyStatic_semanal_infer___globals);
    return NULL;
}

char CPyDef_semanal_infer_____top_level__(void) {
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
    char cpy_r_r29;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", -1, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_infer___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 3, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9694]; /* ('ARG_POS', 'CallExpr', 'Decorator', 'Expression',
                                    'FuncDef', 'RefExpr', 'Var') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_semanal_infer___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 5, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9692]; /* ('SemanticAnalyzerInterface',) */
    cpy_r_r14 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r15 = CPyStatic_semanal_infer___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 6, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9695]; /* ('function_type',) */
    cpy_r_r18 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r19 = CPyStatic_semanal_infer___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 7, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_mypy___typeops = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9696]; /* ('AnyType', 'CallableType', 'ProperType', 'Type',
                                     'TypeOfAny', 'TypeVarType', 'get_proper_type') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_semanal_infer___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 8, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9697]; /* ('has_no_typevars',) */
    cpy_r_r26 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r27 = CPyStatic_semanal_infer___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_infer.py", "<module>", 17, CPyStatic_semanal_infer___globals);
        goto CPyL10;
    }
    CPyModule_mypy___typevars = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r28);
    return 1;
CPyL10: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}
