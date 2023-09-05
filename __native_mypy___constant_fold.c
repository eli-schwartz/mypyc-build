#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef mypy___constant_foldmodule_methods[] = {
    {"constant_fold_expr", (PyCFunction)CPyPy_mypy___constant_fold___constant_fold_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"constant_fold_binary_op", (PyCFunction)CPyPy_mypy___constant_fold___constant_fold_binary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"constant_fold_binary_int_op", (PyCFunction)CPyPy_mypy___constant_fold___constant_fold_binary_int_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"constant_fold_binary_float_op", (PyCFunction)CPyPy_mypy___constant_fold___constant_fold_binary_float_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"constant_fold_unary_op", (PyCFunction)CPyPy_mypy___constant_fold___constant_fold_unary_op, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___constant_foldmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.constant_fold",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___constant_foldmodule_methods
};

PyObject *CPyInit_mypy___constant_fold(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___constant_fold_internal) {
        Py_INCREF(CPyModule_mypy___constant_fold_internal);
        return CPyModule_mypy___constant_fold_internal;
    }
    CPyModule_mypy___constant_fold_internal = PyModule_Create(&mypy___constant_foldmodule);
    if (unlikely(CPyModule_mypy___constant_fold_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___constant_fold_internal, "__name__");
    CPyStatic_mypy___constant_fold___globals = PyModule_GetDict(CPyModule_mypy___constant_fold_internal);
    if (unlikely(CPyStatic_mypy___constant_fold___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___constant_fold_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___constant_fold_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___constant_fold_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f0);
    CPy_XDECREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f1);
    CPy_XDECREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f2);
    CPy_XDECREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f3);
    CPy_XDECREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f4);
    CPyStatic_mypy___constant_fold___CONST_TYPES = (tuple_T5OOOOO) { NULL, NULL, NULL, NULL, NULL };
    return NULL;
}

PyObject *CPyDef_mypy___constant_fold___constant_fold_expr(PyObject *cpy_r_expr, PyObject *cpy_r_cur_mod_id) {
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    double cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_value;
    tuple_T5OOOOO cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_right;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___IntExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 46, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.IntExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r5 = ((mypy___nodes___IntExprObject *)cpy_r_r4)->_value;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyTagged_StealAsObject(cpy_r_r5);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r11 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 48, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r12 = ((mypy___nodes___StrExprObject *)cpy_r_r11)->_value;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL6: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL9;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___FloatExpr))
        cpy_r_r17 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 50, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.FloatExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r18 = ((mypy___nodes___FloatExprObject *)cpy_r_r17)->_value;
    cpy_r_r19 = PyFloat_FromDouble(cpy_r_r18);
    return cpy_r_r19;
CPyL9: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___ComplexExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___ComplexExpr))
        cpy_r_r24 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 52, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.ComplexExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r25 = ((mypy___nodes___ComplexExprObject *)cpy_r_r24)->_value;
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL12: ;
    cpy_r_r26 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (!cpy_r_r29) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r30 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 54, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r31 = ((mypy___nodes___NameExprObject *)cpy_r_r30)->_name;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyStatics[1151]; /* 'True' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL17;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL17;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 54, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
CPyL17: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL19;
    cpy_r_r39 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r39);
    return cpy_r_r39;
CPyL19: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r40 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 56, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r41 = ((mypy___nodes___NameExprObject *)cpy_r_r40)->_name;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[1152]; /* 'False' */
    cpy_r_r43 = PyUnicode_Compare(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 == -1;
    if (!cpy_r_r44) goto CPyL23;
    cpy_r_r45 = PyErr_Occurred();
    cpy_r_r46 = cpy_r_r45 != NULL;
    if (!cpy_r_r46) goto CPyL23;
    cpy_r_r47 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 56, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
CPyL23: ;
    cpy_r_r48 = cpy_r_r43 == 0;
    if (!cpy_r_r48) goto CPyL25;
    cpy_r_r49 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r49);
    return cpy_r_r49;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r50 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 58, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r51 = ((mypy___nodes___NameExprObject *)cpy_r_r50)->_node;
    CPy_INCREF(cpy_r_r51);
    cpy_r_node = cpy_r_r51;
    cpy_r_r52 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL65;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r56 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 61, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL66;
    }
    cpy_r_r57 = ((mypy___nodes___VarObject *)cpy_r_r56)->_is_final;
    if (!cpy_r_r57) goto CPyL65;
CPyL29: ;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r58 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL66;
    }
    cpy_r_r59 = CPY_GET_ATTR(cpy_r_r58, CPyType_nodes___Var, 7, mypy___nodes___VarObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals);
        goto CPyL66;
    }
CPyL31: ;
    cpy_r_r60 = CPyStatics[224]; /* '.' */
    cpy_r_r61 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r62 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r63[3] = {cpy_r_r59, cpy_r_r60, cpy_r_r62};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r61, cpy_r_r64, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r59);
    if (likely(PyList_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals, "list", cpy_r_r65);
        goto CPyL68;
    }
    cpy_r_r67 = CPyList_GetItemShort(cpy_r_r66, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals);
        goto CPyL68;
    }
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_r67);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r65);
    cpy_r_r69 = PyUnicode_Compare(cpy_r_r68, cpy_r_cur_mod_id);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL38;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL38;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 62, CPyStatic_mypy___constant_fold___globals);
        goto CPyL66;
    }
CPyL38: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (!cpy_r_r74) goto CPyL65;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r75 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 64, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL66;
    }
    cpy_r_r76 = ((mypy___nodes___VarObject *)cpy_r_r75)->_final_value;
    CPy_INCREF(cpy_r_r76);
    CPy_DECREF(cpy_r_node);
    cpy_r_value = cpy_r_r76;
    cpy_r_r77 = CPyStatic_mypy___constant_fold___CONST_TYPES;
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONST_TYPES\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 65, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL43: ;
    CPy_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPy_INCREF(cpy_r_r77.f2);
    CPy_INCREF(cpy_r_r77.f3);
    CPy_INCREF(cpy_r_r77.f4);
    cpy_r_r79 = PyTuple_New(5);
    if (unlikely(cpy_r_r79 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1728 = cpy_r_r77.f0;
    PyTuple_SET_ITEM(cpy_r_r79, 0, __tmp1728);
    PyObject *__tmp1729 = cpy_r_r77.f1;
    PyTuple_SET_ITEM(cpy_r_r79, 1, __tmp1729);
    PyObject *__tmp1730 = cpy_r_r77.f2;
    PyTuple_SET_ITEM(cpy_r_r79, 2, __tmp1730);
    PyObject *__tmp1731 = cpy_r_r77.f3;
    PyTuple_SET_ITEM(cpy_r_r79, 3, __tmp1731);
    PyObject *__tmp1732 = cpy_r_r77.f4;
    PyTuple_SET_ITEM(cpy_r_r79, 4, __tmp1732);
    cpy_r_r80 = PyObject_IsInstance(cpy_r_value, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 65, CPyStatic_mypy___constant_fold___globals);
        goto CPyL70;
    }
    cpy_r_r82 = cpy_r_r80;
    if (!cpy_r_r82) goto CPyL71;
    return cpy_r_value;
CPyL46: ;
    cpy_r_r83 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r84 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r85 = *(PyObject * *)cpy_r_r84;
    cpy_r_r86 = cpy_r_r85 == cpy_r_r83;
    if (!cpy_r_r86) goto CPyL56;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r87 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 68, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r88 = ((mypy___nodes___OpExprObject *)cpy_r_r87)->_left;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = CPyDef_mypy___constant_fold___constant_fold_expr(cpy_r_r88, cpy_r_cur_mod_id);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 68, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
    cpy_r_left = cpy_r_r89;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r90 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 69, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL72;
    }
    cpy_r_r91 = ((mypy___nodes___OpExprObject *)cpy_r_r90)->_right;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyDef_mypy___constant_fold___constant_fold_expr(cpy_r_r91, cpy_r_cur_mod_id);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 69, CPyStatic_mypy___constant_fold___globals);
        goto CPyL72;
    }
    cpy_r_right = cpy_r_r92;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = cpy_r_left != cpy_r_r93;
    if (!cpy_r_r94) goto CPyL73;
    cpy_r_r95 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r96 = cpy_r_right != cpy_r_r95;
    if (!cpy_r_r96) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr))
        cpy_r_r97 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 71, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.OpExpr", cpy_r_expr);
        goto CPyL74;
    }
    cpy_r_r98 = ((mypy___nodes___OpExprObject *)cpy_r_r97)->_op;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = CPyDef_mypy___constant_fold___constant_fold_binary_op(cpy_r_r98, cpy_r_left, cpy_r_right);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 71, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
    return cpy_r_r99;
