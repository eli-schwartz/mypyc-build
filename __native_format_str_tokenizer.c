#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef format_str_tokenizermodule_methods[] = {
    {"generate_format_ops", (PyCFunction)CPyPy_format_str_tokenizer___generate_format_ops, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"tokenizer_printf_style", (PyCFunction)CPyPy_format_str_tokenizer___tokenizer_printf_style, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"tokenizer_format_call", (PyCFunction)CPyPy_format_str_tokenizer___tokenizer_format_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"convert_format_expr_to_str", (PyCFunction)CPyPy_format_str_tokenizer___convert_format_expr_to_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"join_formatted_strings", (PyCFunction)CPyPy_format_str_tokenizer___join_formatted_strings, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"convert_format_expr_to_bytes", (PyCFunction)CPyPy_format_str_tokenizer___convert_format_expr_to_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"join_formatted_bytes", (PyCFunction)CPyPy_format_str_tokenizer___join_formatted_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef format_str_tokenizermodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.format_str_tokenizer",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    format_str_tokenizermodule_methods
};

PyObject *CPyInit_mypyc___irbuild___format_str_tokenizer(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___format_str_tokenizer_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___format_str_tokenizer_internal);
        return CPyModule_mypyc___irbuild___format_str_tokenizer_internal;
    }
    CPyModule_mypyc___irbuild___format_str_tokenizer_internal = PyModule_Create(&format_str_tokenizermodule);
    if (unlikely(CPyModule_mypyc___irbuild___format_str_tokenizer_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___format_str_tokenizer_internal, "__name__");
    CPyStatic_format_str_tokenizer___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___format_str_tokenizer_internal);
    if (unlikely(CPyStatic_format_str_tokenizer___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_format_str_tokenizer_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___format_str_tokenizer_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___format_str_tokenizer_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_format_str_tokenizer___FormatOp___STR);
    CPyStatic_format_str_tokenizer___FormatOp___STR = NULL;
    CPy_XDECREF(CPyStatic_format_str_tokenizer___FormatOp___INT);
    CPyStatic_format_str_tokenizer___FormatOp___INT = NULL;
    CPy_XDECREF(CPyStatic_format_str_tokenizer___FormatOp___BYTES);
    CPyStatic_format_str_tokenizer___FormatOp___BYTES = NULL;
    CPy_XDECREF(CPyStatic_format_str_tokenizer___EMPTY_CONTEXT);
    CPyStatic_format_str_tokenizer___EMPTY_CONTEXT = NULL;
    Py_CLEAR(CPyType_format_str_tokenizer___FormatOp);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___generate_format_ops(PyObject *cpy_r_specifiers) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_format_ops;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_format_op;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 52, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    cpy_r_format_ops = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL40;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 53, CPyStatic_format_str_tokenizer___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r6);
        goto CPyL42;
    }
    cpy_r_spec = cpy_r_r7;
    cpy_r_r8 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[8321]; /* '%s' */
    cpy_r_r10 = PyUnicode_Compare(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -1;
    if (!cpy_r_r11) goto CPyL7;
    cpy_r_r12 = PyErr_Occurred();
    cpy_r_r13 = cpy_r_r12 != NULL;
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r14 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 55, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
CPyL7: ;
    cpy_r_r15 = cpy_r_r10 == 0;
    if (cpy_r_r15) goto CPyL44;
    cpy_r_r16 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL11;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 55, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
CPyL11: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (cpy_r_r23) {
        goto CPyL44;
    } else
        goto CPyL16;
CPyL12: ;
    cpy_r_r24 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL45;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 56, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL15: ;
    CPy_INCREF(cpy_r_r24);
    cpy_r_format_op = cpy_r_r24;
    goto CPyL38;
CPyL16: ;
    cpy_r_r26 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[7941]; /* '%d' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL19;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL19;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 57, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
CPyL19: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (cpy_r_r33) {
        goto CPyL46;
    } else
        goto CPyL24;
CPyL20: ;
    cpy_r_r34 = CPyStatic_format_str_tokenizer___FormatOp___INT;
    if (unlikely(cpy_r_r34 == NULL)) {
        goto CPyL47;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INT\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 58, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL23: ;
    CPy_INCREF(cpy_r_r34);
    cpy_r_format_op = cpy_r_r34;
    goto CPyL38;
CPyL24: ;
    cpy_r_r36 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[8322]; /* '%b' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL27;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL27;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 59, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
CPyL27: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (cpy_r_r43) {
        goto CPyL48;
    } else
        goto CPyL32;
CPyL28: ;
    cpy_r_r44 = CPyStatic_format_str_tokenizer___FormatOp___BYTES;
    if (unlikely(cpy_r_r44 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BYTES\" was not set");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 60, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL31: ;
    CPy_INCREF(cpy_r_r44);
    cpy_r_format_op = cpy_r_r44;
    goto CPyL38;
CPyL32: ;
    cpy_r_r46 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_spec);
    cpy_r_r47 = CPyStr_IsTrue(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (cpy_r_r47) {
        goto CPyL50;
    } else
        goto CPyL34;
CPyL33: ;
    cpy_r_r48 = Py_None;
    CPy_INCREF(cpy_r_r48);
    return cpy_r_r48;
CPyL34: ;
    cpy_r_r49 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r49 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 64, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_INCREF(cpy_r_r49);
    cpy_r_format_op = cpy_r_r49;
CPyL38: ;
    cpy_r_r51 = PyList_Append(cpy_r_format_ops, cpy_r_format_op);
    CPy_DECREF(cpy_r_format_op);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 65, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    cpy_r_r53 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r53;
    goto CPyL2;
CPyL40: ;
    return cpy_r_format_ops;
CPyL41: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL42: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL41;
CPyL43: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_spec);
    goto CPyL41;
CPyL44: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL12;
CPyL45: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL13;
CPyL46: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL20;
CPyL47: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL21;
CPyL48: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL28;
CPyL49: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL29;
CPyL50: ;
    CPy_DECREF(cpy_r_format_ops);
    goto CPyL33;
CPyL51: ;
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL35;
}

PyObject *CPyPy_format_str_tokenizer___generate_format_ops(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"specifiers", 0};
    static CPyArg_Parser parser = {"O:generate_format_ops", kwlist, 0};
    PyObject *obj_specifiers;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_specifiers)) {
        return NULL;
    }
    PyObject *arg_specifiers;
    if (likely(PyList_Check(obj_specifiers)))
        arg_specifiers = obj_specifiers;
    else {
        CPy_TypeError("list", obj_specifiers); 
        goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___generate_format_ops(arg_specifiers);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "generate_format_ops", 47, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___tokenizer_printf_style(PyObject *cpy_r_format_str) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_specifiers;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_format_ops;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_last_end;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_spec;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_cur_start;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 75, CPyStatic_format_str_tokenizer___globals);
        goto CPyL19;
    }
    cpy_r_literals = cpy_r_r0;
    cpy_r_r1 = CPyDef_checkstrformat___parse_conversion_specifiers(cpy_r_format_str);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 76, CPyStatic_format_str_tokenizer___globals);
        goto CPyL20;
    }
    cpy_r_specifiers = cpy_r_r1;
    cpy_r_r2 = CPyDef_format_str_tokenizer___generate_format_ops(cpy_r_specifiers);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 77, CPyStatic_format_str_tokenizer___globals);
        goto CPyL21;
    }
    cpy_r_format_ops = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_format_ops == cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL22;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_last_end = 0;
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL23;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 82, CPyStatic_format_str_tokenizer___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r11);
        goto CPyL24;
    }
    cpy_r_spec = cpy_r_r12;
    cpy_r_r13 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_start_pos;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_cur_start = cpy_r_r13;
    cpy_r_r14 = CPyStr_GetSlice(cpy_r_format_str, cpy_r_last_end, cpy_r_cur_start);
    CPyTagged_DECREF(cpy_r_last_end);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 84, CPyStatic_format_str_tokenizer___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 84, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r14);
        goto CPyL25;
    }
    cpy_r_r16 = PyList_Append(cpy_r_literals, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 84, CPyStatic_format_str_tokenizer___globals);
        goto CPyL25;
    }
    cpy_r_r18 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_spec);
    cpy_r_r19 = CPyStr_Size_size_t(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 85, CPyStatic_format_str_tokenizer___globals);
        goto CPyL26;
    }
    cpy_r_r21 = cpy_r_r19 << 1;
    cpy_r_r22 = CPyTagged_Add(cpy_r_cur_start, cpy_r_r21);
    CPyTagged_DECREF(cpy_r_cur_start);
    cpy_r_last_end = cpy_r_r22;
    cpy_r_r23 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r23;
    goto CPyL6;
CPyL14: ;
    cpy_r_r24 = CPyStr_GetSlice(cpy_r_format_str, cpy_r_last_end, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_last_end);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 86, CPyStatic_format_str_tokenizer___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 86, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r24);
        goto CPyL27;
    }
    cpy_r_r26 = PyList_Append(cpy_r_literals, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 86, CPyStatic_format_str_tokenizer___globals);
        goto CPyL27;
    }
    if (likely(cpy_r_format_ops != Py_None))
        cpy_r_r28 = cpy_r_format_ops;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 88, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_format_ops);
        goto CPyL20;
    }
    cpy_r_r29.f0 = cpy_r_literals;
    cpy_r_r29.f1 = cpy_r_r28;
    CPy_INCREF(cpy_r_r29.f0);
    CPy_INCREF(cpy_r_r29.f1);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = PyTuple_New(2);
    if (unlikely(cpy_r_r30 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10186 = cpy_r_r29.f0;
    PyTuple_SET_ITEM(cpy_r_r30, 0, __tmp10186);
    PyObject *__tmp10187 = cpy_r_r29.f1;
    PyTuple_SET_ITEM(cpy_r_r30, 1, __tmp10187);
    return cpy_r_r30;
CPyL19: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL20: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_specifiers);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_specifiers);
    CPy_DECREF(cpy_r_format_ops);
    goto CPyL4;
CPyL23: ;
    CPy_DECREF(cpy_r_specifiers);
    goto CPyL14;
CPyL24: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_format_ops);
    CPyTagged_DecRef(cpy_r_last_end);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_spec);
    CPyTagged_DecRef(cpy_r_cur_start);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_format_ops);
    CPyTagged_DecRef(cpy_r_cur_start);
    goto CPyL19;
CPyL27: ;
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL19;
}

PyObject *CPyPy_format_str_tokenizer___tokenizer_printf_style(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"format_str", 0};
    static CPyArg_Parser parser = {"O:tokenizer_printf_style", kwlist, 0};
    PyObject *obj_format_str;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_format_str)) {
        return NULL;
    }
    PyObject *arg_format_str;
    if (likely(PyUnicode_Check(obj_format_str)))
        arg_format_str = obj_format_str;
    else {
        CPy_TypeError("str", obj_format_str); 
        goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___tokenizer_printf_style(arg_format_str);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_printf_style", 69, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___tokenizer_format_call(PyObject *cpy_r_format_str) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_specifiers;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_format_ops;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_literals;
    CPyTagged cpy_r_last_end;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_spec;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    cpy_r_r0 = CPyStatic_format_str_tokenizer___EMPTY_CONTEXT;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"EMPTY_CONTEXT\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 113, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 113, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_mypy___errors___Errors(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 113, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 113, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    cpy_r_r7 = CPyDef_messages___MessageBuilder(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 113, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_checkstrformat___parse_format_value(cpy_r_format_str, cpy_r_r0, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 112, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    cpy_r_specifiers = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_specifiers == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL40;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL10: ;
    CPy_INCREF(cpy_r_specifiers);
    if (likely(cpy_r_specifiers != Py_None))
        cpy_r_r13 = cpy_r_specifiers;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 117, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_specifiers);
        goto CPyL41;
    }
    cpy_r_r14 = CPyDef_format_str_tokenizer___generate_format_ops(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 117, CPyStatic_format_str_tokenizer___globals);
        goto CPyL41;
    }
    cpy_r_format_ops = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_format_ops == cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL42;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL14: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 121, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
    cpy_r_literals = cpy_r_r18;
    cpy_r_last_end = 0;
    if (likely(cpy_r_specifiers != Py_None))
        cpy_r_r19 = cpy_r_specifiers;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 123, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_specifiers);
        goto CPyL44;
    }
    cpy_r_r20 = 0;
CPyL17: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL45;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(Py_TYPE(cpy_r_r25) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 123, CPyStatic_format_str_tokenizer___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r25);
        goto CPyL46;
    }
    cpy_r_spec = cpy_r_r26;
    cpy_r_r27 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_start_pos;
    cpy_r_r28 = CPyTagged_Subtract(cpy_r_r27, 2);
    cpy_r_r29 = CPyStr_GetSlice(cpy_r_format_str, cpy_r_last_end, cpy_r_r28);
    CPyTagged_DECREF(cpy_r_last_end);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 125, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 125, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r29);
        goto CPyL47;
    }
    cpy_r_r31 = PyList_Append(cpy_r_literals, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 125, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    cpy_r_r33 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_start_pos;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_whole_seq;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_spec);
    cpy_r_r35 = CPyStr_Size_size_t(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 126, CPyStatic_format_str_tokenizer___globals);
        goto CPyL48;
    }
    cpy_r_r37 = cpy_r_r35 << 1;
    cpy_r_r38 = CPyTagged_Add(cpy_r_r33, cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r33);
    cpy_r_r39 = CPyTagged_Add(cpy_r_r38, 2);
    CPyTagged_DECREF(cpy_r_r38);
    cpy_r_last_end = cpy_r_r39;
    cpy_r_r40 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r40;
    goto CPyL17;
CPyL25: ;
    cpy_r_r41 = CPyStr_GetSlice(cpy_r_format_str, cpy_r_last_end, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_last_end);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 127, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 127, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r41);
        goto CPyL49;
    }
    cpy_r_r43 = PyList_Append(cpy_r_literals, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 127, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_literals)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = PyList_New(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 129, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r48 = 0;
CPyL30: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_literals)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL50;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_literals, cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 129, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r53);
        goto CPyL51;
    }
    cpy_r_x = cpy_r_r54;
    cpy_r_r55 = CPyStatics[8323]; /* '{{' */
    cpy_r_r56 = CPyStatics[1405]; /* '{' */
    cpy_r_r57 = PyUnicode_Replace(cpy_r_x, cpy_r_r55, cpy_r_r56, -1);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 129, CPyStatic_format_str_tokenizer___globals);
        goto CPyL51;
    }
    cpy_r_r58 = CPyStatics[8324]; /* '}}' */
    cpy_r_r59 = CPyStatics[1406]; /* '}' */
    cpy_r_r60 = PyUnicode_Replace(cpy_r_r57, cpy_r_r58, cpy_r_r59, -1);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 129, CPyStatic_format_str_tokenizer___globals);
        goto CPyL51;
    }
    cpy_r_r61 = CPyList_SetItemUnsafe(cpy_r_r47, cpy_r_r48, cpy_r_r60);
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 129, CPyStatic_format_str_tokenizer___globals);
        goto CPyL51;
    }
    cpy_r_r62 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r62;
    goto CPyL30;
