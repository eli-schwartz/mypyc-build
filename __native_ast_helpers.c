#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef ast_helpersmodule_methods[] = {
    {"process_conditional", (PyCFunction)CPyPy_ast_helpers___process_conditional, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"maybe_process_conditional_comparison", (PyCFunction)CPyPy_ast_helpers___maybe_process_conditional_comparison, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_borrow_friendly_expr", (PyCFunction)CPyPy_ast_helpers___is_borrow_friendly_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef ast_helpersmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.ast_helpers",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    ast_helpersmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___ast_helpers(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___ast_helpers_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___ast_helpers_internal);
        return CPyModule_mypyc___irbuild___ast_helpers_internal;
    }
    CPyModule_mypyc___irbuild___ast_helpers_internal = PyModule_Create(&ast_helpersmodule);
    if (unlikely(CPyModule_mypyc___irbuild___ast_helpers_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___ast_helpers_internal, "__name__");
    CPyStatic_ast_helpers___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___ast_helpers_internal);
    if (unlikely(CPyStatic_ast_helpers___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_ast_helpers_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___ast_helpers_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___ast_helpers_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_ast_helpers___process_conditional(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_true, PyObject *cpy_r_false) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_res;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_reg;
    char cpy_r_r70;
    char cpy_r_r71;
    cpy_r_r0 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r4 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 32, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r5 = ((mypy___nodes___OpExprObject *)cpy_r_r4)->_op;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[838]; /* 'and' */
    cpy_r_r7 = PyUnicode_Compare(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 == -1;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = PyErr_Occurred();
    cpy_r_r10 = cpy_r_r9 != NULL;
    if (!cpy_r_r10) goto CPyL5;
    cpy_r_r11 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", -1, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
CPyL5: ;
    cpy_r_r12 = cpy_r_r7 == 0;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL12;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r14 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 32, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r15 = ((mypy___nodes___OpExprObject *)cpy_r_r14)->_op;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[868]; /* 'or' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL11;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", -1, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
CPyL11: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    cpy_r_r13 = cpy_r_r22;
CPyL12: ;
    if (!cpy_r_r13) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r23 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 33, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r24 = ((mypy___nodes___OpExprObject *)cpy_r_r23)->_op;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[838]; /* 'and' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL17;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL17;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 33, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
CPyL17: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (!cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = CPyDef_ops___BasicBlock(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 35, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    cpy_r_new = cpy_r_r33;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r34 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 36, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL46;
    }
    cpy_r_r35 = ((mypy___nodes___OpExprObject *)cpy_r_r34)->_left;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_ast_helpers___process_conditional(cpy_r_self, cpy_r_r35, cpy_r_new, cpy_r_false);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 36, CPyStatic_ast_helpers___globals);
        goto CPyL46;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_new);
    CPy_DECREF(cpy_r_new);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 37, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r38 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 38, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r39 = ((mypy___nodes___OpExprObject *)cpy_r_r38)->_right;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyDef_ast_helpers___process_conditional(cpy_r_self, cpy_r_r39, cpy_r_true, cpy_r_false);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 38, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    } else
        goto CPyL44;
CPyL24: ;
    cpy_r_r41 = CPY_INT_TAG;
    cpy_r_r42 = CPyDef_ops___BasicBlock(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 41, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    cpy_r_new = cpy_r_r42;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r43 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 42, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL46;
    }
    cpy_r_r44 = ((mypy___nodes___OpExprObject *)cpy_r_r43)->_left;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPyDef_ast_helpers___process_conditional(cpy_r_self, cpy_r_r44, cpy_r_true, cpy_r_new);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 42, CPyStatic_ast_helpers___globals);
        goto CPyL46;
    }
    cpy_r_r46 = CPyDef_builder___IRBuilder___activate_block(cpy_r_self, cpy_r_new);
    CPy_DECREF(cpy_r_new);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 43, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___OpExpr))
        cpy_r_r47 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 44, CPyStatic_ast_helpers___globals, "mypy.nodes.OpExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r48 = ((mypy___nodes___OpExprObject *)cpy_r_r47)->_right;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_ast_helpers___process_conditional(cpy_r_self, cpy_r_r48, cpy_r_true, cpy_r_false);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 44, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    } else
        goto CPyL44;
CPyL30: ;
    cpy_r_r50 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (!cpy_r_r53) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r54 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 45, CPyStatic_ast_helpers___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r55 = ((mypy___nodes___UnaryExprObject *)cpy_r_r54)->_op;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyStatics[869]; /* 'not' */
    cpy_r_r57 = PyUnicode_Compare(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 == -1;
    if (!cpy_r_r58) goto CPyL35;
    cpy_r_r59 = PyErr_Occurred();
    cpy_r_r60 = cpy_r_r59 != NULL;
    if (!cpy_r_r60) goto CPyL35;
    cpy_r_r61 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 45, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
CPyL35: ;
    cpy_r_r62 = cpy_r_r57 == 0;
    if (!cpy_r_r62) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___UnaryExpr))
        cpy_r_r63 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 46, CPyStatic_ast_helpers___globals, "mypy.nodes.UnaryExpr", cpy_r_e);
        goto CPyL45;
    }
    cpy_r_r64 = ((mypy___nodes___UnaryExprObject *)cpy_r_r63)->_expr;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = CPyDef_ast_helpers___process_conditional(cpy_r_self, cpy_r_r64, cpy_r_false, cpy_r_true);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 46, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    } else
        goto CPyL44;
