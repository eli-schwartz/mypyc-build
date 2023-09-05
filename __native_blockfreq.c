#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef blockfreqmodule_methods[] = {
    {"frequently_executed_blocks", (PyCFunction)CPyPy_blockfreq___frequently_executed_blocks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef blockfreqmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.analysis.blockfreq",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    blockfreqmodule_methods
};

PyObject *CPyInit_mypyc___analysis___blockfreq(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___analysis___blockfreq_internal) {
        Py_INCREF(CPyModule_mypyc___analysis___blockfreq_internal);
        return CPyModule_mypyc___analysis___blockfreq_internal;
    }
    CPyModule_mypyc___analysis___blockfreq_internal = PyModule_Create(&blockfreqmodule);
    if (unlikely(CPyModule_mypyc___analysis___blockfreq_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___analysis___blockfreq_internal, "__name__");
    CPyStatic_blockfreq___globals = PyModule_GetDict(CPyModule_mypyc___analysis___blockfreq_internal);
    if (unlikely(CPyStatic_blockfreq___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_blockfreq_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___analysis___blockfreq_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___analysis___blockfreq_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_blockfreq___frequently_executed_blocks(PyObject *cpy_r_entry_point) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_worklist;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_block;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 16, CPyStatic_blockfreq___globals);
        goto CPyL25;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 17, CPyStatic_blockfreq___globals);
        goto CPyL26;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    CPy_INCREF(cpy_r_entry_point);
    *(PyObject * *)cpy_r_r3 = cpy_r_entry_point;
    cpy_r_worklist = cpy_r_r1;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL27;
    cpy_r_r8 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 19, CPyStatic_blockfreq___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_ops___BasicBlock))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 19, CPyStatic_blockfreq___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_block = cpy_r_r9;
    cpy_r_r10 = PySet_Contains(cpy_r_result, cpy_r_block);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 20, CPyStatic_blockfreq___globals);
        goto CPyL29;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) goto CPyL30;
    cpy_r_r13 = PySet_Add(cpy_r_result, cpy_r_block);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 22, CPyStatic_blockfreq___globals);
        goto CPyL29;
    }
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_block, CPyType_ops___BasicBlock, 2, mypyc___ir___ops___BasicBlockObject, PyObject *); /* terminator */
    CPy_DECREF(cpy_r_block);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 23, CPyStatic_blockfreq___globals);
        goto CPyL28;
    }
CPyL10: ;
    cpy_r_t = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_ops___Goto;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL13;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Goto))
        cpy_r_r20 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 25, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Goto", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r21 = ((mypyc___ir___ops___GotoObject *)cpy_r_r20)->_label;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_t);
    cpy_r_r22 = PyList_Append(cpy_r_worklist, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 25, CPyStatic_blockfreq___globals);
        goto CPyL28;
    } else
        goto CPyL3;
CPyL13: ;
    cpy_r_r24 = (PyObject *)CPyType_ops___Branch;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL32;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Branch))
        cpy_r_r28 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 27, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Branch", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r29 = ((mypyc___ir___ops___BranchObject *)cpy_r_r28)->_rare;
    if (cpy_r_r29) goto CPyL18;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Branch))
        cpy_r_r30 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 27, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Branch", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r31 = ((mypyc___ir___ops___BranchObject *)cpy_r_r30)->_traceback_entry;
    cpy_r_r32 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r33 = cpy_r_r31 != cpy_r_r32;
    if (!cpy_r_r33) goto CPyL20;
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Branch))
        cpy_r_r34 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 28, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Branch", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r35 = ((mypyc___ir___ops___BranchObject *)cpy_r_r34)->_false;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_t);
    cpy_r_r36 = PyList_Append(cpy_r_worklist, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 28, CPyStatic_blockfreq___globals);
        goto CPyL28;
    } else
        goto CPyL3;
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Branch))
        cpy_r_r38 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 30, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Branch", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r39 = ((mypyc___ir___ops___BranchObject *)cpy_r_r38)->_true;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = PyList_Append(cpy_r_worklist, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 30, CPyStatic_blockfreq___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_ops___Branch))
        cpy_r_r42 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 31, CPyStatic_blockfreq___globals, "mypyc.ir.ops.Branch", cpy_r_t);
        goto CPyL31;
    }
    cpy_r_r43 = ((mypyc___ir___ops___BranchObject *)cpy_r_r42)->_false;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_t);
    cpy_r_r44 = PyList_Append(cpy_r_worklist, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 31, CPyStatic_blockfreq___globals);
        goto CPyL28;
    } else
        goto CPyL3;
CPyL24: ;
    return cpy_r_result;
CPyL25: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL26: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_worklist);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_block);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_block);
    goto CPyL3;
CPyL31: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_worklist);
    CPy_DecRef(cpy_r_t);
    goto CPyL25;
CPyL32: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
}

PyObject *CPyPy_blockfreq___frequently_executed_blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"entry_point", 0};
    static CPyArg_Parser parser = {"O:frequently_executed_blocks", kwlist, 0};
    PyObject *obj_entry_point;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_entry_point)) {
        return NULL;
    }
    PyObject *arg_entry_point;
    if (likely(Py_TYPE(obj_entry_point) == CPyType_ops___BasicBlock))
        arg_entry_point = obj_entry_point;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_entry_point); 
        goto fail;
    }
    PyObject *retval = CPyDef_blockfreq___frequently_executed_blocks(arg_entry_point);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/analysis/blockfreq.py", "frequently_executed_blocks", 15, CPyStatic_blockfreq___globals);
    return NULL;
}

char CPyDef_blockfreq_____top_level__(void) {
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
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "<module>", -1, CPyStatic_blockfreq___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_blockfreq___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "<module>", 10, CPyStatic_blockfreq___globals);
        goto CPyL6;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9907]; /* ('BasicBlock', 'Branch', 'Goto') */
    cpy_r_r10 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r11 = CPyStatic_blockfreq___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/analysis/blockfreq.py", "<module>", 12, CPyStatic_blockfreq___globals);
        goto CPyL6;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r12;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}