CPyL36: ;
    cpy_r_literals = cpy_r_r47;
    if (likely(cpy_r_format_ops != Py_None))
        cpy_r_r63 = cpy_r_format_ops;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 131, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_format_ops);
        goto CPyL52;
    }
    cpy_r_r64.f0 = cpy_r_literals;
    cpy_r_r64.f1 = cpy_r_r63;
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = PyTuple_New(2);
    if (unlikely(cpy_r_r65 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10188 = cpy_r_r64.f0;
    PyTuple_SET_ITEM(cpy_r_r65, 0, __tmp10188);
    PyObject *__tmp10189 = cpy_r_r64.f1;
    PyTuple_SET_ITEM(cpy_r_r65, 1, __tmp10189);
    return cpy_r_r65;
CPyL38: ;
    cpy_r_r66 = NULL;
    return cpy_r_r66;
CPyL39: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_specifiers);
    goto CPyL9;
CPyL41: ;
    CPy_DecRef(cpy_r_specifiers);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_specifiers);
    CPy_DECREF(cpy_r_format_ops);
    goto CPyL13;
CPyL43: ;
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_format_ops);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    CPyTagged_DecRef(cpy_r_last_end);
    goto CPyL38;
CPyL45: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL25;
CPyL46: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    CPyTagged_DecRef(cpy_r_last_end);
    CPy_DecRef(cpy_r_r19);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_spec);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r19);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL38;
