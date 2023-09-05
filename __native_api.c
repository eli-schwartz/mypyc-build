#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *api___run_env_setup(PyTypeObject *type);
PyObject *CPyDef_api___run_env(void);

static PyObject *
api___run_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_api___run_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return api___run_env_setup(type);
}

static int
api___run_env_traverse(mypy___api___run_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_args);
    return 0;
}

static int
api___run_env_clear(mypy___api___run_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_args);
    return 0;
}

static void
api___run_env_dealloc(mypy___api___run_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, api___run_env_dealloc)
    api___run_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem api___run_env_vtable[1];
static bool
CPyDef_api___run_env_trait_vtable_setup(void)
{
    CPyVTableItem api___run_env_vtable_scratch[] = {
        NULL
    };
    memcpy(api___run_env_vtable, api___run_env_vtable_scratch, sizeof(api___run_env_vtable));
    return 1;
}

static PyMethodDef api___run_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_api___run_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "run_env",
    .tp_new = api___run_env_new,
    .tp_dealloc = (destructor)api___run_env_dealloc,
    .tp_traverse = (traverseproc)api___run_env_traverse,
    .tp_clear = (inquiry)api___run_env_clear,
    .tp_methods = api___run_env_methods,
    .tp_basicsize = sizeof(mypy___api___run_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_api___run_env_template = &CPyType_api___run_env_template_;

static PyObject *
api___run_env_setup(PyTypeObject *type)
{
    mypy___api___run_envObject *self;
    self = (mypy___api___run_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = api___run_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_api___run_env(void)
{
    PyObject *self = api___run_env_setup(CPyType_api___run_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__api_____mypyc_lambda__0_run_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_api_____mypyc_lambda__0_run_obj_____get__(self, instance, owner);
}
PyMemberDef api_____mypyc_lambda__0_run_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___api_____mypyc_lambda__0_run_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___api_____mypyc_lambda__0_run_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *api_____mypyc_lambda__0_run_obj_setup(PyTypeObject *type);
PyObject *CPyDef_api_____mypyc_lambda__0_run_obj(void);

static PyObject *
api_____mypyc_lambda__0_run_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_api_____mypyc_lambda__0_run_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return api_____mypyc_lambda__0_run_obj_setup(type);
}

static int
api_____mypyc_lambda__0_run_obj_traverse(mypy___api_____mypyc_lambda__0_run_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___api_____mypyc_lambda__0_run_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___api_____mypyc_lambda__0_run_objObject))));
    return 0;
}

static int
api_____mypyc_lambda__0_run_obj_clear(mypy___api_____mypyc_lambda__0_run_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___api_____mypyc_lambda__0_run_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___api_____mypyc_lambda__0_run_objObject))));
    return 0;
}

static void
api_____mypyc_lambda__0_run_obj_dealloc(mypy___api_____mypyc_lambda__0_run_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, api_____mypyc_lambda__0_run_obj_dealloc)
    api_____mypyc_lambda__0_run_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem api_____mypyc_lambda__0_run_obj_vtable[2];
static bool
CPyDef_api_____mypyc_lambda__0_run_obj_trait_vtable_setup(void)
{
    CPyVTableItem api_____mypyc_lambda__0_run_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_api_____mypyc_lambda__0_run_obj_____call__,
        (CPyVTableItem)CPyDef_api_____mypyc_lambda__0_run_obj_____get__,
    };
    memcpy(api_____mypyc_lambda__0_run_obj_vtable, api_____mypyc_lambda__0_run_obj_vtable_scratch, sizeof(api_____mypyc_lambda__0_run_obj_vtable));
    return 1;
}

