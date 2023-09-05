#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *semanal_main___process_functions_env_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_main___process_functions_env(void);

static PyObject *
semanal_main___process_functions_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_main___process_functions_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_main___process_functions_env_setup(type);
}

static int
semanal_main___process_functions_env_traverse(mypy___semanal_main___process_functions_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_scc);
    Py_VISIT(self->_patches);
    Py_VISIT(self->_module);
    Py_VISIT(self->_tree);
    Py_VISIT(self->_analyzer);
    return 0;
}

static int
semanal_main___process_functions_env_clear(mypy___semanal_main___process_functions_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_scc);
    Py_CLEAR(self->_patches);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_tree);
    Py_CLEAR(self->_analyzer);
    return 0;
}

static void
semanal_main___process_functions_env_dealloc(mypy___semanal_main___process_functions_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_main___process_functions_env_dealloc)
    semanal_main___process_functions_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_main___process_functions_env_vtable[1];
static bool
CPyDef_semanal_main___process_functions_env_trait_vtable_setup(void)
{
    CPyVTableItem semanal_main___process_functions_env_vtable_scratch[] = {
        NULL
    };
    memcpy(semanal_main___process_functions_env_vtable, semanal_main___process_functions_env_vtable_scratch, sizeof(semanal_main___process_functions_env_vtable));
    return 1;
}

static PyMethodDef semanal_main___process_functions_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_main___process_functions_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "process_functions_env",
    .tp_new = semanal_main___process_functions_env_new,
    .tp_dealloc = (destructor)semanal_main___process_functions_env_dealloc,
    .tp_traverse = (traverseproc)semanal_main___process_functions_env_traverse,
    .tp_clear = (inquiry)semanal_main___process_functions_env_clear,
    .tp_methods = semanal_main___process_functions_env_methods,
    .tp_basicsize = sizeof(mypy___semanal_main___process_functions_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_semanal_main___process_functions_env_template = &CPyType_semanal_main___process_functions_env_template_;

static PyObject *
semanal_main___process_functions_env_setup(PyTypeObject *type)
{
    mypy___semanal_main___process_functions_envObject *self;
    self = (mypy___semanal_main___process_functions_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_main___process_functions_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_main___process_functions_env(void)
{
    PyObject *self = semanal_main___process_functions_env_setup(CPyType_semanal_main___process_functions_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__semanal_main_____mypyc_lambda__0_process_functions_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__(self, instance, owner);
}
PyMemberDef semanal_main_____mypyc_lambda__0_process_functions_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *semanal_main_____mypyc_lambda__0_process_functions_obj_setup(PyTypeObject *type);
PyObject *CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj(void);

static PyObject *
semanal_main_____mypyc_lambda__0_process_functions_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return semanal_main_____mypyc_lambda__0_process_functions_obj_setup(type);
}

static int
semanal_main_____mypyc_lambda__0_process_functions_obj_traverse(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject))));
    return 0;
}

static int
semanal_main_____mypyc_lambda__0_process_functions_obj_clear(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject))));
    return 0;
}

static void
semanal_main_____mypyc_lambda__0_process_functions_obj_dealloc(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, semanal_main_____mypyc_lambda__0_process_functions_obj_dealloc)
    semanal_main_____mypyc_lambda__0_process_functions_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem semanal_main_____mypyc_lambda__0_process_functions_obj_vtable[2];
static bool
CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_trait_vtable_setup(void)
{
    CPyVTableItem semanal_main_____mypyc_lambda__0_process_functions_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__,
        (CPyVTableItem)CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__,
    };
    memcpy(semanal_main_____mypyc_lambda__0_process_functions_obj_vtable, semanal_main_____mypyc_lambda__0_process_functions_obj_vtable_scratch, sizeof(semanal_main_____mypyc_lambda__0_process_functions_obj_vtable));
    return 1;
}

static PyMethodDef semanal_main_____mypyc_lambda__0_process_functions_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_process_functions_obj",
    .tp_new = semanal_main_____mypyc_lambda__0_process_functions_obj_new,
    .tp_dealloc = (destructor)semanal_main_____mypyc_lambda__0_process_functions_obj_dealloc,
    .tp_traverse = (traverseproc)semanal_main_____mypyc_lambda__0_process_functions_obj_traverse,
    .tp_clear = (inquiry)semanal_main_____mypyc_lambda__0_process_functions_obj_clear,
    .tp_methods = semanal_main_____mypyc_lambda__0_process_functions_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__semanal_main_____mypyc_lambda__0_process_functions_obj,
    .tp_members = semanal_main_____mypyc_lambda__0_process_functions_obj_members,
    .tp_basicsize = sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject),
    .tp_weaklistoffset = sizeof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj_template = &CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj_template_;

static PyObject *
semanal_main_____mypyc_lambda__0_process_functions_obj_setup(PyTypeObject *type)
{
    mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *self;
    self = (mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = semanal_main_____mypyc_lambda__0_process_functions_obj_vtable;
    self->vectorcall = CPyPy_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj(void)
{
    PyObject *self = semanal_main_____mypyc_lambda__0_process_functions_obj_setup(CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef semanal_mainmodule_methods[] = {
    {"semantic_analysis_for_scc", (PyCFunction)CPyPy_semanal_main___semantic_analysis_for_scc, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"cleanup_builtin_scc", (PyCFunction)CPyPy_semanal_main___cleanup_builtin_scc, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"semantic_analysis_for_targets", (PyCFunction)CPyPy_semanal_main___semantic_analysis_for_targets, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"restore_saved_attrs", (PyCFunction)CPyPy_semanal_main___restore_saved_attrs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_top_levels", (PyCFunction)CPyPy_semanal_main___process_top_levels, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_functions", (PyCFunction)CPyPy_semanal_main___process_functions, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"process_top_level_function", (PyCFunction)CPyPy_semanal_main___process_top_level_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_all_leaf_targets", (PyCFunction)CPyPy_semanal_main___get_all_leaf_targets, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"semantic_analyze_target", (PyCFunction)CPyPy_semanal_main___semantic_analyze_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_type_arguments", (PyCFunction)CPyPy_semanal_main___check_type_arguments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_type_arguments_in_targets", (PyCFunction)CPyPy_semanal_main___check_type_arguments_in_targets, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_class_plugin_hooks", (PyCFunction)CPyPy_semanal_main___apply_class_plugin_hooks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"apply_hooks_to_class", (PyCFunction)CPyPy_semanal_main___apply_hooks_to_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_class_properties", (PyCFunction)CPyPy_semanal_main___calculate_class_properties, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_blockers", (PyCFunction)CPyPy_semanal_main___check_blockers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef semanal_mainmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.semanal_main",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    semanal_mainmodule_methods
};

PyObject *CPyInit_mypy___semanal_main(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___semanal_main_internal) {
        Py_INCREF(CPyModule_mypy___semanal_main_internal);
        return CPyModule_mypy___semanal_main_internal;
    }
    CPyModule_mypy___semanal_main_internal = PyModule_Create(&semanal_mainmodule);
    if (unlikely(CPyModule_mypy___semanal_main_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___semanal_main_internal, "__name__");
    CPyStatic_semanal_main___globals = PyModule_GetDict(CPyModule_mypy___semanal_main_internal);
    if (unlikely(CPyStatic_semanal_main___globals == NULL))
        goto fail;
    CPyType_semanal_main___process_functions_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_main___process_functions_env_template, NULL, modname);
    if (unlikely(!CPyType_semanal_main___process_functions_env))
        goto fail;
    CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj_template, NULL, modname);
    if (unlikely(!CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_semanal_main_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___semanal_main_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___semanal_main_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_semanal_main___core_modules);
    CPyStatic_semanal_main___core_modules = NULL;
    Py_CLEAR(CPyType_semanal_main___process_functions_env);
    Py_CLEAR(CPyType_semanal_main_____mypyc_lambda__0_process_functions_obj);
    return NULL;
}

char CPyDef_semanal_main___semantic_analysis_for_scc(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_patches;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 89, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_patches = cpy_r_r0;
    cpy_r_r1 = CPyDef_semanal_main___process_top_levels(cpy_r_graph, cpy_r_scc, cpy_r_patches);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 93, CPyStatic_semanal_main___globals);
        goto CPyL15;
    }
    cpy_r_r2 = CPyDef_semanal_main___process_functions(cpy_r_graph, cpy_r_scc, cpy_r_patches);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 94, CPyStatic_semanal_main___globals);
        goto CPyL15;
    }
    cpy_r_r3 = CPyDef_semanal___apply_semantic_analyzer_patches(cpy_r_patches);
    CPy_DECREF(cpy_r_patches);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 97, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyDef_semanal_main___apply_class_plugin_hooks(cpy_r_graph, cpy_r_scc, cpy_r_errors);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 99, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r5 = CPyDef_semanal_main___check_type_arguments(cpy_r_graph, cpy_r_scc, cpy_r_errors);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 101, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r6 = CPyDef_semanal_main___calculate_class_properties(cpy_r_graph, cpy_r_scc, cpy_r_errors);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 102, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r7 = CPyDef_semanal_main___check_blockers(cpy_r_graph, cpy_r_scc);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 103, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r8 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r9 = PySequence_Contains(cpy_r_scc, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 105, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL13;
    cpy_r_r12 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_graph, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 106, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_mypy___build___State))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 106, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_r15 = CPyDef_semanal_main___cleanup_builtin_scc(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 106, CPyStatic_semanal_main___globals);
        goto CPyL14;
    }
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL15: ;
    CPy_DecRef(cpy_r_patches);
    goto CPyL14;
}

PyObject *CPyPy_semanal_main___semantic_analysis_for_scc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "errors", 0};
    static CPyArg_Parser parser = {"OOO:semantic_analysis_for_scc", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___semantic_analysis_for_scc(arg_graph, arg_scc, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_scc", 81, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___cleanup_builtin_scc(PyObject *cpy_r_state) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/semanal_main.py", "cleanup_builtin_scc", 117, CPyStatic_semanal_main___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "cleanup_builtin_scc", 118, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r4);
        goto CPyL7;
    }
    cpy_r_r6 = ((mypy___nodes___MypyFileObject *)cpy_r_r5)->_names;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "cleanup_builtin_scc", "MypyFile", "names", 118, CPyStatic_semanal_main___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r8 = CPyDef_semanal___remove_imported_names_from_symtable(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "cleanup_builtin_scc", 118, CPyStatic_semanal_main___globals);
        goto CPyL7;
    }
    return 1;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_semanal_main___cleanup_builtin_scc(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"state", 0};
    static CPyArg_Parser parser = {"O:cleanup_builtin_scc", kwlist, 0};
    PyObject *obj_state;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_state)) {
        return NULL;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___cleanup_builtin_scc(arg_state);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "cleanup_builtin_scc", 109, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___semantic_analysis_for_targets(PyObject *cpy_r_state, PyObject *cpy_r_nodes, PyObject *cpy_r_graph, PyObject *cpy_r_saved_attrs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_patches;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_analyzer;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_n_2;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyPtr cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 134, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_patches = cpy_r_r0;
    cpy_r_r1 = 0;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r2);
    if (likely(PyTuple_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 135, CPyStatic_semanal_main___globals, "tuple", cpy_r_r7);
        goto CPyL48;
    }
    cpy_r_n = cpy_r_r8;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_n, 0);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 135, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
    cpy_r_r10 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_r9)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL7;
    cpy_r_r1 = 1;
    goto CPyL8;
CPyL7: ;
    cpy_r_r14 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    if (!cpy_r_r1) goto CPyL12;
    cpy_r_r15 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "id", 137, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r15);
CPyL10: ;
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 137, CPyStatic_semanal_main___globals);
        goto CPyL49;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r15;
    cpy_r_r19 = CPyDef_semanal_main___process_top_levels(cpy_r_graph, cpy_r_r16, cpy_r_patches);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 137, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
CPyL12: ;
    cpy_r_r20 = CPyDef_semanal_main___restore_saved_attrs(cpy_r_saved_attrs);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 138, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
    cpy_r_r21 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "manager", 139, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
CPyL14: ;
    cpy_r_r22 = ((mypy___build___BuildManagerObject *)cpy_r_r21)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r22);
    cpy_r_analyzer = cpy_r_r22;
    cpy_r_r23 = 0;
CPyL15: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_nodes)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL50;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_nodes, cpy_r_r23);
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 140, CPyStatic_semanal_main___globals, "tuple", cpy_r_r28);
        goto CPyL51;
    }
    cpy_r_n_2 = cpy_r_r29;
    cpy_r_r30 = CPySequenceTuple_GetItem(cpy_r_n_2, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 141, CPyStatic_semanal_main___globals);
        goto CPyL52;
    }
    cpy_r_r31 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (cpy_r_r34) goto CPyL53;
    cpy_r_r35 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "id", 145, CPyStatic_semanal_main___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r35);
CPyL20: ;
    cpy_r_r36 = CPySequenceTuple_GetItem(cpy_r_n_2, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals);
        goto CPyL54;
    }
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___FuncDef)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL5856;
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL5856;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_r36);
    goto CPyL54;
__LL5856: ;
    cpy_r_r38 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_r37)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___FuncDef))
        cpy_r_r42 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals, "mypy.nodes.FuncDef", cpy_r_r37);
        goto CPyL54;
    }
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_r42, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals);
        goto CPyL54;
    }
CPyL25: ;
    cpy_r_r44 = cpy_r_r43;
    goto CPyL29;
CPyL26: ;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r45 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r37);
        goto CPyL54;
    }
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_nodes___OverloadedFuncDef, 7, mypy___nodes___OverloadedFuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals);
        goto CPyL54;
    }
CPyL28: ;
    cpy_r_r44 = cpy_r_r46;
CPyL29: ;
    cpy_r_r47 = CPySequenceTuple_GetItem(cpy_r_n_2, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals);
        goto CPyL55;
    }
    if (Py_TYPE(cpy_r_r47) == CPyType_nodes___FuncDef)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL5857;
    if (Py_TYPE(cpy_r_r47) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r48 = cpy_r_r47;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL5857;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_r47);
    goto CPyL55;
__LL5857: ;
    cpy_r_r49 = CPySequenceTuple_GetItem(cpy_r_n_2, 2);
    CPy_DECREF(cpy_r_n_2);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals);
        goto CPyL56;
    }
    if ((Py_TYPE(cpy_r_r49) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r49) == CPyType_nodes___TypeInfo))
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL5858;
    if (cpy_r_r49 == Py_None)
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL5858;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 145, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo or None", cpy_r_r49);
    goto CPyL56;
__LL5858: ;
    cpy_r_r51 = CPyDef_semanal_main___process_top_level_function(cpy_r_analyzer, cpy_r_state, cpy_r_r35, cpy_r_r44, cpy_r_r48, cpy_r_r50, cpy_r_patches);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 144, CPyStatic_semanal_main___globals);
        goto CPyL51;
    }
CPyL34: ;
    cpy_r_r52 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r52;
    goto CPyL15;
CPyL35: ;
    cpy_r_r53 = CPyDef_semanal___apply_semantic_analyzer_patches(cpy_r_patches);
    CPy_DECREF(cpy_r_patches);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 147, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_r54 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "id", 148, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r54);
CPyL37: ;
    cpy_r_r55 = PyList_New(1);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 148, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    cpy_r_r56 = (CPyPtr)&((PyListObject *)cpy_r_r55)->ob_item;
    cpy_r_r57 = *(CPyPtr *)cpy_r_r56;
    *(PyObject * *)cpy_r_r57 = cpy_r_r54;
    cpy_r_r58 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "manager", 148, CPyStatic_semanal_main___globals);
        goto CPyL58;
    }
CPyL39: ;
    cpy_r_r59 = ((mypy___build___BuildManagerObject *)cpy_r_r58)->_errors;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_semanal_main___apply_class_plugin_hooks(cpy_r_graph, cpy_r_r55, cpy_r_r59);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 148, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_r61 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "manager", 149, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
CPyL41: ;
    cpy_r_r62 = ((mypy___build___BuildManagerObject *)cpy_r_r61)->_errors;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyDef_semanal_main___check_type_arguments_in_targets(cpy_r_nodes, cpy_r_state, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 149, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_r64 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "id", 150, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r64);
CPyL43: ;
    cpy_r_r65 = PyList_New(1);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 150, CPyStatic_semanal_main___globals);
        goto CPyL59;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    *(PyObject * *)cpy_r_r67 = cpy_r_r64;
    cpy_r_r68 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analysis_for_targets", "State", "manager", 150, CPyStatic_semanal_main___globals);
        goto CPyL60;
    }
CPyL45: ;
    cpy_r_r69 = ((mypy___build___BuildManagerObject *)cpy_r_r68)->_errors;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyDef_semanal_main___calculate_class_properties(cpy_r_graph, cpy_r_r65, cpy_r_r69);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 150, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r71 = 2;
    return cpy_r_r71;
CPyL48: ;
    CPy_DecRef(cpy_r_patches);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_r15);
    goto CPyL47;
CPyL50: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL35;
CPyL51: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_n_2);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF(cpy_r_n_2);
    goto CPyL34;
CPyL54: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_n_2);
    CPy_DecRef(cpy_r_r35);
    goto CPyL47;
CPyL55: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_n_2);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r44);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_patches);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r48);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL47;
CPyL59: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL47;
CPyL60: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL47;
}

PyObject *CPyPy_semanal_main___semantic_analysis_for_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"state", "nodes", "graph", "saved_attrs", 0};
    static CPyArg_Parser parser = {"OOOO:semantic_analysis_for_targets", kwlist, 0};
    PyObject *obj_state;
    PyObject *obj_nodes;
    PyObject *obj_graph;
    PyObject *obj_saved_attrs;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state, &obj_nodes, &obj_graph, &obj_saved_attrs)) {
        return NULL;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *arg_nodes;
    if (likely(PyList_Check(obj_nodes)))
        arg_nodes = obj_nodes;
    else {
        CPy_TypeError("list", obj_nodes); 
        goto fail;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_saved_attrs;
    if (likely(PyDict_Check(obj_saved_attrs)))
        arg_saved_attrs = obj_saved_attrs;
    else {
        CPy_TypeError("dict", obj_saved_attrs); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___semantic_analysis_for_targets(arg_state, arg_nodes, arg_graph, arg_saved_attrs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "semantic_analysis_for_targets", 121, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___restore_saved_attrs(PyObject *cpy_r_saved_attrs) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T4CIOO cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_cdef;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_name;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_existing;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_defined_in_this_class;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = 0;
    cpy_r_r1 = PyDict_Size(cpy_r_saved_attrs);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyDict_GetItemsIter(cpy_r_saved_attrs);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 155, CPyStatic_semanal_main___globals);
        goto CPyL24;
    }
CPyL1: ;
    cpy_r_r4 = CPyDict_NextItem(cpy_r_r3, cpy_r_r0);
    cpy_r_r5 = cpy_r_r4.f1;
    cpy_r_r0 = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f0;
    if (!cpy_r_r6) goto CPyL25;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r4.f3;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    PyObject *__tmp5859;
    if (unlikely(!(PyTuple_Check(cpy_r_r7) && PyTuple_GET_SIZE(cpy_r_r7) == 2))) {
        __tmp5859 = NULL;
        goto __LL5860;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r7, 0)) == CPyType_nodes___ClassDef))
        __tmp5859 = PyTuple_GET_ITEM(cpy_r_r7, 0);
    else {
        __tmp5859 = NULL;
    }
    if (__tmp5859 == NULL) goto __LL5860;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r7, 1))))
        __tmp5859 = PyTuple_GET_ITEM(cpy_r_r7, 1);
    else {
        __tmp5859 = NULL;
    }
    if (__tmp5859 == NULL) goto __LL5860;
    __tmp5859 = cpy_r_r7;
__LL5860: ;
    if (unlikely(__tmp5859 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.ClassDef, str]", cpy_r_r7); cpy_r_r9 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp5861 = PyTuple_GET_ITEM(cpy_r_r7, 0);
        CPy_INCREF(__tmp5861);
        PyObject *__tmp5862;
        if (likely(Py_TYPE(__tmp5861) == CPyType_nodes___ClassDef))
            __tmp5862 = __tmp5861;
        else {
            CPy_TypeError("mypy.nodes.ClassDef", __tmp5861); 
            __tmp5862 = NULL;
        }
        cpy_r_r9.f0 = __tmp5862;
        PyObject *__tmp5863 = PyTuple_GET_ITEM(cpy_r_r7, 1);
        CPy_INCREF(__tmp5863);
        PyObject *__tmp5864;
        if (likely(PyUnicode_Check(__tmp5863)))
            __tmp5864 = __tmp5863;
        else {
            CPy_TypeError("str", __tmp5863); 
            __tmp5864 = NULL;
        }
        cpy_r_r9.f1 = __tmp5864;
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 155, CPyStatic_semanal_main___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___SymbolTableNode))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "restore_saved_attrs", 155, CPyStatic_semanal_main___globals, "mypy.nodes.SymbolTableNode", cpy_r_r8);
        goto CPyL27;
    }
    cpy_r_r11 = cpy_r_r9.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_cdef = cpy_r_r11;
    cpy_r_r12 = cpy_r_r9.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9.f0);
    CPy_DECREF(cpy_r_r9.f1);
    cpy_r_name = cpy_r_r12;
    cpy_r_sym = cpy_r_r10;
    cpy_r_r13 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_cdef);
    cpy_r_info = cpy_r_r13;
    cpy_r_r14 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_name);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 157, CPyStatic_semanal_main___globals);
        goto CPyL28;
    }
    cpy_r_existing = cpy_r_r14;
    cpy_r_r15 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "restore_saved_attrs", "TypeInfo", "names", 158, CPyStatic_semanal_main___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r15);
CPyL6: ;
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_name);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 158, CPyStatic_semanal_main___globals);
        goto CPyL29;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_defined_in_this_class = cpy_r_r18;
    cpy_r_r19 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    cpy_r_r20 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (cpy_r_r23) {
        goto CPyL10;
    } else
        goto CPyL30;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r24 = 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 159, CPyStatic_semanal_main___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_existing == cpy_r_r25;
    if (cpy_r_r26) goto CPyL31;
    if (likely(cpy_r_existing != Py_None))
        cpy_r_r27 = cpy_r_existing;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "restore_saved_attrs", 167, CPyStatic_semanal_main___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing);
        goto CPyL29;
    }
    cpy_r_r28 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r27)->_node;
    cpy_r_r29 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL32;
    if (likely(cpy_r_existing != Py_None))
        cpy_r_r33 = cpy_r_existing;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "restore_saved_attrs", 167, CPyStatic_semanal_main___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing);
        goto CPyL29;
    }
    cpy_r_r34 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r33)->_node;
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_nodes___Var))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "restore_saved_attrs", 167, CPyStatic_semanal_main___globals, "mypy.nodes.Var", cpy_r_r34);
        goto CPyL29;
    }
    cpy_r_r36 = ((mypy___nodes___VarObject *)cpy_r_r35)->_is_abstract_var;
    CPy_DECREF(cpy_r_existing);
    if (cpy_r_r36) goto CPyL19;
CPyL16: ;
    cpy_r_r37 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___Var))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "restore_saved_attrs", 171, CPyStatic_semanal_main___globals, "mypy.nodes.Var", cpy_r_r37);
        goto CPyL28;
    }
    cpy_r_r39 = ((mypy___nodes___VarObject *)cpy_r_r38)->_explicit_self_type;
    if (!cpy_r_r39) goto CPyL33;
CPyL18: ;
    if (cpy_r_defined_in_this_class) goto CPyL33;
CPyL19: ;
    cpy_r_r40 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r40 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r40);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 174, CPyStatic_semanal_main___globals);
        goto CPyL34;
    }
CPyL20: ;
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r40, cpy_r_name, cpy_r_sym);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_sym);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 174, CPyStatic_semanal_main___globals);
        goto CPyL35;
    }
CPyL21: ;
    cpy_r_r43 = CPyDict_CheckSize(cpy_r_saved_attrs, cpy_r_r2);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 155, CPyStatic_semanal_main___globals);
        goto CPyL35;
    } else
        goto CPyL1;
