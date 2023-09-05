#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef exceptionsmodule_methods[] = {
    {"insert_exception_handling", (PyCFunction)CPyPy_exceptions___insert_exception_handling, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_default_handler_block", (PyCFunction)CPyPy_exceptions___add_default_handler_block, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_blocks_at_errors", (PyCFunction)CPyPy_exceptions___split_blocks_at_errors, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"primitive_call", (PyCFunction)CPyPy_exceptions___primitive_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"adjust_error_kinds", (PyCFunction)CPyPy_exceptions___adjust_error_kinds, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"insert_overlapping_error_value_check", (PyCFunction)CPyPy_exceptions___insert_overlapping_error_value_check, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef exceptionsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.transform.exceptions",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    exceptionsmodule_methods
};

PyObject *CPyInit_mypyc___transform___exceptions(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___transform___exceptions_internal) {
        Py_INCREF(CPyModule_mypyc___transform___exceptions_internal);
        return CPyModule_mypyc___transform___exceptions_internal;
    }
    CPyModule_mypyc___transform___exceptions_internal = PyModule_Create(&exceptionsmodule);
    if (unlikely(CPyModule_mypyc___transform___exceptions_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___transform___exceptions_internal, "__name__");
    CPyStatic_exceptions___globals = PyModule_GetDict(CPyModule_mypyc___transform___exceptions_internal);
    if (unlikely(CPyStatic_exceptions___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_exceptions_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___transform___exceptions_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___transform___exceptions_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_exceptions___insert_exception_handling(PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_error_label;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_block;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_op;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_error_label = cpy_r_r0;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL22;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_ops___BasicBlock))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 47, CPyStatic_exceptions___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r7);
        goto CPyL23;
    }
    cpy_r_block = cpy_r_r8;
    cpy_r_r9 = CPyDef_exceptions___adjust_error_kinds(cpy_r_block);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 48, CPyStatic_exceptions___globals);
        goto CPyL24;
    }
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_error_label == cpy_r_r10;
    if (!cpy_r_r11) goto CPyL25;
    cpy_r_r12 = 0;
    cpy_r_r13 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_block);
    cpy_r_r14 = 0;
CPyL6: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL26;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_ops___Op)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 49, CPyStatic_exceptions___globals, "mypyc.ir.ops.Op", cpy_r_r19);
        goto CPyL27;
    }
    cpy_r_op = cpy_r_r20;
    cpy_r_r21 = CPY_GET_METHOD(cpy_r_op, CPyType_ops___Op, 3, mypyc___ir___ops___OpObject, char (*)(PyObject *))(cpy_r_op); /* can_raise */
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 49, CPyStatic_exceptions___globals);
        goto CPyL27;
    }
    if (cpy_r_r21) {
        goto CPyL28;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r12 = 1;
    goto CPyL12;
CPyL11: ;
    cpy_r_r22 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r22;
    goto CPyL6;
CPyL12: ;
    if (cpy_r_r12) {
        goto CPyL29;
    } else
        goto CPyL15;
CPyL13: ;
    cpy_r_r23 = CPyDef_exceptions___add_default_handler_block(cpy_r_ir);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 50, CPyStatic_exceptions___globals);
        goto CPyL30;
    }
    cpy_r_error_label = cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r24;
    goto CPyL1;
CPyL16: ;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_error_label != cpy_r_r25;
    if (!cpy_r_r26) goto CPyL31;
    cpy_r_r27 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r27);
    if (likely(cpy_r_error_label != Py_None))
        cpy_r_r28 = cpy_r_error_label;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 52, CPyStatic_exceptions___globals, "mypyc.ir.ops.BasicBlock", cpy_r_error_label);
        goto CPyL32;
    }
    cpy_r_r29 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_traceback_name;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_exceptions___split_blocks_at_errors(cpy_r_r27, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 52, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    CPy_DECREF(((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks);
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks = cpy_r_r30;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL22: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_r1);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_block);
    goto CPyL21;
CPyL25: ;
    CPy_DECREF(cpy_r_block);
    goto CPyL15;
CPyL26: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL27: ;
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
CPyL28: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL10;
CPyL29: ;
    CPy_DECREF(cpy_r_error_label);
    goto CPyL13;
CPyL30: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL21;
CPyL31: ;
    CPy_DECREF(cpy_r_error_label);
    goto CPyL20;
CPyL32: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL21;
}