CPyL49: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    goto CPyL38;
CPyL50: ;
    CPy_DECREF(cpy_r_literals);
    goto CPyL36;
CPyL51: ;
    CPy_DecRef(cpy_r_format_ops);
    CPy_DecRef(cpy_r_literals);
    CPy_DecRef(cpy_r_r47);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL38;
}

PyObject *CPyPy_format_str_tokenizer___tokenizer_format_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"format_str", 0};
    static CPyArg_Parser parser = {"O:tokenizer_format_call", kwlist, 0};
    PyObject *obj_format_str;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_format_str)) {
        return NULL;
    }
    PyObject *arg_format_str;
    if (likely(PyUnicode_Check(obj_format_str)))
        arg_format_str = obj_format_str;
    else {
        CPy_TypeError("str", obj_format_str); 
        goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___tokenizer_format_call(arg_format_str);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "tokenizer_format_call", 96, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___convert_format_expr_to_str(PyObject *cpy_r_builder, PyObject *cpy_r_format_ops, PyObject *cpy_r_exprs, CPyTagged cpy_r_line) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_converted;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_format_op;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_node_type;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_var_str;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_format_ops)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r2 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL2;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL2: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 142, CPyStatic_format_str_tokenizer___globals);
        goto CPyL56;
    }
    cpy_r_converted = cpy_r_r8;
    cpy_r_r9 = 0;
    cpy_r_r10 = 0;
CPyL4: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL55;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_format_ops)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL55;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_exprs, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 143, CPyStatic_format_str_tokenizer___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL57;
    }
    cpy_r_x = cpy_r_r20;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_format_ops, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_format_str_tokenizer___FormatOp))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 143, CPyStatic_format_str_tokenizer___globals, "mypyc.irbuild.format_str_tokenizer.FormatOp", cpy_r_r21);
        goto CPyL58;
    }
    cpy_r_format_op = cpy_r_r22;
    cpy_r_r23 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_x);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 144, CPyStatic_format_str_tokenizer___globals);
        goto CPyL59;
    }
    cpy_r_node_type = cpy_r_r23;
    cpy_r_r24 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 145, CPyStatic_format_str_tokenizer___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r26 = cpy_r_format_op == cpy_r_r24;
    if (cpy_r_r26) {
        goto CPyL61;
    } else
        goto CPyL36;
