#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef triggermodule_methods[] = {
    {"make_trigger", (PyCFunction)CPyPy_trigger___make_trigger, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_wildcard_trigger", (PyCFunction)CPyPy_trigger___make_wildcard_trigger, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef triggermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.server.trigger",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    triggermodule_methods
};

PyObject *CPyInit_mypy___server___trigger(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___server___trigger_internal) {
        Py_INCREF(CPyModule_mypy___server___trigger_internal);
        return CPyModule_mypy___server___trigger_internal;
    }
    CPyModule_mypy___server___trigger_internal = PyModule_Create(&triggermodule);
    if (unlikely(CPyModule_mypy___server___trigger_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___server___trigger_internal, "__name__");
    CPyStatic_trigger___globals = PyModule_GetDict(CPyModule_mypy___server___trigger_internal);
    if (unlikely(CPyStatic_trigger___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_trigger_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___server___trigger_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___server___trigger_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_trigger___make_trigger(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[2465]; /* '<' */
    cpy_r_r1 = CPyStatics[840]; /* '>' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/server/trigger.py", "make_trigger", 14, CPyStatic_trigger___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_trigger___make_trigger(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:make_trigger", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_trigger___make_trigger(arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/trigger.py", "make_trigger", 13, CPyStatic_trigger___globals);
    return NULL;
}

PyObject *CPyDef_trigger___make_wildcard_trigger(PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[2465]; /* '<' */
    cpy_r_r1 = CPyStatics[5359]; /* '[wildcard]' */
    cpy_r_r2 = CPyStatics[840]; /* '>' */
    cpy_r_r3 = CPyStr_Build(4, cpy_r_r0, cpy_r_module, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/server/trigger.py", "make_wildcard_trigger", 26, CPyStatic_trigger___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_trigger___make_wildcard_trigger(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:make_wildcard_trigger", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *retval = CPyDef_trigger___make_wildcard_trigger(arg_module);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/server/trigger.py", "make_wildcard_trigger", 17, CPyStatic_trigger___globals);
    return NULL;
}

char CPyDef_trigger_____top_level__(void) {
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
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/server/trigger.py", "<module>", -1, CPyStatic_trigger___globals);
        goto CPyL7;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_trigger___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/server/trigger.py", "<module>", 3, CPyStatic_trigger___globals);
        goto CPyL7;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_trigger___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/server/trigger.py", "<module>", 5, CPyStatic_trigger___globals);
        goto CPyL7;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[5359]; /* '[wildcard]' */
    cpy_r_r14 = CPyStatic_trigger___globals;
    cpy_r_r15 = CPyStatics[5360]; /* 'WILDCARD_TAG' */
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r14, cpy_r_r15, cpy_r_r13);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/server/trigger.py", "<module>", 10, CPyStatic_trigger___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r18 = 2;
    return cpy_r_r18;
}