PyObject *CPyPy_exceptions___insert_exception_handling(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:insert_exception_handling", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_func_ir___FuncIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_exceptions___insert_exception_handling(arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_exception_handling", 42, CPyStatic_exceptions___globals);
    return NULL;
}

PyObject *CPyDef_exceptions___add_default_handler_block(PyObject *cpy_r_ir) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 56, CPyStatic_exceptions___globals);
        goto CPyL8;
    }
    cpy_r_block = cpy_r_r1;
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PyList_Append(cpy_r_r2, cpy_r_block);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 57, CPyStatic_exceptions___globals);
        goto CPyL9;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_ir, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 58, CPyStatic_exceptions___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_ops___LoadErrorValue(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 58, CPyStatic_exceptions___globals);
        goto CPyL9;
    }
    cpy_r_op = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyList_Append(cpy_r_r10, cpy_r_op);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 59, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    cpy_r_r13 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___Return(cpy_r_op, cpy_r_r14);
    CPy_DECREF(cpy_r_op);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 60, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    cpy_r_r16 = PyList_Append(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 60, CPyStatic_exceptions___globals);
        goto CPyL9;
    }
    return cpy_r_block;
CPyL8: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL9: ;
    CPy_DecRef(cpy_r_block);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_op);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r13);
    goto CPyL8;
}

PyObject *CPyPy_exceptions___add_default_handler_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:add_default_handler_block", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_func_ir___FuncIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_ir); 
        goto fail;
    }
    PyObject *retval = CPyDef_exceptions___add_default_handler_block(arg_ir);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "add_default_handler_block", 55, CPyStatic_exceptions___globals);
    return NULL;
}

PyObject *CPyDef_exceptions___split_blocks_at_errors(PyObject *cpy_r_blocks, PyObject *cpy_r_default_error_handler, PyObject *cpy_r_func_name) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_variant;
    char cpy_r_r1;
    char cpy_r_negated;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_new_blocks;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_cur_block;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_error_label;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_op;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_new_block;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_comp;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_new_block2;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_branch;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    int64_t cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyTagged cpy_r_r118;
    tuple_T2OI cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_variant = cpy_r_r0;
    cpy_r_r1 = 2;
    cpy_r_negated = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 67, CPyStatic_exceptions___globals);
        goto CPyL85;
    }
    cpy_r_new_blocks = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL86;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_ops___BasicBlock))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 70, CPyStatic_exceptions___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r8);
        goto CPyL87;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r10);
    cpy_r_ops = cpy_r_r10;
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 72, CPyStatic_exceptions___globals);
        goto CPyL88;
    }
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops = cpy_r_r11;
    CPy_INCREF(cpy_r_block);
    cpy_r_cur_block = cpy_r_block;
    cpy_r_r13 = PyList_Append(cpy_r_new_blocks, cpy_r_cur_block);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 74, CPyStatic_exceptions___globals);
        goto CPyL89;
    }
    cpy_r_r15 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_error_handler;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL90;
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r18 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 78, CPyStatic_exceptions___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r15);
        goto CPyL89;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL10;
CPyL9: ;
    CPy_INCREF(cpy_r_default_error_handler);
    cpy_r_r19 = cpy_r_default_error_handler;
CPyL10: ;
    cpy_r_error_label = cpy_r_r19;
    cpy_r_r20 = Py_None;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_error_handler);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_error_handler = cpy_r_r20;
    CPy_DECREF(cpy_r_block);
    cpy_r_r22 = 0;
