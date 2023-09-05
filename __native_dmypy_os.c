#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef dmypy_osmodule_methods[] = {
    {"alive", (PyCFunction)CPyPy_dmypy_os___alive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"kill", (PyCFunction)CPyPy_dmypy_os___kill, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dmypy_osmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.dmypy_os",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dmypy_osmodule_methods
};

PyObject *CPyInit_mypy___dmypy_os(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___dmypy_os_internal) {
        Py_INCREF(CPyModule_mypy___dmypy_os_internal);
        return CPyModule_mypy___dmypy_os_internal;
    }
    CPyModule_mypy___dmypy_os_internal = PyModule_Create(&dmypy_osmodule);
    if (unlikely(CPyModule_mypy___dmypy_os_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___dmypy_os_internal, "__name__");
    CPyStatic_dmypy_os___globals = PyModule_GetDict(CPyModule_mypy___dmypy_os_internal);
    if (unlikely(CPyStatic_dmypy_os___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dmypy_os_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___dmypy_os_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___dmypy_os_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_dmypy_os___alive(CPyTagged cpy_r_pid) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 23, CPyStatic_dmypy_os___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_os.py", "alive", 23, CPyStatic_dmypy_os___globals, "str", cpy_r_r2);
        goto CPyL19;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 23, CPyStatic_dmypy_os___globals);
        goto CPyL19;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 25, CPyStatic_dmypy_os___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = CPyModule_os;
    cpy_r_r13 = CPyStatics[1770]; /* 'kill' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 31, CPyStatic_dmypy_os___globals);
        goto CPyL11;
    }
    CPyTagged_INCREF(cpy_r_pid);
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_pid);
    cpy_r_r16 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r17[2] = {cpy_r_r15, cpy_r_r16};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r18, 2, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 31, CPyStatic_dmypy_os___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL10: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL18;
CPyL11: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "alive", 32, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL14;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    return 0;
CPyL14: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL22;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL19;
    CPy_Unreachable();
CPyL18: ;
    return 1;
CPyL19: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL20: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL11;
CPyL21: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL10;
CPyL22: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL15;
}

PyObject *CPyPy_dmypy_os___alive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"pid", 0};
    static CPyArg_Parser parser = {"O:alive", kwlist, 0};
    PyObject *obj_pid;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pid)) {
        return NULL;
    }
    CPyTagged arg_pid;
    if (likely(PyLong_Check(obj_pid)))
        arg_pid = CPyTagged_BorrowFromObject(obj_pid);
    else {
        CPy_TypeError("int", obj_pid); goto fail;
    }
    char retval = CPyDef_dmypy_os___alive(arg_pid);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_os.py", "alive", 21, CPyStatic_dmypy_os___globals);
    return NULL;
}

char CPyDef_dmypy_os___kill(CPyTagged cpy_r_pid) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 39, CPyStatic_dmypy_os___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_os.py", "kill", 39, CPyStatic_dmypy_os___globals, "str", cpy_r_r2);
        goto CPyL13;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 39, CPyStatic_dmypy_os___globals);
        goto CPyL13;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 40, CPyStatic_dmypy_os___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = CPyModule_signal;
    cpy_r_r13 = CPyStatics[1916]; /* 'SIGKILL' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 42, CPyStatic_dmypy_os___globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyModule_os;
    cpy_r_r16 = CPyStatics[1770]; /* 'kill' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 42, CPyStatic_dmypy_os___globals);
        goto CPyL14;
    }
    CPyTagged_INCREF(cpy_r_pid);
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_pid);
    PyObject *cpy_r_r19[2] = {cpy_r_r18, cpy_r_r14};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r20, 2, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "kill", 42, CPyStatic_dmypy_os___globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL11: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r14);
    return 1;
CPyL13: ;
    cpy_r_r22 = 2;
    return cpy_r_r22;
CPyL14: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL11;
}

PyObject *CPyPy_dmypy_os___kill(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"pid", 0};
    static CPyArg_Parser parser = {"O:kill", kwlist, 0};
    PyObject *obj_pid;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_pid)) {
        return NULL;
    }
    CPyTagged arg_pid;
    if (likely(PyLong_Check(obj_pid)))
        arg_pid = CPyTagged_BorrowFromObject(obj_pid);
    else {
        CPy_TypeError("int", obj_pid); goto fail;
    }
    char retval = CPyDef_dmypy_os___kill(arg_pid);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy_os.py", "kill", 37, CPyStatic_dmypy_os___globals);
    return NULL;
}

char CPyDef_dmypy_os_____top_level__(void) {
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
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject **cpy_r_r35;
    PyObject **cpy_r_r36;
    void *cpy_r_r38;
    void *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", -1, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dmypy_os___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", 1, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9067]; /* (('sys', 'sys', 'sys'),) */
    cpy_r_r15 = CPyStatic_dmypy_os___globals;
    cpy_r_r16 = CPyStatics[1917]; /* 'mypy/dmypy_os.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL16;
    cpy_r_r19 = CPyStatics[9330]; /* ('Any', 'Callable') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_dmypy_os___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", 4, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyModule_sys;
    cpy_r_r24 = CPyStatics[305]; /* 'platform' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", 6, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy_os.py", "<module>", 6, CPyStatic_dmypy_os___globals, "str", cpy_r_r25);
        goto CPyL16;
    }
    cpy_r_r27 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL11;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL11;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", 6, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL14;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/dmypy_os.py", "<module>", 7, CPyStatic_dmypy_os___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r35 = (PyObject **)&CPyModule_os;
    cpy_r_r36 = (PyObject **)&CPyModule_signal;
    PyObject **cpy_r_r37[2] = {cpy_r_r35, cpy_r_r36};
    cpy_r_r38 = (void *)&cpy_r_r37;
    int64_t cpy_r_r39[2] = {17, 18};
    cpy_r_r40 = (void *)&cpy_r_r39;
    cpy_r_r41 = CPyStatics[9332]; /* (('os', 'os', 'os'), ('signal', 'signal', 'signal')) */
    cpy_r_r42 = CPyStatic_dmypy_os___globals;
    cpy_r_r43 = CPyStatics[1917]; /* 'mypy/dmypy_os.py' */
    cpy_r_r44 = CPyStatics[17]; /* '<module>' */
    cpy_r_r45 = CPyImport_ImportMany(cpy_r_r41, cpy_r_r38, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r40);
    if (!cpy_r_r45) goto CPyL16;
    return 1;
CPyL16: ;
    cpy_r_r46 = 2;
    return cpy_r_r46;
}
