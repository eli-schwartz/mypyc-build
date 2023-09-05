#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef cstringmodule_methods[] = {
    {"encode_bytes_as_c_string", (PyCFunction)CPyPy_cstring___encode_bytes_as_c_string, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"c_string_initializer", (PyCFunction)CPyPy_cstring___c_string_initializer, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef cstringmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.cstring",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    cstringmodule_methods
};

PyObject *CPyInit_mypyc___codegen___cstring(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___cstring_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___cstring_internal);
        return CPyModule_mypyc___codegen___cstring_internal;
    }
    CPyModule_mypyc___codegen___cstring_internal = PyModule_Create(&cstringmodule);
    if (unlikely(CPyModule_mypyc___codegen___cstring_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___cstring_internal, "__name__");
    CPyStatic_cstring___globals = PyModule_GetDict(CPyModule_mypyc___codegen___cstring_internal);
    if (unlikely(CPyStatic_cstring___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_cstring_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___cstring_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___cstring_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_cstring___CHAR_MAP);
    CPyStatic_cstring___CHAR_MAP = NULL;
    return NULL;
}

PyObject *CPyDef_cstring___encode_bytes_as_c_string(PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_escaped;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL13;
    }
    cpy_r_r2 = PyObject_GetIter(cpy_r_b);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL14;
    }
CPyL2: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL15;
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL16;
    }
    cpy_r_i = cpy_r_r4;
    cpy_r_r5 = CPyStatic_cstring___CHAR_MAP;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL17;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAR_MAP\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r7 = CPyList_GetItem(cpy_r_r5, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals, "str", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = PyList_Append(cpy_r_r1, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL16;
    } else
        goto CPyL2;
CPyL10: ;
    cpy_r_r11 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL14;
    }
    cpy_r_r12 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 45, CPyStatic_cstring___globals);
        goto CPyL13;
    }
    cpy_r_escaped = cpy_r_r12;
    return cpy_r_escaped;
CPyL13: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL5;
}

PyObject *CPyPy_cstring___encode_bytes_as_c_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"b", 0};
    static CPyArg_Parser parser = {"O:encode_bytes_as_c_string", kwlist, 0};
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_b)) {
        return NULL;
    }
    PyObject *arg_b;
    if (likely(PyBytes_Check(obj_b) || PyByteArray_Check(obj_b)))
        arg_b = obj_b;
    else {
        CPy_TypeError("bytes", obj_b); 
        goto fail;
    }
    PyObject *retval = CPyDef_cstring___encode_bytes_as_c_string(arg_b);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/cstring.py", "encode_bytes_as_c_string", 43, CPyStatic_cstring___globals);
    return NULL;
}

PyObject *CPyDef_cstring___c_string_initializer(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[178]; /* '"' */
    cpy_r_r1 = CPyDef_cstring___encode_bytes_as_c_string(cpy_r_value);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "c_string_initializer", 54, CPyStatic_cstring___globals);
        goto CPyL4;
    }
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "c_string_initializer", 54, CPyStatic_cstring___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[178]; /* '"' */
    cpy_r_r4 = PyUnicode_Concat(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "c_string_initializer", 54, CPyStatic_cstring___globals);
        goto CPyL4;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_cstring___c_string_initializer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:c_string_initializer", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyBytes_Check(obj_value) || PyByteArray_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("bytes", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_cstring___c_string_initializer(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/cstring.py", "c_string_initializer", 49, CPyStatic_cstring___globals);
    return NULL;
}