CPyL11: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_ops)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL91;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_ops, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_ops___Op)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 81, CPyStatic_exceptions___globals, "mypyc.ir.ops.Op", cpy_r_r27);
        goto CPyL92;
    }
    cpy_r_op = cpy_r_r28;
    CPy_INCREF(cpy_r_op);
    cpy_r_target = cpy_r_op;
    cpy_r_r29 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = PyList_Append(cpy_r_r29, cpy_r_op);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 83, CPyStatic_exceptions___globals);
        goto CPyL93;
    }
    cpy_r_r32 = (PyObject *)CPyType_ops___RegisterOp;
    cpy_r_r33 = CPy_TypeCheck(cpy_r_op, cpy_r_r32);
    if (!cpy_r_r33) goto CPyL94;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r34 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 84, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL93;
    }
    cpy_r_r35 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r34)->_error_kind;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (!cpy_r_r36) goto CPyL94;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_ops___BasicBlock(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 86, CPyStatic_exceptions___globals);
        goto CPyL93;
    }
    cpy_r_new_block = cpy_r_r38;
    cpy_r_r39 = PyList_Append(cpy_r_new_blocks, cpy_r_new_block);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 87, CPyStatic_exceptions___globals);
        goto CPyL95;
    }
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r41 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 89, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r42 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r41)->_error_kind;
    cpy_r_r43 = cpy_r_r42 == 2;
    if (cpy_r_r43) {
        goto CPyL96;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_variant = 202;
    cpy_r_negated = 0;
    goto CPyL54;
CPyL22: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r44 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 93, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r45 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r44)->_error_kind;
    cpy_r_r46 = cpy_r_r45 == 4;
    if (cpy_r_r46) {
        goto CPyL97;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_variant = 200;
    cpy_r_negated = 1;
    goto CPyL54;
CPyL25: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r47 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 97, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r48 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r47)->_error_kind;
    cpy_r_r49 = cpy_r_r48 == 6;
    if (cpy_r_r49) {
        goto CPyL98;
    } else
        goto CPyL32;
CPyL27: ;
    cpy_r_variant = 200;
    cpy_r_negated = 1;
    cpy_r_r50 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 102, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = CPyDef_ops___Integer(0, cpy_r_r50, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 102, CPyStatic_exceptions___globals);
        goto CPyL100;
    }
    cpy_r_target = cpy_r_r53;
    goto CPyL54;
CPyL32: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r54 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 103, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r55 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r54)->_error_kind;
    cpy_r_r56 = cpy_r_r55 == 8;
    if (cpy_r_r56) {
        goto CPyL101;
    } else
        goto CPyL46;
CPyL34: ;
    cpy_r_r57 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyDef_exceptions___insert_overlapping_error_value_check(cpy_r_r57, cpy_r_target);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 104, CPyStatic_exceptions___globals);
        goto CPyL102;
    }
    cpy_r_comp = cpy_r_r58;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPyDef_ops___BasicBlock(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 105, CPyStatic_exceptions___globals);
        goto CPyL103;
    }
    cpy_r_new_block2 = cpy_r_r60;
    cpy_r_r61 = PyList_Append(cpy_r_new_blocks, cpy_r_new_block2);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 106, CPyStatic_exceptions___globals);
        goto CPyL104;
    }
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_ops___Branch(cpy_r_comp, cpy_r_new_block2, cpy_r_new_block, 200, cpy_r_r63, 1);
    CPy_DECREF(cpy_r_comp);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 107, CPyStatic_exceptions___globals);
        goto CPyL105;
    }
    cpy_r_branch = cpy_r_r64;
    cpy_r_r65 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_cur_block);
    cpy_r_r66 = PyList_Append(cpy_r_r65, cpy_r_branch);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_branch);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 114, CPyStatic_exceptions___globals);
        goto CPyL106;
    }
    cpy_r_cur_block = cpy_r_new_block2;
    cpy_r_r68 = CPyStatic_exceptions___globals;
    cpy_r_r69 = CPyStatics[8407]; /* 'err_occurred_op' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 116, CPyStatic_exceptions___globals);
        goto CPyL102;
    }
    if (likely(PyTuple_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 116, CPyStatic_exceptions___globals, "tuple", cpy_r_r70);
        goto CPyL102;
    }
    cpy_r_r72 = PyList_New(0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 116, CPyStatic_exceptions___globals);
        goto CPyL107;
    }
    cpy_r_r73 = ((mypyc___ir___ops___ValueObject *)cpy_r_target)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_target);
    cpy_r_r74 = CPyDef_exceptions___primitive_call(cpy_r_r71, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 116, CPyStatic_exceptions___globals);
        goto CPyL108;
    }
    cpy_r_target = cpy_r_r74;
    cpy_r_r75 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r75);
    CPy_INCREF(cpy_r_target);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_ops___CallC))
        cpy_r_r76 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 117, CPyStatic_exceptions___globals, "mypyc.ir.ops.CallC", cpy_r_target);
        goto CPyL109;
    }
    cpy_r_r77 = PyList_Append(cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 117, CPyStatic_exceptions___globals);
        goto CPyL102;
    }
    cpy_r_variant = 202;
    cpy_r_negated = 1;
    goto CPyL54;
CPyL46: ;
    if (0) {
        goto CPyL54;
    } else
        goto CPyL110;
CPyL47: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r79 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL111;
    }
    cpy_r_r80 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r79)->_error_kind;
    CPyTagged_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_op);
    cpy_r_r81 = CPyTagged_Str(cpy_r_r80);
    CPyTagged_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    cpy_r_r82 = CPyStatics[8998]; /* 'unknown error kind ' */
    cpy_r_r83 = CPyStr_Build(2, cpy_r_r82, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals);
        goto CPyL112;
    }
    PyObject *cpy_r_r87[1] = {cpy_r_r83};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 1, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals);
        goto CPyL112;
    }
    CPy_DECREF(cpy_r_r83);
    CPy_Raise(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 121, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL54: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r90 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 125, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r91 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r90)->_error_kind;
    cpy_r_r92 = cpy_r_r91 != 6;
    if (!cpy_r_r92) goto CPyL61;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r93 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 126, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r94 = CPY_GET_ATTR(cpy_r_r93, CPyType_ops___RegisterOp, 0, mypyc___ir___ops___RegisterOpObject, char); /* is_void */
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 126, CPyStatic_exceptions___globals);
        goto CPyL95;
    }