CPyL38: ;
    cpy_r_r66 = CPyDef_ast_helpers___maybe_process_conditional_comparison(cpy_r_self, cpy_r_e, cpy_r_true, cpy_r_false);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 48, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    cpy_r_res = cpy_r_r66;
    if (!cpy_r_res) goto CPyL41;
    return 1;
CPyL41: ;
    cpy_r_r67 = 2;
    cpy_r_r68 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_e, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 52, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
    if (likely(cpy_r_r68 != Py_None))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 52, CPyStatic_ast_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r68);
        goto CPyL45;
    }
    cpy_r_reg = cpy_r_r69;
    cpy_r_r70 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_self, cpy_r_reg, cpy_r_true, cpy_r_false);
    CPy_DECREF(cpy_r_reg);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 53, CPyStatic_ast_helpers___globals);
        goto CPyL45;
    }
CPyL44: ;
    return 1;
CPyL45: ;
    cpy_r_r71 = 2;
    return cpy_r_r71;
CPyL46: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL45;
}

PyObject *CPyPy_ast_helpers___process_conditional(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"self", "e", "true", "false", 0};
    static CPyArg_Parser parser = {"OOOO:process_conditional", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_e;
    PyObject *obj_true;
    PyObject *obj_false;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_self, &obj_e, &obj_true, &obj_false)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *arg_true;
    if (likely(Py_TYPE(obj_true) == CPyType_ops___BasicBlock))
        arg_true = obj_true;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_true); 
        goto fail;
    }
    PyObject *arg_false;
    if (likely(Py_TYPE(obj_false) == CPyType_ops___BasicBlock))
        arg_false = obj_false;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_false); 
        goto fail;
    }
    char retval = CPyDef_ast_helpers___process_conditional(arg_self, arg_e, arg_true, arg_false);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "process_conditional", 29, CPyStatic_ast_helpers___globals);
    return NULL;
}

char CPyDef_ast_helpers___maybe_process_conditional_comparison(PyObject *cpy_r_self, PyObject *cpy_r_e, PyObject *cpy_r_true, PyObject *cpy_r_false) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_ltype;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_rtype;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
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
    PyObject *cpy_r_r78;
    PyObject *cpy_r_left_expr;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_right_expr;
    char cpy_r_r83;
    char cpy_r_borrow_left;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_right;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    cpy_r_r0 = (PyObject *)CPyType_nodes___ComparisonExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL3;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r4 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 69, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL92;
    }
    cpy_r_r5 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r4)->_operands;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 != 4;
    if (!cpy_r_r9) goto CPyL4;