char CPyDef_cstring_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r9;
    void *cpy_r_r11;
    void *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_i;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    int64_t cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    tuple_T10OOOOOOOOOO cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject **cpy_r_r149;
    PyObject *cpy_r_r150;
    CPyTagged cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", -1, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_cstring___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 21, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_string;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {23};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9934]; /* (('string', 'string', 'string'),) */
    cpy_r_r15 = CPyStatic_cstring___globals;
    cpy_r_r16 = CPyStatics[6851]; /* 'mypyc/codegen/cstring.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL68;
    cpy_r_r19 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_cstring___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 24, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    cpy_r_r24 = 0;
    cpy_r_i = cpy_r_r24;
CPyL8: ;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r24 < (Py_ssize_t)512;
    if (!cpy_r_r25) goto CPyL69;
    cpy_r_r26 = CPyStatics[163]; /* '' */
    cpy_r_r27 = CPyStatics[5539]; /* '\\' */
    cpy_r_r28 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r29 = CPyStatics[6852]; /* '03o' */
    cpy_r_r30 = CPyStatics[193]; /* 'format' */
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_i);
    PyObject *cpy_r_r32[3] = {cpy_r_r28, cpy_r_r31, cpy_r_r29};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r33, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r31);
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals, "str", cpy_r_r34);
        goto CPyL71;
    }
    cpy_r_r36 = PyList_New(2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL72;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    CPy_INCREF(cpy_r_r27);
    *(PyObject * *)cpy_r_r38 = cpy_r_r27;
    cpy_r_r39 = cpy_r_r38 + 8;
    *(PyObject * *)cpy_r_r39 = cpy_r_r35;
    cpy_r_r40 = PyUnicode_Join(cpy_r_r26, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL71;
    }
    cpy_r_r41 = PyList_Append(cpy_r_r23, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL71;
    }
    cpy_r_r43 = cpy_r_r24 + 2;
    cpy_r_r24 = cpy_r_r43;
    cpy_r_i = cpy_r_r43;
    goto CPyL8;
CPyL15: ;
    CPyStatic_cstring___CHAR_MAP = cpy_r_r23;
    CPy_INCREF(CPyStatic_cstring___CHAR_MAP);
    cpy_r_r44 = CPyStatic_cstring___globals;
    cpy_r_r45 = CPyStatics[6853]; /* 'CHAR_MAP' */
    cpy_r_r46 = CPyDict_SetItem(cpy_r_r44, cpy_r_r45, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 26, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    cpy_r_r48 = CPyModule_string;
    cpy_r_r49 = CPyStatics[6854]; /* 'printable' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 29, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    if (likely(PyUnicode_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 29, CPyStatic_cstring___globals, "str", cpy_r_r50);
        goto CPyL68;
    }
    cpy_r_r52 = 0;
CPyL19: ;
    cpy_r_r53 = CPyStr_Size_size_t(cpy_r_r51);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 29, CPyStatic_cstring___globals);
        goto CPyL73;
    }
    cpy_r_r55 = cpy_r_r53 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r52 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL74;
    cpy_r_r57 = CPyStr_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 29, CPyStatic_cstring___globals);
        goto CPyL73;
    }
    cpy_r_r58 = CPyStatic_cstring___globals;
    cpy_r_r59 = CPyStatics[1416]; /* 'c' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 29, CPyStatic_cstring___globals);
        goto CPyL73;
    }
    cpy_r_r62 = CPyStatic_cstring___globals;
    cpy_r_r63 = CPyStatics[1416]; /* 'c' */
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL73;
    }
    if (likely(PyUnicode_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals, "str", cpy_r_r64);
        goto CPyL73;
    }
    cpy_r_r66 = CPyStatic_cstring___CHAR_MAP;
    if (unlikely(cpy_r_r66 == NULL)) {
        goto CPyL75;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAR_MAP\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r68 = CPyStatic_cstring___globals;
    cpy_r_r69 = CPyStatics[1416]; /* 'c' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL76;
    }
    if (likely(PyUnicode_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals, "str", cpy_r_r70);
        goto CPyL76;
    }
    cpy_r_r72 = CPyModule_builtins;
    cpy_r_r73 = CPyStatics[5541]; /* 'ord' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r75[1] = {cpy_r_r71};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r71);
    if (likely(PyLong_Check(cpy_r_r77)))
        cpy_r_r78 = CPyTagged_FromObject(cpy_r_r77);
    else {
        CPy_TypeError("int", cpy_r_r77); cpy_r_r78 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL76;
    }
    cpy_r_r79 = CPyList_SetItem(cpy_r_r66, cpy_r_r78, cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r78);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 30, CPyStatic_cstring___globals);
        goto CPyL73;
    }
    cpy_r_r80 = cpy_r_r52 + 2;
    cpy_r_r52 = cpy_r_r80;
    goto CPyL19;
CPyL35: ;
    cpy_r_r81 = CPyStatics[385]; /* "'" */
    cpy_r_r82 = CPyStatics[178]; /* '"' */
    cpy_r_r83 = CPyStatics[5539]; /* '\\' */
    cpy_r_r84 = CPyStatics[1446]; /* 'a' */
    cpy_r_r85 = CPyStatics[1443]; /* 'b' */
    cpy_r_r86 = CPyStatics[1466]; /* 'f' */
    cpy_r_r87 = CPyStatics[445]; /* 'n' */
    cpy_r_r88 = CPyStatics[1447]; /* 'r' */
    cpy_r_r89 = CPyStatics[6855]; /* 't' */
    cpy_r_r90 = CPyStatics[6856]; /* 'v' */
    cpy_r_r91.f0 = cpy_r_r81;
    cpy_r_r91.f1 = cpy_r_r82;
    cpy_r_r91.f2 = cpy_r_r83;
    cpy_r_r91.f3 = cpy_r_r84;
    cpy_r_r91.f4 = cpy_r_r85;
    cpy_r_r91.f5 = cpy_r_r86;
    cpy_r_r91.f6 = cpy_r_r87;
    cpy_r_r91.f7 = cpy_r_r88;
    cpy_r_r91.f8 = cpy_r_r89;
    cpy_r_r91.f9 = cpy_r_r90;
    CPy_INCREF(cpy_r_r91.f0);
    CPy_INCREF(cpy_r_r91.f1);
    CPy_INCREF(cpy_r_r91.f2);
    CPy_INCREF(cpy_r_r91.f3);
    CPy_INCREF(cpy_r_r91.f4);
    CPy_INCREF(cpy_r_r91.f5);
    CPy_INCREF(cpy_r_r91.f6);
    CPy_INCREF(cpy_r_r91.f7);
    CPy_INCREF(cpy_r_r91.f8);
    CPy_INCREF(cpy_r_r91.f9);
    cpy_r_r92 = PyTuple_New(10);
    if (unlikely(cpy_r_r92 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9131 = cpy_r_r91.f0;
    PyTuple_SET_ITEM(cpy_r_r92, 0, __tmp9131);
    PyObject *__tmp9132 = cpy_r_r91.f1;
    PyTuple_SET_ITEM(cpy_r_r92, 1, __tmp9132);
    PyObject *__tmp9133 = cpy_r_r91.f2;
    PyTuple_SET_ITEM(cpy_r_r92, 2, __tmp9133);
    PyObject *__tmp9134 = cpy_r_r91.f3;
    PyTuple_SET_ITEM(cpy_r_r92, 3, __tmp9134);
    PyObject *__tmp9135 = cpy_r_r91.f4;
    PyTuple_SET_ITEM(cpy_r_r92, 4, __tmp9135);
    PyObject *__tmp9136 = cpy_r_r91.f5;
    PyTuple_SET_ITEM(cpy_r_r92, 5, __tmp9136);
    PyObject *__tmp9137 = cpy_r_r91.f6;
    PyTuple_SET_ITEM(cpy_r_r92, 6, __tmp9137);
    PyObject *__tmp9138 = cpy_r_r91.f7;
    PyTuple_SET_ITEM(cpy_r_r92, 7, __tmp9138);
    PyObject *__tmp9139 = cpy_r_r91.f8;
    PyTuple_SET_ITEM(cpy_r_r92, 8, __tmp9139);
    PyObject *__tmp9140 = cpy_r_r91.f9;
    PyTuple_SET_ITEM(cpy_r_r92, 9, __tmp9140);
    cpy_r_r93 = PyObject_GetIter(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 34, CPyStatic_cstring___globals);
        goto CPyL68;
    }
CPyL36: ;
    cpy_r_r94 = PyIter_Next(cpy_r_r93);
    if (cpy_r_r94 == NULL) goto CPyL78;
    if (likely(PyUnicode_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 34, CPyStatic_cstring___globals, "str", cpy_r_r94);
        goto CPyL79;
    }
    cpy_r_r96 = CPyStatic_cstring___globals;
    cpy_r_r97 = CPyStatics[1416]; /* 'c' */
    cpy_r_r98 = CPyDict_SetItem(cpy_r_r96, cpy_r_r97, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 34, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r100 = CPyStatics[5539]; /* '\\' */
    cpy_r_r101 = CPyStatic_cstring___globals;
    cpy_r_r102 = CPyStatics[1416]; /* 'c' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 35, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 35, CPyStatic_cstring___globals, "str", cpy_r_r103);
        goto CPyL79;
    }
    cpy_r_r105 = CPyStr_Build(2, cpy_r_r100, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 35, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r106 = CPyStatic_cstring___globals;
    cpy_r_r107 = CPyStatics[6857]; /* 'escaped' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r106, cpy_r_r107, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 35, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r110 = CPyStatic_cstring___globals;
    cpy_r_r111 = CPyStatics[6857]; /* 'escaped' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 36, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 36, CPyStatic_cstring___globals, "str", cpy_r_r112);
        goto CPyL79;
    }
    cpy_r_r114 = CPyStatics[3794]; /* 'ascii' */
    cpy_r_r115 = CPy_Encode(cpy_r_r113, cpy_r_r114, NULL);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 36, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r116 = CPyStatics[6858]; /* 'unicode_escape' */
    cpy_r_r117 = CPy_Decode(cpy_r_r115, cpy_r_r116, NULL);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 36, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r118 = CPyStatic_cstring___globals;
    cpy_r_r119 = CPyStatics[6859]; /* 'decoded' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 36, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    cpy_r_r122 = CPyStatic_cstring___globals;
    cpy_r_r123 = CPyStatics[6857]; /* 'escaped' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL79;
    }
    if (likely(PyUnicode_Check(cpy_r_r124)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals, "str", cpy_r_r124);
        goto CPyL79;
    }
    cpy_r_r126 = CPyStatic_cstring___CHAR_MAP;
    if (unlikely(cpy_r_r126 == NULL)) {
        goto CPyL80;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAR_MAP\" was not set");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r128 = CPyStatic_cstring___globals;
    cpy_r_r129 = CPyStatics[6859]; /* 'decoded' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL81;
    }
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals, "str", cpy_r_r130);
        goto CPyL81;
    }
    cpy_r_r132 = CPyModule_builtins;
    cpy_r_r133 = CPyStatics[5541]; /* 'ord' */
    cpy_r_r134 = CPyObject_GetAttr(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r135[1] = {cpy_r_r131};
    cpy_r_r136 = (PyObject **)&cpy_r_r135;
    cpy_r_r137 = _PyObject_Vectorcall(cpy_r_r134, cpy_r_r136, 1, 0);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_r131);
    if (likely(PyLong_Check(cpy_r_r137)))
        cpy_r_r138 = CPyTagged_FromObject(cpy_r_r137);
    else {
        CPy_TypeError("int", cpy_r_r137); cpy_r_r138 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL81;
    }
    cpy_r_r139 = CPyList_SetItem(cpy_r_r126, cpy_r_r138, cpy_r_r125);
    CPyTagged_DECREF(cpy_r_r138);
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 37, CPyStatic_cstring___globals);
        goto CPyL79;
    } else
        goto CPyL36;
CPyL59: ;
    cpy_r_r140 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 34, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    cpy_r_r141 = CPyStatics[6860]; /* '\\?' */
    cpy_r_r142 = CPyStatic_cstring___CHAR_MAP;
    if (likely(cpy_r_r142 != NULL)) goto CPyL63;
    PyErr_SetString(PyExc_NameError, "value for final name \"CHAR_MAP\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 40, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r144 = CPyStatics[1167]; /* '?' */
    cpy_r_r145 = CPyModule_builtins;
    cpy_r_r146 = CPyStatics[5541]; /* 'ord' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 40, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r148[1] = {cpy_r_r144};
    cpy_r_r149 = (PyObject **)&cpy_r_r148;
    cpy_r_r150 = _PyObject_Vectorcall(cpy_r_r147, cpy_r_r149, 1, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 40, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    if (likely(PyLong_Check(cpy_r_r150)))
        cpy_r_r151 = CPyTagged_FromObject(cpy_r_r150);
    else {
        CPy_TypeError("int", cpy_r_r150); cpy_r_r151 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 40, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r141);
    cpy_r_r152 = CPyList_SetItem(cpy_r_r142, cpy_r_r151, cpy_r_r141);
    CPyTagged_DECREF(cpy_r_r151);
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypyc/codegen/cstring.py", "<module>", 40, CPyStatic_cstring___globals);
        goto CPyL68;
    }
    return 1;
CPyL68: ;
    cpy_r_r153 = 2;
    return cpy_r_r153;
CPyL69: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL15;
CPyL70: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r31);
    goto CPyL68;
CPyL71: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL68;
CPyL72: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r35);
    goto CPyL68;
CPyL73: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL68;
CPyL74: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL35;
CPyL75: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r65);
    goto CPyL26;
CPyL76: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r65);
    goto CPyL68;
CPyL77: ;
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r71);
    goto CPyL68;
CPyL78: ;
    CPy_DECREF(cpy_r_r93);
    goto CPyL59;
CPyL79: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL68;
CPyL80: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r125);
    goto CPyL51;
CPyL81: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r125);
    goto CPyL68;
CPyL82: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    goto CPyL68;
}
