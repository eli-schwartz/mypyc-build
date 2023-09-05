#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef uninitmodule_methods[] = {
    {"insert_uninit_checks", (PyCFunction)CPyPy_uninit___insert_uninit_checks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_blocks_at_uninits", (PyCFunction)CPyPy_uninit___split_blocks_at_uninits, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_for_uninit_using_bitmap", (PyCFunction)CPyPy_uninit___check_for_uninit_using_bitmap, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"update_register_assignments_to_set_bitmap", (PyCFunction)CPyPy_uninit___update_register_assignments_to_set_bitmap, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef uninitmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.transform.uninit",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    uninitmodule_methods
};

PyObject *CPyInit_mypyc___transform___uninit(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___transform___uninit_internal) {
        Py_INCREF(CPyModule_mypyc___transform___uninit_internal);
        return CPyModule_mypyc___transform___uninit_internal;
    }
    CPyModule_mypyc___transform___uninit_internal = PyModule_Create(&uninitmodule);
    if (unlikely(CPyModule_mypyc___transform___uninit_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___transform___uninit_internal, "__name__");
    CPyStatic_uninit___globals = PyModule_GetDict(CPyModule_mypyc___transform___uninit_internal);
    if (unlikely(CPyStatic_uninit___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_uninit_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___transform___uninit_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___transform___uninit_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_uninit___insert_uninit_checks(PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_cfg;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_must_defined;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_dataflow___cleanup_cfg(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 29, CPyStatic_uninit___globals);
        goto CPyL8;
    }
    cpy_r_r2 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_dataflow___get_cfg(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 31, CPyStatic_uninit___globals);
        goto CPyL8;
    }
    cpy_r_cfg = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = PySet_New(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 33, CPyStatic_uninit___globals);
        goto CPyL9;
    }
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_arg_regs;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_func_ir___all_values(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 33, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_dataflow___analyze_must_defined_regs(cpy_r_r4, cpy_r_cfg, cpy_r_r6, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_cfg);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 32, CPyStatic_uninit___globals);
        goto CPyL8;
    }
    cpy_r_must_defined = cpy_r_r11;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypyc___analysis___dataflow___AnalysisResultObject *)cpy_r_must_defined)->_before;
    if (unlikely(cpy_r_r13 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'before' of 'AnalysisResult' undefined");
    } else {
        CPy_INCREF(cpy_r_r13);
    }
    CPy_DECREF(cpy_r_must_defined);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 36, CPyStatic_uninit___globals);
        goto CPyL11;
    }
CPyL6: ;
    cpy_r_r14 = CPyDef_uninit___split_blocks_at_uninits(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 36, CPyStatic_uninit___globals);
        goto CPyL8;
    }
    CPy_DECREF(((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks);
    ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_ir)->_blocks = cpy_r_r14;
    return 1;
CPyL8: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL9: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_cfg);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL8;
}

PyObject *CPyPy_uninit___insert_uninit_checks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:insert_uninit_checks", kwlist, 0};
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
    char retval = CPyDef_uninit___insert_uninit_checks(arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/uninit.py", "insert_uninit_checks", 26, CPyStatic_uninit___globals);
    return NULL;
}

PyObject *CPyDef_uninit___split_blocks_at_uninits(PyObject *cpy_r_blocks, PyObject *cpy_r_pre_must_defined) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_new_blocks;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_init_registers;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_init_registers_set;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_bitmap_registers;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_bitmap_backed;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_ops;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_cur_block;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_op;
    tuple_T2OI cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_defined;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_new_block;
    PyObject *cpy_r_error_block;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyTagged cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_raise_std;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    PyObject *cpy_r_r114;
    int32_t cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyPtr cpy_r_r120;
    int64_t cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    CPyPtr cpy_r_r125;
    int64_t cpy_r_r126;
    CPyTagged cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_new_ops;
    CPyTagged cpy_r_r130;
    CPyPtr cpy_r_r131;
    int64_t cpy_r_r132;
    CPyTagged cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_err;
    int32_t cpy_r_r141;
    char cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    CPyTagged cpy_r_r147;
    CPyTagged cpy_r_r148;
    CPyPtr cpy_r_r149;
    int64_t cpy_r_r150;
    CPyTagged cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    CPyTagged cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyTagged cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 42, CPyStatic_uninit___globals);
        goto CPyL84;
    }
    cpy_r_new_blocks = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 44, CPyStatic_uninit___globals);
        goto CPyL85;
    }
    cpy_r_init_registers = cpy_r_r1;
    cpy_r_r2 = PySet_New(NULL);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 45, CPyStatic_uninit___globals);
        goto CPyL86;
    }
    cpy_r_init_registers_set = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 46, CPyStatic_uninit___globals);
        goto CPyL87;
    }
    cpy_r_bitmap_registers = cpy_r_r3;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 47, CPyStatic_uninit___globals);
        goto CPyL88;
    }
    cpy_r_bitmap_backed = cpy_r_r4;
    cpy_r_r5 = 0;
CPyL6: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL89;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_ops___BasicBlock))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 50, CPyStatic_uninit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r10);
        goto CPyL90;
    }
    cpy_r_block = cpy_r_r11;
    cpy_r_r12 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r12);
    cpy_r_ops = cpy_r_r12;
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 52, CPyStatic_uninit___globals);
        goto CPyL91;
    }
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops = cpy_r_r13;
    CPy_INCREF(cpy_r_block);
    cpy_r_cur_block = cpy_r_block;
    cpy_r_r15 = PyList_Append(cpy_r_new_blocks, cpy_r_cur_block);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 54, CPyStatic_uninit___globals);
        goto CPyL92;
    }
    cpy_r_r17 = 0;
    cpy_r_i = 0;
    cpy_r_r18 = 0;
