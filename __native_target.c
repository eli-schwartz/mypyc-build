#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef targetmodule_methods[] = {
    {"trigger_to_target", (PyCFunction)CPyPy_target___trigger_to_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef targetmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.target",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    targetmodule_methods
};

PyObject *CPyInit_mypy___server___target(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___target_internal) {
        Py_INCREF(CPyModule_mypy___server___target_internal);
        return CPyModule_mypy___server___target_internal;
    }
    CPyModule_mypy___server___target_internal = PyModule_Create(&targetmodule);
    if (unlikely(CPyModule_mypy___server___target_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___target_internal, "__name__");
    CPyStatic_target___globals = PyModule_GetDict(CPyModule_mypy___server___target_internal);
    if (unlikely(CPyStatic_target___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_target_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___target_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___target_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_target___trigger_to_target(PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = CPyStr_GetItem(cpy_r_s, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 5, CPyStatic_target___globals);
        goto CPyL19;
    }
    cpy_r_r1 = CPyStatics[2465]; /* '<' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 5, CPyStatic_target___globals);
        goto CPyL19;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (cpy_r_r7) goto CPyL7;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 5, CPyStatic_target___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r9 = CPyStr_GetSlice(cpy_r_s, 2, -2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 7, CPyStatic_target___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/server/target.py", "trigger_to_target", 7, CPyStatic_target___globals, "str", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_s = cpy_r_r10;
    cpy_r_r11 = CPyStr_GetItem(cpy_r_s, -2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 9, CPyStatic_target___globals);
        goto CPyL20;
    }
    cpy_r_r12 = CPyStatics[208]; /* ']' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL13;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL13;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 9, CPyStatic_target___globals);
        goto CPyL20;
    }
CPyL13: ;
    cpy_r_r18 = cpy_r_r13 == 0;
    if (!cpy_r_r18) goto CPyL18;
    cpy_r_r19 = CPyStatics[207]; /* '[' */
    cpy_r_r20 = PyUnicode_Split(cpy_r_s, cpy_r_r19, -1);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 10, CPyStatic_target___globals);
        goto CPyL19;
    }
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_r20, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 10, CPyStatic_target___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/server/target.py", "trigger_to_target", 10, CPyStatic_target___globals, "str", cpy_r_r21);
        goto CPyL19;
    }
    cpy_r_s = cpy_r_r22;
CPyL18: ;
    return cpy_r_s;
CPyL19: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL20: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL19;
}

PyObject *CPyPy_target___trigger_to_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:trigger_to_target", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_target___trigger_to_target(arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/target.py", "trigger_to_target", 4, CPyStatic_target___globals);
    return NULL;
}

char CPyDef_target_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "<module>", -1, CPyStatic_target___globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_target___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/target.py", "<module>", 1, CPyStatic_target___globals);
        goto CPyL5;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}