CPyL22: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 155, CPyStatic_semanal_main___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL25: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r4.f3);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r9.f0);
    CPy_DecRef(cpy_r_r9.f1);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_info);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_existing);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_existing);
    goto CPyL8;
CPyL31: ;
    CPy_DECREF(cpy_r_existing);
    goto CPyL19;
CPyL32: ;
    CPy_DECREF(cpy_r_existing);
    goto CPyL16;
CPyL33: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_info);
    goto CPyL21;
CPyL34: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_sym);
    goto CPyL24;
CPyL35: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL24;
}

PyObject *CPyPy_semanal_main___restore_saved_attrs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"saved_attrs", 0};
    static CPyArg_Parser parser = {"O:restore_saved_attrs", kwlist, 0};
    PyObject *obj_saved_attrs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_saved_attrs)) {
        return NULL;
    }
    PyObject *arg_saved_attrs;
    if (likely(PyDict_Check(obj_saved_attrs)))
        arg_saved_attrs = obj_saved_attrs;
    else {
        CPy_TypeError("dict", obj_saved_attrs); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___restore_saved_attrs(arg_saved_attrs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "restore_saved_attrs", 153, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___process_top_levels(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_patches) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_worklist;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_m;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_final_iteration;
    CPyTagged cpy_r_iteration;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_analyzer;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    CPyTagged cpy_r_r78;
    int64_t cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    tuple_T3OOO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    tuple_T3OOO cpy_r_r121;
    tuple_T3OOO cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_all_deferred;
    char cpy_r_any_progress;
    CPyPtr cpy_r_r135;
    int64_t cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_next_id;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    tuple_T3OCC cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_deferred;
    char cpy_r_r152;
    char cpy_r_incomplete;
    char cpy_r_r153;
    char cpy_r_progress;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject **cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    char cpy_r_r173;
    cpy_r_r0 = NULL;
    cpy_r_state = cpy_r_r0;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 182, CPyStatic_semanal_main___globals);
        goto CPyL143;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_scc};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 182, CPyStatic_semanal_main___globals);
        goto CPyL143;
    }
    cpy_r_r7 = PySequence_List(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 182, CPyStatic_semanal_main___globals);
        goto CPyL143;
    }
    cpy_r_scc = cpy_r_r7;
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL144;
    } else
        goto CPyL15;
CPyL5: ;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 185, CPyStatic_semanal_main___globals, "str", cpy_r_r13);
        goto CPyL145;
    }
    cpy_r_id = cpy_r_r14;
    cpy_r_r15 = CPyDict_GetItem(cpy_r_graph, cpy_r_id);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 186, CPyStatic_semanal_main___globals);
        goto CPyL145;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_mypy___build___State))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 186, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r15);
        goto CPyL145;
    }
    cpy_r_state = cpy_r_r16;
    cpy_r_r17 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (cpy_r_r19) {
        goto CPyL11;
    } else
        goto CPyL146;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 187, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r21 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "State", "manager", 188, CPyStatic_semanal_main___globals);
        goto CPyL147;
    }
CPyL12: ;
    cpy_r_r22 = ((mypy___build___BuildManagerObject *)cpy_r_r21)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r23);
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 188, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r23);
        goto CPyL148;
    }
    cpy_r_r25 = CPyDef_semanal___SemanticAnalyzer___prepare_file(cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 188, CPyStatic_semanal_main___globals);
        goto CPyL147;
    }
    cpy_r_r26 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r26;
    goto CPyL4;
CPyL15: ;
    if (cpy_r_state == NULL) {
        goto CPyL149;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 191, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r28 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "State", "manager", 191, CPyStatic_semanal_main___globals);
        goto CPyL150;
    }
CPyL19: ;
    cpy_r_r29 = ((mypy___build___BuildManagerObject *)cpy_r_r28)->_incomplete_namespaces;
    CPy_INCREF(cpy_r_r29);
    if (cpy_r_state == NULL) {
        goto CPyL151;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", -1, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r31 = _PySet_Update(cpy_r_r29, cpy_r_scc);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 191, CPyStatic_semanal_main___globals);
        goto CPyL150;
    }
    cpy_r_r33 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r34[1] = {cpy_r_scc};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 193, CPyStatic_semanal_main___globals);
        goto CPyL150;
    }
    CPy_DECREF(cpy_r_scc);
    if (likely(PyList_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 193, CPyStatic_semanal_main___globals, "list", cpy_r_r36);
        goto CPyL143;
    }
    cpy_r_worklist = cpy_r_r37;
    cpy_r_r38 = 1;
    cpy_r_r39 = CPyStatic_semanal_main___core_modules;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL152;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"core_modules\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 196, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r41 = 0;
CPyL29: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL35;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r39, cpy_r_r41);
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 196, CPyStatic_semanal_main___globals, "str", cpy_r_r46);
        goto CPyL153;
    }
    cpy_r_m = cpy_r_r47;
    cpy_r_r48 = PySequence_Contains(cpy_r_worklist, cpy_r_m);
    CPy_DECREF(cpy_r_m);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 196, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    cpy_r_r50 = cpy_r_r48;
    cpy_r_r51 = cpy_r_r50 ^ 1;
    if (!cpy_r_r51) goto CPyL34;
    cpy_r_r38 = 0;
    goto CPyL35;
CPyL34: ;
    cpy_r_r52 = cpy_r_r41 + 2;
    cpy_r_r41 = cpy_r_r52;
    goto CPyL29;
CPyL35: ;
    if (!cpy_r_r38) goto CPyL46;
    cpy_r_r53 = CPyStatic_semanal_main___core_modules;
    if (unlikely(cpy_r_r53 == NULL)) {
        goto CPyL154;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"core_modules\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    PyObject *cpy_r_r58[1] = {cpy_r_r53};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    cpy_r_r61 = PySequence_List(cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    cpy_r_r62 = CPySequence_Multiply(cpy_r_r61, 4);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    cpy_r_r63 = PyNumber_InPlaceAdd(cpy_r_worklist, cpy_r_r62);
    CPy_DECREF(cpy_r_worklist);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals);
        goto CPyL143;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 197, CPyStatic_semanal_main___globals, "list", cpy_r_r63);
        goto CPyL143;
    }
    cpy_r_worklist = cpy_r_r64;
CPyL46: ;
    cpy_r_final_iteration = 0;
    cpy_r_iteration = 0;
    if (cpy_r_state == NULL) {
        goto CPyL155;
    } else
        goto CPyL49;
CPyL47: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 200, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r66 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "State", "manager", 200, CPyStatic_semanal_main___globals);
        goto CPyL156;
    }
CPyL50: ;
    cpy_r_r67 = ((mypy___build___BuildManagerObject *)cpy_r_r66)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r67);
    if (cpy_r_state == NULL) {
        goto CPyL157;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", -1, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_analyzer = cpy_r_r67;
    cpy_r_r69 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_deferral_debug_context;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "SemanticAnalyzer", "deferral_debug_context", 201, CPyStatic_semanal_main___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r69);
CPyL54: ;
    cpy_r_r70 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r71[1] = {cpy_r_r69};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = PyObject_VectorcallMethod(cpy_r_r70, cpy_r_r72, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 201, CPyStatic_semanal_main___globals);
        goto CPyL159;
    } else
        goto CPyL160;
CPyL55: ;
    CPy_DECREF(cpy_r_r69);
CPyL56: ;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (!cpy_r_r77) goto CPyL161;
    cpy_r_r78 = CPyTagged_Add(cpy_r_iteration, 2);
    CPyTagged_DECREF(cpy_r_iteration);
    cpy_r_iteration = cpy_r_r78;
    cpy_r_r79 = cpy_r_iteration & 1;
    cpy_r_r80 = cpy_r_r79 != 0;
    if (!cpy_r_r80) goto CPyL59;
    cpy_r_r81 = CPyTagged_IsLt_(40, cpy_r_iteration);
    if (cpy_r_r81) {
        goto CPyL162;
    } else
        goto CPyL103;
CPyL59: ;
    cpy_r_r82 = (Py_ssize_t)cpy_r_iteration > (Py_ssize_t)40;
    if (cpy_r_r82) {
        goto CPyL162;
    } else
        goto CPyL103;
CPyL60: ;
    if (cpy_r_state == NULL) {
        goto CPyL163;
    } else
        goto CPyL63;
CPyL61: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 207, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r84 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_r84 != cpy_r_r85;
    if (cpy_r_state == NULL) {
        goto CPyL164;
    } else
        goto CPyL66;
CPyL64: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", -1, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL66: ;
    if (cpy_r_r86) {
        goto CPyL69;
    } else
        goto CPyL165;
CPyL67: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r88 = 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 207, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL69: ;
    if (cpy_r_state == NULL) {
        goto CPyL166;
    } else
        goto CPyL72;
CPyL70: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r89 = 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r90 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r90);
    if (likely(cpy_r_r90 != Py_None))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r90);
        goto CPyL167;
    }
    if (cpy_r_state == NULL) {
        goto CPyL168;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r92 = 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r93 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r93 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r93);
    }
    CPy_XDECREF(cpy_r_state);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL169;
    }
CPyL77: ;
    cpy_r_r94 = CPyStatics[4826]; /* 'file_context' */
    PyObject *cpy_r_r95[3] = {cpy_r_analyzer, cpy_r_r91, cpy_r_r93};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = PyObject_VectorcallMethod(cpy_r_r94, cpy_r_r96, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL170;
    }
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r98 = PyObject_Type(cpy_r_r97);
    cpy_r_r99 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL171;
    }
    cpy_r_r101 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r101);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL172;
    }
    PyObject *cpy_r_r103[1] = {cpy_r_r97};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = _PyObject_Vectorcall(cpy_r_r102, cpy_r_r104, 1, 0);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL172;
    } else
        goto CPyL173;
CPyL81: ;
    cpy_r_r106 = 1;
    cpy_r_r107 = CPyDef_semanal___SemanticAnalyzer___report_hang(cpy_r_analyzer);
    CPy_DECREF(cpy_r_analyzer);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 209, CPyStatic_semanal_main___globals);
    } else
        goto CPyL91;
    cpy_r_r108 = CPy_CatchError();
    cpy_r_r106 = 0;
    cpy_r_r109 = CPy_GetExcInfo();
    cpy_r_r110 = cpy_r_r109.f0;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = cpy_r_r109.f1;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = cpy_r_r109.f2;
    CPy_INCREF(cpy_r_r112);
    CPy_DecRef(cpy_r_r109.f0);
    CPy_DecRef(cpy_r_r109.f1);
    CPy_DecRef(cpy_r_r109.f2);
    PyObject *cpy_r_r113[4] = {cpy_r_r97, cpy_r_r110, cpy_r_r111, cpy_r_r112};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r114, 4, 0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL174;
    }
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    cpy_r_r116 = PyObject_IsTrue(cpy_r_r115);
    CPy_DecRef(cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL89;
    }
    cpy_r_r118 = cpy_r_r116;
    if (cpy_r_r118) goto CPyL88;
    CPy_Reraise();
    if (!0) {
        goto CPyL89;
    } else
        goto CPyL175;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    CPy_RestoreExcInfo(cpy_r_r108);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL91;
CPyL89: ;
    CPy_RestoreExcInfo(cpy_r_r108);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    cpy_r_r119 = CPy_KeepPropagating();
    if (!cpy_r_r119) {
        goto CPyL92;
    } else
        goto CPyL176;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    tuple_T3OOO __tmp5865 = { NULL, NULL, NULL };
    cpy_r_r120 = __tmp5865;
    cpy_r_r121 = cpy_r_r120;
    goto CPyL93;
CPyL92: ;
    cpy_r_r122 = CPy_CatchError();
    cpy_r_r121 = cpy_r_r122;
CPyL93: ;
    if (!cpy_r_r106) goto CPyL177;
    cpy_r_r123 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r124[4] = {cpy_r_r97, cpy_r_r123, cpy_r_r123, cpy_r_r123};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r125, 4, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 208, CPyStatic_semanal_main___globals);
        goto CPyL178;
    } else
        goto CPyL179;
CPyL95: ;
    CPy_DECREF(cpy_r_r97);
CPyL96: ;
    if (cpy_r_r121.f0 == NULL) goto CPyL141;
    CPy_Reraise();
    if (!0) {
        goto CPyL99;
    } else
        goto CPyL180;
CPyL98: ;
    CPy_Unreachable();
CPyL99: ;
    if (cpy_r_r121.f0 == NULL) goto CPyL101;
    CPy_RestoreExcInfo(cpy_r_r121);
    CPy_XDECREF(cpy_r_r121.f0);
    CPy_XDECREF(cpy_r_r121.f1);
    CPy_XDECREF(cpy_r_r121.f2);
CPyL101: ;
    cpy_r_r127 = CPy_KeepPropagating();
    if (!cpy_r_r127) goto CPyL142;
    CPy_Unreachable();
CPyL103: ;
    if (!cpy_r_final_iteration) goto CPyL112;
    if (cpy_r_state == NULL) {
        goto CPyL181;
    } else
        goto CPyL107;
CPyL105: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 213, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL107: ;
    cpy_r_r129 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "State", "manager", 213, CPyStatic_semanal_main___globals);
        goto CPyL158;
    }
CPyL108: ;
    cpy_r_r130 = ((mypy___build___BuildManagerObject *)cpy_r_r129)->_incomplete_namespaces;
    CPy_INCREF(cpy_r_r130);
    if (cpy_r_state == NULL) {
        goto CPyL182;
    } else
        goto CPyL111;
CPyL109: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"state\" referenced before assignment");
    cpy_r_r131 = 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", -1, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL111: ;
    cpy_r_r132 = PySet_Clear(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 213, CPyStatic_semanal_main___globals);
        goto CPyL158;
    }
CPyL112: ;
    cpy_r_r134 = PyList_New(0);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 214, CPyStatic_semanal_main___globals);
        goto CPyL158;
    }
    cpy_r_all_deferred = cpy_r_r134;
    cpy_r_any_progress = 0;
CPyL114: ;
    cpy_r_r135 = (CPyPtr)&((PyVarObject *)cpy_r_worklist)->ob_size;
    cpy_r_r136 = *(int64_t *)cpy_r_r135;
    cpy_r_r137 = cpy_r_r136 << 1;
    cpy_r_r138 = cpy_r_r137 != 0;
    if (cpy_r_r138) {
        goto CPyL183;
    } else
        goto CPyL184;
CPyL115: ;
    cpy_r_r139 = CPyList_PopLast(cpy_r_worklist);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 217, CPyStatic_semanal_main___globals);
        goto CPyL185;
    }
    if (likely(PyUnicode_Check(cpy_r_r139)))
        cpy_r_r140 = cpy_r_r139;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 217, CPyStatic_semanal_main___globals, "str", cpy_r_r139);
        goto CPyL185;
    }
    cpy_r_next_id = cpy_r_r140;
    cpy_r_r141 = CPyDict_GetItem(cpy_r_graph, cpy_r_next_id);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 218, CPyStatic_semanal_main___globals);
        goto CPyL186;
    }
    if (likely(Py_TYPE(cpy_r_r141) == CPyType_mypy___build___State))
        cpy_r_r142 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 218, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r141);
        goto CPyL186;
    }
    cpy_r_state = cpy_r_r142;
    cpy_r_r143 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r144 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r145 = cpy_r_r143 != cpy_r_r144;
    if (cpy_r_r145) {
        goto CPyL122;
    } else
        goto CPyL187;
CPyL120: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r146 = 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 219, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r147 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r147);
    if (likely(cpy_r_r147 != Py_None))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 221, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r147);
        goto CPyL188;
    }
    cpy_r_r149 = Py_None;
    cpy_r_r150 = CPyDef_semanal_main___semantic_analyze_target(cpy_r_next_id, cpy_r_next_id, cpy_r_state, cpy_r_r148, cpy_r_r149, cpy_r_final_iteration, cpy_r_patches);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r150.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 220, CPyStatic_semanal_main___globals);
        goto CPyL188;
    }
    cpy_r_r151 = cpy_r_r150.f0;
    CPy_INCREF(cpy_r_r151);
    cpy_r_deferred = cpy_r_r151;
    cpy_r_r152 = cpy_r_r150.f1;
    cpy_r_incomplete = cpy_r_r152;
    cpy_r_r153 = cpy_r_r150.f2;
    CPy_DECREF(cpy_r_r150.f0);
    cpy_r_progress = cpy_r_r153;
    cpy_r_r154 = PyNumber_InPlaceAdd(cpy_r_all_deferred, cpy_r_deferred);
    CPy_DECREF(cpy_r_all_deferred);
    CPy_DECREF(cpy_r_deferred);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 223, CPyStatic_semanal_main___globals);
        goto CPyL189;
    }
    if (likely(PyList_Check(cpy_r_r154)))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_levels", 223, CPyStatic_semanal_main___globals, "list", cpy_r_r154);
        goto CPyL189;
    }
    cpy_r_all_deferred = cpy_r_r155;
    if (!cpy_r_any_progress) goto CPyL128;
    cpy_r_r156 = cpy_r_any_progress;
    goto CPyL129;
CPyL128: ;
    cpy_r_r156 = cpy_r_progress;
CPyL129: ;
    cpy_r_any_progress = cpy_r_r156;
    if (cpy_r_incomplete) goto CPyL190;
    cpy_r_r157 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_levels", "State", "manager", 226, CPyStatic_semanal_main___globals);
        goto CPyL188;
    }
CPyL131: ;
    cpy_r_r158 = ((mypy___build___BuildManagerObject *)cpy_r_r157)->_incomplete_namespaces;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = PySet_Discard(cpy_r_r158, cpy_r_next_id);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_next_id);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 226, CPyStatic_semanal_main___globals);
        goto CPyL191;
    } else
        goto CPyL114;
CPyL132: ;
    if (!cpy_r_final_iteration) goto CPyL137;
    cpy_r_r161 = PyObject_Not(cpy_r_all_deferred);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 228, CPyStatic_semanal_main___globals);
        goto CPyL192;
    }
    cpy_r_r163 = cpy_r_r161;
    if (cpy_r_r163) {
        goto CPyL137;
    } else
        goto CPyL193;
CPyL135: ;
    PyErr_SetString(PyExc_AssertionError, "Must not defer during final iteration");
    cpy_r_r164 = 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 228, CPyStatic_semanal_main___globals);
        goto CPyL142;
    }
    CPy_Unreachable();
CPyL137: ;
    cpy_r_r165 = CPyModule_builtins;
    cpy_r_r166 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r167 = CPyObject_GetAttr(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 231, CPyStatic_semanal_main___globals);
        goto CPyL192;
    }
    PyObject *cpy_r_r168[1] = {cpy_r_all_deferred};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = _PyObject_Vectorcall(cpy_r_r167, cpy_r_r169, 1, 0);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 231, CPyStatic_semanal_main___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_all_deferred);
    cpy_r_r171 = PySequence_List(cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 231, CPyStatic_semanal_main___globals);
        goto CPyL194;
    }
    cpy_r_worklist = cpy_r_r171;
    cpy_r_r172 = cpy_r_any_progress ^ 1;
    cpy_r_final_iteration = cpy_r_r172;
    goto CPyL56;
CPyL141: ;
    return 1;
CPyL142: ;
    cpy_r_r173 = 2;
    return cpy_r_r173;
CPyL143: ;
    CPy_XDecRef(cpy_r_state);
    goto CPyL142;
CPyL144: ;
    CPy_XDECREF(cpy_r_state);
    goto CPyL5;
CPyL145: ;
    CPy_DecRef(cpy_r_scc);
    goto CPyL142;
CPyL146: ;
    CPy_DECREF(cpy_r_scc);
    CPy_DECREF(cpy_r_state);
    goto CPyL9;
CPyL147: ;
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_state);
    goto CPyL142;
CPyL148: ;
    CPy_DecRef(cpy_r_scc);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r22);
    goto CPyL142;
CPyL149: ;
    CPy_DECREF(cpy_r_scc);
    goto CPyL16;
CPyL150: ;
    CPy_DecRef(cpy_r_scc);
    CPy_XDecRef(cpy_r_state);
    goto CPyL142;
CPyL151: ;
    CPy_DECREF(cpy_r_scc);
    CPy_DECREF(cpy_r_r29);
    goto CPyL20;
CPyL152: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL26;
CPyL153: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL142;
CPyL154: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    goto CPyL37;
CPyL155: ;
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    goto CPyL47;
CPyL156: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    goto CPyL142;
CPyL157: ;
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_r67);
    goto CPyL51;
CPyL158: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL142;
CPyL159: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r69);
    goto CPyL142;
CPyL160: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL55;
CPyL161: ;
    CPy_XDECREF(cpy_r_state);
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL141;
CPyL162: ;
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    goto CPyL60;
CPyL163: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL61;
CPyL164: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL64;
CPyL165: ;
    CPy_XDECREF(cpy_r_state);
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL67;
CPyL166: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL70;
CPyL167: ;
    CPy_XDecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL142;
CPyL168: ;
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_r91);
    goto CPyL74;
CPyL169: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r91);
    goto CPyL142;
CPyL170: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r93);
    goto CPyL142;
CPyL171: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    goto CPyL142;
CPyL172: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    goto CPyL142;
CPyL173: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL81;
CPyL174: ;
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    goto CPyL89;
CPyL175: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r108.f0);
    CPy_DecRef(cpy_r_r108.f1);
    CPy_DecRef(cpy_r_r108.f2);
    goto CPyL87;
CPyL176: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    goto CPyL90;
CPyL177: ;
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r100);
    goto CPyL96;
CPyL178: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL99;
CPyL179: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL95;
CPyL180: ;
    CPy_XDECREF(cpy_r_r121.f0);
    CPy_XDECREF(cpy_r_r121.f1);
    CPy_XDECREF(cpy_r_r121.f2);
    goto CPyL98;
CPyL181: ;
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL105;
CPyL182: ;
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_r130);
    goto CPyL109;
CPyL183: ;
    CPy_XDECREF(cpy_r_state);
    goto CPyL115;
CPyL184: ;
    CPy_DECREF(cpy_r_worklist);
    goto CPyL132;
CPyL185: ;
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_all_deferred);
    goto CPyL142;
CPyL186: ;
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_all_deferred);
    CPy_DecRef(cpy_r_next_id);
    goto CPyL142;
CPyL187: ;
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_worklist);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_all_deferred);
    CPy_DECREF(cpy_r_next_id);
    goto CPyL120;
CPyL188: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_all_deferred);
    CPy_DecRef(cpy_r_next_id);
    goto CPyL142;
CPyL189: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_next_id);
    goto CPyL142;
CPyL190: ;
    CPy_DECREF(cpy_r_next_id);
    goto CPyL114;
CPyL191: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_worklist);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_all_deferred);
    goto CPyL142;
CPyL192: ;
    CPy_XDecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_all_deferred);
    goto CPyL142;
CPyL193: ;
    CPy_XDECREF(cpy_r_state);
    CPyTagged_DECREF(cpy_r_iteration);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_all_deferred);
    goto CPyL135;
CPyL194: ;
    CPy_XDecRef(cpy_r_state);
    CPyTagged_DecRef(cpy_r_iteration);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL142;
}

PyObject *CPyPy_semanal_main___process_top_levels(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "patches", 0};
    static CPyArg_Parser parser = {"OOO:process_top_levels", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_patches;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_patches)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_patches;
    if (likely(PyList_Check(obj_patches)))
        arg_patches = obj_patches;
    else {
        CPy_TypeError("list", obj_patches); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___process_top_levels(arg_graph, arg_scc, arg_patches);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "process_top_levels", 177, CPyStatic_semanal_main___globals);
    return NULL;
}

PyObject *CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "__get__", -1, CPyStatic_semanal_main___globals);
    return NULL;
}

tuple_T2IO CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__(PyObject *cpy_r___mypyc_self__, tuple_T3OOO cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2IO cpy_r_r24;
    tuple_T2IO cpy_r_r25;
    cpy_r_r0 = ((mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "<lambda>", "__mypyc_lambda__0_process_functions_obj", "__mypyc_env__", 249, CPyStatic_semanal_main___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL14;
CPyL1: ;
    cpy_r_r1 = cpy_r_x.f1;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___MypyFile))
        cpy_r_r6 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "<lambda>", 249, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypy___nodes___MypyFileObject *)cpy_r_r6)->_line;
    CPyTagged_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL12;