static PyMethodDef api_____mypyc_lambda__0_run_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_api_____mypyc_lambda__0_run_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_api_____mypyc_lambda__0_run_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_api_____mypyc_lambda__0_run_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_run_obj",
    .tp_new = api_____mypyc_lambda__0_run_obj_new,
    .tp_dealloc = (destructor)api_____mypyc_lambda__0_run_obj_dealloc,
    .tp_traverse = (traverseproc)api_____mypyc_lambda__0_run_obj_traverse,
    .tp_clear = (inquiry)api_____mypyc_lambda__0_run_obj_clear,
    .tp_methods = api_____mypyc_lambda__0_run_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__api_____mypyc_lambda__0_run_obj,
    .tp_members = api_____mypyc_lambda__0_run_obj_members,
    .tp_basicsize = sizeof(mypy___api_____mypyc_lambda__0_run_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___api_____mypyc_lambda__0_run_objObject),
    .tp_weaklistoffset = sizeof(mypy___api_____mypyc_lambda__0_run_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___api_____mypyc_lambda__0_run_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_api_____mypyc_lambda__0_run_obj_template = &CPyType_api_____mypyc_lambda__0_run_obj_template_;

static PyObject *
api_____mypyc_lambda__0_run_obj_setup(PyTypeObject *type)
{
    mypy___api_____mypyc_lambda__0_run_objObject *self;
    self = (mypy___api_____mypyc_lambda__0_run_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = api_____mypyc_lambda__0_run_obj_vtable;
    self->vectorcall = CPyPy_api_____mypyc_lambda__0_run_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_api_____mypyc_lambda__0_run_obj(void)
{
    PyObject *self = api_____mypyc_lambda__0_run_obj_setup(CPyType_api_____mypyc_lambda__0_run_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *api___run_dmypy_env_setup(PyTypeObject *type);
PyObject *CPyDef_api___run_dmypy_env(void);

static PyObject *
api___run_dmypy_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_api___run_dmypy_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return api___run_dmypy_env_setup(type);
}

static int
api___run_dmypy_env_traverse(mypy___api___run_dmypy_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_args);
    Py_VISIT(self->_f);
    return 0;
}

static int
api___run_dmypy_env_clear(mypy___api___run_dmypy_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_f);
    return 0;
}

static void
api___run_dmypy_env_dealloc(mypy___api___run_dmypy_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, api___run_dmypy_env_dealloc)
    api___run_dmypy_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem api___run_dmypy_env_vtable[1];
static bool
CPyDef_api___run_dmypy_env_trait_vtable_setup(void)
{
    CPyVTableItem api___run_dmypy_env_vtable_scratch[] = {
        NULL
    };
    memcpy(api___run_dmypy_env_vtable, api___run_dmypy_env_vtable_scratch, sizeof(api___run_dmypy_env_vtable));
    return 1;
}

static PyMethodDef api___run_dmypy_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_api___run_dmypy_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "run_dmypy_env",
    .tp_new = api___run_dmypy_env_new,
    .tp_dealloc = (destructor)api___run_dmypy_env_dealloc,
    .tp_traverse = (traverseproc)api___run_dmypy_env_traverse,
    .tp_clear = (inquiry)api___run_dmypy_env_clear,
    .tp_methods = api___run_dmypy_env_methods,
    .tp_basicsize = sizeof(mypy___api___run_dmypy_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_api___run_dmypy_env_template = &CPyType_api___run_dmypy_env_template_;

static PyObject *
api___run_dmypy_env_setup(PyTypeObject *type)
{
    mypy___api___run_dmypy_envObject *self;
    self = (mypy___api___run_dmypy_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = api___run_dmypy_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_api___run_dmypy_env(void)
{
    PyObject *self = api___run_dmypy_env_setup(CPyType_api___run_dmypy_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__api___f_run_dmypy_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_api___f_run_dmypy_obj_____get__(self, instance, owner);
}
PyMemberDef api___f_run_dmypy_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___api___f_run_dmypy_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___api___f_run_dmypy_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *api___f_run_dmypy_obj_setup(PyTypeObject *type);
PyObject *CPyDef_api___f_run_dmypy_obj(void);

static PyObject *
api___f_run_dmypy_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_api___f_run_dmypy_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return api___f_run_dmypy_obj_setup(type);
}

static int
api___f_run_dmypy_obj_traverse(mypy___api___f_run_dmypy_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___api___f_run_dmypy_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___api___f_run_dmypy_objObject))));
    return 0;
}

static int
api___f_run_dmypy_obj_clear(mypy___api___f_run_dmypy_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___api___f_run_dmypy_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___api___f_run_dmypy_objObject))));
    return 0;
}

static void
api___f_run_dmypy_obj_dealloc(mypy___api___f_run_dmypy_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, api___f_run_dmypy_obj_dealloc)
    api___f_run_dmypy_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem api___f_run_dmypy_obj_vtable[2];