CPyL13: ;
    cpy_r_r27 = CPyDef_rtypes___is_str_rprimitive(cpy_r_node_type);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 146, CPyStatic_format_str_tokenizer___globals);
        goto CPyL62;
    }
    if (cpy_r_r27) {
        goto CPyL63;
    } else
        goto CPyL18;
CPyL15: ;
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r28);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 147, CPyStatic_format_str_tokenizer___globals);
        goto CPyL57;
    }
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 147, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r29);
        goto CPyL57;
    }
    cpy_r_var_str = cpy_r_r30;
    goto CPyL53;
CPyL18: ;
    cpy_r_r31 = CPyDef_rtypes___is_int_rprimitive(cpy_r_node_type);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 148, CPyStatic_format_str_tokenizer___globals);
        goto CPyL62;
    }
    if (cpy_r_r31) goto CPyL64;
    cpy_r_r32 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_node_type);
    CPy_DECREF(cpy_r_node_type);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 148, CPyStatic_format_str_tokenizer___globals);
        goto CPyL58;
    }
    if (!cpy_r_r32) goto CPyL29;
CPyL22: ;
    cpy_r_r33 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r34 = CPyStatics[8325]; /* 'int_to_str_op' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals, "tuple", cpy_r_r35);
        goto CPyL58;
    }
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r37);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals);
        goto CPyL65;
    }
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r38);
        goto CPyL65;
    }
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals);
        goto CPyL66;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    *(PyObject * *)cpy_r_r42 = cpy_r_r39;
    cpy_r_r43 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r36, cpy_r_r40, cpy_r_line);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 149, CPyStatic_format_str_tokenizer___globals);
        goto CPyL57;
    }
    cpy_r_var_str = cpy_r_r43;
    goto CPyL53;
CPyL29: ;
    cpy_r_r44 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r45 = CPyStatics[8326]; /* 'str_op' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals, "tuple", cpy_r_r46);
        goto CPyL58;
    }
    cpy_r_r48 = 2;
    cpy_r_r49 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r48);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals);
        goto CPyL67;
    }
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r49);
        goto CPyL67;
    }
    cpy_r_r51 = PyList_New(1);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals);
        goto CPyL68;
    }
    cpy_r_r52 = (CPyPtr)&((PyListObject *)cpy_r_r51)->ob_item;
    cpy_r_r53 = *(CPyPtr *)cpy_r_r52;
    *(PyObject * *)cpy_r_r53 = cpy_r_r50;
    cpy_r_r54 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r47, cpy_r_r51, cpy_r_line);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 151, CPyStatic_format_str_tokenizer___globals);
        goto CPyL57;
    }
    cpy_r_var_str = cpy_r_r54;
    goto CPyL53;
CPyL36: ;
    cpy_r_r55 = CPyStatic_format_str_tokenizer___FormatOp___INT;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"INT\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 152, CPyStatic_format_str_tokenizer___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r57 = cpy_r_format_op == cpy_r_r55;
    CPy_DECREF(cpy_r_format_op);
    if (!cpy_r_r57) goto CPyL70;
    cpy_r_r58 = CPyDef_rtypes___is_int_rprimitive(cpy_r_node_type);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 153, CPyStatic_format_str_tokenizer___globals);
        goto CPyL62;
    }
    if (cpy_r_r58) goto CPyL71;
    cpy_r_r59 = CPyDef_rtypes___is_short_int_rprimitive(cpy_r_node_type);
    CPy_DECREF(cpy_r_node_type);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 153, CPyStatic_format_str_tokenizer___globals);
        goto CPyL58;
    }
    if (!cpy_r_r59) goto CPyL72;
CPyL44: ;
    cpy_r_r60 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r61 = CPyStatics[8325]; /* 'int_to_str_op' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals, "tuple", cpy_r_r62);
        goto CPyL58;
    }
    cpy_r_r64 = 2;
    cpy_r_r65 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r64);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals);
        goto CPyL73;
    }
    if (likely(cpy_r_r65 != Py_None))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r65);
        goto CPyL73;
    }
    cpy_r_r67 = PyList_New(1);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals);
        goto CPyL74;
    }
    cpy_r_r68 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r69 = *(CPyPtr *)cpy_r_r68;
    *(PyObject * *)cpy_r_r69 = cpy_r_r66;
    cpy_r_r70 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r63, cpy_r_r67, cpy_r_line);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 154, CPyStatic_format_str_tokenizer___globals);
        goto CPyL57;
    }
    cpy_r_var_str = cpy_r_r70;
    goto CPyL53;
CPyL51: ;
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL52: ;
    cpy_r_r72 = Py_None;
    CPy_INCREF(cpy_r_r72);
    return cpy_r_r72;
CPyL53: ;
    cpy_r_r73 = PyList_Append(cpy_r_converted, cpy_r_var_str);
    CPy_DECREF(cpy_r_var_str);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 159, CPyStatic_format_str_tokenizer___globals);
        goto CPyL57;
    }
    cpy_r_r75 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r75;
    cpy_r_r76 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r76;
    goto CPyL4;
CPyL55: ;
    return cpy_r_converted;
CPyL56: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL57: ;
    CPy_DecRef(cpy_r_converted);
    goto CPyL56;
CPyL58: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    goto CPyL56;
CPyL59: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    goto CPyL56;
CPyL60: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL10;
CPyL61: ;
    CPy_DECREF(cpy_r_format_op);
    goto CPyL13;
CPyL62: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL56;
CPyL63: ;
    CPy_DECREF(cpy_r_node_type);
    goto CPyL15;
CPyL64: ;
    CPy_DECREF(cpy_r_node_type);
    goto CPyL22;
CPyL65: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r36);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL56;
CPyL67: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r47);
    goto CPyL56;
CPyL68: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL37;
CPyL70: ;
    CPy_DECREF(cpy_r_converted);
    CPy_DECREF(cpy_r_x);
    CPy_DECREF(cpy_r_node_type);
    goto CPyL52;
CPyL71: ;
    CPy_DECREF(cpy_r_node_type);
    goto CPyL44;
CPyL72: ;
    CPy_DECREF(cpy_r_converted);
    CPy_DECREF(cpy_r_x);
    goto CPyL51;
CPyL73: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r63);
    goto CPyL56;
CPyL74: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r66);
    goto CPyL56;
}

PyObject *CPyPy_format_str_tokenizer___convert_format_expr_to_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "format_ops", "exprs", "line", 0};
    static CPyArg_Parser parser = {"OOOO:convert_format_expr_to_str", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_format_ops;
    PyObject *obj_exprs;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_format_ops, &obj_exprs, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_format_ops;
    if (likely(PyList_Check(obj_format_ops)))
        arg_format_ops = obj_format_ops;
    else {
        CPy_TypeError("list", obj_format_ops); 
        goto fail;
    }
    PyObject *arg_exprs;
    if (likely(PyList_Check(obj_exprs)))
        arg_exprs = obj_exprs;
    else {
        CPy_TypeError("list", obj_exprs); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___convert_format_expr_to_str(arg_builder, arg_format_ops, arg_exprs, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_str", 134, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___join_formatted_strings(PyObject *cpy_r_builder, PyObject *cpy_r_literals, PyObject *cpy_r_substitutions, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_result_list;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_b;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r1 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 184, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_rtypes___RPrimitive))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 184, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r2);
        goto CPyL42;
    }
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___Integer(0, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 184, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 184, CPyStatic_format_str_tokenizer___globals);
        goto CPyL43;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_result_list = cpy_r_r6;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_literals != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL25;
    CPy_INCREF(cpy_r_literals);
    if (likely(cpy_r_literals != Py_None))
        cpy_r_r11 = cpy_r_literals;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 187, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_literals);
        goto CPyL44;
    }
    cpy_r_r12 = 0;
    cpy_r_r13 = 0;
CPyL7: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL45;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_substitutions)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL45;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 187, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r22);
        goto CPyL46;
    }
    cpy_r_a = cpy_r_r23;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_substitutions, cpy_r_r13);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_ops___Value)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 187, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r24);
        goto CPyL47;
    }
    cpy_r_b = cpy_r_r25;
    cpy_r_r26 = CPyStr_IsTrue(cpy_r_a);
    if (!cpy_r_r26) goto CPyL48;
    cpy_r_r27 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 189, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r28 = PyList_Append(cpy_r_result_list, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 189, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
CPyL14: ;
    cpy_r_r30 = PyList_Append(cpy_r_result_list, cpy_r_b);
    CPy_DECREF(cpy_r_b);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 190, CPyStatic_format_str_tokenizer___globals);
        goto CPyL46;
    }
    cpy_r_r32 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r32;
    cpy_r_r33 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r33;
    goto CPyL7;
CPyL16: ;
    if (likely(cpy_r_literals != Py_None))
        cpy_r_r34 = cpy_r_literals;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 191, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_literals);
        goto CPyL44;
    }
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_r34, -2);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 191, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 191, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r35);
        goto CPyL44;
    }
    cpy_r_r37 = CPyStr_IsTrue(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (!cpy_r_r37) goto CPyL26;
    if (likely(cpy_r_literals != Py_None))
        cpy_r_r38 = cpy_r_literals;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 192, CPyStatic_format_str_tokenizer___globals, "list", cpy_r_literals);
        goto CPyL44;
    }
    cpy_r_r39 = CPyList_GetItemShort(cpy_r_r38, -2);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 192, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 192, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r39);
        goto CPyL44;
    }
    cpy_r_r41 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 192, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    cpy_r_r42 = PyList_Append(cpy_r_result_list, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 192, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r44 = CPyList_Extend(cpy_r_result_list, cpy_r_substitutions);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 194, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    } else
        goto CPyL50;
CPyL26: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = cpy_r_r47 == 2;
    if (cpy_r_r48) {
        goto CPyL51;
    } else
        goto CPyL29;
CPyL27: ;
    cpy_r_r49 = CPyStatics[163]; /* '' */
    cpy_r_r50 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 198, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    return cpy_r_r50;