CPyL58: ;
    cpy_r_r95 = cpy_r_r94 ^ 1;
    if (cpy_r_r95) {
        goto CPyL61;
    } else
        goto CPyL113;
CPyL59: ;
    PyErr_SetString(PyExc_AssertionError, "void op generating errors?");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 126, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL61: ;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r97 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 129, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL95;
    }
    cpy_r_r98 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r97)->_line;
    CPyTagged_INCREF(cpy_r_r98);
    cpy_r_r99 = 2;
    if (cpy_r_variant == CPY_INT_TAG) {
        goto CPyL114;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"variant\" referenced before assignment");
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 128, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r101 = CPyDef_ops___Branch(cpy_r_target, cpy_r_error_label, cpy_r_new_block, cpy_r_variant, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_target);
    CPyTagged_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 128, CPyStatic_exceptions___globals);
        goto CPyL115;
    }
    cpy_r_branch = cpy_r_r101;
    if (cpy_r_negated == 2) {
        goto CPyL116;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"negated\" referenced before assignment");
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 131, CPyStatic_exceptions___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL69: ;
    ((mypyc___ir___ops___BranchObject *)cpy_r_branch)->_negated = cpy_r_negated;
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r104 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 132, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL117;
    }
    cpy_r_r105 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r104)->_line;
    CPyTagged_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyStatic_exceptions___globals;
    cpy_r_r107 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 132, CPyStatic_exceptions___globals);
        goto CPyL118;
    }
    if (likely(PyLong_Check(cpy_r_r108)))
        cpy_r_r109 = CPyTagged_FromObject(cpy_r_r108);
    else {
        CPy_TypeError("int", cpy_r_r108); cpy_r_r109 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 132, CPyStatic_exceptions___globals);
        goto CPyL118;
    }
    cpy_r_r110 = cpy_r_r105 & 1;
    cpy_r_r111 = cpy_r_r110 != 0;
    if (!cpy_r_r111) goto CPyL74;
    cpy_r_r112 = CPyTagged_IsEq_(cpy_r_r105, cpy_r_r109);
    CPyTagged_DECREF(cpy_r_r105);
    CPyTagged_DECREF(cpy_r_r109);
    if (cpy_r_r112) {
        goto CPyL119;
    } else
        goto CPyL75;
CPyL74: ;
    cpy_r_r113 = cpy_r_r105 != cpy_r_r109;
    CPyTagged_DECREF(cpy_r_r105);
    CPyTagged_DECREF(cpy_r_r109);
    if (!cpy_r_r113) goto CPyL119;