static bool
CPyDef_api___f_run_dmypy_obj_trait_vtable_setup(void)
{
    CPyVTableItem api___f_run_dmypy_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_api___f_run_dmypy_obj_____call__,
        (CPyVTableItem)CPyDef_api___f_run_dmypy_obj_____get__,
    };
    memcpy(api___f_run_dmypy_obj_vtable, api___f_run_dmypy_obj_vtable_scratch, sizeof(api___f_run_dmypy_obj_vtable));
    return 1;
}

static PyMethodDef api___f_run_dmypy_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_api___f_run_dmypy_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_api___f_run_dmypy_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_api___f_run_dmypy_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "f_run_dmypy_obj",
    .tp_new = api___f_run_dmypy_obj_new,
    .tp_dealloc = (destructor)api___f_run_dmypy_obj_dealloc,
    .tp_traverse = (traverseproc)api___f_run_dmypy_obj_traverse,
    .tp_clear = (inquiry)api___f_run_dmypy_obj_clear,
    .tp_methods = api___f_run_dmypy_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__api___f_run_dmypy_obj,
    .tp_members = api___f_run_dmypy_obj_members,
    .tp_basicsize = sizeof(mypy___api___f_run_dmypy_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___api___f_run_dmypy_objObject),
    .tp_weaklistoffset = sizeof(mypy___api___f_run_dmypy_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___api___f_run_dmypy_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_api___f_run_dmypy_obj_template = &CPyType_api___f_run_dmypy_obj_template_;

static PyObject *
api___f_run_dmypy_obj_setup(PyTypeObject *type)
{
    mypy___api___f_run_dmypy_objObject *self;
    self = (mypy___api___f_run_dmypy_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = api___f_run_dmypy_obj_vtable;
    self->vectorcall = CPyPy_api___f_run_dmypy_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_api___f_run_dmypy_obj(void)
{
    PyObject *self = api___f_run_dmypy_obj_setup(CPyType_api___f_run_dmypy_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef apimodule_methods[] = {
    {"_run", (PyCFunction)CPyPy_api____run, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"run", (PyCFunction)CPyPy_api___run, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"run_dmypy", (PyCFunction)CPyPy_api___run_dmypy, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef apimodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.api",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    apimodule_methods
};

PyObject *CPyInit_mypy___api(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___api_internal) {
        Py_INCREF(CPyModule_mypy___api_internal);
        return CPyModule_mypy___api_internal;
    }
    CPyModule_mypy___api_internal = PyModule_Create(&apimodule);
    if (unlikely(CPyModule_mypy___api_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___api_internal, "__name__");
    CPyStatic_api___globals = PyModule_GetDict(CPyModule_mypy___api_internal);
    if (unlikely(CPyStatic_api___globals == NULL))
        goto fail;
    CPyType_api___run_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_api___run_env_template, NULL, modname);
    if (unlikely(!CPyType_api___run_env))
        goto fail;
    CPyType_api_____mypyc_lambda__0_run_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_api_____mypyc_lambda__0_run_obj_template, NULL, modname);
    if (unlikely(!CPyType_api_____mypyc_lambda__0_run_obj))
        goto fail;
    CPyType_api___run_dmypy_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_api___run_dmypy_env_template, NULL, modname);
    if (unlikely(!CPyType_api___run_dmypy_env))
        goto fail;
    CPyType_api___f_run_dmypy_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_api___f_run_dmypy_obj_template, NULL, modname);
    if (unlikely(!CPyType_api___f_run_dmypy_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_api_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___api_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___api_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_api___run_env);
    Py_CLEAR(CPyType_api_____mypyc_lambda__0_run_obj);
    Py_CLEAR(CPyType_api___run_dmypy_env);
    Py_CLEAR(CPyType_api___f_run_dmypy_obj);
    return NULL;
}

tuple_T3OOI CPyDef_api____run(PyObject *cpy_r_main_wrapper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_stdout;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_stderr;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_exit_status;
    tuple_T3OOO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_system_exit;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T3OOI cpy_r_r38;
    tuple_T3OOI cpy_r_r39;
    cpy_r_r0 = CPyStatic_api___globals;
    cpy_r_r1 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 54, CPyStatic_api___globals);
        goto CPyL27;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 54, CPyStatic_api___globals);
        goto CPyL27;
    }
    cpy_r_stdout = cpy_r_r3;
    cpy_r_r4 = CPyStatic_api___globals;
    cpy_r_r5 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 55, CPyStatic_api___globals);
        goto CPyL28;
    }
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r6, 0, 0, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 55, CPyStatic_api___globals);
        goto CPyL28;
    }
    cpy_r_stderr = cpy_r_r7;
    PyObject *cpy_r_r8[2] = {cpy_r_stdout, cpy_r_stderr};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_main_wrapper, cpy_r_r9, 2, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 58, CPyStatic_api___globals);
        goto CPyL7;
    } else
        goto CPyL29;