CPyL3: ;
    return 0;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r10 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 71, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL92;
    }
    cpy_r_r11 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r10)->_operands;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 71, CPyStatic_ast_helpers___globals);
        goto CPyL92;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_nodes___Expression)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 71, CPyStatic_ast_helpers___globals, "mypy.nodes.Expression", cpy_r_r12);
        goto CPyL92;
    }
    cpy_r_r14 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 71, CPyStatic_ast_helpers___globals);
        goto CPyL92;
    }
    cpy_r_ltype = cpy_r_r14;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r15 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 72, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL93;
    }
    cpy_r_r16 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r15)->_operands;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, 2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 72, CPyStatic_ast_helpers___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_nodes___Expression)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 72, CPyStatic_ast_helpers___globals, "mypy.nodes.Expression", cpy_r_r17);
        goto CPyL93;
    }
    cpy_r_r19 = CPyDef_builder___IRBuilder___node_type(cpy_r_self, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 72, CPyStatic_ast_helpers___globals);
        goto CPyL93;
    }
    cpy_r_rtype = cpy_r_r19;
    cpy_r_r20 = CPyDef_rtypes___is_tagged(cpy_r_ltype);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 74, CPyStatic_ast_helpers___globals);
        goto CPyL94;
    }
    if (cpy_r_r20) goto CPyL16;
    cpy_r_r21 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_ltype);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 74, CPyStatic_ast_helpers___globals);
        goto CPyL94;
    }
    if (!cpy_r_r21) goto CPyL95;
CPyL16: ;
    cpy_r_r22 = CPyDef_rtypes___is_tagged(cpy_r_rtype);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 75, CPyStatic_ast_helpers___globals);
        goto CPyL94;
    }
    if (cpy_r_r22) goto CPyL21;
    cpy_r_r23 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_rtype);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 75, CPyStatic_ast_helpers___globals);
        goto CPyL94;
    }
    if (cpy_r_r23) {
        goto CPyL21;
    } else
        goto CPyL95;