CPyL75: ;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_func_name != cpy_r_r114;
    if (!cpy_r_r115) goto CPyL119;
    CPy_INCREF(cpy_r_func_name);
    if (likely(cpy_r_func_name != Py_None))
        cpy_r_r116 = cpy_r_func_name;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 133, CPyStatic_exceptions___globals, "str", cpy_r_func_name);
        goto CPyL117;
    }
    if (likely(PyObject_TypeCheck(cpy_r_op, CPyType_ops___RegisterOp)))
        cpy_r_r117 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 133, CPyStatic_exceptions___globals, "mypyc.ir.ops.RegisterOp", cpy_r_op);
        goto CPyL120;
    }
    cpy_r_r118 = ((mypyc___ir___ops___RegisterOpObject *)cpy_r_r117)->_line;
    CPyTagged_INCREF(cpy_r_r118);
    CPy_DECREF(cpy_r_op);
    cpy_r_r119.f0 = cpy_r_r116;
    cpy_r_r119.f1 = cpy_r_r118;
    CPy_INCREF(cpy_r_r119.f0);
    CPyTagged_INCREF(cpy_r_r119.f1);
    CPy_DECREF(cpy_r_r116);
    CPyTagged_DECREF(cpy_r_r118);
    cpy_r_r120 = PyTuple_New(2);
    if (unlikely(cpy_r_r120 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10826 = cpy_r_r119.f0;
    PyTuple_SET_ITEM(cpy_r_r120, 0, __tmp10826);
    PyObject *__tmp10827 = CPyTagged_StealAsObject(cpy_r_r119.f1);
    PyTuple_SET_ITEM(cpy_r_r120, 1, __tmp10827);
    CPy_DECREF(((mypyc___ir___ops___BranchObject *)cpy_r_branch)->_traceback_entry);
    ((mypyc___ir___ops___BranchObject *)cpy_r_branch)->_traceback_entry = cpy_r_r120;
CPyL79: ;
    cpy_r_r122 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r122);
    CPy_DECREF(cpy_r_cur_block);
    cpy_r_r123 = PyList_Append(cpy_r_r122, cpy_r_branch);
    CPy_DECREF(cpy_r_r122);
    CPy_DECREF(cpy_r_branch);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 134, CPyStatic_exceptions___globals);
        goto CPyL121;
    }
    cpy_r_cur_block = cpy_r_new_block;
CPyL81: ;
    cpy_r_r125 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r125;
    goto CPyL11;
CPyL82: ;
    cpy_r_r126 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r126;
    goto CPyL2;
CPyL83: ;
    return cpy_r_new_blocks;
CPyL84: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL85: ;
    CPyTagged_XDecRef(cpy_r_variant);
    goto CPyL84;
CPyL86: ;
    CPyTagged_XDECREF(cpy_r_variant);
    goto CPyL83;
CPyL87: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    goto CPyL84;
CPyL88: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    goto CPyL84;
CPyL89: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    goto CPyL84;
CPyL90: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
CPyL91: ;
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPy_DECREF(cpy_r_error_label);
    goto CPyL82;
CPyL92: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    goto CPyL84;
CPyL93: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    goto CPyL84;
CPyL94: ;
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_target);
    goto CPyL81;
CPyL95: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL96: ;
    CPyTagged_XDECREF(cpy_r_variant);
    goto CPyL21;
CPyL97: ;
    CPyTagged_XDECREF(cpy_r_variant);
    goto CPyL24;
CPyL98: ;
    CPyTagged_XDECREF(cpy_r_variant);
    CPy_DECREF(cpy_r_target);
    goto CPyL27;
CPyL99: ;
    CPyTagged_DecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL28;
CPyL100: ;
    CPyTagged_DecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL101: ;
    CPyTagged_XDECREF(cpy_r_variant);
    goto CPyL34;
CPyL102: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_comp);
    goto CPyL84;
CPyL104: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_comp);
    CPy_DecRef(cpy_r_new_block2);
    goto CPyL84;
CPyL105: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_new_block2);
    goto CPyL84;
CPyL106: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_new_block2);
    goto CPyL84;
CPyL107: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_r71);
    goto CPyL84;
CPyL108: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL109: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_r75);
    goto CPyL84;
CPyL110: ;
    CPyTagged_XDECREF(cpy_r_variant);
    CPy_DECREF(cpy_r_new_blocks);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPy_DECREF(cpy_r_error_label);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_new_block);
    goto CPyL47;
CPyL111: ;
    CPy_DecRef(cpy_r_op);
    goto CPyL84;
CPyL112: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL84;
CPyL113: ;
    CPyTagged_XDECREF(cpy_r_variant);
    CPy_DECREF(cpy_r_new_blocks);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPy_DECREF(cpy_r_error_label);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_new_block);
    goto CPyL59;