CPyL6: ;
    cpy_r_exit_status = 0;
    goto CPyL22;
CPyL7: ;
    cpy_r_r11 = CPy_CatchError();
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[5]; /* 'SystemExit' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 60, CPyStatic_api___globals);
        goto CPyL30;
    }
    cpy_r_r15 = CPy_ExceptionMatches(cpy_r_r14);
    CPy_DecRef(cpy_r_r14);
    if (!cpy_r_r15) goto CPyL31;
    cpy_r_r16 = CPy_GetExcValue();
    cpy_r_system_exit = cpy_r_r16;
    cpy_r_r17 = CPyStatics[6]; /* 'code' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_system_exit, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 61, CPyStatic_api___globals);
        goto CPyL32;
    }
    cpy_r_r19 = (PyObject *)&PyLong_Type;
    cpy_r_r20 = PyObject_IsInstance(cpy_r_r18, cpy_r_r19);
    CPy_DecRef(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/api.py", "_run", 61, CPyStatic_api___globals);
        goto CPyL32;
    }
    cpy_r_r22 = cpy_r_r20;
    if (cpy_r_r22) {
        goto CPyL14;
    } else
        goto CPyL33;
CPyL12: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/api.py", "_run", 61, CPyStatic_api___globals);
        goto CPyL20;
    } else
        goto CPyL34;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r24 = CPyStatics[6]; /* 'code' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_system_exit, cpy_r_r24);
    CPy_DecRef(cpy_r_system_exit);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 62, CPyStatic_api___globals);
        goto CPyL30;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/api.py", "_run", 62, CPyStatic_api___globals);
        goto CPyL30;
    }
    cpy_r_exit_status = cpy_r_r26;
    goto CPyL19;
CPyL17: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL35;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r11);
    CPy_DecRef(cpy_r_r11.f0);
    CPy_DecRef(cpy_r_r11.f1);
    CPy_DecRef(cpy_r_r11.f2);
    goto CPyL22;
CPyL20: ;
    CPy_RestoreExcInfo(cpy_r_r11);
    CPy_DecRef(cpy_r_r11.f0);
    CPy_DecRef(cpy_r_r11.f1);
    CPy_DecRef(cpy_r_r11.f2);
    cpy_r_r27 = CPy_KeepPropagating();
    if (!cpy_r_r27) goto CPyL27;
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r28 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r29[1] = {cpy_r_stdout};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 64, CPyStatic_api___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_stdout);
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/api.py", "_run", 64, CPyStatic_api___globals, "str", cpy_r_r31);
        goto CPyL37;
    }
    cpy_r_r33 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r34[1] = {cpy_r_stderr};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r35, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "_run", 64, CPyStatic_api___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_stderr);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/api.py", "_run", 64, CPyStatic_api___globals, "str", cpy_r_r36);
        goto CPyL39;
    }
    cpy_r_r38.f0 = cpy_r_r32;
    cpy_r_r38.f1 = cpy_r_r37;
    cpy_r_r38.f2 = cpy_r_exit_status;
    CPy_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    CPyTagged_INCREF(cpy_r_r38.f2);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r37);
    CPyTagged_DECREF(cpy_r_exit_status);
    return cpy_r_r38;
CPyL27: ;
    tuple_T3OOI __tmp1 = { NULL, NULL, CPY_INT_TAG };
    cpy_r_r39 = __tmp1;
    return cpy_r_r39;
CPyL28: ;
    CPy_DecRef(cpy_r_stdout);
    goto CPyL27;
CPyL29: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL30: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL20;
CPyL31: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL17;
CPyL32: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_system_exit);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_system_exit);
    goto CPyL12;
CPyL34: ;
    CPy_DecRef(cpy_r_r11.f0);
    CPy_DecRef(cpy_r_r11.f1);
    CPy_DecRef(cpy_r_r11.f2);
    goto CPyL13;
CPyL35: ;
    CPy_DecRef(cpy_r_r11.f0);
    CPy_DecRef(cpy_r_r11.f1);
    CPy_DecRef(cpy_r_r11.f2);
    goto CPyL18;
CPyL36: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPyTagged_DecRef(cpy_r_exit_status);
    goto CPyL27;
CPyL37: ;
    CPy_DecRef(cpy_r_stderr);
    CPyTagged_DecRef(cpy_r_exit_status);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_stderr);
    CPyTagged_DecRef(cpy_r_exit_status);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_exit_status);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
}

PyObject *CPyPy_api____run(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"main_wrapper", 0};
    static CPyArg_Parser parser = {"O:_run", kwlist, 0};
    PyObject *obj_main_wrapper;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_main_wrapper)) {
        return NULL;
    }
    PyObject *arg_main_wrapper = obj_main_wrapper;
    tuple_T3OOI retval = CPyDef_api____run(arg_main_wrapper);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp2);
    PyObject *__tmp3 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp3);
    PyObject *__tmp4 = CPyTagged_StealAsObject(retval.f2);
    PyTuple_SET_ITEM(retbox, 2, __tmp4);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/api.py", "_run", 53, CPyStatic_api___globals);
    return NULL;
}

PyObject *CPyDef_api_____mypyc_lambda__0_run_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_api_____mypyc_lambda__0_run_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_api_____mypyc_lambda__0_run_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/api.py", "__get__", -1, CPyStatic_api___globals);
    return NULL;
}

char CPyDef_api_____mypyc_lambda__0_run_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___api_____mypyc_lambda__0_run_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/api.py", "<lambda>", "__mypyc_lambda__0_run_obj", "__mypyc_env__", 72, CPyStatic_api___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___api___run_envObject *)cpy_r_r0)->_args;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'args' of 'run_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "<lambda>", 72, CPyStatic_api___globals);
        goto CPyL4;
    }
CPyL2: ;
    cpy_r_r2 = CPyDef_mypy___main___main(cpy_r_r1, cpy_r_stdout, cpy_r_stderr, 1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/api.py", "<lambda>", 72, CPyStatic_api___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_api_____mypyc_lambda__0_run_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"stdout", "stderr", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_stdout;
    PyObject *obj_stderr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_stdout, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_stdout = obj_stdout;
    PyObject *arg_stderr = obj_stderr;
    char retval = CPyDef_api_____mypyc_lambda__0_run_obj_____call__(arg___mypyc_self__, arg_stdout, arg_stderr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/api.py", "<lambda>", 72, CPyStatic_api___globals);
    return NULL;
}

tuple_T3OOI CPyDef_api___run(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    tuple_T3OOI cpy_r_r8;
    tuple_T3OOI cpy_r_r9;
    cpy_r_r0 = CPyDef_api___run_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run", 67, CPyStatic_api___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_args);
    if (((mypy___api___run_envObject *)cpy_r_r0)->_args != NULL) {
        CPy_DECREF(((mypy___api___run_envObject *)cpy_r_r0)->_args);
    }
    ((mypy___api___run_envObject *)cpy_r_r0)->_args = cpy_r_args;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/api.py", "run", 67, CPyStatic_api___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyStatics[9064]; /* ('main',) */
    cpy_r_r3 = CPyStatics[9]; /* 'mypy.main' */
    cpy_r_r4 = CPyStatic_api___globals;
    cpy_r_r5 = CPyImport_ImportFromMany(cpy_r_r3, cpy_r_r2, cpy_r_r2, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run", 69, CPyStatic_api___globals);
        goto CPyL8;
    }
    CPyModule_mypy___main = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___main);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_api_____mypyc_lambda__0_run_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run", 72, CPyStatic_api___globals);
        goto CPyL8;
    }
    if (((mypy___api_____mypyc_lambda__0_run_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___api_____mypyc_lambda__0_run_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((mypy___api_____mypyc_lambda__0_run_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/api.py", "run", 72, CPyStatic_api___globals);
        goto CPyL9;
    }
    cpy_r_r8 = CPyDef_api____run(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run", 71, CPyStatic_api___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL7: ;
    tuple_T3OOI __tmp5 = { NULL, NULL, CPY_INT_TAG };
    cpy_r_r9 = __tmp5;
    return cpy_r_r9;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
}

PyObject *CPyPy_api___run(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:run", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    tuple_T3OOI retval = CPyDef_api___run(arg_args);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp6 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp6);
    PyObject *__tmp7 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp7);
    PyObject *__tmp8 = CPyTagged_StealAsObject(retval.f2);
    PyTuple_SET_ITEM(retbox, 2, __tmp8);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/api.py", "run", 67, CPyStatic_api___globals);
    return NULL;
}

PyObject *CPyDef_api___f_run_dmypy_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_api___f_run_dmypy_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_api___f_run_dmypy_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/api.py", "__get__", -1, CPyStatic_api___globals);
    return NULL;
}

char CPyDef_api___f_run_dmypy_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_old_stdout;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_old_stderr;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = ((mypy___api___f_run_dmypy_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/api.py", "f", "f_run_dmypy_obj", "__mypyc_env__", 83, CPyStatic_api___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_f;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/api.py", "f", "run_dmypy_env", "f", -1, CPyStatic_api___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_f = cpy_r_r1;
    CPy_DECREF(cpy_r_f);
    cpy_r_r2 = CPyModule_sys;
    cpy_r_r3 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "f", 84, CPyStatic_api___globals);
        goto CPyL22;
    }
    cpy_r_old_stdout = cpy_r_r4;
    cpy_r_r5 = CPyModule_sys;
    cpy_r_r6 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "f", 85, CPyStatic_api___globals);
        goto CPyL23;
    }
    cpy_r_old_stderr = cpy_r_r7;
    cpy_r_r8 = CPyModule_sys;
    cpy_r_r9 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r10 = PyObject_SetAttr(cpy_r_r8, cpy_r_r9, cpy_r_stdout);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/api.py", "f", 87, CPyStatic_api___globals);
        goto CPyL24;
    }
    cpy_r_r12 = CPyModule_sys;
    cpy_r_r13 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r14 = PyObject_SetAttr(cpy_r_r12, cpy_r_r13, cpy_r_stderr);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/api.py", "f", 88, CPyStatic_api___globals);
        goto CPyL24;
    }
    cpy_r_r16 = ((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_args;
    if (unlikely(cpy_r_r16 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'args' of 'run_dmypy_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "f", 89, CPyStatic_api___globals);
        goto CPyL10;
    }
CPyL8: ;
    cpy_r_r17 = CPyDef_client___main(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypy/api.py", "f", 89, CPyStatic_api___globals);
        goto CPyL10;
    }
    tuple_T3OOO __tmp9 = { NULL, NULL, NULL };
    cpy_r_r18 = __tmp9;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL11;
CPyL10: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r19 = cpy_r_r20;
CPyL11: ;
    cpy_r_r21 = CPyModule_sys;
    cpy_r_r22 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r23 = PyObject_SetAttr(cpy_r_r21, cpy_r_r22, cpy_r_old_stdout);
    CPy_DECREF(cpy_r_old_stdout);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/api.py", "f", 91, CPyStatic_api___globals);
        goto CPyL25;
    }
    cpy_r_r25 = CPyModule_sys;
    cpy_r_r26 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r27 = PyObject_SetAttr(cpy_r_r25, cpy_r_r26, cpy_r_old_stderr);
    CPy_DECREF(cpy_r_old_stderr);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/api.py", "f", 92, CPyStatic_api___globals);
        goto CPyL16;
    }
    if (cpy_r_r19.f0 == NULL) goto CPyL20;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL26;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    if (cpy_r_r19.f0 == NULL) goto CPyL18;
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_XDECREF(cpy_r_r19.f0);
    CPy_XDECREF(cpy_r_r19.f1);
    CPy_XDECREF(cpy_r_r19.f2);
CPyL18: ;
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL21;
    CPy_Unreachable();
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_old_stdout);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL25: ;
    CPy_DecRef(cpy_r_old_stderr);
    goto CPyL16;