CPyL20: ;
    return 0;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r24 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 78, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL94;
    }
    cpy_r_r25 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r24)->_operators;
    cpy_r_r26 = CPyList_GetItemShort(cpy_r_r25, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 78, CPyStatic_ast_helpers___globals);
        goto CPyL94;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 78, CPyStatic_ast_helpers___globals, "str", cpy_r_r26);
        goto CPyL94;
    }
    cpy_r_op = cpy_r_r27;
    cpy_r_r28 = CPyStatics[860]; /* '==' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_op, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL27;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL27;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL27: ;
    cpy_r_r34 = cpy_r_r29 != 0;
    if (cpy_r_r34) goto CPyL29;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL33;
CPyL29: ;
    cpy_r_r36 = CPyStatics[863]; /* '!=' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_op, cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL32;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL32;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL32: ;
    cpy_r_r42 = cpy_r_r37 != 0;
    cpy_r_r35 = cpy_r_r42;
CPyL33: ;
    if (cpy_r_r35) goto CPyL35;
    cpy_r_r43 = cpy_r_r35;
    goto CPyL39;
CPyL35: ;
    cpy_r_r44 = CPyStatics[2465]; /* '<' */
    cpy_r_r45 = PyUnicode_Compare(cpy_r_op, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL38;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL38;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL38: ;
    cpy_r_r50 = cpy_r_r45 != 0;
    cpy_r_r43 = cpy_r_r50;
CPyL39: ;
    if (cpy_r_r43) goto CPyL41;
    cpy_r_r51 = cpy_r_r43;
    goto CPyL45;
CPyL41: ;
    cpy_r_r52 = CPyStatics[2470]; /* '<=' */
    cpy_r_r53 = PyUnicode_Compare(cpy_r_op, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 == -1;
    if (!cpy_r_r54) goto CPyL44;
    cpy_r_r55 = PyErr_Occurred();
    cpy_r_r56 = cpy_r_r55 != NULL;
    if (!cpy_r_r56) goto CPyL44;
    cpy_r_r57 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL44: ;
    cpy_r_r58 = cpy_r_r53 != 0;
    cpy_r_r51 = cpy_r_r58;
CPyL45: ;
    if (cpy_r_r51) goto CPyL47;
    cpy_r_r59 = cpy_r_r51;
    goto CPyL51;
CPyL47: ;
    cpy_r_r60 = CPyStatics[840]; /* '>' */
    cpy_r_r61 = PyUnicode_Compare(cpy_r_op, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 == -1;
    if (!cpy_r_r62) goto CPyL50;
    cpy_r_r63 = PyErr_Occurred();
    cpy_r_r64 = cpy_r_r63 != NULL;
    if (!cpy_r_r64) goto CPyL50;
    cpy_r_r65 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL50: ;
    cpy_r_r66 = cpy_r_r61 != 0;
    cpy_r_r59 = cpy_r_r66;
CPyL51: ;
    if (cpy_r_r59) goto CPyL53;
    cpy_r_r67 = cpy_r_r59;
    goto CPyL57;
CPyL53: ;
    cpy_r_r68 = CPyStatics[2468]; /* '>=' */
    cpy_r_r69 = PyUnicode_Compare(cpy_r_op, cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL56;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL56;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", -1, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
CPyL56: ;
    cpy_r_r74 = cpy_r_r69 != 0;
    cpy_r_r67 = cpy_r_r74;
CPyL57: ;
    if (cpy_r_r67) {
        goto CPyL97;
    } else
        goto CPyL59;
CPyL58: ;
    return 0;
CPyL59: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r75 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 81, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL96;
    }
    cpy_r_r76 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r75)->_operands;
    cpy_r_r77 = CPyList_GetItemShort(cpy_r_r76, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 81, CPyStatic_ast_helpers___globals);
        goto CPyL96;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r77, CPyType_nodes___Expression)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 81, CPyStatic_ast_helpers___globals, "mypy.nodes.Expression", cpy_r_r77);
        goto CPyL96;
    }
    cpy_r_left_expr = cpy_r_r78;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r79 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 82, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL98;
    }
    cpy_r_r80 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r79)->_operands;
    cpy_r_r81 = CPyList_GetItemShort(cpy_r_r80, 2);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 82, CPyStatic_ast_helpers___globals);
        goto CPyL98;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r81, CPyType_nodes___Expression)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 82, CPyStatic_ast_helpers___globals, "mypy.nodes.Expression", cpy_r_r81);
        goto CPyL98;
    }
    cpy_r_right_expr = cpy_r_r82;
    cpy_r_r83 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_self, cpy_r_right_expr);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 83, CPyStatic_ast_helpers___globals);
        goto CPyL99;
    }
    cpy_r_borrow_left = cpy_r_r83;
    cpy_r_r84 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_left_expr, cpy_r_borrow_left);
    CPy_DECREF(cpy_r_left_expr);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 84, CPyStatic_ast_helpers___globals);
        goto CPyL100;
    }
    if (likely(cpy_r_r84 != Py_None))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 84, CPyStatic_ast_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r84);
        goto CPyL100;
    }
    cpy_r_left = cpy_r_r85;
    cpy_r_r86 = CPyDef_builder___IRBuilder___accept(cpy_r_self, cpy_r_right_expr, 1);
    CPy_DECREF(cpy_r_right_expr);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 85, CPyStatic_ast_helpers___globals);
        goto CPyL101;
    }
    if (likely(cpy_r_r86 != Py_None))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 85, CPyStatic_ast_helpers___globals, "mypyc.ir.ops.Value", cpy_r_r86);
        goto CPyL101;
    }
    cpy_r_right = cpy_r_r87;
    cpy_r_r88 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_ltype);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 86, CPyStatic_ast_helpers___globals);
        goto CPyL102;
    }
    if (cpy_r_r88) goto CPyL74;
    cpy_r_r89 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_rtype);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 86, CPyStatic_ast_helpers___globals);
        goto CPyL102;
    }
    if (!cpy_r_r89) goto CPyL103;