CPyL29: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_substitutions)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = cpy_r_r53 != 0;
    if (cpy_r_r54) goto CPyL34;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = cpy_r_r57 == 4;
    if (!cpy_r_r58) goto CPyL34;
    cpy_r_r59 = CPyList_GetItemShort(cpy_r_result_list, 2);
    CPy_DECREF(cpy_r_result_list);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 200, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_ops___Value)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 200, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r59);
        goto CPyL42;
    }
    return cpy_r_r60;
CPyL34: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = CPyTagged_Subtract(cpy_r_r63, 2);
    cpy_r_r65 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r66 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 202, CPyStatic_format_str_tokenizer___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_rtypes___RPrimitive))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 202, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r67);
        goto CPyL52;
    }
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPyDef_ops___Integer(cpy_r_r64, cpy_r_r68, cpy_r_r69);
    CPyTagged_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 202, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    cpy_r_r71 = CPyList_SetItem(cpy_r_result_list, 0, cpy_r_r70);
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 202, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    cpy_r_r72 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r73 = CPyStatics[8327]; /* 'str_build_op' */
    cpy_r_r74 = CPyDict_GetItem(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 203, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    if (likely(PyTuple_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 203, CPyStatic_format_str_tokenizer___globals, "tuple", cpy_r_r74);
        goto CPyL44;
    }
    cpy_r_r76 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r75, cpy_r_result_list, cpy_r_line);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_result_list);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 203, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    return cpy_r_r76;
CPyL42: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL43: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_result_list);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL16;
CPyL46: ;
    CPy_DecRef(cpy_r_result_list);
    CPy_DecRef(cpy_r_r11);
    goto CPyL42;
CPyL47: ;
    CPy_DecRef(cpy_r_result_list);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_a);
    goto CPyL42;
CPyL48: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL14;
CPyL49: ;
    CPy_DecRef(cpy_r_result_list);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_b);
    goto CPyL42;
CPyL50: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL26;
CPyL51: ;
    CPy_DECREF(cpy_r_result_list);
    goto CPyL27;
CPyL52: ;
    CPy_DecRef(cpy_r_result_list);
    CPyTagged_DecRef(cpy_r_r64);
    goto CPyL42;
}