CPyL11: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_ops)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL93;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_ops, cpy_r_r18);
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_ops___Op)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 56, CPyStatic_uninit___globals, "mypyc.ir.ops.Op", cpy_r_r23);
        goto CPyL94;
    }
    cpy_r_op = cpy_r_r24;
    cpy_r_r25.f0 = cpy_r_block;
    cpy_r_r25.f1 = cpy_r_i;
    CPy_INCREF(cpy_r_r25.f0);
    CPyTagged_INCREF(cpy_r_r25.f1);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r26 = PyTuple_New(2);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10895 = cpy_r_r25.f0;
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp10895);
    PyObject *__tmp10896 = CPyTagged_StealAsObject(cpy_r_r25.f1);
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp10896);
    cpy_r_r27 = CPyDict_GetItem(cpy_r_pre_must_defined, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 57, CPyStatic_uninit___globals);
        goto CPyL95;
    }
    if (likely(PySet_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 57, CPyStatic_uninit___globals, "set", cpy_r_r27);
        goto CPyL95;
    }
    cpy_r_defined = cpy_r_r28;
    cpy_r_r29 = CPyDef_ops___Op___unique_sources(cpy_r_op);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 58, CPyStatic_uninit___globals);
        goto CPyL96;
    }
    cpy_r_r30 = 0;
CPyL17: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL97;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r30);
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_ops___Value)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 58, CPyStatic_uninit___globals, "mypyc.ir.ops.Value", cpy_r_r35);
        goto CPyL98;
    }
    cpy_r_src = cpy_r_r36;
    cpy_r_r37 = (PyObject *)CPyType_ops___Register;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_src)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (!cpy_r_r40) goto CPyL99;
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r41 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 68, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL100;
    }
    cpy_r_r42 = PySet_Contains(cpy_r_defined, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 68, CPyStatic_uninit___globals);
        goto CPyL100;
    }
    cpy_r_r44 = cpy_r_r42;
    cpy_r_r45 = cpy_r_r44 ^ 1;
    if (!cpy_r_r45) goto CPyL99;
    cpy_r_r46 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Branch))
        cpy_r_r50 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 69, CPyStatic_uninit___globals, "mypyc.ir.ops.Branch", cpy_r_op);
        goto CPyL100;
    }
    cpy_r_r51 = ((mypyc___ir___ops___BranchObject *)cpy_r_r50)->_op;
    cpy_r_r52 = cpy_r_r51 == 202;
    if (cpy_r_r52) goto CPyL99;
CPyL26: ;
    cpy_r_r53 = (PyObject *)CPyType_ops___LoadAddress;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) goto CPyL99;
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_ops___BasicBlock(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 72, CPyStatic_uninit___globals);
        goto CPyL100;
    }
    cpy_r_r59 = cpy_r_r58;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_ops___BasicBlock(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 72, CPyStatic_uninit___globals);
        goto CPyL101;
    }
    cpy_r_r62 = cpy_r_r61;
    cpy_r_new_block = cpy_r_r59;
    cpy_r_error_block = cpy_r_r62;
    cpy_r_r63 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_error_handler;
    CPy_INCREF(cpy_r_r63);
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_new_block)->_error_handler);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_new_block)->_error_handler = cpy_r_r63;
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_block)->_error_handler);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_block)->_error_handler = cpy_r_r63;
    cpy_r_r66 = PyList_New(2);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 74, CPyStatic_uninit___globals);
        goto CPyL102;
    }
    cpy_r_r67 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r68 = *(CPyPtr *)cpy_r_r67;
    CPy_INCREF(cpy_r_error_block);
    *(PyObject * *)cpy_r_r68 = cpy_r_error_block;
    cpy_r_r69 = cpy_r_r68 + 8;
    CPy_INCREF(cpy_r_new_block);
    *(PyObject * *)cpy_r_r69 = cpy_r_new_block;
    cpy_r_r70 = PyNumber_InPlaceAdd(cpy_r_new_blocks, cpy_r_r66);
    CPy_DECREF(cpy_r_new_blocks);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 74, CPyStatic_uninit___globals);
        goto CPyL103;
    }
    if (likely(PyList_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 74, CPyStatic_uninit___globals, "list", cpy_r_r70);
        goto CPyL103;
    }
    cpy_r_new_blocks = cpy_r_r71;
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r72 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 76, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL102;
    }
    cpy_r_r73 = PySet_Contains(cpy_r_init_registers_set, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 76, CPyStatic_uninit___globals);
        goto CPyL102;
    }
    cpy_r_r75 = cpy_r_r73;
    cpy_r_r76 = cpy_r_r75 ^ 1;
    if (!cpy_r_r76) goto CPyL39;
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r77 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 77, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL102;
    }
    cpy_r_r78 = PyList_Append(cpy_r_init_registers, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 77, CPyStatic_uninit___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r80 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 78, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL102;
    }
    cpy_r_r81 = PySet_Add(cpy_r_init_registers_set, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 78, CPyStatic_uninit___globals);
        goto CPyL102;
    }
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r83 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 80, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL102;
    }
    cpy_r_r84 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r83)->_type;
    cpy_r_r85 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r84)->_error_overlap;
    if (cpy_r_r85) goto CPyL44;