CPyL74: ;
    cpy_r_r90 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_ltype);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 87, CPyStatic_ast_helpers___globals);
        goto CPyL102;
    }
    if (cpy_r_r90) {
        goto CPyL79;
    } else
        goto CPyL104;
CPyL76: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r91 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 88, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL105;
    }
    cpy_r_r92 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r91)->_line;
    CPyTagged_INCREF(cpy_r_r92);
    cpy_r_r93 = 2;
    cpy_r_r94 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_left, cpy_r_rtype, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_rtype);
    CPyTagged_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 88, CPyStatic_ast_helpers___globals);
        goto CPyL106;
    }
    cpy_r_left = cpy_r_r94;
    goto CPyL85;
CPyL79: ;
    cpy_r_r95 = CPyDef_rtypes___is_fixed_width_rtype(cpy_r_rtype);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 89, CPyStatic_ast_helpers___globals);
        goto CPyL107;
    }
    if (cpy_r_r95) goto CPyL108;
    if (likely(Py_TYPE(cpy_r_ltype) == CPyType_rtypes___RPrimitive))
        cpy_r_r96 = cpy_r_ltype;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 90, CPyStatic_ast_helpers___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_ltype);
        goto CPyL109;
    }
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r97 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 90, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL110;
    }
    cpy_r_r98 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r97)->_line;
    CPyTagged_INCREF(cpy_r_r98);
    cpy_r_r99 = 2;
    cpy_r_r100 = CPyDef_builder___IRBuilder___coerce(cpy_r_self, cpy_r_right, cpy_r_r96, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_r96);
    CPyTagged_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 90, CPyStatic_ast_helpers___globals);
        goto CPyL111;
    }
    cpy_r_right = cpy_r_r100;
CPyL85: ;
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r101 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 91, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL109;
    }
    cpy_r_r102 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r101)->_line;
    CPyTagged_INCREF(cpy_r_r102);
    cpy_r_r103 = CPyDef_builder___IRBuilder___binary_op(cpy_r_self, cpy_r_left, cpy_r_right, cpy_r_op, cpy_r_r102);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_op);
    CPyTagged_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 91, CPyStatic_ast_helpers___globals);
        goto CPyL92;
    }
    cpy_r_reg = cpy_r_r103;
    cpy_r_r104 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = CPyDef_ll_builder___LowLevelIRBuilder___flush_keep_alives(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 92, CPyStatic_ast_helpers___globals);
        goto CPyL112;
    }
    cpy_r_r106 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_self, cpy_r_reg, cpy_r_true, cpy_r_false);
    CPy_DECREF(cpy_r_reg);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 93, CPyStatic_ast_helpers___globals);
        goto CPyL92;
    } else
        goto CPyL91;
CPyL89: ;
    cpy_r_r107 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_self)->_builder;
    CPy_INCREF(cpy_r_r107);
    if (likely(Py_TYPE(cpy_r_e) == CPyType_nodes___ComparisonExpr))
        cpy_r_r108 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 96, CPyStatic_ast_helpers___globals, "mypy.nodes.ComparisonExpr", cpy_r_e);
        goto CPyL113;
    }
    cpy_r_r109 = ((mypy___nodes___ComparisonExprObject *)cpy_r_r108)->_line;
    CPyTagged_INCREF(cpy_r_r109);
    cpy_r_r110 = CPyDef_ll_builder___LowLevelIRBuilder___compare_tagged_condition(cpy_r_r107, cpy_r_left, cpy_r_right, cpy_r_op, cpy_r_true, cpy_r_false, cpy_r_r109);
    CPy_DECREF(cpy_r_left);
    CPy_DECREF(cpy_r_right);
    CPy_DECREF(cpy_r_op);
    CPyTagged_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 96, CPyStatic_ast_helpers___globals);
        goto CPyL92;
    }
CPyL91: ;
    return 1;
CPyL92: ;
    cpy_r_r111 = 2;
    return cpy_r_r111;