PyObject *CPyPy_format_str_tokenizer___join_formatted_strings(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "literals", "substitutions", "line", 0};
    static CPyArg_Parser parser = {"OOOO:join_formatted_strings", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_literals;
    PyObject *obj_substitutions;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_literals, &obj_substitutions, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_literals;
    if (PyList_Check(obj_literals))
        arg_literals = obj_literals;
    else {
        arg_literals = NULL;
    }
    if (arg_literals != NULL) goto __LL10190;
    if (obj_literals == Py_None)
        arg_literals = obj_literals;
    else {
        arg_literals = NULL;
    }
    if (arg_literals != NULL) goto __LL10190;
    CPy_TypeError("list or None", obj_literals); 
    goto fail;
__LL10190: ;
    PyObject *arg_substitutions;
    if (likely(PyList_Check(obj_substitutions)))
        arg_substitutions = obj_substitutions;
    else {
        CPy_TypeError("list", obj_substitutions); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___join_formatted_strings(arg_builder, arg_literals, arg_substitutions, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_strings", 163, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___convert_format_expr_to_bytes(PyObject *cpy_r_builder, PyObject *cpy_r_format_ops, PyObject *cpy_r_exprs, CPyTagged cpy_r_line) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_converted;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_format_op;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_node_type;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_var_bytes;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_format_ops)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = cpy_r_r2 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL2;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL2: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 214, CPyStatic_format_str_tokenizer___globals);
        goto CPyL27;
    }
    cpy_r_converted = cpy_r_r8;
    cpy_r_r9 = 0;
    cpy_r_r10 = 0;
CPyL4: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_exprs)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL26;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_format_ops)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL26;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_exprs, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 215, CPyStatic_format_str_tokenizer___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL28;
    }
    cpy_r_x = cpy_r_r20;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_format_ops, cpy_r_r10);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_format_str_tokenizer___FormatOp))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 215, CPyStatic_format_str_tokenizer___globals, "mypyc.irbuild.format_str_tokenizer.FormatOp", cpy_r_r21);
        goto CPyL29;
    }
    cpy_r_format_op = cpy_r_r22;
    cpy_r_r23 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_x);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 216, CPyStatic_format_str_tokenizer___globals);
        goto CPyL30;
    }
    cpy_r_node_type = cpy_r_r23;
    cpy_r_r24 = CPyStatic_format_str_tokenizer___FormatOp___BYTES;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"BYTES\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 218, CPyStatic_format_str_tokenizer___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r26 = cpy_r_format_op == cpy_r_r24;
    if (cpy_r_r26) goto CPyL32;
    cpy_r_r27 = CPyStatic_format_str_tokenizer___FormatOp___STR;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL33;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 218, CPyStatic_format_str_tokenizer___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r29 = cpy_r_format_op == cpy_r_r27;
    CPy_DECREF(cpy_r_format_op);
    if (!cpy_r_r29) goto CPyL34;
CPyL17: ;
    cpy_r_r30 = CPyDef_rtypes___is_bytes_rprimitive(cpy_r_node_type);
    CPy_DECREF(cpy_r_node_type);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 219, CPyStatic_format_str_tokenizer___globals);
        goto CPyL29;
    }
    if (!cpy_r_r30) goto CPyL35;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_x, cpy_r_r31);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 220, CPyStatic_format_str_tokenizer___globals);
        goto CPyL28;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 220, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r32);
        goto CPyL28;
    }
    cpy_r_var_bytes = cpy_r_r33;
    goto CPyL24;
CPyL22: ;
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    return cpy_r_r34;
CPyL23: ;
    cpy_r_r35 = Py_None;
    CPy_INCREF(cpy_r_r35);
    return cpy_r_r35;
CPyL24: ;
    cpy_r_r36 = PyList_Append(cpy_r_converted, cpy_r_var_bytes);
    CPy_DECREF(cpy_r_var_bytes);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 225, CPyStatic_format_str_tokenizer___globals);
        goto CPyL28;
    }
    cpy_r_r38 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r38;
    cpy_r_r39 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r39;
    goto CPyL4;
CPyL26: ;
    return cpy_r_converted;
CPyL27: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL28: ;
    CPy_DecRef(cpy_r_converted);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL10;
CPyL32: ;
    CPy_DECREF(cpy_r_format_op);
    goto CPyL17;
CPyL33: ;
    CPy_DecRef(cpy_r_converted);
    CPy_DecRef(cpy_r_x);
    CPy_DecRef(cpy_r_format_op);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL14;
CPyL34: ;
    CPy_DECREF(cpy_r_converted);
    CPy_DECREF(cpy_r_x);
    CPy_DECREF(cpy_r_node_type);
    goto CPyL23;
CPyL35: ;
    CPy_DECREF(cpy_r_converted);
    CPy_DECREF(cpy_r_x);
    goto CPyL22;
}

PyObject *CPyPy_format_str_tokenizer___convert_format_expr_to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "format_ops", "exprs", "line", 0};
    static CPyArg_Parser parser = {"OOOO:convert_format_expr_to_bytes", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_format_ops;
    PyObject *obj_exprs;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_format_ops, &obj_exprs, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_format_ops;
    if (likely(PyList_Check(obj_format_ops)))
        arg_format_ops = obj_format_ops;
    else {
        CPy_TypeError("list", obj_format_ops); 
        goto fail;
    }
    PyObject *arg_exprs;
    if (likely(PyList_Check(obj_exprs)))
        arg_exprs = obj_exprs;
    else {
        CPy_TypeError("list", obj_exprs); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___convert_format_expr_to_bytes(arg_builder, arg_format_ops, arg_exprs, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "convert_format_expr_to_bytes", 206, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

PyObject *CPyDef_format_str_tokenizer___join_formatted_bytes(PyObject *cpy_r_builder, PyObject *cpy_r_literals, PyObject *cpy_r_substitutions, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_result_list;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_b;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    cpy_r_r0 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r1 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 234, CPyStatic_format_str_tokenizer___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_rtypes___RPrimitive))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 234, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r2);
        goto CPyL37;
    }
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_ops___Integer(0, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 234, CPyStatic_format_str_tokenizer___globals);
        goto CPyL37;
    }
    cpy_r_r6 = PyList_New(1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 234, CPyStatic_format_str_tokenizer___globals);
        goto CPyL38;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r5;
    cpy_r_result_list = cpy_r_r6;
    cpy_r_r9 = 0;
    cpy_r_r10 = 0;