CPyL114: ;
    CPy_DECREF(cpy_r_new_blocks);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPy_DECREF(cpy_r_error_label);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_new_block);
    CPyTagged_DECREF(cpy_r_r98);
    goto CPyL63;
CPyL115: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL116: ;
    CPyTagged_XDECREF(cpy_r_variant);
    CPy_DECREF(cpy_r_new_blocks);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPy_DECREF(cpy_r_error_label);
    CPy_DECREF(cpy_r_op);
    CPy_DECREF(cpy_r_new_block);
    CPy_DECREF(cpy_r_branch);
    goto CPyL67;
CPyL117: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_branch);
    goto CPyL84;
CPyL118: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_branch);
    CPyTagged_DecRef(cpy_r_r105);
    goto CPyL84;
CPyL119: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL79;
CPyL120: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_branch);
    CPy_DecRef(cpy_r_r116);
    goto CPyL84;
CPyL121: ;
    CPyTagged_XDecRef(cpy_r_variant);
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_error_label);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
}

PyObject *CPyPy_exceptions___split_blocks_at_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "default_error_handler", "func_name", 0};
    static CPyArg_Parser parser = {"OOO:split_blocks_at_errors", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_default_error_handler;
    PyObject *obj_func_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_default_error_handler, &obj_func_name)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_default_error_handler;
    if (likely(Py_TYPE(obj_default_error_handler) == CPyType_ops___BasicBlock))
        arg_default_error_handler = obj_default_error_handler;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_default_error_handler); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (PyUnicode_Check(obj_func_name))
        arg_func_name = obj_func_name;
    else {
        arg_func_name = NULL;
    }
    if (arg_func_name != NULL) goto __LL10828;
    if (obj_func_name == Py_None)
        arg_func_name = obj_func_name;
    else {
        arg_func_name = NULL;
    }
    if (arg_func_name != NULL) goto __LL10828;
    CPy_TypeError("str or None", obj_func_name); 
    goto fail;
__LL10828: ;
    PyObject *retval = CPyDef_exceptions___split_blocks_at_errors(arg_blocks, arg_default_error_handler, arg_func_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "split_blocks_at_errors", 64, CPyStatic_exceptions___globals);
    return NULL;
}

PyObject *CPyDef_exceptions___primitive_call(PyObject *cpy_r_desc, PyObject *cpy_r_args, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_desc, 10);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 142, CPyStatic_exceptions___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "primitive_call", 142, CPyStatic_exceptions___globals, "str", cpy_r_r0);
        goto CPyL13;
    }
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 143, CPyStatic_exceptions___globals);
        goto CPyL14;
    }
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_desc, 4);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 144, CPyStatic_exceptions___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_rtypes___RType)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "primitive_call", 144, CPyStatic_exceptions___globals, "mypyc.ir.rtypes.RType", cpy_r_r3);
        goto CPyL15;
    }
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_desc, 14);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 145, CPyStatic_exceptions___globals);
        goto CPyL16;
    }
    if (PyBool_Check(cpy_r_r5))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10829;
    if (PyList_Check(cpy_r_r5))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10829;
    CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "primitive_call", 145, CPyStatic_exceptions___globals, "union[bool, list]", cpy_r_r5);
    goto CPyL16;
__LL10829: ;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_desc, 16);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 146, CPyStatic_exceptions___globals);
        goto CPyL17;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 146, CPyStatic_exceptions___globals);
        goto CPyL17;
    }
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_desc, 12);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 147, CPyStatic_exceptions___globals);
        goto CPyL17;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 147, CPyStatic_exceptions___globals);
        goto CPyL17;
    }
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___CallC(cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r6, cpy_r_r8, cpy_r_r10, cpy_r_line, cpy_r_r11);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 141, CPyStatic_exceptions___globals);
        goto CPyL13;
    }
    return cpy_r_r12;
CPyL13: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
}

PyObject *CPyPy_exceptions___primitive_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"desc", "args", "line", 0};
    static CPyArg_Parser parser = {"OOO:primitive_call", kwlist, 0};
    PyObject *obj_desc;
    PyObject *obj_args;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_desc, &obj_args, &obj_line)) {
        return NULL;
    }
    PyObject * arg_desc;
    if (likely(PyTuple_Check(obj_desc)))
        arg_desc = obj_desc;
    else {
        CPy_TypeError("tuple", obj_desc); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_exceptions___primitive_call(arg_desc, arg_args, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "primitive_call", 140, CPyStatic_exceptions___globals);
    return NULL;
}