CPyL56: ;
    cpy_r_r100 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r101 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r102 = *(PyObject * *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 == cpy_r_r100;
    if (!cpy_r_r103) goto CPyL63;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r104 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 73, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL64;
    }
    cpy_r_r105 = ((mypy___nodes___UnaryExprObject *)cpy_r_r104)->_expr;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyDef_mypy___constant_fold___constant_fold_expr(cpy_r_r105, cpy_r_cur_mod_id);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 73, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
    cpy_r_value = cpy_r_r106;
    cpy_r_r107 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r108 = cpy_r_value != cpy_r_r107;
    if (!cpy_r_r108) goto CPyL71;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr))
        cpy_r_r109 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_expr", 75, CPyStatic_mypy___constant_fold___globals, "mypy.nodes.UnaryExpr", cpy_r_expr);
        goto CPyL70;
    }
    cpy_r_r110 = ((mypy___nodes___UnaryExprObject *)cpy_r_r109)->_op;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = CPyDef_mypy___constant_fold___constant_fold_unary_op(cpy_r_r110, cpy_r_value);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 75, CPyStatic_mypy___constant_fold___globals);
        goto CPyL64;
    }
    return cpy_r_r111;
CPyL63: ;
    cpy_r_r112 = Py_None;
    CPy_INCREF(cpy_r_r112);
    return cpy_r_r112;
CPyL64: ;
    cpy_r_r113 = NULL;
    return cpy_r_r113;
CPyL65: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL63;
CPyL66: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r59);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r65);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL41;
CPyL70: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL64;
CPyL71: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL63;
CPyL72: ;
    CPy_DecRef(cpy_r_left);
    goto CPyL64;
CPyL73: ;
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    goto CPyL63;
CPyL74: ;
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL64;
}

PyObject *CPyPy_mypy___constant_fold___constant_fold_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", "cur_mod_id", 0};
    static CPyArg_Parser parser = {"OO:constant_fold_expr", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_cur_mod_id;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_cur_mod_id)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_cur_mod_id;
    if (likely(PyUnicode_Check(obj_cur_mod_id)))
        arg_cur_mod_id = obj_cur_mod_id;
    else {
        CPy_TypeError("str", obj_cur_mod_id); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___constant_fold___constant_fold_expr(arg_expr, arg_cur_mod_id);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_expr", 27, CPyStatic_mypy___constant_fold___globals);
    return NULL;
}