CPyL5: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_literals)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL14;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_substitutions)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL14;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_literals, cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 236, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r19);
        goto CPyL39;
    }
    cpy_r_a = cpy_r_r20;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_substitutions, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r21, CPyType_ops___Value)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 236, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r21);
        goto CPyL40;
    }
    cpy_r_b = cpy_r_r22;
    cpy_r_r23 = CPyStr_IsTrue(cpy_r_a);
    if (!cpy_r_r23) goto CPyL41;
    cpy_r_r24 = CPyDef_builder___IRBuilder___load_bytes_from_str_literal(cpy_r_builder, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 238, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
    cpy_r_r25 = PyList_Append(cpy_r_result_list, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 238, CPyStatic_format_str_tokenizer___globals);
        goto CPyL42;
    }
CPyL12: ;
    cpy_r_r27 = PyList_Append(cpy_r_result_list, cpy_r_b);
    CPy_DECREF(cpy_r_b);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 239, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    cpy_r_r29 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r29;
    cpy_r_r30 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r30;
    goto CPyL5;
CPyL14: ;
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_literals, -2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 240, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 240, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r31);
        goto CPyL39;
    }
    cpy_r_r33 = CPyStr_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL21;
    cpy_r_r34 = CPyList_GetItemShort(cpy_r_literals, -2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 241, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 241, CPyStatic_format_str_tokenizer___globals, "str", cpy_r_r34);
        goto CPyL39;
    }
    cpy_r_r36 = CPyDef_builder___IRBuilder___load_bytes_from_str_literal(cpy_r_builder, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 241, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    cpy_r_r37 = PyList_Append(cpy_r_result_list, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 241, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
CPyL21: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = cpy_r_r41 == 2;
    if (cpy_r_r42) {
        goto CPyL43;
    } else
        goto CPyL24;
CPyL22: ;
    cpy_r_r43 = CPyStatics[163]; /* '' */
    cpy_r_r44 = CPyDef_builder___IRBuilder___load_bytes_from_str_literal(cpy_r_builder, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 245, CPyStatic_format_str_tokenizer___globals);
        goto CPyL37;
    }
    return cpy_r_r44;
CPyL24: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_substitutions)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = cpy_r_r47 != 0;
    if (cpy_r_r48) goto CPyL29;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = cpy_r_r51 == 4;
    if (!cpy_r_r52) goto CPyL29;
    cpy_r_r53 = CPyList_GetItemShort(cpy_r_result_list, 2);
    CPy_DECREF(cpy_r_result_list);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 247, CPyStatic_format_str_tokenizer___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_ops___Value)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 247, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.ops.Value", cpy_r_r53);
        goto CPyL37;
    }
    return cpy_r_r54;
CPyL29: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_result_list)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = CPyTagged_Subtract(cpy_r_r57, 2);
    cpy_r_r59 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r60 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 249, CPyStatic_format_str_tokenizer___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r61) == CPyType_rtypes___RPrimitive))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 249, CPyStatic_format_str_tokenizer___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r61);
        goto CPyL44;
    }
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_ops___Integer(cpy_r_r58, cpy_r_r62, cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 249, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    cpy_r_r65 = CPyList_SetItem(cpy_r_result_list, 0, cpy_r_r64);
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 249, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    cpy_r_r66 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r67 = CPyStatics[8328]; /* 'bytes_build_op' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 250, CPyStatic_format_str_tokenizer___globals);
        goto CPyL39;
    }
    if (likely(PyTuple_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 250, CPyStatic_format_str_tokenizer___globals, "tuple", cpy_r_r68);
        goto CPyL39;
    }
    cpy_r_r70 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r69, cpy_r_result_list, cpy_r_line);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_result_list);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 250, CPyStatic_format_str_tokenizer___globals);
        goto CPyL37;
    }
    return cpy_r_r70;
CPyL37: ;
    cpy_r_r71 = NULL;
    return cpy_r_r71;
CPyL38: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_result_list);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_result_list);
    CPy_DecRef(cpy_r_a);
    goto CPyL37;
CPyL41: ;
    CPy_DECREF(cpy_r_a);
    goto CPyL12;
CPyL42: ;
    CPy_DecRef(cpy_r_result_list);
    CPy_DecRef(cpy_r_b);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_result_list);
    goto CPyL22;
CPyL44: ;
    CPy_DecRef(cpy_r_result_list);
    CPyTagged_DecRef(cpy_r_r58);
    goto CPyL37;
}

PyObject *CPyPy_format_str_tokenizer___join_formatted_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "literals", "substitutions", "line", 0};
    static CPyArg_Parser parser = {"OOOO:join_formatted_bytes", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_literals;
    PyObject *obj_substitutions;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_literals, &obj_substitutions, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_literals;
    if (likely(PyList_Check(obj_literals)))
        arg_literals = obj_literals;
    else {
        CPy_TypeError("list", obj_literals); 
        goto fail;
    }
    PyObject *arg_substitutions;
    if (likely(PyList_Check(obj_substitutions)))
        arg_substitutions = obj_substitutions;
    else {
        CPy_TypeError("list", obj_substitutions); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_format_str_tokenizer___join_formatted_bytes(arg_builder, arg_literals, arg_substitutions, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "join_formatted_bytes", 229, CPyStatic_format_str_tokenizer___globals);
    return NULL;
}

char CPyDef_format_str_tokenizer_____top_level__(void) {
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
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    CPyTagged cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", -1, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 3, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9533]; /* ('Enum', 'unique') */
    cpy_r_r10 = CPyStatics[3876]; /* 'enum' */
    cpy_r_r11 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 5, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_enum = cpy_r_r12;
    CPy_INCREF(CPyModule_enum);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 6, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10127]; /* ('ConversionSpecifier', 'parse_conversion_specifiers',
                                      'parse_format_value') */
    cpy_r_r18 = CPyStatics[1230]; /* 'mypy.checkstrformat' */
    cpy_r_r19 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 8, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypy___checkstrformat = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___checkstrformat);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r22 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r23 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 13, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypy___errors = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r26 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r27 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 14, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypy___messages = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10128]; /* ('Context', 'Expression') */
    cpy_r_r30 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r31 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 15, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypy___nodes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r34 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r35 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 16, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypy___options = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10129]; /* ('Integer', 'Value') */
    cpy_r_r38 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r39 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 17, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10130]; /* ('c_pyssize_t_rprimitive', 'is_bytes_rprimitive',
                                      'is_int_rprimitive', 'is_short_int_rprimitive',
                                      'is_str_rprimitive') */
    cpy_r_r42 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r43 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 18, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10034]; /* ('IRBuilder',) */
    cpy_r_r46 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r47 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 25, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10131]; /* ('bytes_build_op',) */
    cpy_r_r50 = CPyStatics[8258]; /* 'mypyc.primitives.bytes_ops' */
    cpy_r_r51 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 26, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___primitives___bytes_ops = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___primitives___bytes_ops);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10132]; /* ('int_to_str_op',) */
    cpy_r_r54 = CPyStatics[8259]; /* 'mypyc.primitives.int_ops' */
    cpy_r_r55 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 27, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___primitives___int_ops = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___primitives___int_ops);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[10133]; /* ('str_build_op', 'str_op') */
    cpy_r_r58 = CPyStatics[8261]; /* 'mypyc.primitives.str_ops' */
    cpy_r_r59 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 28, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyModule_mypyc___primitives___str_ops = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___primitives___str_ops);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyModule_enum;
    cpy_r_r62 = CPyStatics[3874]; /* 'Enum' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    cpy_r_r64 = PyTuple_Pack(1, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    cpy_r_r65 = (PyObject *)&PyType_Type;
    cpy_r_r66 = CPy_CalculateMetaclass(cpy_r_r65, cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL48;
    }
    cpy_r_r67 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r68 = PyObject_HasAttr(cpy_r_r66, cpy_r_r67);
    if (!cpy_r_r68) goto CPyL25;
    cpy_r_r69 = CPyStatics[8331]; /* 'FormatOp' */
    cpy_r_r70 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r71 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r72[2] = {cpy_r_r69, cpy_r_r64};
    cpy_r_r73 = (PyObject **)&cpy_r_r72;
    cpy_r_r74 = _PyObject_Vectorcall(cpy_r_r71, cpy_r_r73, 2, 0);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL48;
    }
    if (likely(PyDict_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals, "dict", cpy_r_r74);
        goto CPyL48;
    }
    cpy_r_r76 = cpy_r_r75;
    goto CPyL27;