CPyL26: ;
    CPy_XDECREF(cpy_r_r19.f0);
    CPy_XDECREF(cpy_r_r19.f1);
    CPy_XDECREF(cpy_r_r19.f2);
    goto CPyL15;
}

PyObject *CPyPy_api___f_run_dmypy_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"stdout", "stderr", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_stdout;
    PyObject *obj_stderr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_stdout, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_stdout = obj_stdout;
    PyObject *arg_stderr = obj_stderr;
    char retval = CPyDef_api___f_run_dmypy_obj_____call__(arg___mypyc_self__, arg_stdout, arg_stderr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/api.py", "f", 83, CPyStatic_api___globals);
    return NULL;
}

tuple_T3OOI CPyDef_api___run_dmypy(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOI cpy_r_r10;
    tuple_T3OOI cpy_r_r11;
    cpy_r_r0 = CPyDef_api___run_dmypy_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 76, CPyStatic_api___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_args);
    if (((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_args != NULL) {
        CPy_DECREF(((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_args);
    }
    ((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_args = cpy_r_args;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 76, CPyStatic_api___globals);
        goto CPyL10;
    }
    cpy_r_r2 = CPyStatics[9064]; /* ('main',) */
    cpy_r_r3 = CPyStatics[12]; /* 'mypy.dmypy.client' */
    cpy_r_r4 = CPyStatic_api___globals;
    cpy_r_r5 = CPyImport_ImportFromMany(cpy_r_r3, cpy_r_r2, cpy_r_r2, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 77, CPyStatic_api___globals);
        goto CPyL10;
    }
    CPyModule_mypy___dmypy___client = cpy_r_r5;
    CPy_INCREF(CPyModule_mypy___dmypy___client);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_api___f_run_dmypy_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 83, CPyStatic_api___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___api___f_run_dmypy_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___api___f_run_dmypy_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((mypy___api___f_run_dmypy_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 83, CPyStatic_api___globals);
        goto CPyL11;
    }
    if (((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_f != NULL) {
        CPy_DECREF(((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_f);
    }
    ((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_f = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 83, CPyStatic_api___globals);
        goto CPyL10;
    }
    cpy_r_r9 = ((mypy___api___run_dmypy_envObject *)cpy_r_r0)->_f;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'f' of 'run_dmypy_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 94, CPyStatic_api___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r10 = CPyDef_api____run(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "run_dmypy", 94, CPyStatic_api___globals);
        goto CPyL9;
    }
    return cpy_r_r10;
CPyL9: ;
    tuple_T3OOI __tmp10 = { NULL, NULL, CPY_INT_TAG };
    cpy_r_r11 = __tmp10;
    return cpy_r_r11;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_api___run_dmypy(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:run_dmypy", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    tuple_T3OOI retval = CPyDef_api___run_dmypy(arg_args);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp11 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp11);
    PyObject *__tmp12 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp12);
    PyObject *__tmp13 = CPyTagged_StealAsObject(retval.f2);
    PyTuple_SET_ITEM(retbox, 2, __tmp13);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/api.py", "run_dmypy", 76, CPyStatic_api___globals);
    return NULL;
}

char CPyDef_api_____top_level__(void) {
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
    char cpy_r_r27;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "<module>", -1, CPyStatic_api___globals);
        goto CPyL8;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_api___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "<module>", 46, CPyStatic_api___globals);
        goto CPyL8;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {48};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9067]; /* (('sys', 'sys', 'sys'),) */
    cpy_r_r15 = CPyStatic_api___globals;
    cpy_r_r16 = CPyStatics[16]; /* 'mypy/api.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL8;
    cpy_r_r19 = CPyStatics[9068]; /* ('StringIO',) */
    cpy_r_r20 = CPyStatics[18]; /* 'io' */
    cpy_r_r21 = CPyStatic_api___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "<module>", 49, CPyStatic_api___globals);
        goto CPyL8;
    }
    CPyModule_io = cpy_r_r22;
    CPy_INCREF(CPyModule_io);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9069]; /* ('Callable', 'TextIO') */
    cpy_r_r24 = CPyStatics[21]; /* 'typing' */
    cpy_r_r25 = CPyStatic_api___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/api.py", "<module>", 50, CPyStatic_api___globals);
        goto CPyL8;
    }
    CPyModule_typing = cpy_r_r26;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r26);
    return 1;
CPyL8: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
}