CPyL41: ;
    cpy_r_r86 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r86);
    CPy_DECREF(cpy_r_cur_block);
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r87 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 83, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL104;
    }
    cpy_r_r88 = ((mypyc___ir___ops___OpObject *)cpy_r_op)->_line;
    CPyTagged_INCREF(cpy_r_r88);
    cpy_r_r89 = 2;
    cpy_r_r90 = CPyDef_ops___Branch(cpy_r_r87, cpy_r_error_block, cpy_r_new_block, 202, cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r87);
    CPyTagged_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 82, CPyStatic_uninit___globals);
        goto CPyL104;
    }
    cpy_r_r91 = PyList_Append(cpy_r_r86, cpy_r_r90);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 81, CPyStatic_uninit___globals);
        goto CPyL105;
    } else
        goto CPyL46;
CPyL44: ;
    cpy_r_r93 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_cur_block);
    CPy_INCREF(cpy_r_src);
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r94 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 94, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL106;
    }
    cpy_r_r95 = ((mypyc___ir___ops___OpObject *)cpy_r_op)->_line;
    CPyTagged_INCREF(cpy_r_r95);
    cpy_r_r96 = CPyDef_uninit___check_for_uninit_using_bitmap(cpy_r_r93, cpy_r_r94, cpy_r_bitmap_registers, cpy_r_bitmap_backed, cpy_r_error_block, cpy_r_new_block, cpy_r_r95);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r94);
    CPyTagged_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 92, CPyStatic_uninit___globals);
        goto CPyL105;
    }
CPyL46: ;
    cpy_r_r97 = CPyStatics[7811]; /* 'UnboundLocalError' */
    cpy_r_r98 = CPyStatics[9006]; /* 'local variable "' */
    if (likely(Py_TYPE(cpy_r_src) == CPyType_ops___Register))
        cpy_r_r99 = cpy_r_src;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 104, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_src);
        goto CPyL105;
    }
    cpy_r_r100 = ((mypyc___ir___ops___RegisterObject *)cpy_r_r99)->_name;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_src);
    cpy_r_r101 = CPyStatics[9007]; /* '" referenced before assignment' */
    cpy_r_r102 = CPyStr_Build(3, cpy_r_r98, cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 104, CPyStatic_uninit___globals);
        goto CPyL107;
    }
    cpy_r_r103 = ((mypyc___ir___ops___OpObject *)cpy_r_op)->_line;
    CPyTagged_INCREF(cpy_r_r103);
    cpy_r_r104 = CPyDef_ops___RaiseStandardError(cpy_r_r97, cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    CPyTagged_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 102, CPyStatic_uninit___globals);
        goto CPyL107;
    }
    cpy_r_raise_std = cpy_r_r104;
    cpy_r_r105 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_block)->_ops;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = PyList_Append(cpy_r_r105, cpy_r_raise_std);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_raise_std);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 107, CPyStatic_uninit___globals);
        goto CPyL107;
    }
    cpy_r_r108 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_error_block)->_ops;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_error_block);
    cpy_r_r109 = CPY_INT_TAG;
    cpy_r_r110 = CPyDef_ops___Unreachable(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 108, CPyStatic_uninit___globals);
        goto CPyL108;
    }
    cpy_r_r111 = PyList_Append(cpy_r_r108, cpy_r_r110);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 108, CPyStatic_uninit___globals);
        goto CPyL109;
    }
    cpy_r_cur_block = cpy_r_new_block;
CPyL53: ;
    cpy_r_r113 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r113;
    goto CPyL17;
CPyL54: ;
    cpy_r_r114 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_cur_block)->_ops;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = PyList_Append(cpy_r_r114, cpy_r_op);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_op);
    cpy_r_r116 = cpy_r_r115 >= 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 110, CPyStatic_uninit___globals);
        goto CPyL92;
    }
    cpy_r_r117 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r117;
    cpy_r_i = cpy_r_r117;
    cpy_r_r118 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r118;
    goto CPyL11;
CPyL56: ;
    cpy_r_r119 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r119;
    goto CPyL6;
CPyL57: ;
    cpy_r_r120 = (CPyPtr)&((PyVarObject *)cpy_r_bitmap_backed)->ob_size;
    cpy_r_r121 = *(int64_t *)cpy_r_r120;
    cpy_r_r122 = cpy_r_r121 << 1;
    cpy_r_r123 = cpy_r_r122 != 0;
    if (!cpy_r_r123) goto CPyL110;
    cpy_r_r124 = CPyDef_uninit___update_register_assignments_to_set_bitmap(cpy_r_new_blocks, cpy_r_bitmap_registers, cpy_r_bitmap_backed);
    CPy_DECREF(cpy_r_bitmap_backed);
    if (unlikely(cpy_r_r124 == 2)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 113, CPyStatic_uninit___globals);
        goto CPyL111;
    }
CPyL59: ;
    cpy_r_r125 = (CPyPtr)&((PyVarObject *)cpy_r_init_registers)->ob_size;
    cpy_r_r126 = *(int64_t *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 << 1;
    cpy_r_r128 = cpy_r_r127 != 0;
    if (!cpy_r_r128) goto CPyL112;
    cpy_r_r129 = PyList_New(0);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 116, CPyStatic_uninit___globals);
        goto CPyL111;
    }
    cpy_r_new_ops = cpy_r_r129;
    cpy_r_r130 = 0;