CPyL93: ;
    CPy_DecRef(cpy_r_ltype);
    goto CPyL92;
CPyL94: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL92;
CPyL95: ;
    CPy_DECREF(cpy_r_ltype);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL20;
CPyL96: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    goto CPyL92;
CPyL97: ;
    CPy_DECREF(cpy_r_ltype);
    CPy_DECREF(cpy_r_rtype);
    CPy_DECREF(cpy_r_op);
    goto CPyL58;
CPyL98: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left_expr);
    goto CPyL92;
CPyL99: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left_expr);
    CPy_DecRef(cpy_r_right_expr);
    goto CPyL92;
CPyL100: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_right_expr);
    goto CPyL92;
CPyL101: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    goto CPyL92;
CPyL102: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL92;
CPyL103: ;
    CPy_DECREF(cpy_r_ltype);
    CPy_DECREF(cpy_r_rtype);
    goto CPyL89;
CPyL104: ;
    CPy_DECREF(cpy_r_ltype);
    goto CPyL76;
CPyL105: ;
    CPy_DecRef(cpy_r_rtype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL92;
CPyL106: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_right);
    goto CPyL92;
CPyL107: ;
    CPy_DecRef(cpy_r_ltype);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL92;
CPyL108: ;
    CPy_DECREF(cpy_r_ltype);
    goto CPyL85;
CPyL109: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    goto CPyL92;
CPyL110: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r96);
    goto CPyL92;
CPyL111: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    goto CPyL92;
CPyL112: ;
    CPy_DecRef(cpy_r_reg);
    goto CPyL92;
CPyL113: ;
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_left);
    CPy_DecRef(cpy_r_right);
    CPy_DecRef(cpy_r_r107);
    goto CPyL92;
}

PyObject *CPyPy_ast_helpers___maybe_process_conditional_comparison(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"self", "e", "true", "false", 0};
    static CPyArg_Parser parser = {"OOOO:maybe_process_conditional_comparison", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_e;
    PyObject *obj_true;
    PyObject *obj_false;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_self, &obj_e, &obj_true, &obj_false)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_e;
    if (likely(PyObject_TypeCheck(obj_e, CPyType_nodes___Expression)))
        arg_e = obj_e;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_e); 
        goto fail;
    }
    PyObject *arg_true;
    if (likely(Py_TYPE(obj_true) == CPyType_ops___BasicBlock))
        arg_true = obj_true;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_true); 
        goto fail;
    }
    PyObject *arg_false;
    if (likely(Py_TYPE(obj_false) == CPyType_ops___BasicBlock))
        arg_false = obj_false;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_false); 
        goto fail;
    }
    char retval = CPyDef_ast_helpers___maybe_process_conditional_comparison(arg_self, arg_e, arg_true, arg_false);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "maybe_process_conditional_comparison", 56, CPyStatic_ast_helpers___globals);
    return NULL;
}

char CPyDef_ast_helpers___is_borrow_friendly_expr(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
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
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___FloatExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r14 = cpy_r_r9;
    goto CPyL9;
CPyL8: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL9: ;
    if (!cpy_r_r14) goto CPyL11;
    return 1;
CPyL11: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___UnaryExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    if (!cpy_r_r22) goto CPyL13;
    cpy_r_r23 = cpy_r_r22;
    goto CPyL14;
CPyL13: ;
    cpy_r_r24 = (PyObject *)CPyType_nodes___OpExpr;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    cpy_r_r23 = cpy_r_r27;
CPyL14: ;
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r28 = cpy_r_r23;
    goto CPyL17;
CPyL16: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    cpy_r_r28 = cpy_r_r32;
CPyL17: ;
    if (!cpy_r_r28) goto CPyL19;
    cpy_r_r33 = cpy_r_r28;
    goto CPyL20;
CPyL19: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL20: ;
    if (!cpy_r_r33) goto CPyL25;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___UnaryExpr)
        cpy_r_r38 = cpy_r_expr;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL9932;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___OpExpr)
        cpy_r_r38 = cpy_r_expr;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL9932;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr)
        cpy_r_r38 = cpy_r_expr;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL9932;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr)
        cpy_r_r38 = cpy_r_expr;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL9932;
    CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 110, CPyStatic_ast_helpers___globals, "union[mypy.nodes.UnaryExpr, mypy.nodes.OpExpr, mypy.nodes.NameExpr, mypy.nodes.MemberExpr]", cpy_r_expr);
    goto CPyL39;