char CPyDef_exceptions___adjust_error_kinds(PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL20;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_ops___Op)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 158, CPyStatic_exceptions___globals, "mypyc.ir.ops.Op", cpy_r_r6);
        goto CPyL21;
    }
    cpy_r_op = cpy_r_r7;
    cpy_r_r8 = (PyObject *)CPyType_ops___GetAttr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r12 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 160, CPyStatic_exceptions___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL22;
    }
    cpy_r_r13 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r12)->_class_type;
    cpy_r_r14 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r13)->_class_ir;
    CPy_INCREF(cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r15 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 160, CPyStatic_exceptions___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL23;
    }
    cpy_r_r16 = ((mypyc___ir___ops___GetAttrObject *)cpy_r_r15)->_attr;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_r14, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 160, CPyStatic_exceptions___globals);
        goto CPyL22;
    }
    if (!cpy_r_r17) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___GetAttr))
        cpy_r_r18 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 161, CPyStatic_exceptions___globals, "mypyc.ir.ops.GetAttr", cpy_r_op);
        goto CPyL22;
    }
    CPyTagged_DECREF(((mypyc___ir___ops___GetAttrObject *)cpy_r_r18)->_error_kind);
    ((mypyc___ir___ops___GetAttrObject *)cpy_r_r18)->_error_kind = 0;
CPyL10: ;
    cpy_r_r20 = (PyObject *)CPyType_ops___SetAttr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r24 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 163, CPyStatic_exceptions___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL22;
    }
    cpy_r_r25 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r24)->_class_type;
    cpy_r_r26 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r25)->_class_ir;
    CPy_INCREF(cpy_r_r26);
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r27 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 163, CPyStatic_exceptions___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL25;
    }
    cpy_r_r28 = ((mypyc___ir___ops___SetAttrObject *)cpy_r_r27)->_attr;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_class_ir___ClassIR___is_always_defined(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 163, CPyStatic_exceptions___globals);
        goto CPyL22;
    }
    if (!cpy_r_r29) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___SetAttr))
        cpy_r_r30 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 164, CPyStatic_exceptions___globals, "mypyc.ir.ops.SetAttr", cpy_r_op);
        goto CPyL22;
    }
    CPyTagged_DECREF(((mypyc___ir___ops___SetAttrObject *)cpy_r_r30)->_error_kind);
    ((mypyc___ir___ops___SetAttrObject *)cpy_r_r30)->_error_kind = 0;
    CPy_DECREF(cpy_r_op);
CPyL17: ;
    cpy_r_r32 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r32;
    goto CPyL1;
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL20: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_op);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r14);
    goto CPyL19;
CPyL24: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL17;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_r26);
    goto CPyL19;
}

PyObject *CPyPy_exceptions___adjust_error_kinds(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:adjust_error_kinds", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_ops___BasicBlock))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_block); 
        goto fail;
    }
    char retval = CPyDef_exceptions___adjust_error_kinds(arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "adjust_error_kinds", 152, CPyStatic_exceptions___globals);
    return NULL;
}