CPyL62: ;
    cpy_r_r131 = (CPyPtr)&((PyVarObject *)cpy_r_init_registers)->ob_size;
    cpy_r_r132 = *(int64_t *)cpy_r_r131;
    cpy_r_r133 = cpy_r_r132 << 1;
    cpy_r_r134 = (Py_ssize_t)cpy_r_r130 < (Py_ssize_t)cpy_r_r133;
    if (!cpy_r_r134) goto CPyL113;
    cpy_r_r135 = CPyList_GetItemUnsafe(cpy_r_init_registers, cpy_r_r130);
    if (likely(Py_TYPE(cpy_r_r135) == CPyType_ops___Register))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 117, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_r135);
        goto CPyL114;
    }
    cpy_r_reg = cpy_r_r136;
    cpy_r_r137 = ((mypyc___ir___ops___RegisterObject *)cpy_r_reg)->_type;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = CPY_INT_TAG;
    cpy_r_r139 = 2;
    cpy_r_r140 = CPyDef_ops___LoadErrorValue(cpy_r_r137, cpy_r_r138, cpy_r_r139, 1);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 118, CPyStatic_uninit___globals);
        goto CPyL115;
    }
    cpy_r_err = cpy_r_r140;
    cpy_r_r141 = PyList_Append(cpy_r_new_ops, cpy_r_err);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 119, CPyStatic_uninit___globals);
        goto CPyL116;
    }
    cpy_r_r143 = CPY_INT_TAG;
    cpy_r_r144 = CPyDef_ops___Assign(cpy_r_reg, cpy_r_err, cpy_r_r143);
    CPy_DECREF(cpy_r_reg);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 120, CPyStatic_uninit___globals);
        goto CPyL114;
    }
    cpy_r_r145 = PyList_Append(cpy_r_new_ops, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 120, CPyStatic_uninit___globals);
        goto CPyL114;
    }
    cpy_r_r147 = cpy_r_r130 + 2;
    cpy_r_r130 = cpy_r_r147;
    goto CPyL62;
CPyL69: ;
    cpy_r_r148 = 0;
CPyL70: ;
    cpy_r_r149 = (CPyPtr)&((PyVarObject *)cpy_r_bitmap_registers)->ob_size;
    cpy_r_r150 = *(int64_t *)cpy_r_r149;
    cpy_r_r151 = cpy_r_r150 << 1;
    cpy_r_r152 = (Py_ssize_t)cpy_r_r148 < (Py_ssize_t)cpy_r_r151;
    if (!cpy_r_r152) goto CPyL117;
    cpy_r_r153 = CPyList_GetItemUnsafe(cpy_r_bitmap_registers, cpy_r_r148);
    if (likely(Py_TYPE(cpy_r_r153) == CPyType_ops___Register))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 121, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_r153);
        goto CPyL118;
    }
    cpy_r_reg = cpy_r_r154;
    cpy_r_r155 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r155 == NULL)) {
        goto CPyL119;
    } else
        goto CPyL75;
CPyL73: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 122, CPyStatic_uninit___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r157 = CPY_INT_TAG;
    cpy_r_r158 = CPyDef_ops___Integer(0, cpy_r_r155, cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 122, CPyStatic_uninit___globals);
        goto CPyL120;
    }
    cpy_r_r159 = CPY_INT_TAG;
    cpy_r_r160 = CPyDef_ops___Assign(cpy_r_reg, cpy_r_r158, cpy_r_r159);
    CPy_DECREF(cpy_r_reg);
    CPy_DECREF(cpy_r_r158);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 122, CPyStatic_uninit___globals);
        goto CPyL118;
    }
    cpy_r_r161 = PyList_Append(cpy_r_new_ops, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 122, CPyStatic_uninit___globals);
        goto CPyL118;
    }
    cpy_r_r163 = cpy_r_r148 + 2;
    cpy_r_r148 = cpy_r_r163;
    goto CPyL70;
CPyL79: ;
    cpy_r_r164 = CPyList_GetItemShortBorrow(cpy_r_new_blocks, 0);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 123, CPyStatic_uninit___globals);
        goto CPyL121;
    }
    if (likely(Py_TYPE(cpy_r_r164) == CPyType_ops___BasicBlock))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 123, CPyStatic_uninit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r164);
        goto CPyL121;
    }
    cpy_r_r166 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_r165)->_ops;
    CPy_INCREF(cpy_r_r166);
    cpy_r_r167 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r168 = CPyStatics[9015]; /* 0 */
    cpy_r_r169 = CPyStatics[9015]; /* 0 */
    cpy_r_r170 = PySlice_New(cpy_r_r168, cpy_r_r169, cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 123, CPyStatic_uninit___globals);
        goto CPyL122;
    }
    cpy_r_r171 = PyObject_SetItem(cpy_r_r166, cpy_r_r170, cpy_r_new_ops);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r170);
    CPy_DECREF(cpy_r_new_ops);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 123, CPyStatic_uninit___globals);
        goto CPyL85;
    }
CPyL83: ;
    return cpy_r_new_blocks;
CPyL84: ;
    cpy_r_r173 = NULL;
    return cpy_r_r173;
CPyL85: ;
    CPy_DecRef(cpy_r_new_blocks);
    goto CPyL84;