CPyL4: ;
    cpy_r_r9 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___FuncDef))
        cpy_r_r13 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "<lambda>", 249, CPyStatic_semanal_main___globals, "mypy.nodes.FuncDef", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r14 = ((mypy___nodes___FuncDefObject *)cpy_r_r13)->_line;
    CPyTagged_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r8 = cpy_r_r14;
    goto CPyL12;
CPyL7: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r19 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "<lambda>", 249, CPyStatic_semanal_main___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r20 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r19)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r8 = cpy_r_r20;
    goto CPyL12;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___Decorator))
        cpy_r_r21 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "<lambda>", 249, CPyStatic_semanal_main___globals, "mypy.nodes.Decorator", cpy_r_r1);
        goto CPyL13;
    }
    cpy_r_r22 = ((mypy___nodes___DecoratorObject *)cpy_r_r21)->_line;
    CPyTagged_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r8 = cpy_r_r22;
CPyL12: ;
    cpy_r_r23 = cpy_r_x.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24.f0 = cpy_r_r8;
    cpy_r_r24.f1 = cpy_r_r23;
    CPyTagged_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    CPyTagged_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r23);
    return cpy_r_r24;
CPyL13: ;
    tuple_T2IO __tmp5866 = { CPY_INT_TAG, NULL };
    cpy_r_r25 = __tmp5866;
    return cpy_r_r25;
CPyL14: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    tuple_T3OOO arg_x;
    PyObject *__tmp5867;
    if (unlikely(!(PyTuple_Check(obj_x) && PyTuple_GET_SIZE(obj_x) == 3))) {
        __tmp5867 = NULL;
        goto __LL5868;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_x, 0))))
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 0);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 == NULL) goto __LL5868;
    if (Py_TYPE(PyTuple_GET_ITEM(obj_x, 1)) == CPyType_nodes___MypyFile)
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5869;
    if (Py_TYPE(PyTuple_GET_ITEM(obj_x, 1)) == CPyType_nodes___FuncDef)
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5869;
    if (Py_TYPE(PyTuple_GET_ITEM(obj_x, 1)) == CPyType_nodes___OverloadedFuncDef)
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5869;
    if (Py_TYPE(PyTuple_GET_ITEM(obj_x, 1)) == CPyType_nodes___Decorator)
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 1);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5869;
    __tmp5867 = NULL;
__LL5869: ;
    if (__tmp5867 == NULL) goto __LL5868;
    if ((Py_TYPE(PyTuple_GET_ITEM(obj_x, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(obj_x, 2)) == CPyType_nodes___TypeInfo))
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 2);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5870;
    if (PyTuple_GET_ITEM(obj_x, 2) == Py_None)
        __tmp5867 = PyTuple_GET_ITEM(obj_x, 2);
    else {
        __tmp5867 = NULL;
    }
    if (__tmp5867 != NULL) goto __LL5870;
    __tmp5867 = NULL;
__LL5870: ;
    if (__tmp5867 == NULL) goto __LL5868;
    __tmp5867 = obj_x;
__LL5868: ;
    if (unlikely(__tmp5867 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator], union[mypy.nodes.TypeInfo, None]]", obj_x); goto fail;
    } else {
        PyObject *__tmp5871 = PyTuple_GET_ITEM(obj_x, 0);
        PyObject *__tmp5872;
        if (likely(PyUnicode_Check(__tmp5871)))
            __tmp5872 = __tmp5871;
        else {
            CPy_TypeError("str", __tmp5871); 
            __tmp5872 = NULL;
        }
        arg_x.f0 = __tmp5872;
        PyObject *__tmp5873 = PyTuple_GET_ITEM(obj_x, 1);
        PyObject *__tmp5874;
        if (Py_TYPE(__tmp5873) == CPyType_nodes___MypyFile)
            __tmp5874 = __tmp5873;
        else {
            __tmp5874 = NULL;
        }
        if (__tmp5874 != NULL) goto __LL5875;
        if (Py_TYPE(__tmp5873) == CPyType_nodes___FuncDef)
            __tmp5874 = __tmp5873;
        else {
            __tmp5874 = NULL;
        }
        if (__tmp5874 != NULL) goto __LL5875;
        if (Py_TYPE(__tmp5873) == CPyType_nodes___OverloadedFuncDef)
            __tmp5874 = __tmp5873;
        else {
            __tmp5874 = NULL;
        }
        if (__tmp5874 != NULL) goto __LL5875;
        if (Py_TYPE(__tmp5873) == CPyType_nodes___Decorator)
            __tmp5874 = __tmp5873;
        else {
            __tmp5874 = NULL;
        }
        if (__tmp5874 != NULL) goto __LL5875;
        CPy_TypeError("union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", __tmp5873); 
        __tmp5874 = NULL;
__LL5875: ;
        arg_x.f1 = __tmp5874;
        PyObject *__tmp5876 = PyTuple_GET_ITEM(obj_x, 2);
        PyObject *__tmp5877;
        if ((Py_TYPE(__tmp5876) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5876) == CPyType_nodes___TypeInfo))
            __tmp5877 = __tmp5876;
        else {
            __tmp5877 = NULL;
        }
        if (__tmp5877 != NULL) goto __LL5878;
        if (__tmp5876 == Py_None)
            __tmp5877 = __tmp5876;
        else {
            __tmp5877 = NULL;
        }
        if (__tmp5877 != NULL) goto __LL5878;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5876); 
        __tmp5877 = NULL;
__LL5878: ;
        arg_x.f2 = __tmp5877;
    }
    tuple_T2IO retval = CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj_____call__(arg___mypyc_self__, arg_x);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5879 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp5879);
    PyObject *__tmp5880 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp5880);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "<lambda>", 249, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___process_functions(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_patches) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_analyzer;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_targets;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_active_type;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = CPyDef_semanal_main___process_functions_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 235, CPyStatic_semanal_main___globals);
        goto CPyL38;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL39;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 237, CPyStatic_semanal_main___globals, "str", cpy_r_r6);
        goto CPyL40;
    }
    cpy_r_module = cpy_r_r7;
    cpy_r_r8 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 238, CPyStatic_semanal_main___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_mypy___build___State))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 238, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r8);
        goto CPyL41;
    }
    cpy_r_r10 = ((mypy___build___StateObject *)cpy_r_r9)->_tree;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_tree = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_tree != cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL9;
    } else
        goto CPyL42;
CPyL7: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 239, CPyStatic_semanal_main___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 240, CPyStatic_semanal_main___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_mypy___build___State))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 240, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r14);
        goto CPyL43;
    }
    cpy_r_r16 = ((mypy___build___StateObject *)cpy_r_r15)->_manager;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_functions", "State", "manager", 240, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
CPyL12: ;
    cpy_r_r17 = ((mypy___build___BuildManagerObject *)cpy_r_r16)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    cpy_r_analyzer = cpy_r_r17;
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r18 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL45;
    }
    cpy_r_r19 = CPyDef_semanal_main___get_all_leaf_targets(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals);
        goto CPyL45;
    }
    cpy_r_r20 = CPyDef_semanal_main_____mypyc_lambda__0_process_functions_obj();
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *)cpy_r_r20)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *)cpy_r_r20)->___mypyc_env__);
    }
    ((mypy___semanal_main_____mypyc_lambda__0_process_functions_objObject *)cpy_r_r20)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_r22 = CPyModule_builtins;
    cpy_r_r23 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r25[2] = {cpy_r_r19, cpy_r_r20};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, cpy_r_r27);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    if (likely(PyList_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 249, CPyStatic_semanal_main___globals, "list", cpy_r_r28);
        goto CPyL45;
    }
    cpy_r_targets = cpy_r_r29;
    cpy_r_r30 = 0;
CPyL20: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_targets)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL48;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_targets, cpy_r_r30);
    PyObject *__tmp5881;
    if (unlikely(!(PyTuple_Check(cpy_r_r35) && PyTuple_GET_SIZE(cpy_r_r35) == 3))) {
        __tmp5881 = NULL;
        goto __LL5882;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r35, 0))))
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 0);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 == NULL) goto __LL5882;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 1)) == CPyType_nodes___MypyFile)
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5883;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 1)) == CPyType_nodes___FuncDef)
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5883;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 1)) == CPyType_nodes___OverloadedFuncDef)
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5883;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 1)) == CPyType_nodes___Decorator)
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5883;
    __tmp5881 = NULL;
__LL5883: ;
    if (__tmp5881 == NULL) goto __LL5882;
    if ((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r35, 2)) == CPyType_nodes___TypeInfo))
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 2);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5884;
    if (PyTuple_GET_ITEM(cpy_r_r35, 2) == Py_None)
        __tmp5881 = PyTuple_GET_ITEM(cpy_r_r35, 2);
    else {
        __tmp5881 = NULL;
    }
    if (__tmp5881 != NULL) goto __LL5884;
    __tmp5881 = NULL;
__LL5884: ;
    if (__tmp5881 == NULL) goto __LL5882;
    __tmp5881 = cpy_r_r35;
__LL5882: ;
    if (unlikely(__tmp5881 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator], union[mypy.nodes.TypeInfo, None]]", cpy_r_r35); cpy_r_r36 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp5885 = PyTuple_GET_ITEM(cpy_r_r35, 0);
        CPy_INCREF(__tmp5885);
        PyObject *__tmp5886;
        if (likely(PyUnicode_Check(__tmp5885)))
            __tmp5886 = __tmp5885;
        else {
            CPy_TypeError("str", __tmp5885); 
            __tmp5886 = NULL;
        }
        cpy_r_r36.f0 = __tmp5886;
        PyObject *__tmp5887 = PyTuple_GET_ITEM(cpy_r_r35, 1);
        CPy_INCREF(__tmp5887);
        PyObject *__tmp5888;
        if (Py_TYPE(__tmp5887) == CPyType_nodes___MypyFile)
            __tmp5888 = __tmp5887;
        else {
            __tmp5888 = NULL;
        }
        if (__tmp5888 != NULL) goto __LL5889;
        if (Py_TYPE(__tmp5887) == CPyType_nodes___FuncDef)
            __tmp5888 = __tmp5887;
        else {
            __tmp5888 = NULL;
        }
        if (__tmp5888 != NULL) goto __LL5889;
        if (Py_TYPE(__tmp5887) == CPyType_nodes___OverloadedFuncDef)
            __tmp5888 = __tmp5887;
        else {
            __tmp5888 = NULL;
        }
        if (__tmp5888 != NULL) goto __LL5889;
        if (Py_TYPE(__tmp5887) == CPyType_nodes___Decorator)
            __tmp5888 = __tmp5887;
        else {
            __tmp5888 = NULL;
        }
        if (__tmp5888 != NULL) goto __LL5889;
        CPy_TypeError("union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", __tmp5887); 
        __tmp5888 = NULL;
__LL5889: ;
        cpy_r_r36.f1 = __tmp5888;
        PyObject *__tmp5890 = PyTuple_GET_ITEM(cpy_r_r35, 2);
        CPy_INCREF(__tmp5890);
        PyObject *__tmp5891;
        if ((Py_TYPE(__tmp5890) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5890) == CPyType_nodes___TypeInfo))
            __tmp5891 = __tmp5890;
        else {
            __tmp5891 = NULL;
        }
        if (__tmp5891 != NULL) goto __LL5892;
        if (__tmp5890 == Py_None)
            __tmp5891 = __tmp5890;
        else {
            __tmp5891 = NULL;
        }
        if (__tmp5891 != NULL) goto __LL5892;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5890); 
        __tmp5891 = NULL;
__LL5892: ;
        cpy_r_r36.f2 = __tmp5891;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 250, CPyStatic_semanal_main___globals);
        goto CPyL49;
    }
    cpy_r_r37 = cpy_r_r36.f0;
    CPy_INCREF(cpy_r_r37);
    cpy_r_target = cpy_r_r37;
    cpy_r_r38 = cpy_r_r36.f1;
    CPy_INCREF(cpy_r_r38);
    cpy_r_node = cpy_r_r38;
    cpy_r_r39 = cpy_r_r36.f2;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r36.f0);
    CPy_DECREF(cpy_r_r36.f1);
    CPy_DECREF(cpy_r_r36.f2);
    cpy_r_active_type = cpy_r_r39;
    cpy_r_r40 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r41 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r42 = *(PyObject * *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 == cpy_r_r40;
    if (!cpy_r_r43) goto CPyL24;
    cpy_r_r44 = cpy_r_r43;
    goto CPyL25;
CPyL24: ;
    cpy_r_r45 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    cpy_r_r44 = cpy_r_r48;
CPyL25: ;
    if (!cpy_r_r44) goto CPyL27;
    cpy_r_r49 = cpy_r_r44;
    goto CPyL28;
CPyL27: ;
    cpy_r_r50 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    cpy_r_r49 = cpy_r_r53;
CPyL28: ;
    if (cpy_r_r49) {
        goto CPyL31;
    } else
        goto CPyL50;
CPyL29: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 251, CPyStatic_semanal_main___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r55 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 253, CPyStatic_semanal_main___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_mypy___build___State))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 253, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r55);
        goto CPyL51;
    }
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r57 = cpy_r_node;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL5893;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r57 = cpy_r_node;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL5893;
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator)
        cpy_r_r57 = cpy_r_node;
    else {
        cpy_r_r57 = NULL;
    }
    if (cpy_r_r57 != NULL) goto __LL5893;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_functions", 253, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", cpy_r_node);
    goto CPyL52;
__LL5893: ;
    cpy_r_r58 = CPyDef_semanal_main___process_top_level_function(cpy_r_analyzer, cpy_r_r56, cpy_r_module, cpy_r_target, cpy_r_r57, cpy_r_active_type, cpy_r_patches);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_active_type);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 252, CPyStatic_semanal_main___globals);
        goto CPyL49;
    }
    cpy_r_r59 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r59;
    goto CPyL20;
CPyL36: ;
    cpy_r_r60 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r60;
    goto CPyL2;
CPyL37: ;
    return 1;
CPyL38: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    goto CPyL38;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_tree);
    goto CPyL7;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_tree);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r15);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r19);
    goto CPyL38;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL38;
CPyL48: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_targets);
    goto CPyL36;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_targets);
    goto CPyL38;
CPyL50: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_targets);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_active_type);
    goto CPyL29;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_active_type);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_active_type);
    CPy_DecRef(cpy_r_r56);
    goto CPyL38;
}

PyObject *CPyPy_semanal_main___process_functions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "patches", 0};
    static CPyArg_Parser parser = {"OOO:process_functions", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_patches;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_patches)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_patches;
    if (likely(PyList_Check(obj_patches)))
        arg_patches = obj_patches;
    else {
        CPy_TypeError("list", obj_patches); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___process_functions(arg_graph, arg_scc, arg_patches);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "process_functions", 235, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___process_top_level_function(PyObject *cpy_r_analyzer, PyObject *cpy_r_state, PyObject *cpy_r_module, PyObject *cpy_r_target, PyObject *cpy_r_node, PyObject *cpy_r_active_type, PyObject *cpy_r_patches) {
    char cpy_r_final_iteration;
    char cpy_r_incomplete;
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_deferred;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_iteration;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    tuple_T3OCC cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_progress;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    cpy_r_final_iteration = 0;
    cpy_r_incomplete = 1;
    cpy_r_r0 = PyList_New(1);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 276, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    cpy_r_r1 = (CPyPtr)&((PyListObject *)cpy_r_r0)->ob_item;
    cpy_r_r2 = *(CPyPtr *)cpy_r_r1;
    CPy_INCREF(cpy_r_module);
    *(PyObject * *)cpy_r_r2 = cpy_r_module;
    cpy_r_deferred = cpy_r_r0;
    cpy_r_r3 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_deferral_debug_context;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "SemanticAnalyzer", "deferral_debug_context", 277, CPyStatic_semanal_main___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r3);
CPyL2: ;
    cpy_r_r4 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r5[1] = {cpy_r_r3};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 277, CPyStatic_semanal_main___globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL3: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r8 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_incomplete_namespaces;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "SemanticAnalyzer", "incomplete_namespaces", 278, CPyStatic_semanal_main___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r8);
CPyL4: ;
    cpy_r_r9 = PySet_Add(cpy_r_r8, cpy_r_module);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 278, CPyStatic_semanal_main___globals);
        goto CPyL58;
    }
    cpy_r_iteration = 0;
CPyL6: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_deferred)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL61;
    cpy_r_r15 = CPyTagged_Add(cpy_r_iteration, 2);
    CPyTagged_DECREF(cpy_r_iteration);
    cpy_r_iteration = cpy_r_r15;
    cpy_r_r16 = cpy_r_iteration == 40;
    if (cpy_r_r16) {
        goto CPyL62;
    } else
        goto CPyL39;
CPyL8: ;
    cpy_r_r17 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_r17 != cpy_r_r18;
    if (cpy_r_r19) goto CPyL11;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 284, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r21 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r21);
        goto CPyL57;
    }
    cpy_r_r23 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "State", "options", 285, CPyStatic_semanal_main___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r23);
CPyL13: ;
    cpy_r_r24 = CPyStatics[4826]; /* 'file_context' */
    PyObject *cpy_r_r25[3] = {cpy_r_analyzer, cpy_r_r22, cpy_r_r23};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r28 = PyObject_Type(cpy_r_r27);
    cpy_r_r29 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL65;
    }
    cpy_r_r31 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r31);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r27};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL66;
    } else
        goto CPyL67;
CPyL17: ;
    cpy_r_r36 = 1;
    cpy_r_r37 = CPyDef_semanal___SemanticAnalyzer___report_hang(cpy_r_analyzer);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 286, CPyStatic_semanal_main___globals);
    } else
        goto CPyL27;
    cpy_r_r38 = CPy_CatchError();
    cpy_r_r36 = 0;
    cpy_r_r39 = CPy_GetExcInfo();
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = cpy_r_r39.f2;
    CPy_INCREF(cpy_r_r42);
    CPy_DecRef(cpy_r_r39.f0);
    CPy_DecRef(cpy_r_r39.f1);
    CPy_DecRef(cpy_r_r39.f2);
    PyObject *cpy_r_r43[4] = {cpy_r_r27, cpy_r_r40, cpy_r_r41, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r44, 4, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL68;
    }
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DecRef(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL25;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL24;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL69;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL27;
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) {
        goto CPyL28;
    } else
        goto CPyL70;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    tuple_T3OOO __tmp5894 = { NULL, NULL, NULL };
    cpy_r_r50 = __tmp5894;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL29;
CPyL28: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r51 = cpy_r_r52;
CPyL29: ;
    if (!cpy_r_r36) goto CPyL71;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r54[4] = {cpy_r_r27, cpy_r_r53, cpy_r_r53, cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r55, 4, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 285, CPyStatic_semanal_main___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL31: ;
    CPy_DECREF(cpy_r_r27);
CPyL32: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL52;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL74;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    if (cpy_r_r51.f0 == NULL) goto CPyL37;
    CPy_RestoreExcInfo(cpy_r_r51);
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
CPyL37: ;
    cpy_r_r57 = CPy_KeepPropagating();
    if (!cpy_r_r57) goto CPyL57;
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_deferred)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    CPy_DECREF(cpy_r_deferred);
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = cpy_r_r60 != 0;
    if (cpy_r_r61) goto CPyL41;
    if (!cpy_r_incomplete) goto CPyL42;
CPyL41: ;
    if (!cpy_r_final_iteration) goto CPyL44;
CPyL42: ;
    cpy_r_r62 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_incomplete_namespaces;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "SemanticAnalyzer", "incomplete_namespaces", 290, CPyStatic_semanal_main___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r62);
CPyL43: ;
    cpy_r_r63 = PySet_Discard(cpy_r_r62, cpy_r_module);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 290, CPyStatic_semanal_main___globals);
        goto CPyL75;
    }
CPyL44: ;
    cpy_r_r65 = CPyDef_semanal_main___semantic_analyze_target(cpy_r_target, cpy_r_module, cpy_r_state, cpy_r_node, cpy_r_active_type, cpy_r_final_iteration, cpy_r_patches);
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 291, CPyStatic_semanal_main___globals);
        goto CPyL75;
    }
    cpy_r_r66 = cpy_r_r65.f0;
    CPy_INCREF(cpy_r_r66);
    cpy_r_deferred = cpy_r_r66;
    cpy_r_r67 = cpy_r_r65.f1;
    cpy_r_incomplete = cpy_r_r67;
    cpy_r_r68 = cpy_r_r65.f2;
    CPy_DECREF(cpy_r_r65.f0);
    cpy_r_progress = cpy_r_r68;
    if (!cpy_r_final_iteration) goto CPyL50;
    cpy_r_r69 = PyObject_Not(cpy_r_deferred);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 295, CPyStatic_semanal_main___globals);
        goto CPyL76;
    }
    cpy_r_r71 = cpy_r_r69;
    if (cpy_r_r71) {
        goto CPyL50;
    } else
        goto CPyL77;
CPyL48: ;
    PyErr_SetString(PyExc_AssertionError, "Must not defer during final iteration");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 295, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL50: ;
    if (cpy_r_progress) goto CPyL6;
    cpy_r_final_iteration = 1;
    goto CPyL6;
CPyL52: ;
    cpy_r_r73 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_incomplete_namespaces;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "SemanticAnalyzer", "incomplete_namespaces", 299, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r73);
CPyL53: ;
    cpy_r_r74 = PySet_Discard(cpy_r_r73, cpy_r_module);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 299, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    cpy_r_r76 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_saved_locals;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "process_top_level_function", "SemanticAnalyzer", "saved_locals", 302, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r76);
CPyL55: ;
    cpy_r_r77 = CPyDict_Clear(cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 302, CPyStatic_semanal_main___globals);
        goto CPyL57;
    }
    return 1;
CPyL57: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL58: ;
    CPy_DecRef(cpy_r_deferred);
    goto CPyL57;
CPyL59: ;
    CPy_DecRef(cpy_r_deferred);
    CPy_DecRef(cpy_r_r3);
    goto CPyL57;
CPyL60: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL3;
CPyL61: ;
    CPy_DECREF(cpy_r_deferred);
    CPyTagged_DECREF(cpy_r_iteration);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r_deferred);
    CPyTagged_DECREF(cpy_r_iteration);
    goto CPyL8;
CPyL63: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL57;
CPyL64: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL57;
CPyL65: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    goto CPyL57;
CPyL66: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL57;
CPyL67: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL17;
CPyL68: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL25;
CPyL69: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL23;
CPyL70: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL26;
CPyL71: ;
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r30);
    goto CPyL32;
CPyL72: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL35;
CPyL73: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL31;
CPyL74: ;
    CPy_XDECREF(cpy_r_r51.f0);
    CPy_XDECREF(cpy_r_r51.f1);
    CPy_XDECREF(cpy_r_r51.f2);
    goto CPyL34;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_iteration);
    goto CPyL57;
CPyL76: ;
    CPy_DecRef(cpy_r_deferred);
    CPyTagged_DecRef(cpy_r_iteration);
    goto CPyL57;
CPyL77: ;
    CPy_DECREF(cpy_r_deferred);
    CPyTagged_DECREF(cpy_r_iteration);
    goto CPyL48;
}