CPyL25: ;
    cpy_r_r77 = PyDict_New();
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL48;
    }
    cpy_r_r76 = cpy_r_r77;
CPyL27: ;
    cpy_r_r78 = PyDict_New();
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r79 = (PyObject *)&PyUnicode_Type;
    cpy_r_r80 = CPyStatics[8332]; /* 'STR' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r78, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 42, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r83 = CPyStatics[1417]; /* 's' */
    cpy_r_r84 = CPyStatics[8332]; /* 'STR' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r76, cpy_r_r84, cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 42, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r87 = (PyObject *)&PyUnicode_Type;
    cpy_r_r88 = CPyStatics[8333]; /* 'INT' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r78, cpy_r_r88, cpy_r_r87);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 43, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r91 = CPyStatics[1459]; /* 'd' */
    cpy_r_r92 = CPyStatics[8333]; /* 'INT' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r76, cpy_r_r92, cpy_r_r91);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 43, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r95 = (PyObject *)&PyUnicode_Type;
    cpy_r_r96 = CPyStatics[8334]; /* 'BYTES' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r78, cpy_r_r96, cpy_r_r95);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 44, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r99 = CPyStatics[1443]; /* 'b' */
    cpy_r_r100 = CPyStatics[8334]; /* 'BYTES' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r76, cpy_r_r100, cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 44, CPyStatic_format_str_tokenizer___globals);
        goto CPyL50;
    }
    cpy_r_r103 = CPyStatics[8331]; /* 'FormatOp' */
    cpy_r_r104 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r105 = CPyDict_SetItem(cpy_r_r76, cpy_r_r104, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r107 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r108 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r76, cpy_r_r108, cpy_r_r107);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    cpy_r_r111 = CPyStatics[8254]; /* 'mypyc.irbuild.format_str_tokenizer' */
    cpy_r_r112 = CPyStatics[619]; /* '__module__' */
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r76, cpy_r_r112, cpy_r_r111);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r115[3] = {cpy_r_r103, cpy_r_r64, cpy_r_r76};
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r116, 3, 0);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r118 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r119 = CPyStatics[3875]; /* 'unique' */
    cpy_r_r120 = CPyDict_GetItem(cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 31, CPyStatic_format_str_tokenizer___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r121[1] = {cpy_r_r117};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r120, cpy_r_r122, 1, 0);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r117);
    CPyType_format_str_tokenizer___FormatOp = (PyTypeObject *)cpy_r_r123;
    CPy_INCREF(CPyType_format_str_tokenizer___FormatOp);
    cpy_r_r124 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r125 = CPyStatics[8331]; /* 'FormatOp' */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r124, cpy_r_r125, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    cpy_r_r128 = (PyObject *)CPyType_format_str_tokenizer___FormatOp;
    cpy_r_r129 = CPyStatics[8332]; /* 'STR' */
    cpy_r_r130 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyStatic_format_str_tokenizer___FormatOp___STR = cpy_r_r130;
    CPy_INCREF(CPyStatic_format_str_tokenizer___FormatOp___STR);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r131 = CPyStatics[8333]; /* 'INT' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyStatic_format_str_tokenizer___FormatOp___INT = cpy_r_r132;
    CPy_INCREF(CPyStatic_format_str_tokenizer___FormatOp___INT);
    CPy_DECREF(cpy_r_r132);
    cpy_r_r133 = CPyStatics[8334]; /* 'BYTES' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_r128, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 32, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyStatic_format_str_tokenizer___FormatOp___BYTES = cpy_r_r134;
    CPy_INCREF(CPyStatic_format_str_tokenizer___FormatOp___BYTES);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r135 = CPY_INT_TAG;
    cpy_r_r136 = CPY_INT_TAG;
    cpy_r_r137 = CPyDef_nodes___Context(cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 93, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    CPyStatic_format_str_tokenizer___EMPTY_CONTEXT = cpy_r_r137;
    CPy_INCREF(CPyStatic_format_str_tokenizer___EMPTY_CONTEXT);
    cpy_r_r138 = CPyStatic_format_str_tokenizer___globals;
    cpy_r_r139 = CPyStatics[8335]; /* 'EMPTY_CONTEXT' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r138, cpy_r_r139, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/irbuild/format_str_tokenizer.py", "<module>", 93, CPyStatic_format_str_tokenizer___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r142 = 2;
    return cpy_r_r142;
CPyL48: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r76);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_r117);
    goto CPyL47;
}