CPyL86: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    goto CPyL84;
CPyL87: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    goto CPyL84;
CPyL88: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    goto CPyL84;
CPyL89: ;
    CPy_DECREF(cpy_r_init_registers_set);
    goto CPyL57;
CPyL90: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    goto CPyL84;
CPyL91: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    goto CPyL84;
CPyL92: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    goto CPyL84;
CPyL93: ;
    CPy_DECREF(cpy_r_block);
    CPy_DECREF(cpy_r_ops);
    CPy_DECREF(cpy_r_cur_block);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL56;
CPyL94: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL84;
CPyL95: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    goto CPyL84;
CPyL96: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    goto CPyL84;
CPyL97: ;
    CPy_DECREF(cpy_r_defined);
    CPy_DECREF(cpy_r_r29);
    goto CPyL54;
CPyL98: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    goto CPyL84;
CPyL99: ;
    CPy_DECREF(cpy_r_src);
    goto CPyL53;
CPyL100: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    goto CPyL84;
CPyL101: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r59);
    goto CPyL84;
CPyL102: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL84;
CPyL103: ;
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_cur_block);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL84;
CPyL104: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_r86);
    goto CPyL84;
CPyL105: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL84;
CPyL106: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_r93);
    goto CPyL84;
CPyL107: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL84;
CPyL108: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_new_block);
    CPy_DecRef(cpy_r_r108);
    goto CPyL84;
CPyL109: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_init_registers_set);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_bitmap_backed);
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_ops);
    CPy_DecRef(cpy_r_op);
    CPy_DecRef(cpy_r_defined);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_new_block);
    goto CPyL84;
CPyL110: ;
    CPy_DECREF(cpy_r_bitmap_backed);
    goto CPyL59;
CPyL111: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_bitmap_registers);
    goto CPyL84;
CPyL112: ;
    CPy_DECREF(cpy_r_init_registers);
    CPy_DECREF(cpy_r_bitmap_registers);
    goto CPyL83;
CPyL113: ;
    CPy_DECREF(cpy_r_init_registers);
    goto CPyL69;
CPyL114: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    goto CPyL84;
CPyL115: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_reg);
    goto CPyL84;
CPyL116: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_init_registers);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_err);
    goto CPyL84;
CPyL117: ;
    CPy_DECREF(cpy_r_bitmap_registers);
    goto CPyL79;
CPyL118: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    goto CPyL84;
CPyL119: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_reg);
    goto CPyL73;
CPyL120: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_bitmap_registers);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_reg);
    goto CPyL84;
CPyL121: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_new_ops);
    goto CPyL84;
CPyL122: ;
    CPy_DecRef(cpy_r_new_blocks);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r166);
    goto CPyL84;
}

PyObject *CPyPy_uninit___split_blocks_at_uninits(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "pre_must_defined", 0};
    static CPyArg_Parser parser = {"OO:split_blocks_at_uninits", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_pre_must_defined;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_pre_must_defined)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_pre_must_defined;
    if (likely(PyDict_Check(obj_pre_must_defined)))
        arg_pre_must_defined = obj_pre_must_defined;
    else {
        CPy_TypeError("dict", obj_pre_must_defined); 
        goto fail;
    }
    PyObject *retval = CPyDef_uninit___split_blocks_at_uninits(arg_blocks, arg_pre_must_defined);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/transform/uninit.py", "split_blocks_at_uninits", 39, CPyStatic_uninit___globals);
    return NULL;
}

char CPyDef_uninit___check_for_uninit_using_bitmap(PyObject *cpy_r_ops, PyObject *cpy_r_src, PyObject *cpy_r_bitmap_registers, PyObject *cpy_r_bitmap_backed, PyObject *cpy_r_error_block, PyObject *cpy_r_ok_block, CPyTagged cpy_r_line) {
    int32_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_n;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    int64_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_masked;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_chk;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    cpy_r_r0 = PySequence_Contains(cpy_r_bitmap_backed, cpy_r_src);
    cpy_r_r1 = cpy_r_r0 >= 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 141, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r2 = cpy_r_r0;
    cpy_r_r3 = cpy_r_r2 ^ 1;
    if (!cpy_r_r3) goto CPyL15;
    cpy_r_r4 = PyList_Append(cpy_r_bitmap_backed, cpy_r_src);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 143, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_bitmap_backed)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyTagged_Subtract(cpy_r_r8, 2);
    cpy_r_r10 = CPyTagged_FloorDivide(cpy_r_r9, 64);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 144, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_n = cpy_r_r10;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_bitmap_registers)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = cpy_r_r13 & 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL6;
    cpy_r_r16 = cpy_r_n & 1;
    cpy_r_r17 = cpy_r_r16 != 0;
    if (!cpy_r_r17) goto CPyL7;