PyObject *CPyPy_semanal_main___process_top_level_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"analyzer", "state", "module", "target", "node", "active_type", "patches", 0};
    static CPyArg_Parser parser = {"OOOOOOO:process_top_level_function", kwlist, 0};
    PyObject *obj_analyzer;
    PyObject *obj_state;
    PyObject *obj_module;
    PyObject *obj_target;
    PyObject *obj_node;
    PyObject *obj_active_type;
    PyObject *obj_patches;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_analyzer, &obj_state, &obj_module, &obj_target, &obj_node, &obj_active_type, &obj_patches)) {
        return NULL;
    }
    PyObject *arg_analyzer;
    if (likely(Py_TYPE(obj_analyzer) == CPyType_semanal___SemanticAnalyzer))
        arg_analyzer = obj_analyzer;
    else {
        CPy_TypeError("mypy.semanal.SemanticAnalyzer", obj_analyzer); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *arg_node;
    if (Py_TYPE(obj_node) == CPyType_nodes___FuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5895;
    if (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5895;
    if (Py_TYPE(obj_node) == CPyType_nodes___Decorator)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5895;
    CPy_TypeError("union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", obj_node); 
    goto fail;
__LL5895: ;
    PyObject *arg_active_type;
    if ((Py_TYPE(obj_active_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_active_type) == CPyType_nodes___TypeInfo))
        arg_active_type = obj_active_type;
    else {
        arg_active_type = NULL;
    }
    if (arg_active_type != NULL) goto __LL5896;
    if (obj_active_type == Py_None)
        arg_active_type = obj_active_type;
    else {
        arg_active_type = NULL;
    }
    if (arg_active_type != NULL) goto __LL5896;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_active_type); 
    goto fail;
__LL5896: ;
    PyObject *arg_patches;
    if (likely(PyList_Check(obj_patches)))
        arg_patches = obj_patches;
    else {
        CPy_TypeError("list", obj_patches); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___process_top_level_function(arg_analyzer, arg_state, arg_module, arg_target, arg_node, arg_active_type, arg_patches);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "process_top_level_function", 257, CPyStatic_semanal_main___globals);
    return NULL;
}

PyObject *CPyDef_semanal_main___get_all_leaf_targets(PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_active_type;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 312, CPyStatic_semanal_main___globals);
        goto CPyL16;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyDef_nodes___MypyFile___local_definitions(cpy_r_file);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 313, CPyStatic_semanal_main___globals);
        goto CPyL17;
    }
    cpy_r_r2 = PyObject_GetIter(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 313, CPyStatic_semanal_main___globals);
        goto CPyL17;
    }
CPyL3: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL18;
    PyObject *__tmp5897;
    if (unlikely(!(PyTuple_Check(cpy_r_r3) && PyTuple_GET_SIZE(cpy_r_r3) == 3))) {
        __tmp5897 = NULL;
        goto __LL5898;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r3, 0))))
        __tmp5897 = PyTuple_GET_ITEM(cpy_r_r3, 0);
    else {
        __tmp5897 = NULL;
    }
    if (__tmp5897 == NULL) goto __LL5898;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r3, 1)) == CPyType_nodes___SymbolTableNode))
        __tmp5897 = PyTuple_GET_ITEM(cpy_r_r3, 1);
    else {
        __tmp5897 = NULL;
    }
    if (__tmp5897 == NULL) goto __LL5898;
    if ((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r3, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r3, 2)) == CPyType_nodes___TypeInfo))
        __tmp5897 = PyTuple_GET_ITEM(cpy_r_r3, 2);
    else {
        __tmp5897 = NULL;
    }
    if (__tmp5897 != NULL) goto __LL5899;
    if (PyTuple_GET_ITEM(cpy_r_r3, 2) == Py_None)
        __tmp5897 = PyTuple_GET_ITEM(cpy_r_r3, 2);
    else {
        __tmp5897 = NULL;
    }
    if (__tmp5897 != NULL) goto __LL5899;
    __tmp5897 = NULL;
__LL5899: ;
    if (__tmp5897 == NULL) goto __LL5898;
    __tmp5897 = cpy_r_r3;
__LL5898: ;
    if (unlikely(__tmp5897 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.SymbolTableNode, union[mypy.nodes.TypeInfo, None]]", cpy_r_r3); cpy_r_r4 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp5900 = PyTuple_GET_ITEM(cpy_r_r3, 0);
        CPy_INCREF(__tmp5900);
        PyObject *__tmp5901;
        if (likely(PyUnicode_Check(__tmp5900)))
            __tmp5901 = __tmp5900;
        else {
            CPy_TypeError("str", __tmp5900); 
            __tmp5901 = NULL;
        }
        cpy_r_r4.f0 = __tmp5901;
        PyObject *__tmp5902 = PyTuple_GET_ITEM(cpy_r_r3, 1);
        CPy_INCREF(__tmp5902);
        PyObject *__tmp5903;
        if (likely(Py_TYPE(__tmp5902) == CPyType_nodes___SymbolTableNode))
            __tmp5903 = __tmp5902;
        else {
            CPy_TypeError("mypy.nodes.SymbolTableNode", __tmp5902); 
            __tmp5903 = NULL;
        }
        cpy_r_r4.f1 = __tmp5903;
        PyObject *__tmp5904 = PyTuple_GET_ITEM(cpy_r_r3, 2);
        CPy_INCREF(__tmp5904);
        PyObject *__tmp5905;
        if ((Py_TYPE(__tmp5904) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5904) == CPyType_nodes___TypeInfo))
            __tmp5905 = __tmp5904;
        else {
            __tmp5905 = NULL;
        }
        if (__tmp5905 != NULL) goto __LL5906;
        if (__tmp5904 == Py_None)
            __tmp5905 = __tmp5904;
        else {
            __tmp5905 = NULL;
        }
        if (__tmp5905 != NULL) goto __LL5906;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5904); 
        __tmp5905 = NULL;
__LL5906: ;
        cpy_r_r4.f2 = __tmp5905;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 313, CPyStatic_semanal_main___globals);
        goto CPyL19;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_fullname = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    cpy_r_node = cpy_r_r6;
    cpy_r_r7 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    CPy_DECREF(cpy_r_r4.f2);
    cpy_r_active_type = cpy_r_r7;
    cpy_r_r8 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r9 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL8;
CPyL7: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL8: ;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r18 = cpy_r_r13;
    goto CPyL11;
CPyL10: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_r8)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r18 = cpy_r_r22;
CPyL11: ;
    if (!cpy_r_r18) goto CPyL20;
    cpy_r_r23 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_node);
    if (Py_TYPE(cpy_r_r23) == CPyType_nodes___FuncDef)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL5907;
    if (Py_TYPE(cpy_r_r23) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL5907;
    if (Py_TYPE(cpy_r_r23) == CPyType_nodes___Decorator)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL5907;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 315, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", cpy_r_r23);
    goto CPyL21;
__LL5907: ;
    cpy_r_r25.f0 = cpy_r_fullname;
    cpy_r_r25.f1 = cpy_r_r24;
    cpy_r_r25.f2 = cpy_r_active_type;
    CPy_INCREF(cpy_r_r25.f0);
    CPy_INCREF(cpy_r_r25.f1);
    CPy_INCREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_active_type);
    cpy_r_r26 = PyTuple_New(3);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5908 = cpy_r_r25.f0;
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp5908);
    PyObject *__tmp5909 = cpy_r_r25.f1;
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp5909);
    PyObject *__tmp5910 = cpy_r_r25.f2;
    PyTuple_SET_ITEM(cpy_r_r26, 2, __tmp5910);
    cpy_r_r27 = PyList_Append(cpy_r_result, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 315, CPyStatic_semanal_main___globals);
        goto CPyL19;
    } else
        goto CPyL3;
CPyL14: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 313, CPyStatic_semanal_main___globals);
        goto CPyL17;
    }
    return cpy_r_result;
CPyL16: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL17: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_fullname);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_active_type);
    goto CPyL3;
CPyL21: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_fullname);
    CPy_DecRef(cpy_r_active_type);
    goto CPyL16;
}

PyObject *CPyPy_semanal_main___get_all_leaf_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:get_all_leaf_targets", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_file;
    if (likely(Py_TYPE(obj_file) == CPyType_nodes___MypyFile))
        arg_file = obj_file;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_semanal_main___get_all_leaf_targets(arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "get_all_leaf_targets", 310, CPyStatic_semanal_main___globals);
    return NULL;
}

tuple_T3OCC CPyDef_semanal_main___semantic_analyze_target(PyObject *cpy_r_target, PyObject *cpy_r_module, PyObject *cpy_r_state, PyObject *cpy_r_node, PyObject *cpy_r_active_type, char cpy_r_final_iteration, PyObject *cpy_r_patches) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_analyzer;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_refresh_node;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    tuple_T3OOO cpy_r_r69;
    tuple_T3OOO cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_dep;
    char cpy_r_r81;
    CPyTagged cpy_r_priority;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    int64_t cpy_r_r86;
    char cpy_r_r87;
    int64_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyPtr cpy_r_r104;
    CPyPtr cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    tuple_T3OCC cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    tuple_T3OCC cpy_r_r112;
    tuple_T3OCC cpy_r_r113;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "State", "manager", 335, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___build___BuildManagerObject *)cpy_r_r0)->_processed_targets;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "BuildManager", "processed_targets", 335, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2.f0 = cpy_r_module;
    cpy_r_r2.f1 = cpy_r_target;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = PyTuple_New(2);
    if (unlikely(cpy_r_r3 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5911 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r3, 0, __tmp5911);
    PyObject *__tmp5912 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r3, 1, __tmp5912);
    cpy_r_r4 = PyList_Append(cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 335, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
    cpy_r_r6 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r6);
    cpy_r_tree = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_tree != cpy_r_r7;
    if (cpy_r_r8) {
        goto CPyL6;
    } else
        goto CPyL80;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 337, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "State", "manager", 338, CPyStatic_semanal_main___globals);
        goto CPyL81;
    }
CPyL7: ;
    cpy_r_r11 = ((mypy___build___BuildManagerObject *)cpy_r_r10)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r11);
    cpy_r_analyzer = cpy_r_r11;
    cpy_r_r12 = PySet_New(NULL);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 340, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 340, CPyStatic_semanal_main___globals);
        goto CPyL83;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_r12;
    if (((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_global_decls != NULL) {
        CPy_DECREF(((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_global_decls);
    }
    ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_global_decls = cpy_r_r13;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 340, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    cpy_r_r17 = PySet_New(NULL);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 341, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    cpy_r_r18 = PyList_New(1);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 341, CPyStatic_semanal_main___globals);
        goto CPyL84;
    }
    cpy_r_r19 = (CPyPtr)&((PyListObject *)cpy_r_r18)->ob_item;
    cpy_r_r20 = *(CPyPtr *)cpy_r_r19;
    *(PyObject * *)cpy_r_r20 = cpy_r_r17;
    if (((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_nonlocal_decls != NULL) {
        CPy_DECREF(((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_nonlocal_decls);
    }
    ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_nonlocal_decls = cpy_r_r18;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 341, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r22 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 342, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL82;
    }
    cpy_r_r23 = ((mypy___nodes___MypyFileObject *)cpy_r_r22)->_names;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "MypyFile", "names", 342, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r23);
CPyL15: ;
    if (((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_globals != NULL) {
        CPy_DECREF(((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_globals);
    }
    ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_globals = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 342, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_progress = 0;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 343, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    cpy_r_r26 = CPyStatics[379]; /* 'wrap_context' */
    cpy_r_r27 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r28[2] = {cpy_r_state, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = CPyStatics[9698]; /* ('check_blockers',) */
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r29, 9223372036854775809ULL, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    cpy_r_r32 = PyObject_Type(cpy_r_r31);
    cpy_r_r33 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL85;
    }
    cpy_r_r35 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r35);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r37[1] = {cpy_r_r31};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r36, cpy_r_r38, 1, 0);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL21: ;
    cpy_r_r40 = 1;
    CPy_INCREF(cpy_r_node);
    cpy_r_refresh_node = cpy_r_node;
    cpy_r_r41 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_refresh_node)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_refresh_node) == CPyType_nodes___Decorator))
        cpy_r_r45 = cpy_r_refresh_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 348, CPyStatic_semanal_main___globals, "mypy.nodes.Decorator", cpy_r_refresh_node);
        goto CPyL88;
    }
    cpy_r_r46 = ((mypy___nodes___DecoratorObject *)cpy_r_r45)->_func;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_refresh_node);
    cpy_r_refresh_node = cpy_r_r46;
CPyL25: ;
    if (Py_TYPE(cpy_r_refresh_node) == CPyType_nodes___MypyFile)
        cpy_r_r47 = cpy_r_refresh_node;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL5913;
    if (Py_TYPE(cpy_r_refresh_node) == CPyType_nodes___FuncDef)
        cpy_r_r47 = cpy_r_refresh_node;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL5913;
    if (Py_TYPE(cpy_r_refresh_node) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r47 = cpy_r_refresh_node;
    else {
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 != NULL) goto __LL5913;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 350, CPyStatic_semanal_main___globals, "union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_refresh_node);
    goto CPyL89;
__LL5913: ;
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r48 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 353, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL90;
    }
    cpy_r_r49 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "State", "options", 354, CPyStatic_semanal_main___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r49);
CPyL28: ;
    cpy_r_r50 = CPyDef_semanal___SemanticAnalyzer___refresh_partial(cpy_r_analyzer, cpy_r_r47, cpy_r_patches, cpy_r_final_iteration, cpy_r_r48, cpy_r_r49, cpy_r_active_type);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 349, CPyStatic_semanal_main___globals);
        goto CPyL32;
    }
    cpy_r_r51 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    if (!cpy_r_r54) goto CPyL40;
    CPy_INCREF(cpy_r_node);
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r55 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 358, CPyStatic_semanal_main___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL32;
    }
    cpy_r_r56 = CPyDef_semanal_infer___infer_decorator_signature_if_simple(cpy_r_r55, cpy_r_analyzer);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 358, CPyStatic_semanal_main___globals);
    } else
        goto CPyL40;
CPyL32: ;
    cpy_r_r57 = CPy_CatchError();
    cpy_r_r40 = 0;
    cpy_r_r58 = CPy_GetExcInfo();
    cpy_r_r59 = cpy_r_r58.f0;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = cpy_r_r58.f1;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r58.f2;
    CPy_INCREF(cpy_r_r61);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    PyObject *cpy_r_r62[4] = {cpy_r_r31, cpy_r_r59, cpy_r_r60, cpy_r_r61};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r63, 4, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL92;
    }
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    cpy_r_r65 = PyObject_IsTrue(cpy_r_r64);
    CPy_DecRef(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL38;
    }
    cpy_r_r67 = cpy_r_r65;
    if (cpy_r_r67) goto CPyL37;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL93;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL40;
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    cpy_r_r68 = CPy_KeepPropagating();
    if (!cpy_r_r68) {
        goto CPyL41;
    } else
        goto CPyL94;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    tuple_T3OOO __tmp5914 = { NULL, NULL, NULL };
    cpy_r_r69 = __tmp5914;
    cpy_r_r70 = cpy_r_r69;
    goto CPyL42;
CPyL41: ;
    cpy_r_r71 = CPy_CatchError();
    cpy_r_r70 = cpy_r_r71;
CPyL42: ;
    if (!cpy_r_r40) goto CPyL95;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r73[4] = {cpy_r_r31, cpy_r_r72, cpy_r_r72, cpy_r_r72};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r74, 4, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 344, CPyStatic_semanal_main___globals);
        goto CPyL96;
    } else
        goto CPyL97;
CPyL44: ;
    CPy_DECREF(cpy_r_r31);
CPyL45: ;
    if (cpy_r_r70.f0 == NULL) {
        goto CPyL52;
    } else
        goto CPyL98;
CPyL46: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL48;
    } else
        goto CPyL99;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    if (cpy_r_r70.f0 == NULL) goto CPyL50;
    CPy_RestoreExcInfo(cpy_r_r70);
    CPy_XDECREF(cpy_r_r70.f0);
    CPy_XDECREF(cpy_r_r70.f1);
    CPy_XDECREF(cpy_r_r70.f2);
CPyL50: ;
    cpy_r_r76 = CPy_KeepPropagating();
    if (!cpy_r_r76) goto CPyL79;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r77 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_imports;
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "SemanticAnalyzer", "imports", 359, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r77);
CPyL53: ;
    cpy_r_r78 = PyObject_GetIter(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 359, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
CPyL54: ;
    cpy_r_r79 = PyIter_Next(cpy_r_r78);
    if (cpy_r_r79 == NULL) goto CPyL101;
    if (likely(PyUnicode_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "semantic_analyze_target", 359, CPyStatic_semanal_main___globals, "str", cpy_r_r79);
        goto CPyL102;
    }
    cpy_r_dep = cpy_r_r80;
    cpy_r_r81 = CPyDef_mypy___build___State___add_dependency(cpy_r_state, cpy_r_dep);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 360, CPyStatic_semanal_main___globals);
        goto CPyL103;
    }
    cpy_r_priority = 40;
    cpy_r_r82 = ((mypy___build___StateObject *)cpy_r_state)->_priorities;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "State", "priorities", 362, CPyStatic_semanal_main___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r82);
CPyL58: ;
    CPyTagged_INCREF(cpy_r_priority);
    cpy_r_r83 = CPyTagged_StealAsObject(cpy_r_priority);
    cpy_r_r84 = CPyDict_Get(cpy_r_r82, cpy_r_dep, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 362, CPyStatic_semanal_main___globals);
        goto CPyL104;
    }
    if (likely(PyLong_Check(cpy_r_r84)))
        cpy_r_r85 = CPyTagged_FromObject(cpy_r_r84);
    else {
        CPy_TypeError("int", cpy_r_r84); cpy_r_r85 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 362, CPyStatic_semanal_main___globals);
        goto CPyL104;
    }
    cpy_r_r86 = cpy_r_priority & 1;
    cpy_r_r87 = cpy_r_r86 != 0;
    if (cpy_r_r87) goto CPyL62;
    cpy_r_r88 = cpy_r_r85 & 1;
    cpy_r_r89 = cpy_r_r88 != 0;
    if (!cpy_r_r89) goto CPyL63;
CPyL62: ;
    cpy_r_r90 = CPyTagged_IsLt_(cpy_r_r85, cpy_r_priority);
    CPyTagged_DECREF(cpy_r_r85);
    if (cpy_r_r90) {
        goto CPyL105;
    } else
        goto CPyL64;
CPyL63: ;
    cpy_r_r91 = (Py_ssize_t)cpy_r_priority <= (Py_ssize_t)cpy_r_r85;
    CPyTagged_DECREF(cpy_r_r85);
    if (!cpy_r_r91) goto CPyL105;
CPyL64: ;
    cpy_r_r92 = ((mypy___build___StateObject *)cpy_r_state)->_priorities;
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "State", "priorities", 363, CPyStatic_semanal_main___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r92);
CPyL65: ;
    cpy_r_r93 = CPyTagged_StealAsObject(cpy_r_priority);
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_dep, cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_dep);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 363, CPyStatic_semanal_main___globals);
        goto CPyL102;
    } else
        goto CPyL54;
CPyL66: ;
    cpy_r_r96 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 359, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    cpy_r_r97 = Py_None;
    CPy_INCREF(cpy_r_r97);
    if (((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_statement != NULL) {
        CPy_DECREF(((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_statement);
    }
    ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_statement = cpy_r_r97;
    cpy_r_r98 = 1;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 367, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    cpy_r_r99 = CPyStatics[5146]; /* 'cur_mod_node' */
    cpy_r_r100 = PyObject_DelAttr(cpy_r_analyzer, cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 368, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    cpy_r_r102 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_deferred;
    if (unlikely(cpy_r_r102 == 2)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "SemanticAnalyzer", "deferred", 370, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
CPyL70: ;
    if (!cpy_r_r102) goto CPyL75;
CPyL71: ;
    cpy_r_r103 = PyList_New(1);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 371, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    cpy_r_r104 = (CPyPtr)&((PyListObject *)cpy_r_r103)->ob_item;
    cpy_r_r105 = *(CPyPtr *)cpy_r_r104;
    CPy_INCREF(cpy_r_target);
    *(PyObject * *)cpy_r_r105 = cpy_r_target;
    cpy_r_r106 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_incomplete;
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "SemanticAnalyzer", "incomplete", 371, CPyStatic_semanal_main___globals);
        goto CPyL106;
    }
CPyL73: ;
    cpy_r_r107 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_progress;
    if (unlikely(cpy_r_r107 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'progress' of 'SemanticAnalyzer' undefined");
    }
    CPy_DECREF(cpy_r_analyzer);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 371, CPyStatic_semanal_main___globals);
        goto CPyL107;
    }
CPyL74: ;
    cpy_r_r108.f0 = cpy_r_r103;
    cpy_r_r108.f1 = cpy_r_r106;
    cpy_r_r108.f2 = cpy_r_r107;
    CPy_INCREF(cpy_r_r108.f0);
    CPy_DECREF(cpy_r_r103);
    return cpy_r_r108;
CPyL75: ;
    cpy_r_r109 = PyList_New(0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 373, CPyStatic_semanal_main___globals);
        goto CPyL100;
    }
    cpy_r_r110 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_incomplete;
    if (unlikely(cpy_r_r110 == 2)) {
        CPy_AttributeError("mypy/semanal_main.py", "semantic_analyze_target", "SemanticAnalyzer", "incomplete", 373, CPyStatic_semanal_main___globals);
        goto CPyL108;
    }
CPyL77: ;
    cpy_r_r111 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_analyzer)->_progress;
    if (unlikely(cpy_r_r111 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'progress' of 'SemanticAnalyzer' undefined");
    }
    CPy_DECREF(cpy_r_analyzer);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 373, CPyStatic_semanal_main___globals);
        goto CPyL109;
    }
CPyL78: ;
    cpy_r_r112.f0 = cpy_r_r109;
    cpy_r_r112.f1 = cpy_r_r110;
    cpy_r_r112.f2 = cpy_r_r111;
    CPy_INCREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r109);
    return cpy_r_r112;
CPyL79: ;
    tuple_T3OCC __tmp5915 = { NULL, 2, 2 };
    cpy_r_r113 = __tmp5915;
    return cpy_r_r113;
CPyL80: ;
    CPy_DECREF(cpy_r_tree);
    goto CPyL4;
CPyL81: ;
    CPy_DecRef(cpy_r_tree);
    goto CPyL79;
CPyL82: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL79;
CPyL83: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r12);
    goto CPyL79;
CPyL84: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r17);
    goto CPyL79;
CPyL85: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r32);
    goto CPyL79;
CPyL86: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    goto CPyL79;
CPyL87: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL21;
CPyL88: ;
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_refresh_node);
    goto CPyL32;
CPyL89: ;
    CPy_DecRef(cpy_r_tree);
    goto CPyL32;
CPyL90: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL32;
CPyL91: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL32;
CPyL92: ;
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL38;
CPyL93: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL36;
CPyL94: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    goto CPyL39;
CPyL95: ;
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    goto CPyL45;
CPyL96: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r31);
    goto CPyL48;
CPyL97: ;
    CPy_DECREF(cpy_r_r75);
    goto CPyL44;
CPyL98: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL46;
CPyL99: ;
    CPy_XDECREF(cpy_r_r70.f0);
    CPy_XDECREF(cpy_r_r70.f1);
    CPy_XDECREF(cpy_r_r70.f2);
    goto CPyL47;
CPyL100: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL79;
CPyL101: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL66;
CPyL102: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r78);
    goto CPyL79;
CPyL103: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_dep);
    goto CPyL79;
CPyL104: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_dep);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL79;
CPyL105: ;
    CPy_DECREF(cpy_r_dep);
    CPyTagged_DECREF(cpy_r_priority);
    goto CPyL54;
CPyL106: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r103);
    goto CPyL79;
CPyL107: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL79;
CPyL108: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r109);
    goto CPyL79;
CPyL109: ;
    CPy_DecRef(cpy_r_r109);
    goto CPyL79;
}

