#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"
static PyMethodDef parsemodule_methods[] = {
    {"parse", (PyCFunction)CPyPy_parse___parse, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef parsemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.parse",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    parsemodule_methods
};

PyObject *CPyInit_mypy___parse(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___parse_internal) {
        Py_INCREF(CPyModule_mypy___parse_internal);
        return CPyModule_mypy___parse_internal;
    }
    CPyModule_mypy___parse_internal = PyModule_Create(&parsemodule);
    if (unlikely(CPyModule_mypy___parse_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___parse_internal, "__name__");
    CPyStatic_parse___globals = PyModule_GetDict(CPyModule_mypy___parse_internal);
    if (unlikely(CPyStatic_parse___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_parse_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___parse_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___parse_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_parse___parse(PyObject *cpy_r_source, PyObject *cpy_r_fnam, PyObject *cpy_r_module, PyObject *cpy_r_errors, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypy___options___OptionsObject *)cpy_r_options)->_transform_source;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL12;
    cpy_r_r3 = ((mypy___options___OptionsObject *)cpy_r_options)->_transform_source;
    CPy_INCREF(cpy_r_r3);
    PyObject *cpy_r_r4[1] = {cpy_r_source};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "parse", 19, CPyStatic_parse___globals);
        goto CPyL11;
    }
    if (PyUnicode_Check(cpy_r_r6))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL4614;
    if (PyBytes_Check(cpy_r_r6) || PyByteArray_Check(cpy_r_r6))
        cpy_r_r7 = cpy_r_r6;
    else {
        cpy_r_r7 = NULL;
    }
    if (cpy_r_r7 != NULL) goto __LL4614;
    CPy_TypeErrorTraceback("mypy/parse.py", "parse", 19, CPyStatic_parse___globals, "union[str, bytes]", cpy_r_r6);
    goto CPyL11;
__LL4614: ;
    cpy_r_source = cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyStatic_parse___globals;
    cpy_r_r9 = CPyModule_mypy___fastparse;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    if (cpy_r_r11) goto CPyL7;
    cpy_r_r12 = CPyStatics[2331]; /* 'mypy.fastparse' */
    cpy_r_r13 = PyImport_Import(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "parse", 20, CPyStatic_parse___globals);
        goto CPyL13;
    }
    CPyModule_mypy___fastparse = cpy_r_r13;
    CPy_INCREF(CPyModule_mypy___fastparse);
    CPy_DECREF(cpy_r_r13);
CPyL7: ;
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = PyImport_GetModuleDict();
    cpy_r_r16 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "parse", 20, CPyStatic_parse___globals);
        goto CPyL13;
    }
    cpy_r_r18 = CPyDict_SetItem(cpy_r_r8, cpy_r_r14, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/parse.py", "parse", 20, CPyStatic_parse___globals);
        goto CPyL13;
    }
    cpy_r_r20 = CPyDef_fastparse___parse(cpy_r_source, cpy_r_fnam, cpy_r_module, cpy_r_errors, cpy_r_options);
    CPy_DECREF(cpy_r_source);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "parse", 22, CPyStatic_parse___globals);
        goto CPyL11;
    }
    return cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL12: ;
    CPy_INCREF(cpy_r_source);
    goto CPyL4;
CPyL13: ;
    CPy_DecRef(cpy_r_source);
    goto CPyL11;
}

PyObject *CPyPy_parse___parse(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"source", "fnam", "module", "errors", "options", 0};
    static CPyArg_Parser parser = {"OOOOO:parse", kwlist, 0};
    PyObject *obj_source;
    PyObject *obj_fnam;
    PyObject *obj_module;
    PyObject *obj_errors;
    PyObject *obj_options;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_source, &obj_fnam, &obj_module, &obj_errors, &obj_options)) {
        return NULL;
    }
    PyObject *arg_source;
    if (PyUnicode_Check(obj_source))
        arg_source = obj_source;
    else {
        arg_source = NULL;
    }
    if (arg_source != NULL) goto __LL4615;
    if (PyBytes_Check(obj_source) || PyByteArray_Check(obj_source))
        arg_source = obj_source;
    else {
        arg_source = NULL;
    }
    if (arg_source != NULL) goto __LL4615;
    CPy_TypeError("union[str, bytes]", obj_source); 
    goto fail;
__LL4615: ;
    PyObject *arg_fnam;
    if (likely(PyUnicode_Check(obj_fnam)))
        arg_fnam = obj_fnam;
    else {
        CPy_TypeError("str", obj_fnam); 
        goto fail;
    }
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL4616;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL4616;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL4616: ;
    PyObject *arg_errors;
    if (Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors)
        arg_errors = obj_errors;
    else {
        arg_errors = NULL;
    }
    if (arg_errors != NULL) goto __LL4617;
    if (obj_errors == Py_None)
        arg_errors = obj_errors;
    else {
        arg_errors = NULL;
    }
    if (arg_errors != NULL) goto __LL4617;
    CPy_TypeError("mypy.errors.Errors or None", obj_errors); 
    goto fail;
__LL4617: ;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *retval = CPyDef_parse___parse(arg_source, arg_fnam, arg_module, arg_errors, arg_options);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/parse.py", "parse", 8, CPyStatic_parse___globals);
    return NULL;
}

char CPyDef_parse_____top_level__(void) {
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
    char cpy_r_r21;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "<module>", -1, CPyStatic_parse___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_parse___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "<module>", 1, CPyStatic_parse___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r10 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r11 = CPyStatic_parse___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "<module>", 3, CPyStatic_parse___globals);
        goto CPyL8;
    }
    CPyModule_mypy___errors = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9536]; /* ('MypyFile',) */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_parse___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "<module>", 4, CPyStatic_parse___globals);
        goto CPyL8;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r18 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r19 = CPyStatic_parse___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/parse.py", "<module>", 5, CPyStatic_parse___globals);
        goto CPyL8;
    }
    CPyModule_mypy___options = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r20);
    return 1;
CPyL8: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
}