CPyL6: ;
    cpy_r_r18 = CPyTagged_IsLt_(cpy_r_n, cpy_r_r13);
    if (cpy_r_r18) {
        goto CPyL39;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r13 <= (Py_ssize_t)cpy_r_n;
    if (!cpy_r_r19) goto CPyL39;
CPyL8: ;
    cpy_r_r20 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 146, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r22 = CPyStatics[9008]; /* '__locals_bitmap' */
    cpy_r_r23 = CPyTagged_Str(cpy_r_n);
    CPyTagged_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 146, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r24 = CPyStr_Build(2, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 146, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r25 = 2;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_ops___Register(cpy_r_r20, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 146, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r28 = PyList_Append(cpy_r_bitmap_registers, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 146, CPyStatic_uninit___globals);
        goto CPyL38;
    }
CPyL15: ;
    cpy_r_r30 = CPyList_Index(cpy_r_bitmap_backed, cpy_r_src);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 148, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_index = cpy_r_r30;
    cpy_r_r31 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL41;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 150, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r33 = CPyTagged_FloorDivide(cpy_r_index, 64);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 151, CPyStatic_uninit___globals);
        goto CPyL42;
    }
    cpy_r_r34 = CPyList_GetItem(cpy_r_bitmap_registers, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 151, CPyStatic_uninit___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_ops___Register))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 151, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_r34);
        goto CPyL42;
    }
    cpy_r_r36 = CPyTagged_And(cpy_r_index, 62);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_r37 = CPyTagged_Lshift(2, cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 152, CPyStatic_uninit___globals);
        goto CPyL43;
    }
    cpy_r_r38 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r38 == NULL)) {
        goto CPyL44;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 152, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPyDef_ops___Integer(cpy_r_r37, cpy_r_r38, cpy_r_r40);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 152, CPyStatic_uninit___globals);
        goto CPyL43;
    }
    cpy_r_r42 = CPyDef_ops___IntOp(cpy_r_r31, cpy_r_r35, cpy_r_r41, 400, cpy_r_line);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 149, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_masked = cpy_r_r42;
    cpy_r_r43 = PyList_Append(cpy_r_ops, cpy_r_masked);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 156, CPyStatic_uninit___globals);
        goto CPyL45;
    }
    cpy_r_r45 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 157, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPyDef_ops___Integer(0, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 157, CPyStatic_uninit___globals);
        goto CPyL45;
    }
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = CPyDef_ops___ComparisonOp(cpy_r_masked, cpy_r_r48, 200, cpy_r_r49);
    CPy_DECREF(cpy_r_masked);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 157, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_chk = cpy_r_r50;
    cpy_r_r51 = PyList_Append(cpy_r_ops, cpy_r_chk);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 158, CPyStatic_uninit___globals);
        goto CPyL47;
    }
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = 2;
    cpy_r_r55 = CPyDef_ops___Branch(cpy_r_chk, cpy_r_error_block, cpy_r_ok_block, 200, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_chk);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 159, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    cpy_r_r56 = PyList_Append(cpy_r_ops, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 159, CPyStatic_uninit___globals);
        goto CPyL38;
    }
    return 1;
CPyL38: ;
    cpy_r_r58 = 2;
    return cpy_r_r58;
CPyL39: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL15;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL9;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL17;
CPyL42: ;
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r35);
    CPyTagged_DecRef(cpy_r_r37);
    goto CPyL24;
CPyL45: ;
    CPy_DecRef(cpy_r_masked);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_masked);
    goto CPyL30;
CPyL47: ;
    CPy_DecRef(cpy_r_chk);
    goto CPyL38;
}

PyObject *CPyPy_uninit___check_for_uninit_using_bitmap(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ops", "src", "bitmap_registers", "bitmap_backed", "error_block", "ok_block", "line", 0};
    static CPyArg_Parser parser = {"OOOOOOO:check_for_uninit_using_bitmap", kwlist, 0};
    PyObject *obj_ops;
    PyObject *obj_src;
    PyObject *obj_bitmap_registers;
    PyObject *obj_bitmap_backed;
    PyObject *obj_error_block;
    PyObject *obj_ok_block;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ops, &obj_src, &obj_bitmap_registers, &obj_bitmap_backed, &obj_error_block, &obj_ok_block, &obj_line)) {
        return NULL;
    }
    PyObject *arg_ops;
    if (likely(PyList_Check(obj_ops)))
        arg_ops = obj_ops;
    else {
        CPy_TypeError("list", obj_ops); 
        goto fail;
    }
    PyObject *arg_src;
    if (likely(Py_TYPE(obj_src) == CPyType_ops___Register))
        arg_src = obj_src;
    else {
        CPy_TypeError("mypyc.ir.ops.Register", obj_src); 
        goto fail;
    }
    PyObject *arg_bitmap_registers;
    if (likely(PyList_Check(obj_bitmap_registers)))
        arg_bitmap_registers = obj_bitmap_registers;
    else {
        CPy_TypeError("list", obj_bitmap_registers); 
        goto fail;
    }
    PyObject *arg_bitmap_backed;
    if (likely(PyList_Check(obj_bitmap_backed)))
        arg_bitmap_backed = obj_bitmap_backed;
    else {
        CPy_TypeError("list", obj_bitmap_backed); 
        goto fail;
    }
    PyObject *arg_error_block;
    if (likely(Py_TYPE(obj_error_block) == CPyType_ops___BasicBlock))
        arg_error_block = obj_error_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_error_block); 
        goto fail;
    }
    PyObject *arg_ok_block;
    if (likely(Py_TYPE(obj_ok_block) == CPyType_ops___BasicBlock))
        arg_ok_block = obj_ok_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_ok_block); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_uninit___check_for_uninit_using_bitmap(arg_ops, arg_src, arg_bitmap_registers, arg_bitmap_backed, arg_error_block, arg_ok_block, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/uninit.py", "check_for_uninit_using_bitmap", 128, CPyStatic_uninit___globals);
    return NULL;
}