PyObject *CPyPy_semanal_main___semantic_analyze_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"target", "module", "state", "node", "active_type", "final_iteration", "patches", 0};
    static CPyArg_Parser parser = {"OOOOOOO:semantic_analyze_target", kwlist, 0};
    PyObject *obj_target;
    PyObject *obj_module;
    PyObject *obj_state;
    PyObject *obj_node;
    PyObject *obj_active_type;
    PyObject *obj_final_iteration;
    PyObject *obj_patches;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_target, &obj_module, &obj_state, &obj_node, &obj_active_type, &obj_final_iteration, &obj_patches)) {
        return NULL;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *arg_node;
    if (Py_TYPE(obj_node) == CPyType_nodes___MypyFile)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5916;
    if (Py_TYPE(obj_node) == CPyType_nodes___FuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5916;
    if (Py_TYPE(obj_node) == CPyType_nodes___OverloadedFuncDef)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5916;
    if (Py_TYPE(obj_node) == CPyType_nodes___Decorator)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL5916;
    CPy_TypeError("union[mypy.nodes.MypyFile, mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef, mypy.nodes.Decorator]", obj_node); 
    goto fail;
__LL5916: ;
    PyObject *arg_active_type;
    if ((Py_TYPE(obj_active_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_active_type) == CPyType_nodes___TypeInfo))
        arg_active_type = obj_active_type;
    else {
        arg_active_type = NULL;
    }
    if (arg_active_type != NULL) goto __LL5917;
    if (obj_active_type == Py_None)
        arg_active_type = obj_active_type;
    else {
        arg_active_type = NULL;
    }
    if (arg_active_type != NULL) goto __LL5917;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_active_type); 
    goto fail;
__LL5917: ;
    char arg_final_iteration;
    if (unlikely(!PyBool_Check(obj_final_iteration))) {
        CPy_TypeError("bool", obj_final_iteration); goto fail;
    } else
        arg_final_iteration = obj_final_iteration == Py_True;
    PyObject *arg_patches;
    if (likely(PyList_Check(obj_patches)))
        arg_patches = obj_patches;
    else {
        CPy_TypeError("list", obj_patches); 
        goto fail;
    }
    tuple_T3OCC retval = CPyDef_semanal_main___semantic_analyze_target(arg_target, arg_module, arg_state, arg_node, arg_active_type, arg_final_iteration, arg_patches);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5918 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp5918);
    PyObject *__tmp5919 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp5919);
    PyTuple_SET_ITEM(retbox, 1, __tmp5919);
    PyObject *__tmp5920 = retval.f2 ? Py_True : Py_False;
    CPy_INCREF(__tmp5920);
    PyTuple_SET_ITEM(retbox, 2, __tmp5920);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "semantic_analyze_target", 319, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___check_type_arguments(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_errors) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_analyzer;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    tuple_T3OOO cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject **cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    tuple_T3OOO cpy_r_r92;
    tuple_T3OOO cpy_r_r93;
    tuple_T3OOO cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL75;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r0);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments", 377, CPyStatic_semanal_main___globals, "str", cpy_r_r5);
        goto CPyL76;
    }
    cpy_r_module = cpy_r_r6;
    cpy_r_r7 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 378, CPyStatic_semanal_main___globals);
        goto CPyL76;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_mypy___build___State))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments", 378, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r7);
        goto CPyL76;
    }
    cpy_r_state = cpy_r_r8;
    cpy_r_r9 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r11) {
        goto CPyL8;
    } else
        goto CPyL77;
CPyL6: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 379, CPyStatic_semanal_main___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r13 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments", "State", "options", 382, CPyStatic_semanal_main___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r13);
CPyL9: ;
    cpy_r_r14 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments", "State", "options", 383, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
CPyL10: ;
    cpy_r_r15 = ((mypy___options___OptionsObject *)cpy_r_r14)->_abs_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL80;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r19 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments", 383, CPyStatic_semanal_main___globals, "str", cpy_r_r16);
        goto CPyL81;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL80;
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r21 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments", 383, CPyStatic_semanal_main___globals, "str", cpy_r_r16);
        goto CPyL82;
    }
    cpy_r_r22 = cpy_r_r21;
    goto CPyL16;
CPyL15: ;
    cpy_r_r23 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r23;
CPyL16: ;
    cpy_r_r24 = CPyDef_mypy___util___is_typeshed_file(cpy_r_r15, cpy_r_r22);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 383, CPyStatic_semanal_main___globals);
        goto CPyL79;
    }
    cpy_r_r25 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer(cpy_r_errors, cpy_r_r13, cpy_r_r24);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 380, CPyStatic_semanal_main___globals);
        goto CPyL78;
    }
    cpy_r_analyzer = cpy_r_r25;
    cpy_r_r26 = CPyStatics[379]; /* 'wrap_context' */
    PyObject *cpy_r_r27[1] = {cpy_r_state};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL83;
    }
    cpy_r_r30 = PyObject_Type(cpy_r_r29);
    cpy_r_r31 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL84;
    }
    cpy_r_r33 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL85;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r29};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL85;
    } else
        goto CPyL86;
CPyL22: ;
    cpy_r_r38 = 1;
    cpy_r_r39 = CPyStatic_state___state;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL87;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL54;
    } else
        goto CPyL88;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r41 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments", "State", "options", 386, CPyStatic_semanal_main___globals);
        goto CPyL89;
    }
CPyL27: ;
    cpy_r_r42 = ((mypy___options___OptionsObject *)cpy_r_r41)->_strict_optional;
    cpy_r_r43 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r44 = cpy_r_r42 ? Py_True : Py_False;
    PyObject *cpy_r_r45[2] = {cpy_r_r39, cpy_r_r44};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_VectorcallMethod(cpy_r_r43, cpy_r_r46, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL89;
    }
    cpy_r_r48 = PyObject_Type(cpy_r_r47);
    cpy_r_r49 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL90;
    }
    cpy_r_r51 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r51);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL91;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r47};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL91;
    } else
        goto CPyL92;
CPyL31: ;
    cpy_r_r56 = 1;
    cpy_r_r57 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_state);
    if (likely(cpy_r_r57 != Py_None))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments", 387, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r57);
        goto CPyL93;
    }
    cpy_r_r59 = CPyDef_nodes___MypyFile___accept(cpy_r_r58, cpy_r_analyzer);
    CPy_DECREF(cpy_r_analyzer);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 387, CPyStatic_semanal_main___globals);
    } else
        goto CPyL94;
CPyL34: ;
    cpy_r_r60 = CPy_CatchError();
    cpy_r_r56 = 0;
    cpy_r_r61 = CPy_GetExcInfo();
    cpy_r_r62 = cpy_r_r61.f0;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = cpy_r_r61.f1;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = cpy_r_r61.f2;
    CPy_INCREF(cpy_r_r64);
    CPy_DecRef(cpy_r_r61.f0);
    CPy_DecRef(cpy_r_r61.f1);
    CPy_DecRef(cpy_r_r61.f2);
    PyObject *cpy_r_r65[4] = {cpy_r_r47, cpy_r_r62, cpy_r_r63, cpy_r_r64};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r66, 4, 0);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL95;
    }
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    cpy_r_r68 = PyObject_IsTrue(cpy_r_r67);
    CPy_DecRef(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL40;
    }
    cpy_r_r70 = cpy_r_r68;
    if (cpy_r_r70) goto CPyL39;
    CPy_Reraise();
    if (!0) {
        goto CPyL40;
    } else
        goto CPyL96;
CPyL38: ;
    CPy_Unreachable();
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    goto CPyL42;
CPyL40: ;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    cpy_r_r71 = CPy_KeepPropagating();
    if (!cpy_r_r71) {
        goto CPyL43;
    } else
        goto CPyL97;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    tuple_T3OOO __tmp5921 = { NULL, NULL, NULL };
    cpy_r_r72 = __tmp5921;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL44;
CPyL43: ;
    cpy_r_r74 = CPy_CatchError();
    cpy_r_r73 = cpy_r_r74;
CPyL44: ;
    if (!cpy_r_r56) goto CPyL98;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r76[4] = {cpy_r_r47, cpy_r_r75, cpy_r_r75, cpy_r_r75};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r77, 4, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 386, CPyStatic_semanal_main___globals);
        goto CPyL99;
    } else
        goto CPyL100;
CPyL46: ;
    CPy_DECREF(cpy_r_r47);
CPyL47: ;
    if (cpy_r_r73.f0 == NULL) goto CPyL62;
    CPy_Reraise();
    if (!0) {
        goto CPyL50;
    } else
        goto CPyL101;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    if (cpy_r_r73.f0 == NULL) goto CPyL52;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
CPyL52: ;
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) {
        goto CPyL54;
    } else
        goto CPyL102;
CPyL53: ;
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r80 = CPy_CatchError();
    cpy_r_r38 = 0;
    cpy_r_r81 = CPy_GetExcInfo();
    cpy_r_r82 = cpy_r_r81.f0;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = cpy_r_r81.f1;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = cpy_r_r81.f2;
    CPy_INCREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r81.f0);
    CPy_DECREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_r81.f2);
    PyObject *cpy_r_r85[4] = {cpy_r_r29, cpy_r_r82, cpy_r_r83, cpy_r_r84};
    cpy_r_r86 = (PyObject **)&cpy_r_r85;
    cpy_r_r87 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r86, 4, 0);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r88 = PyObject_IsTrue(cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL60;
    }
    cpy_r_r90 = cpy_r_r88;
    if (cpy_r_r90) goto CPyL59;
    CPy_Reraise();
    if (!0) {
        goto CPyL60;
    } else
        goto CPyL104;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DECREF(cpy_r_r80.f0);
    CPy_DECREF(cpy_r_r80.f1);
    CPy_DECREF(cpy_r_r80.f2);
    goto CPyL62;
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r80);
    CPy_DECREF(cpy_r_r80.f0);
    CPy_DECREF(cpy_r_r80.f1);
    CPy_DECREF(cpy_r_r80.f2);
    cpy_r_r91 = CPy_KeepPropagating();
    if (!cpy_r_r91) {
        goto CPyL63;
    } else
        goto CPyL105;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    tuple_T3OOO __tmp5922 = { NULL, NULL, NULL };
    cpy_r_r92 = __tmp5922;
    cpy_r_r93 = cpy_r_r92;
    goto CPyL64;
CPyL63: ;
    cpy_r_r94 = CPy_CatchError();
    cpy_r_r93 = cpy_r_r94;
CPyL64: ;
    if (!cpy_r_r38) goto CPyL106;
    cpy_r_r95 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r96[4] = {cpy_r_r29, cpy_r_r95, cpy_r_r95, cpy_r_r95};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r97, 4, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 385, CPyStatic_semanal_main___globals);
        goto CPyL107;
    } else
        goto CPyL108;
CPyL66: ;
    CPy_DECREF(cpy_r_r29);
CPyL67: ;
    if (cpy_r_r93.f0 == NULL) goto CPyL74;
    CPy_Reraise();
    if (!0) {
        goto CPyL70;
    } else
        goto CPyL109;
CPyL69: ;
    CPy_Unreachable();
CPyL70: ;
    if (cpy_r_r93.f0 == NULL) goto CPyL72;
    CPy_RestoreExcInfo(cpy_r_r93);
    CPy_XDECREF(cpy_r_r93.f0);
    CPy_XDECREF(cpy_r_r93.f1);
    CPy_XDECREF(cpy_r_r93.f2);
CPyL72: ;
    cpy_r_r99 = CPy_KeepPropagating();
    if (!cpy_r_r99) goto CPyL76;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r100 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r100;
    goto CPyL1;
CPyL75: ;
    return 1;
CPyL76: ;
    cpy_r_r101 = 2;
    return cpy_r_r101;
CPyL77: ;
    CPy_DECREF(cpy_r_state);
    goto CPyL6;
CPyL78: ;
    CPy_DecRef(cpy_r_state);
    goto CPyL76;
CPyL79: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r13);
    goto CPyL76;
CPyL80: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL15;
CPyL81: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r16);
    goto CPyL76;
CPyL82: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r15);
    goto CPyL76;
CPyL83: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL76;
CPyL84: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL76;
CPyL85: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL76;
CPyL86: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL22;
CPyL87: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL24;
CPyL88: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    goto CPyL25;
CPyL89: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL54;
CPyL90: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL54;
CPyL91: ;
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL54;
CPyL92: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL31;
CPyL93: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL34;
CPyL94: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL42;
CPyL95: ;
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    goto CPyL40;
CPyL96: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    goto CPyL38;
CPyL97: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL41;
CPyL98: ;
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    goto CPyL47;
CPyL99: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL50;
CPyL100: ;
    CPy_DECREF(cpy_r_r78);
    goto CPyL46;
CPyL101: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
    goto CPyL49;
CPyL102: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    goto CPyL53;
CPyL103: ;
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r84);
    goto CPyL60;
CPyL104: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r80.f0);
    CPy_DECREF(cpy_r_r80.f1);
    CPy_DECREF(cpy_r_r80.f2);
    goto CPyL58;
CPyL105: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    goto CPyL61;
CPyL106: ;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    goto CPyL67;
CPyL107: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL70;
CPyL108: ;
    CPy_DECREF(cpy_r_r98);
    goto CPyL66;
CPyL109: ;
    CPy_XDECREF(cpy_r_r93.f0);
    CPy_XDECREF(cpy_r_r93.f1);
    CPy_XDECREF(cpy_r_r93.f2);
    goto CPyL69;
}

PyObject *CPyPy_semanal_main___check_type_arguments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "errors", 0};
    static CPyArg_Parser parser = {"OOO:check_type_arguments", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___check_type_arguments(arg_graph, arg_scc, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments", 376, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___check_type_arguments_in_targets(PyObject *cpy_r_targets, PyObject *cpy_r_state, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_analyzer;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    tuple_T3OOO cpy_r_saved;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    tuple_T3OOO cpy_r_r115;
    tuple_T3OOO cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    int32_t cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    tuple_T3OOO cpy_r_r127;
    tuple_T3OOO cpy_r_r128;
    tuple_T3OOO cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject **cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    CPyTagged cpy_r_r135;
    tuple_T3OOO cpy_r_r136;
    tuple_T3OOO cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject **cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    tuple_T3OOO cpy_r_r148;
    tuple_T3OOO cpy_r_r149;
    tuple_T3OOO cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject **cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    tuple_T3OOO cpy_r_r156;
    tuple_T3OOO cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    tuple_T3OOO cpy_r_r168;
    tuple_T3OOO cpy_r_r169;
    tuple_T3OOO cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments_in_targets", "State", "options", 400, CPyStatic_semanal_main___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments_in_targets", "State", "options", 401, CPyStatic_semanal_main___globals);
        goto CPyL129;
    }
CPyL2: ;
    cpy_r_r2 = ((mypy___options___OptionsObject *)cpy_r_r1)->_abs_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL130;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r6 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 401, CPyStatic_semanal_main___globals, "str", cpy_r_r3);
        goto CPyL131;
    }
    cpy_r_r7 = CPyStr_IsTrue(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL130;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r8 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 401, CPyStatic_semanal_main___globals, "str", cpy_r_r3);
        goto CPyL132;
    }
    cpy_r_r9 = cpy_r_r8;
    goto CPyL8;
CPyL7: ;
    cpy_r_r10 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r10);
    cpy_r_r9 = cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = CPyDef_mypy___util___is_typeshed_file(cpy_r_r2, cpy_r_r9);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 401, CPyStatic_semanal_main___globals);
        goto CPyL129;
    }
    cpy_r_r12 = CPyDef_semanal_typeargs___TypeArgumentAnalyzer(cpy_r_errors, cpy_r_r0, cpy_r_r11);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 398, CPyStatic_semanal_main___globals);
        goto CPyL128;
    }
    cpy_r_analyzer = cpy_r_r12;
    cpy_r_r13 = CPyStatics[379]; /* 'wrap_context' */
    PyObject *cpy_r_r14[1] = {cpy_r_state};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL133;
    }
    cpy_r_r17 = PyObject_Type(cpy_r_r16);
    cpy_r_r18 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL134;
    }
    cpy_r_r20 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL135;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r16};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL135;
    } else
        goto CPyL136;
CPyL14: ;
    cpy_r_r25 = 1;
    cpy_r_r26 = CPyStatic_state___state;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL137;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL107;
    } else
        goto CPyL138;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r28 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments_in_targets", "State", "options", 404, CPyStatic_semanal_main___globals);
        goto CPyL139;
    }
CPyL19: ;
    cpy_r_r29 = ((mypy___options___OptionsObject *)cpy_r_r28)->_strict_optional;
    cpy_r_r30 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r31 = cpy_r_r29 ? Py_True : Py_False;
    PyObject *cpy_r_r32[2] = {cpy_r_r26, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r33, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL139;
    }
    cpy_r_r35 = PyObject_Type(cpy_r_r34);
    cpy_r_r36 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL140;
    }
    cpy_r_r38 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r38);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL141;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r34};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = _PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL141;
    } else
        goto CPyL142;
CPyL23: ;
    cpy_r_r43 = 1;
    cpy_r_r44 = 0;
CPyL25: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_targets)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL143;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_targets, cpy_r_r44);
    if (likely(PyTuple_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 405, CPyStatic_semanal_main___globals, "tuple", cpy_r_r49);
        goto CPyL144;
    }
    cpy_r_target = cpy_r_r50;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    cpy_r_func = cpy_r_r51;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_target, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 407, CPyStatic_semanal_main___globals);
        goto CPyL145;
    }
    cpy_r_r53 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_r52)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL146;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL31;
CPyL30: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_r52)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    CPy_DECREF(cpy_r_r52);
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    cpy_r_r57 = cpy_r_r61;
CPyL31: ;
    if (cpy_r_r57) {
        goto CPyL147;
    } else
        goto CPyL35;
CPyL32: ;
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_target, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 408, CPyStatic_semanal_main___globals);
        goto CPyL148;
    }
    if (Py_TYPE(cpy_r_r62) == CPyType_nodes___FuncDef)
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL5923;
    if (Py_TYPE(cpy_r_r62) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r63 = cpy_r_r62;
    else {
        cpy_r_r63 = NULL;
    }
    if (cpy_r_r63 != NULL) goto __LL5923;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 408, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.OverloadedFuncDef]", cpy_r_r62);
    goto CPyL148;
__LL5923: ;
    cpy_r_func = cpy_r_r63;
CPyL35: ;
    cpy_r_r64 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "check_type_arguments_in_targets", "State", "id", 409, CPyStatic_semanal_main___globals);
        goto CPyL145;
    }
    CPy_INCREF(cpy_r_r64);
CPyL36: ;
    cpy_r_r65 = CPySequenceTuple_GetItem(cpy_r_target, 2);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 409, CPyStatic_semanal_main___globals);
        goto CPyL149;
    }
    if ((Py_TYPE(cpy_r_r65) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r65) == CPyType_nodes___TypeInfo))
        cpy_r_r66 = cpy_r_r65;
    else {
        cpy_r_r66 = NULL;
    }
    if (cpy_r_r66 != NULL) goto __LL5924;
    if (cpy_r_r65 == Py_None)
        cpy_r_r66 = cpy_r_r65;
    else {
        cpy_r_r66 = NULL;
    }
    if (cpy_r_r66 != NULL) goto __LL5924;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 409, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo or None", cpy_r_r65);
    goto CPyL149;
__LL5924: ;
    cpy_r_r67.f0 = cpy_r_r64;
    cpy_r_r67.f1 = cpy_r_r66;
    cpy_r_r67.f2 = cpy_r_func;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_INCREF(cpy_r_r67.f1);
    CPy_INCREF(cpy_r_r67.f2);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r66);
    cpy_r_saved = cpy_r_r67;
    cpy_r_r68 = ((mypy___errors___ErrorsObject *)cpy_r_errors)->_scope;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_r68 != cpy_r_r69;
    CPy_DECREF(cpy_r_r68);
    if (!cpy_r_r70) goto CPyL150;
    cpy_r_r71 = ((mypy___errors___ErrorsObject *)cpy_r_errors)->_scope;
    CPy_INCREF(cpy_r_r71);
    if (likely(cpy_r_r71 != Py_None))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals, "mypy.scope.Scope", cpy_r_r71);
        goto CPyL151;
    }
    cpy_r_r73 = CPyStatics[4822]; /* 'saved_scope' */
    cpy_r_r74 = PyTuple_New(3);
    if (unlikely(cpy_r_r74 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5925 = cpy_r_saved.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp5925);
    PyObject *__tmp5926 = cpy_r_saved.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp5926);
    PyObject *__tmp5927 = cpy_r_saved.f2;
    PyTuple_SET_ITEM(cpy_r_r74, 2, __tmp5927);
    PyObject *cpy_r_r75[2] = {cpy_r_r72, cpy_r_r74};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r76, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL152;
    }
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r78 = cpy_r_r77;
    goto CPyL45;