PyObject *CPyDef_exceptions___insert_overlapping_error_value_check(PyObject *cpy_r_ops, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_item;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    double cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_errvalue;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_op;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = ((mypyc___ir___ops___ValueObject *)cpy_r_target)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_typ = cpy_r_r0;
    cpy_r_r1 = (PyObject *)CPyType_rtypes___RTuple;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (cpy_r_r4) {
        goto CPyL22;
    } else
        goto CPyL5;
CPyL1: ;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___TupleGet(cpy_r_target, 0, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 171, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    cpy_r_item = cpy_r_r6;
    cpy_r_r7 = PyList_Append(cpy_r_ops, cpy_r_item);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 172, CPyStatic_exceptions___globals);
        goto CPyL23;
    }
    cpy_r_r9 = CPyDef_exceptions___insert_overlapping_error_value_check(cpy_r_ops, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 173, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = ((mypyc___ir___ops___ValueObject *)cpy_r_target)->_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_rtypes___is_float_rprimitive(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 176, CPyStatic_exceptions___globals);
        goto CPyL24;
    }
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r12 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_c_undefined;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'c_undefined' of 'RType' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 177, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
CPyL8: ;
    cpy_r_r13 = PyFloat_FromString(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 177, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    cpy_r_r14 = PyFloat_AsDouble(cpy_r_r13);
    if (cpy_r_r14 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r13); cpy_r_r14 = -113.0;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 == -113.0;
    if (unlikely(cpy_r_r15)) goto CPyL11;
CPyL10: ;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___Float(cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 177, CPyStatic_exceptions___globals);
        goto CPyL21;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r18 = PyErr_Occurred();
    if (unlikely(cpy_r_r18 != NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 177, CPyStatic_exceptions___globals);
        goto CPyL21;
    } else
        goto CPyL10;
CPyL12: ;
    cpy_r_errvalue = cpy_r_r17;
    goto CPyL18;
CPyL13: ;
    cpy_r_r19 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_c_undefined;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", "RType", "c_undefined", 179, CPyStatic_exceptions___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r19);
CPyL14: ;
    cpy_r_r20 = CPyLong_FromStr(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 179, CPyStatic_exceptions___globals);
        goto CPyL24;
    }
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 179, CPyStatic_exceptions___globals);
        goto CPyL24;
    }
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___Integer(cpy_r_r21, cpy_r_typ, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 179, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    cpy_r_errvalue = cpy_r_r23;
CPyL18: ;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPyDef_ops___ComparisonOp(cpy_r_target, cpy_r_errvalue, 200, cpy_r_r24);
    CPy_DECREF(cpy_r_errvalue);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 180, CPyStatic_exceptions___globals);
        goto CPyL21;
    }
    cpy_r_op = cpy_r_r25;
    cpy_r_r26 = PyList_Append(cpy_r_ops, cpy_r_op);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 181, CPyStatic_exceptions___globals);
        goto CPyL25;
    }
    return cpy_r_op;
CPyL21: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL22: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL1;
CPyL23: ;
    CPy_DecRef(cpy_r_item);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_op);
    goto CPyL21;
}

PyObject *CPyPy_exceptions___insert_overlapping_error_value_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ops", "target", 0};
    static CPyArg_Parser parser = {"OO:insert_overlapping_error_value_check", kwlist, 0};
    PyObject *obj_ops;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ops, &obj_target)) {
        return NULL;
    }
    PyObject *arg_ops;
    if (likely(PyList_Check(obj_ops)))
        arg_ops = obj_ops;
    else {
        CPy_TypeError("list", obj_ops); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_ops___Value)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_target); 
        goto fail;
    }
    PyObject *retval = CPyDef_exceptions___insert_overlapping_error_value_check(arg_ops, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/exceptions.py", "insert_overlapping_error_value_check", 167, CPyStatic_exceptions___globals);
    return NULL;
}

char CPyDef_exceptions_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", -1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_exceptions___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 12, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9979]; /* ('FuncIR',) */
    cpy_r_r10 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r11 = CPyStatic_exceptions___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 14, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10290]; /* ('ERR_ALWAYS', 'ERR_FALSE', 'ERR_MAGIC',
                                      'ERR_MAGIC_OVERLAPPING', 'ERR_NEVER',
                                      'NO_TRACEBACK_LINE_NO', 'BasicBlock', 'Branch',
                                      'CallC', 'ComparisonOp', 'Float', 'GetAttr', 'Integer',
                                      'LoadErrorValue', 'Op', 'RegisterOp', 'Return',
                                      'SetAttr', 'TupleGet', 'Value') */
    cpy_r_r14 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r15 = CPyStatic_exceptions___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 15, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10291]; /* ('RTuple', 'bool_rprimitive', 'is_float_rprimitive') */
    cpy_r_r18 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r19 = CPyStatic_exceptions___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 37, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10292]; /* ('err_occurred_op',) */
    cpy_r_r22 = CPyStatics[8289]; /* 'mypyc.primitives.exc_ops' */
    cpy_r_r23 = CPyStatic_exceptions___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 38, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___primitives___exc_ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___primitives___exc_ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10125]; /* ('CFunctionDescription',) */
    cpy_r_r26 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r27 = CPyStatic_exceptions___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/transform/exceptions.py", "<module>", 39, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r28);
    return 1;
CPyL10: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}