char CPyDef_uninit___update_register_assignments_to_set_bitmap(PyObject *cpy_r_blocks, PyObject *cpy_r_bitmap_registers, PyObject *cpy_r_bitmap_backed) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_block;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_op;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_new_ops;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_op_2;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_reg;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_new;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_blocks)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL47;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_blocks, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_ops___BasicBlock))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 171, CPyStatic_uninit___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r5);
        goto CPyL48;
    }
    cpy_r_block = cpy_r_r6;
    cpy_r_r7 = 0;
    cpy_r_r8 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL49;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_ops___Op)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 172, CPyStatic_uninit___globals, "mypyc.ir.ops.Op", cpy_r_r14);
        goto CPyL50;
    }
    cpy_r_op = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_op)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (cpy_r_r19) {
        goto CPyL8;
    } else
        goto CPyL51;
CPyL7: ;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL8: ;
    if (likely(Py_TYPE(cpy_r_op) == CPyType_ops___Assign))
        cpy_r_r21 = cpy_r_op;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 172, CPyStatic_uninit___globals, "mypyc.ir.ops.Assign", cpy_r_op);
        goto CPyL52;
    }
    cpy_r_r22 = ((mypyc___ir___ops___AssignObject *)cpy_r_r21)->_dest;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_op);
    cpy_r_r23 = PySequence_Contains(cpy_r_bitmap_backed, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 172, CPyStatic_uninit___globals);
        goto CPyL50;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_r20 = cpy_r_r25;
CPyL11: ;
    if (cpy_r_r20) {
        goto CPyL53;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r7 = 1;
    goto CPyL14;
CPyL13: ;
    cpy_r_r26 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r26;
    goto CPyL4;
CPyL14: ;
    if (!cpy_r_r7) goto CPyL54;
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 173, CPyStatic_uninit___globals);
        goto CPyL55;
    }
    cpy_r_new_ops = cpy_r_r27;
    cpy_r_r28 = ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = 0;
CPyL17: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r28)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL56;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r28, cpy_r_r29);
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_ops___Op)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 174, CPyStatic_uninit___globals, "mypyc.ir.ops.Op", cpy_r_r34);
        goto CPyL57;
    }
    cpy_r_op_2 = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_ops___Assign;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_op_2)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_op_2) == CPyType_ops___Assign))
        cpy_r_r40 = cpy_r_op_2;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 175, CPyStatic_uninit___globals, "mypyc.ir.ops.Assign", cpy_r_op_2);
        goto CPyL58;
    }
    cpy_r_r41 = ((mypyc___ir___ops___AssignObject *)cpy_r_r40)->_dest;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = PySequence_Contains(cpy_r_bitmap_backed, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 175, CPyStatic_uninit___globals);
        goto CPyL58;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_op_2) == CPyType_ops___Assign))
        cpy_r_r45 = cpy_r_op_2;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 176, CPyStatic_uninit___globals, "mypyc.ir.ops.Assign", cpy_r_op_2);
        goto CPyL58;
    }
    cpy_r_r46 = ((mypyc___ir___ops___AssignObject *)cpy_r_r45)->_dest;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyList_Index(cpy_r_bitmap_backed, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 176, CPyStatic_uninit___globals);
        goto CPyL58;
    }
    cpy_r_index = cpy_r_r47;
    CPy_INCREF(cpy_r_op_2);
    if (likely(Py_TYPE(cpy_r_op_2) == CPyType_ops___Assign))
        cpy_r_r48 = cpy_r_op_2;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 177, CPyStatic_uninit___globals, "mypyc.ir.ops.Assign", cpy_r_op_2);
        goto CPyL59;
    }
    cpy_r_r49 = PyList_Append(cpy_r_new_ops, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 177, CPyStatic_uninit___globals);
        goto CPyL59;
    }
    cpy_r_r51 = CPyTagged_FloorDivide(cpy_r_index, 64);
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 178, CPyStatic_uninit___globals);
        goto CPyL59;
    }
    cpy_r_r52 = CPyList_GetItem(cpy_r_bitmap_registers, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 178, CPyStatic_uninit___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_ops___Register))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 178, CPyStatic_uninit___globals, "mypyc.ir.ops.Register", cpy_r_r52);
        goto CPyL59;
    }
    cpy_r_reg = cpy_r_r53;
    cpy_r_r54 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r54 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 180, CPyStatic_uninit___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r56 = CPyTagged_And(cpy_r_index, 62);
    CPyTagged_DECREF(cpy_r_index);
    cpy_r_r57 = CPyTagged_Lshift(2, cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 182, CPyStatic_uninit___globals);
        goto CPyL61;
    }
    cpy_r_r58 = CPyStatic_rtypes___bitmap_rprimitive;
    if (unlikely(cpy_r_r58 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bitmap_rprimitive\" was not set");
    cpy_r_r59 = 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 182, CPyStatic_uninit___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = CPyDef_ops___Integer(cpy_r_r57, cpy_r_r58, cpy_r_r60);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 182, CPyStatic_uninit___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_op_2) == CPyType_ops___Assign))
        cpy_r_r62 = cpy_r_op_2;
    else {
        CPy_TypeErrorTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 184, CPyStatic_uninit___globals, "mypyc.ir.ops.Assign", cpy_r_op_2);
        goto CPyL63;
    }
    cpy_r_r63 = ((mypyc___ir___ops___AssignObject *)cpy_r_r62)->_line;
    CPyTagged_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_op_2);
    cpy_r_r64 = CPyDef_ops___IntOp(cpy_r_r54, cpy_r_reg, cpy_r_r61, 402, cpy_r_r63);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 179, CPyStatic_uninit___globals);
        goto CPyL64;
    }
    cpy_r_new = cpy_r_r64;
    cpy_r_r65 = PyList_Append(cpy_r_new_ops, cpy_r_new);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 186, CPyStatic_uninit___globals);
        goto CPyL65;
    }
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = CPyDef_ops___Assign(cpy_r_reg, cpy_r_new, cpy_r_r67);
    CPy_DECREF(cpy_r_reg);
    CPy_DECREF(cpy_r_new);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 187, CPyStatic_uninit___globals);
        goto CPyL57;
    }
    cpy_r_r69 = PyList_Append(cpy_r_new_ops, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 187, CPyStatic_uninit___globals);
        goto CPyL57;
    } else
        goto CPyL44;