CPyL42: ;
    cpy_r_r79 = CPyStatic_semanal_main___globals;
    cpy_r_r80 = CPyStatics[699]; /* 'nullcontext' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL145;
    }
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r81, 0, 0, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL145;
    }
    cpy_r_r78 = cpy_r_r82;
CPyL45: ;
    cpy_r_r83 = PyObject_Type(cpy_r_r78);
    cpy_r_r84 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL153;
    }
    cpy_r_r86 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r86);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL154;
    }
    PyObject *cpy_r_r88[1] = {cpy_r_r78};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = _PyObject_Vectorcall(cpy_r_r87, cpy_r_r89, 1, 0);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL154;
    } else
        goto CPyL155;
CPyL48: ;
    cpy_r_r91 = 1;
    cpy_r_r92 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r93 = cpy_r_func != cpy_r_r92;
    CPy_DECREF(cpy_r_func);
    ((mypy___semanal_typeargs___TypeArgumentAnalyzerObject *)cpy_r_analyzer)->_recurse_into_functions = cpy_r_r93;
    cpy_r_r94 = 1;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 411, CPyStatic_semanal_main___globals);
        goto CPyL156;
    }
    cpy_r_r95 = CPySequenceTuple_GetItem(cpy_r_target, 0);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    if (Py_TYPE(cpy_r_r95) == CPyType_nodes___FuncDef)
        cpy_r_r96 = cpy_r_r95;
    else {
        cpy_r_r96 = NULL;
    }
    if (cpy_r_r96 != NULL) goto __LL5928;
    if (Py_TYPE(cpy_r_r95) == CPyType_nodes___MypyFile)
        cpy_r_r96 = cpy_r_r95;
    else {
        cpy_r_r96 = NULL;
    }
    if (cpy_r_r96 != NULL) goto __LL5928;
    if (Py_TYPE(cpy_r_r95) == CPyType_nodes___OverloadedFuncDef)
        cpy_r_r96 = cpy_r_r95;
    else {
        cpy_r_r96 = NULL;
    }
    if (cpy_r_r96 != NULL) goto __LL5928;
    CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals, "union[mypy.nodes.FuncDef, mypy.nodes.MypyFile, mypy.nodes.OverloadedFuncDef]", cpy_r_r95);
    goto CPyL66;
__LL5928: ;
    cpy_r_r97 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r98 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r99 = *(PyObject * *)cpy_r_r98;
    cpy_r_r100 = cpy_r_r99 == cpy_r_r97;
    if (!cpy_r_r100) goto CPyL57;
    if (likely(Py_TYPE(cpy_r_r96) == CPyType_nodes___FuncDef))
        cpy_r_r101 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals, "mypy.nodes.FuncDef", cpy_r_r96);
        goto CPyL66;
    }
    cpy_r_r102 = CPyDef_nodes___FuncDef___accept(cpy_r_r101, cpy_r_analyzer);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    if (unlikely(cpy_r_r102 != Py_None)) {
        CPy_TypeError("None", cpy_r_r102); cpy_r_r103 = 2;
    } else
        cpy_r_r103 = 1;
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    cpy_r_r104 = cpy_r_r103;
    goto CPyL74;
CPyL57: ;
    cpy_r_r105 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r106 = (CPyPtr)&((PyObject *)cpy_r_r96)->ob_type;
    cpy_r_r107 = *(PyObject * *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 == cpy_r_r105;
    if (!cpy_r_r108) goto CPyL62;
    if (likely(Py_TYPE(cpy_r_r96) == CPyType_nodes___MypyFile))
        cpy_r_r109 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_r96);
        goto CPyL66;
    }
    cpy_r_r110 = CPyDef_nodes___MypyFile___accept(cpy_r_r109, cpy_r_analyzer);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    if (unlikely(cpy_r_r110 != Py_None)) {
        CPy_TypeError("None", cpy_r_r110); cpy_r_r111 = 2;
    } else
        cpy_r_r111 = 1;
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    cpy_r_r104 = cpy_r_r111;
    goto CPyL74;
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_r96) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r112 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r96);
        goto CPyL66;
    }
    cpy_r_r113 = CPyDef_nodes___OverloadedFuncDef___accept(cpy_r_r112, cpy_r_analyzer);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    if (unlikely(cpy_r_r113 != Py_None)) {
        CPy_TypeError("None", cpy_r_r113); cpy_r_r114 = 2;
    } else
        cpy_r_r114 = 1;
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 412, CPyStatic_semanal_main___globals);
        goto CPyL66;
    }
    cpy_r_r104 = cpy_r_r114;
    goto CPyL74;
CPyL66: ;
    cpy_r_r115 = CPy_CatchError();
    cpy_r_r91 = 0;
    cpy_r_r116 = CPy_GetExcInfo();
    cpy_r_r117 = cpy_r_r116.f0;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = cpy_r_r116.f1;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = cpy_r_r116.f2;
    CPy_INCREF(cpy_r_r119);
    CPy_DecRef(cpy_r_r116.f0);
    CPy_DecRef(cpy_r_r116.f1);
    CPy_DecRef(cpy_r_r116.f2);
    PyObject *cpy_r_r120[4] = {cpy_r_r78, cpy_r_r117, cpy_r_r118, cpy_r_r119};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r121, 4, 0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL157;
    }
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r119);
    cpy_r_r123 = PyObject_IsTrue(cpy_r_r122);
    CPy_DecRef(cpy_r_r122);
    cpy_r_r124 = cpy_r_r123 >= 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL72;
    }
    cpy_r_r125 = cpy_r_r123;
    if (cpy_r_r125) goto CPyL71;
    CPy_Reraise();
    if (!0) {
        goto CPyL72;
    } else
        goto CPyL158;
CPyL70: ;
    CPy_Unreachable();
CPyL71: ;
    CPy_RestoreExcInfo(cpy_r_r115);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    goto CPyL74;
CPyL72: ;
    CPy_RestoreExcInfo(cpy_r_r115);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    cpy_r_r126 = CPy_KeepPropagating();
    if (!cpy_r_r126) {
        goto CPyL75;
    } else
        goto CPyL159;
CPyL73: ;
    CPy_Unreachable();
CPyL74: ;
    tuple_T3OOO __tmp5929 = { NULL, NULL, NULL };
    cpy_r_r127 = __tmp5929;
    cpy_r_r128 = cpy_r_r127;
    goto CPyL76;
CPyL75: ;
    cpy_r_r129 = CPy_CatchError();
    cpy_r_r128 = cpy_r_r129;
CPyL76: ;
    if (!cpy_r_r91) goto CPyL160;
    cpy_r_r130 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r131[4] = {cpy_r_r78, cpy_r_r130, cpy_r_r130, cpy_r_r130};
    cpy_r_r132 = (PyObject **)&cpy_r_r131;
    cpy_r_r133 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r132, 4, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 410, CPyStatic_semanal_main___globals);
        goto CPyL161;
    } else
        goto CPyL162;
CPyL78: ;
    CPy_DECREF(cpy_r_r78);
CPyL79: ;
    if (cpy_r_r128.f0 == NULL) {
        goto CPyL86;
    } else
        goto CPyL163;
CPyL80: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL82;
    } else
        goto CPyL164;
CPyL81: ;
    CPy_Unreachable();
CPyL82: ;
    if (cpy_r_r128.f0 == NULL) goto CPyL84;
    CPy_RestoreExcInfo(cpy_r_r128);
    CPy_XDECREF(cpy_r_r128.f0);
    CPy_XDECREF(cpy_r_r128.f1);
    CPy_XDECREF(cpy_r_r128.f2);
CPyL84: ;
    cpy_r_r134 = CPy_KeepPropagating();
    if (!cpy_r_r134) {
        goto CPyL87;
    } else
        goto CPyL165;
CPyL85: ;
    CPy_Unreachable();
CPyL86: ;
    cpy_r_r135 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r135;
    goto CPyL25;
CPyL87: ;
    cpy_r_r136 = CPy_CatchError();
    cpy_r_r43 = 0;
    cpy_r_r137 = CPy_GetExcInfo();
    cpy_r_r138 = cpy_r_r137.f0;
    CPy_INCREF(cpy_r_r138);
    cpy_r_r139 = cpy_r_r137.f1;
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140 = cpy_r_r137.f2;
    CPy_INCREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r137.f0);
    CPy_DECREF(cpy_r_r137.f1);
    CPy_DECREF(cpy_r_r137.f2);
    PyObject *cpy_r_r141[4] = {cpy_r_r34, cpy_r_r138, cpy_r_r139, cpy_r_r140};
    cpy_r_r142 = (PyObject **)&cpy_r_r141;
    cpy_r_r143 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r142, 4, 0);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_r138);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r144 = PyObject_IsTrue(cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL93;
    }
    cpy_r_r146 = cpy_r_r144;
    if (cpy_r_r146) goto CPyL92;
    CPy_Reraise();
    if (!0) {
        goto CPyL93;
    } else
        goto CPyL167;
CPyL91: ;
    CPy_Unreachable();
CPyL92: ;
    CPy_RestoreExcInfo(cpy_r_r136);
    CPy_DECREF(cpy_r_r136.f0);
    CPy_DECREF(cpy_r_r136.f1);
    CPy_DECREF(cpy_r_r136.f2);
    goto CPyL95;
CPyL93: ;
    CPy_RestoreExcInfo(cpy_r_r136);
    CPy_DECREF(cpy_r_r136.f0);
    CPy_DECREF(cpy_r_r136.f1);
    CPy_DECREF(cpy_r_r136.f2);
    cpy_r_r147 = CPy_KeepPropagating();
    if (!cpy_r_r147) {
        goto CPyL96;
    } else
        goto CPyL168;
CPyL94: ;
    CPy_Unreachable();
CPyL95: ;
    tuple_T3OOO __tmp5930 = { NULL, NULL, NULL };
    cpy_r_r148 = __tmp5930;
    cpy_r_r149 = cpy_r_r148;
    goto CPyL97;
CPyL96: ;
    cpy_r_r150 = CPy_CatchError();
    cpy_r_r149 = cpy_r_r150;
CPyL97: ;
    if (!cpy_r_r43) goto CPyL169;
    cpy_r_r151 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r152[4] = {cpy_r_r34, cpy_r_r151, cpy_r_r151, cpy_r_r151};
    cpy_r_r153 = (PyObject **)&cpy_r_r152;
    cpy_r_r154 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r153, 4, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 404, CPyStatic_semanal_main___globals);
        goto CPyL170;
    } else
        goto CPyL171;
CPyL99: ;
    CPy_DECREF(cpy_r_r34);
CPyL100: ;
    if (cpy_r_r149.f0 == NULL) goto CPyL115;
    CPy_Reraise();
    if (!0) {
        goto CPyL103;
    } else
        goto CPyL172;
CPyL102: ;
    CPy_Unreachable();
CPyL103: ;
    if (cpy_r_r149.f0 == NULL) goto CPyL105;
    CPy_RestoreExcInfo(cpy_r_r149);
    CPy_XDECREF(cpy_r_r149.f0);
    CPy_XDECREF(cpy_r_r149.f1);
    CPy_XDECREF(cpy_r_r149.f2);
CPyL105: ;
    cpy_r_r155 = CPy_KeepPropagating();
    if (!cpy_r_r155) {
        goto CPyL107;
    } else
        goto CPyL173;
CPyL106: ;
    CPy_Unreachable();
CPyL107: ;
    cpy_r_r156 = CPy_CatchError();
    cpy_r_r25 = 0;
    cpy_r_r157 = CPy_GetExcInfo();
    cpy_r_r158 = cpy_r_r157.f0;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = cpy_r_r157.f1;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = cpy_r_r157.f2;
    CPy_INCREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r157.f0);
    CPy_DECREF(cpy_r_r157.f1);
    CPy_DECREF(cpy_r_r157.f2);
    PyObject *cpy_r_r161[4] = {cpy_r_r16, cpy_r_r158, cpy_r_r159, cpy_r_r160};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r162, 4, 0);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r164 = PyObject_IsTrue(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL113;
    }
    cpy_r_r166 = cpy_r_r164;
    if (cpy_r_r166) goto CPyL112;
    CPy_Reraise();
    if (!0) {
        goto CPyL113;
    } else
        goto CPyL175;
CPyL111: ;
    CPy_Unreachable();
CPyL112: ;
    CPy_RestoreExcInfo(cpy_r_r156);
    CPy_DECREF(cpy_r_r156.f0);
    CPy_DECREF(cpy_r_r156.f1);
    CPy_DECREF(cpy_r_r156.f2);
    goto CPyL115;
CPyL113: ;
    CPy_RestoreExcInfo(cpy_r_r156);
    CPy_DECREF(cpy_r_r156.f0);
    CPy_DECREF(cpy_r_r156.f1);
    CPy_DECREF(cpy_r_r156.f2);
    cpy_r_r167 = CPy_KeepPropagating();
    if (!cpy_r_r167) {
        goto CPyL116;
    } else
        goto CPyL176;
CPyL114: ;
    CPy_Unreachable();
CPyL115: ;
    tuple_T3OOO __tmp5931 = { NULL, NULL, NULL };
    cpy_r_r168 = __tmp5931;
    cpy_r_r169 = cpy_r_r168;
    goto CPyL117;
CPyL116: ;
    cpy_r_r170 = CPy_CatchError();
    cpy_r_r169 = cpy_r_r170;
CPyL117: ;
    if (!cpy_r_r25) goto CPyL177;
    cpy_r_r171 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r172[4] = {cpy_r_r16, cpy_r_r171, cpy_r_r171, cpy_r_r171};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r173, 4, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 403, CPyStatic_semanal_main___globals);
        goto CPyL178;
    } else
        goto CPyL179;
CPyL119: ;
    CPy_DECREF(cpy_r_r16);
CPyL120: ;
    if (cpy_r_r169.f0 == NULL) goto CPyL127;
    CPy_Reraise();
    if (!0) {
        goto CPyL123;
    } else
        goto CPyL180;
CPyL122: ;
    CPy_Unreachable();
CPyL123: ;
    if (cpy_r_r169.f0 == NULL) goto CPyL125;
    CPy_RestoreExcInfo(cpy_r_r169);
    CPy_XDECREF(cpy_r_r169.f0);
    CPy_XDECREF(cpy_r_r169.f1);
    CPy_XDECREF(cpy_r_r169.f2);
CPyL125: ;
    cpy_r_r175 = CPy_KeepPropagating();
    if (!cpy_r_r175) goto CPyL128;
    CPy_Unreachable();
CPyL127: ;
    return 1;
CPyL128: ;
    cpy_r_r176 = 2;
    return cpy_r_r176;
CPyL129: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL128;
CPyL130: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL7;
CPyL131: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL128;
CPyL132: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL128;
CPyL133: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL128;
CPyL134: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL128;
CPyL135: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL128;
CPyL136: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL14;
CPyL137: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL16;
CPyL138: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL17;
CPyL139: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL107;
CPyL140: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL107;
CPyL141: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    goto CPyL107;
CPyL142: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL23;
CPyL143: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL95;
CPyL144: ;
    CPy_DecRef(cpy_r_analyzer);
    goto CPyL87;
CPyL145: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    goto CPyL87;
CPyL146: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL29;
CPyL147: ;
    CPy_DECREF(cpy_r_func);
    goto CPyL32;
CPyL148: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    goto CPyL87;
CPyL149: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r64);
    goto CPyL87;
CPyL150: ;
    CPy_DECREF(cpy_r_saved.f0);
    CPy_DECREF(cpy_r_saved.f1);
    CPy_DECREF(cpy_r_saved.f2);
    goto CPyL42;
CPyL151: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_saved.f0);
    CPy_DecRef(cpy_r_saved.f1);
    CPy_DecRef(cpy_r_saved.f2);
    goto CPyL87;
CPyL152: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r74);
    goto CPyL87;
CPyL153: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r83);
    goto CPyL87;
CPyL154: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_func);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r85);
    goto CPyL87;
CPyL155: ;
    CPy_DECREF(cpy_r_r90);
    goto CPyL48;
CPyL156: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL66;
CPyL157: ;
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r119);
    goto CPyL72;
CPyL158: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r115.f0);
    CPy_DecRef(cpy_r_r115.f1);
    CPy_DecRef(cpy_r_r115.f2);
    goto CPyL70;
CPyL159: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r85);
    goto CPyL73;
CPyL160: ;
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r85);
    goto CPyL79;
CPyL161: ;
    CPy_DecRef(cpy_r_analyzer);
    CPy_DecRef(cpy_r_r78);
    goto CPyL82;
CPyL162: ;
    CPy_DECREF(cpy_r_r133);
    goto CPyL78;
CPyL163: ;
    CPy_DECREF(cpy_r_analyzer);
    goto CPyL80;
CPyL164: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    CPy_XDECREF(cpy_r_r128.f0);
    CPy_XDECREF(cpy_r_r128.f1);
    CPy_XDECREF(cpy_r_r128.f2);
    goto CPyL81;
CPyL165: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL85;
CPyL166: ;
    CPy_DecRef(cpy_r_r138);
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r140);
    goto CPyL93;
CPyL167: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r136.f0);
    CPy_DECREF(cpy_r_r136.f1);
    CPy_DECREF(cpy_r_r136.f2);
    goto CPyL91;
CPyL168: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL94;
CPyL169: ;
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL100;
CPyL170: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL103;
CPyL171: ;
    CPy_DECREF(cpy_r_r154);
    goto CPyL99;
CPyL172: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_XDECREF(cpy_r_r149.f0);
    CPy_XDECREF(cpy_r_r149.f1);
    CPy_XDECREF(cpy_r_r149.f2);
    goto CPyL102;
CPyL173: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    goto CPyL106;
CPyL174: ;
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r160);
    goto CPyL113;
CPyL175: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r156.f0);
    CPy_DECREF(cpy_r_r156.f1);
    CPy_DECREF(cpy_r_r156.f2);
    goto CPyL111;
CPyL176: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    goto CPyL114;
CPyL177: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    goto CPyL120;
CPyL178: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL123;
CPyL179: ;
    CPy_DECREF(cpy_r_r174);
    goto CPyL119;
CPyL180: ;
    CPy_XDECREF(cpy_r_r169.f0);
    CPy_XDECREF(cpy_r_r169.f1);
    CPy_XDECREF(cpy_r_r169.f2);
    goto CPyL122;
}

PyObject *CPyPy_semanal_main___check_type_arguments_in_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"targets", "state", "errors", 0};
    static CPyArg_Parser parser = {"OOO:check_type_arguments_in_targets", kwlist, 0};
    PyObject *obj_targets;
    PyObject *obj_state;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_targets, &obj_state, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_targets;
    if (likely(PyList_Check(obj_targets)))
        arg_targets = obj_targets;
    else {
        CPy_TypeError("list", obj_targets); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___check_type_arguments_in_targets(arg_targets, arg_state, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "check_type_arguments_in_targets", 390, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___apply_class_plugin_hooks(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_errors) {
    CPyTagged cpy_r_num_passes;
    char cpy_r_incomplete;
    int64_t cpy_r_r0;
    char cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r__;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    cpy_r_num_passes = 0;
    cpy_r_incomplete = 1;
CPyL1: ;
    if (!cpy_r_incomplete) goto CPyL36;
    cpy_r_r0 = cpy_r_num_passes & 1;
    cpy_r_r1 = cpy_r_r0 == 0;
    cpy_r_r2 = 20 & 1;
    cpy_r_r3 = cpy_r_r2 == 0;
    cpy_r_r4 = cpy_r_r1 & cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = (Py_ssize_t)cpy_r_num_passes < (Py_ssize_t)20;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = CPyTagged_IsLt_(cpy_r_num_passes, 20);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    if (cpy_r_r6) {
        goto CPyL8;
    } else
        goto CPyL37;
CPyL6: ;
    PyErr_SetString(PyExc_AssertionError, "Internal error: too many class plugin hook passes");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 430, CPyStatic_semanal_main___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = CPyTagged_Add(cpy_r_num_passes, 2);
    CPyTagged_DECREF(cpy_r_num_passes);
    cpy_r_num_passes = cpy_r_r9;
    cpy_r_incomplete = 0;
    cpy_r_r10 = 0;
CPyL9: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL1;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 433, CPyStatic_semanal_main___globals, "str", cpy_r_r15);
        goto CPyL38;
    }
    cpy_r_module = cpy_r_r16;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 434, CPyStatic_semanal_main___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_mypy___build___State))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 434, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r17);
        goto CPyL39;
    }
    cpy_r_state = cpy_r_r18;
    cpy_r_r19 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r19);
    cpy_r_tree = cpy_r_r19;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_tree != cpy_r_r20;
    if (cpy_r_r21) {
        goto CPyL16;
    } else
        goto CPyL40;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 436, CPyStatic_semanal_main___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL16: ;
    CPy_INCREF(cpy_r_tree);
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r23 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 437, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL41;
    }
    cpy_r_r24 = CPyDef_nodes___MypyFile___local_definitions(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 437, CPyStatic_semanal_main___globals);
        goto CPyL41;
    }
    cpy_r_r25 = PyObject_GetIter(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 437, CPyStatic_semanal_main___globals);
        goto CPyL41;
    }
CPyL19: ;
    cpy_r_r26 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r26 == NULL) goto CPyL42;
    PyObject *__tmp5932;
    if (unlikely(!(PyTuple_Check(cpy_r_r26) && PyTuple_GET_SIZE(cpy_r_r26) == 3))) {
        __tmp5932 = NULL;
        goto __LL5933;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r26, 0))))
        __tmp5932 = PyTuple_GET_ITEM(cpy_r_r26, 0);
    else {
        __tmp5932 = NULL;
    }
    if (__tmp5932 == NULL) goto __LL5933;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r26, 1)) == CPyType_nodes___SymbolTableNode))
        __tmp5932 = PyTuple_GET_ITEM(cpy_r_r26, 1);
    else {
        __tmp5932 = NULL;
    }
    if (__tmp5932 == NULL) goto __LL5933;
    if ((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r26, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r26, 2)) == CPyType_nodes___TypeInfo))
        __tmp5932 = PyTuple_GET_ITEM(cpy_r_r26, 2);
    else {
        __tmp5932 = NULL;
    }
    if (__tmp5932 != NULL) goto __LL5934;
    if (PyTuple_GET_ITEM(cpy_r_r26, 2) == Py_None)
        __tmp5932 = PyTuple_GET_ITEM(cpy_r_r26, 2);
    else {
        __tmp5932 = NULL;
    }
    if (__tmp5932 != NULL) goto __LL5934;
    __tmp5932 = NULL;
__LL5934: ;
    if (__tmp5932 == NULL) goto __LL5933;
    __tmp5932 = cpy_r_r26;
__LL5933: ;
    if (unlikely(__tmp5932 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.SymbolTableNode, union[mypy.nodes.TypeInfo, None]]", cpy_r_r26); cpy_r_r27 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp5935 = PyTuple_GET_ITEM(cpy_r_r26, 0);
        CPy_INCREF(__tmp5935);
        PyObject *__tmp5936;
        if (likely(PyUnicode_Check(__tmp5935)))
            __tmp5936 = __tmp5935;
        else {
            CPy_TypeError("str", __tmp5935); 
            __tmp5936 = NULL;
        }
        cpy_r_r27.f0 = __tmp5936;
        PyObject *__tmp5937 = PyTuple_GET_ITEM(cpy_r_r26, 1);
        CPy_INCREF(__tmp5937);
        PyObject *__tmp5938;
        if (likely(Py_TYPE(__tmp5937) == CPyType_nodes___SymbolTableNode))
            __tmp5938 = __tmp5937;
        else {
            CPy_TypeError("mypy.nodes.SymbolTableNode", __tmp5937); 
            __tmp5938 = NULL;
        }
        cpy_r_r27.f1 = __tmp5938;
        PyObject *__tmp5939 = PyTuple_GET_ITEM(cpy_r_r26, 2);
        CPy_INCREF(__tmp5939);
        PyObject *__tmp5940;
        if ((Py_TYPE(__tmp5939) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5939) == CPyType_nodes___TypeInfo))
            __tmp5940 = __tmp5939;
        else {
            __tmp5940 = NULL;
        }
        if (__tmp5940 != NULL) goto __LL5941;
        if (__tmp5939 == Py_None)
            __tmp5940 = __tmp5939;
        else {
            __tmp5940 = NULL;
        }
        if (__tmp5940 != NULL) goto __LL5941;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5939); 
        __tmp5940 = NULL;
__LL5941: ;
        cpy_r_r27.f2 = __tmp5940;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 437, CPyStatic_semanal_main___globals);
        goto CPyL43;
    }
    cpy_r_r28 = cpy_r_r27.f0;
    CPy_INCREF(cpy_r_r28);
    cpy_r__ = cpy_r_r28;
    CPy_DECREF(cpy_r__);
    cpy_r_r29 = cpy_r_r27.f1;
    CPy_INCREF(cpy_r_r29);
    cpy_r_node = cpy_r_r29;
    cpy_r_r30 = cpy_r_r27.f2;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r27.f0);
    CPy_DECREF(cpy_r_r27.f1);
    CPy_DECREF(cpy_r_r27.f2);
    cpy_r__ = cpy_r_r30;
    CPy_DECREF(cpy_r__);
    cpy_r_r31 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r32 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r31)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL23;
    cpy_r_r36 = cpy_r_r35;
    goto CPyL24;
CPyL23: ;
    cpy_r_r37 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_r31)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    cpy_r_r36 = cpy_r_r40;
CPyL24: ;
    if (!cpy_r_r36) goto CPyL44;
    cpy_r_r41 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "apply_class_plugin_hooks", "State", "manager", 440, CPyStatic_semanal_main___globals);
        goto CPyL45;
    }
CPyL26: ;
    cpy_r_r42 = ((mypy___build___BuildManagerObject *)cpy_r_r41)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_r43) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r43) == CPyType_nodes___TypeInfo)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 442, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r43);
        goto CPyL46;
    }
    cpy_r_r45 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "apply_class_plugin_hooks", "State", "options", 443, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r45);
CPyL28: ;
    CPy_INCREF(cpy_r_tree);
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r46 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 444, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL48;
    }
    cpy_r_r47 = CPyDef_semanal_main___apply_hooks_to_class(cpy_r_r42, cpy_r_module, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_errors);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 439, CPyStatic_semanal_main___globals);
        goto CPyL43;
    }
    if (cpy_r_r47) goto CPyL19;
    cpy_r_incomplete = 1;
    goto CPyL19;
CPyL32: ;
    cpy_r_r48 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 437, CPyStatic_semanal_main___globals);
        goto CPyL38;
    }
    cpy_r_r49 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r49;
    goto CPyL9;
CPyL34: ;
    return 1;
CPyL35: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL36: ;
    CPyTagged_DECREF(cpy_r_num_passes);
    goto CPyL34;
CPyL37: ;
    CPyTagged_DECREF(cpy_r_num_passes);
    goto CPyL6;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    goto CPyL35;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    goto CPyL35;
CPyL40: ;
    CPyTagged_DECREF(cpy_r_num_passes);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    goto CPyL14;
CPyL41: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    goto CPyL35;
CPyL42: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    CPy_DECREF(cpy_r_r25);
    goto CPyL32;
CPyL43: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r25);
    goto CPyL35;
CPyL44: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL19;
CPyL45: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_node);
    goto CPyL35;
CPyL46: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r42);
    goto CPyL35;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL35;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_num_passes);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    goto CPyL35;
}

PyObject *CPyPy_semanal_main___apply_class_plugin_hooks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "errors", 0};
    static CPyArg_Parser parser = {"OOO:apply_class_plugin_hooks", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___apply_class_plugin_hooks(arg_graph, arg_scc, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "apply_class_plugin_hooks", 415, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___apply_hooks_to_class(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_info, PyObject *cpy_r_options, PyObject *cpy_r_file_node, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_defn;
    char cpy_r_ok;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_hook;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_decorator_name;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    tuple_T3OOO cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "apply_hooks_to_class", "TypeInfo", "defn", 459, CPyStatic_semanal_main___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_defn = cpy_r_r0;
    cpy_r_ok = 1;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_defn)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL93;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 461, CPyStatic_semanal_main___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL94;
    }
    cpy_r_decorator = cpy_r_r8;
    cpy_r_r9 = CPyStatics[4826]; /* 'file_context' */
    PyObject *cpy_r_r10[4] = {cpy_r_self, cpy_r_file_node, cpy_r_options, cpy_r_info};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL95;
    }
    cpy_r_r13 = PyObject_Type(cpy_r_r12);
    cpy_r_r14 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL96;
    }
    cpy_r_r16 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL97;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r12};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL97;
    } else
        goto CPyL98;
