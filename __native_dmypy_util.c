#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef dmypy_utilmodule_methods[] = {
    {"receive", (PyCFunction)CPyPy_dmypy_util___receive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dmypy_utilmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.dmypy_util",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dmypy_utilmodule_methods
};

PyObject *CPyInit_mypy___dmypy_util(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___dmypy_util_internal) {
        Py_INCREF(CPyModule_mypy___dmypy_util_internal);
        return CPyModule_mypy___dmypy_util_internal;
    }
    CPyModule_mypy___dmypy_util_internal = PyModule_Create(&dmypy_utilmodule);
    if (unlikely(CPyModule_mypy___dmypy_util_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___dmypy_util_internal, "__name__");
    CPyStatic_dmypy_util___globals = PyModule_GetDict(CPyModule_mypy___dmypy_util_internal);
    if (unlikely(CPyStatic_dmypy_util___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dmypy_util_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___dmypy_util_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___dmypy_util_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_dmypy_util___receive(PyObject *cpy_r_connection) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_bdata;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_data;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ipc___IPCBase___read(cpy_r_connection, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 22, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    cpy_r_bdata = cpy_r_r1;
    cpy_r_r2 = PyObject_IsTrue(cpy_r_bdata);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 22, CPyStatic_dmypy_util___globals);
        goto CPyL32;
    }
    cpy_r_r4 = cpy_r_r2;
    if (cpy_r_r4) {
        goto CPyL7;
    } else
        goto CPyL33;
CPyL3: ;
    cpy_r_r5 = CPyStatics[2015]; /* 'No data received' */
    cpy_r_r6 = CPyModule_builtins;
    cpy_r_r7 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 24, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r5};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 24, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    CPy_Raise(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 24, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r12 = CPyStatics[1752]; /* 'utf8' */
    cpy_r_r13 = CPy_Decode(cpy_r_bdata, cpy_r_r12, NULL);
    CPy_DECREF(cpy_r_bdata);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 26, CPyStatic_dmypy_util___globals);
        goto CPyL11;
    }
    cpy_r_r14 = CPyModule_json;
    cpy_r_r15 = CPyStatics[234]; /* 'loads' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 26, CPyStatic_dmypy_util___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 26, CPyStatic_dmypy_util___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_data = cpy_r_r19;
    goto CPyL21;
CPyL11: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 27, CPyStatic_dmypy_util___globals);
        goto CPyL19;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL17;
    cpy_r_r25 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r25;
    CPy_DecRef(cpy_r_e);
    cpy_r_r26 = CPyStatics[2016]; /* 'Data received is not valid JSON' */
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 28, CPyStatic_dmypy_util___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DecRef(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 28, CPyStatic_dmypy_util___globals);
        goto CPyL19;
    }
    CPy_Raise(cpy_r_r32);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 28, CPyStatic_dmypy_util___globals);
        goto CPyL19;
    } else
        goto CPyL35;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL36;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL31;
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r34 = (PyObject *)&PyDict_Type;
    cpy_r_r35 = PyObject_IsInstance(cpy_r_data, cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 29, CPyStatic_dmypy_util___globals);
        goto CPyL37;
    }
    cpy_r_r37 = cpy_r_r35;
    if (cpy_r_r37) goto CPyL29;
    cpy_r_r38 = CPyStatics[2017]; /* 'Data received is not a dict (' */
    cpy_r_r39 = PyObject_Type(cpy_r_data);
    CPy_DECREF(cpy_r_data);
    cpy_r_r40 = PyObject_Str(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 30, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    cpy_r_r41 = CPyStatics[72]; /* ')' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_r38, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 30, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 30, CPyStatic_dmypy_util___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r46[1] = {cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 30, CPyStatic_dmypy_util___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_Raise(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "receive", 30, CPyStatic_dmypy_util___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL29: ;
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r49 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_util.py", "receive", 31, CPyStatic_dmypy_util___globals, "dict", cpy_r_data);
        goto CPyL31;
    }
    return cpy_r_r49;
CPyL31: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL32: ;
    CPy_DecRef(cpy_r_bdata);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_bdata);
    goto CPyL3;
CPyL34: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL11;
CPyL35: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL16;
CPyL36: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_data);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL31;
}

PyObject *CPyPy_dmypy_util___receive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"connection", 0};
    static CPyArg_Parser parser = {"O:receive", kwlist, 0};
    PyObject *obj_connection;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_connection)) {
        return NULL;
    }
    PyObject *arg_connection;
    if (likely((Py_TYPE(obj_connection) == CPyType_ipc___IPCClient) || (Py_TYPE(obj_connection) == CPyType_ipc___IPCServer) || (Py_TYPE(obj_connection) == CPyType_ipc___IPCBase)))
        arg_connection = obj_connection;
    else {
        CPy_TypeError("mypy.ipc.IPCBase", obj_connection); 
        goto fail;
    }
    PyObject *retval = CPyDef_dmypy_util___receive(arg_connection);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy_util.py", "receive", 16, CPyStatic_dmypy_util___globals);
    return NULL;
}

char CPyDef_dmypy_util_____top_level__(void) {
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
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "<module>", -1, CPyStatic_dmypy_util___globals);
        goto CPyL9;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dmypy_util___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "<module>", 6, CPyStatic_dmypy_util___globals);
        goto CPyL9;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_json;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {8};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9354]; /* (('json', 'json', 'json'),) */
    cpy_r_r15 = CPyStatic_dmypy_util___globals;
    cpy_r_r16 = CPyStatics[2018]; /* 'mypy/dmypy_util.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL9;
    cpy_r_r19 = CPyStatics[9355]; /* ('Any', 'Final') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_dmypy_util___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "<module>", 9, CPyStatic_dmypy_util___globals);
        goto CPyL9;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9356]; /* ('IPCBase',) */
    cpy_r_r24 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r25 = CPyStatic_dmypy_util___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "<module>", 11, CPyStatic_dmypy_util___globals);
        goto CPyL9;
    }
    CPyModule_mypy___ipc = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___ipc);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[1789]; /* '.dmypy.json' */
    cpy_r_r28 = CPyStatic_dmypy_util___globals;
    cpy_r_r29 = CPyStatics[1772]; /* 'DEFAULT_STATUS_FILE' */
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r28, cpy_r_r29, cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/dmypy_util.py", "<module>", 13, CPyStatic_dmypy_util___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
}