CPyL43: ;
    cpy_r_r71 = PyList_Append(cpy_r_new_ops, cpy_r_op_2);
    CPy_DECREF(cpy_r_op_2);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 189, CPyStatic_uninit___globals);
        goto CPyL57;
    }
CPyL44: ;
    cpy_r_r73 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r73;
    goto CPyL17;
CPyL45: ;
    CPy_DECREF(((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops);
    ((mypyc___ir___ops___BasicBlockObject *)cpy_r_block)->_ops = cpy_r_new_ops;
    CPy_DECREF(cpy_r_block);
CPyL46: ;
    cpy_r_r75 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r75;
    goto CPyL1;
CPyL47: ;
    return 1;
CPyL48: ;
    cpy_r_r76 = 2;
    return cpy_r_r76;
CPyL49: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL14;
CPyL50: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r8);
    goto CPyL48;
CPyL51: ;
    CPy_DECREF(cpy_r_op);
    goto CPyL7;
CPyL52: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_op);
    goto CPyL48;
CPyL53: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL54: ;
    CPy_DECREF(cpy_r_block);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_block);
    goto CPyL48;
CPyL56: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL45;
CPyL57: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    goto CPyL48;
CPyL58: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    goto CPyL48;
CPyL59: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    CPyTagged_DecRef(cpy_r_index);
    goto CPyL48;
CPyL60: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    CPyTagged_DecRef(cpy_r_index);
    CPy_DecRef(cpy_r_reg);
    goto CPyL31;
CPyL61: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    CPy_DecRef(cpy_r_reg);
    goto CPyL48;
CPyL62: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    CPy_DecRef(cpy_r_reg);
    CPyTagged_DecRef(cpy_r_r57);
    goto CPyL35;
CPyL63: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_op_2);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_r61);
    goto CPyL48;
CPyL64: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_reg);
    goto CPyL48;
CPyL65: ;
    CPy_DecRef(cpy_r_block);
    CPy_DecRef(cpy_r_new_ops);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_reg);
    CPy_DecRef(cpy_r_new);
    goto CPyL48;
}

PyObject *CPyPy_uninit___update_register_assignments_to_set_bitmap(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"blocks", "bitmap_registers", "bitmap_backed", 0};
    static CPyArg_Parser parser = {"OOO:update_register_assignments_to_set_bitmap", kwlist, 0};
    PyObject *obj_blocks;
    PyObject *obj_bitmap_registers;
    PyObject *obj_bitmap_backed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_blocks, &obj_bitmap_registers, &obj_bitmap_backed)) {
        return NULL;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_bitmap_registers;
    if (likely(PyList_Check(obj_bitmap_registers)))
        arg_bitmap_registers = obj_bitmap_registers;
    else {
        CPy_TypeError("list", obj_bitmap_registers); 
        goto fail;
    }
    PyObject *arg_bitmap_backed;
    if (likely(PyList_Check(obj_bitmap_backed)))
        arg_bitmap_backed = obj_bitmap_backed;
    else {
        CPy_TypeError("list", obj_bitmap_backed); 
        goto fail;
    }
    char retval = CPyDef_uninit___update_register_assignments_to_set_bitmap(arg_blocks, arg_bitmap_registers, arg_bitmap_backed);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/transform/uninit.py", "update_register_assignments_to_set_bitmap", 162, CPyStatic_uninit___globals);
    return NULL;
}

char CPyDef_uninit_____top_level__(void) {
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
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", -1, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_uninit___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 3, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10297]; /* ('AnalysisDict', 'analyze_must_defined_regs',
                                     'cleanup_cfg', 'get_cfg') */
    cpy_r_r10 = CPyStatics[6658]; /* 'mypyc.analysis.dataflow' */
    cpy_r_r11 = CPyStatic_uninit___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 5, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___analysis___dataflow = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___analysis___dataflow);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10298]; /* ('BITMAP_BITS',) */
    cpy_r_r14 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r15 = CPyStatic_uninit___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 6, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___common = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10295]; /* ('FuncIR', 'all_values') */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_uninit___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 7, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10299]; /* ('Assign', 'BasicBlock', 'Branch', 'ComparisonOp',
                                      'Integer', 'IntOp', 'LoadAddress', 'LoadErrorValue',
                                      'Op', 'RaiseStandardError', 'Register', 'Unreachable',
                                      'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_uninit___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 8, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10300]; /* ('bitmap_rprimitive',) */
    cpy_r_r26 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r27 = CPyStatic_uninit___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/transform/uninit.py", "<module>", 23, CPyStatic_uninit___globals);
        goto CPyL10;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r28);
    return 1;
CPyL10: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
}
