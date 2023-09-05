#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef mypymodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypymodule = {
    PyModuleDef_HEAD_INIT,
    "mypy",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypymodule_methods
};

PyObject *CPyInit_mypy(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy_internal) {
        Py_INCREF(CPyModule_mypy_internal);
        return CPyModule_mypy_internal;
    }
    CPyModule_mypy_internal = PyModule_Create(&mypymodule);
    if (unlikely(CPyModule_mypy_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy_internal, "__name__");
    CPyStatic_mypy___globals = PyModule_GetDict(CPyModule_mypy_internal);
    if (unlikely(CPyStatic_mypy___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy_internal;
    fail:
    Py_CLEAR(CPyModule_mypy_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_mypy_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/__init__.py", "<module>", -1, CPyStatic_mypy___globals);
        goto CPyL4;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}