PyObject *CPyDef_mypy___constant_fold___constant_fold_binary_op(PyObject *cpy_r_op, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    double cpy_r_r19;
    char cpy_r_r20;
    double cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    double cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    double cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
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
    int32_t cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T2OO cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    tuple_T2OO cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    tuple_T2OO cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    tuple_T2OO cpy_r_r197;
    PyObject *cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_left, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 82, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = (PyObject *)&PyLong_Type;
    cpy_r_r5 = PyObject_IsInstance(cpy_r_right, cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 82, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL8;
    if (likely(PyLong_Check(cpy_r_left)))
        cpy_r_r8 = CPyTagged_FromObject(cpy_r_left);
    else {
        CPy_TypeError("int", cpy_r_left); cpy_r_r8 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 83, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    if (likely(PyLong_Check(cpy_r_right)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_right);
    else {
        CPy_TypeError("int", cpy_r_right); cpy_r_r9 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 83, CPyStatic_mypy___constant_fold___globals);
        goto CPyL124;
    }
    cpy_r_r10 = CPyDef_mypy___constant_fold___constant_fold_binary_int_op(cpy_r_op, cpy_r_r8, cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 83, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = (PyObject *)&PyFloat_Type;
    cpy_r_r12 = PyObject_IsInstance(cpy_r_left, cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 86, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL18;
    cpy_r_r15 = (PyObject *)&PyFloat_Type;
    cpy_r_r16 = PyObject_IsInstance(cpy_r_right, cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 86, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = PyFloat_AsDouble(cpy_r_left);
    if (cpy_r_r19 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_left); cpy_r_r19 = -113.0;
    }
    cpy_r_r20 = cpy_r_r19 == -113.0;
    if (unlikely(cpy_r_r20)) goto CPyL14;
CPyL13: ;
    cpy_r_r21 = PyFloat_AsDouble(cpy_r_right);
    if (cpy_r_r21 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_right); cpy_r_r21 = -113.0;
    }
    cpy_r_r22 = cpy_r_r21 == -113.0;
    if (unlikely(cpy_r_r22)) {
        goto CPyL16;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r23 = PyErr_Occurred();
    if (unlikely(cpy_r_r23 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 87, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL13;
CPyL15: ;
    cpy_r_r24 = PyFloat_FromDouble(cpy_r_r19);
    cpy_r_r25 = PyFloat_FromDouble(cpy_r_r21);
    cpy_r_r26 = CPyDef_mypy___constant_fold___constant_fold_binary_float_op(cpy_r_op, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 87, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r27 = PyErr_Occurred();
    if (unlikely(cpy_r_r27 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 87, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL15;
CPyL17: ;
    return cpy_r_r26;
CPyL18: ;
    cpy_r_r28 = (PyObject *)&PyFloat_Type;
    cpy_r_r29 = PyObject_IsInstance(cpy_r_left, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 88, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r31 = cpy_r_r29;
    if (!cpy_r_r31) goto CPyL27;
    cpy_r_r32 = (PyObject *)&PyLong_Type;
    cpy_r_r33 = PyObject_IsInstance(cpy_r_right, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 88, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r35 = cpy_r_r33;
    if (!cpy_r_r35) goto CPyL27;
    cpy_r_r36 = PyFloat_AsDouble(cpy_r_left);
    if (cpy_r_r36 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_left); cpy_r_r36 = -113.0;
    }
    cpy_r_r37 = cpy_r_r36 == -113.0;
    if (unlikely(cpy_r_r37)) goto CPyL24;
CPyL23: ;
    if (likely(PyLong_Check(cpy_r_right)))
        cpy_r_r38 = CPyTagged_FromObject(cpy_r_right);
    else {
        CPy_TypeError("int", cpy_r_right); cpy_r_r38 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 89, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r39 = PyErr_Occurred();
    if (unlikely(cpy_r_r39 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 89, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL23;
CPyL25: ;
    cpy_r_r40 = PyFloat_FromDouble(cpy_r_r36);
    cpy_r_r41 = CPyTagged_StealAsObject(cpy_r_r38);
    cpy_r_r42 = CPyDef_mypy___constant_fold___constant_fold_binary_float_op(cpy_r_op, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 89, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r42;
CPyL27: ;
    cpy_r_r43 = (PyObject *)&PyLong_Type;
    cpy_r_r44 = PyObject_IsInstance(cpy_r_left, cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 90, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r46 = cpy_r_r44;
    if (!cpy_r_r46) goto CPyL36;
    cpy_r_r47 = (PyObject *)&PyFloat_Type;
    cpy_r_r48 = PyObject_IsInstance(cpy_r_right, cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 90, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r50 = cpy_r_r48;
    if (!cpy_r_r50) goto CPyL36;
    if (likely(PyLong_Check(cpy_r_left)))
        cpy_r_r51 = CPyTagged_FromObject(cpy_r_left);
    else {
        CPy_TypeError("int", cpy_r_left); cpy_r_r51 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 91, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r52 = PyFloat_AsDouble(cpy_r_right);
    if (cpy_r_r52 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_right); cpy_r_r52 = -113.0;
    }
    cpy_r_r53 = cpy_r_r52 == -113.0;
    if (unlikely(cpy_r_r53)) goto CPyL34;
CPyL33: ;
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_r51);
    cpy_r_r55 = PyFloat_FromDouble(cpy_r_r52);
    cpy_r_r56 = CPyDef_mypy___constant_fold___constant_fold_binary_float_op(cpy_r_op, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 91, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    } else
        goto CPyL35;
CPyL34: ;
    cpy_r_r57 = PyErr_Occurred();
    if (unlikely(cpy_r_r57 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 91, CPyStatic_mypy___constant_fold___globals);
        goto CPyL125;
    } else
        goto CPyL33;
CPyL35: ;
    return cpy_r_r56;
CPyL36: ;
    cpy_r_r58 = CPyStatics[886]; /* '+' */
    cpy_r_r59 = PyUnicode_Compare(cpy_r_op, cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 == -1;
    if (!cpy_r_r60) goto CPyL39;
    cpy_r_r61 = PyErr_Occurred();
    cpy_r_r62 = cpy_r_r61 != NULL;
    if (!cpy_r_r62) goto CPyL39;
    cpy_r_r63 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 94, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL39: ;
    cpy_r_r64 = cpy_r_r59 == 0;
    if (!cpy_r_r64) goto CPyL48;
    cpy_r_r65 = (PyObject *)&PyUnicode_Type;
    cpy_r_r66 = PyObject_IsInstance(cpy_r_left, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 94, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r68 = cpy_r_r66;
    if (!cpy_r_r68) goto CPyL48;
    cpy_r_r69 = (PyObject *)&PyUnicode_Type;
    cpy_r_r70 = PyObject_IsInstance(cpy_r_right, cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 94, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r72 = cpy_r_r70;
    if (!cpy_r_r72) goto CPyL48;
    CPy_INCREF(cpy_r_left);
    if (likely(PyUnicode_Check(cpy_r_left)))
        cpy_r_r73 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 95, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_left);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyUnicode_Check(cpy_r_right)))
        cpy_r_r74 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 95, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_right);
        goto CPyL126;
    }
    cpy_r_r75 = PyUnicode_Concat(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 95, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r75;
CPyL48: ;
    cpy_r_r76 = CPyStatics[282]; /* '*' */
    cpy_r_r77 = PyUnicode_Compare(cpy_r_op, cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 == -1;
    if (!cpy_r_r78) goto CPyL51;
    cpy_r_r79 = PyErr_Occurred();
    cpy_r_r80 = cpy_r_r79 != NULL;
    if (!cpy_r_r80) goto CPyL51;
    cpy_r_r81 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 96, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL51: ;
    cpy_r_r82 = cpy_r_r77 == 0;
    if (!cpy_r_r82) goto CPyL61;
    cpy_r_r83 = (PyObject *)&PyUnicode_Type;
    cpy_r_r84 = PyObject_IsInstance(cpy_r_left, cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 96, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r86 = cpy_r_r84;
    if (!cpy_r_r86) goto CPyL61;
    cpy_r_r87 = (PyObject *)&PyLong_Type;
    cpy_r_r88 = PyObject_IsInstance(cpy_r_right, cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 96, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r90 = cpy_r_r88;
    if (!cpy_r_r90) goto CPyL61;
    CPy_INCREF(cpy_r_left);
    if (likely(PyUnicode_Check(cpy_r_left)))
        cpy_r_r91 = cpy_r_left;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 97, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_left);
        goto CPyL123;
    }
    if (likely(PyLong_Check(cpy_r_right)))
        cpy_r_r92 = CPyTagged_FromObject(cpy_r_right);
    else {
        CPy_TypeError("int", cpy_r_right); cpy_r_r92 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r92 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 97, CPyStatic_mypy___constant_fold___globals);
        goto CPyL127;
    }
    cpy_r_r93 = CPyTagged_StealAsObject(cpy_r_r92);
    cpy_r_r94 = PyNumber_Multiply(cpy_r_r91, cpy_r_r93);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 97, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    if (likely(PyUnicode_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 97, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_r94);
        goto CPyL123;
    }
    return cpy_r_r95;
CPyL61: ;
    cpy_r_r96 = CPyStatics[282]; /* '*' */
    cpy_r_r97 = PyUnicode_Compare(cpy_r_op, cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 == -1;
    if (!cpy_r_r98) goto CPyL64;
    cpy_r_r99 = PyErr_Occurred();
    cpy_r_r100 = cpy_r_r99 != NULL;
    if (!cpy_r_r100) goto CPyL64;
    cpy_r_r101 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 98, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL64: ;
    cpy_r_r102 = cpy_r_r97 == 0;
    if (!cpy_r_r102) goto CPyL74;
    cpy_r_r103 = (PyObject *)&PyLong_Type;
    cpy_r_r104 = PyObject_IsInstance(cpy_r_left, cpy_r_r103);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 98, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r106 = cpy_r_r104;
    if (!cpy_r_r106) goto CPyL74;
    cpy_r_r107 = (PyObject *)&PyUnicode_Type;
    cpy_r_r108 = PyObject_IsInstance(cpy_r_right, cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 98, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r110 = cpy_r_r108;
    if (!cpy_r_r110) goto CPyL74;
    if (likely(PyLong_Check(cpy_r_left)))
        cpy_r_r111 = CPyTagged_FromObject(cpy_r_left);
    else {
        CPy_TypeError("int", cpy_r_left); cpy_r_r111 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r111 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 99, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_right);
    if (likely(PyUnicode_Check(cpy_r_right)))
        cpy_r_r112 = cpy_r_right;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 99, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_right);
        goto CPyL128;
    }
    cpy_r_r113 = CPyTagged_StealAsObject(cpy_r_r111);
    cpy_r_r114 = PyNumber_Multiply(cpy_r_r113, cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 99, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    if (likely(PyUnicode_Check(cpy_r_r114)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 99, CPyStatic_mypy___constant_fold___globals, "str", cpy_r_r114);
        goto CPyL123;
    }
    return cpy_r_r115;
CPyL74: ;
    cpy_r_r116 = CPyStatics[886]; /* '+' */
    cpy_r_r117 = PyUnicode_Compare(cpy_r_op, cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 == -1;
    if (!cpy_r_r118) goto CPyL77;
    cpy_r_r119 = PyErr_Occurred();
    cpy_r_r120 = cpy_r_r119 != NULL;
    if (!cpy_r_r120) goto CPyL77;
    cpy_r_r121 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 102, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL77: ;
    cpy_r_r122 = cpy_r_r117 == 0;
    if (!cpy_r_r122) goto CPyL86;
    cpy_r_r123 = (PyObject *)&PyLong_Type;
    cpy_r_r124 = (PyObject *)&PyFloat_Type;
    cpy_r_r125.f0 = cpy_r_r123;
    cpy_r_r125.f1 = cpy_r_r124;
    CPy_INCREF(cpy_r_r125.f0);
    CPy_INCREF(cpy_r_r125.f1);
    cpy_r_r126 = PyTuple_New(2);
    if (unlikely(cpy_r_r126 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1733 = cpy_r_r125.f0;
    PyTuple_SET_ITEM(cpy_r_r126, 0, __tmp1733);
    PyObject *__tmp1734 = cpy_r_r125.f1;
    PyTuple_SET_ITEM(cpy_r_r126, 1, __tmp1734);
    cpy_r_r127 = PyObject_IsInstance(cpy_r_left, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 102, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r129 = cpy_r_r127;
    if (!cpy_r_r129) goto CPyL86;
    cpy_r_r130 = CPyModule_builtins;
    cpy_r_r131 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 102, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r133 = PyObject_IsInstance(cpy_r_right, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 102, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r135 = cpy_r_r133;
    if (!cpy_r_r135) goto CPyL86;
    CPy_INCREF(cpy_r_left);
    if (PyLong_Check(cpy_r_left))
        cpy_r_r136 = cpy_r_left;
    else {
        cpy_r_r136 = NULL;
    }
    if (cpy_r_r136 != NULL) goto __LL1735;
    if (CPyFloat_Check(cpy_r_left))
        cpy_r_r136 = cpy_r_left;
    else {
        cpy_r_r136 = NULL;
    }
    if (cpy_r_r136 != NULL) goto __LL1735;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 103, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_left);
    goto CPyL123;
__LL1735: ;
    cpy_r_r137 = PyNumber_Add(cpy_r_r136, cpy_r_right);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 103, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r137;
CPyL86: ;
    cpy_r_r138 = CPyStatics[886]; /* '+' */
    cpy_r_r139 = PyUnicode_Compare(cpy_r_op, cpy_r_r138);
    cpy_r_r140 = cpy_r_r139 == -1;
    if (!cpy_r_r140) goto CPyL89;
    cpy_r_r141 = PyErr_Occurred();
    cpy_r_r142 = cpy_r_r141 != NULL;
    if (!cpy_r_r142) goto CPyL89;
    cpy_r_r143 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 104, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL89: ;
    cpy_r_r144 = cpy_r_r139 == 0;
    if (!cpy_r_r144) goto CPyL98;
    cpy_r_r145 = CPyModule_builtins;
    cpy_r_r146 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 104, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r148 = PyObject_IsInstance(cpy_r_left, cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 104, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r150 = cpy_r_r148;
    if (!cpy_r_r150) goto CPyL98;
    cpy_r_r151 = (PyObject *)&PyLong_Type;
    cpy_r_r152 = (PyObject *)&PyFloat_Type;
    cpy_r_r153.f0 = cpy_r_r151;
    cpy_r_r153.f1 = cpy_r_r152;
    CPy_INCREF(cpy_r_r153.f0);
    CPy_INCREF(cpy_r_r153.f1);
    cpy_r_r154 = PyTuple_New(2);
    if (unlikely(cpy_r_r154 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1736 = cpy_r_r153.f0;
    PyTuple_SET_ITEM(cpy_r_r154, 0, __tmp1736);
    PyObject *__tmp1737 = cpy_r_r153.f1;
    PyTuple_SET_ITEM(cpy_r_r154, 1, __tmp1737);
    cpy_r_r155 = PyObject_IsInstance(cpy_r_right, cpy_r_r154);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 104, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r157 = cpy_r_r155;
    if (!cpy_r_r157) goto CPyL98;
    CPy_INCREF(cpy_r_right);
    if (PyLong_Check(cpy_r_right))
        cpy_r_r158 = cpy_r_right;
    else {
        cpy_r_r158 = NULL;
    }
    if (cpy_r_r158 != NULL) goto __LL1738;
    if (CPyFloat_Check(cpy_r_right))
        cpy_r_r158 = cpy_r_right;
    else {
        cpy_r_r158 = NULL;
    }
    if (cpy_r_r158 != NULL) goto __LL1738;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 105, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_right);
    goto CPyL123;
__LL1738: ;
    cpy_r_r159 = PyNumber_Add(cpy_r_left, cpy_r_r158);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 105, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r159;
CPyL98: ;
    cpy_r_r160 = CPyStatics[1198]; /* '-' */
    cpy_r_r161 = PyUnicode_Compare(cpy_r_op, cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 == -1;
    if (!cpy_r_r162) goto CPyL101;
    cpy_r_r163 = PyErr_Occurred();
    cpy_r_r164 = cpy_r_r163 != NULL;
    if (!cpy_r_r164) goto CPyL101;
    cpy_r_r165 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 106, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL101: ;
    cpy_r_r166 = cpy_r_r161 == 0;
    if (!cpy_r_r166) goto CPyL110;
    cpy_r_r167 = (PyObject *)&PyLong_Type;
    cpy_r_r168 = (PyObject *)&PyFloat_Type;
    cpy_r_r169.f0 = cpy_r_r167;
    cpy_r_r169.f1 = cpy_r_r168;
    CPy_INCREF(cpy_r_r169.f0);
    CPy_INCREF(cpy_r_r169.f1);
    cpy_r_r170 = PyTuple_New(2);
    if (unlikely(cpy_r_r170 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1739 = cpy_r_r169.f0;
    PyTuple_SET_ITEM(cpy_r_r170, 0, __tmp1739);
    PyObject *__tmp1740 = cpy_r_r169.f1;
    PyTuple_SET_ITEM(cpy_r_r170, 1, __tmp1740);
    cpy_r_r171 = PyObject_IsInstance(cpy_r_left, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 106, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r173 = cpy_r_r171;
    if (!cpy_r_r173) goto CPyL110;
    cpy_r_r174 = CPyModule_builtins;
    cpy_r_r175 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r176 = CPyObject_GetAttr(cpy_r_r174, cpy_r_r175);
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 106, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r177 = PyObject_IsInstance(cpy_r_right, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 106, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r179 = cpy_r_r177;
    if (!cpy_r_r179) goto CPyL110;
    CPy_INCREF(cpy_r_left);
    if (PyLong_Check(cpy_r_left))
        cpy_r_r180 = cpy_r_left;
    else {
        cpy_r_r180 = NULL;
    }
    if (cpy_r_r180 != NULL) goto __LL1741;
    if (CPyFloat_Check(cpy_r_left))
        cpy_r_r180 = cpy_r_left;
    else {
        cpy_r_r180 = NULL;
    }
    if (cpy_r_r180 != NULL) goto __LL1741;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 107, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_left);
    goto CPyL123;
__LL1741: ;
    cpy_r_r181 = PyNumber_Subtract(cpy_r_r180, cpy_r_right);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 107, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r181;
CPyL110: ;
    cpy_r_r182 = CPyStatics[1198]; /* '-' */
    cpy_r_r183 = PyUnicode_Compare(cpy_r_op, cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 == -1;
    if (!cpy_r_r184) goto CPyL113;
    cpy_r_r185 = PyErr_Occurred();
    cpy_r_r186 = cpy_r_r185 != NULL;
    if (!cpy_r_r186) goto CPyL113;
    cpy_r_r187 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 108, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
CPyL113: ;
    cpy_r_r188 = cpy_r_r183 == 0;
    if (!cpy_r_r188) goto CPyL122;
    cpy_r_r189 = CPyModule_builtins;
    cpy_r_r190 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r191 = CPyObject_GetAttr(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 108, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r192 = PyObject_IsInstance(cpy_r_left, cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 108, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r194 = cpy_r_r192;
    if (!cpy_r_r194) goto CPyL122;
    cpy_r_r195 = (PyObject *)&PyLong_Type;
    cpy_r_r196 = (PyObject *)&PyFloat_Type;
    cpy_r_r197.f0 = cpy_r_r195;
    cpy_r_r197.f1 = cpy_r_r196;
    CPy_INCREF(cpy_r_r197.f0);
    CPy_INCREF(cpy_r_r197.f1);
    cpy_r_r198 = PyTuple_New(2);
    if (unlikely(cpy_r_r198 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1742 = cpy_r_r197.f0;
    PyTuple_SET_ITEM(cpy_r_r198, 0, __tmp1742);
    PyObject *__tmp1743 = cpy_r_r197.f1;
    PyTuple_SET_ITEM(cpy_r_r198, 1, __tmp1743);
    cpy_r_r199 = PyObject_IsInstance(cpy_r_right, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 108, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    cpy_r_r201 = cpy_r_r199;
    if (!cpy_r_r201) goto CPyL122;
    CPy_INCREF(cpy_r_right);
    if (PyLong_Check(cpy_r_right))
        cpy_r_r202 = cpy_r_right;
    else {
        cpy_r_r202 = NULL;
    }
    if (cpy_r_r202 != NULL) goto __LL1744;
    if (CPyFloat_Check(cpy_r_right))
        cpy_r_r202 = cpy_r_right;
    else {
        cpy_r_r202 = NULL;
    }
    if (cpy_r_r202 != NULL) goto __LL1744;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 109, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_right);
    goto CPyL123;
__LL1744: ;
    cpy_r_r203 = PyNumber_Subtract(cpy_r_left, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 109, CPyStatic_mypy___constant_fold___globals);
        goto CPyL123;
    }
    return cpy_r_r203;
CPyL122: ;
    cpy_r_r204 = Py_None;
    CPy_INCREF(cpy_r_r204);
    return cpy_r_r204;
CPyL123: ;
    cpy_r_r205 = NULL;
    return cpy_r_r205;
CPyL124: ;
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL123;
CPyL125: ;
    CPyTagged_DecRef(cpy_r_r51);
    goto CPyL123;
CPyL126: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL123;
CPyL127: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL123;
CPyL128: ;
    CPyTagged_DecRef(cpy_r_r111);
    goto CPyL123;
}

PyObject *CPyPy_mypy___constant_fold___constant_fold_binary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:constant_fold_binary_op", kwlist, 0};
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
    if (arg_left != NULL) goto __LL1745;
    if (PyBool_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL1745;
    if (CPyFloat_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL1745;
    arg_left = obj_left;
    if (arg_left != NULL) goto __LL1745;
    if (PyUnicode_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL1745;
    CPy_TypeError("union[int, bool, float, object, str]", obj_left); 
    goto fail;
__LL1745: ;
    PyObject *arg_right;
    if (PyLong_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1746;
    if (PyBool_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1746;
    if (CPyFloat_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1746;
    arg_right = obj_right;
    if (arg_right != NULL) goto __LL1746;
    if (PyUnicode_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1746;
    CPy_TypeError("union[int, bool, float, object, str]", obj_right); 
    goto fail;
__LL1746: ;
    PyObject *retval = CPyDef_mypy___constant_fold___constant_fold_binary_op(arg_op, arg_left, arg_right);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_op", 79, CPyStatic_mypy___constant_fold___globals);
    return NULL;
}

PyObject *CPyDef_mypy___constant_fold___constant_fold_binary_int_op(PyObject *cpy_r_op, CPyTagged cpy_r_left, CPyTagged cpy_r_right) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    double cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    int64_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    int64_t cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    int64_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    cpy_r_r0 = CPyStatics[886]; /* '+' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_op, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 115, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPyTagged_Add(cpy_r_left, cpy_r_right);
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r7);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyStatics[1198]; /* '-' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_op, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL8;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 117, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL8: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (!cpy_r_r15) goto CPyL10;
    cpy_r_r16 = CPyTagged_Subtract(cpy_r_left, cpy_r_right);
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r16);
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = CPyStatics[282]; /* '*' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_op, cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 119, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL13: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = CPyTagged_Multiply(cpy_r_left, cpy_r_right);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r25);
    return cpy_r_r26;
CPyL15: ;
    cpy_r_r27 = CPyStatics[1594]; /* '/' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_op, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL18;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 121, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL18: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL23;
    cpy_r_r34 = cpy_r_right != 0;
    if (!cpy_r_r34) goto CPyL84;
    cpy_r_r35 = CPyTagged_TrueDivide(cpy_r_left, cpy_r_right);
    cpy_r_r36 = cpy_r_r35 == -113.0;
    if (unlikely(cpy_r_r36)) goto CPyL22;
CPyL21: ;
    cpy_r_r37 = PyFloat_FromDouble(cpy_r_r35);
    return cpy_r_r37;
CPyL22: ;
    cpy_r_r38 = PyErr_Occurred();
    if (unlikely(cpy_r_r38 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 123, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    } else
        goto CPyL21;
CPyL23: ;
    cpy_r_r39 = CPyStatics[1595]; /* '//' */
    cpy_r_r40 = PyUnicode_Compare(cpy_r_op, cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 == -1;
    if (!cpy_r_r41) goto CPyL26;
    cpy_r_r42 = PyErr_Occurred();
    cpy_r_r43 = cpy_r_r42 != NULL;
    if (!cpy_r_r43) goto CPyL26;
    cpy_r_r44 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 124, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL26: ;
    cpy_r_r45 = cpy_r_r40 == 0;
    if (!cpy_r_r45) goto CPyL30;
    cpy_r_r46 = cpy_r_right != 0;
    if (!cpy_r_r46) goto CPyL84;
    cpy_r_r47 = CPyTagged_FloorDivide(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 126, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r47);
    return cpy_r_r48;
CPyL30: ;
    cpy_r_r49 = CPyStatics[1183]; /* '%' */
    cpy_r_r50 = PyUnicode_Compare(cpy_r_op, cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 == -1;
    if (!cpy_r_r51) goto CPyL33;
    cpy_r_r52 = PyErr_Occurred();
    cpy_r_r53 = cpy_r_r52 != NULL;
    if (!cpy_r_r53) goto CPyL33;
    cpy_r_r54 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 127, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL33: ;
    cpy_r_r55 = cpy_r_r50 == 0;
    if (!cpy_r_r55) goto CPyL37;
    cpy_r_r56 = cpy_r_right != 0;
    if (!cpy_r_r56) goto CPyL84;
    cpy_r_r57 = CPyTagged_Remainder(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 129, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r57);
    return cpy_r_r58;
CPyL37: ;
    cpy_r_r59 = CPyStatics[1596]; /* '&' */
    cpy_r_r60 = PyUnicode_Compare(cpy_r_op, cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 == -1;
    if (!cpy_r_r61) goto CPyL40;
    cpy_r_r62 = PyErr_Occurred();
    cpy_r_r63 = cpy_r_r62 != NULL;
    if (!cpy_r_r63) goto CPyL40;
    cpy_r_r64 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 130, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL40: ;
    cpy_r_r65 = cpy_r_r60 == 0;
    if (!cpy_r_r65) goto CPyL42;
    cpy_r_r66 = CPyTagged_And(cpy_r_left, cpy_r_right);
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r66);
    return cpy_r_r67;
CPyL42: ;
    cpy_r_r68 = CPyStatics[885]; /* '|' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_op, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL45;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL45;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 132, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL45: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (!cpy_r_r74) goto CPyL47;
    cpy_r_r75 = CPyTagged_Or(cpy_r_left, cpy_r_right);
    cpy_r_r76 = CPyTagged_StealAsObject(cpy_r_r75);
    return cpy_r_r76;
CPyL47: ;
    cpy_r_r77 = CPyStatics[1597]; /* '^' */
    cpy_r_r78 = PyUnicode_Compare(cpy_r_op, cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 == -1;
    if (!cpy_r_r79) goto CPyL50;
    cpy_r_r80 = PyErr_Occurred();
    cpy_r_r81 = cpy_r_r80 != NULL;
    if (!cpy_r_r81) goto CPyL50;
    cpy_r_r82 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 134, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL50: ;
    cpy_r_r83 = cpy_r_r78 == 0;
    if (!cpy_r_r83) goto CPyL52;
    cpy_r_r84 = CPyTagged_Xor(cpy_r_left, cpy_r_right);
    cpy_r_r85 = CPyTagged_StealAsObject(cpy_r_r84);
    return cpy_r_r85;
CPyL52: ;
    cpy_r_r86 = CPyStatics[1598]; /* '<<' */
    cpy_r_r87 = PyUnicode_Compare(cpy_r_op, cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 == -1;
    if (!cpy_r_r88) goto CPyL55;
    cpy_r_r89 = PyErr_Occurred();
    cpy_r_r90 = cpy_r_r89 != NULL;
    if (!cpy_r_r90) goto CPyL55;
    cpy_r_r91 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 136, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL55: ;
    cpy_r_r92 = cpy_r_r87 == 0;
    if (!cpy_r_r92) goto CPyL61;
    cpy_r_r93 = cpy_r_right & 1;
    cpy_r_r94 = cpy_r_r93 != 0;
    if (!cpy_r_r94) goto CPyL58;
    cpy_r_r95 = CPyTagged_IsLt_(cpy_r_right, 0);
    if (cpy_r_r95) {
        goto CPyL84;
    } else
        goto CPyL59;
CPyL58: ;
    cpy_r_r96 = (Py_ssize_t)cpy_r_right >= (Py_ssize_t)0;
    if (!cpy_r_r96) goto CPyL84;
CPyL59: ;
    cpy_r_r97 = CPyTagged_Lshift(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r97 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 138, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_r98 = CPyTagged_StealAsObject(cpy_r_r97);
    return cpy_r_r98;
CPyL61: ;
    cpy_r_r99 = CPyStatics[1599]; /* '>>' */
    cpy_r_r100 = PyUnicode_Compare(cpy_r_op, cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 == -1;
    if (!cpy_r_r101) goto CPyL64;
    cpy_r_r102 = PyErr_Occurred();
    cpy_r_r103 = cpy_r_r102 != NULL;
    if (!cpy_r_r103) goto CPyL64;
    cpy_r_r104 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 139, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL64: ;
    cpy_r_r105 = cpy_r_r100 == 0;
    if (!cpy_r_r105) goto CPyL70;
    cpy_r_r106 = cpy_r_right & 1;
    cpy_r_r107 = cpy_r_r106 != 0;
    if (!cpy_r_r107) goto CPyL67;
    cpy_r_r108 = CPyTagged_IsLt_(cpy_r_right, 0);
    if (cpy_r_r108) {
        goto CPyL84;
    } else
        goto CPyL68;
CPyL67: ;
    cpy_r_r109 = (Py_ssize_t)cpy_r_right >= (Py_ssize_t)0;
    if (!cpy_r_r109) goto CPyL84;
CPyL68: ;
    cpy_r_r110 = CPyTagged_Rshift(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 141, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_r111 = CPyTagged_StealAsObject(cpy_r_r110);
    return cpy_r_r111;
CPyL70: ;
    cpy_r_r112 = CPyStatics[1600]; /* '**' */
    cpy_r_r113 = PyUnicode_Compare(cpy_r_op, cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 == -1;
    if (!cpy_r_r114) goto CPyL73;
    cpy_r_r115 = PyErr_Occurred();
    cpy_r_r116 = cpy_r_r115 != NULL;
    if (!cpy_r_r116) goto CPyL73;
    cpy_r_r117 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 142, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
CPyL73: ;
    cpy_r_r118 = cpy_r_r113 == 0;
    if (!cpy_r_r118) goto CPyL84;
    cpy_r_r119 = cpy_r_right & 1;
    cpy_r_r120 = cpy_r_r119 != 0;
    if (!cpy_r_r120) goto CPyL76;
    cpy_r_r121 = CPyTagged_IsLt_(cpy_r_right, 0);
    if (cpy_r_r121) {
        goto CPyL84;
    } else
        goto CPyL77;
CPyL76: ;
    cpy_r_r122 = (Py_ssize_t)cpy_r_right >= (Py_ssize_t)0;
    if (!cpy_r_r122) goto CPyL84;
CPyL77: ;
    CPyTagged_INCREF(cpy_r_left);
    cpy_r_r123 = CPyTagged_StealAsObject(cpy_r_left);
    CPyTagged_INCREF(cpy_r_right);
    cpy_r_r124 = CPyTagged_StealAsObject(cpy_r_right);
    cpy_r_r125 = CPyNumber_Power(cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 144, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_ret = cpy_r_r125;
    cpy_r_r126 = (PyObject *)&PyLong_Type;
    cpy_r_r127 = PyObject_IsInstance(cpy_r_ret, cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 145, CPyStatic_mypy___constant_fold___globals);
        goto CPyL86;
    }
    cpy_r_r129 = cpy_r_r127;
    if (cpy_r_r129) {
        goto CPyL82;
    } else
        goto CPyL87;
CPyL80: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 145, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    CPy_Unreachable();
CPyL82: ;
    if (likely(PyLong_Check(cpy_r_ret)))
        cpy_r_r131 = CPyTagged_FromObject(cpy_r_ret);
    else {
        CPy_TypeError("int", cpy_r_ret); cpy_r_r131 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_ret);
    if (unlikely(cpy_r_r131 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 146, CPyStatic_mypy___constant_fold___globals);
        goto CPyL85;
    }
    cpy_r_r132 = CPyTagged_StealAsObject(cpy_r_r131);
    return cpy_r_r132;
CPyL84: ;
    cpy_r_r133 = Py_None;
    CPy_INCREF(cpy_r_r133);
    return cpy_r_r133;
CPyL85: ;
    cpy_r_r134 = NULL;
    return cpy_r_r134;
CPyL86: ;
    CPy_DecRef(cpy_r_ret);
    goto CPyL85;
CPyL87: ;
    CPy_DECREF(cpy_r_ret);
    goto CPyL80;
}

PyObject *CPyPy_mypy___constant_fold___constant_fold_binary_int_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:constant_fold_binary_int_op", kwlist, 0};
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
    CPyTagged arg_left;
    if (likely(PyLong_Check(obj_left)))
        arg_left = CPyTagged_BorrowFromObject(obj_left);
    else {
        CPy_TypeError("int", obj_left); goto fail;
    }
    CPyTagged arg_right;
    if (likely(PyLong_Check(obj_right)))
        arg_right = CPyTagged_BorrowFromObject(obj_right);
    else {
        CPy_TypeError("int", obj_right); goto fail;
    }
    PyObject *retval = CPyDef_mypy___constant_fold___constant_fold_binary_int_op(arg_op, arg_left, arg_right);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_int_op", 114, CPyStatic_mypy___constant_fold___globals);
    return NULL;
}

PyObject *CPyDef_mypy___constant_fold___constant_fold_binary_float_op(PyObject *cpy_r_op, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    tuple_T3OII cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    double cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_ret;
    tuple_T3OOO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    double cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_left, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL5;
CPyL3: ;
    cpy_r_r5 = (PyObject *)&PyLong_Type;
    cpy_r_r6 = PyObject_IsInstance(cpy_r_right, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r4 = cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = cpy_r_r4 ^ 1;
    if (cpy_r_r9) goto CPyL12;
    if (likely(PyLong_Check(cpy_r_left)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_left);
    else {
        CPy_TypeError("int", cpy_r_left); cpy_r_r10 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_right)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_right);
    else {
        CPy_TypeError("int", cpy_r_right); cpy_r_r11 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL101;
    }
    cpy_r_r12.f0 = cpy_r_op;
    cpy_r_r12.f1 = cpy_r_r10;
    cpy_r_r12.f2 = cpy_r_r11;
    CPy_INCREF(cpy_r_r12.f0);
    CPyTagged_INCREF(cpy_r_r12.f1);
    CPyTagged_INCREF(cpy_r_r12.f2);
    CPyTagged_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL102;
    }
    cpy_r_r16 = PyTuple_New(3);
    if (unlikely(cpy_r_r16 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1747 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r16, 0, __tmp1747);
    PyObject *__tmp1748 = CPyTagged_StealAsObject(cpy_r_r12.f1);
    PyTuple_SET_ITEM(cpy_r_r16, 1, __tmp1748);
    PyObject *__tmp1749 = CPyTagged_StealAsObject(cpy_r_r12.f2);
    PyTuple_SET_ITEM(cpy_r_r16, 2, __tmp1749);
    PyObject *cpy_r_r17[1] = {cpy_r_r16};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r16);
    CPy_Raise(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 151, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r20 = CPyStatics[886]; /* '+' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_op, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL15;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 152, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL15: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (!cpy_r_r26) goto CPyL20;
    cpy_r_r27 = PyNumber_Add(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 153, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (PyLong_Check(cpy_r_r27))
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL1750;
    if (CPyFloat_Check(cpy_r_r27))
        cpy_r_r28 = cpy_r_r27;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL1750;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 153, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r27);
    goto CPyL100;
__LL1750: ;
    if (CPyFloat_Check(cpy_r_r28))
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL1751;
    if (cpy_r_r28 == Py_None)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL1751;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 153, CPyStatic_mypy___constant_fold___globals, "float or None", cpy_r_r28);
    goto CPyL100;
__LL1751: ;
    return cpy_r_r29;
CPyL20: ;
    cpy_r_r30 = CPyStatics[1198]; /* '-' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_op, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL23;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 154, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL23: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (!cpy_r_r36) goto CPyL28;
    cpy_r_r37 = PyNumber_Subtract(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 155, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (PyLong_Check(cpy_r_r37))
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL1752;
    if (CPyFloat_Check(cpy_r_r37))
        cpy_r_r38 = cpy_r_r37;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL1752;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 155, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r37);
    goto CPyL100;
__LL1752: ;
    if (CPyFloat_Check(cpy_r_r38))
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL1753;
    if (cpy_r_r38 == Py_None)
        cpy_r_r39 = cpy_r_r38;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL1753;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 155, CPyStatic_mypy___constant_fold___globals, "float or None", cpy_r_r38);
    goto CPyL100;
__LL1753: ;
    return cpy_r_r39;
CPyL28: ;
    cpy_r_r40 = CPyStatics[282]; /* '*' */
    cpy_r_r41 = PyUnicode_Compare(cpy_r_op, cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 == -1;
    if (!cpy_r_r42) goto CPyL31;
    cpy_r_r43 = PyErr_Occurred();
    cpy_r_r44 = cpy_r_r43 != NULL;
    if (!cpy_r_r44) goto CPyL31;
    cpy_r_r45 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 156, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL31: ;
    cpy_r_r46 = cpy_r_r41 == 0;
    if (!cpy_r_r46) goto CPyL36;
    cpy_r_r47 = PyNumber_Multiply(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 157, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (PyLong_Check(cpy_r_r47))
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL1754;
    if (CPyFloat_Check(cpy_r_r47))
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL1754;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 157, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r47);
    goto CPyL100;
__LL1754: ;
    if (CPyFloat_Check(cpy_r_r48))
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL1755;
    if (cpy_r_r48 == Py_None)
        cpy_r_r49 = cpy_r_r48;
    else {
        cpy_r_r49 = NULL;
    }
    if (cpy_r_r49 != NULL) goto __LL1755;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 157, CPyStatic_mypy___constant_fold___globals, "float or None", cpy_r_r48);
    goto CPyL100;
__LL1755: ;
    return cpy_r_r49;
CPyL36: ;
    cpy_r_r50 = CPyStatics[1594]; /* '/' */
    cpy_r_r51 = PyUnicode_Compare(cpy_r_op, cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 == -1;
    if (!cpy_r_r52) goto CPyL39;
    cpy_r_r53 = PyErr_Occurred();
    cpy_r_r54 = cpy_r_r53 != NULL;
    if (!cpy_r_r54) goto CPyL39;
    cpy_r_r55 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 158, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL39: ;
    cpy_r_r56 = cpy_r_r51 == 0;
    if (!cpy_r_r56) goto CPyL47;
    cpy_r_r57 = CPyStatics[9015]; /* 0 */
    cpy_r_r58 = PyObject_RichCompare(cpy_r_right, cpy_r_r57, 3);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 159, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r58))) {
        CPy_TypeError("bool", cpy_r_r58); cpy_r_r59 = 2;
    } else
        cpy_r_r59 = cpy_r_r58 == Py_True;
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 159, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (!cpy_r_r59) goto CPyL99;
    cpy_r_r60 = PyNumber_TrueDivide(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 160, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    cpy_r_r61 = PyFloat_AsDouble(cpy_r_r60);
    if (cpy_r_r61 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r60); cpy_r_r61 = -113.0;
    }
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 == -113.0;
    if (unlikely(cpy_r_r62)) goto CPyL46;
CPyL45: ;
    cpy_r_r63 = PyFloat_FromDouble(cpy_r_r61);
    return cpy_r_r63;
CPyL46: ;
    cpy_r_r64 = PyErr_Occurred();
    if (unlikely(cpy_r_r64 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 160, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    } else
        goto CPyL45;
CPyL47: ;
    cpy_r_r65 = CPyStatics[1595]; /* '//' */
    cpy_r_r66 = PyUnicode_Compare(cpy_r_op, cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 == -1;
    if (!cpy_r_r67) goto CPyL50;
    cpy_r_r68 = PyErr_Occurred();
    cpy_r_r69 = cpy_r_r68 != NULL;
    if (!cpy_r_r69) goto CPyL50;
    cpy_r_r70 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 161, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL50: ;
    cpy_r_r71 = cpy_r_r66 == 0;
    if (!cpy_r_r71) goto CPyL58;
    cpy_r_r72 = CPyStatics[9015]; /* 0 */
    cpy_r_r73 = PyObject_RichCompare(cpy_r_right, cpy_r_r72, 3);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 162, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r73))) {
        CPy_TypeError("bool", cpy_r_r73); cpy_r_r74 = 2;
    } else
        cpy_r_r74 = cpy_r_r73 == Py_True;
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 162, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (!cpy_r_r74) goto CPyL99;
    cpy_r_r75 = PyNumber_FloorDivide(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 163, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (PyLong_Check(cpy_r_r75))
        cpy_r_r76 = cpy_r_r75;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL1756;
    if (CPyFloat_Check(cpy_r_r75))
        cpy_r_r76 = cpy_r_r75;
    else {
        cpy_r_r76 = NULL;
    }
    if (cpy_r_r76 != NULL) goto __LL1756;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 163, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r75);
    goto CPyL100;
__LL1756: ;
    if (CPyFloat_Check(cpy_r_r76))
        cpy_r_r77 = cpy_r_r76;
    else {
        cpy_r_r77 = NULL;
    }
    if (cpy_r_r77 != NULL) goto __LL1757;
    if (cpy_r_r76 == Py_None)
        cpy_r_r77 = cpy_r_r76;
    else {
        cpy_r_r77 = NULL;
    }
    if (cpy_r_r77 != NULL) goto __LL1757;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 163, CPyStatic_mypy___constant_fold___globals, "float or None", cpy_r_r76);
    goto CPyL100;
__LL1757: ;
    return cpy_r_r77;
CPyL58: ;
    cpy_r_r78 = CPyStatics[1183]; /* '%' */
    cpy_r_r79 = PyUnicode_Compare(cpy_r_op, cpy_r_r78);
    cpy_r_r80 = cpy_r_r79 == -1;
    if (!cpy_r_r80) goto CPyL61;
    cpy_r_r81 = PyErr_Occurred();
    cpy_r_r82 = cpy_r_r81 != NULL;
    if (!cpy_r_r82) goto CPyL61;
    cpy_r_r83 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 164, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL61: ;
    cpy_r_r84 = cpy_r_r79 == 0;
    if (!cpy_r_r84) goto CPyL69;
    cpy_r_r85 = CPyStatics[9015]; /* 0 */
    cpy_r_r86 = PyObject_RichCompare(cpy_r_right, cpy_r_r85, 3);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 165, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r86))) {
        CPy_TypeError("bool", cpy_r_r86); cpy_r_r87 = 2;
    } else
        cpy_r_r87 = cpy_r_r86 == Py_True;
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 165, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (!cpy_r_r87) goto CPyL99;
    cpy_r_r88 = PyNumber_Remainder(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 166, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (PyLong_Check(cpy_r_r88))
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL1758;
    if (CPyFloat_Check(cpy_r_r88))
        cpy_r_r89 = cpy_r_r88;
    else {
        cpy_r_r89 = NULL;
    }
    if (cpy_r_r89 != NULL) goto __LL1758;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 166, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r88);
    goto CPyL100;
__LL1758: ;
    if (CPyFloat_Check(cpy_r_r89))
        cpy_r_r90 = cpy_r_r89;
    else {
        cpy_r_r90 = NULL;
    }
    if (cpy_r_r90 != NULL) goto __LL1759;
    if (cpy_r_r89 == Py_None)
        cpy_r_r90 = cpy_r_r89;
    else {
        cpy_r_r90 = NULL;
    }
    if (cpy_r_r90 != NULL) goto __LL1759;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 166, CPyStatic_mypy___constant_fold___globals, "float or None", cpy_r_r89);
    goto CPyL100;
__LL1759: ;
    return cpy_r_r90;
CPyL69: ;
    cpy_r_r91 = CPyStatics[1600]; /* '**' */
    cpy_r_r92 = PyUnicode_Compare(cpy_r_op, cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 == -1;
    if (!cpy_r_r93) goto CPyL72;
    cpy_r_r94 = PyErr_Occurred();
    cpy_r_r95 = cpy_r_r94 != NULL;
    if (!cpy_r_r95) goto CPyL72;
    cpy_r_r96 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 167, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
CPyL72: ;
    cpy_r_r97 = cpy_r_r92 == 0;
    if (!cpy_r_r97) goto CPyL99;
    cpy_r_r98 = CPyStatics[9015]; /* 0 */
    cpy_r_r99 = PyObject_RichCompare(cpy_r_left, cpy_r_r98, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 168, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r99))) {
        CPy_TypeError("bool", cpy_r_r99); cpy_r_r100 = 2;
    } else
        cpy_r_r100 = cpy_r_r99 == Py_True;
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 168, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (!cpy_r_r100) goto CPyL78;
    cpy_r_r101 = (PyObject *)&PyLong_Type;
    cpy_r_r102 = PyObject_IsInstance(cpy_r_right, cpy_r_r101);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 168, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    cpy_r_r104 = cpy_r_r102;
    if (cpy_r_r104) goto CPyL81;
CPyL78: ;
    cpy_r_r105 = CPyStatics[9015]; /* 0 */
    cpy_r_r106 = PyObject_RichCompare(cpy_r_left, cpy_r_r105, 4);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 168, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r106))) {
        CPy_TypeError("bool", cpy_r_r106); cpy_r_r107 = 2;
    } else
        cpy_r_r107 = cpy_r_r106 == Py_True;
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 168, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    if (!cpy_r_r107) goto CPyL99;
CPyL81: ;
    cpy_r_r108 = CPyNumber_Power(cpy_r_left, cpy_r_right);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 170, CPyStatic_mypy___constant_fold___globals);
        goto CPyL83;
    }
    cpy_r_ret = cpy_r_r108;
    goto CPyL90;
CPyL83: ;
    cpy_r_r109 = CPy_CatchError();
    cpy_r_r110 = CPyModule_builtins;
    cpy_r_r111 = CPyStatics[1601]; /* 'OverflowError' */
    cpy_r_r112 = CPyObject_GetAttr(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 171, CPyStatic_mypy___constant_fold___globals);
        goto CPyL88;
    }
    cpy_r_r113 = CPy_ExceptionMatches(cpy_r_r112);
    CPy_DecRef(cpy_r_r112);
    if (!cpy_r_r113) goto CPyL86;
    cpy_r_r114 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    CPy_INCREF(cpy_r_r114);
    return cpy_r_r114;
CPyL86: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL88;
    } else
        goto CPyL104;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    CPy_RestoreExcInfo(cpy_r_r109);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    cpy_r_r115 = CPy_KeepPropagating();
    if (!cpy_r_r115) goto CPyL100;
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r116 = (PyObject *)&PyFloat_Type;
    cpy_r_r117 = PyObject_IsInstance(cpy_r_ret, cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 174, CPyStatic_mypy___constant_fold___globals);
        goto CPyL105;
    }
    cpy_r_r119 = cpy_r_r117;
    if (cpy_r_r119) goto CPyL96;
    cpy_r_r120 = CPyModule_builtins;
    cpy_r_r121 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r122 = CPyObject_GetAttr(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 174, CPyStatic_mypy___constant_fold___globals);
        goto CPyL105;
    }
    PyObject *cpy_r_r123[1] = {cpy_r_ret};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = _PyObject_Vectorcall(cpy_r_r122, cpy_r_r124, 1, 0);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 174, CPyStatic_mypy___constant_fold___globals);
        goto CPyL105;
    }
    CPy_DECREF(cpy_r_ret);
    CPy_Raise(cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 174, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r126 = PyFloat_AsDouble(cpy_r_ret);
    if (cpy_r_r126 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_ret); cpy_r_r126 = -113.0;
    }
    CPy_DECREF(cpy_r_ret);
    cpy_r_r127 = cpy_r_r126 == -113.0;
    if (unlikely(cpy_r_r127)) goto CPyL98;
CPyL97: ;
    cpy_r_r128 = PyFloat_FromDouble(cpy_r_r126);
    return cpy_r_r128;
CPyL98: ;
    cpy_r_r129 = PyErr_Occurred();
    if (unlikely(cpy_r_r129 != NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 175, CPyStatic_mypy___constant_fold___globals);
        goto CPyL100;
    } else
        goto CPyL97;
CPyL99: ;
    cpy_r_r130 = Py_None;
    CPy_INCREF(cpy_r_r130);
    return cpy_r_r130;
CPyL100: ;
    cpy_r_r131 = NULL;
    return cpy_r_r131;
CPyL101: ;
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL100;
CPyL102: ;
    CPy_DecRef(cpy_r_r12.f0);
    CPyTagged_DecRef(cpy_r_r12.f1);
    CPyTagged_DecRef(cpy_r_r12.f2);
    goto CPyL100;
CPyL103: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL100;
CPyL104: ;
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    goto CPyL87;
CPyL105: ;
    CPy_DecRef(cpy_r_ret);
    goto CPyL100;
}

PyObject *CPyPy_mypy___constant_fold___constant_fold_binary_float_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:constant_fold_binary_float_op", kwlist, 0};
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
    if (arg_left != NULL) goto __LL1760;
    if (CPyFloat_Check(obj_left))
        arg_left = obj_left;
    else {
        arg_left = NULL;
    }
    if (arg_left != NULL) goto __LL1760;
    CPy_TypeError("union[int, float]", obj_left); 
    goto fail;
__LL1760: ;
    PyObject *arg_right;
    if (PyLong_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1761;
    if (CPyFloat_Check(obj_right))
        arg_right = obj_right;
    else {
        arg_right = NULL;
    }
    if (arg_right != NULL) goto __LL1761;
    CPy_TypeError("union[int, float]", obj_right); 
    goto fail;
__LL1761: ;
    PyObject *retval = CPyDef_mypy___constant_fold___constant_fold_binary_float_op(arg_op, arg_left, arg_right);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_binary_float_op", 150, CPyStatic_mypy___constant_fold___globals);
    return NULL;
}

PyObject *CPyDef_mypy___constant_fold___constant_fold_unary_op(PyObject *cpy_r_op, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = CPyStatics[1198]; /* '-' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_op, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 181, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL10;
    cpy_r_r7 = (PyObject *)&PyLong_Type;
    cpy_r_r8 = (PyObject *)&PyFloat_Type;
    cpy_r_r9.f0 = cpy_r_r7;
    cpy_r_r9.f1 = cpy_r_r8;
    CPy_INCREF(cpy_r_r9.f0);
    CPy_INCREF(cpy_r_r9.f1);
    cpy_r_r10 = PyTuple_New(2);
    if (unlikely(cpy_r_r10 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1762 = cpy_r_r9.f0;
    PyTuple_SET_ITEM(cpy_r_r10, 0, __tmp1762);
    PyObject *__tmp1763 = cpy_r_r9.f1;
    PyTuple_SET_ITEM(cpy_r_r10, 1, __tmp1763);
    cpy_r_r11 = PyObject_IsInstance(cpy_r_value, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 181, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL10;
    CPy_INCREF(cpy_r_value);
    if (PyLong_Check(cpy_r_value))
        cpy_r_r14 = cpy_r_value;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL1764;
    if (CPyFloat_Check(cpy_r_value))
        cpy_r_r14 = cpy_r_value;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL1764;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 182, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_value);
    goto CPyL27;
__LL1764: ;
    cpy_r_r15 = PyNumber_Negative(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 182, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
    if (PyLong_Check(cpy_r_r15))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL1765;
    if (CPyFloat_Check(cpy_r_r15))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL1765;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 182, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_r15);
    goto CPyL27;
__LL1765: ;
    return cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = CPyStatics[1602]; /* '~' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_op, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 183, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
CPyL13: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (!cpy_r_r23) goto CPyL18;
    cpy_r_r24 = (PyObject *)&PyLong_Type;
    cpy_r_r25 = PyObject_IsInstance(cpy_r_value, cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 183, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
    cpy_r_r27 = cpy_r_r25;
    if (!cpy_r_r27) goto CPyL18;
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r28 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r28 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 184, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
    cpy_r_r29 = CPyTagged_Invert(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r28);
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r29);
    return cpy_r_r30;
CPyL18: ;
    cpy_r_r31 = CPyStatics[886]; /* '+' */
    cpy_r_r32 = PyUnicode_Compare(cpy_r_op, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 == -1;
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = PyErr_Occurred();
    cpy_r_r35 = cpy_r_r34 != NULL;
    if (!cpy_r_r35) goto CPyL21;
    cpy_r_r36 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 185, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
CPyL21: ;
    cpy_r_r37 = cpy_r_r32 == 0;
    if (!cpy_r_r37) goto CPyL26;
    cpy_r_r38 = (PyObject *)&PyLong_Type;
    cpy_r_r39 = (PyObject *)&PyFloat_Type;
    cpy_r_r40.f0 = cpy_r_r38;
    cpy_r_r40.f1 = cpy_r_r39;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1766 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp1766);
    PyObject *__tmp1767 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp1767);
    cpy_r_r42 = PyObject_IsInstance(cpy_r_value, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 185, CPyStatic_mypy___constant_fold___globals);
        goto CPyL27;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL26;
    CPy_INCREF(cpy_r_value);
    if (PyLong_Check(cpy_r_value))
        cpy_r_r45 = cpy_r_value;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL1768;
    if (CPyFloat_Check(cpy_r_value))
        cpy_r_r45 = cpy_r_value;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL1768;
    CPy_TypeErrorTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 186, CPyStatic_mypy___constant_fold___globals, "union[int, float]", cpy_r_value);
    goto CPyL27;
__LL1768: ;
    return cpy_r_r45;
CPyL26: ;
    cpy_r_r46 = Py_None;
    CPy_INCREF(cpy_r_r46);
    return cpy_r_r46;
CPyL27: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
}

PyObject *CPyPy_mypy___constant_fold___constant_fold_unary_op(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"op", "value", 0};
    static CPyArg_Parser parser = {"OO:constant_fold_unary_op", kwlist, 0};
    PyObject *obj_op;
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_op, &obj_value)) {
        return NULL;
    }
    PyObject *arg_op;
    if (likely(PyUnicode_Check(obj_op)))
        arg_op = obj_op;
    else {
        CPy_TypeError("str", obj_op); 
        goto fail;
    }
    PyObject *arg_value;
    if (PyLong_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1769;
    if (PyBool_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1769;
    if (CPyFloat_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1769;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL1769;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1769;
    CPy_TypeError("union[int, bool, float, object, str]", obj_value); 
    goto fail;
__LL1769: ;
    PyObject *retval = CPyDef_mypy___constant_fold___constant_fold_unary_op(arg_op, arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/constant_fold.py", "constant_fold_unary_op", 180, CPyStatic_mypy___constant_fold___globals);
    return NULL;
}

char CPyDef_mypy___constant_fold_____top_level__(void) {
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
    tuple_T5OOOOO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    tuple_T5OOOOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", -1, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 6, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9285]; /* ('Final', 'Union') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 8, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9286]; /* ('ComplexExpr', 'Expression', 'FloatExpr', 'IntExpr',
                                     'NameExpr', 'OpExpr', 'StrExpr', 'UnaryExpr', 'Var') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 10, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r18 = CPyStatics[84]; /* 'Union' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 23, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    cpy_r_r20 = (PyObject *)&PyLong_Type;
    cpy_r_r21 = (PyObject *)&PyBool_Type;
    cpy_r_r22 = (PyObject *)&PyFloat_Type;
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 23, CPyStatic_mypy___constant_fold___globals);
        goto CPyL14;
    }
    cpy_r_r26 = (PyObject *)&PyUnicode_Type;
    cpy_r_r27.f0 = cpy_r_r20;
    cpy_r_r27.f1 = cpy_r_r21;
    cpy_r_r27.f2 = cpy_r_r22;
    cpy_r_r27.f3 = cpy_r_r25;
    cpy_r_r27.f4 = cpy_r_r26;
    CPy_INCREF(cpy_r_r27.f0);
    CPy_INCREF(cpy_r_r27.f1);
    CPy_INCREF(cpy_r_r27.f2);
    CPy_INCREF(cpy_r_r27.f3);
    CPy_INCREF(cpy_r_r27.f4);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r28 = PyTuple_New(5);
    if (unlikely(cpy_r_r28 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1770 = cpy_r_r27.f0;
    PyTuple_SET_ITEM(cpy_r_r28, 0, __tmp1770);
    PyObject *__tmp1771 = cpy_r_r27.f1;
    PyTuple_SET_ITEM(cpy_r_r28, 1, __tmp1771);
    PyObject *__tmp1772 = cpy_r_r27.f2;
    PyTuple_SET_ITEM(cpy_r_r28, 2, __tmp1772);
    PyObject *__tmp1773 = cpy_r_r27.f3;
    PyTuple_SET_ITEM(cpy_r_r28, 3, __tmp1773);
    PyObject *__tmp1774 = cpy_r_r27.f4;
    PyTuple_SET_ITEM(cpy_r_r28, 4, __tmp1774);
    cpy_r_r29 = PyObject_GetItem(cpy_r_r19, cpy_r_r28);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 23, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    cpy_r_r30 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r31 = CPyStatics[1603]; /* 'ConstantValue' */
    cpy_r_r32 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 23, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    cpy_r_r34 = (PyObject *)&PyLong_Type;
    cpy_r_r35 = (PyObject *)&PyBool_Type;
    cpy_r_r36 = (PyObject *)&PyFloat_Type;
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 24, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    cpy_r_r40 = (PyObject *)&PyUnicode_Type;
    cpy_r_r41.f0 = cpy_r_r34;
    cpy_r_r41.f1 = cpy_r_r35;
    cpy_r_r41.f2 = cpy_r_r36;
    cpy_r_r41.f3 = cpy_r_r39;
    cpy_r_r41.f4 = cpy_r_r40;
    CPy_INCREF(cpy_r_r41.f0);
    CPy_INCREF(cpy_r_r41.f1);
    CPy_INCREF(cpy_r_r41.f2);
    CPy_INCREF(cpy_r_r41.f3);
    CPy_INCREF(cpy_r_r41.f4);
    CPy_DECREF(cpy_r_r39);
    CPyStatic_mypy___constant_fold___CONST_TYPES = cpy_r_r41;
    CPy_INCREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f0);
    CPy_INCREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f1);
    CPy_INCREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f2);
    CPy_INCREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f3);
    CPy_INCREF(CPyStatic_mypy___constant_fold___CONST_TYPES.f4);
    cpy_r_r42 = CPyStatic_mypy___constant_fold___globals;
    cpy_r_r43 = CPyStatics[1604]; /* 'CONST_TYPES' */
    cpy_r_r44 = PyTuple_New(5);
    if (unlikely(cpy_r_r44 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1775 = cpy_r_r41.f0;
    PyTuple_SET_ITEM(cpy_r_r44, 0, __tmp1775);
    PyObject *__tmp1776 = cpy_r_r41.f1;
    PyTuple_SET_ITEM(cpy_r_r44, 1, __tmp1776);
    PyObject *__tmp1777 = cpy_r_r41.f2;
    PyTuple_SET_ITEM(cpy_r_r44, 2, __tmp1777);
    PyObject *__tmp1778 = cpy_r_r41.f3;
    PyTuple_SET_ITEM(cpy_r_r44, 3, __tmp1778);
    PyObject *__tmp1779 = cpy_r_r41.f4;
    PyTuple_SET_ITEM(cpy_r_r44, 4, __tmp1779);
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/constant_fold.py", "<module>", 24, CPyStatic_mypy___constant_fold___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL14: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL13;
}