__LL9932: ;
    cpy_r_r39 = CPyDef_irbuild___constant_fold___constant_fold_expr(cpy_r_self, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 110, CPyStatic_ast_helpers___globals);
        goto CPyL39;
    }
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_r39 != cpy_r_r40;
    CPy_DECREF(cpy_r_r39);
    if (!cpy_r_r41) goto CPyL25;
    return 1;
CPyL25: ;
    cpy_r_r42 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r46 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 115, CPyStatic_ast_helpers___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL39;
    }
    cpy_r_r47 = ((mypy___nodes___NameExprObject *)cpy_r_r46)->_node;
    cpy_r_r48 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_r47)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    if (!cpy_r_r51) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r52 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 115, CPyStatic_ast_helpers___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL39;
    }
    cpy_r_r53 = ((mypy___nodes___NameExprObject *)cpy_r_r52)->_kind;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[9015]; /* 0 */
    cpy_r_r55 = PyObject_RichCompare(cpy_r_r53, cpy_r_r54, 2);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 115, CPyStatic_ast_helpers___globals);
        goto CPyL39;
    }
    if (unlikely(!PyBool_Check(cpy_r_r55))) {
        CPy_TypeError("bool", cpy_r_r55); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r55 == Py_True;
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 115, CPyStatic_ast_helpers___globals);
        goto CPyL39;
    }
    if (!cpy_r_r56) goto CPyL33;
    return 1;
CPyL33: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL38;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___MemberExpr))
        cpy_r_r61 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 118, CPyStatic_ast_helpers___globals, "mypy.nodes.MemberExpr", cpy_r_expr);
        goto CPyL39;
    }
    cpy_r_r62 = CPyDef_builder___IRBuilder___is_native_attr_ref(cpy_r_self, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 118, CPyStatic_ast_helpers___globals);
        goto CPyL39;
    }
    if (!cpy_r_r62) goto CPyL38;
    return 1;
CPyL38: ;
    return 0;
CPyL39: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
}

PyObject *CPyPy_ast_helpers___is_borrow_friendly_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"self", "expr", 0};
    static CPyArg_Parser parser = {"OO:is_borrow_friendly_expr", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_self, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_builder___IRBuilder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_ast_helpers___is_borrow_friendly_expr(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "is_borrow_friendly_expr", 100, CPyStatic_ast_helpers___globals);
    return NULL;
}

char CPyDef_ast_helpers_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", -1, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_ast_helpers___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 7, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10031]; /* ('LDEF', 'BytesExpr', 'ComparisonExpr', 'Expression',
                                     'FloatExpr', 'IntExpr', 'MemberExpr', 'NameExpr',
                                     'OpExpr', 'StrExpr', 'UnaryExpr', 'Var') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_ast_helpers___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 9, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10032]; /* ('BasicBlock',) */
    cpy_r_r14 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r15 = CPyStatic_ast_helpers___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 23, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10033]; /* ('is_fixed_width_rtype', 'is_tagged') */
    cpy_r_r18 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r19 = CPyStatic_ast_helpers___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 24, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r22 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r23 = CPyStatic_ast_helpers___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 25, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9670]; /* ('constant_fold_expr',) */
    cpy_r_r26 = CPyStatics[8055]; /* 'mypyc.irbuild.constant_fold' */
    cpy_r_r27 = CPyStatic_ast_helpers___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/ast_helpers.py", "<module>", 26, CPyStatic_ast_helpers___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___irbuild___constant_fold = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___irbuild___constant_fold);
    CPy_DECREF(cpy_r_r28);
    return 1;
CPyL10: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}