CPyL8: ;
    cpy_r_r21 = 1;
    cpy_r_r22 = Py_None;
    CPy_INCREF(cpy_r_r22);
    cpy_r_hook = cpy_r_r22;
    cpy_r_r23 = CPyDef_semanal___SemanticAnalyzer___get_fullname_for_hook(cpy_r_self, cpy_r_decorator);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 465, CPyStatic_semanal_main___globals);
        goto CPyL99;
    }
    cpy_r_decorator_name = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_decorator_name != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL100;
    CPy_INCREF(cpy_r_decorator_name);
    if (likely(cpy_r_decorator_name != Py_None))
        cpy_r_r26 = cpy_r_decorator_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 465, CPyStatic_semanal_main___globals, "str", cpy_r_decorator_name);
        goto CPyL101;
    }
    cpy_r_r27 = CPyStr_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (cpy_r_r27) {
        goto CPyL102;
    } else
        goto CPyL100;
CPyL13: ;
    cpy_r_r28 = ((mypy___semanal___SemanticAnalyzerObject *)cpy_r_self)->_plugin;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "apply_hooks_to_class", "SemanticAnalyzer", "plugin", 467, CPyStatic_semanal_main___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r28);
CPyL14: ;
    if (likely(cpy_r_decorator_name != Py_None))
        cpy_r_r29 = cpy_r_decorator_name;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 467, CPyStatic_semanal_main___globals, "str", cpy_r_decorator_name);
        goto CPyL104;
    }
    cpy_r_r30 = CPY_GET_METHOD(cpy_r_r28, CPyType_plugin___Plugin, 14, mypy___plugin___PluginObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r28, cpy_r_r29); /* get_class_decorator_hook_2 */
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 467, CPyStatic_semanal_main___globals);
        goto CPyL105;
    }
    cpy_r_hook = cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_hook == cpy_r_r31;
    if (!cpy_r_r32) goto CPyL23;
    cpy_r_r33 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_decorator);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 471, CPyStatic_semanal_main___globals);
        goto CPyL99;
    }
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    CPy_DECREF(cpy_r_r33);
    if (cpy_r_r35) {
        goto CPyL106;
    } else
        goto CPyL23;
CPyL20: ;
    cpy_r_r36 = CPyStatic_semanal_main___globals;
    cpy_r_r37 = CPyStatics[1007]; /* 'dataclasses_plugin' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 472, CPyStatic_semanal_main___globals);
        goto CPyL105;
    }
    cpy_r_r39 = CPyStatics[4599]; /* 'dataclass_class_maker_callback' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 472, CPyStatic_semanal_main___globals);
        goto CPyL105;
    }
    cpy_r_hook = cpy_r_r40;
CPyL23: ;
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_hook != cpy_r_r41;
    if (!cpy_r_r42) goto CPyL107;
    CPy_INCREF(cpy_r_hook);
    cpy_r_r43 = cpy_r_hook;
    cpy_r_r44 = PyObject_IsTrue(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 463, CPyStatic_semanal_main___globals);
        goto CPyL99;
    }
    cpy_r_r46 = cpy_r_r44;
    if (!cpy_r_r46) goto CPyL107;
    if (cpy_r_ok) {
        goto CPyL29;
    } else
        goto CPyL108;
CPyL28: ;
    cpy_r_r47 = cpy_r_ok;
    goto CPyL35;
CPyL29: ;
    cpy_r_r48 = CPyStatic_semanal_main___globals;
    cpy_r_r49 = CPyStatics[4377]; /* 'ClassDefContext' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 475, CPyStatic_semanal_main___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r51[3] = {cpy_r_defn, cpy_r_decorator, cpy_r_self};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 3, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 475, CPyStatic_semanal_main___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_decorator);
    if (likely(PyTuple_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 475, CPyStatic_semanal_main___globals, "tuple", cpy_r_r53);
        goto CPyL109;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_hook, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_hook);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 475, CPyStatic_semanal_main___globals);
        goto CPyL110;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(!PyBool_Check(cpy_r_r57))) {
        CPy_TypeError("bool", cpy_r_r57); cpy_r_r58 = 2;
    } else
        cpy_r_r58 = cpy_r_r57 == Py_True;
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 475, CPyStatic_semanal_main___globals);
        goto CPyL36;
    }
    cpy_r_r47 = cpy_r_r58;
CPyL35: ;
    cpy_r_ok = cpy_r_r47;
    goto CPyL44;
CPyL36: ;
    cpy_r_r59 = CPy_CatchError();
    cpy_r_r21 = 0;
    cpy_r_r60 = CPy_GetExcInfo();
    cpy_r_r61 = cpy_r_r60.f0;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r60.f1;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = cpy_r_r60.f2;
    CPy_INCREF(cpy_r_r63);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    PyObject *cpy_r_r64[4] = {cpy_r_r12, cpy_r_r61, cpy_r_r62, cpy_r_r63};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r65, 4, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL111;
    }
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    cpy_r_r67 = PyObject_IsTrue(cpy_r_r66);
    CPy_DecRef(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL42;
    }
    cpy_r_r69 = cpy_r_r67;
    if (cpy_r_r69) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL112;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    goto CPyL44;
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    cpy_r_r70 = CPy_KeepPropagating();
    if (!cpy_r_r70) {
        goto CPyL45;
    } else
        goto CPyL113;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    tuple_T3OOO __tmp5942 = { NULL, NULL, NULL };
    cpy_r_r71 = __tmp5942;
    cpy_r_r72 = cpy_r_r71;
    goto CPyL46;
CPyL45: ;
    cpy_r_r73 = CPy_CatchError();
    cpy_r_r72 = cpy_r_r73;
CPyL46: ;
    if (!cpy_r_r21) goto CPyL114;
    cpy_r_r74 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r75[4] = {cpy_r_r12, cpy_r_r74, cpy_r_r74, cpy_r_r74};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r76, 4, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 462, CPyStatic_semanal_main___globals);
        goto CPyL115;
    } else
        goto CPyL116;
CPyL48: ;
    CPy_DECREF(cpy_r_r12);
CPyL49: ;
    if (cpy_r_r72.f0 == NULL) {
        goto CPyL56;
    } else
        goto CPyL117;
CPyL50: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL52;
    } else
        goto CPyL118;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    if (cpy_r_r72.f0 == NULL) goto CPyL54;
    CPy_RestoreExcInfo(cpy_r_r72);
    CPy_XDECREF(cpy_r_r72.f0);
    CPy_XDECREF(cpy_r_r72.f1);
    CPy_XDECREF(cpy_r_r72.f2);
CPyL54: ;
    cpy_r_r78 = CPy_KeepPropagating();
    if (!cpy_r_r78) goto CPyL92;
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r79 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r79;
    goto CPyL2;
CPyL57: ;
    cpy_r_r80 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_info);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 479, CPyStatic_semanal_main___globals);
        goto CPyL119;
    }
    cpy_r_spec = cpy_r_r80;
    cpy_r_r81 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r82 = cpy_r_spec != cpy_r_r81;
    if (!cpy_r_r82) goto CPyL120;
    cpy_r_r83 = CPyStatics[4826]; /* 'file_context' */
    PyObject *cpy_r_r84[4] = {cpy_r_self, cpy_r_file_node, cpy_r_options, cpy_r_info};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_VectorcallMethod(cpy_r_r83, cpy_r_r85, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL121;
    }
    cpy_r_r87 = PyObject_Type(cpy_r_r86);
    cpy_r_r88 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r89 = CPyObject_GetAttr(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL122;
    }
    cpy_r_r90 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r87, cpy_r_r90);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL123;
    }
    PyObject *cpy_r_r92[1] = {cpy_r_r86};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 1, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL123;
    } else
        goto CPyL124;
CPyL63: ;
    cpy_r_r95 = 1;
    if (cpy_r_ok) {
        goto CPyL66;
    } else
        goto CPyL125;
CPyL65: ;
    cpy_r_r96 = cpy_r_ok;
    goto CPyL70;
CPyL66: ;
    if (likely(cpy_r_spec != Py_None))
        cpy_r_r97 = cpy_r_spec;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 484, CPyStatic_semanal_main___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_spec);
        goto CPyL126;
    }
    cpy_r_r98 = CPyDef_dataclasses___DataclassTransformer(cpy_r_defn, cpy_r_defn, cpy_r_r97, cpy_r_self);
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 484, CPyStatic_semanal_main___globals);
        goto CPyL71;
    }
    cpy_r_r99 = CPyDef_dataclasses___DataclassTransformer___transform(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 484, CPyStatic_semanal_main___globals);
        goto CPyL71;
    }
    cpy_r_r96 = cpy_r_r99;
CPyL70: ;
    cpy_r_ok = cpy_r_r96;
    goto CPyL79;
CPyL71: ;
    cpy_r_r100 = CPy_CatchError();
    cpy_r_r95 = 0;
    cpy_r_r101 = CPy_GetExcInfo();
    cpy_r_r102 = cpy_r_r101.f0;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = cpy_r_r101.f1;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = cpy_r_r101.f2;
    CPy_INCREF(cpy_r_r104);
    CPy_DecRef(cpy_r_r101.f0);
    CPy_DecRef(cpy_r_r101.f1);
    CPy_DecRef(cpy_r_r101.f2);
    PyObject *cpy_r_r105[4] = {cpy_r_r86, cpy_r_r102, cpy_r_r103, cpy_r_r104};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r106, 4, 0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL127;
    }
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    cpy_r_r108 = PyObject_IsTrue(cpy_r_r107);
    CPy_DecRef(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL77;
    }
    cpy_r_r110 = cpy_r_r108;
    if (cpy_r_r110) goto CPyL76;
    CPy_Reraise();
    if (!0) {
        goto CPyL77;
    } else
        goto CPyL128;
CPyL75: ;
    CPy_Unreachable();
CPyL76: ;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    goto CPyL79;
CPyL77: ;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    cpy_r_r111 = CPy_KeepPropagating();
    if (!cpy_r_r111) {
        goto CPyL80;
    } else
        goto CPyL129;
CPyL78: ;
    CPy_Unreachable();
CPyL79: ;
    tuple_T3OOO __tmp5943 = { NULL, NULL, NULL };
    cpy_r_r112 = __tmp5943;
    cpy_r_r113 = cpy_r_r112;
    goto CPyL81;
CPyL80: ;
    cpy_r_r114 = CPy_CatchError();
    cpy_r_r113 = cpy_r_r114;
CPyL81: ;
    if (!cpy_r_r95) goto CPyL130;
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r116[4] = {cpy_r_r86, cpy_r_r115, cpy_r_r115, cpy_r_r115};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r117, 4, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 481, CPyStatic_semanal_main___globals);
        goto CPyL131;
    } else
        goto CPyL132;
CPyL83: ;
    CPy_DECREF(cpy_r_r86);
CPyL84: ;
    if (cpy_r_r113.f0 == NULL) goto CPyL91;
    CPy_Reraise();
    if (!0) {
        goto CPyL87;
    } else
        goto CPyL133;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    if (cpy_r_r113.f0 == NULL) goto CPyL89;
    CPy_RestoreExcInfo(cpy_r_r113);
    CPy_XDECREF(cpy_r_r113.f0);
    CPy_XDECREF(cpy_r_r113.f1);
    CPy_XDECREF(cpy_r_r113.f2);
CPyL89: ;
    cpy_r_r119 = CPy_KeepPropagating();
    if (!cpy_r_r119) goto CPyL92;
    CPy_Unreachable();
CPyL91: ;
    return cpy_r_ok;
CPyL92: ;
    cpy_r_r120 = 2;
    return cpy_r_r120;
CPyL93: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL57;
CPyL94: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    goto CPyL92;
CPyL95: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_decorator);
    goto CPyL92;
CPyL96: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL92;
CPyL97: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL92;
CPyL98: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL8;
CPyL99: ;
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_hook);
    goto CPyL36;
CPyL100: ;
    CPy_DECREF(cpy_r_decorator_name);
    goto CPyL17;
CPyL101: ;
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_hook);
    CPy_DecRef(cpy_r_decorator_name);
    goto CPyL36;
CPyL102: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL13;
CPyL103: ;
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_decorator_name);
    goto CPyL36;
CPyL104: ;
    CPy_DecRef(cpy_r_decorator);
    CPy_DecRef(cpy_r_r28);
    goto CPyL36;
CPyL105: ;
    CPy_DecRef(cpy_r_decorator);
    goto CPyL36;
CPyL106: ;
    CPy_DECREF(cpy_r_hook);
    goto CPyL20;
CPyL107: ;
    CPy_DECREF(cpy_r_decorator);
    CPy_DECREF(cpy_r_hook);
    goto CPyL44;
CPyL108: ;
    CPy_DECREF(cpy_r_decorator);
    CPy_DECREF(cpy_r_hook);
    goto CPyL28;
CPyL109: ;
    CPy_DecRef(cpy_r_hook);
    goto CPyL36;
CPyL110: ;
    CPy_DecRef(cpy_r_r54);
    goto CPyL36;
CPyL111: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL42;
CPyL112: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    goto CPyL40;
CPyL113: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL43;
CPyL114: ;
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    goto CPyL49;
CPyL115: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r12);
    goto CPyL52;
CPyL116: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL48;
CPyL117: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_r1);
    goto CPyL50;
CPyL118: ;
    CPy_XDECREF(cpy_r_r72.f0);
    CPy_XDECREF(cpy_r_r72.f1);
    CPy_XDECREF(cpy_r_r72.f2);
    goto CPyL51;
CPyL119: ;
    CPy_DecRef(cpy_r_defn);
    goto CPyL92;
CPyL120: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_spec);
    goto CPyL91;
CPyL121: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_spec);
    goto CPyL92;
CPyL122: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r87);
    goto CPyL92;
CPyL123: ;
    CPy_DecRef(cpy_r_defn);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r89);
    goto CPyL92;
CPyL124: ;
    CPy_DECREF(cpy_r_r94);
    goto CPyL63;
CPyL125: ;
    CPy_DECREF(cpy_r_defn);
    CPy_DECREF(cpy_r_spec);
    goto CPyL65;
CPyL126: ;
    CPy_DecRef(cpy_r_defn);
    goto CPyL71;
CPyL127: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    goto CPyL77;
CPyL128: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r100.f0);
    CPy_DecRef(cpy_r_r100.f1);
    CPy_DecRef(cpy_r_r100.f2);
    goto CPyL75;
CPyL129: ;
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r89);
    goto CPyL78;
CPyL130: ;
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r89);
    goto CPyL84;
CPyL131: ;
    CPy_DecRef(cpy_r_r86);
    goto CPyL87;
CPyL132: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL83;
CPyL133: ;
    CPy_XDECREF(cpy_r_r113.f0);
    CPy_XDECREF(cpy_r_r113.f1);
    CPy_XDECREF(cpy_r_r113.f2);
    goto CPyL86;
}

PyObject *CPyPy_semanal_main___apply_hooks_to_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"self", "module", "info", "options", "file_node", "errors", 0};
    static CPyArg_Parser parser = {"OOOOOO:apply_hooks_to_class", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_module;
    PyObject *obj_info;
    PyObject *obj_options;
    PyObject *obj_file_node;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_self, &obj_module, &obj_info, &obj_options, &obj_file_node, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_semanal___SemanticAnalyzer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.semanal.SemanticAnalyzer", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_file_node;
    if (likely(Py_TYPE(obj_file_node) == CPyType_nodes___MypyFile))
        arg_file_node = obj_file_node;
    else {
        CPy_TypeError("mypy.nodes.MypyFile", obj_file_node); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___apply_hooks_to_class(arg_self, arg_module, arg_info, arg_options, arg_file_node, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "apply_hooks_to_class", 450, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___calculate_class_properties(PyObject *cpy_r_graph, PyObject *cpy_r_scc, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_builtins;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_state;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T3OOO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r__;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
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
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    tuple_T3OOO cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    tuple_T3OOO cpy_r_r90;
    tuple_T3OOO cpy_r_r91;
    tuple_T3OOO cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject **cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    cpy_r_r0 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_graph, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 490, CPyStatic_semanal_main___globals);
        goto CPyL70;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_mypy___build___State))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 490, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r1);
        goto CPyL70;
    }
    cpy_r_r3 = ((mypy___build___StateObject *)cpy_r_r2)->_tree;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_builtins = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_builtins != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL5;
    } else
        goto CPyL71;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 491, CPyStatic_semanal_main___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r7 = 0;
CPyL6: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL72;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r7);
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 492, CPyStatic_semanal_main___globals, "str", cpy_r_r12);
        goto CPyL73;
    }
    cpy_r_module = cpy_r_r13;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 493, CPyStatic_semanal_main___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_mypy___build___State))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 493, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r14);
        goto CPyL74;
    }
    cpy_r_state = cpy_r_r15;
    cpy_r_r16 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r16);
    cpy_r_tree = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_tree != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL13;
    } else
        goto CPyL75;
CPyL11: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 495, CPyStatic_semanal_main___globals);
        goto CPyL70;
    }
    CPy_Unreachable();
CPyL13: ;
    CPy_INCREF(cpy_r_tree);
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r20 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 496, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL76;
    }
    cpy_r_r21 = CPyDef_nodes___MypyFile___local_definitions(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 496, CPyStatic_semanal_main___globals);
        goto CPyL76;
    }
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 496, CPyStatic_semanal_main___globals);
        goto CPyL76;
    }
CPyL16: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL77;
    PyObject *__tmp5944;
    if (unlikely(!(PyTuple_Check(cpy_r_r23) && PyTuple_GET_SIZE(cpy_r_r23) == 3))) {
        __tmp5944 = NULL;
        goto __LL5945;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r23, 0))))
        __tmp5944 = PyTuple_GET_ITEM(cpy_r_r23, 0);
    else {
        __tmp5944 = NULL;
    }
    if (__tmp5944 == NULL) goto __LL5945;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r23, 1)) == CPyType_nodes___SymbolTableNode))
        __tmp5944 = PyTuple_GET_ITEM(cpy_r_r23, 1);
    else {
        __tmp5944 = NULL;
    }
    if (__tmp5944 == NULL) goto __LL5945;
    if ((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r23, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r23, 2)) == CPyType_nodes___TypeInfo))
        __tmp5944 = PyTuple_GET_ITEM(cpy_r_r23, 2);
    else {
        __tmp5944 = NULL;
    }
    if (__tmp5944 != NULL) goto __LL5946;
    if (PyTuple_GET_ITEM(cpy_r_r23, 2) == Py_None)
        __tmp5944 = PyTuple_GET_ITEM(cpy_r_r23, 2);
    else {
        __tmp5944 = NULL;
    }
    if (__tmp5944 != NULL) goto __LL5946;
    __tmp5944 = NULL;
__LL5946: ;
    if (__tmp5944 == NULL) goto __LL5945;
    __tmp5944 = cpy_r_r23;
__LL5945: ;
    if (unlikely(__tmp5944 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.SymbolTableNode, union[mypy.nodes.TypeInfo, None]]", cpy_r_r23); cpy_r_r24 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp5947 = PyTuple_GET_ITEM(cpy_r_r23, 0);
        CPy_INCREF(__tmp5947);
        PyObject *__tmp5948;
        if (likely(PyUnicode_Check(__tmp5947)))
            __tmp5948 = __tmp5947;
        else {
            CPy_TypeError("str", __tmp5947); 
            __tmp5948 = NULL;
        }
        cpy_r_r24.f0 = __tmp5948;
        PyObject *__tmp5949 = PyTuple_GET_ITEM(cpy_r_r23, 1);
        CPy_INCREF(__tmp5949);
        PyObject *__tmp5950;
        if (likely(Py_TYPE(__tmp5949) == CPyType_nodes___SymbolTableNode))
            __tmp5950 = __tmp5949;
        else {
            CPy_TypeError("mypy.nodes.SymbolTableNode", __tmp5949); 
            __tmp5950 = NULL;
        }
        cpy_r_r24.f1 = __tmp5950;
        PyObject *__tmp5951 = PyTuple_GET_ITEM(cpy_r_r23, 2);
        CPy_INCREF(__tmp5951);
        PyObject *__tmp5952;
        if ((Py_TYPE(__tmp5951) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5951) == CPyType_nodes___TypeInfo))
            __tmp5952 = __tmp5951;
        else {
            __tmp5952 = NULL;
        }
        if (__tmp5952 != NULL) goto __LL5953;
        if (__tmp5951 == Py_None)
            __tmp5952 = __tmp5951;
        else {
            __tmp5952 = NULL;
        }
        if (__tmp5952 != NULL) goto __LL5953;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5951); 
        __tmp5952 = NULL;
__LL5953: ;
        cpy_r_r24.f2 = __tmp5952;
    }
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24.f0 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 496, CPyStatic_semanal_main___globals);
        goto CPyL78;
    }
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    cpy_r__ = cpy_r_r25;
    CPy_DECREF(cpy_r__);
    cpy_r_r26 = cpy_r_r24.f1;
    CPy_INCREF(cpy_r_r26);
    cpy_r_node = cpy_r_r26;
    cpy_r_r27 = cpy_r_r24.f2;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r24.f0);
    CPy_DECREF(cpy_r_r24.f1);
    CPy_DECREF(cpy_r_r24.f2);
    cpy_r__ = cpy_r_r27;
    CPy_DECREF(cpy_r__);
    cpy_r_r28 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    cpy_r_r29 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL20;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL21;
CPyL20: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r28)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    cpy_r_r33 = cpy_r_r37;
CPyL21: ;
    if (!cpy_r_r33) goto CPyL79;
    cpy_r_r38 = ((mypy___build___StateObject *)cpy_r_state)->_manager;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "calculate_class_properties", "State", "manager", 498, CPyStatic_semanal_main___globals);
        goto CPyL80;
    }
CPyL23: ;
    cpy_r_r39 = ((mypy___build___BuildManagerObject *)cpy_r_r38)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r39);
    CPy_INCREF(cpy_r_tree);
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r40 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL81;
    }
    cpy_r_r41 = ((mypy___build___StateObject *)cpy_r_state)->_options;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "calculate_class_properties", "State", "options", 498, CPyStatic_semanal_main___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r41);
CPyL25: ;
    cpy_r_r42 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r42);
    if (likely((Py_TYPE(cpy_r_r42) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r42) == CPyType_nodes___TypeInfo)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r42);
        goto CPyL83;
    }
    cpy_r_r44 = CPyStatics[4826]; /* 'file_context' */
    PyObject *cpy_r_r45[4] = {cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r43};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = PyObject_VectorcallMethod(cpy_r_r44, cpy_r_r46, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r48 = PyObject_Type(cpy_r_r47);
    cpy_r_r49 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL85;
    }
    cpy_r_r51 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r51);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL86;
    }
    PyObject *cpy_r_r53[1] = {cpy_r_r47};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r54, 1, 0);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL30: ;
    cpy_r_r56 = 1;
    cpy_r_r57 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r57);
    if (likely((Py_TYPE(cpy_r_r57) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r57) == CPyType_nodes___TypeInfo)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 499, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r57);
        goto CPyL88;
    }
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r59 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 499, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL89;
    }
    cpy_r_r60 = ((mypy___nodes___MypyFileObject *)cpy_r_r59)->_is_stub;
    cpy_r_r61 = CPyDef_semanal_classprop___calculate_class_abstract_status(cpy_r_r58, cpy_r_r60, cpy_r_errors);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 499, CPyStatic_semanal_main___globals);
        goto CPyL88;
    }
    cpy_r_r62 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r62);
    if (likely((Py_TYPE(cpy_r_r62) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r62) == CPyType_nodes___TypeInfo)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 500, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r62);
        goto CPyL88;
    }
    cpy_r_r64 = CPyDef_semanal_classprop___check_protocol_status(cpy_r_r63, cpy_r_errors);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 500, CPyStatic_semanal_main___globals);
        goto CPyL88;
    }
    cpy_r_r65 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r65);
    if (likely((Py_TYPE(cpy_r_r65) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r65) == CPyType_nodes___TypeInfo)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 501, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r65);
        goto CPyL88;
    }
    cpy_r_r67 = CPyDef_semanal_classprop___calculate_class_vars(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 501, CPyStatic_semanal_main___globals);
        goto CPyL88;
    }
    cpy_r_r68 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_node)->_node;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_node);
    if (likely((Py_TYPE(cpy_r_r68) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r68) == CPyType_nodes___TypeInfo)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals, "mypy.nodes.TypeInfo", cpy_r_r68);
        goto CPyL47;
    }
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r70 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL90;
    }
    cpy_r_r71 = ((mypy___nodes___MypyFileObject *)cpy_r_r70)->_names;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "calculate_class_properties", "MypyFile", "names", 503, CPyStatic_semanal_main___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r71);
CPyL41: ;
    cpy_r_r72 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals);
        goto CPyL91;
    }
    if (likely(Py_TYPE(cpy_r_r72) == CPyType_mypy___build___State))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r72);
        goto CPyL91;
    }
    cpy_r_r74 = ((mypy___build___StateObject *)cpy_r_r73)->_options;
    if (unlikely(cpy_r_r74 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'State' undefined");
    } else {
        CPy_INCREF(cpy_r_r74);
    }
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals);
        goto CPyL91;
    }
CPyL44: ;
    if (likely(cpy_r_builtins != Py_None))
        cpy_r_r75 = cpy_r_builtins;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "calculate_class_properties", 503, CPyStatic_semanal_main___globals, "mypy.nodes.MypyFile", cpy_r_builtins);
        goto CPyL92;
    }
    cpy_r_r76 = ((mypy___nodes___MypyFileObject *)cpy_r_r75)->_names;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypy/semanal_main.py", "calculate_class_properties", "MypyFile", "names", 503, CPyStatic_semanal_main___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r76);
CPyL46: ;
    cpy_r_r77 = CPyDef_semanal_classprop___add_type_promotion(cpy_r_r69, cpy_r_r71, cpy_r_r74, cpy_r_r76);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 502, CPyStatic_semanal_main___globals);
    } else
        goto CPyL55;
CPyL47: ;
    cpy_r_r78 = CPy_CatchError();
    cpy_r_r56 = 0;
    cpy_r_r79 = CPy_GetExcInfo();
    cpy_r_r80 = cpy_r_r79.f0;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = cpy_r_r79.f1;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = cpy_r_r79.f2;
    CPy_INCREF(cpy_r_r82);
    CPy_DecRef(cpy_r_r79.f0);
    CPy_DecRef(cpy_r_r79.f1);
    CPy_DecRef(cpy_r_r79.f2);
    PyObject *cpy_r_r83[4] = {cpy_r_r47, cpy_r_r80, cpy_r_r81, cpy_r_r82};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r84, 4, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL93;
    }
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    cpy_r_r86 = PyObject_IsTrue(cpy_r_r85);
    CPy_DecRef(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL53;
    }
    cpy_r_r88 = cpy_r_r86;
    if (cpy_r_r88) goto CPyL52;
    CPy_Reraise();
    if (!0) {
        goto CPyL53;
    } else
        goto CPyL94;
CPyL51: ;
    CPy_Unreachable();
CPyL52: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL55;
CPyL53: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    cpy_r_r89 = CPy_KeepPropagating();
    if (!cpy_r_r89) {
        goto CPyL56;
    } else
        goto CPyL95;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    tuple_T3OOO __tmp5954 = { NULL, NULL, NULL };
    cpy_r_r90 = __tmp5954;
    cpy_r_r91 = cpy_r_r90;
    goto CPyL57;
CPyL56: ;
    cpy_r_r92 = CPy_CatchError();
    cpy_r_r91 = cpy_r_r92;
CPyL57: ;
    if (!cpy_r_r56) goto CPyL96;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r94[4] = {cpy_r_r47, cpy_r_r93, cpy_r_r93, cpy_r_r93};
    cpy_r_r95 = (PyObject **)&cpy_r_r94;
    cpy_r_r96 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r95, 4, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 498, CPyStatic_semanal_main___globals);
        goto CPyL97;
    } else
        goto CPyL98;
CPyL59: ;
    CPy_DECREF(cpy_r_r47);
CPyL60: ;
    if (cpy_r_r91.f0 == NULL) {
        goto CPyL16;
    } else
        goto CPyL99;
CPyL61: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL63;
    } else
        goto CPyL100;
CPyL62: ;
    CPy_Unreachable();
CPyL63: ;
    if (cpy_r_r91.f0 == NULL) goto CPyL65;
    CPy_RestoreExcInfo(cpy_r_r91);
    CPy_XDECREF(cpy_r_r91.f0);
    CPy_XDECREF(cpy_r_r91.f1);
    CPy_XDECREF(cpy_r_r91.f2);
CPyL65: ;
    cpy_r_r97 = CPy_KeepPropagating();
    if (!cpy_r_r97) goto CPyL70;
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r98 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 496, CPyStatic_semanal_main___globals);
        goto CPyL73;
    }
    cpy_r_r99 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r99;
    goto CPyL6;
CPyL69: ;
    return 1;
CPyL70: ;
    cpy_r_r100 = 2;
    return cpy_r_r100;
CPyL71: ;
    CPy_DECREF(cpy_r_builtins);
    goto CPyL3;
CPyL72: ;
    CPy_DECREF(cpy_r_builtins);
    goto CPyL69;
CPyL73: ;
    CPy_DecRef(cpy_r_builtins);
    goto CPyL70;
CPyL74: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    goto CPyL70;
CPyL75: ;
    CPy_DECREF(cpy_r_builtins);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    goto CPyL11;
CPyL76: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    goto CPyL70;
CPyL77: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    CPy_DECREF(cpy_r_r22);
    goto CPyL67;
CPyL78: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    goto CPyL70;
CPyL79: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL16;
CPyL80: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    goto CPyL70;
CPyL81: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r39);
    goto CPyL70;
CPyL82: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    goto CPyL70;
CPyL84: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL70;
CPyL85: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    goto CPyL70;
CPyL86: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL70;
CPyL87: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL30;
CPyL88: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL47;
CPyL89: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r58);
    goto CPyL47;
CPyL90: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL47;
CPyL91: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r71);
    goto CPyL47;
CPyL92: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r74);
    goto CPyL47;
CPyL93: ;
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r82);
    goto CPyL53;
CPyL94: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    goto CPyL51;
CPyL95: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r50);
    goto CPyL54;
CPyL96: ;
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    goto CPyL60;
CPyL97: ;
    CPy_DecRef(cpy_r_builtins);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_state);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r47);
    goto CPyL63;
CPyL98: ;
    CPy_DECREF(cpy_r_r96);
    goto CPyL59;
CPyL99: ;
    CPy_DECREF(cpy_r_builtins);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_state);
    CPy_DECREF(cpy_r_tree);
    CPy_DECREF(cpy_r_r22);
    goto CPyL61;
CPyL100: ;
    CPy_XDECREF(cpy_r_r91.f0);
    CPy_XDECREF(cpy_r_r91.f1);
    CPy_XDECREF(cpy_r_r91.f2);
    goto CPyL62;
}

PyObject *CPyPy_semanal_main___calculate_class_properties(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", "errors", 0};
    static CPyArg_Parser parser = {"OOO:calculate_class_properties", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___calculate_class_properties(arg_graph, arg_scc, arg_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "calculate_class_properties", 489, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main___check_blockers(PyObject *cpy_r_graph, PyObject *cpy_r_scc) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_scc)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_scc, cpy_r_r0);
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_blockers", 508, CPyStatic_semanal_main___globals, "str", cpy_r_r5);
        goto CPyL8;
    }
    cpy_r_module = cpy_r_r6;
    cpy_r_r7 = CPyDict_GetItem(cpy_r_graph, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_blockers", 509, CPyStatic_semanal_main___globals);
        goto CPyL8;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_mypy___build___State))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/semanal_main.py", "check_blockers", 509, CPyStatic_semanal_main___globals, "mypy.build.State", cpy_r_r7);
        goto CPyL8;
    }
    cpy_r_r9 = CPyDef_mypy___build___State___check_blockers(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "check_blockers", 509, CPyStatic_semanal_main___globals);
        goto CPyL8;
    }
    cpy_r_r10 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r10;
    goto CPyL1;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_semanal_main___check_blockers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"graph", "scc", 0};
    static CPyArg_Parser parser = {"OO:check_blockers", kwlist, 0};
    PyObject *obj_graph;
    PyObject *obj_scc;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_graph, &obj_scc)) {
        return NULL;
    }
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_scc;
    if (likely(PyList_Check(obj_scc)))
        arg_scc = obj_scc;
    else {
        CPy_TypeError("list", obj_scc); 
        goto fail;
    }
    char retval = CPyDef_semanal_main___check_blockers(arg_graph, arg_scc);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/semanal_main.py", "check_blockers", 507, CPyStatic_semanal_main___globals);
    return NULL;
}

char CPyDef_semanal_main_____top_level__(void) {
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
    PyObject **cpy_r_r22;
    PyObject **cpy_r_r23;
    void *cpy_r_r25;
    void *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
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
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    tuple_T2OO cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T2OO cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    CPyPtr cpy_r_r132;
    CPyPtr cpy_r_r133;
    CPyPtr cpy_r_r134;
    CPyPtr cpy_r_r135;
    CPyPtr cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    tuple_T4OOOO cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    tuple_T3OOO cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    int32_t cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", -1, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_semanal_main___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 27, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9699]; /* ('nullcontext',) */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_semanal_main___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 29, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9700]; /* ('TYPE_CHECKING', 'Callable', 'Final', 'List',
                                     'Optional', 'Tuple', 'Union') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_semanal_main___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 30, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r18 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r19 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r20 = CPyStatic_semanal_main___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r17, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 31, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_typing_extensions = cpy_r_r21;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = (PyObject **)&CPyModule_mypy___build;
    cpy_r_r23 = (PyObject **)&CPyModule_mypy___state;
    PyObject **cpy_r_r24[2] = {cpy_r_r22, cpy_r_r23};
    cpy_r_r25 = (void *)&cpy_r_r24;
    int64_t cpy_r_r26[2] = {33, 34};
    cpy_r_r27 = (void *)&cpy_r_r26;
    cpy_r_r28 = CPyStatics[9702]; /* (('mypy.build', 'mypy', 'mypy'),
                                     ('mypy.state', 'mypy', 'mypy')) */
    cpy_r_r29 = CPyStatic_semanal_main___globals;
    cpy_r_r30 = CPyStatics[5178]; /* 'mypy/semanal_main.py' */
    cpy_r_r31 = CPyStatics[17]; /* '<module>' */
    cpy_r_r32 = CPyImport_ImportMany(cpy_r_r28, cpy_r_r25, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r27);
    if (!cpy_r_r32) goto CPyL44;
    cpy_r_r33 = CPyStatics[9703]; /* ('FineGrainedDeferredNode',) */
    cpy_r_r34 = CPyStatics[517]; /* 'mypy.checker' */
    cpy_r_r35 = CPyStatic_semanal_main___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 35, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___checker = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___checker);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r38 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r39 = CPyStatic_semanal_main___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 36, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___errors = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9704]; /* ('Decorator', 'FuncDef', 'MypyFile', 'OverloadedFuncDef',
                                     'TypeInfo', 'Var') */
    cpy_r_r42 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r43 = CPyStatic_semanal_main___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 37, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___nodes = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r46 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r47 = CPyStatic_semanal_main___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 38, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___options = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9705]; /* ('ClassDefContext',) */
    cpy_r_r50 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r51 = CPyStatic_semanal_main___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 39, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___plugin = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9195]; /* ('dataclasses',) */
    cpy_r_r54 = CPyStatics[9196]; /* ('dataclasses_plugin',) */
    cpy_r_r55 = CPyStatics[1008]; /* 'mypy.plugins' */
    cpy_r_r56 = CPyStatic_semanal_main___globals;
    cpy_r_r57 = CPyImport_ImportFromMany(cpy_r_r55, cpy_r_r53, cpy_r_r54, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 40, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___plugins = cpy_r_r57;
    CPy_INCREF(CPyModule_mypy___plugins);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r58 = CPyStatics[9706]; /* ('SemanticAnalyzer', 'apply_semantic_analyzer_patches',
                                     'remove_imported_names_from_symtable') */
    cpy_r_r59 = CPyStatics[540]; /* 'mypy.semanal' */
    cpy_r_r60 = CPyStatic_semanal_main___globals;
    cpy_r_r61 = CPyImport_ImportFromMany(cpy_r_r59, cpy_r_r58, cpy_r_r58, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 41, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___semanal = cpy_r_r61;
    CPy_INCREF(CPyModule_mypy___semanal);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r62 = CPyStatics[9707]; /* ('add_type_promotion', 'calculate_class_abstract_status',
                                     'calculate_class_vars', 'check_protocol_status') */
    cpy_r_r63 = CPyStatics[5185]; /* 'mypy.semanal_classprop' */
    cpy_r_r64 = CPyStatic_semanal_main___globals;
    cpy_r_r65 = CPyImport_ImportFromMany(cpy_r_r63, cpy_r_r62, cpy_r_r62, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 46, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___semanal_classprop = cpy_r_r65;
    CPy_INCREF(CPyModule_mypy___semanal_classprop);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r66 = CPyStatics[9708]; /* ('infer_decorator_signature_if_simple',) */
    cpy_r_r67 = CPyStatics[5187]; /* 'mypy.semanal_infer' */
    cpy_r_r68 = CPyStatic_semanal_main___globals;
    cpy_r_r69 = CPyImport_ImportFromMany(cpy_r_r67, cpy_r_r66, cpy_r_r66, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 52, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___semanal_infer = cpy_r_r69;
    CPy_INCREF(CPyModule_mypy___semanal_infer);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r70 = CPyStatics[9709]; /* ('find_dataclass_transform_spec',) */
    cpy_r_r71 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r72 = CPyStatic_semanal_main___globals;
    cpy_r_r73 = CPyImport_ImportFromMany(cpy_r_r71, cpy_r_r70, cpy_r_r70, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 53, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r73;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r74 = CPyStatics[9710]; /* ('TypeArgumentAnalyzer',) */
    cpy_r_r75 = CPyStatics[5189]; /* 'mypy.semanal_typeargs' */
    cpy_r_r76 = CPyStatic_semanal_main___globals;
    cpy_r_r77 = CPyImport_ImportFromMany(cpy_r_r75, cpy_r_r74, cpy_r_r74, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 54, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___semanal_typeargs = cpy_r_r77;
    CPy_INCREF(CPyModule_mypy___semanal_typeargs);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r78 = CPyStatics[9711]; /* ('SavedAttributes',) */
    cpy_r_r79 = CPyStatics[5191]; /* 'mypy.server.aststrip' */
    cpy_r_r80 = CPyStatic_semanal_main___globals;
    cpy_r_r81 = CPyImport_ImportFromMany(cpy_r_r79, cpy_r_r78, cpy_r_r78, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 55, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___server___aststrip = cpy_r_r81;
    CPy_INCREF(CPyModule_mypy___server___aststrip);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r82 = CPyStatics[9712]; /* ('is_typeshed_file',) */
    cpy_r_r83 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r84 = CPyStatic_semanal_main___globals;
    cpy_r_r85 = CPyImport_ImportFromMany(cpy_r_r83, cpy_r_r82, cpy_r_r82, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 56, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    CPyModule_mypy___util = cpy_r_r85;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r86 = CPyStatic_semanal_main___globals;
    cpy_r_r87 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 58, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r88))) {
        CPy_TypeError("bool", cpy_r_r88); cpy_r_r89 = 2;
    } else
        cpy_r_r89 = cpy_r_r88 == Py_True;
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 58, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r90 = CPyStatic_semanal_main___globals;
    cpy_r_r91 = CPyStatics[81]; /* 'List' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r93 = CPyStatic_semanal_main___globals;
    cpy_r_r94 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL45;
    }
    cpy_r_r96 = (PyObject *)&PyLong_Type;
    cpy_r_r97 = CPyStatic_semanal_main___globals;
    cpy_r_r98 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r99 = CPyDict_GetItem(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL46;
    }
    cpy_r_r100 = PyList_New(0);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL47;
    }
    cpy_r_r101 = Py_None;
    cpy_r_r102.f0 = cpy_r_r100;
    cpy_r_r102.f1 = cpy_r_r101;
    CPy_INCREF(cpy_r_r102.f0);
    CPy_INCREF(cpy_r_r102.f1);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r103 = PyTuple_New(2);
    if (unlikely(cpy_r_r103 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5955 = cpy_r_r102.f0;
    PyTuple_SET_ITEM(cpy_r_r103, 0, __tmp5955);
    PyObject *__tmp5956 = cpy_r_r102.f1;
    PyTuple_SET_ITEM(cpy_r_r103, 1, __tmp5956);
    cpy_r_r104 = PyObject_GetItem(cpy_r_r99, cpy_r_r103);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL46;
    }
    cpy_r_r105.f0 = cpy_r_r96;
    cpy_r_r105.f1 = cpy_r_r104;
    CPy_INCREF(cpy_r_r105.f0);
    CPy_INCREF(cpy_r_r105.f1);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = PyTuple_New(2);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5957 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp5957);
    PyObject *__tmp5958 = cpy_r_r105.f1;
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp5958);
    cpy_r_r107 = PyObject_GetItem(cpy_r_r95, cpy_r_r106);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL45;
    }
    cpy_r_r108 = PyObject_GetItem(cpy_r_r92, cpy_r_r107);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r109 = CPyStatic_semanal_main___globals;
    cpy_r_r110 = CPyStatics[5192]; /* 'Patches' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 62, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r113 = CPyStatic_semanal_main___globals;
    cpy_r_r114 = CPyStatics[5193]; /* 'MAX_ITERATIONS' */
    cpy_r_r115 = CPyStatics[9023]; /* 20 */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 66, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r118 = CPyStatic_semanal_main___globals;
    cpy_r_r119 = CPyStatics[5194]; /* 'CORE_WARMUP' */
    cpy_r_r120 = CPyStatics[9018]; /* 2 */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 70, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r123 = CPyStatics[21]; /* 'typing' */
    cpy_r_r124 = CPyStatics[600]; /* '_collections_abc' */
    cpy_r_r125 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r126 = CPyStatics[602]; /* 'abc' */
    cpy_r_r127 = CPyStatics[76]; /* 'collections' */
    cpy_r_r128 = CPyStatics[601]; /* 'collections.abc' */
    cpy_r_r129 = PyList_New(6);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 71, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r130 = (CPyPtr)&((PyListObject *)cpy_r_r129)->ob_item;
    cpy_r_r131 = *(CPyPtr *)cpy_r_r130;
    CPy_INCREF(cpy_r_r123);
    *(PyObject * *)cpy_r_r131 = cpy_r_r123;
    cpy_r_r132 = cpy_r_r131 + 8;
    CPy_INCREF(cpy_r_r124);
    *(PyObject * *)cpy_r_r132 = cpy_r_r124;
    cpy_r_r133 = cpy_r_r131 + 16;
    CPy_INCREF(cpy_r_r125);
    *(PyObject * *)cpy_r_r133 = cpy_r_r125;
    cpy_r_r134 = cpy_r_r131 + 24;
    CPy_INCREF(cpy_r_r126);
    *(PyObject * *)cpy_r_r134 = cpy_r_r126;
    cpy_r_r135 = cpy_r_r131 + 32;
    CPy_INCREF(cpy_r_r127);
    *(PyObject * *)cpy_r_r135 = cpy_r_r127;
    cpy_r_r136 = cpy_r_r131 + 40;
    CPy_INCREF(cpy_r_r128);
    *(PyObject * *)cpy_r_r136 = cpy_r_r128;
    CPyStatic_semanal_main___core_modules = cpy_r_r129;
    CPy_INCREF(CPyStatic_semanal_main___core_modules);
    cpy_r_r137 = CPyStatic_semanal_main___globals;
    cpy_r_r138 = CPyStatics[5195]; /* 'core_modules' */
    cpy_r_r139 = CPyDict_SetItem(cpy_r_r137, cpy_r_r138, cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 71, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r141 = CPyStatic_semanal_main___globals;
    cpy_r_r142 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r143 = CPyDict_GetItem(cpy_r_r141, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 305, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r144 = (PyObject *)&PyUnicode_Type;
    cpy_r_r145 = CPyStatic_semanal_main___globals;
    cpy_r_r146 = CPyStatics[84]; /* 'Union' */
    cpy_r_r147 = CPyDict_GetItem(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 306, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
    cpy_r_r148 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r149 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r150 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r151 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r152.f0 = cpy_r_r148;
    cpy_r_r152.f1 = cpy_r_r149;
    cpy_r_r152.f2 = cpy_r_r150;
    cpy_r_r152.f3 = cpy_r_r151;
    CPy_INCREF(cpy_r_r152.f0);
    CPy_INCREF(cpy_r_r152.f1);
    CPy_INCREF(cpy_r_r152.f2);
    CPy_INCREF(cpy_r_r152.f3);
    cpy_r_r153 = PyTuple_New(4);
    if (unlikely(cpy_r_r153 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5959 = cpy_r_r152.f0;
    PyTuple_SET_ITEM(cpy_r_r153, 0, __tmp5959);
    PyObject *__tmp5960 = cpy_r_r152.f1;
    PyTuple_SET_ITEM(cpy_r_r153, 1, __tmp5960);
    PyObject *__tmp5961 = cpy_r_r152.f2;
    PyTuple_SET_ITEM(cpy_r_r153, 2, __tmp5961);
    PyObject *__tmp5962 = cpy_r_r152.f3;
    PyTuple_SET_ITEM(cpy_r_r153, 3, __tmp5962);
    cpy_r_r154 = PyObject_GetItem(cpy_r_r147, cpy_r_r153);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 306, CPyStatic_semanal_main___globals);
        goto CPyL48;
    }
    cpy_r_r155 = CPyStatic_semanal_main___globals;
    cpy_r_r156 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r157 = CPyDict_GetItem(cpy_r_r155, cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 306, CPyStatic_semanal_main___globals);
        goto CPyL49;
    }
    cpy_r_r158 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r159 = PyObject_GetItem(cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 306, CPyStatic_semanal_main___globals);
        goto CPyL49;
    }
    cpy_r_r160.f0 = cpy_r_r144;
    cpy_r_r160.f1 = cpy_r_r154;
    cpy_r_r160.f2 = cpy_r_r159;
    CPy_INCREF(cpy_r_r160.f0);
    CPy_INCREF(cpy_r_r160.f1);
    CPy_INCREF(cpy_r_r160.f2);
    CPy_DECREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = PyTuple_New(3);
    if (unlikely(cpy_r_r161 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5963 = cpy_r_r160.f0;
    PyTuple_SET_ITEM(cpy_r_r161, 0, __tmp5963);
    PyObject *__tmp5964 = cpy_r_r160.f1;
    PyTuple_SET_ITEM(cpy_r_r161, 1, __tmp5964);
    PyObject *__tmp5965 = cpy_r_r160.f2;
    PyTuple_SET_ITEM(cpy_r_r161, 2, __tmp5965);
    cpy_r_r162 = PyObject_GetItem(cpy_r_r143, cpy_r_r161);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 305, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    cpy_r_r163 = CPyStatic_semanal_main___globals;
    cpy_r_r164 = CPyStatics[5196]; /* 'TargetInfo' */
    cpy_r_r165 = CPyDict_SetItem(cpy_r_r163, cpy_r_r164, cpy_r_r162);
    CPy_DECREF(cpy_r_r162);
    cpy_r_r166 = cpy_r_r165 >= 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/semanal_main.py", "<module>", 305, CPyStatic_semanal_main___globals);
        goto CPyL44;
    }
    return 1;
CPyL44: ;
    cpy_r_r167 = 2;
    return cpy_r_r167;
CPyL45: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL44;
CPyL47: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r99);
    goto CPyL44;
CPyL48: ;
    CPy_DecRef(cpy_r_r143);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r154);
    goto CPyL44;
}
