#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
client___AugmentedHelpFormatter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef client___AugmentedHelpFormatter_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *client___AugmentedHelpFormatter_setup(PyTypeObject *type);
PyObject *CPyDef_client___AugmentedHelpFormatter(PyObject *cpy_r_prog);

static PyObject *
client___AugmentedHelpFormatter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_client___AugmentedHelpFormatter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = client___AugmentedHelpFormatter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_client___AugmentedHelpFormatter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
client___AugmentedHelpFormatter_traverse(mypy___dmypy___client___AugmentedHelpFormatterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject))));
    return 0;
}

static int
client___AugmentedHelpFormatter_clear(mypy___dmypy___client___AugmentedHelpFormatterObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject))));
    return 0;
}

static void
client___AugmentedHelpFormatter_dealloc(mypy___dmypy___client___AugmentedHelpFormatterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, client___AugmentedHelpFormatter_dealloc)
    client___AugmentedHelpFormatter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem client___AugmentedHelpFormatter_vtable[1];
static bool
CPyDef_client___AugmentedHelpFormatter_trait_vtable_setup(void)
{
    CPyVTableItem client___AugmentedHelpFormatter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_client___AugmentedHelpFormatter_____init__,
    };
    memcpy(client___AugmentedHelpFormatter_vtable, client___AugmentedHelpFormatter_vtable_scratch, sizeof(client___AugmentedHelpFormatter_vtable));
    return 1;
}


static PyGetSetDef client___AugmentedHelpFormatter_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef client___AugmentedHelpFormatter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_client___AugmentedHelpFormatter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_client___AugmentedHelpFormatter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AugmentedHelpFormatter",
    .tp_new = client___AugmentedHelpFormatter_new,
    .tp_dealloc = (destructor)client___AugmentedHelpFormatter_dealloc,
    .tp_traverse = (traverseproc)client___AugmentedHelpFormatter_traverse,
    .tp_clear = (inquiry)client___AugmentedHelpFormatter_clear,
    .tp_getset = client___AugmentedHelpFormatter_getseters,
    .tp_methods = client___AugmentedHelpFormatter_methods,
    .tp_init = client___AugmentedHelpFormatter_init,
    .tp_members = client___AugmentedHelpFormatter_members,
    .tp_basicsize = sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject),
    .tp_weaklistoffset = sizeof(mypy___dmypy___client___AugmentedHelpFormatterObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_client___AugmentedHelpFormatter_template = &CPyType_client___AugmentedHelpFormatter_template_;

static PyObject *
client___AugmentedHelpFormatter_setup(PyTypeObject *type)
{
    mypy___dmypy___client___AugmentedHelpFormatterObject *self;
    self = (mypy___dmypy___client___AugmentedHelpFormatterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = client___AugmentedHelpFormatter_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_client___AugmentedHelpFormatter(PyObject *cpy_r_prog)
{
    PyObject *self = client___AugmentedHelpFormatter_setup(CPyType_client___AugmentedHelpFormatter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_client___AugmentedHelpFormatter_____init__(self, cpy_r_prog);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}


PyMemberDef client___BadStatus_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef client___BadStatus_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef client___BadStatus_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_client___BadStatus_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "BadStatus",
    .tp_getset = client___BadStatus_getseters,
    .tp_methods = client___BadStatus_methods,
    .tp_members = client___BadStatus_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_client___BadStatus_template = &CPyType_client___BadStatus_template_;


static PyObject *client___action_env_setup(PyTypeObject *type);
PyObject *CPyDef_client___action_env(void);

static PyObject *
client___action_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_client___action_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return client___action_env_setup(type);
}

static int
client___action_env_traverse(mypy___dmypy___client___action_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_subparser);
    Py_VISIT(self->_register);
    return 0;
}

static int
client___action_env_clear(mypy___dmypy___client___action_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_subparser);
    Py_CLEAR(self->_register);
    return 0;
}

static void
client___action_env_dealloc(mypy___dmypy___client___action_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, client___action_env_dealloc)
    client___action_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem client___action_env_vtable[1];
static bool
CPyDef_client___action_env_trait_vtable_setup(void)
{
    CPyVTableItem client___action_env_vtable_scratch[] = {
        NULL
    };
    memcpy(client___action_env_vtable, client___action_env_vtable_scratch, sizeof(client___action_env_vtable));
    return 1;
}

static PyMethodDef client___action_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_client___action_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "action_env",
    .tp_new = client___action_env_new,
    .tp_dealloc = (destructor)client___action_env_dealloc,
    .tp_traverse = (traverseproc)client___action_env_traverse,
    .tp_clear = (inquiry)client___action_env_clear,
    .tp_methods = client___action_env_methods,
    .tp_basicsize = sizeof(mypy___dmypy___client___action_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_client___action_env_template = &CPyType_client___action_env_template_;

static PyObject *
client___action_env_setup(PyTypeObject *type)
{
    mypy___dmypy___client___action_envObject *self;
    self = (mypy___dmypy___client___action_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = client___action_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_client___action_env(void)
{
    PyObject *self = client___action_env_setup(CPyType_client___action_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__client___register_action_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_client___register_action_obj_____get__(self, instance, owner);
}
PyMemberDef client___register_action_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___dmypy___client___register_action_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___dmypy___client___register_action_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *client___register_action_obj_setup(PyTypeObject *type);
PyObject *CPyDef_client___register_action_obj(void);

static PyObject *
client___register_action_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_client___register_action_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return client___register_action_obj_setup(type);
}

static int
client___register_action_obj_traverse(mypy___dmypy___client___register_action_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___dmypy___client___register_action_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy___client___register_action_objObject))));
    return 0;
}

static int
client___register_action_obj_clear(mypy___dmypy___client___register_action_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___dmypy___client___register_action_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___dmypy___client___register_action_objObject))));
    return 0;
}

static void
client___register_action_obj_dealloc(mypy___dmypy___client___register_action_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, client___register_action_obj_dealloc)
    client___register_action_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem client___register_action_obj_vtable[2];
static bool
CPyDef_client___register_action_obj_trait_vtable_setup(void)
{
    CPyVTableItem client___register_action_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_client___register_action_obj_____call__,
        (CPyVTableItem)CPyDef_client___register_action_obj_____get__,
    };
    memcpy(client___register_action_obj_vtable, client___register_action_obj_vtable_scratch, sizeof(client___register_action_obj_vtable));
    return 1;
}

static PyMethodDef client___register_action_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_client___register_action_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_client___register_action_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_client___register_action_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "register_action_obj",
    .tp_new = client___register_action_obj_new,
    .tp_dealloc = (destructor)client___register_action_obj_dealloc,
    .tp_traverse = (traverseproc)client___register_action_obj_traverse,
    .tp_clear = (inquiry)client___register_action_obj_clear,
    .tp_methods = client___register_action_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__client___register_action_obj,
    .tp_members = client___register_action_obj_members,
    .tp_basicsize = sizeof(mypy___dmypy___client___register_action_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___dmypy___client___register_action_objObject),
    .tp_weaklistoffset = sizeof(mypy___dmypy___client___register_action_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___dmypy___client___register_action_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_client___register_action_obj_template = &CPyType_client___register_action_obj_template_;

static PyObject *
client___register_action_obj_setup(PyTypeObject *type)
{
    mypy___dmypy___client___register_action_objObject *self;
    self = (mypy___dmypy___client___register_action_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = client___register_action_obj_vtable;
    self->vectorcall = CPyPy_client___register_action_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_client___register_action_obj(void)
{
    PyObject *self = client___register_action_obj_setup(CPyType_client___register_action_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef clientmodule_methods[] = {
    {"main", (PyCFunction)CPyPy_client___main, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"fail", (PyCFunction)CPyPy_client___fail, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"action", (PyCFunction)CPyPy_client___action, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_start", (PyCFunction)CPyPy_client___do_start, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_restart", (PyCFunction)CPyPy_client___do_restart, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"restart_server", (PyCFunction)CPyPy_client___restart_server, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"start_server", (PyCFunction)CPyPy_client___start_server, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"wait_for_server", (PyCFunction)CPyPy_client___wait_for_server, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_run", (PyCFunction)CPyPy_client___do_run, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_status", (PyCFunction)CPyPy_client___do_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_stop", (PyCFunction)CPyPy_client___do_stop, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_kill", (PyCFunction)CPyPy_client___do_kill, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_check", (PyCFunction)CPyPy_client___do_check, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_recheck", (PyCFunction)CPyPy_client___do_recheck, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_suggest", (PyCFunction)CPyPy_client___do_suggest, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_inspect", (PyCFunction)CPyPy_client___do_inspect, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_output", (PyCFunction)CPyPy_client___check_output, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"show_stats", (PyCFunction)CPyPy_client___show_stats, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_hang", (PyCFunction)CPyPy_client___do_hang, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_daemon", (PyCFunction)CPyPy_client___do_daemon, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"do_help", (PyCFunction)CPyPy_client___do_help, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"request", (PyCFunction)CPyPy_client___request, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_status", (PyCFunction)CPyPy_client___get_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_status", (PyCFunction)CPyPy_client___check_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"read_status", (PyCFunction)CPyPy_client___read_status, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_running", (PyCFunction)CPyPy_client___is_running, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"console_entry", (PyCFunction)CPyPy_client___console_entry, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef clientmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.dmypy.client",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    clientmodule_methods
};

PyObject *CPyInit_mypy___dmypy___client(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___dmypy___client_internal) {
        Py_INCREF(CPyModule_mypy___dmypy___client_internal);
        return CPyModule_mypy___dmypy___client_internal;
    }
    CPyModule_mypy___dmypy___client_internal = PyModule_Create(&clientmodule);
    if (unlikely(CPyModule_mypy___dmypy___client_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___dmypy___client_internal, "__name__");
    CPyStatic_client___globals = PyModule_GetDict(CPyModule_mypy___dmypy___client_internal);
    if (unlikely(CPyStatic_client___globals == NULL))
        goto fail;
    CPyType_client___action_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_client___action_env_template, NULL, modname);
    if (unlikely(!CPyType_client___action_env))
        goto fail;
    CPyType_client___register_action_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_client___register_action_obj_template, NULL, modname);
    if (unlikely(!CPyType_client___register_action_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_client_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___dmypy___client_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___dmypy___client_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_client___AugmentedHelpFormatter);
    Py_CLEAR(CPyType_client___BadStatus);
    Py_CLEAR(CPyType_client___action_env);
    Py_CLEAR(CPyType_client___register_action_obj);
    return NULL;
}

char CPyDef_client___AugmentedHelpFormatter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_prog) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[1670]; /* 'super' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "__init__", 31, CPyStatic_client___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (PyObject *)CPyType_client___AugmentedHelpFormatter;
    PyObject *cpy_r_r4[2] = {cpy_r_r3, cpy_r_self};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "__init__", 31, CPyStatic_client___globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyStatics[288]; /* '__init__' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "__init__", 31, CPyStatic_client___globals);
        goto CPyL5;
    }
    cpy_r_r9 = CPyStatics[9020]; /* 30 */
    PyObject *cpy_r_r10[2] = {cpy_r_prog, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[9302]; /* ('prog', 'max_help_position') */
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r11, 0, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "__init__", 31, CPyStatic_client___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL4: ;
    return 1;
CPyL5: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL6: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL4;
}

PyObject *CPyPy_client___AugmentedHelpFormatter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"prog", 0};
    PyObject *obj_prog;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_prog)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_client___AugmentedHelpFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.dmypy.client.AugmentedHelpFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_prog;
    if (likely(PyUnicode_Check(obj_prog)))
        arg_prog = obj_prog;
    else {
        CPy_TypeError("str", obj_prog); 
        goto fail;
    }
    char retval = CPyDef_client___AugmentedHelpFormatter_____init__(arg_self, arg_prog);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "__init__", 30, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___main(PyObject *cpy_r_argv) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    cpy_r_r0 = CPyStatics[1673]; /* 'dmypy' */
    cpy_r_r1 = CPyDef_mypy___util___check_python_version(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 269, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r2 = CPyStatic_client___globals;
    cpy_r_r3 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 270, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r5 = CPyStatics[1675]; /* 'parse_args' */
    PyObject *cpy_r_r6[2] = {cpy_r_r4, cpy_r_argv};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 270, CPyStatic_client___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r4);
    cpy_r_args = cpy_r_r8;
    cpy_r_r9 = CPyStatics[1676]; /* 'action' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_args, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 271, CPyStatic_client___globals);
        goto CPyL32;
    }
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 271, CPyStatic_client___globals);
        goto CPyL32;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) {
        goto CPyL9;
    } else
        goto CPyL33;
CPyL6: ;
    cpy_r_r14 = CPyStatic_client___globals;
    cpy_r_r15 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 272, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r17 = CPyStatics[1677]; /* 'print_usage' */
    PyObject *cpy_r_r18[1] = {cpy_r_r16};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 272, CPyStatic_client___globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL8: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL29;
CPyL9: ;
    cpy_r_r21 = CPyStatics[1676]; /* 'action' */
    PyObject *cpy_r_r22[2] = {cpy_r_args, cpy_r_args};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 275, CPyStatic_client___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL10: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL29;
CPyL11: ;
    cpy_r_r25 = CPy_CatchError();
    cpy_r_r26 = (PyObject *)CPyType_client___BadStatus;
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_client___BadStatus))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "main", 276, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r28);
        goto CPyL27;
    }
    cpy_r_err = cpy_r_r29;
    cpy_r_r30 = CPyStatics[1678]; /* 'args' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_err, cpy_r_r30);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 277, CPyStatic_client___globals);
        goto CPyL27;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "main", 277, CPyStatic_client___globals, "tuple", cpy_r_r31);
        goto CPyL27;
    }
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_r32, 0);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 277, CPyStatic_client___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "main", 277, CPyStatic_client___globals, "str", cpy_r_r33);
        goto CPyL27;
    }
    cpy_r_r35 = CPyDef_client___fail(cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 277, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL38;
CPyL18: ;
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 278, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r39 = CPy_ExceptionMatches(cpy_r_r38);
    CPy_DecRef(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL24;
    cpy_r_r40 = CPyModule_traceback;
    cpy_r_r41 = CPyStatics[1679]; /* 'print_exc' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 281, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r42, 0, 0, 0);
    CPy_DecRef(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 281, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL39;
CPyL22: ;
    cpy_r_r44 = CPyModule_sys;
    cpy_r_r45 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 282, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r47 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r48[1] = {cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r49, 1, 0);
    CPy_DecRef(cpy_r_r46);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "main", 282, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL40;
CPyL24: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL41;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    goto CPyL29;
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r25);
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    cpy_r_r51 = CPy_KeepPropagating();
    if (!cpy_r_r51) goto CPyL30;
    CPy_Unreachable();
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r52 = 2;
    return cpy_r_r52;
CPyL31: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL30;
CPyL33: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL6;
CPyL34: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL8;
CPyL36: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL11;
CPyL37: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL10;
CPyL38: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL26;
CPyL39: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL22;
CPyL40: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL26;
CPyL41: ;
    CPy_DecRef(cpy_r_r25.f0);
    CPy_DecRef(cpy_r_r25.f1);
    CPy_DecRef(cpy_r_r25.f2);
    goto CPyL25;
}

PyObject *CPyPy_client___main(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"argv", 0};
    static CPyArg_Parser parser = {"O:main", kwlist, 0};
    PyObject *obj_argv;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_argv)) {
        return NULL;
    }
    PyObject *arg_argv;
    if (likely(PyList_Check(obj_argv)))
        arg_argv = obj_argv;
    else {
        CPy_TypeError("list", obj_argv); 
        goto fail;
    }
    char retval = CPyDef_client___main(arg_argv);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "main", 267, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___fail(PyObject *cpy_r_msg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "fail", 286, CPyStatic_client___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[190]; /* 'print' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "fail", 286, CPyStatic_client___globals);
        goto CPyL7;
    }
    PyObject *cpy_r_r6[2] = {cpy_r_msg, cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "fail", 286, CPyStatic_client___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL3: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r10 = CPyModule_sys;
    cpy_r_r11 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "fail", 287, CPyStatic_client___globals);
        goto CPyL6;
    }
    cpy_r_r13 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r14[1] = {cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "fail", 287, CPyStatic_client___globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL6: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL8: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL3;
CPyL9: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL5;
}

PyObject *CPyPy_client___fail(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"msg", 0};
    static CPyArg_Parser parser = {"O:fail", kwlist, 0};
    PyObject *obj_msg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *retval = CPyDef_client___fail(arg_msg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "fail", 285, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___register_action_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_client___register_action_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_client___register_action_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "__get__", -1, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___register_action_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_register;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___dmypy___client___register_action_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/dmypy/client.py", "register", "register_action_obj", "__mypyc_env__", 296, CPyStatic_client___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_register;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/dmypy/client.py", "register", "action_env", "register", -1, CPyStatic_client___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_register = cpy_r_r1;
    CPy_DECREF(cpy_r_register);
    cpy_r_r2 = ((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_subparser;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'subparser' of 'action_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "register", 297, CPyStatic_client___globals);
        goto CPyL5;
    }
CPyL3: ;
    cpy_r_r3 = CPyStatics[1681]; /* 'set_defaults' */
    PyObject *cpy_r_r4[2] = {cpy_r_r2, cpy_r_func};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[9303]; /* ('action',) */
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "register", 297, CPyStatic_client___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    CPy_INCREF(cpy_r_func);
    return cpy_r_func;
CPyL5: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
CPyL8: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy_client___register_action_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_func = obj_func;
    PyObject *retval = CPyDef_client___register_action_obj_____call__(arg___mypyc_self__, arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "register", 296, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___action(PyObject *cpy_r_subparser) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_client___action_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 293, CPyStatic_client___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_subparser);
    if (((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_subparser != NULL) {
        CPy_DECREF(((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_subparser);
    }
    ((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_subparser = cpy_r_subparser;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 293, CPyStatic_client___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_client___register_action_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 296, CPyStatic_client___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___dmypy___client___register_action_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___dmypy___client___register_action_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___dmypy___client___register_action_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 296, CPyStatic_client___globals);
        goto CPyL9;
    }
    if (((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_register != NULL) {
        CPy_DECREF(((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_register);
    }
    ((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_register = cpy_r_r2;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 296, CPyStatic_client___globals);
        goto CPyL8;
    }
    cpy_r_r5 = ((mypy___dmypy___client___action_envObject *)cpy_r_r0)->_register;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'register' of 'action_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "action", 300, CPyStatic_client___globals);
        goto CPyL7;
    }
CPyL6: ;
    return cpy_r_r5;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_client___action(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"subparser", 0};
    static CPyArg_Parser parser = {"O:action", kwlist, 0};
    PyObject *obj_subparser;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_subparser)) {
        return NULL;
    }
    PyObject *arg_subparser = obj_subparser;
    PyObject *retval = CPyDef_client___action(arg_subparser);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "action", 293, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_start(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2IO cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_start", 319, CPyStatic_client___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_start", 319, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = CPyDef_client___get_status(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_start", 319, CPyStatic_client___globals);
    } else
        goto CPyL14;
CPyL4: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = (PyObject *)CPyType_client___BadStatus;
    cpy_r_r6 = CPy_ExceptionMatches(cpy_r_r5);
    if (cpy_r_r6) goto CPyL7;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL15;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL11;
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r7 = CPy_KeepPropagating();
    if (!cpy_r_r7) goto CPyL13;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r8 = CPyStatics[1683]; /* 'Daemon is still alive' */
    cpy_r_r9 = CPyDef_client___fail(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_start", 324, CPyStatic_client___globals);
        goto CPyL13;
    } else
        goto CPyL16;
CPyL11: ;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_client___start_server(cpy_r_args, cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_start", 325, CPyStatic_client___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL14: ;
    CPyTagged_DECREF(cpy_r_r3.f0);
    CPy_DECREF(cpy_r_r3.f1);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL6;
CPyL16: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL11;
}

PyObject *CPyPy_client___do_start(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_start", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_start(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_start", 307, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_restart(PyObject *cpy_r_args) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_client___restart_server(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_restart", 335, CPyStatic_client___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_client___do_restart(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_restart", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_restart(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_restart", 329, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___restart_server(PyObject *cpy_r_args, char cpy_r_allow_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    if (cpy_r_allow_sources != 2) goto CPyL2;
    cpy_r_allow_sources = 0;
CPyL2: ;
    cpy_r_r0 = CPyStatic_client___globals;
    cpy_r_r1 = CPyStatics[1684]; /* 'do_stop' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "restart_server", 341, CPyStatic_client___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_args};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "restart_server", 341, CPyStatic_client___globals);
    } else
        goto CPyL13;
CPyL4: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = (PyObject *)CPyType_client___BadStatus;
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    if (cpy_r_r8) goto CPyL7;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL14;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL10;
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    cpy_r_r9 = CPy_KeepPropagating();
    if (!cpy_r_r9) goto CPyL12;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r10 = CPyDef_client___start_server(cpy_r_args, cpy_r_allow_sources);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "restart_server", 345, CPyStatic_client___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL13: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r6.f0);
    CPy_DecRef(cpy_r_r6.f1);
    CPy_DecRef(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_client___restart_server(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "allow_sources", 0};
    static CPyArg_Parser parser = {"O|O:restart_server", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_allow_sources = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_allow_sources)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char arg_allow_sources;
    if (obj_allow_sources == NULL) {
        arg_allow_sources = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_sources))) {
        CPy_TypeError("bool", obj_allow_sources); goto fail;
    } else
        arg_allow_sources = obj_allow_sources == Py_True;
    char retval = CPyDef_client___restart_server(arg_args, arg_allow_sources);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "restart_server", 338, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___start_server(PyObject *cpy_r_args, char cpy_r_allow_sources) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_start_options;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    if (cpy_r_allow_sources != 2) goto CPyL2;
    cpy_r_allow_sources = 0;
CPyL2: ;
    cpy_r_r0 = CPyStatics[9304]; /* ('daemonize', 'process_start_options') */
    cpy_r_r1 = CPyStatics[1687]; /* 'mypy.dmypy_server' */
    cpy_r_r2 = CPyStatic_client___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 351, CPyStatic_client___globals);
        goto CPyL20;
    }
    CPyModule_mypy___dmypy_server = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___dmypy_server);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_args, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 353, CPyStatic_client___globals);
        goto CPyL20;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "start_server", 353, CPyStatic_client___globals, "list", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = CPyDef_dmypy_server___process_start_options(cpy_r_r6, cpy_r_allow_sources);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 353, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_start_options = cpy_r_r7;
    cpy_r_r8 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_args, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals);
        goto CPyL21;
    }
    cpy_r_r10 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_args, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals);
        goto CPyL22;
    }
    cpy_r_r12 = CPyStatics[1689]; /* 'log_file' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_args, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r14 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals, "str", cpy_r_r9);
        goto CPyL24;
    }
    if (PyLong_Check(cpy_r_r11))
        cpy_r_r15 = cpy_r_r11;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL1867;
    if (cpy_r_r11 == Py_None)
        cpy_r_r15 = cpy_r_r11;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL1867;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals, "int or None", cpy_r_r11);
    goto CPyL25;
__LL1867: ;
    if (PyUnicode_Check(cpy_r_r13))
        cpy_r_r16 = cpy_r_r13;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL1868;
    if (cpy_r_r13 == Py_None)
        cpy_r_r16 = cpy_r_r13;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL1868;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals, "str or None", cpy_r_r13);
    goto CPyL26;
__LL1868: ;
    cpy_r_r17 = CPyDef_dmypy_server___daemonize(cpy_r_start_options, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_start_options);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 354, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_r18 = cpy_r_r17 != 0;
    CPyTagged_DECREF(cpy_r_r17);
    if (!cpy_r_r18) goto CPyL16;
    cpy_r_r19 = CPyModule_sys;
    cpy_r_r20 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 355, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_r22 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r23[1] = {cpy_r_r22};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 355, CPyStatic_client___globals);
        goto CPyL20;
    } else
        goto CPyL27;
CPyL16: ;
    cpy_r_r26 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_args, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 356, CPyStatic_client___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "start_server", 356, CPyStatic_client___globals, "str", cpy_r_r27);
        goto CPyL20;
    }
    cpy_r_r29 = CPyDef_client___wait_for_server(cpy_r_r28, 0.0, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 356, CPyStatic_client___globals);
        goto CPyL20;
    }
    return 1;
CPyL20: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL21: ;
    CPy_DecRef(cpy_r_start_options);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_start_options);
    CPy_DecRef(cpy_r_r9);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_start_options);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL20;
CPyL24: ;
    CPy_DecRef(cpy_r_start_options);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_start_options);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_start_options);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL27: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL16;
}

PyObject *CPyPy_client___start_server(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "allow_sources", 0};
    static CPyArg_Parser parser = {"O|O:start_server", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_allow_sources = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_allow_sources)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char arg_allow_sources;
    if (obj_allow_sources == NULL) {
        arg_allow_sources = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_sources))) {
        CPy_TypeError("bool", obj_allow_sources); goto fail;
    } else
        arg_allow_sources = obj_allow_sources == Py_True;
    char retval = CPyDef_client___start_server(arg_args, arg_allow_sources);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "start_server", 348, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___wait_for_server(PyObject *cpy_r_status_file, double cpy_r_timeout, uint32_t cpy_r___bitmap) {
    uint32_t cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    double cpy_r_r6;
    char cpy_r_r7;
    double cpy_r_r8;
    double cpy_r_endtime;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    double cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_data;
    tuple_T3OOO cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    tuple_T2IO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = cpy_r___bitmap & 1;
    cpy_r_r1 = cpy_r_r0 == 0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_timeout = 5.0;
CPyL2: ;
    cpy_r_r2 = CPyModule_time;
    cpy_r_r3 = CPyStatics[147]; /* 'time' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 364, CPyStatic_client___globals);
        goto CPyL28;
    }
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r4, 0, 0, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 364, CPyStatic_client___globals);
        goto CPyL28;
    }
    cpy_r_r6 = PyFloat_AsDouble(cpy_r_r5);
    if (cpy_r_r6 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r5); cpy_r_r6 = -113.0;
    }
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -113.0;
    if (unlikely(cpy_r_r7)) goto CPyL6;
CPyL5: ;
    cpy_r_r8 = cpy_r_r6 + cpy_r_timeout;
    cpy_r_endtime = cpy_r_r8;
    goto CPyL7;
CPyL6: ;
    cpy_r_r9 = PyErr_Occurred();
    if (unlikely(cpy_r_r9 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 364, CPyStatic_client___globals);
        goto CPyL28;
    } else
        goto CPyL5;
CPyL7: ;
    cpy_r_r10 = CPyModule_time;
    cpy_r_r11 = CPyStatics[147]; /* 'time' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 365, CPyStatic_client___globals);
        goto CPyL28;
    }
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r12, 0, 0, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 365, CPyStatic_client___globals);
        goto CPyL28;
    }
    cpy_r_r14 = PyFloat_AsDouble(cpy_r_r13);
    if (cpy_r_r14 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r13); cpy_r_r14 = -113.0;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 == -113.0;
    if (unlikely(cpy_r_r15)) goto CPyL11;
CPyL10: ;
    cpy_r_r16 = cpy_r_r14 < cpy_r_endtime;
    if (cpy_r_r16) {
        goto CPyL12;
    } else
        goto CPyL26;
CPyL11: ;
    cpy_r_r17 = PyErr_Occurred();
    if (unlikely(cpy_r_r17 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 365, CPyStatic_client___globals);
        goto CPyL28;
    } else
        goto CPyL10;
CPyL12: ;
    cpy_r_r18 = CPyDef_client___read_status(cpy_r_status_file);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 367, CPyStatic_client___globals);
        goto CPyL14;
    }
    cpy_r_data = cpy_r_r18;
    goto CPyL22;
CPyL14: ;
    cpy_r_r19 = CPy_CatchError();
    cpy_r_r20 = (PyObject *)CPyType_client___BadStatus;
    cpy_r_r21 = CPy_ExceptionMatches(cpy_r_r20);
    if (!cpy_r_r21) goto CPyL18;
    cpy_r_r22 = CPyModule_time;
    cpy_r_r23 = CPyStatics[1690]; /* 'sleep' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 370, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_r25 = PyFloat_FromDouble(0.1);
    PyObject *cpy_r_r26[1] = {cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r27, 1, 0);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 370, CPyStatic_client___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL17: ;
    CPy_DecRef(cpy_r_r25);
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    goto CPyL7;
CPyL18: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL20;
    } else
        goto CPyL31;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    CPy_RestoreExcInfo(cpy_r_r19);
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL28;
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r30 = CPyDef_client___check_status(cpy_r_data);
    CPy_DECREF(cpy_r_data);
    if (unlikely(cpy_r_r30.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 373, CPyStatic_client___globals);
        goto CPyL28;
    } else
        goto CPyL32;
CPyL23: ;
    cpy_r_r31 = CPyStatics[1691]; /* 'Daemon started' */
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[190]; /* 'print' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 374, CPyStatic_client___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 374, CPyStatic_client___globals);
        goto CPyL28;
    } else
        goto CPyL33;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r38 = CPyStatics[1692]; /* 'Timed out waiting for daemon to start' */
    cpy_r_r39 = CPyDef_client___fail(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 376, CPyStatic_client___globals);
        goto CPyL28;
    } else
        goto CPyL34;
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL29: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL20;
CPyL30: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL17;
CPyL31: ;
    CPy_DecRef(cpy_r_r19.f0);
    CPy_DecRef(cpy_r_r19.f1);
    CPy_DecRef(cpy_r_r19.f2);
    goto CPyL19;
CPyL32: ;
    CPyTagged_DECREF(cpy_r_r30.f0);
    CPy_DECREF(cpy_r_r30.f1);
    goto CPyL23;
CPyL33: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL25;
CPyL34: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL27;
}

PyObject *CPyPy_client___wait_for_server(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status_file", "timeout", 0};
    static CPyArg_Parser parser = {"O|O:wait_for_server", kwlist, 0};
    PyObject *obj_status_file;
    PyObject *obj_timeout = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_status_file, &obj_timeout)) {
        return NULL;
    }
    uint32_t __bitmap = 0;
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    double arg_timeout = -113.0;
    if (obj_timeout != NULL) {
        __bitmap |= 1 << 0;
        arg_timeout = PyFloat_AsDouble(obj_timeout);
        if (arg_timeout == -1.0 && PyErr_Occurred()) {
            CPy_TypeError("float", obj_timeout); goto fail;
        }
    }
    char retval = CPyDef_client___wait_for_server(arg_status_file, arg_timeout, __bitmap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "wait_for_server", 359, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_run(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    double cpy_r_r9;
    char cpy_r_r10;
    double cpy_r_t0;
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
    PyObject *cpy_r_response;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
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
    double cpy_r_r68;
    char cpy_r_r69;
    double cpy_r_t1;
    double cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 393, CPyStatic_client___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 393, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL47;
    }
    cpy_r_r3 = CPyDef_client___is_running(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 393, CPyStatic_client___globals);
        goto CPyL47;
    }
    if (cpy_r_r3) goto CPyL5;
    cpy_r_r4 = CPyDef_client___start_server(cpy_r_args, 1);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 395, CPyStatic_client___globals);
        goto CPyL47;
    }
CPyL5: ;
    cpy_r_r5 = CPyModule_time;
    cpy_r_r6 = CPyStatics[147]; /* 'time' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 396, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r7, 0, 0, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 396, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r9 = PyFloat_AsDouble(cpy_r_r8);
    if (cpy_r_r9 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r8); cpy_r_r9 = -113.0;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -113.0;
    if (unlikely(cpy_r_r10)) goto CPyL9;
CPyL8: ;
    cpy_r_t0 = cpy_r_r9;
    cpy_r_r11 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_args, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 398, CPyStatic_client___globals);
        goto CPyL47;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r13 = PyErr_Occurred();
    if (unlikely(cpy_r_r13 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 396, CPyStatic_client___globals);
        goto CPyL47;
    } else
        goto CPyL8;
CPyL10: ;
    cpy_r_r14 = CPyStatics[1693]; /* 'run' */
    cpy_r_r15 = CPyStatic_client___globals;
    cpy_r_r16 = CPyStatics[145]; /* '__version__' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 400, CPyStatic_client___globals);
        goto CPyL48;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 400, CPyStatic_client___globals, "str", cpy_r_r17);
        goto CPyL48;
    }
    cpy_r_r19 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_args, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 401, CPyStatic_client___globals);
        goto CPyL49;
    }
    cpy_r_r21 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_args, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 402, CPyStatic_client___globals);
        goto CPyL50;
    }
    cpy_r_r23 = CPyStatics[1695]; /* 'version' */
    cpy_r_r24 = CPyStatics[1678]; /* 'args' */
    cpy_r_r25 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r26 = CPyDict_Build(3, cpy_r_r23, cpy_r_r18, cpy_r_r24, cpy_r_r20, cpy_r_r25, cpy_r_r22);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 397, CPyStatic_client___globals);
        goto CPyL48;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r27 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 397, CPyStatic_client___globals, "str", cpy_r_r12);
        goto CPyL51;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_client___request(cpy_r_r27, cpy_r_r14, cpy_r_r28, cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 397, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_response = cpy_r_r29;
    cpy_r_r30 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r31 = PyDict_Contains(cpy_r_response, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 405, CPyStatic_client___globals);
        goto CPyL52;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL34;
    cpy_r_r34 = CPyStatics[1697]; /* 'Restarting: ' */
    cpy_r_r35 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_response, cpy_r_r35);
    CPy_DECREF(cpy_r_response);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 406, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r37 = PyObject_Str(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 406, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r38 = CPyStr_Build(2, cpy_r_r34, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 406, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r39 = CPyModule_builtins;
    cpy_r_r40 = CPyStatics[190]; /* 'print' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 406, CPyStatic_client___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r42[1] = {cpy_r_r38};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r41, cpy_r_r43, 1, 0);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 406, CPyStatic_client___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL24: ;
    CPy_DECREF(cpy_r_r38);
    cpy_r_r45 = CPyDef_client___restart_server(cpy_r_args, 1);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 407, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r46 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_args, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 409, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_r48 = CPyStatics[1693]; /* 'run' */
    cpy_r_r49 = CPyStatic_client___globals;
    cpy_r_r50 = CPyStatics[145]; /* '__version__' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 411, CPyStatic_client___globals);
        goto CPyL55;
    }
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 411, CPyStatic_client___globals, "str", cpy_r_r51);
        goto CPyL55;
    }
    cpy_r_r53 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_args, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 412, CPyStatic_client___globals);
        goto CPyL56;
    }
    cpy_r_r55 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_args, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 413, CPyStatic_client___globals);
        goto CPyL57;
    }
    cpy_r_r57 = CPyStatics[1695]; /* 'version' */
    cpy_r_r58 = CPyStatics[1678]; /* 'args' */
    cpy_r_r59 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r60 = CPyDict_Build(3, cpy_r_r57, cpy_r_r52, cpy_r_r58, cpy_r_r54, cpy_r_r59, cpy_r_r56);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 408, CPyStatic_client___globals);
        goto CPyL55;
    }
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r61 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 408, CPyStatic_client___globals, "str", cpy_r_r47);
        goto CPyL58;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyDef_client___request(cpy_r_r61, cpy_r_r48, cpy_r_r62, cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 408, CPyStatic_client___globals);
        goto CPyL47;
    }
    cpy_r_response = cpy_r_r63;
CPyL34: ;
    cpy_r_r64 = CPyModule_time;
    cpy_r_r65 = CPyStatics[147]; /* 'time' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 416, CPyStatic_client___globals);
        goto CPyL52;
    }
    cpy_r_r67 = _PyObject_Vectorcall(cpy_r_r66, 0, 0, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 416, CPyStatic_client___globals);
        goto CPyL52;
    }
    cpy_r_r68 = PyFloat_AsDouble(cpy_r_r67);
    if (cpy_r_r68 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r67); cpy_r_r68 = -113.0;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 == -113.0;
    if (unlikely(cpy_r_r69)) goto CPyL38;
CPyL37: ;
    cpy_r_t1 = cpy_r_r68;
    cpy_r_r70 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r71 = CPyStatics[1698]; /* 'roundtrip_time' */
    cpy_r_r72 = PyFloat_FromDouble(cpy_r_r70);
    cpy_r_r73 = CPyDict_SetItem(cpy_r_response, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 417, CPyStatic_client___globals);
        goto CPyL52;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r75 = PyErr_Occurred();
    if (unlikely(cpy_r_r75 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 416, CPyStatic_client___globals);
        goto CPyL52;
    } else
        goto CPyL37;
CPyL39: ;
    cpy_r_r76 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_args, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals);
        goto CPyL52;
    }
    cpy_r_r78 = CPyStatics[1577]; /* 'junit_xml' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_args, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals);
        goto CPyL59;
    }
    cpy_r_r80 = CPyStatics[1700]; /* 'perf_stats_file' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_args, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals);
        goto CPyL60;
    }
    if (unlikely(!PyBool_Check(cpy_r_r77))) {
        CPy_TypeError("bool", cpy_r_r77); cpy_r_r82 = 2;
    } else
        cpy_r_r82 = cpy_r_r77 == Py_True;
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals);
        goto CPyL61;
    }
    if (PyUnicode_Check(cpy_r_r79))
        cpy_r_r83 = cpy_r_r79;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL1869;
    if (cpy_r_r79 == Py_None)
        cpy_r_r83 = cpy_r_r79;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL1869;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals, "str or None", cpy_r_r79);
    goto CPyL62;
__LL1869: ;
    if (PyUnicode_Check(cpy_r_r81))
        cpy_r_r84 = cpy_r_r81;
    else {
        cpy_r_r84 = NULL;
    }
    if (cpy_r_r84 != NULL) goto __LL1870;
    if (cpy_r_r81 == Py_None)
        cpy_r_r84 = cpy_r_r81;
    else {
        cpy_r_r84 = NULL;
    }
    if (cpy_r_r84 != NULL) goto __LL1870;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals, "str or None", cpy_r_r81);
    goto CPyL63;
__LL1870: ;
    cpy_r_r85 = CPyDef_client___check_output(cpy_r_response, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_response);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 418, CPyStatic_client___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r86 = 2;
    return cpy_r_r86;
CPyL48: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r18);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL47;
CPyL53: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL47;
CPyL54: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL24;
CPyL55: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL47;
CPyL59: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r77);
    goto CPyL47;
CPyL60: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    goto CPyL47;
CPyL61: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81);
    goto CPyL47;
CPyL62: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r81);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r83);
    goto CPyL47;
}

PyObject *CPyPy_client___do_run(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_run", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_run(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_run", 380, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_status(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_status;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    tuple_T2IO cpy_r_r10;
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
    PyObject *cpy_r_response;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
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
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 427, CPyStatic_client___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_status", 427, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL30;
    }
    cpy_r_r3 = CPyDef_client___read_status(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 427, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_status = cpy_r_r3;
    cpy_r_r4 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_args, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 428, CPyStatic_client___globals);
        goto CPyL31;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 428, CPyStatic_client___globals);
        goto CPyL31;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL7;
    cpy_r_r9 = CPyDef_client___show_stats(cpy_r_status);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 429, CPyStatic_client___globals);
        goto CPyL31;
    }
CPyL7: ;
    cpy_r_r10 = CPyDef_client___check_status(cpy_r_status);
    CPy_DECREF(cpy_r_status);
    if (unlikely(cpy_r_r10.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 432, CPyStatic_client___globals);
        goto CPyL30;
    } else
        goto CPyL32;
CPyL8: ;
    cpy_r_r11 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_args, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 434, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r13 = CPyStatics[1701]; /* 'status' */
    cpy_r_r14 = CPyStatics[1702]; /* 'fswatcher_dump_file' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_args, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 434, CPyStatic_client___globals);
        goto CPyL33;
    }
    cpy_r_r16 = CPyStatics[1702]; /* 'fswatcher_dump_file' */
    cpy_r_r17 = CPyDict_Build(1, cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 433, CPyStatic_client___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r18 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_status", 433, CPyStatic_client___globals, "str", cpy_r_r12);
        goto CPyL34;
    }
    cpy_r_r19 = CPyStatics[9021]; /* 5 */
    cpy_r_r20 = CPyDef_client___request(cpy_r_r18, cpy_r_r13, cpy_r_r19, cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 433, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_response = cpy_r_r20;
    cpy_r_r21 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_args, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 436, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 436, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r25 = cpy_r_r23;
    if (cpy_r_r25) goto CPyL18;
    cpy_r_r26 = CPyStatics[401]; /* 'error' */
    cpy_r_r27 = PyDict_Contains(cpy_r_response, cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 436, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r29 = cpy_r_r27;
    if (!cpy_r_r29) goto CPyL19;
CPyL18: ;
    cpy_r_r30 = CPyDef_client___show_stats(cpy_r_response);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 437, CPyStatic_client___globals);
        goto CPyL35;
    }
CPyL19: ;
    cpy_r_r31 = CPyStatics[401]; /* 'error' */
    cpy_r_r32 = PyDict_Contains(cpy_r_response, cpy_r_r31);
    CPy_DECREF(cpy_r_response);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 438, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL27;
    cpy_r_r35 = CPyStatics[1703]; /* 'Daemon is stuck; consider ' */
    cpy_r_r36 = CPyModule_sys;
    cpy_r_r37 = CPyStatics[1704]; /* 'argv' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals, "list", cpy_r_r38);
        goto CPyL36;
    }
    cpy_r_r40 = CPyList_GetItemShort(cpy_r_r39, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals, "str", cpy_r_r40);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r38);
    cpy_r_r42 = CPyStatics[1705]; /* ' kill' */
    cpy_r_r43 = CPyStr_Build(3, cpy_r_r35, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals);
        goto CPyL30;
    }
    cpy_r_r44 = CPyDef_client___fail(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 439, CPyStatic_client___globals);
        goto CPyL30;
    } else
        goto CPyL37;
CPyL27: ;
    cpy_r_r45 = CPyStatics[1706]; /* 'Daemon is up and running' */
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[190]; /* 'print' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 440, CPyStatic_client___globals);
        goto CPyL30;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r45};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 440, CPyStatic_client___globals);
        goto CPyL30;
    } else
        goto CPyL38;
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r52 = 2;
    return cpy_r_r52;
CPyL31: ;
    CPy_DecRef(cpy_r_status);
    goto CPyL30;
CPyL32: ;
    CPyTagged_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    goto CPyL8;
CPyL33: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL30;
CPyL36: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL30;
CPyL37: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL27;
CPyL38: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL29;
}

PyObject *CPyPy_client___do_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_status", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_status(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_status", 422, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_stop(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_response;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
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
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 447, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_r2 = CPyStatics[1707]; /* 'stop' */
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 447, CPyStatic_client___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_stop", 447, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL18;
    }
    cpy_r_r5 = CPyStatics[9021]; /* 5 */
    cpy_r_r6 = CPyDef_client___request(cpy_r_r4, cpy_r_r2, cpy_r_r5, cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 447, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_response = cpy_r_r6;
    cpy_r_r7 = CPyStatics[401]; /* 'error' */
    cpy_r_r8 = PyDict_Contains(cpy_r_response, cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 448, CPyStatic_client___globals);
        goto CPyL19;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL20;
    cpy_r_r11 = CPyDef_client___show_stats(cpy_r_response);
    CPy_DECREF(cpy_r_response);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 449, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_r12 = CPyStatics[1703]; /* 'Daemon is stuck; consider ' */
    cpy_r_r13 = CPyModule_sys;
    cpy_r_r14 = CPyStatics[1704]; /* 'argv' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals);
        goto CPyL16;
    }
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals, "list", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals, "str", cpy_r_r17);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = CPyStatics[1705]; /* ' kill' */
    cpy_r_r20 = CPyStr_Build(3, cpy_r_r12, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_r21 = CPyDef_client___fail(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 450, CPyStatic_client___globals);
        goto CPyL16;
    } else
        goto CPyL22;
CPyL13: ;
    cpy_r_r22 = CPyStatics[1708]; /* 'Daemon stopped' */
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[190]; /* 'print' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 452, CPyStatic_client___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 452, CPyStatic_client___globals);
        goto CPyL16;
    } else
        goto CPyL23;
CPyL15: ;
    return 1;
CPyL16: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_response);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
CPyL22: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL15;
CPyL23: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL15;
}

PyObject *CPyPy_client___do_stop(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_stop", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_stop(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_stop", 444, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_kill(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2IO cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_pid;
    PyObject *cpy_r_r5;
    PyObject *cpy_r__;
    char cpy_r_r6;
    tuple_T3OOO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 458, CPyStatic_client___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_kill", 458, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL17;
    }
    cpy_r_r3 = CPyDef_client___get_status(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 458, CPyStatic_client___globals);
        goto CPyL17;
    }
    cpy_r_r4 = cpy_r_r3.f0;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_pid = cpy_r_r4;
    cpy_r_r5 = cpy_r_r3.f1;
    CPy_INCREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r3.f0);
    CPy_DECREF(cpy_r_r3.f1);
    cpy_r__ = cpy_r_r5;
    CPy_DECREF(cpy_r__);
    cpy_r_r6 = CPyDef_dmypy_os___kill(cpy_r_pid);
    CPyTagged_DECREF(cpy_r_pid);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 460, CPyStatic_client___globals);
    } else
        goto CPyL14;
    cpy_r_r7 = CPy_CatchError();
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 461, CPyStatic_client___globals);
        goto CPyL12;
    }
    cpy_r_r11 = CPy_ExceptionMatches(cpy_r_r10);
    CPy_DecRef(cpy_r_r10);
    if (!cpy_r_r11) goto CPyL9;
    cpy_r_r12 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r12;
    cpy_r_r13 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 462, CPyStatic_client___globals);
        goto CPyL12;
    }
    cpy_r_r14 = CPyDef_client___fail(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 462, CPyStatic_client___globals);
        goto CPyL12;
    } else
        goto CPyL18;
CPyL9: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL12;
    } else
        goto CPyL19;
CPyL10: ;
    CPy_Unreachable();
CPyL11: ;
    CPy_RestoreExcInfo(cpy_r_r7);
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL16;
CPyL12: ;
    CPy_RestoreExcInfo(cpy_r_r7);
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    cpy_r_r15 = CPy_KeepPropagating();
    if (!cpy_r_r15) goto CPyL17;
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r16 = CPyStatics[1709]; /* 'Daemon killed' */
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[190]; /* 'print' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 464, CPyStatic_client___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 464, CPyStatic_client___globals);
        goto CPyL17;
    } else
        goto CPyL20;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL18: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL11;
CPyL19: ;
    CPy_DecRef(cpy_r_r7.f0);
    CPy_DecRef(cpy_r_r7.f1);
    CPy_DecRef(cpy_r_r7.f2);
    goto CPyL10;
CPyL20: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL16;
}

PyObject *CPyPy_client___do_kill(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_kill", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_kill(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_kill", 456, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_check(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    double cpy_r_t0;
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
    PyObject *cpy_r_response;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    double cpy_r_r24;
    char cpy_r_r25;
    double cpy_r_t1;
    double cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[147]; /* 'time' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 470, CPyStatic_client___globals);
        goto CPyL23;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 470, CPyStatic_client___globals);
        goto CPyL23;
    }
    cpy_r_r4 = PyFloat_AsDouble(cpy_r_r3);
    if (cpy_r_r4 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r3); cpy_r_r4 = -113.0;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL4;
CPyL3: ;
    cpy_r_t0 = cpy_r_r4;
    cpy_r_r6 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_args, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals);
        goto CPyL23;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r8 = PyErr_Occurred();
    if (unlikely(cpy_r_r8 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 470, CPyStatic_client___globals);
        goto CPyL23;
    } else
        goto CPyL3;
CPyL5: ;
    cpy_r_r9 = CPyStatics[1710]; /* 'check' */
    cpy_r_r10 = CPyStatics[608]; /* 'files' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_args, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals);
        goto CPyL24;
    }
    cpy_r_r12 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_args, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals);
        goto CPyL25;
    }
    cpy_r_r14 = CPyStatics[608]; /* 'files' */
    cpy_r_r15 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r16 = CPyDict_Build(2, cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r17 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals, "str", cpy_r_r7);
        goto CPyL26;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_client___request(cpy_r_r17, cpy_r_r9, cpy_r_r18, cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 471, CPyStatic_client___globals);
        goto CPyL23;
    }
    cpy_r_response = cpy_r_r19;
    cpy_r_r20 = CPyModule_time;
    cpy_r_r21 = CPyStatics[147]; /* 'time' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 472, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r22, 0, 0, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 472, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r24 = PyFloat_AsDouble(cpy_r_r23);
    if (cpy_r_r24 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r23); cpy_r_r24 = -113.0;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 == -113.0;
    if (unlikely(cpy_r_r25)) goto CPyL14;
CPyL13: ;
    cpy_r_t1 = cpy_r_r24;
    cpy_r_r26 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r27 = CPyStatics[1698]; /* 'roundtrip_time' */
    cpy_r_r28 = PyFloat_FromDouble(cpy_r_r26);
    cpy_r_r29 = CPyDict_SetItem(cpy_r_response, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 473, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r31 = PyErr_Occurred();
    if (unlikely(cpy_r_r31 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 472, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL13;
CPyL15: ;
    cpy_r_r32 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_args, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r34 = CPyStatics[1577]; /* 'junit_xml' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_args, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals);
        goto CPyL28;
    }
    cpy_r_r36 = CPyStatics[1700]; /* 'perf_stats_file' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_args, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals);
        goto CPyL29;
    }
    if (unlikely(!PyBool_Check(cpy_r_r33))) {
        CPy_TypeError("bool", cpy_r_r33); cpy_r_r38 = 2;
    } else
        cpy_r_r38 = cpy_r_r33 == Py_True;
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals);
        goto CPyL30;
    }
    if (PyUnicode_Check(cpy_r_r35))
        cpy_r_r39 = cpy_r_r35;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL1871;
    if (cpy_r_r35 == Py_None)
        cpy_r_r39 = cpy_r_r35;
    else {
        cpy_r_r39 = NULL;
    }
    if (cpy_r_r39 != NULL) goto __LL1871;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals, "str or None", cpy_r_r35);
    goto CPyL31;
__LL1871: ;
    if (PyUnicode_Check(cpy_r_r37))
        cpy_r_r40 = cpy_r_r37;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL1872;
    if (cpy_r_r37 == Py_None)
        cpy_r_r40 = cpy_r_r37;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL1872;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals, "str or None", cpy_r_r37);
    goto CPyL32;
__LL1872: ;
    cpy_r_r41 = CPyDef_client___check_output(cpy_r_response, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_response);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 474, CPyStatic_client___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL24: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r33);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r35);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r37);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r39);
    goto CPyL23;
}

PyObject *CPyPy_client___do_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_check", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_check(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_check", 468, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_recheck(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    double cpy_r_t0;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
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
    PyObject *cpy_r_response;
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
    double cpy_r_r45;
    char cpy_r_r46;
    double cpy_r_t1;
    double cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[147]; /* 'time' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 492, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 492, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r4 = PyFloat_AsDouble(cpy_r_r3);
    if (cpy_r_r4 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r3); cpy_r_r4 = -113.0;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL4;
CPyL3: ;
    cpy_r_t0 = cpy_r_r4;
    cpy_r_r6 = CPyStatics[347]; /* 'remove' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_args, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 493, CPyStatic_client___globals);
        goto CPyL35;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r8 = PyErr_Occurred();
    if (unlikely(cpy_r_r8 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 492, CPyStatic_client___globals);
        goto CPyL35;
    } else
        goto CPyL3;
CPyL5: ;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r7 != cpy_r_r9;
    CPy_DECREF(cpy_r_r7);
    if (cpy_r_r10) goto CPyL8;
    cpy_r_r11 = CPyStatics[1308]; /* 'update' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_args, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 493, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r14) goto CPyL16;
CPyL8: ;
    cpy_r_r15 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_args, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 495, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r17 = CPyStatics[1711]; /* 'recheck' */
    cpy_r_r18 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_args, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 497, CPyStatic_client___globals);
        goto CPyL36;
    }
    cpy_r_r20 = CPyStatics[347]; /* 'remove' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_args, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 498, CPyStatic_client___globals);
        goto CPyL37;
    }
    cpy_r_r22 = CPyStatics[1308]; /* 'update' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_args, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 499, CPyStatic_client___globals);
        goto CPyL38;
    }
    cpy_r_r24 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r25 = CPyStatics[347]; /* 'remove' */
    cpy_r_r26 = CPyStatics[1308]; /* 'update' */
    cpy_r_r27 = CPyDict_Build(3, cpy_r_r24, cpy_r_r19, cpy_r_r25, cpy_r_r21, cpy_r_r26, cpy_r_r23);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 494, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r28 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_recheck", 494, CPyStatic_client___globals, "str", cpy_r_r16);
        goto CPyL39;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_client___request(cpy_r_r28, cpy_r_r17, cpy_r_r29, cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 494, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_response = cpy_r_r30;
    goto CPyL22;
CPyL16: ;
    cpy_r_r31 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_args, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 502, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r33 = CPyStatics[1711]; /* 'recheck' */
    cpy_r_r34 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_args, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 502, CPyStatic_client___globals);
        goto CPyL40;
    }
    cpy_r_r36 = CPyStatics[1694]; /* 'export_types' */
    cpy_r_r37 = CPyDict_Build(1, cpy_r_r36, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 502, CPyStatic_client___globals);
        goto CPyL40;
    }
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r38 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_recheck", 502, CPyStatic_client___globals, "str", cpy_r_r32);
        goto CPyL41;
    }
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_client___request(cpy_r_r38, cpy_r_r33, cpy_r_r39, cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 502, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_response = cpy_r_r40;
CPyL22: ;
    cpy_r_r41 = CPyModule_time;
    cpy_r_r42 = CPyStatics[147]; /* 'time' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 503, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r43, 0, 0, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 503, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r45 = PyFloat_AsDouble(cpy_r_r44);
    if (cpy_r_r45 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r44); cpy_r_r45 = -113.0;
    }
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 == -113.0;
    if (unlikely(cpy_r_r46)) goto CPyL26;
CPyL25: ;
    cpy_r_t1 = cpy_r_r45;
    cpy_r_r47 = cpy_r_t1 - cpy_r_t0;
    cpy_r_r48 = CPyStatics[1698]; /* 'roundtrip_time' */
    cpy_r_r49 = PyFloat_FromDouble(cpy_r_r47);
    cpy_r_r50 = CPyDict_SetItem(cpy_r_response, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 504, CPyStatic_client___globals);
        goto CPyL42;
    } else
        goto CPyL27;
CPyL26: ;
    cpy_r_r52 = PyErr_Occurred();
    if (unlikely(cpy_r_r52 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 503, CPyStatic_client___globals);
        goto CPyL42;
    } else
        goto CPyL25;
CPyL27: ;
    cpy_r_r53 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_args, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r55 = CPyStatics[1577]; /* 'junit_xml' */
    cpy_r_r56 = CPyObject_GetAttr(cpy_r_args, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals);
        goto CPyL43;
    }
    cpy_r_r57 = CPyStatics[1700]; /* 'perf_stats_file' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_args, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals);
        goto CPyL44;
    }
    if (unlikely(!PyBool_Check(cpy_r_r54))) {
        CPy_TypeError("bool", cpy_r_r54); cpy_r_r59 = 2;
    } else
        cpy_r_r59 = cpy_r_r54 == Py_True;
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals);
        goto CPyL45;
    }
    if (PyUnicode_Check(cpy_r_r56))
        cpy_r_r60 = cpy_r_r56;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL1873;
    if (cpy_r_r56 == Py_None)
        cpy_r_r60 = cpy_r_r56;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL1873;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals, "str or None", cpy_r_r56);
    goto CPyL46;
__LL1873: ;
    if (PyUnicode_Check(cpy_r_r58))
        cpy_r_r61 = cpy_r_r58;
    else {
        cpy_r_r61 = NULL;
    }
    if (cpy_r_r61 != NULL) goto __LL1874;
    if (cpy_r_r58 == Py_None)
        cpy_r_r61 = cpy_r_r58;
    else {
        cpy_r_r61 = NULL;
    }
    if (cpy_r_r61 != NULL) goto __LL1874;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals, "str or None", cpy_r_r58);
    goto CPyL47;
__LL1874: ;
    cpy_r_r62 = CPyDef_client___check_output(cpy_r_response, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_response);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 505, CPyStatic_client___globals);
        goto CPyL35;
    }
    return 1;
CPyL35: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
CPyL36: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL35;
CPyL40: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL35;
CPyL41: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r54);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL35;
CPyL45: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r58);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r58);
    goto CPyL35;
CPyL47: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r60);
    goto CPyL35;
}

PyObject *CPyPy_client___do_recheck(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_recheck", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_recheck(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_recheck", 478, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_suggest(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    PyObject *cpy_r_response;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 516, CPyStatic_client___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[1712]; /* 'suggest' */
    cpy_r_r3 = CPyStatics[1713]; /* 'function' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_args, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 518, CPyStatic_client___globals);
        goto CPyL15;
    }
    cpy_r_r5 = CPyStatics[502]; /* 'json' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_args, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 519, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_r7 = CPyStatics[1714]; /* 'callsites' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_args, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 520, CPyStatic_client___globals);
        goto CPyL17;
    }
    cpy_r_r9 = CPyStatics[1715]; /* 'no_errors' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_args, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 521, CPyStatic_client___globals);
        goto CPyL18;
    }
    cpy_r_r11 = CPyStatics[1716]; /* 'no_any' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_args, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 522, CPyStatic_client___globals);
        goto CPyL19;
    }
    cpy_r_r13 = CPyStatics[1717]; /* 'flex_any' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_args, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 523, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_r15 = CPyStatics[1718]; /* 'use_fixme' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_args, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 524, CPyStatic_client___globals);
        goto CPyL21;
    }
    cpy_r_r17 = CPyStatics[1719]; /* 'max_guesses' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_args, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 525, CPyStatic_client___globals);
        goto CPyL22;
    }
    cpy_r_r19 = CPyStatics[1713]; /* 'function' */
    cpy_r_r20 = CPyStatics[502]; /* 'json' */
    cpy_r_r21 = CPyStatics[1714]; /* 'callsites' */
    cpy_r_r22 = CPyStatics[1715]; /* 'no_errors' */
    cpy_r_r23 = CPyStatics[1716]; /* 'no_any' */
    cpy_r_r24 = CPyStatics[1717]; /* 'flex_any' */
    cpy_r_r25 = CPyStatics[1718]; /* 'use_fixme' */
    cpy_r_r26 = CPyStatics[1719]; /* 'max_guesses' */
    cpy_r_r27 = CPyDict_Build(8, cpy_r_r19, cpy_r_r4, cpy_r_r20, cpy_r_r6, cpy_r_r21, cpy_r_r8, cpy_r_r22, cpy_r_r10, cpy_r_r23, cpy_r_r12, cpy_r_r24, cpy_r_r14, cpy_r_r25, cpy_r_r16, cpy_r_r26, cpy_r_r18);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 515, CPyStatic_client___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r28 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_suggest", 515, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL23;
    }
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_client___request(cpy_r_r28, cpy_r_r2, cpy_r_r29, cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 515, CPyStatic_client___globals);
        goto CPyL14;
    }
    cpy_r_response = cpy_r_r30;
    cpy_r_r31 = Py_None;
    cpy_r_r32 = Py_None;
    cpy_r_r33 = CPyDef_client___check_output(cpy_r_response, 0, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_response);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 527, CPyStatic_client___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL14;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL14;
CPyL23: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL14;
}

PyObject *CPyPy_client___do_suggest(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_suggest", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_suggest(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_suggest", 509, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_inspect(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    PyObject *cpy_r_response;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 534, CPyStatic_client___globals);
        goto CPyL15;
    }
    cpy_r_r2 = CPyStatics[1720]; /* 'inspect' */
    cpy_r_r3 = CPyStatics[1721]; /* 'show' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_args, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 536, CPyStatic_client___globals);
        goto CPyL16;
    }
    cpy_r_r5 = CPyStatics[1722]; /* 'location' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_args, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 537, CPyStatic_client___globals);
        goto CPyL17;
    }
    cpy_r_r7 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_args, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 538, CPyStatic_client___globals);
        goto CPyL18;
    }
    cpy_r_r9 = CPyStatics[1723]; /* 'limit' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_args, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 539, CPyStatic_client___globals);
        goto CPyL19;
    }
    cpy_r_r11 = CPyStatics[1724]; /* 'include_span' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_args, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 540, CPyStatic_client___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPyStatics[1725]; /* 'include_kind' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_args, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 541, CPyStatic_client___globals);
        goto CPyL21;
    }
    cpy_r_r15 = CPyStatics[1726]; /* 'include_object_attrs' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_args, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 542, CPyStatic_client___globals);
        goto CPyL22;
    }
    cpy_r_r17 = CPyStatics[1727]; /* 'union_attrs' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_args, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 543, CPyStatic_client___globals);
        goto CPyL23;
    }
    cpy_r_r19 = CPyStatics[1728]; /* 'force_reload' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_args, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 544, CPyStatic_client___globals);
        goto CPyL24;
    }
    cpy_r_r21 = CPyStatics[1721]; /* 'show' */
    cpy_r_r22 = CPyStatics[1722]; /* 'location' */
    cpy_r_r23 = CPyStatics[1729]; /* 'verbosity' */
    cpy_r_r24 = CPyStatics[1723]; /* 'limit' */
    cpy_r_r25 = CPyStatics[1724]; /* 'include_span' */
    cpy_r_r26 = CPyStatics[1725]; /* 'include_kind' */
    cpy_r_r27 = CPyStatics[1726]; /* 'include_object_attrs' */
    cpy_r_r28 = CPyStatics[1727]; /* 'union_attrs' */
    cpy_r_r29 = CPyStatics[1728]; /* 'force_reload' */
    cpy_r_r30 = CPyDict_Build(9, cpy_r_r21, cpy_r_r4, cpy_r_r22, cpy_r_r6, cpy_r_r23, cpy_r_r8, cpy_r_r24, cpy_r_r10, cpy_r_r25, cpy_r_r12, cpy_r_r26, cpy_r_r14, cpy_r_r27, cpy_r_r16, cpy_r_r28, cpy_r_r18, cpy_r_r29, cpy_r_r20);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 533, CPyStatic_client___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r31 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_inspect", 533, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL25;
    }
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_client___request(cpy_r_r31, cpy_r_r2, cpy_r_r32, cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 533, CPyStatic_client___globals);
        goto CPyL15;
    }
    cpy_r_response = cpy_r_r33;
    cpy_r_r34 = Py_None;
    cpy_r_r35 = Py_None;
    cpy_r_r36 = CPyDef_client___check_output(cpy_r_response, 0, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_response);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 546, CPyStatic_client___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r18);
    goto CPyL15;
CPyL25: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL15;
}

PyObject *CPyPy_client___do_inspect(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_inspect", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_inspect(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_inspect", 531, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___check_output(PyObject *cpy_r_response, char cpy_r_verbose, PyObject *cpy_r_junit_xml, PyObject *cpy_r_perf_stats_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_status_code;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
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
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_messages;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    double cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_telemetry;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject **cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    tuple_T3OOO cpy_r_r119;
    tuple_T3OOO cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    char cpy_r_r130;
    tuple_T3OOO cpy_r_r131;
    tuple_T3OOO cpy_r_r132;
    tuple_T3OOO cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject **cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    cpy_r_r0 = NULL;
    cpy_r_out = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_err = cpy_r_r1;
    cpy_r_r2 = NULL;
    cpy_r_status_code = cpy_r_r2;
    cpy_r_r3 = CPyStatics[401]; /* 'error' */
    cpy_r_r4 = PyDict_Contains(cpy_r_response, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 556, CPyStatic_client___globals);
        goto CPyL116;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPyStatics[401]; /* 'error' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_response, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 557, CPyStatic_client___globals);
        goto CPyL116;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 557, CPyStatic_client___globals, "str", cpy_r_r8);
        goto CPyL116;
    }
    cpy_r_r10 = CPyDef_client___fail(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 557, CPyStatic_client___globals);
        goto CPyL116;
    } else
        goto CPyL117;
CPyL5: ;
    cpy_r_r11 = CPyStatics[1730]; /* 'out' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_response, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL9;
    }
    cpy_r_r13 = cpy_r_r12;
    cpy_r_r14 = CPyStatics[1731]; /* 'err' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_response, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL118;
    }
    cpy_r_r16 = cpy_r_r15;
    cpy_r_r17 = CPyStatics[1701]; /* 'status' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_response, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL119;
    } else
        goto CPyL120;
CPyL8: ;
    cpy_r_r19 = cpy_r_r18;
    cpy_r_out = cpy_r_r13;
    cpy_r_err = cpy_r_r16;
    cpy_r_status_code = cpy_r_r19;
    goto CPyL19;
CPyL9: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 560, CPyStatic_client___globals);
        goto CPyL121;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL122;
    cpy_r_r25 = CPyStatics[1732]; /* 'Response: ' */
    cpy_r_r26 = PyObject_Str(cpy_r_response);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 561, CPyStatic_client___globals);
        goto CPyL121;
    }
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r25, cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 561, CPyStatic_client___globals);
        goto CPyL121;
    }
    cpy_r_r28 = CPyDef_client___fail(cpy_r_r27);
    CPy_DecRef(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 561, CPyStatic_client___globals);
        goto CPyL121;
    } else
        goto CPyL123;
CPyL14: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL124;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL19;
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL115;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r30 = CPyModule_sys;
    cpy_r_r31 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 562, CPyStatic_client___globals);
        goto CPyL116;
    }
    cpy_r_r33 = CPyStatics[286]; /* 'write' */
    if (cpy_r_out == NULL) {
        goto CPyL125;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"out\" referenced before assignment");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL23: ;
    PyObject *cpy_r_r35[2] = {cpy_r_r32, cpy_r_out};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_VectorcallMethod(cpy_r_r33, cpy_r_r36, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 562, CPyStatic_client___globals);
        goto CPyL126;
    } else
        goto CPyL127;
CPyL24: ;
    if (cpy_r_out == NULL) {
        goto CPyL128;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"out\" referenced before assignment");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL27: ;
    CPy_DECREF(cpy_r_r32);
    cpy_r_r39 = CPyModule_sys;
    cpy_r_r40 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r41 = CPyObject_GetAttr(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 563, CPyStatic_client___globals);
        goto CPyL116;
    }
    cpy_r_r42 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r43[1] = {cpy_r_r41};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r42, cpy_r_r44, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 563, CPyStatic_client___globals);
        goto CPyL129;
    } else
        goto CPyL130;
CPyL29: ;
    CPy_DECREF(cpy_r_r41);
    cpy_r_r46 = CPyModule_sys;
    cpy_r_r47 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 564, CPyStatic_client___globals);
        goto CPyL116;
    }
    cpy_r_r49 = CPyStatics[286]; /* 'write' */
    if (cpy_r_err == NULL) {
        goto CPyL131;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"err\" referenced before assignment");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL33: ;
    PyObject *cpy_r_r51[2] = {cpy_r_r48, cpy_r_err};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_VectorcallMethod(cpy_r_r49, cpy_r_r52, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 564, CPyStatic_client___globals);
        goto CPyL132;
    } else
        goto CPyL133;
CPyL34: ;
    if (cpy_r_err == NULL) {
        goto CPyL134;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"err\" referenced before assignment");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL37: ;
    CPy_DECREF(cpy_r_r48);
    if (!cpy_r_verbose) goto CPyL39;
    cpy_r_r55 = CPyDef_client___show_stats(cpy_r_response);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 566, CPyStatic_client___globals);
        goto CPyL116;
    }
CPyL39: ;
    cpy_r_r56 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r57 = cpy_r_junit_xml != cpy_r_r56;
    if (!cpy_r_r57) goto CPyL135;
    CPy_INCREF(cpy_r_junit_xml);
    if (likely(cpy_r_junit_xml != Py_None))
        cpy_r_r58 = cpy_r_junit_xml;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 550, CPyStatic_client___globals, "str", cpy_r_junit_xml);
        goto CPyL116;
    }
    cpy_r_r59 = CPyStr_IsTrue(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (!cpy_r_r59) goto CPyL135;
    cpy_r_r60 = CPyStatics[9305]; /* ('write_junit_xml',) */
    cpy_r_r61 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r62 = CPyStatic_client___globals;
    cpy_r_r63 = CPyImport_ImportFromMany(cpy_r_r61, cpy_r_r60, cpy_r_r60, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 569, CPyStatic_client___globals);
        goto CPyL116;
    }
    CPyModule_mypy___util = cpy_r_r63;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r63);
    if (cpy_r_out == NULL) {
        goto CPyL136;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"out\" referenced before assignment");
    cpy_r_r64 = 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 571, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL46: ;
    if (cpy_r_err == NULL) {
        goto CPyL137;
    } else
        goto CPyL49;
CPyL47: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"err\" referenced before assignment");
    cpy_r_r65 = 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 571, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r66 = PyNumber_Add(cpy_r_out, cpy_r_err);
    CPy_XDECREF(cpy_r_out);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 571, CPyStatic_client___globals);
        goto CPyL138;
    }
    cpy_r_r67 = CPyStatics[1734]; /* 'splitlines' */
    PyObject *cpy_r_r68[1] = {cpy_r_r66};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = PyObject_VectorcallMethod(cpy_r_r67, cpy_r_r69, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 571, CPyStatic_client___globals);
        goto CPyL139;
    }
    CPy_DECREF(cpy_r_r66);
    cpy_r_messages = cpy_r_r70;
    cpy_r_r71 = CPyStatics[1698]; /* 'roundtrip_time' */
    cpy_r_r72 = CPyDict_GetItem(cpy_r_response, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 573, CPyStatic_client___globals);
        goto CPyL140;
    }
    if (cpy_r_err == NULL) {
        goto CPyL141;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"err\" referenced before assignment");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r74 = PyObject_IsTrue(cpy_r_err);
    CPy_XDECREF(cpy_r_err);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL142;
    }
    cpy_r_r76 = cpy_r_r74;
    CPy_INCREF(cpy_r_junit_xml);
    if (likely(cpy_r_junit_xml != Py_None))
        cpy_r_r77 = cpy_r_junit_xml;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 576, CPyStatic_client___globals, "str", cpy_r_junit_xml);
        goto CPyL142;
    }
    cpy_r_r78 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_response, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 577, CPyStatic_client___globals);
        goto CPyL143;
    }
    cpy_r_r80 = CPyStatics[305]; /* 'platform' */
    cpy_r_r81 = CPyDict_GetItem(cpy_r_response, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 578, CPyStatic_client___globals);
        goto CPyL144;
    }
    cpy_r_r82 = PyFloat_AsDouble(cpy_r_r72);
    if (cpy_r_r82 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r72); cpy_r_r82 = -113.0;
    }
    CPy_DECREF(cpy_r_r72);
    cpy_r_r83 = cpy_r_r82 == -113.0;
    if (unlikely(cpy_r_r83)) goto CPyL61;
CPyL60: ;
    if (likely(PyList_Check(cpy_r_messages)))
        cpy_r_r84 = cpy_r_messages;
    else {
        CPy_TypeError("list", cpy_r_messages); 
        cpy_r_r84 = NULL;
    }
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 572, CPyStatic_client___globals);
        goto CPyL145;
    } else
        goto CPyL62;
CPyL61: ;
    cpy_r_r85 = PyErr_Occurred();
    if (unlikely(cpy_r_r85 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 572, CPyStatic_client___globals);
        goto CPyL146;
    } else
        goto CPyL60;
CPyL62: ;
    if (likely(PyUnicode_Check(cpy_r_r79)))
        cpy_r_r86 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 572, CPyStatic_client___globals, "str", cpy_r_r79);
        goto CPyL147;
    }
    if (likely(PyUnicode_Check(cpy_r_r81)))
        cpy_r_r87 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 572, CPyStatic_client___globals, "str", cpy_r_r81);
        goto CPyL148;
    }
    cpy_r_r88 = CPyDef_mypy___util___write_junit_xml(cpy_r_r82, cpy_r_r76, cpy_r_r84, cpy_r_r77, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 572, CPyStatic_client___globals);
        goto CPyL149;
    }
CPyL65: ;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_perf_stats_file != cpy_r_r89;
    if (!cpy_r_r90) goto CPyL100;
    CPy_INCREF(cpy_r_perf_stats_file);
    if (likely(cpy_r_perf_stats_file != Py_None))
        cpy_r_r91 = cpy_r_perf_stats_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 550, CPyStatic_client___globals, "str", cpy_r_perf_stats_file);
        goto CPyL149;
    }
    cpy_r_r92 = CPyStr_IsTrue(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (!cpy_r_r92) goto CPyL100;
    cpy_r_r93 = CPyStatics[629]; /* 'stats' */
    cpy_r_r94 = PyDict_New();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 581, CPyStatic_client___globals);
        goto CPyL149;
    }
    cpy_r_r95 = CPyDict_Get(cpy_r_response, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 581, CPyStatic_client___globals);
        goto CPyL149;
    }
    cpy_r_telemetry = cpy_r_r95;
    CPy_INCREF(cpy_r_perf_stats_file);
    if (likely(cpy_r_perf_stats_file != Py_None))
        cpy_r_r96 = cpy_r_perf_stats_file;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals, "str", cpy_r_perf_stats_file);
        goto CPyL150;
    }
    cpy_r_r97 = CPyStatics[448]; /* 'w' */
    cpy_r_r98 = CPyModule_builtins;
    cpy_r_r99 = CPyStatics[199]; /* 'open' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL151;
    }
    PyObject *cpy_r_r101[2] = {cpy_r_r96, cpy_r_r97};
    cpy_r_r102 = (PyObject **)&cpy_r_r101;
    cpy_r_r103 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r102, 2, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL151;
    }
    CPy_DECREF(cpy_r_r96);
    cpy_r_r104 = PyObject_Type(cpy_r_r103);
    cpy_r_r105 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r106 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL152;
    }
    cpy_r_r107 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r104, cpy_r_r107);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL153;
    }
    PyObject *cpy_r_r109[1] = {cpy_r_r103};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 1, 0);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL153;
    }
    cpy_r_r112 = 1;
    cpy_r_f = cpy_r_r111;
    cpy_r_r113 = CPyModule_json;
    cpy_r_r114 = CPyStatics[1735]; /* 'dump' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 583, CPyStatic_client___globals);
        goto CPyL154;
    }
    PyObject *cpy_r_r116[2] = {cpy_r_telemetry, cpy_r_f};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = _PyObject_Vectorcall(cpy_r_r115, cpy_r_r117, 2, 0);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 583, CPyStatic_client___globals);
        goto CPyL154;
    } else
        goto CPyL155;
CPyL79: ;
    CPy_DECREF(cpy_r_telemetry);
    CPy_DECREF(cpy_r_f);
    goto CPyL88;
CPyL80: ;
    cpy_r_r119 = CPy_CatchError();
    cpy_r_r112 = 0;
    cpy_r_r120 = CPy_GetExcInfo();
    cpy_r_r121 = cpy_r_r120.f0;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = cpy_r_r120.f1;
    CPy_INCREF(cpy_r_r122);
    cpy_r_r123 = cpy_r_r120.f2;
    CPy_INCREF(cpy_r_r123);
    CPy_DecRef(cpy_r_r120.f0);
    CPy_DecRef(cpy_r_r120.f1);
    CPy_DecRef(cpy_r_r120.f2);
    PyObject *cpy_r_r124[4] = {cpy_r_r103, cpy_r_r121, cpy_r_r122, cpy_r_r123};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r106, cpy_r_r125, 4, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL156;
    }
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r123);
    cpy_r_r127 = PyObject_IsTrue(cpy_r_r126);
    CPy_DecRef(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL86;
    }
    cpy_r_r129 = cpy_r_r127;
    if (cpy_r_r129) goto CPyL85;
    CPy_Reraise();
    if (!0) {
        goto CPyL86;
    } else
        goto CPyL157;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    CPy_RestoreExcInfo(cpy_r_r119);
    CPy_DecRef(cpy_r_r119.f0);
    CPy_DecRef(cpy_r_r119.f1);
    CPy_DecRef(cpy_r_r119.f2);
    goto CPyL88;
CPyL86: ;
    CPy_RestoreExcInfo(cpy_r_r119);
    CPy_DecRef(cpy_r_r119.f0);
    CPy_DecRef(cpy_r_r119.f1);
    CPy_DecRef(cpy_r_r119.f2);
    cpy_r_r130 = CPy_KeepPropagating();
    if (!cpy_r_r130) {
        goto CPyL89;
    } else
        goto CPyL158;
CPyL87: ;
    CPy_Unreachable();
CPyL88: ;
    tuple_T3OOO __tmp1875 = { NULL, NULL, NULL };
    cpy_r_r131 = __tmp1875;
    cpy_r_r132 = cpy_r_r131;
    goto CPyL90;
CPyL89: ;
    cpy_r_r133 = CPy_CatchError();
    cpy_r_r132 = cpy_r_r133;
CPyL90: ;
    if (!cpy_r_r112) goto CPyL159;
    cpy_r_r134 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r135[4] = {cpy_r_r103, cpy_r_r134, cpy_r_r134, cpy_r_r134};
    cpy_r_r136 = (PyObject **)&cpy_r_r135;
    cpy_r_r137 = _PyObject_Vectorcall(cpy_r_r106, cpy_r_r136, 4, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 582, CPyStatic_client___globals);
        goto CPyL160;
    } else
        goto CPyL161;
CPyL92: ;
    CPy_DECREF(cpy_r_r103);
CPyL93: ;
    if (cpy_r_r132.f0 == NULL) {
        goto CPyL100;
    } else
        goto CPyL162;
CPyL94: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL96;
    } else
        goto CPyL163;
CPyL95: ;
    CPy_Unreachable();
CPyL96: ;
    if (cpy_r_r132.f0 == NULL) goto CPyL98;
    CPy_RestoreExcInfo(cpy_r_r132);
    CPy_XDECREF(cpy_r_r132.f0);
    CPy_XDECREF(cpy_r_r132.f1);
    CPy_XDECREF(cpy_r_r132.f2);
CPyL98: ;
    cpy_r_r138 = CPy_KeepPropagating();
    if (!cpy_r_r138) goto CPyL115;
    CPy_Unreachable();
CPyL100: ;
    if (cpy_r_status_code != NULL) goto CPyL103;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"status_code\" referenced before assignment");
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL103: ;
    cpy_r_r140 = PyObject_IsTrue(cpy_r_status_code);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 559, CPyStatic_client___globals);
        goto CPyL149;
    }
    cpy_r_r142 = cpy_r_r140;
    if (!cpy_r_r142) goto CPyL164;
    cpy_r_r143 = CPyModule_sys;
    cpy_r_r144 = CPyStatics[1680]; /* 'exit' */
    cpy_r_r145 = CPyObject_GetAttr(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 586, CPyStatic_client___globals);
        goto CPyL149;
    }
    if (cpy_r_status_code == NULL) {
        goto CPyL165;
    } else
        goto CPyL109;
CPyL107: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"status_code\" referenced before assignment");
    cpy_r_r146 = 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL109: ;
    PyObject *cpy_r_r147[1] = {cpy_r_status_code};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = _PyObject_Vectorcall(cpy_r_r145, cpy_r_r148, 1, 0);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 586, CPyStatic_client___globals);
        goto CPyL149;
    } else
        goto CPyL166;
CPyL110: ;
    if (cpy_r_status_code != NULL) goto CPyL113;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"status_code\" referenced before assignment");
    cpy_r_r150 = 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_output", -1, CPyStatic_client___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL113: ;
    CPy_XDECREF(cpy_r_status_code);
CPyL114: ;
    return 1;
CPyL115: ;
    cpy_r_r151 = 2;
    return cpy_r_r151;
CPyL116: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    goto CPyL115;
CPyL117: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
CPyL118: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL9;
CPyL119: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r16);
    goto CPyL9;
CPyL120: ;
    CPy_XDECREF(cpy_r_out);
    CPy_XDECREF(cpy_r_err);
    CPy_XDECREF(cpy_r_status_code);
    goto CPyL8;
CPyL121: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    goto CPyL17;
CPyL122: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    goto CPyL14;
CPyL123: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL16;
CPyL124: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL15;
CPyL125: ;
    CPy_XDECREF(cpy_r_err);
    CPy_XDECREF(cpy_r_status_code);
    CPy_DECREF(cpy_r_r32);
    goto CPyL21;
CPyL126: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r32);
    goto CPyL115;
CPyL127: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL24;
CPyL128: ;
    CPy_XDECREF(cpy_r_err);
    CPy_XDECREF(cpy_r_status_code);
    CPy_DECREF(cpy_r_r32);
    goto CPyL25;
CPyL129: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r41);
    goto CPyL115;
CPyL130: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL29;
CPyL131: ;
    CPy_XDECREF(cpy_r_out);
    CPy_XDECREF(cpy_r_status_code);
    CPy_DECREF(cpy_r_r48);
    goto CPyL31;
CPyL132: ;
    CPy_XDecRef(cpy_r_out);
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r48);
    goto CPyL115;
CPyL133: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL34;
CPyL134: ;
    CPy_XDECREF(cpy_r_out);
    CPy_XDECREF(cpy_r_status_code);
    CPy_DECREF(cpy_r_r48);
    goto CPyL35;
CPyL135: ;
    CPy_XDECREF(cpy_r_out);
    CPy_XDECREF(cpy_r_err);
    goto CPyL65;
CPyL136: ;
    CPy_XDECREF(cpy_r_err);
    CPy_XDECREF(cpy_r_status_code);
    goto CPyL44;
CPyL137: ;
    CPy_XDECREF(cpy_r_out);
    CPy_XDECREF(cpy_r_status_code);
    goto CPyL47;
CPyL138: ;
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    goto CPyL115;
CPyL139: ;
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r66);
    goto CPyL115;
CPyL140: ;
    CPy_XDecRef(cpy_r_err);
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_messages);
    goto CPyL115;
CPyL141: ;
    CPy_XDECREF(cpy_r_status_code);
    CPy_DECREF(cpy_r_messages);
    CPy_DECREF(cpy_r_r72);
    goto CPyL53;
CPyL142: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r72);
    goto CPyL115;
CPyL143: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r77);
    goto CPyL115;
CPyL144: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    goto CPyL115;
CPyL145: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81);
    goto CPyL115;
CPyL146: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_messages);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81);
    goto CPyL115;
CPyL147: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r81);
    CPy_DecRef(cpy_r_r84);
    goto CPyL115;
CPyL148: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r86);
    goto CPyL115;
CPyL149: ;
    CPy_XDecRef(cpy_r_status_code);
    goto CPyL115;
CPyL150: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_telemetry);
    goto CPyL115;
CPyL151: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_telemetry);
    CPy_DecRef(cpy_r_r96);
    goto CPyL115;
CPyL152: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_telemetry);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r104);
    goto CPyL115;
CPyL153: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_telemetry);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r106);
    goto CPyL115;
CPyL154: ;
    CPy_DecRef(cpy_r_telemetry);
    CPy_DecRef(cpy_r_f);
    goto CPyL80;
CPyL155: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL79;
CPyL156: ;
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r122);
    CPy_DecRef(cpy_r_r123);
    goto CPyL86;
CPyL157: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r119.f0);
    CPy_DecRef(cpy_r_r119.f1);
    CPy_DecRef(cpy_r_r119.f2);
    goto CPyL84;
CPyL158: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r106);
    goto CPyL87;
CPyL159: ;
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r106);
    goto CPyL93;
CPyL160: ;
    CPy_XDecRef(cpy_r_status_code);
    CPy_DecRef(cpy_r_r103);
    goto CPyL96;
CPyL161: ;
    CPy_DECREF(cpy_r_r137);
    goto CPyL92;
CPyL162: ;
    CPy_XDECREF(cpy_r_status_code);
    goto CPyL94;
CPyL163: ;
    CPy_XDECREF(cpy_r_r132.f0);
    CPy_XDECREF(cpy_r_r132.f1);
    CPy_XDECREF(cpy_r_r132.f2);
    goto CPyL95;
CPyL164: ;
    CPy_XDECREF(cpy_r_status_code);
    goto CPyL114;
CPyL165: ;
    CPy_DECREF(cpy_r_r145);
    goto CPyL107;
CPyL166: ;
    CPy_DECREF(cpy_r_r149);
    goto CPyL110;
}

PyObject *CPyPy_client___check_output(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"response", "verbose", "junit_xml", "perf_stats_file", 0};
    static CPyArg_Parser parser = {"OOOO:check_output", kwlist, 0};
    PyObject *obj_response;
    PyObject *obj_verbose;
    PyObject *obj_junit_xml;
    PyObject *obj_perf_stats_file;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_response, &obj_verbose, &obj_junit_xml, &obj_perf_stats_file)) {
        return NULL;
    }
    PyObject *arg_response;
    if (likely(PyDict_Check(obj_response)))
        arg_response = obj_response;
    else {
        CPy_TypeError("dict", obj_response); 
        goto fail;
    }
    char arg_verbose;
    if (unlikely(!PyBool_Check(obj_verbose))) {
        CPy_TypeError("bool", obj_verbose); goto fail;
    } else
        arg_verbose = obj_verbose == Py_True;
    PyObject *arg_junit_xml;
    if (PyUnicode_Check(obj_junit_xml))
        arg_junit_xml = obj_junit_xml;
    else {
        arg_junit_xml = NULL;
    }
    if (arg_junit_xml != NULL) goto __LL1876;
    if (obj_junit_xml == Py_None)
        arg_junit_xml = obj_junit_xml;
    else {
        arg_junit_xml = NULL;
    }
    if (arg_junit_xml != NULL) goto __LL1876;
    CPy_TypeError("str or None", obj_junit_xml); 
    goto fail;
__LL1876: ;
    PyObject *arg_perf_stats_file;
    if (PyUnicode_Check(obj_perf_stats_file))
        arg_perf_stats_file = obj_perf_stats_file;
    else {
        arg_perf_stats_file = NULL;
    }
    if (arg_perf_stats_file != NULL) goto __LL1877;
    if (obj_perf_stats_file == Py_None)
        arg_perf_stats_file = obj_perf_stats_file;
    else {
        arg_perf_stats_file = NULL;
    }
    if (arg_perf_stats_file != NULL) goto __LL1877;
    CPy_TypeError("str or None", obj_perf_stats_file); 
    goto fail;
__LL1877: ;
    char retval = CPyDef_client___check_output(arg_response, arg_verbose, arg_junit_xml, arg_perf_stats_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "check_output", 549, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___show_stats(PyObject *cpy_r_response) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    double cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T2OO cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int64_t cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    tuple_T2OO cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    char cpy_r_r90;
    cpy_r_r0 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r1[1] = {cpy_r_response};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 590, CPyStatic_client___globals);
        goto CPyL51;
    }
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 590, CPyStatic_client___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 590, CPyStatic_client___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r3);
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 590, CPyStatic_client___globals, "list", cpy_r_r9);
        goto CPyL51;
    }
    cpy_r_r11 = 0;
CPyL5: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL53;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r10, cpy_r_r11);
    PyObject *__tmp1878;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 2))) {
        __tmp1878 = NULL;
        goto __LL1879;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 0))))
        __tmp1878 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp1878 = NULL;
    }
    if (__tmp1878 == NULL) goto __LL1879;
    __tmp1878 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    if (__tmp1878 == NULL) goto __LL1879;
    __tmp1878 = cpy_r_r16;
__LL1879: ;
    if (unlikely(__tmp1878 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_r16); cpy_r_r17 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1880 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPy_INCREF(__tmp1880);
        PyObject *__tmp1881;
        if (likely(PyUnicode_Check(__tmp1880)))
            __tmp1881 = __tmp1880;
        else {
            CPy_TypeError("str", __tmp1880); 
            __tmp1881 = NULL;
        }
        cpy_r_r17.f0 = __tmp1881;
        PyObject *__tmp1882 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPy_INCREF(__tmp1882);
        PyObject *__tmp1883;
        __tmp1883 = __tmp1882;
        cpy_r_r17.f1 = __tmp1883;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 590, CPyStatic_client___globals);
        goto CPyL54;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_key = cpy_r_r18;
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r17.f1);
    cpy_r_value = cpy_r_r19;
    cpy_r_r20 = CPyStatics[1730]; /* 'out' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_key, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL10;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL10;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", -1, CPyStatic_client___globals);
        goto CPyL55;
    }
CPyL10: ;
    cpy_r_r26 = cpy_r_r21 != 0;
    if (cpy_r_r26) goto CPyL12;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL16;
CPyL12: ;
    cpy_r_r28 = CPyStatics[1731]; /* 'err' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_key, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL15;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL15;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", -1, CPyStatic_client___globals);
        goto CPyL55;
    }
CPyL15: ;
    cpy_r_r34 = cpy_r_r29 != 0;
    cpy_r_r27 = cpy_r_r34;
CPyL16: ;
    if (!cpy_r_r27) goto CPyL30;
    cpy_r_r35 = CPyStatics[1736]; /* '%-24s: %10s' */
    cpy_r_r36 = (PyObject *)&PyFloat_Type;
    cpy_r_r37 = PyObject_IsInstance(cpy_r_value, cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL55;
    }
    cpy_r_r39 = cpy_r_r37;
    if (!cpy_r_r39) goto CPyL24;
    cpy_r_r40 = CPyStatics[1737]; /* '%.3f' */
    cpy_r_r41 = PyFloat_AsDouble(cpy_r_value);
    if (cpy_r_r41 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_value); cpy_r_r41 = -113.0;
    }
    CPy_DECREF(cpy_r_value);
    cpy_r_r42 = cpy_r_r41 == -113.0;
    if (unlikely(cpy_r_r42)) goto CPyL21;
CPyL20: ;
    cpy_r_r43 = PyFloat_FromDouble(cpy_r_r41);
    cpy_r_r44 = PyNumber_Remainder(cpy_r_r40, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL56;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r45 = PyErr_Occurred();
    if (unlikely(cpy_r_r45 != NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL56;
    } else
        goto CPyL20;
CPyL22: ;
    if (likely(PyUnicode_Check(cpy_r_r44)))
        cpy_r_r46 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals, "str", cpy_r_r44);
        goto CPyL56;
    }
    cpy_r_r47 = cpy_r_r46;
    goto CPyL25;
CPyL24: ;
    cpy_r_r47 = cpy_r_value;
CPyL25: ;
    cpy_r_r48.f0 = cpy_r_key;
    cpy_r_r48.f1 = cpy_r_r47;
    CPy_INCREF(cpy_r_r48.f0);
    CPy_INCREF(cpy_r_r48.f1);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1884 = cpy_r_r48.f0;
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp1884);
    PyObject *__tmp1885 = cpy_r_r48.f1;
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp1885);
    cpy_r_r50 = PyNumber_Remainder(cpy_r_r35, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL54;
    }
    if (likely(PyUnicode_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals, "str", cpy_r_r50);
        goto CPyL54;
    }
    cpy_r_r52 = CPyModule_builtins;
    cpy_r_r53 = CPyStatics[190]; /* 'print' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r51};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 592, CPyStatic_client___globals);
        goto CPyL57;
    } else
        goto CPyL58;
CPyL29: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL49;
CPyL30: ;
    cpy_r_r58 = CPyModule_builtins;
    cpy_r_r59 = CPyStatics[146]; /* 'repr' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 594, CPyStatic_client___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r61[1] = {cpy_r_value};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = _PyObject_Vectorcall(cpy_r_r60, cpy_r_r62, 1, 0);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 594, CPyStatic_client___globals);
        goto CPyL55;
    }
    CPy_DECREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 594, CPyStatic_client___globals, "str", cpy_r_r63);
        goto CPyL56;
    }
    cpy_r_r65 = CPyStr_GetSlice(cpy_r_r64, 2, -2);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 594, CPyStatic_client___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 594, CPyStatic_client___globals, "str", cpy_r_r65);
        goto CPyL56;
    }
    cpy_r_value = cpy_r_r66;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r67 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 595, CPyStatic_client___globals, "str", cpy_r_value);
        goto CPyL55;
    }
    cpy_r_r68 = CPyStr_Size_size_t(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 595, CPyStatic_client___globals);
        goto CPyL55;
    }
    cpy_r_r70 = cpy_r_r68 << 1;
    cpy_r_r71 = (Py_ssize_t)cpy_r_r70 > (Py_ssize_t)100;
    if (!cpy_r_r71) goto CPyL43;
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r72 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 596, CPyStatic_client___globals, "str", cpy_r_value);
        goto CPyL56;
    }
    cpy_r_r73 = CPyStr_GetSlice(cpy_r_r72, 0, 80);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 596, CPyStatic_client___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r73)))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 596, CPyStatic_client___globals, "str", cpy_r_r73);
        goto CPyL56;
    }
    cpy_r_r75 = CPyStatics[1738]; /* ' ...' */
    cpy_r_r76 = PyUnicode_Concat(cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 596, CPyStatic_client___globals);
        goto CPyL56;
    }
    cpy_r_value = cpy_r_r76;
CPyL43: ;
    cpy_r_r77 = CPyStatics[1739]; /* '%-24s: %s' */
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r78 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 597, CPyStatic_client___globals, "str", cpy_r_value);
        goto CPyL56;
    }
    cpy_r_r79.f0 = cpy_r_key;
    cpy_r_r79.f1 = cpy_r_r78;
    CPy_INCREF(cpy_r_r79.f0);
    CPy_INCREF(cpy_r_r79.f1);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = PyTuple_New(2);
    if (unlikely(cpy_r_r80 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1886 = cpy_r_r79.f0;
    PyTuple_SET_ITEM(cpy_r_r80, 0, __tmp1886);
    PyObject *__tmp1887 = cpy_r_r79.f1;
    PyTuple_SET_ITEM(cpy_r_r80, 1, __tmp1887);
    cpy_r_r81 = PyNumber_Remainder(cpy_r_r77, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 597, CPyStatic_client___globals);
        goto CPyL54;
    }
    if (likely(PyUnicode_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "show_stats", 597, CPyStatic_client___globals, "str", cpy_r_r81);
        goto CPyL54;
    }
    cpy_r_r83 = CPyModule_builtins;
    cpy_r_r84 = CPyStatics[190]; /* 'print' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 597, CPyStatic_client___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r86[1] = {cpy_r_r82};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 597, CPyStatic_client___globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL48: ;
    CPy_DECREF(cpy_r_r82);
CPyL49: ;
    cpy_r_r89 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r89;
    goto CPyL5;
CPyL50: ;
    return 1;
CPyL51: ;
    cpy_r_r90 = 2;
    return cpy_r_r90;
CPyL52: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL51;
CPyL53: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL51;
CPyL56: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_key);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r51);
    goto CPyL51;
CPyL58: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL29;
CPyL59: ;
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r82);
    goto CPyL51;
CPyL60: ;
    CPy_DECREF(cpy_r_r88);
    goto CPyL48;
}

PyObject *CPyPy_client___show_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"response", 0};
    static CPyArg_Parser parser = {"O:show_stats", kwlist, 0};
    PyObject *obj_response;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_response)) {
        return NULL;
    }
    PyObject *arg_response = obj_response;
    char retval = CPyDef_client___show_stats(arg_response);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "show_stats", 589, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_hang(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_args, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyStatics[1740]; /* 'hang' */
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals, "str", cpy_r_r1);
        goto CPyL9;
    }
    cpy_r_r5 = CPyStatics[9016]; /* 1 */
    cpy_r_r6 = CPyDef_client___request(cpy_r_r4, cpy_r_r2, cpy_r_r5, cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals);
        goto CPyL7;
    }
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[190]; /* 'print' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 603, CPyStatic_client___globals);
        goto CPyL10;
    } else
        goto CPyL11;
CPyL6: ;
    CPy_DECREF(cpy_r_r6);
    return 1;
CPyL7: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL7;
CPyL11: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL6;
}

PyObject *CPyPy_client___do_hang(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_hang", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_hang(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_hang", 601, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_daemon(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_fd;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_options_dict;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_options_obj;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_options;
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
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    cpy_r_r0 = CPyStatics[9306]; /* ('Server', 'process_start_options') */
    cpy_r_r1 = CPyStatics[1687]; /* 'mypy.dmypy_server' */
    cpy_r_r2 = CPyStatic_client___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 610, CPyStatic_client___globals);
        goto CPyL42;
    }
    CPyModule_mypy___dmypy_server = cpy_r_r3;
    CPy_INCREF(CPyModule_mypy___dmypy_server);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = CPyStatics[1689]; /* 'log_file' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_args, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 612, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 612, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL17;
    cpy_r_r9 = CPyStatics[1689]; /* 'log_file' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_args, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 613, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r11 = CPyStatics[1446]; /* 'a' */
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[199]; /* 'open' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 613, CPyStatic_client___globals);
        goto CPyL43;
    }
    cpy_r_r15 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r16[3] = {cpy_r_r10, cpy_r_r11, cpy_r_r15};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = CPyStatics[9307]; /* ('buffering',) */
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r17, 2, cpy_r_r18);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 613, CPyStatic_client___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r10);
    cpy_r_r20 = CPyModule_sys;
    cpy_r_r21 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r22 = PyObject_SetAttr(cpy_r_r20, cpy_r_r21, cpy_r_r19);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 613, CPyStatic_client___globals);
        goto CPyL44;
    }
    cpy_r_r24 = CPyModule_sys;
    cpy_r_r25 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r26 = PyObject_SetAttr(cpy_r_r24, cpy_r_r25, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 613, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r28 = CPyModule_sys;
    cpy_r_r29 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 614, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r31 = CPyStatics[1743]; /* 'fileno' */
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 614, CPyStatic_client___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 614, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_fd = cpy_r_r35;
    cpy_r_r36 = CPyModule_os;
    cpy_r_r37 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 615, CPyStatic_client___globals);
        goto CPyL46;
    }
    CPyTagged_INCREF(cpy_r_fd);
    cpy_r_r39 = CPyTagged_StealAsObject(cpy_r_fd);
    cpy_r_r40 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r41[2] = {cpy_r_r39, cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r42, 2, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 615, CPyStatic_client___globals);
        goto CPyL47;
    } else
        goto CPyL48;
CPyL14: ;
    CPy_DECREF(cpy_r_r39);
    cpy_r_r44 = CPyModule_os;
    cpy_r_r45 = CPyStatics[1744]; /* 'dup2' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 616, CPyStatic_client___globals);
        goto CPyL46;
    }
    cpy_r_r47 = CPyTagged_StealAsObject(cpy_r_fd);
    cpy_r_r48 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r49[2] = {cpy_r_r47, cpy_r_r48};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r50, 2, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 616, CPyStatic_client___globals);
        goto CPyL49;
    } else
        goto CPyL50;
CPyL16: ;
    CPy_DECREF(cpy_r_r47);
CPyL17: ;
    cpy_r_r52 = CPyStatics[1745]; /* 'options_data' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_args, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 618, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r54 = PyObject_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 618, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL31;
    cpy_r_r57 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r58 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r59 = CPyStatic_client___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 619, CPyStatic_client___globals);
        goto CPyL42;
    }
    CPyModule_mypy___options = cpy_r_r60;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[1745]; /* 'options_data' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_args, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r63 = CPyModule_base64;
    cpy_r_r64 = CPyStatics[1746]; /* 'b64decode' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals);
        goto CPyL51;
    }
    PyObject *cpy_r_r66[1] = {cpy_r_r62};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r65, cpy_r_r67, 1, 0);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r62);
    if (likely(PyBytes_Check(cpy_r_r68) || PyByteArray_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals, "bytes", cpy_r_r68);
        goto CPyL42;
    }
    cpy_r_r70 = CPyModule_pickle;
    cpy_r_r71 = CPyStatics[234]; /* 'loads' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_r69};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 621, CPyStatic_client___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r69);
    cpy_r_options_dict = cpy_r_r75;
    cpy_r_r76 = CPyDef_mypy___options___Options();
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 622, CPyStatic_client___globals);
        goto CPyL53;
    }
    cpy_r_options_obj = cpy_r_r76;
    if (likely(PyDict_Check(cpy_r_options_dict)))
        cpy_r_r77 = cpy_r_options_dict;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_daemon", 623, CPyStatic_client___globals, "dict", cpy_r_options_dict);
        goto CPyL54;
    }
    cpy_r_r78 = CPyDef_mypy___options___Options___apply_changes(cpy_r_options_obj, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_options_obj);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 623, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_options = cpy_r_r78;
    goto CPyL35;
CPyL31: ;
    cpy_r_r79 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_args, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 625, CPyStatic_client___globals);
        goto CPyL42;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_daemon", 625, CPyStatic_client___globals, "list", cpy_r_r80);
        goto CPyL42;
    }
    cpy_r_r82 = CPyDef_dmypy_server___process_start_options(cpy_r_r81, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 625, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_options = cpy_r_r82;
CPyL35: ;
    cpy_r_r83 = CPyStatics[1682]; /* 'status_file' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_args, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals);
        goto CPyL55;
    }
    cpy_r_r85 = CPyStatics[1688]; /* 'timeout' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_args, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r84)))
        cpy_r_r87 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals, "str", cpy_r_r84);
        goto CPyL57;
    }
    if (PyLong_Check(cpy_r_r86))
        cpy_r_r88 = cpy_r_r86;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL1888;
    if (cpy_r_r86 == Py_None)
        cpy_r_r88 = cpy_r_r86;
    else {
        cpy_r_r88 = NULL;
    }
    if (cpy_r_r88 != NULL) goto __LL1888;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals, "int or None", cpy_r_r86);
    goto CPyL58;
__LL1888: ;
    cpy_r_r89 = CPyDef_dmypy_server___Server(cpy_r_options, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals);
        goto CPyL42;
    }
    cpy_r_r90 = CPyDef_dmypy_server___Server___serve(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 627, CPyStatic_client___globals);
        goto CPyL42;
    }
    return 1;
CPyL42: ;
    cpy_r_r91 = 2;
    return cpy_r_r91;
CPyL43: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL42;
CPyL46: ;
    CPyTagged_DecRef(cpy_r_fd);
    goto CPyL42;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_fd);
    CPy_DecRef(cpy_r_r39);
    goto CPyL42;
CPyL48: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL14;
CPyL49: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL42;
CPyL50: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL16;
CPyL51: ;
    CPy_DecRef(cpy_r_r62);
    goto CPyL42;
CPyL52: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL42;
CPyL53: ;
    CPy_DecRef(cpy_r_options_dict);
    goto CPyL42;
CPyL54: ;
    CPy_DecRef(cpy_r_options_obj);
    goto CPyL42;
CPyL55: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL42;
CPyL56: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r84);
    goto CPyL42;
CPyL57: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r86);
    goto CPyL42;
CPyL58: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r87);
    goto CPyL42;
}

PyObject *CPyPy_client___do_daemon(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_daemon", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_daemon(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_daemon", 607, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___do_help(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatic_client___globals;
    cpy_r_r1 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_help", 633, CPyStatic_client___globals);
        goto CPyL3;
    }
    cpy_r_r3 = CPyStatics[1747]; /* 'print_help' */
    PyObject *cpy_r_r4[1] = {cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "do_help", 633, CPyStatic_client___globals);
        goto CPyL4;
    } else
        goto CPyL5;
CPyL2: ;
    CPy_DECREF(cpy_r_r2);
    return 1;
CPyL3: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
CPyL5: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL2;
}

PyObject *CPyPy_client___do_help(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:do_help", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_client___do_help(arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "do_help", 631, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___request(PyObject *cpy_r_status_file, PyObject *cpy_r_command, PyObject *cpy_r_timeout, PyObject *cpy_r_kwds) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_response;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_bdata;
    tuple_T2IO cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r__;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_client;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2OO cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_stdout;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_stderr;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject **cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject **cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    if (cpy_r_timeout != NULL) goto CPyL81;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_timeout = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 653, CPyStatic_client___globals);
        goto CPyL82;
    }
    cpy_r_response = cpy_r_r1;
    cpy_r_r2 = PyDict_Copy(cpy_r_kwds);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 654, CPyStatic_client___globals);
        goto CPyL83;
    }
    cpy_r_args = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1748]; /* 'command' */
    cpy_r_r4 = CPyDict_SetItem(cpy_r_args, cpy_r_r3, cpy_r_command);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 655, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r6 = CPyModule_sys;
    cpy_r_r7 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 658, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r9 = CPyStatics[1749]; /* 'isatty' */
    PyObject *cpy_r_r10[1] = {cpy_r_r8};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 658, CPyStatic_client___globals);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 658, CPyStatic_client___globals);
        goto CPyL84;
    }
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL12;
CPyL10: ;
    cpy_r_r15 = CPyDef_mypy___util___should_force_color();
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 658, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r14 = cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = CPyStatics[1750]; /* 'is_tty' */
    cpy_r_r17 = cpy_r_r14 ? Py_True : Py_False;
    cpy_r_r18 = CPyDict_SetItem(cpy_r_args, cpy_r_r16, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 658, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r20 = CPyDef_mypy___util___get_terminal_width();
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 659, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r21 = CPyStatics[1751]; /* 'terminal_width' */
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r_r23 = CPyDict_SetItem(cpy_r_args, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 659, CPyStatic_client___globals);
        goto CPyL84;
    }
    cpy_r_r25 = CPyModule_json;
    cpy_r_r26 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 660, CPyStatic_client___globals);
        goto CPyL84;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_args};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 660, CPyStatic_client___globals);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_args);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 660, CPyStatic_client___globals, "str", cpy_r_r30);
        goto CPyL83;
    }
    cpy_r_r32 = CPyStatics[1752]; /* 'utf8' */
    cpy_r_r33 = CPy_Encode(cpy_r_r31, cpy_r_r32, NULL);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 660, CPyStatic_client___globals);
        goto CPyL83;
    }
    cpy_r_bdata = cpy_r_r33;
    cpy_r_r34 = CPyDef_client___get_status(cpy_r_status_file);
    if (unlikely(cpy_r_r34.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 661, CPyStatic_client___globals);
        goto CPyL86;
    }
    cpy_r_r35 = cpy_r_r34.f0;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_r35);
    cpy_r__ = cpy_r_r36;
    CPy_DECREF(cpy_r__);
    cpy_r_r37 = cpy_r_r34.f1;
    CPy_INCREF(cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r34.f0);
    CPy_DECREF(cpy_r_r34.f1);
    cpy_r_name = cpy_r_r37;
    if (CPyFloat_Check(cpy_r_timeout))
        cpy_r_r38 = cpy_r_timeout;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL1889;
    if (cpy_r_timeout == Py_None)
        cpy_r_r38 = cpy_r_timeout;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL1889;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals, "float or None", cpy_r_timeout);
    goto CPyL87;
__LL1889: ;
    cpy_r_r39 = CPyDef_ipc___IPCClient(cpy_r_name, cpy_r_r38);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals);
        goto CPyL88;
    }
    cpy_r_r40 = CPyDef_ipc___IPCClient_____enter__(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals);
        goto CPyL89;
    }
    cpy_r_r41 = 1;
    cpy_r_client = cpy_r_r40;
    cpy_r_r42 = CPyDef_ipc___IPCBase___write(cpy_r_client, cpy_r_bdata);
    CPy_DECREF(cpy_r_bdata);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 664, CPyStatic_client___globals);
        goto CPyL90;
    }
    cpy_r_r43 = CPyDef_dmypy_util___receive(cpy_r_client);
    CPy_DECREF(cpy_r_client);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 665, CPyStatic_client___globals);
        goto CPyL29;
    }
    if (likely(PyDict_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeError("dict", cpy_r_r43); 
        cpy_r_r44 = NULL;
    }
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 665, CPyStatic_client___globals);
        goto CPyL29;
    } else
        goto CPyL91;
CPyL28: ;
    cpy_r_response = cpy_r_r44;
    goto CPyL37;
CPyL29: ;
    cpy_r_r45 = CPy_CatchError();
    cpy_r_r41 = 0;
    cpy_r_r46 = CPy_GetExcInfo();
    cpy_r_r47 = cpy_r_r46.f0;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = cpy_r_r46.f1;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = cpy_r_r46.f2;
    CPy_INCREF(cpy_r_r49);
    CPy_DecRef(cpy_r_r46.f0);
    CPy_DecRef(cpy_r_r46.f1);
    CPy_DecRef(cpy_r_r46.f2);
    cpy_r_r50 = CPyDef_ipc___IPCClient_____exit__(cpy_r_r39, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r51 = Py_None;
    cpy_r_r52 = PyObject_IsTrue(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r54 = cpy_r_r52;
    if (cpy_r_r54) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL92;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    goto CPyL37;
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    cpy_r_r55 = CPy_KeepPropagating();
    if (!cpy_r_r55) {
        goto CPyL38;
    } else
        goto CPyL93;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    tuple_T3OOO __tmp1890 = { NULL, NULL, NULL };
    cpy_r_r56 = __tmp1890;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL39;
CPyL38: ;
    cpy_r_r58 = CPy_CatchError();
    cpy_r_r57 = cpy_r_r58;
CPyL39: ;
    if (!cpy_r_r41) goto CPyL94;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = CPyDef_ipc___IPCClient_____exit__(cpy_r_r39, cpy_r_r59, cpy_r_r59, cpy_r_r59);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 663, CPyStatic_client___globals);
        goto CPyL95;
    }
CPyL41: ;
    if (cpy_r_r57.f0 == NULL) {
        goto CPyL57;
    } else
        goto CPyL96;
CPyL42: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL44;
    } else
        goto CPyL97;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    if (cpy_r_r57.f0 == NULL) goto CPyL46;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_XDECREF(cpy_r_r57.f0);
    CPy_XDECREF(cpy_r_r57.f1);
    CPy_XDECREF(cpy_r_r57.f2);
CPyL46: ;
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) goto CPyL48;
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r62 = CPy_CatchError();
    cpy_r_r63 = CPyModule_builtins;
    cpy_r_r64 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r65 = CPyObject_GetAttr(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 666, CPyStatic_client___globals);
        goto CPyL55;
    }
    cpy_r_r66 = (PyObject *)CPyType_ipc___IPCException;
    cpy_r_r67.f0 = cpy_r_r65;
    cpy_r_r67.f1 = cpy_r_r66;
    CPy_INCREF(cpy_r_r67.f0);
    CPy_INCREF(cpy_r_r67.f1);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1891 = cpy_r_r67.f0;
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp1891);
    PyObject *__tmp1892 = cpy_r_r67.f1;
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp1892);
    cpy_r_r69 = CPy_ExceptionMatches(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (!cpy_r_r69) goto CPyL53;
    cpy_r_r70 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r70;
    cpy_r_r71 = CPyStatics[401]; /* 'error' */
    cpy_r_r72 = PyObject_Str(cpy_r_err);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 667, CPyStatic_client___globals);
        goto CPyL55;
    }
    cpy_r_r73 = CPyDict_Build(1, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 667, CPyStatic_client___globals);
        goto CPyL55;
    }
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_r62.f2);
    return cpy_r_r73;
CPyL53: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL55;
    } else
        goto CPyL98;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_r62.f2);
    cpy_r_r74 = CPy_KeepPropagating();
    if (!cpy_r_r74) goto CPyL80;
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r75 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r76 = CPyDict_GetWithNone(cpy_r_response, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 671, CPyStatic_client___globals);
        goto CPyL99;
    }
    if (PyUnicode_Check(cpy_r_r76))
        cpy_r_r77 = cpy_r_r76;
    else {
        cpy_r_r77 = NULL;
    }
    if (cpy_r_r77 != NULL) goto __LL1893;
    if (cpy_r_r76 == Py_None)
        cpy_r_r77 = cpy_r_r76;
    else {
        cpy_r_r77 = NULL;
    }
    if (cpy_r_r77 != NULL) goto __LL1893;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 671, CPyStatic_client___globals, "str or None", cpy_r_r76);
    goto CPyL99;
__LL1893: ;
    cpy_r_stdout = cpy_r_r77;
    cpy_r_r78 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r79 = cpy_r_stdout != cpy_r_r78;
    if (!cpy_r_r79) goto CPyL100;
    CPy_INCREF(cpy_r_stdout);
    if (likely(cpy_r_stdout != Py_None))
        cpy_r_r80 = cpy_r_stdout;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 671, CPyStatic_client___globals, "str", cpy_r_stdout);
        goto CPyL101;
    }
    cpy_r_r81 = CPyStr_IsTrue(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (!cpy_r_r81) goto CPyL100;
    cpy_r_r82 = CPyModule_sys;
    cpy_r_r83 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r84 = CPyObject_GetAttr(cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 673, CPyStatic_client___globals);
        goto CPyL101;
    }
    if (likely(cpy_r_stdout != Py_None))
        cpy_r_r85 = cpy_r_stdout;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 673, CPyStatic_client___globals, "str", cpy_r_stdout);
        goto CPyL102;
    }
    cpy_r_r86 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r87[2] = {cpy_r_r84, cpy_r_r85};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r86, cpy_r_r88, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 673, CPyStatic_client___globals);
        goto CPyL103;
    } else
        goto CPyL104;
CPyL65: ;
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r85);
CPyL66: ;
    cpy_r_r90 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r91 = CPyDict_GetWithNone(cpy_r_response, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 674, CPyStatic_client___globals);
        goto CPyL99;
    }
    if (PyUnicode_Check(cpy_r_r91))
        cpy_r_r92 = cpy_r_r91;
    else {
        cpy_r_r92 = NULL;
    }
    if (cpy_r_r92 != NULL) goto __LL1894;
    if (cpy_r_r91 == Py_None)
        cpy_r_r92 = cpy_r_r91;
    else {
        cpy_r_r92 = NULL;
    }
    if (cpy_r_r92 != NULL) goto __LL1894;
    CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 674, CPyStatic_client___globals, "str or None", cpy_r_r91);
    goto CPyL99;
__LL1894: ;
    cpy_r_stderr = cpy_r_r92;
    cpy_r_r93 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r94 = cpy_r_stderr != cpy_r_r93;
    if (!cpy_r_r94) goto CPyL105;
    CPy_INCREF(cpy_r_stderr);
    if (likely(cpy_r_stderr != Py_None))
        cpy_r_r95 = cpy_r_stderr;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 674, CPyStatic_client___globals, "str", cpy_r_stderr);
        goto CPyL106;
    }
    cpy_r_r96 = CPyStr_IsTrue(cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (!cpy_r_r96) goto CPyL105;
    cpy_r_r97 = CPyStatics[1753]; /* '-------------------------------------------------------------------------------' */
    cpy_r_r98 = CPyModule_builtins;
    cpy_r_r99 = CPyStatics[190]; /* 'print' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 676, CPyStatic_client___globals);
        goto CPyL106;
    }
    PyObject *cpy_r_r101[1] = {cpy_r_r97};
    cpy_r_r102 = (PyObject **)&cpy_r_r101;
    cpy_r_r103 = _PyObject_Vectorcall(cpy_r_r100, cpy_r_r102, 1, 0);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 676, CPyStatic_client___globals);
        goto CPyL106;
    } else
        goto CPyL107;
CPyL73: ;
    cpy_r_r104 = CPyStatics[1754]; /* 'stderr:' */
    cpy_r_r105 = CPyModule_builtins;
    cpy_r_r106 = CPyStatics[190]; /* 'print' */
    cpy_r_r107 = CPyObject_GetAttr(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 677, CPyStatic_client___globals);
        goto CPyL106;
    }
    PyObject *cpy_r_r108[1] = {cpy_r_r104};
    cpy_r_r109 = (PyObject **)&cpy_r_r108;
    cpy_r_r110 = _PyObject_Vectorcall(cpy_r_r107, cpy_r_r109, 1, 0);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 677, CPyStatic_client___globals);
        goto CPyL106;
    } else
        goto CPyL108;
CPyL75: ;
    cpy_r_r111 = CPyModule_sys;
    cpy_r_r112 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r113 = CPyObject_GetAttr(cpy_r_r111, cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 678, CPyStatic_client___globals);
        goto CPyL106;
    }
    if (likely(cpy_r_stderr != Py_None))
        cpy_r_r114 = cpy_r_stderr;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "request", 678, CPyStatic_client___globals, "str", cpy_r_stderr);
        goto CPyL109;
    }
    cpy_r_r115 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r116[2] = {cpy_r_r113, cpy_r_r114};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = PyObject_VectorcallMethod(cpy_r_r115, cpy_r_r117, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "request", 678, CPyStatic_client___globals);
        goto CPyL110;
    } else
        goto CPyL111;
CPyL78: ;
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114);
CPyL79: ;
    return cpy_r_response;
CPyL80: ;
    cpy_r_r119 = NULL;
    return cpy_r_r119;
CPyL81: ;
    CPy_INCREF(cpy_r_timeout);
    goto CPyL2;
CPyL82: ;
    CPy_DecRef(cpy_r_timeout);
    goto CPyL80;
CPyL83: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_response);
    goto CPyL80;
CPyL84: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_args);
    goto CPyL80;
CPyL85: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    goto CPyL80;
CPyL86: ;
    CPy_DecRef(cpy_r_timeout);
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_bdata);
    goto CPyL80;
CPyL87: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_bdata);
    CPy_DecRef(cpy_r_name);
    goto CPyL48;
CPyL88: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_bdata);
    goto CPyL48;
CPyL89: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_bdata);
    CPy_DecRef(cpy_r_r39);
    goto CPyL48;
CPyL90: ;
    CPy_DecRef(cpy_r_client);
    goto CPyL29;
CPyL91: ;
    CPy_DECREF(cpy_r_response);
    goto CPyL28;
CPyL92: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    goto CPyL33;
CPyL93: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r39);
    goto CPyL36;
CPyL94: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL41;
CPyL95: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL44;
CPyL96: ;
    CPy_DECREF(cpy_r_response);
    goto CPyL42;
CPyL97: ;
    CPy_XDECREF(cpy_r_r57.f0);
    CPy_XDECREF(cpy_r_r57.f1);
    CPy_XDECREF(cpy_r_r57.f2);
    goto CPyL43;
CPyL98: ;
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_r62.f2);
    goto CPyL54;
CPyL99: ;
    CPy_DecRef(cpy_r_response);
    goto CPyL80;
CPyL100: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL66;
CPyL101: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_stdout);
    goto CPyL80;
CPyL102: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r84);
    goto CPyL80;
CPyL103: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    goto CPyL80;
CPyL104: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL65;
CPyL105: ;
    CPy_DECREF(cpy_r_stderr);
    goto CPyL79;
CPyL106: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL80;
CPyL107: ;
    CPy_DECREF(cpy_r_r103);
    goto CPyL73;
CPyL108: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL75;
CPyL109: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r113);
    goto CPyL80;
CPyL110: ;
    CPy_DecRef(cpy_r_response);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    goto CPyL80;
CPyL111: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL78;
}

PyObject *CPyPy_client___request(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status_file", "command", "timeout", 0};
    static CPyArg_Parser parser = {"%OO|$O:request", kwlist, 0};
    PyObject *obj_status_file;
    PyObject *obj_command;
    PyObject *obj_timeout = NULL;
    PyObject *obj_kwds;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, NULL, &obj_kwds, &obj_status_file, &obj_command, &obj_timeout)) {
        return NULL;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    PyObject *arg_command;
    if (likely(PyUnicode_Check(obj_command)))
        arg_command = obj_command;
    else {
        CPy_TypeError("str", obj_command); 
        goto fail;
    }
    PyObject *arg_timeout;
    if (obj_timeout == NULL) {
        arg_timeout = NULL;
        goto __LL1895;
    }
    if (PyLong_Check(obj_timeout))
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1895;
    if (obj_timeout == Py_None)
        arg_timeout = obj_timeout;
    else {
        arg_timeout = NULL;
    }
    if (arg_timeout != NULL) goto __LL1895;
    CPy_TypeError("int or None", obj_timeout); 
    goto fail;
__LL1895: ;
    PyObject *arg_kwds = obj_kwds;
    PyObject *retval = CPyDef_client___request(arg_status_file, arg_command, arg_timeout, arg_kwds);
    CPy_DECREF(obj_kwds);
    return retval;
fail: ;
    CPy_DECREF(obj_kwds);
    CPy_AddTraceback("mypy/dmypy/client.py", "request", 639, CPyStatic_client___globals);
    return NULL;
}

tuple_T2IO CPyDef_client___get_status(PyObject *cpy_r_status_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_data;
    tuple_T2IO cpy_r_r1;
    tuple_T2IO cpy_r_r2;
    cpy_r_r0 = CPyDef_client___read_status(cpy_r_status_file);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "get_status", 689, CPyStatic_client___globals);
        goto CPyL3;
    }
    cpy_r_data = cpy_r_r0;
    cpy_r_r1 = CPyDef_client___check_status(cpy_r_data);
    CPy_DECREF(cpy_r_data);
    if (unlikely(cpy_r_r1.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "get_status", 690, CPyStatic_client___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    tuple_T2IO __tmp1896 = { CPY_INT_TAG, NULL };
    cpy_r_r2 = __tmp1896;
    return cpy_r_r2;
}

PyObject *CPyPy_client___get_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status_file", 0};
    static CPyArg_Parser parser = {"O:get_status", kwlist, 0};
    PyObject *obj_status_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_status_file)) {
        return NULL;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    tuple_T2IO retval = CPyDef_client___get_status(arg_status_file);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1897 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp1897);
    PyObject *__tmp1898 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1898);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "get_status", 682, CPyStatic_client___globals);
    return NULL;
}

tuple_T2IO CPyDef_client___check_status(PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_pid;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_connection_name;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T2IO cpy_r_r56;
    tuple_T2IO cpy_r_r57;
    cpy_r_r0 = CPyStatics[1755]; /* 'pid' */
    cpy_r_r1 = PyDict_Contains(cpy_r_data, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 700, CPyStatic_client___globals);
        goto CPyL36;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = CPyStatics[1756]; /* 'Invalid status file (no pid field)' */
    cpy_r_r6 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 701, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_client___BadStatus))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 701, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r9);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 701, CPyStatic_client___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyStatics[1755]; /* 'pid' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_data, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 702, CPyStatic_client___globals);
        goto CPyL36;
    }
    cpy_r_pid = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&PyLong_Type;
    cpy_r_r14 = PyObject_IsInstance(cpy_r_pid, cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 703, CPyStatic_client___globals);
        goto CPyL37;
    }
    cpy_r_r16 = cpy_r_r14;
    if (cpy_r_r16) {
        goto CPyL13;
    } else
        goto CPyL38;
CPyL9: ;
    cpy_r_r17 = CPyStatics[1757]; /* 'pid field is not an int' */
    cpy_r_r18 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 704, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_client___BadStatus))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 704, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r21);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 704, CPyStatic_client___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL13: ;
    if (likely(PyLong_Check(cpy_r_pid)))
        cpy_r_r23 = CPyTagged_FromObject(cpy_r_pid);
    else {
        CPy_TypeError("int", cpy_r_pid); cpy_r_r23 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 705, CPyStatic_client___globals);
        goto CPyL37;
    }
    cpy_r_r24 = CPyDef_dmypy_os___alive(cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 705, CPyStatic_client___globals);
        goto CPyL37;
    }
    if (cpy_r_r24) {
        goto CPyL20;
    } else
        goto CPyL39;
CPyL16: ;
    cpy_r_r25 = CPyStatics[1758]; /* 'Daemon has died' */
    cpy_r_r26 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r27[1] = {cpy_r_r25};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 706, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_client___BadStatus))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 706, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r29);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 706, CPyStatic_client___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r31 = CPyStatics[1759]; /* 'connection_name' */
    cpy_r_r32 = PyDict_Contains(cpy_r_data, cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 707, CPyStatic_client___globals);
        goto CPyL37;
    }
    cpy_r_r34 = cpy_r_r32;
    cpy_r_r35 = cpy_r_r34 ^ 1;
    if (cpy_r_r35) {
        goto CPyL40;
    } else
        goto CPyL26;
CPyL22: ;
    cpy_r_r36 = CPyStatics[1760]; /* 'Invalid status file (no connection_name field)' */
    cpy_r_r37 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r38[1] = {cpy_r_r36};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 708, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_client___BadStatus))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 708, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r40);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 708, CPyStatic_client___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r42 = CPyStatics[1759]; /* 'connection_name' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_data, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 709, CPyStatic_client___globals);
        goto CPyL37;
    }
    cpy_r_connection_name = cpy_r_r43;
    cpy_r_r44 = (PyObject *)&PyUnicode_Type;
    cpy_r_r45 = PyObject_IsInstance(cpy_r_connection_name, cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 710, CPyStatic_client___globals);
        goto CPyL41;
    }
    cpy_r_r47 = cpy_r_r45;
    if (cpy_r_r47) {
        goto CPyL33;
    } else
        goto CPyL42;
CPyL29: ;
    cpy_r_r48 = CPyStatics[1761]; /* 'connection_name field is not a string' */
    cpy_r_r49 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r50[1] = {cpy_r_r48};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 1, 0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 711, CPyStatic_client___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_client___BadStatus))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 711, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r52);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 711, CPyStatic_client___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(PyLong_Check(cpy_r_pid)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_pid);
    else {
        CPy_TypeError("int", cpy_r_pid); cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_pid);
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 712, CPyStatic_client___globals);
        goto CPyL43;
    }
    if (likely(PyUnicode_Check(cpy_r_connection_name)))
        cpy_r_r55 = cpy_r_connection_name;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "check_status", 712, CPyStatic_client___globals, "str", cpy_r_connection_name);
        goto CPyL44;
    }
    cpy_r_r56.f0 = cpy_r_r54;
    cpy_r_r56.f1 = cpy_r_r55;
    CPyTagged_INCREF(cpy_r_r56.f0);
    CPy_INCREF(cpy_r_r56.f1);
    CPyTagged_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    return cpy_r_r56;
CPyL36: ;
    tuple_T2IO __tmp1899 = { CPY_INT_TAG, NULL };
    cpy_r_r57 = __tmp1899;
    return cpy_r_r57;
CPyL37: ;
    CPy_DecRef(cpy_r_pid);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_pid);
    goto CPyL9;
CPyL39: ;
    CPy_DECREF(cpy_r_pid);
    goto CPyL16;
CPyL40: ;
    CPy_DECREF(cpy_r_pid);
    goto CPyL22;
CPyL41: ;
    CPy_DecRef(cpy_r_pid);
    CPy_DecRef(cpy_r_connection_name);
    goto CPyL36;
CPyL42: ;
    CPy_DECREF(cpy_r_pid);
    CPy_DECREF(cpy_r_connection_name);
    goto CPyL29;
CPyL43: ;
    CPy_DecRef(cpy_r_connection_name);
    goto CPyL36;
CPyL44: ;
    CPyTagged_DecRef(cpy_r_r54);
    goto CPyL36;
}

PyObject *CPyPy_client___check_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", 0};
    static CPyArg_Parser parser = {"O:check_status", kwlist, 0};
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_data)) {
        return NULL;
    }
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    tuple_T2IO retval = CPyDef_client___check_status(arg_data);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1900 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp1900);
    PyObject *__tmp1901 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1901);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "check_status", 693, CPyStatic_client___globals);
    return NULL;
}

PyObject *CPyDef_client___read_status(PyObject *cpy_r_status_file) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    tuple_T3OOO cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject **cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    cpy_r_r0 = NULL;
    cpy_r_data = cpy_r_r0;
    cpy_r_r1 = CPyModule_os;
    cpy_r_r2 = CPyStatics[142]; /* 'path' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 721, CPyStatic_client___globals);
        goto CPyL64;
    }
    cpy_r_r4 = CPyStatics[176]; /* 'isfile' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 721, CPyStatic_client___globals);
        goto CPyL64;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_status_file};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 721, CPyStatic_client___globals);
        goto CPyL64;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 721, CPyStatic_client___globals);
        goto CPyL64;
    }
    if (cpy_r_r9) {
        goto CPyL9;
    } else
        goto CPyL65;
CPyL5: ;
    cpy_r_r10 = CPyStatics[1762]; /* 'No status file found' */
    cpy_r_r11 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 722, CPyStatic_client___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_client___BadStatus))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "read_status", 722, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r14);
        goto CPyL63;
    }
    CPy_Raise(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 722, CPyStatic_client___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[199]; /* 'open' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL64;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_status_file};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL64;
    }
    cpy_r_r22 = PyObject_Type(cpy_r_r21);
    cpy_r_r23 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL66;
    }
    cpy_r_r25 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r25);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r21};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL67;
    }
    cpy_r_r30 = 1;
    cpy_r_f = cpy_r_r29;
    cpy_r_r31 = CPyModule_json;
    cpy_r_r32 = CPyStatics[263]; /* 'load' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 725, CPyStatic_client___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r34[1] = {cpy_r_f};
    cpy_r_r35 = (PyObject **)&cpy_r_r34;
    cpy_r_r36 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r35, 1, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 725, CPyStatic_client___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL18: ;
    CPy_DECREF(cpy_r_f);
    cpy_r_data = cpy_r_r36;
    goto CPyL37;
CPyL19: ;
    cpy_r_r37 = CPy_CatchError();
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 726, CPyStatic_client___globals);
        goto CPyL27;
    }
    cpy_r_r41 = CPy_ExceptionMatches(cpy_r_r40);
    CPy_DecRef(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL25;
    cpy_r_r42 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r42;
    CPy_DecRef(cpy_r_e);
    cpy_r_r43 = CPyStatics[1763]; /* 'Malformed status file (not JSON)' */
    cpy_r_r44 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r45[1] = {cpy_r_r43};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 727, CPyStatic_client___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_client___BadStatus))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "read_status", 727, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r47);
        goto CPyL27;
    }
    CPy_Raise(cpy_r_r48);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 727, CPyStatic_client___globals);
        goto CPyL27;
    } else
        goto CPyL70;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL71;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) {
        goto CPyL29;
    } else
        goto CPyL72;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r50 = CPy_CatchError();
    cpy_r_r30 = 0;
    cpy_r_r51 = CPy_GetExcInfo();
    cpy_r_r52 = cpy_r_r51.f0;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = cpy_r_r51.f1;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = cpy_r_r51.f2;
    CPy_INCREF(cpy_r_r54);
    CPy_DecRef(cpy_r_r51.f0);
    CPy_DecRef(cpy_r_r51.f1);
    CPy_DecRef(cpy_r_r51.f2);
    PyObject *cpy_r_r55[4] = {cpy_r_r21, cpy_r_r52, cpy_r_r53, cpy_r_r54};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r56, 4, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL73;
    }
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    cpy_r_r58 = PyObject_IsTrue(cpy_r_r57);
    CPy_DecRef(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL35;
    }
    cpy_r_r60 = cpy_r_r58;
    if (cpy_r_r60) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL74;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL37;
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) {
        goto CPyL38;
    } else
        goto CPyL75;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    tuple_T3OOO __tmp1902 = { NULL, NULL, NULL };
    cpy_r_r62 = __tmp1902;
    cpy_r_r63 = cpy_r_r62;
    goto CPyL39;
CPyL38: ;
    cpy_r_r64 = CPy_CatchError();
    cpy_r_r63 = cpy_r_r64;
CPyL39: ;
    if (!cpy_r_r30) goto CPyL76;
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r66[4] = {cpy_r_r21, cpy_r_r65, cpy_r_r65, cpy_r_r65};
    cpy_r_r67 = (PyObject **)&cpy_r_r66;
    cpy_r_r68 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r67, 4, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 723, CPyStatic_client___globals);
        goto CPyL77;
    } else
        goto CPyL78;
CPyL41: ;
    CPy_DECREF(cpy_r_r21);
CPyL42: ;
    if (cpy_r_r63.f0 == NULL) {
        goto CPyL49;
    } else
        goto CPyL79;
CPyL43: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL45;
    } else
        goto CPyL80;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    if (cpy_r_r63.f0 == NULL) goto CPyL47;
    CPy_RestoreExcInfo(cpy_r_r63);
    CPy_XDECREF(cpy_r_r63.f0);
    CPy_XDECREF(cpy_r_r63.f1);
    CPy_XDECREF(cpy_r_r63.f2);
CPyL47: ;
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) goto CPyL63;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r70 = (PyObject *)&PyDict_Type;
    if (cpy_r_data != NULL) goto CPyL52;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"data\" referenced before assignment");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 728, CPyStatic_client___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r72 = PyObject_IsInstance(cpy_r_data, cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 728, CPyStatic_client___globals);
        goto CPyL64;
    }
    cpy_r_r74 = cpy_r_r72;
    if (cpy_r_r74) {
        goto CPyL58;
    } else
        goto CPyL81;
CPyL54: ;
    cpy_r_r75 = CPyStatics[1764]; /* 'Invalid status file (not a dict)' */
    cpy_r_r76 = (PyObject *)CPyType_client___BadStatus;
    PyObject *cpy_r_r77[1] = {cpy_r_r75};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r76, cpy_r_r78, 1, 0);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 729, CPyStatic_client___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r79) == CPyType_client___BadStatus))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "read_status", 729, CPyStatic_client___globals, "mypy.dmypy.client.BadStatus", cpy_r_r79);
        goto CPyL63;
    }
    CPy_Raise(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 729, CPyStatic_client___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL58: ;
    if (cpy_r_data != NULL) goto CPyL61;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"data\" referenced before assignment");
    cpy_r_r81 = 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 730, CPyStatic_client___globals);
        goto CPyL63;
    }
    CPy_Unreachable();
CPyL61: ;
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r82 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "read_status", 730, CPyStatic_client___globals, "dict", cpy_r_data);
        goto CPyL63;
    }
    return cpy_r_r82;
CPyL63: ;
    cpy_r_r83 = NULL;
    return cpy_r_r83;
CPyL64: ;
    CPy_XDecRef(cpy_r_data);
    goto CPyL63;
CPyL65: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL5;
CPyL66: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL63;
CPyL67: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL63;
CPyL68: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL19;
CPyL69: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL18;
CPyL70: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL24;
CPyL71: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL26;
CPyL72: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL73: ;
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL35;
CPyL74: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r50.f0);
    CPy_DecRef(cpy_r_r50.f1);
    CPy_DecRef(cpy_r_r50.f2);
    goto CPyL33;
CPyL75: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL36;
CPyL76: ;
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r24);
    goto CPyL42;
CPyL77: ;
    CPy_XDecRef(cpy_r_data);
    CPy_DecRef(cpy_r_r21);
    goto CPyL45;
CPyL78: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL41;
CPyL79: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL43;
CPyL80: ;
    CPy_XDECREF(cpy_r_r63.f0);
    CPy_XDECREF(cpy_r_r63.f1);
    CPy_XDECREF(cpy_r_r63.f2);
    goto CPyL44;
CPyL81: ;
    CPy_XDECREF(cpy_r_data);
    goto CPyL54;
}

PyObject *CPyPy_client___read_status(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status_file", 0};
    static CPyArg_Parser parser = {"O:read_status", kwlist, 0};
    PyObject *obj_status_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_status_file)) {
        return NULL;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_client___read_status(arg_status_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "read_status", 715, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___is_running(PyObject *cpy_r_status_file) {
    tuple_T2IO cpy_r_r0;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_client___get_status(cpy_r_status_file);
    if (unlikely(cpy_r_r0.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "is_running", 736, CPyStatic_client___globals);
    } else
        goto CPyL10;
    cpy_r_r1 = CPy_CatchError();
    cpy_r_r2 = (PyObject *)CPyType_client___BadStatus;
    cpy_r_r3 = CPy_ExceptionMatches(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL4;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    return 0;
CPyL4: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL6;
    } else
        goto CPyL11;
CPyL5: ;
    CPy_Unreachable();
CPyL6: ;
    CPy_RestoreExcInfo(cpy_r_r1);
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    cpy_r_r4 = CPy_KeepPropagating();
    if (!cpy_r_r4) goto CPyL9;
    CPy_Unreachable();
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL10: ;
    CPyTagged_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r1.f0);
    CPy_DecRef(cpy_r_r1.f1);
    CPy_DecRef(cpy_r_r1.f2);
    goto CPyL5;
}

PyObject *CPyPy_client___is_running(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status_file", 0};
    static CPyArg_Parser parser = {"O:is_running", kwlist, 0};
    PyObject *obj_status_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_status_file)) {
        return NULL;
    }
    PyObject *arg_status_file;
    if (likely(PyUnicode_Check(obj_status_file)))
        arg_status_file = obj_status_file;
    else {
        CPy_TypeError("str", obj_status_file); 
        goto fail;
    }
    char retval = CPyDef_client___is_running(arg_status_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "is_running", 733, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client___console_entry(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[1704]; /* 'argv' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "console_entry", 744, CPyStatic_client___globals);
        goto CPyL6;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "console_entry", 744, CPyStatic_client___globals, "list", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_r4 = CPyList_GetSlice(cpy_r_r3, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "console_entry", 744, CPyStatic_client___globals);
        goto CPyL6;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "console_entry", 744, CPyStatic_client___globals, "list", cpy_r_r4);
        goto CPyL6;
    }
    cpy_r_r6 = CPyDef_client___main(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "console_entry", 744, CPyStatic_client___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_client___console_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":console_entry", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_client___console_entry();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/dmypy/client.py", "console_entry", 743, CPyStatic_client___globals);
    return NULL;
}

char CPyDef_client_____top_level__(void) {
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
    PyObject **cpy_r_r10;
    PyObject **cpy_r_r11;
    PyObject **cpy_r_r12;
    PyObject **cpy_r_r13;
    PyObject **cpy_r_r14;
    PyObject **cpy_r_r15;
    PyObject **cpy_r_r16;
    void *cpy_r_r18;
    void *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
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
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject **cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject **cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    int32_t cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject **cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject **cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject **cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject **cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject **cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject **cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject **cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject **cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject **cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject **cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    int32_t cpy_r_r292;
    char cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    int32_t cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject **cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    int32_t cpy_r_r310;
    char cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    int32_t cpy_r_r314;
    char cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject **cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    int32_t cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    int32_t cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject **cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject **cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject **cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject **cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject **cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject **cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject **cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    int32_t cpy_r_r417;
    char cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    int32_t cpy_r_r421;
    char cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject **cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    PyObject **cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    PyObject **cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject **cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject **cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    PyObject *cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject **cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    PyObject *cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject **cpy_r_r500;
    PyObject *cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject **cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    PyObject *cpy_r_r515;
    int32_t cpy_r_r516;
    char cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    int32_t cpy_r_r520;
    char cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject **cpy_r_r531;
    PyObject *cpy_r_r532;
    PyObject *cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    PyObject *cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    PyObject *cpy_r_r543;
    PyObject **cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject **cpy_r_r555;
    PyObject *cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    PyObject *cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject **cpy_r_r565;
    PyObject *cpy_r_r566;
    PyObject *cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject **cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    PyObject *cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject **cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject *cpy_r_r590;
    PyObject *cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject **cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    PyObject **cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject *cpy_r_r614;
    int32_t cpy_r_r615;
    char cpy_r_r616;
    PyObject *cpy_r_r617;
    PyObject *cpy_r_r618;
    int32_t cpy_r_r619;
    char cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject **cpy_r_r630;
    PyObject *cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    PyObject *cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject **cpy_r_r641;
    PyObject *cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    PyObject *cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject **cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject *cpy_r_r654;
    PyObject *cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    PyObject *cpy_r_r661;
    PyObject **cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject *cpy_r_r666;
    PyObject *cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    PyObject *cpy_r_r672;
    PyObject **cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject *cpy_r_r678;
    PyObject *cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    PyObject **cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject *cpy_r_r690;
    PyObject *cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    PyObject **cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject *cpy_r_r702;
    PyObject *cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject **cpy_r_r708;
    PyObject *cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject *cpy_r_r714;
    PyObject *cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject **cpy_r_r718;
    PyObject *cpy_r_r719;
    PyObject *cpy_r_r720;
    PyObject *cpy_r_r721;
    PyObject *cpy_r_r722;
    int32_t cpy_r_r723;
    char cpy_r_r724;
    PyObject *cpy_r_r725;
    PyObject *cpy_r_r726;
    int32_t cpy_r_r727;
    char cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject *cpy_r_r731;
    PyObject *cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    PyObject **cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    PyObject *cpy_r_r742;
    PyObject *cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject *cpy_r_r748;
    PyObject *cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    CPyPtr cpy_r_r752;
    CPyPtr cpy_r_r753;
    CPyPtr cpy_r_r754;
    CPyPtr cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    PyObject **cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject *cpy_r_r762;
    PyObject *cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    PyObject *cpy_r_r769;
    PyObject *cpy_r_r770;
    PyObject **cpy_r_r772;
    PyObject *cpy_r_r773;
    PyObject *cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject *cpy_r_r777;
    PyObject *cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject *cpy_r_r782;
    PyObject *cpy_r_r783;
    PyObject **cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    PyObject *cpy_r_r788;
    PyObject *cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject *cpy_r_r792;
    PyObject *cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject **cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject *cpy_r_r798;
    PyObject *cpy_r_r799;
    PyObject *cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    PyObject *cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    PyObject **cpy_r_r807;
    PyObject *cpy_r_r808;
    PyObject *cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    PyObject *cpy_r_r814;
    PyObject *cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject **cpy_r_r818;
    PyObject *cpy_r_r819;
    PyObject *cpy_r_r820;
    PyObject *cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    PyObject *cpy_r_r824;
    PyObject *cpy_r_r825;
    PyObject *cpy_r_r826;
    PyObject *cpy_r_r827;
    PyObject **cpy_r_r829;
    PyObject *cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    PyObject *cpy_r_r834;
    PyObject *cpy_r_r835;
    PyObject *cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    PyObject **cpy_r_r840;
    PyObject *cpy_r_r841;
    PyObject *cpy_r_r842;
    PyObject *cpy_r_r843;
    PyObject *cpy_r_r844;
    PyObject *cpy_r_r845;
    PyObject *cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject *cpy_r_r848;
    PyObject **cpy_r_r850;
    PyObject *cpy_r_r851;
    PyObject *cpy_r_r852;
    PyObject *cpy_r_r853;
    PyObject *cpy_r_r854;
    int32_t cpy_r_r855;
    char cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    int32_t cpy_r_r859;
    char cpy_r_r860;
    PyObject *cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    PyObject *cpy_r_r864;
    PyObject *cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject **cpy_r_r868;
    PyObject *cpy_r_r869;
    PyObject *cpy_r_r870;
    PyObject *cpy_r_r871;
    PyObject *cpy_r_r872;
    int32_t cpy_r_r873;
    char cpy_r_r874;
    PyObject *cpy_r_r875;
    PyObject *cpy_r_r876;
    int32_t cpy_r_r877;
    char cpy_r_r878;
    PyObject *cpy_r_r879;
    PyObject *cpy_r_r880;
    PyObject *cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    PyObject *cpy_r_r884;
    PyObject *cpy_r_r885;
    PyObject *cpy_r_r886;
    PyObject **cpy_r_r888;
    PyObject *cpy_r_r889;
    PyObject *cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    PyObject *cpy_r_r893;
    PyObject *cpy_r_r894;
    PyObject *cpy_r_r895;
    PyObject *cpy_r_r896;
    PyObject *cpy_r_r897;
    PyObject *cpy_r_r898;
    PyObject **cpy_r_r900;
    PyObject *cpy_r_r901;
    PyObject *cpy_r_r902;
    PyObject *cpy_r_r903;
    PyObject *cpy_r_r904;
    PyObject *cpy_r_r905;
    PyObject *cpy_r_r906;
    PyObject *cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    PyObject *cpy_r_r910;
    PyObject *cpy_r_r911;
    PyObject **cpy_r_r913;
    PyObject *cpy_r_r914;
    PyObject *cpy_r_r915;
    PyObject *cpy_r_r916;
    PyObject *cpy_r_r917;
    PyObject *cpy_r_r918;
    PyObject *cpy_r_r919;
    PyObject *cpy_r_r920;
    PyObject *cpy_r_r921;
    PyObject *cpy_r_r922;
    PyObject *cpy_r_r923;
    PyObject **cpy_r_r925;
    PyObject *cpy_r_r926;
    PyObject *cpy_r_r927;
    PyObject *cpy_r_r928;
    PyObject *cpy_r_r929;
    PyObject *cpy_r_r930;
    PyObject *cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject **cpy_r_r934;
    PyObject *cpy_r_r935;
    PyObject *cpy_r_r936;
    PyObject *cpy_r_r937;
    int32_t cpy_r_r938;
    char cpy_r_r939;
    PyObject *cpy_r_r940;
    PyObject *cpy_r_r941;
    int32_t cpy_r_r942;
    char cpy_r_r943;
    PyObject *cpy_r_r944;
    PyObject *cpy_r_r945;
    int32_t cpy_r_r946;
    char cpy_r_r947;
    PyObject *cpy_r_r948;
    PyObject *cpy_r_r949;
    PyObject *cpy_r_r950;
    PyObject *cpy_r_r951;
    PyObject *cpy_r_r952;
    PyObject *cpy_r_r953;
    PyObject *cpy_r_r954;
    PyObject *cpy_r_r955;
    PyObject *cpy_r_r956;
    PyObject *cpy_r_r957;
    int32_t cpy_r_r958;
    char cpy_r_r959;
    PyObject *cpy_r_r960;
    PyObject *cpy_r_r961;
    int32_t cpy_r_r962;
    char cpy_r_r963;
    PyObject *cpy_r_r964;
    PyObject *cpy_r_r965;
    PyObject *cpy_r_r966;
    PyObject *cpy_r_r967;
    PyObject *cpy_r_r968;
    PyObject *cpy_r_r969;
    PyObject *cpy_r_r970;
    CPyPtr cpy_r_r971;
    CPyPtr cpy_r_r972;
    PyObject *cpy_r_r973;
    tuple_T2OO cpy_r_r974;
    PyObject *cpy_r_r975;
    PyObject *cpy_r_r976;
    PyObject *cpy_r_r977;
    PyObject *cpy_r_r978;
    int32_t cpy_r_r979;
    char cpy_r_r980;
    PyObject *cpy_r_r981;
    PyObject *cpy_r_r982;
    PyObject *cpy_r_r983;
    PyObject *cpy_r_r984;
    PyObject *cpy_r_r985;
    PyObject *cpy_r_r986;
    PyObject *cpy_r_r987;
    PyObject **cpy_r_r989;
    PyObject *cpy_r_r990;
    PyObject *cpy_r_r991;
    PyObject *cpy_r_r992;
    int32_t cpy_r_r993;
    char cpy_r_r994;
    PyObject *cpy_r_r995;
    PyObject *cpy_r_r996;
    PyObject *cpy_r_r997;
    PyObject *cpy_r_r998;
    PyObject *cpy_r_r999;
    PyObject *cpy_r_r1000;
    PyObject *cpy_r_r1001;
    PyObject **cpy_r_r1003;
    PyObject *cpy_r_r1004;
    PyObject *cpy_r_r1005;
    PyObject *cpy_r_r1006;
    int32_t cpy_r_r1007;
    char cpy_r_r1008;
    PyObject *cpy_r_r1009;
    PyObject *cpy_r_r1010;
    PyObject *cpy_r_r1011;
    PyObject *cpy_r_r1012;
    PyObject *cpy_r_r1013;
    PyObject *cpy_r_r1014;
    PyObject *cpy_r_r1015;
    PyObject **cpy_r_r1017;
    PyObject *cpy_r_r1018;
    PyObject *cpy_r_r1019;
    PyObject *cpy_r_r1020;
    int32_t cpy_r_r1021;
    char cpy_r_r1022;
    PyObject *cpy_r_r1023;
    PyObject *cpy_r_r1024;
    PyObject *cpy_r_r1025;
    PyObject *cpy_r_r1026;
    PyObject *cpy_r_r1027;
    PyObject *cpy_r_r1028;
    PyObject *cpy_r_r1029;
    PyObject **cpy_r_r1031;
    PyObject *cpy_r_r1032;
    PyObject *cpy_r_r1033;
    PyObject *cpy_r_r1034;
    int32_t cpy_r_r1035;
    char cpy_r_r1036;
    PyObject *cpy_r_r1037;
    PyObject *cpy_r_r1038;
    PyObject *cpy_r_r1039;
    PyObject *cpy_r_r1040;
    PyObject *cpy_r_r1041;
    PyObject *cpy_r_r1042;
    PyObject *cpy_r_r1043;
    PyObject **cpy_r_r1045;
    PyObject *cpy_r_r1046;
    PyObject *cpy_r_r1047;
    PyObject *cpy_r_r1048;
    int32_t cpy_r_r1049;
    char cpy_r_r1050;
    PyObject *cpy_r_r1051;
    PyObject *cpy_r_r1052;
    PyObject *cpy_r_r1053;
    PyObject *cpy_r_r1054;
    PyObject *cpy_r_r1055;
    PyObject *cpy_r_r1056;
    PyObject *cpy_r_r1057;
    PyObject **cpy_r_r1059;
    PyObject *cpy_r_r1060;
    PyObject *cpy_r_r1061;
    PyObject *cpy_r_r1062;
    int32_t cpy_r_r1063;
    char cpy_r_r1064;
    PyObject *cpy_r_r1065;
    PyObject *cpy_r_r1066;
    PyObject *cpy_r_r1067;
    PyObject *cpy_r_r1068;
    PyObject *cpy_r_r1069;
    PyObject *cpy_r_r1070;
    PyObject *cpy_r_r1071;
    PyObject **cpy_r_r1073;
    PyObject *cpy_r_r1074;
    PyObject *cpy_r_r1075;
    PyObject *cpy_r_r1076;
    int32_t cpy_r_r1077;
    char cpy_r_r1078;
    PyObject *cpy_r_r1079;
    PyObject *cpy_r_r1080;
    PyObject *cpy_r_r1081;
    PyObject *cpy_r_r1082;
    PyObject *cpy_r_r1083;
    PyObject *cpy_r_r1084;
    PyObject *cpy_r_r1085;
    PyObject **cpy_r_r1087;
    PyObject *cpy_r_r1088;
    PyObject *cpy_r_r1089;
    PyObject *cpy_r_r1090;
    int32_t cpy_r_r1091;
    char cpy_r_r1092;
    PyObject *cpy_r_r1093;
    PyObject *cpy_r_r1094;
    PyObject *cpy_r_r1095;
    PyObject *cpy_r_r1096;
    PyObject *cpy_r_r1097;
    PyObject *cpy_r_r1098;
    PyObject *cpy_r_r1099;
    PyObject **cpy_r_r1101;
    PyObject *cpy_r_r1102;
    PyObject *cpy_r_r1103;
    PyObject *cpy_r_r1104;
    int32_t cpy_r_r1105;
    char cpy_r_r1106;
    PyObject *cpy_r_r1107;
    PyObject *cpy_r_r1108;
    PyObject *cpy_r_r1109;
    PyObject *cpy_r_r1110;
    PyObject *cpy_r_r1111;
    PyObject *cpy_r_r1112;
    PyObject *cpy_r_r1113;
    PyObject **cpy_r_r1115;
    PyObject *cpy_r_r1116;
    PyObject *cpy_r_r1117;
    PyObject *cpy_r_r1118;
    int32_t cpy_r_r1119;
    char cpy_r_r1120;
    PyObject *cpy_r_r1121;
    PyObject *cpy_r_r1122;
    PyObject *cpy_r_r1123;
    PyObject *cpy_r_r1124;
    PyObject *cpy_r_r1125;
    PyObject *cpy_r_r1126;
    PyObject *cpy_r_r1127;
    PyObject **cpy_r_r1129;
    PyObject *cpy_r_r1130;
    PyObject *cpy_r_r1131;
    PyObject *cpy_r_r1132;
    int32_t cpy_r_r1133;
    char cpy_r_r1134;
    PyObject *cpy_r_r1135;
    PyObject *cpy_r_r1136;
    PyObject *cpy_r_r1137;
    PyObject *cpy_r_r1138;
    PyObject *cpy_r_r1139;
    PyObject *cpy_r_r1140;
    PyObject *cpy_r_r1141;
    PyObject **cpy_r_r1143;
    PyObject *cpy_r_r1144;
    PyObject *cpy_r_r1145;
    PyObject *cpy_r_r1146;
    int32_t cpy_r_r1147;
    char cpy_r_r1148;
    PyObject *cpy_r_r1149;
    PyObject *cpy_r_r1150;
    PyObject *cpy_r_r1151;
    PyObject *cpy_r_r1152;
    PyObject *cpy_r_r1153;
    PyObject *cpy_r_r1154;
    PyObject *cpy_r_r1155;
    PyObject **cpy_r_r1157;
    PyObject *cpy_r_r1158;
    PyObject *cpy_r_r1159;
    PyObject *cpy_r_r1160;
    int32_t cpy_r_r1161;
    char cpy_r_r1162;
    char cpy_r_r1163;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", -1, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_client___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 7, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_argparse;
    cpy_r_r10 = (PyObject **)&CPyModule_base64;
    cpy_r_r11 = (PyObject **)&CPyModule_json;
    cpy_r_r12 = (PyObject **)&CPyModule_os;
    cpy_r_r13 = (PyObject **)&CPyModule_pickle;
    cpy_r_r14 = (PyObject **)&CPyModule_sys;
    cpy_r_r15 = (PyObject **)&CPyModule_time;
    cpy_r_r16 = (PyObject **)&CPyModule_traceback;
    PyObject **cpy_r_r17[8] = {
        cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14,
        cpy_r_r15, cpy_r_r16
    };
    cpy_r_r18 = (void *)&cpy_r_r17;
    int64_t cpy_r_r19[8] = {9, 10, 11, 12, 13, 14, 15, 16};
    cpy_r_r20 = (void *)&cpy_r_r19;
    cpy_r_r21 = CPyStatics[9311]; /* (('argparse', 'argparse', 'argparse'),
                                     ('base64', 'base64', 'base64'),
                                     ('json', 'json', 'json'), ('os', 'os', 'os'),
                                     ('pickle', 'pickle', 'pickle'), ('sys', 'sys', 'sys'),
                                     ('time', 'time', 'time'),
                                     ('traceback', 'traceback', 'traceback')) */
    cpy_r_r22 = CPyStatic_client___globals;
    cpy_r_r23 = CPyStatics[1768]; /* 'mypy/dmypy/client.py' */
    cpy_r_r24 = CPyStatics[17]; /* '<module>' */
    cpy_r_r25 = CPyImport_ImportMany(cpy_r_r21, cpy_r_r18, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r20);
    if (!cpy_r_r25) goto CPyL265;
    cpy_r_r26 = CPyStatics[9312]; /* ('Any', 'Callable', 'Mapping', 'NoReturn') */
    cpy_r_r27 = CPyStatics[21]; /* 'typing' */
    cpy_r_r28 = CPyStatic_client___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 17, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_typing = cpy_r_r29;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[9313]; /* ('alive', 'kill') */
    cpy_r_r31 = CPyStatics[1771]; /* 'mypy.dmypy_os' */
    cpy_r_r32 = CPyStatic_client___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r30, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 19, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_mypy___dmypy_os = cpy_r_r33;
    CPy_INCREF(CPyModule_mypy___dmypy_os);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9314]; /* ('DEFAULT_STATUS_FILE', 'receive') */
    cpy_r_r35 = CPyStatics[1774]; /* 'mypy.dmypy_util' */
    cpy_r_r36 = CPyStatic_client___globals;
    cpy_r_r37 = CPyImport_ImportFromMany(cpy_r_r35, cpy_r_r34, cpy_r_r34, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 20, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_mypy___dmypy_util = cpy_r_r37;
    CPy_INCREF(CPyModule_mypy___dmypy_util);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r38 = CPyStatics[9315]; /* ('IPCClient', 'IPCException') */
    cpy_r_r39 = CPyStatics[1777]; /* 'mypy.ipc' */
    cpy_r_r40 = CPyStatic_client___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 21, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_mypy___ipc = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___ipc);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9316]; /* ('check_python_version', 'get_terminal_width',
                                     'should_force_color') */
    cpy_r_r43 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r44 = CPyStatic_client___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 22, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_mypy___util = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[9159]; /* ('__version__',) */
    cpy_r_r47 = CPyStatics[597]; /* 'mypy.version' */
    cpy_r_r48 = CPyStatic_client___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 23, CPyStatic_client___globals);
        goto CPyL265;
    }
    CPyModule_mypy___version = cpy_r_r49;
    CPy_INCREF(CPyModule_mypy___version);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyModule_argparse;
    cpy_r_r51 = CPyStatics[1781]; /* 'RawDescriptionHelpFormatter' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r53 = PyTuple_Pack(1, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r54 = CPyStatics[12]; /* 'mypy.dmypy.client' */
    cpy_r_r55 = (PyObject *)CPyType_client___AugmentedHelpFormatter_template;
    cpy_r_r56 = CPyType_FromTemplate(cpy_r_r55, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r57 = CPyDef_client___AugmentedHelpFormatter_trait_vtable_setup();
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", -1, CPyStatic_client___globals);
        goto CPyL266;
    }
    cpy_r_r58 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r59 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r60 = PyTuple_Pack(1, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL266;
    }
    cpy_r_r61 = PyObject_SetAttr(cpy_r_r56, cpy_r_r58, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL266;
    }
    CPyType_client___AugmentedHelpFormatter = (PyTypeObject *)cpy_r_r56;
    CPy_INCREF(CPyType_client___AugmentedHelpFormatter);
    cpy_r_r63 = CPyStatic_client___globals;
    cpy_r_r64 = CPyStatics[1782]; /* 'AugmentedHelpFormatter' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 29, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r67 = CPyStatics[1673]; /* 'dmypy' */
    cpy_r_r68 = CPyStatics[1783]; /* 'Client for mypy daemon mode' */
    cpy_r_r69 = CPyStatics[1784]; /* '@' */
    cpy_r_r70 = CPyModule_argparse;
    cpy_r_r71 = CPyStatics[1785]; /* 'ArgumentParser' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 34, CPyStatic_client___globals);
        goto CPyL265;
    }
    PyObject *cpy_r_r73[3] = {cpy_r_r67, cpy_r_r68, cpy_r_r69};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = CPyStatics[9317]; /* ('prog', 'description', 'fromfile_prefix_chars') */
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 0, cpy_r_r75);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 34, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r77 = CPyStatic_client___globals;
    cpy_r_r78 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r79 = CPyDict_SetItem(cpy_r_r77, cpy_r_r78, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r80 = cpy_r_r79 >= 0;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 34, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r81 = CPyStatic_client___globals;
    cpy_r_r82 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 37, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r84 = CPyStatics[1681]; /* 'set_defaults' */
    cpy_r_r85 = Py_None;
    PyObject *cpy_r_r86[2] = {cpy_r_r83, cpy_r_r85};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = CPyStatics[9303]; /* ('action',) */
    cpy_r_r89 = PyObject_VectorcallMethod(cpy_r_r84, cpy_r_r87, 9223372036854775809ULL, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 37, CPyStatic_client___globals);
        goto CPyL267;
    } else
        goto CPyL268;
CPyL23: ;
    CPy_DECREF(cpy_r_r83);
    cpy_r_r90 = CPyStatic_client___globals;
    cpy_r_r91 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 38, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r93 = CPyStatics[1788]; /* '--status-file' */
    cpy_r_r94 = CPyStatics[1789]; /* '.dmypy.json' */
    cpy_r_r95 = CPyStatics[1790]; /* 'status file to retrieve daemon details' */
    cpy_r_r96 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r97[4] = {cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = CPyStatics[9318]; /* ('default', 'help') */
    cpy_r_r100 = PyObject_VectorcallMethod(cpy_r_r96, cpy_r_r98, 9223372036854775810ULL, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 38, CPyStatic_client___globals);
        goto CPyL269;
    } else
        goto CPyL270;
CPyL25: ;
    CPy_DECREF(cpy_r_r92);
    cpy_r_r101 = CPyStatic_client___globals;
    cpy_r_r102 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 41, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r104 = CPyStatics[1793]; /* '-V' */
    cpy_r_r105 = CPyStatics[1794]; /* '--version' */
    cpy_r_r106 = CPyStatics[1695]; /* 'version' */
    cpy_r_r107 = CPyStatics[1795]; /* '%(prog)s ' */
    cpy_r_r108 = CPyStatic_client___globals;
    cpy_r_r109 = CPyStatics[145]; /* '__version__' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 45, CPyStatic_client___globals);
        goto CPyL271;
    }
    if (likely(PyUnicode_Check(cpy_r_r110)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/dmypy/client.py", "<module>", 45, CPyStatic_client___globals, "str", cpy_r_r110);
        goto CPyL271;
    }
    cpy_r_r112 = PyUnicode_Concat(cpy_r_r107, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 45, CPyStatic_client___globals);
        goto CPyL271;
    }
    cpy_r_r113 = CPyStatics[1796]; /* "Show program's version number and exit" */
    cpy_r_r114 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r115[6] = {
        cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r112,
        cpy_r_r113
    };
    cpy_r_r116 = (PyObject **)&cpy_r_r115;
    cpy_r_r117 = CPyStatics[9319]; /* ('action', 'version', 'help') */
    cpy_r_r118 = PyObject_VectorcallMethod(cpy_r_r114, cpy_r_r116, 9223372036854775811ULL, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 41, CPyStatic_client___globals);
        goto CPyL272;
    } else
        goto CPyL273;
CPyL30: ;
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r119 = CPyStatic_client___globals;
    cpy_r_r120 = CPyStatics[1674]; /* 'parser' */
    cpy_r_r121 = CPyDict_GetItem(cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 48, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r122 = CPyStatics[1797]; /* 'add_subparsers' */
    PyObject *cpy_r_r123[1] = {cpy_r_r121};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = PyObject_VectorcallMethod(cpy_r_r122, cpy_r_r124, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 48, CPyStatic_client___globals);
        goto CPyL274;
    }
    CPy_DECREF(cpy_r_r121);
    cpy_r_r126 = CPyStatic_client___globals;
    cpy_r_r127 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 48, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r130 = CPyStatic_client___globals;
    cpy_r_r131 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r132 = CPyDict_GetItem(cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 50, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r133 = CPyStatics[1402]; /* 'start' */
    cpy_r_r134 = CPyStatics[1799]; /* 'Start daemon' */
    cpy_r_r135 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r136[3] = {cpy_r_r132, cpy_r_r133, cpy_r_r134};
    cpy_r_r137 = (PyObject **)&cpy_r_r136;
    cpy_r_r138 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r139 = PyObject_VectorcallMethod(cpy_r_r135, cpy_r_r137, 9223372036854775810ULL, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 50, CPyStatic_client___globals);
        goto CPyL275;
    }
    CPy_DECREF(cpy_r_r132);
    cpy_r_r140 = CPyStatic_client___globals;
    cpy_r_r141 = CPyStatics[1801]; /* 'start_parser' */
    cpy_r_r142 = CPyDict_SetItem(cpy_r_r140, cpy_r_r141, cpy_r_r139);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 50, CPyStatic_client___globals);
        goto CPyL276;
    }
    cpy_r_r144 = CPyStatic_client___globals;
    cpy_r_r145 = CPyStatics[1802]; /* 'p' */
    cpy_r_r146 = CPyDict_SetItem(cpy_r_r144, cpy_r_r145, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r147 = cpy_r_r146 >= 0;
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 50, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r148 = CPyStatic_client___globals;
    cpy_r_r149 = CPyStatics[1802]; /* 'p' */
    cpy_r_r150 = CPyDict_GetItem(cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 51, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r151 = CPyStatics[1803]; /* '--log-file' */
    cpy_r_r152 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r153 = (PyObject *)&PyUnicode_Type;
    cpy_r_r154 = CPyStatics[1805]; /* 'Direct daemon stdout/stderr to FILE' */
    cpy_r_r155 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r156[5] = {cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r154};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r159 = PyObject_VectorcallMethod(cpy_r_r155, cpy_r_r157, 9223372036854775810ULL, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 51, CPyStatic_client___globals);
        goto CPyL277;
    } else
        goto CPyL278;
CPyL39: ;
    CPy_DECREF(cpy_r_r150);
    cpy_r_r160 = CPyStatic_client___globals;
    cpy_r_r161 = CPyStatics[1802]; /* 'p' */
    cpy_r_r162 = CPyDict_GetItem(cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 52, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r163 = CPyStatics[1807]; /* '--timeout' */
    cpy_r_r164 = CPyStatics[1808]; /* 'TIMEOUT' */
    cpy_r_r165 = (PyObject *)&PyLong_Type;
    cpy_r_r166 = CPyStatics[1809]; /* 'Server shutdown timeout (in seconds)' */
    cpy_r_r167 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r168[5] = {cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r171 = PyObject_VectorcallMethod(cpy_r_r167, cpy_r_r169, 9223372036854775810ULL, cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 52, CPyStatic_client___globals);
        goto CPyL279;
    } else
        goto CPyL280;
CPyL41: ;
    CPy_DECREF(cpy_r_r162);
    cpy_r_r172 = CPyStatic_client___globals;
    cpy_r_r173 = CPyStatics[1802]; /* 'p' */
    cpy_r_r174 = CPyDict_GetItem(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 55, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r175 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r176 = CPyStatics[1810]; /* 'FLAG' */
    cpy_r_r177 = CPyStatics[282]; /* '*' */
    cpy_r_r178 = (PyObject *)&PyUnicode_Type;
    cpy_r_r179 = CPyStatics[1811]; /* 'Regular mypy flags (precede with --)' */
    cpy_r_r180 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r181[6] = {
        cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178,
        cpy_r_r179
    };
    cpy_r_r182 = (PyObject **)&cpy_r_r181;
    cpy_r_r183 = CPyStatics[9322]; /* ('metavar', 'nargs', 'type', 'help') */
    cpy_r_r184 = PyObject_VectorcallMethod(cpy_r_r180, cpy_r_r182, 9223372036854775810ULL, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 55, CPyStatic_client___globals);
        goto CPyL281;
    } else
        goto CPyL282;
CPyL43: ;
    CPy_DECREF(cpy_r_r174);
    cpy_r_r185 = CPyStatic_client___globals;
    cpy_r_r186 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r187 = CPyDict_GetItem(cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 59, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r188 = CPyStatics[1696]; /* 'restart' */
    cpy_r_r189 = CPyStatics[1813]; /* 'Restart daemon (stop or kill followed by start)' */
    cpy_r_r190 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r191[3] = {cpy_r_r187, cpy_r_r188, cpy_r_r189};
    cpy_r_r192 = (PyObject **)&cpy_r_r191;
    cpy_r_r193 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r194 = PyObject_VectorcallMethod(cpy_r_r190, cpy_r_r192, 9223372036854775810ULL, cpy_r_r193);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 59, CPyStatic_client___globals);
        goto CPyL283;
    }
    CPy_DECREF(cpy_r_r187);
    cpy_r_r195 = CPyStatic_client___globals;
    cpy_r_r196 = CPyStatics[1814]; /* 'restart_parser' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r195, cpy_r_r196, cpy_r_r194);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 59, CPyStatic_client___globals);
        goto CPyL284;
    }
    cpy_r_r199 = CPyStatic_client___globals;
    cpy_r_r200 = CPyStatics[1802]; /* 'p' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r199, cpy_r_r200, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 59, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r203 = CPyStatic_client___globals;
    cpy_r_r204 = CPyStatics[1802]; /* 'p' */
    cpy_r_r205 = CPyDict_GetItem(cpy_r_r203, cpy_r_r204);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 62, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r206 = CPyStatics[1803]; /* '--log-file' */
    cpy_r_r207 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r208 = (PyObject *)&PyUnicode_Type;
    cpy_r_r209 = CPyStatics[1805]; /* 'Direct daemon stdout/stderr to FILE' */
    cpy_r_r210 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r211[5] = {cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209};
    cpy_r_r212 = (PyObject **)&cpy_r_r211;
    cpy_r_r213 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r214 = PyObject_VectorcallMethod(cpy_r_r210, cpy_r_r212, 9223372036854775810ULL, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 62, CPyStatic_client___globals);
        goto CPyL285;
    } else
        goto CPyL286;
CPyL49: ;
    CPy_DECREF(cpy_r_r205);
    cpy_r_r215 = CPyStatic_client___globals;
    cpy_r_r216 = CPyStatics[1802]; /* 'p' */
    cpy_r_r217 = CPyDict_GetItem(cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 63, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r218 = CPyStatics[1807]; /* '--timeout' */
    cpy_r_r219 = CPyStatics[1808]; /* 'TIMEOUT' */
    cpy_r_r220 = (PyObject *)&PyLong_Type;
    cpy_r_r221 = CPyStatics[1809]; /* 'Server shutdown timeout (in seconds)' */
    cpy_r_r222 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r223[5] = {cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221};
    cpy_r_r224 = (PyObject **)&cpy_r_r223;
    cpy_r_r225 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r226 = PyObject_VectorcallMethod(cpy_r_r222, cpy_r_r224, 9223372036854775810ULL, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 63, CPyStatic_client___globals);
        goto CPyL287;
    } else
        goto CPyL288;
CPyL51: ;
    CPy_DECREF(cpy_r_r217);
    cpy_r_r227 = CPyStatic_client___globals;
    cpy_r_r228 = CPyStatics[1802]; /* 'p' */
    cpy_r_r229 = CPyDict_GetItem(cpy_r_r227, cpy_r_r228);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 66, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r230 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r231 = CPyStatics[1810]; /* 'FLAG' */
    cpy_r_r232 = CPyStatics[282]; /* '*' */
    cpy_r_r233 = (PyObject *)&PyUnicode_Type;
    cpy_r_r234 = CPyStatics[1811]; /* 'Regular mypy flags (precede with --)' */
    cpy_r_r235 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r236[6] = {
        cpy_r_r229, cpy_r_r230, cpy_r_r231, cpy_r_r232, cpy_r_r233,
        cpy_r_r234
    };
    cpy_r_r237 = (PyObject **)&cpy_r_r236;
    cpy_r_r238 = CPyStatics[9322]; /* ('metavar', 'nargs', 'type', 'help') */
    cpy_r_r239 = PyObject_VectorcallMethod(cpy_r_r235, cpy_r_r237, 9223372036854775810ULL, cpy_r_r238);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 66, CPyStatic_client___globals);
        goto CPyL289;
    } else
        goto CPyL290;
CPyL53: ;
    CPy_DECREF(cpy_r_r229);
    cpy_r_r240 = CPyStatic_client___globals;
    cpy_r_r241 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r242 = CPyDict_GetItem(cpy_r_r240, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 70, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r243 = CPyStatics[1701]; /* 'status' */
    cpy_r_r244 = CPyStatics[1815]; /* 'Show daemon status' */
    cpy_r_r245 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r246[3] = {cpy_r_r242, cpy_r_r243, cpy_r_r244};
    cpy_r_r247 = (PyObject **)&cpy_r_r246;
    cpy_r_r248 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r249 = PyObject_VectorcallMethod(cpy_r_r245, cpy_r_r247, 9223372036854775810ULL, cpy_r_r248);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 70, CPyStatic_client___globals);
        goto CPyL291;
    }
    CPy_DECREF(cpy_r_r242);
    cpy_r_r250 = CPyStatic_client___globals;
    cpy_r_r251 = CPyStatics[1816]; /* 'status_parser' */
    cpy_r_r252 = CPyDict_SetItem(cpy_r_r250, cpy_r_r251, cpy_r_r249);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 70, CPyStatic_client___globals);
        goto CPyL292;
    }
    cpy_r_r254 = CPyStatic_client___globals;
    cpy_r_r255 = CPyStatics[1802]; /* 'p' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r254, cpy_r_r255, cpy_r_r249);
    CPy_DECREF(cpy_r_r249);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 70, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r258 = CPyStatic_client___globals;
    cpy_r_r259 = CPyStatics[1802]; /* 'p' */
    cpy_r_r260 = CPyDict_GetItem(cpy_r_r258, cpy_r_r259);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 71, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r261 = CPyStatics[1817]; /* '-v' */
    cpy_r_r262 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r263 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r264 = CPyStatics[1820]; /* 'Print detailed status' */
    cpy_r_r265 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r266[5] = {cpy_r_r260, cpy_r_r261, cpy_r_r262, cpy_r_r263, cpy_r_r264};
    cpy_r_r267 = (PyObject **)&cpy_r_r266;
    cpy_r_r268 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r269 = PyObject_VectorcallMethod(cpy_r_r265, cpy_r_r267, 9223372036854775811ULL, cpy_r_r268);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 71, CPyStatic_client___globals);
        goto CPyL293;
    } else
        goto CPyL294;
CPyL59: ;
    CPy_DECREF(cpy_r_r260);
    cpy_r_r270 = CPyStatic_client___globals;
    cpy_r_r271 = CPyStatics[1802]; /* 'p' */
    cpy_r_r272 = CPyDict_GetItem(cpy_r_r270, cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 72, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r273 = CPyStatics[1821]; /* '--fswatcher-dump-file' */
    cpy_r_r274 = CPyStatics[1822]; /* 'Collect information about the current file state' */
    cpy_r_r275 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r276[3] = {cpy_r_r272, cpy_r_r273, cpy_r_r274};
    cpy_r_r277 = (PyObject **)&cpy_r_r276;
    cpy_r_r278 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r279 = PyObject_VectorcallMethod(cpy_r_r275, cpy_r_r277, 9223372036854775810ULL, cpy_r_r278);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 72, CPyStatic_client___globals);
        goto CPyL295;
    } else
        goto CPyL296;
CPyL61: ;
    CPy_DECREF(cpy_r_r272);
    cpy_r_r280 = CPyStatic_client___globals;
    cpy_r_r281 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r282 = CPyDict_GetItem(cpy_r_r280, cpy_r_r281);
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 74, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r283 = CPyStatics[1707]; /* 'stop' */
    cpy_r_r284 = CPyStatics[1823]; /* 'Stop daemon (asks it politely to go away)' */
    cpy_r_r285 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r286[3] = {cpy_r_r282, cpy_r_r283, cpy_r_r284};
    cpy_r_r287 = (PyObject **)&cpy_r_r286;
    cpy_r_r288 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r289 = PyObject_VectorcallMethod(cpy_r_r285, cpy_r_r287, 9223372036854775810ULL, cpy_r_r288);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 74, CPyStatic_client___globals);
        goto CPyL297;
    }
    CPy_DECREF(cpy_r_r282);
    cpy_r_r290 = CPyStatic_client___globals;
    cpy_r_r291 = CPyStatics[1824]; /* 'stop_parser' */
    cpy_r_r292 = CPyDict_SetItem(cpy_r_r290, cpy_r_r291, cpy_r_r289);
    cpy_r_r293 = cpy_r_r292 >= 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 74, CPyStatic_client___globals);
        goto CPyL298;
    }
    cpy_r_r294 = CPyStatic_client___globals;
    cpy_r_r295 = CPyStatics[1802]; /* 'p' */
    cpy_r_r296 = CPyDict_SetItem(cpy_r_r294, cpy_r_r295, cpy_r_r289);
    CPy_DECREF(cpy_r_r289);
    cpy_r_r297 = cpy_r_r296 >= 0;
    if (unlikely(!cpy_r_r297)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 74, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r298 = CPyStatic_client___globals;
    cpy_r_r299 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r300 = CPyDict_GetItem(cpy_r_r298, cpy_r_r299);
    if (unlikely(cpy_r_r300 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 76, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r301 = CPyStatics[1770]; /* 'kill' */
    cpy_r_r302 = CPyStatics[1825]; /* 'Kill daemon (kills the process)' */
    cpy_r_r303 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r304[3] = {cpy_r_r300, cpy_r_r301, cpy_r_r302};
    cpy_r_r305 = (PyObject **)&cpy_r_r304;
    cpy_r_r306 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r307 = PyObject_VectorcallMethod(cpy_r_r303, cpy_r_r305, 9223372036854775810ULL, cpy_r_r306);
    if (unlikely(cpy_r_r307 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 76, CPyStatic_client___globals);
        goto CPyL299;
    }
    CPy_DECREF(cpy_r_r300);
    cpy_r_r308 = CPyStatic_client___globals;
    cpy_r_r309 = CPyStatics[1826]; /* 'kill_parser' */
    cpy_r_r310 = CPyDict_SetItem(cpy_r_r308, cpy_r_r309, cpy_r_r307);
    cpy_r_r311 = cpy_r_r310 >= 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 76, CPyStatic_client___globals);
        goto CPyL300;
    }
    cpy_r_r312 = CPyStatic_client___globals;
    cpy_r_r313 = CPyStatics[1802]; /* 'p' */
    cpy_r_r314 = CPyDict_SetItem(cpy_r_r312, cpy_r_r313, cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    cpy_r_r315 = cpy_r_r314 >= 0;
    if (unlikely(!cpy_r_r315)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 76, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r316 = CPyStatic_client___globals;
    cpy_r_r317 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r318 = CPyDict_GetItem(cpy_r_r316, cpy_r_r317);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 78, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r319 = CPyStatics[1710]; /* 'check' */
    cpy_r_r320 = (PyObject *)CPyType_client___AugmentedHelpFormatter;
    cpy_r_r321 = CPyStatics[1827]; /* 'Check some files (requires daemon)' */
    cpy_r_r322 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r323[4] = {cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321};
    cpy_r_r324 = (PyObject **)&cpy_r_r323;
    cpy_r_r325 = CPyStatics[9324]; /* ('formatter_class', 'help') */
    cpy_r_r326 = PyObject_VectorcallMethod(cpy_r_r322, cpy_r_r324, 9223372036854775810ULL, cpy_r_r325);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 78, CPyStatic_client___globals);
        goto CPyL301;
    }
    CPy_DECREF(cpy_r_r318);
    cpy_r_r327 = CPyStatic_client___globals;
    cpy_r_r328 = CPyStatics[1829]; /* 'check_parser' */
    cpy_r_r329 = CPyDict_SetItem(cpy_r_r327, cpy_r_r328, cpy_r_r326);
    cpy_r_r330 = cpy_r_r329 >= 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 78, CPyStatic_client___globals);
        goto CPyL302;
    }
    cpy_r_r331 = CPyStatic_client___globals;
    cpy_r_r332 = CPyStatics[1802]; /* 'p' */
    cpy_r_r333 = CPyDict_SetItem(cpy_r_r331, cpy_r_r332, cpy_r_r326);
    CPy_DECREF(cpy_r_r326);
    cpy_r_r334 = cpy_r_r333 >= 0;
    if (unlikely(!cpy_r_r334)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 78, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r335 = CPyStatic_client___globals;
    cpy_r_r336 = CPyStatics[1802]; /* 'p' */
    cpy_r_r337 = CPyDict_GetItem(cpy_r_r335, cpy_r_r336);
    if (unlikely(cpy_r_r337 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 81, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r338 = CPyStatics[1817]; /* '-v' */
    cpy_r_r339 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r340 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r341 = CPyStatics[1820]; /* 'Print detailed status' */
    cpy_r_r342 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r343[5] = {cpy_r_r337, cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r341};
    cpy_r_r344 = (PyObject **)&cpy_r_r343;
    cpy_r_r345 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r346 = PyObject_VectorcallMethod(cpy_r_r342, cpy_r_r344, 9223372036854775811ULL, cpy_r_r345);
    if (unlikely(cpy_r_r346 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 81, CPyStatic_client___globals);
        goto CPyL303;
    } else
        goto CPyL304;
CPyL75: ;
    CPy_DECREF(cpy_r_r337);
    cpy_r_r347 = CPyStatic_client___globals;
    cpy_r_r348 = CPyStatics[1802]; /* 'p' */
    cpy_r_r349 = CPyDict_GetItem(cpy_r_r347, cpy_r_r348);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 82, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r350 = CPyStatics[1830]; /* '-q' */
    cpy_r_r351 = CPyStatics[1831]; /* '--quiet' */
    cpy_r_r352 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r353 = CPyModule_argparse;
    cpy_r_r354 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r355 = CPyObject_GetAttr(cpy_r_r353, cpy_r_r354);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 82, CPyStatic_client___globals);
        goto CPyL305;
    }
    cpy_r_r356 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r357[5] = {cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_r352, cpy_r_r355};
    cpy_r_r358 = (PyObject **)&cpy_r_r357;
    cpy_r_r359 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r360 = PyObject_VectorcallMethod(cpy_r_r356, cpy_r_r358, 9223372036854775811ULL, cpy_r_r359);
    if (unlikely(cpy_r_r360 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 82, CPyStatic_client___globals);
        goto CPyL306;
    } else
        goto CPyL307;
CPyL78: ;
    CPy_DECREF(cpy_r_r349);
    CPy_DECREF(cpy_r_r355);
    cpy_r_r361 = CPyStatic_client___globals;
    cpy_r_r362 = CPyStatics[1802]; /* 'p' */
    cpy_r_r363 = CPyDict_GetItem(cpy_r_r361, cpy_r_r362);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 83, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r364 = CPyStatics[1833]; /* '--junit-xml' */
    cpy_r_r365 = CPyStatics[1834]; /* 'Write junit.xml to the given file' */
    cpy_r_r366 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r367[3] = {cpy_r_r363, cpy_r_r364, cpy_r_r365};
    cpy_r_r368 = (PyObject **)&cpy_r_r367;
    cpy_r_r369 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r370 = PyObject_VectorcallMethod(cpy_r_r366, cpy_r_r368, 9223372036854775810ULL, cpy_r_r369);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 83, CPyStatic_client___globals);
        goto CPyL308;
    } else
        goto CPyL309;
CPyL80: ;
    CPy_DECREF(cpy_r_r363);
    cpy_r_r371 = CPyStatic_client___globals;
    cpy_r_r372 = CPyStatics[1802]; /* 'p' */
    cpy_r_r373 = CPyDict_GetItem(cpy_r_r371, cpy_r_r372);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 84, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r374 = CPyStatics[1835]; /* '--perf-stats-file' */
    cpy_r_r375 = CPyStatics[1836]; /* 'write performance information to the given file' */
    cpy_r_r376 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r377[3] = {cpy_r_r373, cpy_r_r374, cpy_r_r375};
    cpy_r_r378 = (PyObject **)&cpy_r_r377;
    cpy_r_r379 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r380 = PyObject_VectorcallMethod(cpy_r_r376, cpy_r_r378, 9223372036854775810ULL, cpy_r_r379);
    if (unlikely(cpy_r_r380 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 84, CPyStatic_client___globals);
        goto CPyL310;
    } else
        goto CPyL311;
CPyL82: ;
    CPy_DECREF(cpy_r_r373);
    cpy_r_r381 = CPyStatic_client___globals;
    cpy_r_r382 = CPyStatics[1802]; /* 'p' */
    cpy_r_r383 = CPyDict_GetItem(cpy_r_r381, cpy_r_r382);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 85, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r384 = CPyStatics[608]; /* 'files' */
    cpy_r_r385 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r386 = CPyStatics[886]; /* '+' */
    cpy_r_r387 = CPyStatics[1837]; /* 'File (or directory) to check' */
    cpy_r_r388 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r389[5] = {cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386, cpy_r_r387};
    cpy_r_r390 = (PyObject **)&cpy_r_r389;
    cpy_r_r391 = CPyStatics[9325]; /* ('metavar', 'nargs', 'help') */
    cpy_r_r392 = PyObject_VectorcallMethod(cpy_r_r388, cpy_r_r390, 9223372036854775810ULL, cpy_r_r391);
    if (unlikely(cpy_r_r392 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 85, CPyStatic_client___globals);
        goto CPyL312;
    } else
        goto CPyL313;
CPyL84: ;
    CPy_DECREF(cpy_r_r383);
    cpy_r_r393 = CPyStatic_client___globals;
    cpy_r_r394 = CPyStatics[1802]; /* 'p' */
    cpy_r_r395 = CPyDict_GetItem(cpy_r_r393, cpy_r_r394);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 86, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r396 = CPyStatics[1838]; /* '--export-types' */
    cpy_r_r397 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r398 = CPyStatics[1839]; /* ('Store types of all expressions in a shared location '
                                      '(useful for inspections)') */
    cpy_r_r399 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r400[4] = {cpy_r_r395, cpy_r_r396, cpy_r_r397, cpy_r_r398};
    cpy_r_r401 = (PyObject **)&cpy_r_r400;
    cpy_r_r402 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r403 = PyObject_VectorcallMethod(cpy_r_r399, cpy_r_r401, 9223372036854775810ULL, cpy_r_r402);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 86, CPyStatic_client___globals);
        goto CPyL314;
    } else
        goto CPyL315;
CPyL86: ;
    CPy_DECREF(cpy_r_r395);
    cpy_r_r404 = CPyStatic_client___globals;
    cpy_r_r405 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r406 = CPyDict_GetItem(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 92, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r407 = CPyStatics[1693]; /* 'run' */
    cpy_r_r408 = (PyObject *)CPyType_client___AugmentedHelpFormatter;
    cpy_r_r409 = CPyStatics[1840]; /* 'Check some files, [re]starting daemon if necessary' */
    cpy_r_r410 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r411[4] = {cpy_r_r406, cpy_r_r407, cpy_r_r408, cpy_r_r409};
    cpy_r_r412 = (PyObject **)&cpy_r_r411;
    cpy_r_r413 = CPyStatics[9324]; /* ('formatter_class', 'help') */
    cpy_r_r414 = PyObject_VectorcallMethod(cpy_r_r410, cpy_r_r412, 9223372036854775810ULL, cpy_r_r413);
    if (unlikely(cpy_r_r414 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 92, CPyStatic_client___globals);
        goto CPyL316;
    }
    CPy_DECREF(cpy_r_r406);
    cpy_r_r415 = CPyStatic_client___globals;
    cpy_r_r416 = CPyStatics[1841]; /* 'run_parser' */
    cpy_r_r417 = CPyDict_SetItem(cpy_r_r415, cpy_r_r416, cpy_r_r414);
    cpy_r_r418 = cpy_r_r417 >= 0;
    if (unlikely(!cpy_r_r418)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 92, CPyStatic_client___globals);
        goto CPyL317;
    }
    cpy_r_r419 = CPyStatic_client___globals;
    cpy_r_r420 = CPyStatics[1802]; /* 'p' */
    cpy_r_r421 = CPyDict_SetItem(cpy_r_r419, cpy_r_r420, cpy_r_r414);
    CPy_DECREF(cpy_r_r414);
    cpy_r_r422 = cpy_r_r421 >= 0;
    if (unlikely(!cpy_r_r422)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 92, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r423 = CPyStatic_client___globals;
    cpy_r_r424 = CPyStatics[1802]; /* 'p' */
    cpy_r_r425 = CPyDict_GetItem(cpy_r_r423, cpy_r_r424);
    if (unlikely(cpy_r_r425 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 97, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r426 = CPyStatics[1817]; /* '-v' */
    cpy_r_r427 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r428 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r429 = CPyStatics[1820]; /* 'Print detailed status' */
    cpy_r_r430 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r431[5] = {cpy_r_r425, cpy_r_r426, cpy_r_r427, cpy_r_r428, cpy_r_r429};
    cpy_r_r432 = (PyObject **)&cpy_r_r431;
    cpy_r_r433 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r434 = PyObject_VectorcallMethod(cpy_r_r430, cpy_r_r432, 9223372036854775811ULL, cpy_r_r433);
    if (unlikely(cpy_r_r434 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 97, CPyStatic_client___globals);
        goto CPyL318;
    } else
        goto CPyL319;
CPyL92: ;
    CPy_DECREF(cpy_r_r425);
    cpy_r_r435 = CPyStatic_client___globals;
    cpy_r_r436 = CPyStatics[1802]; /* 'p' */
    cpy_r_r437 = CPyDict_GetItem(cpy_r_r435, cpy_r_r436);
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 98, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r438 = CPyStatics[1833]; /* '--junit-xml' */
    cpy_r_r439 = CPyStatics[1834]; /* 'Write junit.xml to the given file' */
    cpy_r_r440 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r441[3] = {cpy_r_r437, cpy_r_r438, cpy_r_r439};
    cpy_r_r442 = (PyObject **)&cpy_r_r441;
    cpy_r_r443 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r444 = PyObject_VectorcallMethod(cpy_r_r440, cpy_r_r442, 9223372036854775810ULL, cpy_r_r443);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 98, CPyStatic_client___globals);
        goto CPyL320;
    } else
        goto CPyL321;
CPyL94: ;
    CPy_DECREF(cpy_r_r437);
    cpy_r_r445 = CPyStatic_client___globals;
    cpy_r_r446 = CPyStatics[1802]; /* 'p' */
    cpy_r_r447 = CPyDict_GetItem(cpy_r_r445, cpy_r_r446);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 99, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r448 = CPyStatics[1835]; /* '--perf-stats-file' */
    cpy_r_r449 = CPyStatics[1836]; /* 'write performance information to the given file' */
    cpy_r_r450 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r451[3] = {cpy_r_r447, cpy_r_r448, cpy_r_r449};
    cpy_r_r452 = (PyObject **)&cpy_r_r451;
    cpy_r_r453 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r454 = PyObject_VectorcallMethod(cpy_r_r450, cpy_r_r452, 9223372036854775810ULL, cpy_r_r453);
    if (unlikely(cpy_r_r454 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 99, CPyStatic_client___globals);
        goto CPyL322;
    } else
        goto CPyL323;
CPyL96: ;
    CPy_DECREF(cpy_r_r447);
    cpy_r_r455 = CPyStatic_client___globals;
    cpy_r_r456 = CPyStatics[1802]; /* 'p' */
    cpy_r_r457 = CPyDict_GetItem(cpy_r_r455, cpy_r_r456);
    if (unlikely(cpy_r_r457 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 100, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r458 = CPyStatics[1807]; /* '--timeout' */
    cpy_r_r459 = CPyStatics[1808]; /* 'TIMEOUT' */
    cpy_r_r460 = (PyObject *)&PyLong_Type;
    cpy_r_r461 = CPyStatics[1809]; /* 'Server shutdown timeout (in seconds)' */
    cpy_r_r462 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r463[5] = {cpy_r_r457, cpy_r_r458, cpy_r_r459, cpy_r_r460, cpy_r_r461};
    cpy_r_r464 = (PyObject **)&cpy_r_r463;
    cpy_r_r465 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r466 = PyObject_VectorcallMethod(cpy_r_r462, cpy_r_r464, 9223372036854775810ULL, cpy_r_r465);
    if (unlikely(cpy_r_r466 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 100, CPyStatic_client___globals);
        goto CPyL324;
    } else
        goto CPyL325;
CPyL98: ;
    CPy_DECREF(cpy_r_r457);
    cpy_r_r467 = CPyStatic_client___globals;
    cpy_r_r468 = CPyStatics[1802]; /* 'p' */
    cpy_r_r469 = CPyDict_GetItem(cpy_r_r467, cpy_r_r468);
    if (unlikely(cpy_r_r469 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 103, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r470 = CPyStatics[1803]; /* '--log-file' */
    cpy_r_r471 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r472 = (PyObject *)&PyUnicode_Type;
    cpy_r_r473 = CPyStatics[1805]; /* 'Direct daemon stdout/stderr to FILE' */
    cpy_r_r474 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r475[5] = {cpy_r_r469, cpy_r_r470, cpy_r_r471, cpy_r_r472, cpy_r_r473};
    cpy_r_r476 = (PyObject **)&cpy_r_r475;
    cpy_r_r477 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r478 = PyObject_VectorcallMethod(cpy_r_r474, cpy_r_r476, 9223372036854775810ULL, cpy_r_r477);
    if (unlikely(cpy_r_r478 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 103, CPyStatic_client___globals);
        goto CPyL326;
    } else
        goto CPyL327;
CPyL100: ;
    CPy_DECREF(cpy_r_r469);
    cpy_r_r479 = CPyStatic_client___globals;
    cpy_r_r480 = CPyStatics[1802]; /* 'p' */
    cpy_r_r481 = CPyDict_GetItem(cpy_r_r479, cpy_r_r480);
    if (unlikely(cpy_r_r481 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 104, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r482 = CPyStatics[1838]; /* '--export-types' */
    cpy_r_r483 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r484 = CPyStatics[1839]; /* ('Store types of all expressions in a shared location '
                                      '(useful for inspections)') */
    cpy_r_r485 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r486[4] = {cpy_r_r481, cpy_r_r482, cpy_r_r483, cpy_r_r484};
    cpy_r_r487 = (PyObject **)&cpy_r_r486;
    cpy_r_r488 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r489 = PyObject_VectorcallMethod(cpy_r_r485, cpy_r_r487, 9223372036854775810ULL, cpy_r_r488);
    if (unlikely(cpy_r_r489 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 104, CPyStatic_client___globals);
        goto CPyL328;
    } else
        goto CPyL329;
CPyL102: ;
    CPy_DECREF(cpy_r_r481);
    cpy_r_r490 = CPyStatic_client___globals;
    cpy_r_r491 = CPyStatics[1802]; /* 'p' */
    cpy_r_r492 = CPyDict_GetItem(cpy_r_r490, cpy_r_r491);
    if (unlikely(cpy_r_r492 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 109, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r493 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r494 = CPyStatics[1842]; /* 'ARG' */
    cpy_r_r495 = CPyStatics[282]; /* '*' */
    cpy_r_r496 = (PyObject *)&PyUnicode_Type;
    cpy_r_r497 = CPyStatics[1843]; /* 'Regular mypy flags and files (precede with --)' */
    cpy_r_r498 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r499[6] = {
        cpy_r_r492, cpy_r_r493, cpy_r_r494, cpy_r_r495, cpy_r_r496,
        cpy_r_r497
    };
    cpy_r_r500 = (PyObject **)&cpy_r_r499;
    cpy_r_r501 = CPyStatics[9322]; /* ('metavar', 'nargs', 'type', 'help') */
    cpy_r_r502 = PyObject_VectorcallMethod(cpy_r_r498, cpy_r_r500, 9223372036854775810ULL, cpy_r_r501);
    if (unlikely(cpy_r_r502 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 109, CPyStatic_client___globals);
        goto CPyL330;
    } else
        goto CPyL331;
CPyL104: ;
    CPy_DECREF(cpy_r_r492);
    cpy_r_r503 = CPyStatic_client___globals;
    cpy_r_r504 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r505 = CPyDict_GetItem(cpy_r_r503, cpy_r_r504);
    if (unlikely(cpy_r_r505 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 117, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r506 = CPyStatics[1711]; /* 'recheck' */
    cpy_r_r507 = (PyObject *)CPyType_client___AugmentedHelpFormatter;
    cpy_r_r508 = CPyStatics[1844]; /* ('Re-check the previous list of files, with optional '
                                      'modifications (requires daemon)') */
    cpy_r_r509 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r510[4] = {cpy_r_r505, cpy_r_r506, cpy_r_r507, cpy_r_r508};
    cpy_r_r511 = (PyObject **)&cpy_r_r510;
    cpy_r_r512 = CPyStatics[9324]; /* ('formatter_class', 'help') */
    cpy_r_r513 = PyObject_VectorcallMethod(cpy_r_r509, cpy_r_r511, 9223372036854775810ULL, cpy_r_r512);
    if (unlikely(cpy_r_r513 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 117, CPyStatic_client___globals);
        goto CPyL332;
    }
    CPy_DECREF(cpy_r_r505);
    cpy_r_r514 = CPyStatic_client___globals;
    cpy_r_r515 = CPyStatics[1845]; /* 'recheck_parser' */
    cpy_r_r516 = CPyDict_SetItem(cpy_r_r514, cpy_r_r515, cpy_r_r513);
    cpy_r_r517 = cpy_r_r516 >= 0;
    if (unlikely(!cpy_r_r517)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 117, CPyStatic_client___globals);
        goto CPyL333;
    }
    cpy_r_r518 = CPyStatic_client___globals;
    cpy_r_r519 = CPyStatics[1802]; /* 'p' */
    cpy_r_r520 = CPyDict_SetItem(cpy_r_r518, cpy_r_r519, cpy_r_r513);
    CPy_DECREF(cpy_r_r513);
    cpy_r_r521 = cpy_r_r520 >= 0;
    if (unlikely(!cpy_r_r521)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 117, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r522 = CPyStatic_client___globals;
    cpy_r_r523 = CPyStatics[1802]; /* 'p' */
    cpy_r_r524 = CPyDict_GetItem(cpy_r_r522, cpy_r_r523);
    if (unlikely(cpy_r_r524 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 122, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r525 = CPyStatics[1817]; /* '-v' */
    cpy_r_r526 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r527 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r528 = CPyStatics[1820]; /* 'Print detailed status' */
    cpy_r_r529 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r530[5] = {cpy_r_r524, cpy_r_r525, cpy_r_r526, cpy_r_r527, cpy_r_r528};
    cpy_r_r531 = (PyObject **)&cpy_r_r530;
    cpy_r_r532 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r533 = PyObject_VectorcallMethod(cpy_r_r529, cpy_r_r531, 9223372036854775811ULL, cpy_r_r532);
    if (unlikely(cpy_r_r533 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 122, CPyStatic_client___globals);
        goto CPyL334;
    } else
        goto CPyL335;
CPyL110: ;
    CPy_DECREF(cpy_r_r524);
    cpy_r_r534 = CPyStatic_client___globals;
    cpy_r_r535 = CPyStatics[1802]; /* 'p' */
    cpy_r_r536 = CPyDict_GetItem(cpy_r_r534, cpy_r_r535);
    if (unlikely(cpy_r_r536 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 123, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r537 = CPyStatics[1830]; /* '-q' */
    cpy_r_r538 = CPyStatics[1831]; /* '--quiet' */
    cpy_r_r539 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r540 = CPyModule_argparse;
    cpy_r_r541 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r542 = CPyObject_GetAttr(cpy_r_r540, cpy_r_r541);
    if (unlikely(cpy_r_r542 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 123, CPyStatic_client___globals);
        goto CPyL336;
    }
    cpy_r_r543 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r544[5] = {cpy_r_r536, cpy_r_r537, cpy_r_r538, cpy_r_r539, cpy_r_r542};
    cpy_r_r545 = (PyObject **)&cpy_r_r544;
    cpy_r_r546 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r547 = PyObject_VectorcallMethod(cpy_r_r543, cpy_r_r545, 9223372036854775811ULL, cpy_r_r546);
    if (unlikely(cpy_r_r547 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 123, CPyStatic_client___globals);
        goto CPyL337;
    } else
        goto CPyL338;
CPyL113: ;
    CPy_DECREF(cpy_r_r536);
    CPy_DECREF(cpy_r_r542);
    cpy_r_r548 = CPyStatic_client___globals;
    cpy_r_r549 = CPyStatics[1802]; /* 'p' */
    cpy_r_r550 = CPyDict_GetItem(cpy_r_r548, cpy_r_r549);
    if (unlikely(cpy_r_r550 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 124, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r551 = CPyStatics[1833]; /* '--junit-xml' */
    cpy_r_r552 = CPyStatics[1834]; /* 'Write junit.xml to the given file' */
    cpy_r_r553 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r554[3] = {cpy_r_r550, cpy_r_r551, cpy_r_r552};
    cpy_r_r555 = (PyObject **)&cpy_r_r554;
    cpy_r_r556 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r557 = PyObject_VectorcallMethod(cpy_r_r553, cpy_r_r555, 9223372036854775810ULL, cpy_r_r556);
    if (unlikely(cpy_r_r557 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 124, CPyStatic_client___globals);
        goto CPyL339;
    } else
        goto CPyL340;
CPyL115: ;
    CPy_DECREF(cpy_r_r550);
    cpy_r_r558 = CPyStatic_client___globals;
    cpy_r_r559 = CPyStatics[1802]; /* 'p' */
    cpy_r_r560 = CPyDict_GetItem(cpy_r_r558, cpy_r_r559);
    if (unlikely(cpy_r_r560 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 125, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r561 = CPyStatics[1835]; /* '--perf-stats-file' */
    cpy_r_r562 = CPyStatics[1836]; /* 'write performance information to the given file' */
    cpy_r_r563 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r564[3] = {cpy_r_r560, cpy_r_r561, cpy_r_r562};
    cpy_r_r565 = (PyObject **)&cpy_r_r564;
    cpy_r_r566 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r567 = PyObject_VectorcallMethod(cpy_r_r563, cpy_r_r565, 9223372036854775810ULL, cpy_r_r566);
    if (unlikely(cpy_r_r567 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 125, CPyStatic_client___globals);
        goto CPyL341;
    } else
        goto CPyL342;
CPyL117: ;
    CPy_DECREF(cpy_r_r560);
    cpy_r_r568 = CPyStatic_client___globals;
    cpy_r_r569 = CPyStatics[1802]; /* 'p' */
    cpy_r_r570 = CPyDict_GetItem(cpy_r_r568, cpy_r_r569);
    if (unlikely(cpy_r_r570 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 126, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r571 = CPyStatics[1838]; /* '--export-types' */
    cpy_r_r572 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r573 = CPyStatics[1839]; /* ('Store types of all expressions in a shared location '
                                      '(useful for inspections)') */
    cpy_r_r574 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r575[4] = {cpy_r_r570, cpy_r_r571, cpy_r_r572, cpy_r_r573};
    cpy_r_r576 = (PyObject **)&cpy_r_r575;
    cpy_r_r577 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r578 = PyObject_VectorcallMethod(cpy_r_r574, cpy_r_r576, 9223372036854775810ULL, cpy_r_r577);
    if (unlikely(cpy_r_r578 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 126, CPyStatic_client___globals);
        goto CPyL343;
    } else
        goto CPyL344;
CPyL119: ;
    CPy_DECREF(cpy_r_r570);
    cpy_r_r579 = CPyStatic_client___globals;
    cpy_r_r580 = CPyStatics[1802]; /* 'p' */
    cpy_r_r581 = CPyDict_GetItem(cpy_r_r579, cpy_r_r580);
    if (unlikely(cpy_r_r581 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 131, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r582 = CPyStatics[1846]; /* '--update' */
    cpy_r_r583 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r584 = CPyStatics[282]; /* '*' */
    cpy_r_r585 = CPyStatics[1847]; /* ('Files in the run to add or check again (default: all '
                                      'from previous run)') */
    cpy_r_r586 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r587[5] = {cpy_r_r581, cpy_r_r582, cpy_r_r583, cpy_r_r584, cpy_r_r585};
    cpy_r_r588 = (PyObject **)&cpy_r_r587;
    cpy_r_r589 = CPyStatics[9325]; /* ('metavar', 'nargs', 'help') */
    cpy_r_r590 = PyObject_VectorcallMethod(cpy_r_r586, cpy_r_r588, 9223372036854775810ULL, cpy_r_r589);
    if (unlikely(cpy_r_r590 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 131, CPyStatic_client___globals);
        goto CPyL345;
    } else
        goto CPyL346;
CPyL121: ;
    CPy_DECREF(cpy_r_r581);
    cpy_r_r591 = CPyStatic_client___globals;
    cpy_r_r592 = CPyStatics[1802]; /* 'p' */
    cpy_r_r593 = CPyDict_GetItem(cpy_r_r591, cpy_r_r592);
    if (unlikely(cpy_r_r593 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 137, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r594 = CPyStatics[1848]; /* '--remove' */
    cpy_r_r595 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r596 = CPyStatics[282]; /* '*' */
    cpy_r_r597 = CPyStatics[1849]; /* 'Files to remove from the run' */
    cpy_r_r598 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r599[5] = {cpy_r_r593, cpy_r_r594, cpy_r_r595, cpy_r_r596, cpy_r_r597};
    cpy_r_r600 = (PyObject **)&cpy_r_r599;
    cpy_r_r601 = CPyStatics[9325]; /* ('metavar', 'nargs', 'help') */
    cpy_r_r602 = PyObject_VectorcallMethod(cpy_r_r598, cpy_r_r600, 9223372036854775810ULL, cpy_r_r601);
    if (unlikely(cpy_r_r602 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 137, CPyStatic_client___globals);
        goto CPyL347;
    } else
        goto CPyL348;
CPyL123: ;
    CPy_DECREF(cpy_r_r593);
    cpy_r_r603 = CPyStatic_client___globals;
    cpy_r_r604 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r605 = CPyDict_GetItem(cpy_r_r603, cpy_r_r604);
    if (unlikely(cpy_r_r605 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 139, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r606 = CPyStatics[1712]; /* 'suggest' */
    cpy_r_r607 = CPyStatics[1850]; /* ('Suggest a signature or show call sites for a '
                                      'specific function') */
    cpy_r_r608 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r609[3] = {cpy_r_r605, cpy_r_r606, cpy_r_r607};
    cpy_r_r610 = (PyObject **)&cpy_r_r609;
    cpy_r_r611 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r612 = PyObject_VectorcallMethod(cpy_r_r608, cpy_r_r610, 9223372036854775810ULL, cpy_r_r611);
    if (unlikely(cpy_r_r612 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 139, CPyStatic_client___globals);
        goto CPyL349;
    }
    CPy_DECREF(cpy_r_r605);
    cpy_r_r613 = CPyStatic_client___globals;
    cpy_r_r614 = CPyStatics[1851]; /* 'suggest_parser' */
    cpy_r_r615 = CPyDict_SetItem(cpy_r_r613, cpy_r_r614, cpy_r_r612);
    cpy_r_r616 = cpy_r_r615 >= 0;
    if (unlikely(!cpy_r_r616)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 139, CPyStatic_client___globals);
        goto CPyL350;
    }
    cpy_r_r617 = CPyStatic_client___globals;
    cpy_r_r618 = CPyStatics[1802]; /* 'p' */
    cpy_r_r619 = CPyDict_SetItem(cpy_r_r617, cpy_r_r618, cpy_r_r612);
    CPy_DECREF(cpy_r_r612);
    cpy_r_r620 = cpy_r_r619 >= 0;
    if (unlikely(!cpy_r_r620)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 139, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r621 = CPyStatic_client___globals;
    cpy_r_r622 = CPyStatics[1802]; /* 'p' */
    cpy_r_r623 = CPyDict_GetItem(cpy_r_r621, cpy_r_r622);
    if (unlikely(cpy_r_r623 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 142, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r624 = CPyStatics[1713]; /* 'function' */
    cpy_r_r625 = CPyStatics[1852]; /* 'FUNCTION' */
    cpy_r_r626 = (PyObject *)&PyUnicode_Type;
    cpy_r_r627 = CPyStatics[1853]; /* ('Function specified as '
                                      "'[package.]module.[class.]function'") */
    cpy_r_r628 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r629[5] = {cpy_r_r623, cpy_r_r624, cpy_r_r625, cpy_r_r626, cpy_r_r627};
    cpy_r_r630 = (PyObject **)&cpy_r_r629;
    cpy_r_r631 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r632 = PyObject_VectorcallMethod(cpy_r_r628, cpy_r_r630, 9223372036854775810ULL, cpy_r_r631);
    if (unlikely(cpy_r_r632 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 142, CPyStatic_client___globals);
        goto CPyL351;
    } else
        goto CPyL352;
CPyL129: ;
    CPy_DECREF(cpy_r_r623);
    cpy_r_r633 = CPyStatic_client___globals;
    cpy_r_r634 = CPyStatics[1802]; /* 'p' */
    cpy_r_r635 = CPyDict_GetItem(cpy_r_r633, cpy_r_r634);
    if (unlikely(cpy_r_r635 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 148, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r636 = CPyStatics[1854]; /* '--json' */
    cpy_r_r637 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r638 = CPyStatics[1855]; /* ('Produce json that pyannotate can use to apply a '
                                      'suggestion') */
    cpy_r_r639 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r640[4] = {cpy_r_r635, cpy_r_r636, cpy_r_r637, cpy_r_r638};
    cpy_r_r641 = (PyObject **)&cpy_r_r640;
    cpy_r_r642 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r643 = PyObject_VectorcallMethod(cpy_r_r639, cpy_r_r641, 9223372036854775810ULL, cpy_r_r642);
    if (unlikely(cpy_r_r643 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 148, CPyStatic_client___globals);
        goto CPyL353;
    } else
        goto CPyL354;
CPyL131: ;
    CPy_DECREF(cpy_r_r635);
    cpy_r_r644 = CPyStatic_client___globals;
    cpy_r_r645 = CPyStatics[1802]; /* 'p' */
    cpy_r_r646 = CPyDict_GetItem(cpy_r_r644, cpy_r_r645);
    if (unlikely(cpy_r_r646 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 153, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r647 = CPyStatics[1856]; /* '--no-errors' */
    cpy_r_r648 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r649 = CPyStatics[1857]; /* 'Only produce suggestions that cause no errors' */
    cpy_r_r650 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r651[4] = {cpy_r_r646, cpy_r_r647, cpy_r_r648, cpy_r_r649};
    cpy_r_r652 = (PyObject **)&cpy_r_r651;
    cpy_r_r653 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r654 = PyObject_VectorcallMethod(cpy_r_r650, cpy_r_r652, 9223372036854775810ULL, cpy_r_r653);
    if (unlikely(cpy_r_r654 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 153, CPyStatic_client___globals);
        goto CPyL355;
    } else
        goto CPyL356;
CPyL133: ;
    CPy_DECREF(cpy_r_r646);
    cpy_r_r655 = CPyStatic_client___globals;
    cpy_r_r656 = CPyStatics[1802]; /* 'p' */
    cpy_r_r657 = CPyDict_GetItem(cpy_r_r655, cpy_r_r656);
    if (unlikely(cpy_r_r657 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 156, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r658 = CPyStatics[1858]; /* '--no-any' */
    cpy_r_r659 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r660 = CPyStatics[1859]; /* "Only produce suggestions that don't contain Any" */
    cpy_r_r661 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r662[4] = {cpy_r_r657, cpy_r_r658, cpy_r_r659, cpy_r_r660};
    cpy_r_r663 = (PyObject **)&cpy_r_r662;
    cpy_r_r664 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r665 = PyObject_VectorcallMethod(cpy_r_r661, cpy_r_r663, 9223372036854775810ULL, cpy_r_r664);
    if (unlikely(cpy_r_r665 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 156, CPyStatic_client___globals);
        goto CPyL357;
    } else
        goto CPyL358;
CPyL135: ;
    CPy_DECREF(cpy_r_r657);
    cpy_r_r666 = CPyStatic_client___globals;
    cpy_r_r667 = CPyStatics[1802]; /* 'p' */
    cpy_r_r668 = CPyDict_GetItem(cpy_r_r666, cpy_r_r667);
    if (unlikely(cpy_r_r668 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 159, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r669 = CPyStatics[1860]; /* '--flex-any' */
    cpy_r_r670 = (PyObject *)&PyFloat_Type;
    cpy_r_r671 = CPyStatics[1861]; /* ('Allow anys in types if they go above a certain score '
                                      '(scores are from 0-1)') */
    cpy_r_r672 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r673[4] = {cpy_r_r668, cpy_r_r669, cpy_r_r670, cpy_r_r671};
    cpy_r_r674 = (PyObject **)&cpy_r_r673;
    cpy_r_r675 = CPyStatics[9326]; /* ('type', 'help') */
    cpy_r_r676 = PyObject_VectorcallMethod(cpy_r_r672, cpy_r_r674, 9223372036854775810ULL, cpy_r_r675);
    if (unlikely(cpy_r_r676 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 159, CPyStatic_client___globals);
        goto CPyL359;
    } else
        goto CPyL360;
CPyL137: ;
    CPy_DECREF(cpy_r_r668);
    cpy_r_r677 = CPyStatic_client___globals;
    cpy_r_r678 = CPyStatics[1802]; /* 'p' */
    cpy_r_r679 = CPyDict_GetItem(cpy_r_r677, cpy_r_r678);
    if (unlikely(cpy_r_r679 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 164, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r680 = CPyStatics[1862]; /* '--callsites' */
    cpy_r_r681 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r682 = CPyStatics[1863]; /* 'Find callsites instead of suggesting a type' */
    cpy_r_r683 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r684[4] = {cpy_r_r679, cpy_r_r680, cpy_r_r681, cpy_r_r682};
    cpy_r_r685 = (PyObject **)&cpy_r_r684;
    cpy_r_r686 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r687 = PyObject_VectorcallMethod(cpy_r_r683, cpy_r_r685, 9223372036854775810ULL, cpy_r_r686);
    if (unlikely(cpy_r_r687 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 164, CPyStatic_client___globals);
        goto CPyL361;
    } else
        goto CPyL362;
CPyL139: ;
    CPy_DECREF(cpy_r_r679);
    cpy_r_r688 = CPyStatic_client___globals;
    cpy_r_r689 = CPyStatics[1802]; /* 'p' */
    cpy_r_r690 = CPyDict_GetItem(cpy_r_r688, cpy_r_r689);
    if (unlikely(cpy_r_r690 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 167, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r691 = CPyStatics[1864]; /* '--use-fixme' */
    cpy_r_r692 = CPyStatics[1865]; /* 'NAME' */
    cpy_r_r693 = (PyObject *)&PyUnicode_Type;
    cpy_r_r694 = CPyStatics[1866]; /* ('A dummy name to use instead of Any for types that '
                                      "can't be inferred") */
    cpy_r_r695 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r696[5] = {cpy_r_r690, cpy_r_r691, cpy_r_r692, cpy_r_r693, cpy_r_r694};
    cpy_r_r697 = (PyObject **)&cpy_r_r696;
    cpy_r_r698 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r699 = PyObject_VectorcallMethod(cpy_r_r695, cpy_r_r697, 9223372036854775810ULL, cpy_r_r698);
    if (unlikely(cpy_r_r699 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 167, CPyStatic_client___globals);
        goto CPyL363;
    } else
        goto CPyL364;
CPyL141: ;
    CPy_DECREF(cpy_r_r690);
    cpy_r_r700 = CPyStatic_client___globals;
    cpy_r_r701 = CPyStatics[1802]; /* 'p' */
    cpy_r_r702 = CPyDict_GetItem(cpy_r_r700, cpy_r_r701);
    if (unlikely(cpy_r_r702 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 173, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r703 = CPyStatics[1867]; /* '--max-guesses' */
    cpy_r_r704 = (PyObject *)&PyLong_Type;
    cpy_r_r705 = CPyStatics[1868]; /* ('Set the maximum number of types to try for a '
                                      'function (default 64)') */
    cpy_r_r706 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r707[4] = {cpy_r_r702, cpy_r_r703, cpy_r_r704, cpy_r_r705};
    cpy_r_r708 = (PyObject **)&cpy_r_r707;
    cpy_r_r709 = CPyStatics[9326]; /* ('type', 'help') */
    cpy_r_r710 = PyObject_VectorcallMethod(cpy_r_r706, cpy_r_r708, 9223372036854775810ULL, cpy_r_r709);
    if (unlikely(cpy_r_r710 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 173, CPyStatic_client___globals);
        goto CPyL365;
    } else
        goto CPyL366;
CPyL143: ;
    CPy_DECREF(cpy_r_r702);
    cpy_r_r711 = CPyStatic_client___globals;
    cpy_r_r712 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r713 = CPyDict_GetItem(cpy_r_r711, cpy_r_r712);
    if (unlikely(cpy_r_r713 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 179, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r714 = CPyStatics[1720]; /* 'inspect' */
    cpy_r_r715 = CPyStatics[1869]; /* 'Locate and statically inspect expression(s)' */
    cpy_r_r716 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r717[3] = {cpy_r_r713, cpy_r_r714, cpy_r_r715};
    cpy_r_r718 = (PyObject **)&cpy_r_r717;
    cpy_r_r719 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r720 = PyObject_VectorcallMethod(cpy_r_r716, cpy_r_r718, 9223372036854775810ULL, cpy_r_r719);
    if (unlikely(cpy_r_r720 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 179, CPyStatic_client___globals);
        goto CPyL367;
    }
    CPy_DECREF(cpy_r_r713);
    cpy_r_r721 = CPyStatic_client___globals;
    cpy_r_r722 = CPyStatics[1870]; /* 'inspect_parser' */
    cpy_r_r723 = CPyDict_SetItem(cpy_r_r721, cpy_r_r722, cpy_r_r720);
    cpy_r_r724 = cpy_r_r723 >= 0;
    if (unlikely(!cpy_r_r724)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 179, CPyStatic_client___globals);
        goto CPyL368;
    }
    cpy_r_r725 = CPyStatic_client___globals;
    cpy_r_r726 = CPyStatics[1802]; /* 'p' */
    cpy_r_r727 = CPyDict_SetItem(cpy_r_r725, cpy_r_r726, cpy_r_r720);
    CPy_DECREF(cpy_r_r720);
    cpy_r_r728 = cpy_r_r727 >= 0;
    if (unlikely(!cpy_r_r728)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 179, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r729 = CPyStatic_client___globals;
    cpy_r_r730 = CPyStatics[1802]; /* 'p' */
    cpy_r_r731 = CPyDict_GetItem(cpy_r_r729, cpy_r_r730);
    if (unlikely(cpy_r_r731 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 182, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r732 = CPyStatics[1722]; /* 'location' */
    cpy_r_r733 = CPyStatics[1871]; /* 'LOCATION' */
    cpy_r_r734 = (PyObject *)&PyUnicode_Type;
    cpy_r_r735 = CPyStatics[1872]; /* ('Location specified as '
                                      'path/to/file.py:line:column[:end_line:end_column]. '
                                      'If position is given (i.e. only line and column), '
                                      'this will return all enclosing expressions') */
    cpy_r_r736 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r737[5] = {cpy_r_r731, cpy_r_r732, cpy_r_r733, cpy_r_r734, cpy_r_r735};
    cpy_r_r738 = (PyObject **)&cpy_r_r737;
    cpy_r_r739 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r740 = PyObject_VectorcallMethod(cpy_r_r736, cpy_r_r738, 9223372036854775810ULL, cpy_r_r739);
    if (unlikely(cpy_r_r740 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 182, CPyStatic_client___globals);
        goto CPyL369;
    } else
        goto CPyL370;
CPyL149: ;
    CPy_DECREF(cpy_r_r731);
    cpy_r_r741 = CPyStatic_client___globals;
    cpy_r_r742 = CPyStatics[1802]; /* 'p' */
    cpy_r_r743 = CPyDict_GetItem(cpy_r_r741, cpy_r_r742);
    if (unlikely(cpy_r_r743 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 190, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r744 = CPyStatics[1873]; /* '--show' */
    cpy_r_r745 = CPyStatics[1874]; /* 'INSPECTION' */
    cpy_r_r746 = (PyObject *)&PyUnicode_Type;
    cpy_r_r747 = CPyStatics[802]; /* 'type' */
    cpy_r_r748 = CPyStatics[802]; /* 'type' */
    cpy_r_r749 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r750 = CPyStatics[1876]; /* 'definition' */
    cpy_r_r751 = PyList_New(3);
    if (unlikely(cpy_r_r751 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 195, CPyStatic_client___globals);
        goto CPyL371;
    }
    cpy_r_r752 = (CPyPtr)&((PyListObject *)cpy_r_r751)->ob_item;
    cpy_r_r753 = *(CPyPtr *)cpy_r_r752;
    CPy_INCREF(cpy_r_r748);
    *(PyObject * *)cpy_r_r753 = cpy_r_r748;
    cpy_r_r754 = cpy_r_r753 + 8;
    CPy_INCREF(cpy_r_r749);
    *(PyObject * *)cpy_r_r754 = cpy_r_r749;
    cpy_r_r755 = cpy_r_r753 + 16;
    CPy_INCREF(cpy_r_r750);
    *(PyObject * *)cpy_r_r755 = cpy_r_r750;
    cpy_r_r756 = CPyStatics[1877]; /* 'What kind of inspection to run' */
    cpy_r_r757 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r758[7] = {
        cpy_r_r743, cpy_r_r744, cpy_r_r745, cpy_r_r746, cpy_r_r747,
        cpy_r_r751, cpy_r_r756
    };
    cpy_r_r759 = (PyObject **)&cpy_r_r758;
    cpy_r_r760 = CPyStatics[9327]; /* ('metavar', 'type', 'default', 'choices', 'help') */
    cpy_r_r761 = PyObject_VectorcallMethod(cpy_r_r757, cpy_r_r759, 9223372036854775810ULL, cpy_r_r760);
    if (unlikely(cpy_r_r761 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 190, CPyStatic_client___globals);
        goto CPyL372;
    } else
        goto CPyL373;
CPyL152: ;
    CPy_DECREF(cpy_r_r743);
    CPy_DECREF(cpy_r_r751);
    cpy_r_r762 = CPyStatic_client___globals;
    cpy_r_r763 = CPyStatics[1802]; /* 'p' */
    cpy_r_r764 = CPyDict_GetItem(cpy_r_r762, cpy_r_r763);
    if (unlikely(cpy_r_r764 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 198, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r765 = CPyStatics[1818]; /* '--verbose' */
    cpy_r_r766 = CPyStatics[1817]; /* '-v' */
    cpy_r_r767 = CPyStatics[226]; /* 'count' */
    cpy_r_r768 = CPyStatics[1879]; /* ('Increase verbosity of the type string representation '
                                      '(can be repeated)') */
    cpy_r_r769 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r770 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r771[6] = {
        cpy_r_r764, cpy_r_r765, cpy_r_r766, cpy_r_r767, cpy_r_r770,
        cpy_r_r768
    };
    cpy_r_r772 = (PyObject **)&cpy_r_r771;
    cpy_r_r773 = CPyStatics[9328]; /* ('action', 'default', 'help') */
    cpy_r_r774 = PyObject_VectorcallMethod(cpy_r_r769, cpy_r_r772, 9223372036854775811ULL, cpy_r_r773);
    if (unlikely(cpy_r_r774 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 198, CPyStatic_client___globals);
        goto CPyL374;
    } else
        goto CPyL375;
CPyL154: ;
    CPy_DECREF(cpy_r_r764);
    cpy_r_r775 = CPyStatic_client___globals;
    cpy_r_r776 = CPyStatics[1802]; /* 'p' */
    cpy_r_r777 = CPyDict_GetItem(cpy_r_r775, cpy_r_r776);
    if (unlikely(cpy_r_r777 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 205, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r778 = CPyStatics[1880]; /* '--limit' */
    cpy_r_r779 = CPyStatics[1881]; /* 'NUM' */
    cpy_r_r780 = (PyObject *)&PyLong_Type;
    cpy_r_r781 = CPyStatics[1882]; /* ('Return at most NUM innermost expressions (if '
                                      'position is given); 0 means no limit') */
    cpy_r_r782 = CPyStatics[1791]; /* 'add_argument' */
    cpy_r_r783 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r784[6] = {
        cpy_r_r777, cpy_r_r778, cpy_r_r779, cpy_r_r780, cpy_r_r783,
        cpy_r_r781
    };
    cpy_r_r785 = (PyObject **)&cpy_r_r784;
    cpy_r_r786 = CPyStatics[9329]; /* ('metavar', 'type', 'default', 'help') */
    cpy_r_r787 = PyObject_VectorcallMethod(cpy_r_r782, cpy_r_r785, 9223372036854775810ULL, cpy_r_r786);
    if (unlikely(cpy_r_r787 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 205, CPyStatic_client___globals);
        goto CPyL376;
    } else
        goto CPyL377;
CPyL156: ;
    CPy_DECREF(cpy_r_r777);
    cpy_r_r788 = CPyStatic_client___globals;
    cpy_r_r789 = CPyStatics[1802]; /* 'p' */
    cpy_r_r790 = CPyDict_GetItem(cpy_r_r788, cpy_r_r789);
    if (unlikely(cpy_r_r790 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 212, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r791 = CPyStatics[1883]; /* '--include-span' */
    cpy_r_r792 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r793 = CPyStatics[1884]; /* ('Prepend each inspection result with the span of '
                                      'corresponding expression (e.g. 1:2:3:4:"int")') */
    cpy_r_r794 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r795[4] = {cpy_r_r790, cpy_r_r791, cpy_r_r792, cpy_r_r793};
    cpy_r_r796 = (PyObject **)&cpy_r_r795;
    cpy_r_r797 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r798 = PyObject_VectorcallMethod(cpy_r_r794, cpy_r_r796, 9223372036854775810ULL, cpy_r_r797);
    if (unlikely(cpy_r_r798 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 212, CPyStatic_client___globals);
        goto CPyL378;
    } else
        goto CPyL379;
CPyL158: ;
    CPy_DECREF(cpy_r_r790);
    cpy_r_r799 = CPyStatic_client___globals;
    cpy_r_r800 = CPyStatics[1802]; /* 'p' */
    cpy_r_r801 = CPyDict_GetItem(cpy_r_r799, cpy_r_r800);
    if (unlikely(cpy_r_r801 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 218, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r802 = CPyStatics[1885]; /* '--include-kind' */
    cpy_r_r803 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r804 = CPyStatics[1886]; /* ('Prepend each inspection result with the kind of '
                                      'corresponding expression (e.g. NameExpr:"int")') */
    cpy_r_r805 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r806[4] = {cpy_r_r801, cpy_r_r802, cpy_r_r803, cpy_r_r804};
    cpy_r_r807 = (PyObject **)&cpy_r_r806;
    cpy_r_r808 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r809 = PyObject_VectorcallMethod(cpy_r_r805, cpy_r_r807, 9223372036854775810ULL, cpy_r_r808);
    if (unlikely(cpy_r_r809 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 218, CPyStatic_client___globals);
        goto CPyL380;
    } else
        goto CPyL381;
CPyL160: ;
    CPy_DECREF(cpy_r_r801);
    cpy_r_r810 = CPyStatic_client___globals;
    cpy_r_r811 = CPyStatics[1802]; /* 'p' */
    cpy_r_r812 = CPyDict_GetItem(cpy_r_r810, cpy_r_r811);
    if (unlikely(cpy_r_r812 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 224, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r813 = CPyStatics[1887]; /* '--include-object-attrs' */
    cpy_r_r814 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r815 = CPyStatics[1888]; /* 'Include attributes of "object" in "attrs" inspection' */
    cpy_r_r816 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r817[4] = {cpy_r_r812, cpy_r_r813, cpy_r_r814, cpy_r_r815};
    cpy_r_r818 = (PyObject **)&cpy_r_r817;
    cpy_r_r819 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r820 = PyObject_VectorcallMethod(cpy_r_r816, cpy_r_r818, 9223372036854775810ULL, cpy_r_r819);
    if (unlikely(cpy_r_r820 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 224, CPyStatic_client___globals);
        goto CPyL382;
    } else
        goto CPyL383;
CPyL162: ;
    CPy_DECREF(cpy_r_r812);
    cpy_r_r821 = CPyStatic_client___globals;
    cpy_r_r822 = CPyStatics[1802]; /* 'p' */
    cpy_r_r823 = CPyDict_GetItem(cpy_r_r821, cpy_r_r822);
    if (unlikely(cpy_r_r823 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 229, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r824 = CPyStatics[1889]; /* '--union-attrs' */
    cpy_r_r825 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r826 = CPyStatics[1890]; /* ('Include attributes valid for some of possible '
                                      'expression types (by default an intersection is '
                                      'returned)') */
    cpy_r_r827 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r828[4] = {cpy_r_r823, cpy_r_r824, cpy_r_r825, cpy_r_r826};
    cpy_r_r829 = (PyObject **)&cpy_r_r828;
    cpy_r_r830 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r831 = PyObject_VectorcallMethod(cpy_r_r827, cpy_r_r829, 9223372036854775810ULL, cpy_r_r830);
    if (unlikely(cpy_r_r831 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 229, CPyStatic_client___globals);
        goto CPyL384;
    } else
        goto CPyL385;
CPyL164: ;
    CPy_DECREF(cpy_r_r823);
    cpy_r_r832 = CPyStatic_client___globals;
    cpy_r_r833 = CPyStatics[1802]; /* 'p' */
    cpy_r_r834 = CPyDict_GetItem(cpy_r_r832, cpy_r_r833);
    if (unlikely(cpy_r_r834 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 235, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r835 = CPyStatics[1891]; /* '--force-reload' */
    cpy_r_r836 = CPyStatics[1819]; /* 'store_true' */
    cpy_r_r837 = CPyStatics[1892]; /* ('Re-parse and re-type-check file before inspection '
                                      '(may be slow)') */
    cpy_r_r838 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r839[4] = {cpy_r_r834, cpy_r_r835, cpy_r_r836, cpy_r_r837};
    cpy_r_r840 = (PyObject **)&cpy_r_r839;
    cpy_r_r841 = CPyStatics[9323]; /* ('action', 'help') */
    cpy_r_r842 = PyObject_VectorcallMethod(cpy_r_r838, cpy_r_r840, 9223372036854775810ULL, cpy_r_r841);
    if (unlikely(cpy_r_r842 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 235, CPyStatic_client___globals);
        goto CPyL386;
    } else
        goto CPyL387;
CPyL166: ;
    CPy_DECREF(cpy_r_r834);
    cpy_r_r843 = CPyStatic_client___globals;
    cpy_r_r844 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r845 = CPyDict_GetItem(cpy_r_r843, cpy_r_r844);
    if (unlikely(cpy_r_r845 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 241, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r846 = CPyStatics[1740]; /* 'hang' */
    cpy_r_r847 = CPyStatics[1893]; /* 'Hang for 100 seconds' */
    cpy_r_r848 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r849[3] = {cpy_r_r845, cpy_r_r846, cpy_r_r847};
    cpy_r_r850 = (PyObject **)&cpy_r_r849;
    cpy_r_r851 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r852 = PyObject_VectorcallMethod(cpy_r_r848, cpy_r_r850, 9223372036854775810ULL, cpy_r_r851);
    if (unlikely(cpy_r_r852 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 241, CPyStatic_client___globals);
        goto CPyL388;
    }
    CPy_DECREF(cpy_r_r845);
    cpy_r_r853 = CPyStatic_client___globals;
    cpy_r_r854 = CPyStatics[1894]; /* 'hang_parser' */
    cpy_r_r855 = CPyDict_SetItem(cpy_r_r853, cpy_r_r854, cpy_r_r852);
    cpy_r_r856 = cpy_r_r855 >= 0;
    if (unlikely(!cpy_r_r856)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 241, CPyStatic_client___globals);
        goto CPyL389;
    }
    cpy_r_r857 = CPyStatic_client___globals;
    cpy_r_r858 = CPyStatics[1802]; /* 'p' */
    cpy_r_r859 = CPyDict_SetItem(cpy_r_r857, cpy_r_r858, cpy_r_r852);
    CPy_DECREF(cpy_r_r852);
    cpy_r_r860 = cpy_r_r859 >= 0;
    if (unlikely(!cpy_r_r860)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 241, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r861 = CPyStatic_client___globals;
    cpy_r_r862 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r863 = CPyDict_GetItem(cpy_r_r861, cpy_r_r862);
    if (unlikely(cpy_r_r863 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 243, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r864 = CPyStatics[1895]; /* 'daemon' */
    cpy_r_r865 = CPyStatics[1896]; /* 'Run daemon in foreground' */
    cpy_r_r866 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r867[3] = {cpy_r_r863, cpy_r_r864, cpy_r_r865};
    cpy_r_r868 = (PyObject **)&cpy_r_r867;
    cpy_r_r869 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r870 = PyObject_VectorcallMethod(cpy_r_r866, cpy_r_r868, 9223372036854775810ULL, cpy_r_r869);
    if (unlikely(cpy_r_r870 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 243, CPyStatic_client___globals);
        goto CPyL390;
    }
    CPy_DECREF(cpy_r_r863);
    cpy_r_r871 = CPyStatic_client___globals;
    cpy_r_r872 = CPyStatics[1897]; /* 'daemon_parser' */
    cpy_r_r873 = CPyDict_SetItem(cpy_r_r871, cpy_r_r872, cpy_r_r870);
    cpy_r_r874 = cpy_r_r873 >= 0;
    if (unlikely(!cpy_r_r874)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 243, CPyStatic_client___globals);
        goto CPyL391;
    }
    cpy_r_r875 = CPyStatic_client___globals;
    cpy_r_r876 = CPyStatics[1802]; /* 'p' */
    cpy_r_r877 = CPyDict_SetItem(cpy_r_r875, cpy_r_r876, cpy_r_r870);
    CPy_DECREF(cpy_r_r870);
    cpy_r_r878 = cpy_r_r877 >= 0;
    if (unlikely(!cpy_r_r878)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 243, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r879 = CPyStatic_client___globals;
    cpy_r_r880 = CPyStatics[1802]; /* 'p' */
    cpy_r_r881 = CPyDict_GetItem(cpy_r_r879, cpy_r_r880);
    if (unlikely(cpy_r_r881 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 244, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r882 = CPyStatics[1807]; /* '--timeout' */
    cpy_r_r883 = CPyStatics[1808]; /* 'TIMEOUT' */
    cpy_r_r884 = (PyObject *)&PyLong_Type;
    cpy_r_r885 = CPyStatics[1809]; /* 'Server shutdown timeout (in seconds)' */
    cpy_r_r886 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r887[5] = {cpy_r_r881, cpy_r_r882, cpy_r_r883, cpy_r_r884, cpy_r_r885};
    cpy_r_r888 = (PyObject **)&cpy_r_r887;
    cpy_r_r889 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r890 = PyObject_VectorcallMethod(cpy_r_r886, cpy_r_r888, 9223372036854775810ULL, cpy_r_r889);
    if (unlikely(cpy_r_r890 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 244, CPyStatic_client___globals);
        goto CPyL392;
    } else
        goto CPyL393;
CPyL176: ;
    CPy_DECREF(cpy_r_r881);
    cpy_r_r891 = CPyStatic_client___globals;
    cpy_r_r892 = CPyStatics[1802]; /* 'p' */
    cpy_r_r893 = CPyDict_GetItem(cpy_r_r891, cpy_r_r892);
    if (unlikely(cpy_r_r893 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 247, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r894 = CPyStatics[1803]; /* '--log-file' */
    cpy_r_r895 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r896 = (PyObject *)&PyUnicode_Type;
    cpy_r_r897 = CPyStatics[1805]; /* 'Direct daemon stdout/stderr to FILE' */
    cpy_r_r898 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r899[5] = {cpy_r_r893, cpy_r_r894, cpy_r_r895, cpy_r_r896, cpy_r_r897};
    cpy_r_r900 = (PyObject **)&cpy_r_r899;
    cpy_r_r901 = CPyStatics[9321]; /* ('metavar', 'type', 'help') */
    cpy_r_r902 = PyObject_VectorcallMethod(cpy_r_r898, cpy_r_r900, 9223372036854775810ULL, cpy_r_r901);
    if (unlikely(cpy_r_r902 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 247, CPyStatic_client___globals);
        goto CPyL394;
    } else
        goto CPyL395;
CPyL178: ;
    CPy_DECREF(cpy_r_r893);
    cpy_r_r903 = CPyStatic_client___globals;
    cpy_r_r904 = CPyStatics[1802]; /* 'p' */
    cpy_r_r905 = CPyDict_GetItem(cpy_r_r903, cpy_r_r904);
    if (unlikely(cpy_r_r905 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 248, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r906 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r907 = CPyStatics[1810]; /* 'FLAG' */
    cpy_r_r908 = CPyStatics[282]; /* '*' */
    cpy_r_r909 = (PyObject *)&PyUnicode_Type;
    cpy_r_r910 = CPyStatics[1811]; /* 'Regular mypy flags (precede with --)' */
    cpy_r_r911 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r912[6] = {
        cpy_r_r905, cpy_r_r906, cpy_r_r907, cpy_r_r908, cpy_r_r909,
        cpy_r_r910
    };
    cpy_r_r913 = (PyObject **)&cpy_r_r912;
    cpy_r_r914 = CPyStatics[9322]; /* ('metavar', 'nargs', 'type', 'help') */
    cpy_r_r915 = PyObject_VectorcallMethod(cpy_r_r911, cpy_r_r913, 9223372036854775810ULL, cpy_r_r914);
    if (unlikely(cpy_r_r915 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 248, CPyStatic_client___globals);
        goto CPyL396;
    } else
        goto CPyL397;
CPyL180: ;
    CPy_DECREF(cpy_r_r905);
    cpy_r_r916 = CPyStatic_client___globals;
    cpy_r_r917 = CPyStatics[1802]; /* 'p' */
    cpy_r_r918 = CPyDict_GetItem(cpy_r_r916, cpy_r_r917);
    if (unlikely(cpy_r_r918 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 251, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r919 = CPyStatics[1898]; /* '--options-data' */
    cpy_r_r920 = CPyModule_argparse;
    cpy_r_r921 = CPyStatics[1832]; /* 'SUPPRESS' */
    cpy_r_r922 = CPyObject_GetAttr(cpy_r_r920, cpy_r_r921);
    if (unlikely(cpy_r_r922 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 251, CPyStatic_client___globals);
        goto CPyL398;
    }
    cpy_r_r923 = CPyStatics[1791]; /* 'add_argument' */
    PyObject *cpy_r_r924[3] = {cpy_r_r918, cpy_r_r919, cpy_r_r922};
    cpy_r_r925 = (PyObject **)&cpy_r_r924;
    cpy_r_r926 = CPyStatics[9320]; /* ('help',) */
    cpy_r_r927 = PyObject_VectorcallMethod(cpy_r_r923, cpy_r_r925, 9223372036854775810ULL, cpy_r_r926);
    if (unlikely(cpy_r_r927 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 251, CPyStatic_client___globals);
        goto CPyL399;
    } else
        goto CPyL400;
CPyL183: ;
    CPy_DECREF(cpy_r_r918);
    CPy_DECREF(cpy_r_r922);
    cpy_r_r928 = CPyStatic_client___globals;
    cpy_r_r929 = CPyStatics[1798]; /* 'subparsers' */
    cpy_r_r930 = CPyDict_GetItem(cpy_r_r928, cpy_r_r929);
    if (unlikely(cpy_r_r930 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 252, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r931 = CPyStatics[1792]; /* 'help' */
    cpy_r_r932 = CPyStatics[1800]; /* 'add_parser' */
    PyObject *cpy_r_r933[2] = {cpy_r_r930, cpy_r_r931};
    cpy_r_r934 = (PyObject **)&cpy_r_r933;
    cpy_r_r935 = PyObject_VectorcallMethod(cpy_r_r932, cpy_r_r934, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r935 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 252, CPyStatic_client___globals);
        goto CPyL401;
    }
    CPy_DECREF(cpy_r_r930);
    cpy_r_r936 = CPyStatic_client___globals;
    cpy_r_r937 = CPyStatics[1899]; /* 'help_parser' */
    cpy_r_r938 = CPyDict_SetItem(cpy_r_r936, cpy_r_r937, cpy_r_r935);
    cpy_r_r939 = cpy_r_r938 >= 0;
    if (unlikely(!cpy_r_r939)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 252, CPyStatic_client___globals);
        goto CPyL402;
    }
    cpy_r_r940 = CPyStatic_client___globals;
    cpy_r_r941 = CPyStatics[1802]; /* 'p' */
    cpy_r_r942 = CPyDict_SetItem(cpy_r_r940, cpy_r_r941, cpy_r_r935);
    CPy_DECREF(cpy_r_r935);
    cpy_r_r943 = cpy_r_r942 >= 0;
    if (unlikely(!cpy_r_r943)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 252, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r944 = CPyStatic_client___globals;
    cpy_r_r945 = CPyStatics[1802]; /* 'p' */
    cpy_r_r946 = PyObject_DelItem(cpy_r_r944, cpy_r_r945);
    cpy_r_r947 = cpy_r_r946 >= 0;
    if (unlikely(!cpy_r_r947)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 254, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r948 = CPyModule_builtins;
    cpy_r_r949 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r950 = CPyObject_GetAttr(cpy_r_r948, cpy_r_r949);
    if (unlikely(cpy_r_r950 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r951 = PyTuple_Pack(1, cpy_r_r950);
    CPy_DECREF(cpy_r_r950);
    if (unlikely(cpy_r_r951 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r952 = CPyStatics[12]; /* 'mypy.dmypy.client' */
    cpy_r_r953 = (PyObject *)CPyType_client___BadStatus_template;
    cpy_r_r954 = CPyType_FromTemplate(cpy_r_r953, cpy_r_r951, cpy_r_r952);
    CPy_DECREF(cpy_r_r951);
    if (unlikely(cpy_r_r954 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r955 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r956 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r957 = PyTuple_Pack(1, cpy_r_r956);
    if (unlikely(cpy_r_r957 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL403;
    }
    cpy_r_r958 = PyObject_SetAttr(cpy_r_r954, cpy_r_r955, cpy_r_r957);
    CPy_DECREF(cpy_r_r957);
    cpy_r_r959 = cpy_r_r958 >= 0;
    if (unlikely(!cpy_r_r959)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL403;
    }
    CPyType_client___BadStatus = (PyTypeObject *)cpy_r_r954;
    CPy_INCREF(CPyType_client___BadStatus);
    cpy_r_r960 = CPyStatic_client___globals;
    cpy_r_r961 = CPyStatics[1900]; /* 'BadStatus' */
    cpy_r_r962 = CPyDict_SetItem(cpy_r_r960, cpy_r_r961, cpy_r_r954);
    CPy_DECREF(cpy_r_r954);
    cpy_r_r963 = cpy_r_r962 >= 0;
    if (unlikely(!cpy_r_r963)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 257, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r964 = CPyStatic_client___globals;
    cpy_r_r965 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r966 = CPyDict_GetItem(cpy_r_r964, cpy_r_r965);
    if (unlikely(cpy_r_r966 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 290, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r967 = CPyModule_argparse;
    cpy_r_r968 = CPyStatics[1901]; /* 'Namespace' */
    cpy_r_r969 = CPyObject_GetAttr(cpy_r_r967, cpy_r_r968);
    if (unlikely(cpy_r_r969 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 290, CPyStatic_client___globals);
        goto CPyL404;
    }
    cpy_r_r970 = PyList_New(1);
    if (unlikely(cpy_r_r970 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 290, CPyStatic_client___globals);
        goto CPyL405;
    }
    cpy_r_r971 = (CPyPtr)&((PyListObject *)cpy_r_r970)->ob_item;
    cpy_r_r972 = *(CPyPtr *)cpy_r_r971;
    *(PyObject * *)cpy_r_r972 = cpy_r_r969;
    cpy_r_r973 = Py_None;
    cpy_r_r974.f0 = cpy_r_r970;
    cpy_r_r974.f1 = cpy_r_r973;
    CPy_INCREF(cpy_r_r974.f0);
    CPy_INCREF(cpy_r_r974.f1);
    CPy_DECREF(cpy_r_r970);
    cpy_r_r975 = PyTuple_New(2);
    if (unlikely(cpy_r_r975 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1903 = cpy_r_r974.f0;
    PyTuple_SET_ITEM(cpy_r_r975, 0, __tmp1903);
    PyObject *__tmp1904 = cpy_r_r974.f1;
    PyTuple_SET_ITEM(cpy_r_r975, 1, __tmp1904);
    cpy_r_r976 = PyObject_GetItem(cpy_r_r966, cpy_r_r975);
    CPy_DECREF(cpy_r_r966);
    CPy_DECREF(cpy_r_r975);
    if (unlikely(cpy_r_r976 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 290, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r977 = CPyStatic_client___globals;
    cpy_r_r978 = CPyStatics[1902]; /* 'ActionFunction' */
    cpy_r_r979 = CPyDict_SetItem(cpy_r_r977, cpy_r_r978, cpy_r_r976);
    CPy_DECREF(cpy_r_r976);
    cpy_r_r980 = cpy_r_r979 >= 0;
    if (unlikely(!cpy_r_r980)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 290, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r981 = CPyStatic_client___globals;
    cpy_r_r982 = CPyStatics[1903]; /* 'do_start' */
    cpy_r_r983 = CPyDict_GetItem(cpy_r_r981, cpy_r_r982);
    if (unlikely(cpy_r_r983 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 306, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r984 = CPyStatic_client___globals;
    cpy_r_r985 = CPyStatics[1801]; /* 'start_parser' */
    cpy_r_r986 = CPyDict_GetItem(cpy_r_r984, cpy_r_r985);
    if (unlikely(cpy_r_r986 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 306, CPyStatic_client___globals);
        goto CPyL406;
    }
    cpy_r_r987 = CPyDef_client___action(cpy_r_r986);
    CPy_DECREF(cpy_r_r986);
    if (unlikely(cpy_r_r987 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 306, CPyStatic_client___globals);
        goto CPyL406;
    }
    PyObject *cpy_r_r988[1] = {cpy_r_r983};
    cpy_r_r989 = (PyObject **)&cpy_r_r988;
    cpy_r_r990 = _PyObject_Vectorcall(cpy_r_r987, cpy_r_r989, 1, 0);
    CPy_DECREF(cpy_r_r987);
    if (unlikely(cpy_r_r990 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 306, CPyStatic_client___globals);
        goto CPyL406;
    }
    CPy_DECREF(cpy_r_r983);
    cpy_r_r991 = CPyStatic_client___globals;
    cpy_r_r992 = CPyStatics[1903]; /* 'do_start' */
    cpy_r_r993 = CPyDict_SetItem(cpy_r_r991, cpy_r_r992, cpy_r_r990);
    CPy_DECREF(cpy_r_r990);
    cpy_r_r994 = cpy_r_r993 >= 0;
    if (unlikely(!cpy_r_r994)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 306, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r995 = CPyStatic_client___globals;
    cpy_r_r996 = CPyStatics[1904]; /* 'do_restart' */
    cpy_r_r997 = CPyDict_GetItem(cpy_r_r995, cpy_r_r996);
    if (unlikely(cpy_r_r997 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 328, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r998 = CPyStatic_client___globals;
    cpy_r_r999 = CPyStatics[1814]; /* 'restart_parser' */
    cpy_r_r1000 = CPyDict_GetItem(cpy_r_r998, cpy_r_r999);
    if (unlikely(cpy_r_r1000 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 328, CPyStatic_client___globals);
        goto CPyL407;
    }
    cpy_r_r1001 = CPyDef_client___action(cpy_r_r1000);
    CPy_DECREF(cpy_r_r1000);
    if (unlikely(cpy_r_r1001 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 328, CPyStatic_client___globals);
        goto CPyL407;
    }
    PyObject *cpy_r_r1002[1] = {cpy_r_r997};
    cpy_r_r1003 = (PyObject **)&cpy_r_r1002;
    cpy_r_r1004 = _PyObject_Vectorcall(cpy_r_r1001, cpy_r_r1003, 1, 0);
    CPy_DECREF(cpy_r_r1001);
    if (unlikely(cpy_r_r1004 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 328, CPyStatic_client___globals);
        goto CPyL407;
    }
    CPy_DECREF(cpy_r_r997);
    cpy_r_r1005 = CPyStatic_client___globals;
    cpy_r_r1006 = CPyStatics[1904]; /* 'do_restart' */
    cpy_r_r1007 = CPyDict_SetItem(cpy_r_r1005, cpy_r_r1006, cpy_r_r1004);
    CPy_DECREF(cpy_r_r1004);
    cpy_r_r1008 = cpy_r_r1007 >= 0;
    if (unlikely(!cpy_r_r1008)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 328, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1009 = CPyStatic_client___globals;
    cpy_r_r1010 = CPyStatics[1905]; /* 'do_run' */
    cpy_r_r1011 = CPyDict_GetItem(cpy_r_r1009, cpy_r_r1010);
    if (unlikely(cpy_r_r1011 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 379, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1012 = CPyStatic_client___globals;
    cpy_r_r1013 = CPyStatics[1841]; /* 'run_parser' */
    cpy_r_r1014 = CPyDict_GetItem(cpy_r_r1012, cpy_r_r1013);
    if (unlikely(cpy_r_r1014 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 379, CPyStatic_client___globals);
        goto CPyL408;
    }
    cpy_r_r1015 = CPyDef_client___action(cpy_r_r1014);
    CPy_DECREF(cpy_r_r1014);
    if (unlikely(cpy_r_r1015 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 379, CPyStatic_client___globals);
        goto CPyL408;
    }
    PyObject *cpy_r_r1016[1] = {cpy_r_r1011};
    cpy_r_r1017 = (PyObject **)&cpy_r_r1016;
    cpy_r_r1018 = _PyObject_Vectorcall(cpy_r_r1015, cpy_r_r1017, 1, 0);
    CPy_DECREF(cpy_r_r1015);
    if (unlikely(cpy_r_r1018 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 379, CPyStatic_client___globals);
        goto CPyL408;
    }
    CPy_DECREF(cpy_r_r1011);
    cpy_r_r1019 = CPyStatic_client___globals;
    cpy_r_r1020 = CPyStatics[1905]; /* 'do_run' */
    cpy_r_r1021 = CPyDict_SetItem(cpy_r_r1019, cpy_r_r1020, cpy_r_r1018);
    CPy_DECREF(cpy_r_r1018);
    cpy_r_r1022 = cpy_r_r1021 >= 0;
    if (unlikely(!cpy_r_r1022)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 379, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1023 = CPyStatic_client___globals;
    cpy_r_r1024 = CPyStatics[1906]; /* 'do_status' */
    cpy_r_r1025 = CPyDict_GetItem(cpy_r_r1023, cpy_r_r1024);
    if (unlikely(cpy_r_r1025 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 421, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1026 = CPyStatic_client___globals;
    cpy_r_r1027 = CPyStatics[1816]; /* 'status_parser' */
    cpy_r_r1028 = CPyDict_GetItem(cpy_r_r1026, cpy_r_r1027);
    if (unlikely(cpy_r_r1028 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 421, CPyStatic_client___globals);
        goto CPyL409;
    }
    cpy_r_r1029 = CPyDef_client___action(cpy_r_r1028);
    CPy_DECREF(cpy_r_r1028);
    if (unlikely(cpy_r_r1029 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 421, CPyStatic_client___globals);
        goto CPyL409;
    }
    PyObject *cpy_r_r1030[1] = {cpy_r_r1025};
    cpy_r_r1031 = (PyObject **)&cpy_r_r1030;
    cpy_r_r1032 = _PyObject_Vectorcall(cpy_r_r1029, cpy_r_r1031, 1, 0);
    CPy_DECREF(cpy_r_r1029);
    if (unlikely(cpy_r_r1032 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 421, CPyStatic_client___globals);
        goto CPyL409;
    }
    CPy_DECREF(cpy_r_r1025);
    cpy_r_r1033 = CPyStatic_client___globals;
    cpy_r_r1034 = CPyStatics[1906]; /* 'do_status' */
    cpy_r_r1035 = CPyDict_SetItem(cpy_r_r1033, cpy_r_r1034, cpy_r_r1032);
    CPy_DECREF(cpy_r_r1032);
    cpy_r_r1036 = cpy_r_r1035 >= 0;
    if (unlikely(!cpy_r_r1036)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 421, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1037 = CPyStatic_client___globals;
    cpy_r_r1038 = CPyStatics[1684]; /* 'do_stop' */
    cpy_r_r1039 = CPyDict_GetItem(cpy_r_r1037, cpy_r_r1038);
    if (unlikely(cpy_r_r1039 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 443, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1040 = CPyStatic_client___globals;
    cpy_r_r1041 = CPyStatics[1824]; /* 'stop_parser' */
    cpy_r_r1042 = CPyDict_GetItem(cpy_r_r1040, cpy_r_r1041);
    if (unlikely(cpy_r_r1042 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 443, CPyStatic_client___globals);
        goto CPyL410;
    }
    cpy_r_r1043 = CPyDef_client___action(cpy_r_r1042);
    CPy_DECREF(cpy_r_r1042);
    if (unlikely(cpy_r_r1043 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 443, CPyStatic_client___globals);
        goto CPyL410;
    }
    PyObject *cpy_r_r1044[1] = {cpy_r_r1039};
    cpy_r_r1045 = (PyObject **)&cpy_r_r1044;
    cpy_r_r1046 = _PyObject_Vectorcall(cpy_r_r1043, cpy_r_r1045, 1, 0);
    CPy_DECREF(cpy_r_r1043);
    if (unlikely(cpy_r_r1046 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 443, CPyStatic_client___globals);
        goto CPyL410;
    }
    CPy_DECREF(cpy_r_r1039);
    cpy_r_r1047 = CPyStatic_client___globals;
    cpy_r_r1048 = CPyStatics[1684]; /* 'do_stop' */
    cpy_r_r1049 = CPyDict_SetItem(cpy_r_r1047, cpy_r_r1048, cpy_r_r1046);
    CPy_DECREF(cpy_r_r1046);
    cpy_r_r1050 = cpy_r_r1049 >= 0;
    if (unlikely(!cpy_r_r1050)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 443, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1051 = CPyStatic_client___globals;
    cpy_r_r1052 = CPyStatics[1907]; /* 'do_kill' */
    cpy_r_r1053 = CPyDict_GetItem(cpy_r_r1051, cpy_r_r1052);
    if (unlikely(cpy_r_r1053 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 455, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1054 = CPyStatic_client___globals;
    cpy_r_r1055 = CPyStatics[1826]; /* 'kill_parser' */
    cpy_r_r1056 = CPyDict_GetItem(cpy_r_r1054, cpy_r_r1055);
    if (unlikely(cpy_r_r1056 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 455, CPyStatic_client___globals);
        goto CPyL411;
    }
    cpy_r_r1057 = CPyDef_client___action(cpy_r_r1056);
    CPy_DECREF(cpy_r_r1056);
    if (unlikely(cpy_r_r1057 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 455, CPyStatic_client___globals);
        goto CPyL411;
    }
    PyObject *cpy_r_r1058[1] = {cpy_r_r1053};
    cpy_r_r1059 = (PyObject **)&cpy_r_r1058;
    cpy_r_r1060 = _PyObject_Vectorcall(cpy_r_r1057, cpy_r_r1059, 1, 0);
    CPy_DECREF(cpy_r_r1057);
    if (unlikely(cpy_r_r1060 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 455, CPyStatic_client___globals);
        goto CPyL411;
    }
    CPy_DECREF(cpy_r_r1053);
    cpy_r_r1061 = CPyStatic_client___globals;
    cpy_r_r1062 = CPyStatics[1907]; /* 'do_kill' */
    cpy_r_r1063 = CPyDict_SetItem(cpy_r_r1061, cpy_r_r1062, cpy_r_r1060);
    CPy_DECREF(cpy_r_r1060);
    cpy_r_r1064 = cpy_r_r1063 >= 0;
    if (unlikely(!cpy_r_r1064)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 455, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1065 = CPyStatic_client___globals;
    cpy_r_r1066 = CPyStatics[1908]; /* 'do_check' */
    cpy_r_r1067 = CPyDict_GetItem(cpy_r_r1065, cpy_r_r1066);
    if (unlikely(cpy_r_r1067 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 467, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1068 = CPyStatic_client___globals;
    cpy_r_r1069 = CPyStatics[1829]; /* 'check_parser' */
    cpy_r_r1070 = CPyDict_GetItem(cpy_r_r1068, cpy_r_r1069);
    if (unlikely(cpy_r_r1070 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 467, CPyStatic_client___globals);
        goto CPyL412;
    }
    cpy_r_r1071 = CPyDef_client___action(cpy_r_r1070);
    CPy_DECREF(cpy_r_r1070);
    if (unlikely(cpy_r_r1071 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 467, CPyStatic_client___globals);
        goto CPyL412;
    }
    PyObject *cpy_r_r1072[1] = {cpy_r_r1067};
    cpy_r_r1073 = (PyObject **)&cpy_r_r1072;
    cpy_r_r1074 = _PyObject_Vectorcall(cpy_r_r1071, cpy_r_r1073, 1, 0);
    CPy_DECREF(cpy_r_r1071);
    if (unlikely(cpy_r_r1074 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 467, CPyStatic_client___globals);
        goto CPyL412;
    }
    CPy_DECREF(cpy_r_r1067);
    cpy_r_r1075 = CPyStatic_client___globals;
    cpy_r_r1076 = CPyStatics[1908]; /* 'do_check' */
    cpy_r_r1077 = CPyDict_SetItem(cpy_r_r1075, cpy_r_r1076, cpy_r_r1074);
    CPy_DECREF(cpy_r_r1074);
    cpy_r_r1078 = cpy_r_r1077 >= 0;
    if (unlikely(!cpy_r_r1078)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 467, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1079 = CPyStatic_client___globals;
    cpy_r_r1080 = CPyStatics[1909]; /* 'do_recheck' */
    cpy_r_r1081 = CPyDict_GetItem(cpy_r_r1079, cpy_r_r1080);
    if (unlikely(cpy_r_r1081 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 477, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1082 = CPyStatic_client___globals;
    cpy_r_r1083 = CPyStatics[1845]; /* 'recheck_parser' */
    cpy_r_r1084 = CPyDict_GetItem(cpy_r_r1082, cpy_r_r1083);
    if (unlikely(cpy_r_r1084 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 477, CPyStatic_client___globals);
        goto CPyL413;
    }
    cpy_r_r1085 = CPyDef_client___action(cpy_r_r1084);
    CPy_DECREF(cpy_r_r1084);
    if (unlikely(cpy_r_r1085 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 477, CPyStatic_client___globals);
        goto CPyL413;
    }
    PyObject *cpy_r_r1086[1] = {cpy_r_r1081};
    cpy_r_r1087 = (PyObject **)&cpy_r_r1086;
    cpy_r_r1088 = _PyObject_Vectorcall(cpy_r_r1085, cpy_r_r1087, 1, 0);
    CPy_DECREF(cpy_r_r1085);
    if (unlikely(cpy_r_r1088 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 477, CPyStatic_client___globals);
        goto CPyL413;
    }
    CPy_DECREF(cpy_r_r1081);
    cpy_r_r1089 = CPyStatic_client___globals;
    cpy_r_r1090 = CPyStatics[1909]; /* 'do_recheck' */
    cpy_r_r1091 = CPyDict_SetItem(cpy_r_r1089, cpy_r_r1090, cpy_r_r1088);
    CPy_DECREF(cpy_r_r1088);
    cpy_r_r1092 = cpy_r_r1091 >= 0;
    if (unlikely(!cpy_r_r1092)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 477, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1093 = CPyStatic_client___globals;
    cpy_r_r1094 = CPyStatics[1910]; /* 'do_suggest' */
    cpy_r_r1095 = CPyDict_GetItem(cpy_r_r1093, cpy_r_r1094);
    if (unlikely(cpy_r_r1095 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 508, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1096 = CPyStatic_client___globals;
    cpy_r_r1097 = CPyStatics[1851]; /* 'suggest_parser' */
    cpy_r_r1098 = CPyDict_GetItem(cpy_r_r1096, cpy_r_r1097);
    if (unlikely(cpy_r_r1098 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 508, CPyStatic_client___globals);
        goto CPyL414;
    }
    cpy_r_r1099 = CPyDef_client___action(cpy_r_r1098);
    CPy_DECREF(cpy_r_r1098);
    if (unlikely(cpy_r_r1099 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 508, CPyStatic_client___globals);
        goto CPyL414;
    }
    PyObject *cpy_r_r1100[1] = {cpy_r_r1095};
    cpy_r_r1101 = (PyObject **)&cpy_r_r1100;
    cpy_r_r1102 = _PyObject_Vectorcall(cpy_r_r1099, cpy_r_r1101, 1, 0);
    CPy_DECREF(cpy_r_r1099);
    if (unlikely(cpy_r_r1102 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 508, CPyStatic_client___globals);
        goto CPyL414;
    }
    CPy_DECREF(cpy_r_r1095);
    cpy_r_r1103 = CPyStatic_client___globals;
    cpy_r_r1104 = CPyStatics[1910]; /* 'do_suggest' */
    cpy_r_r1105 = CPyDict_SetItem(cpy_r_r1103, cpy_r_r1104, cpy_r_r1102);
    CPy_DECREF(cpy_r_r1102);
    cpy_r_r1106 = cpy_r_r1105 >= 0;
    if (unlikely(!cpy_r_r1106)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 508, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1107 = CPyStatic_client___globals;
    cpy_r_r1108 = CPyStatics[1911]; /* 'do_inspect' */
    cpy_r_r1109 = CPyDict_GetItem(cpy_r_r1107, cpy_r_r1108);
    if (unlikely(cpy_r_r1109 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 530, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1110 = CPyStatic_client___globals;
    cpy_r_r1111 = CPyStatics[1870]; /* 'inspect_parser' */
    cpy_r_r1112 = CPyDict_GetItem(cpy_r_r1110, cpy_r_r1111);
    if (unlikely(cpy_r_r1112 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 530, CPyStatic_client___globals);
        goto CPyL415;
    }
    cpy_r_r1113 = CPyDef_client___action(cpy_r_r1112);
    CPy_DECREF(cpy_r_r1112);
    if (unlikely(cpy_r_r1113 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 530, CPyStatic_client___globals);
        goto CPyL415;
    }
    PyObject *cpy_r_r1114[1] = {cpy_r_r1109};
    cpy_r_r1115 = (PyObject **)&cpy_r_r1114;
    cpy_r_r1116 = _PyObject_Vectorcall(cpy_r_r1113, cpy_r_r1115, 1, 0);
    CPy_DECREF(cpy_r_r1113);
    if (unlikely(cpy_r_r1116 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 530, CPyStatic_client___globals);
        goto CPyL415;
    }
    CPy_DECREF(cpy_r_r1109);
    cpy_r_r1117 = CPyStatic_client___globals;
    cpy_r_r1118 = CPyStatics[1911]; /* 'do_inspect' */
    cpy_r_r1119 = CPyDict_SetItem(cpy_r_r1117, cpy_r_r1118, cpy_r_r1116);
    CPy_DECREF(cpy_r_r1116);
    cpy_r_r1120 = cpy_r_r1119 >= 0;
    if (unlikely(!cpy_r_r1120)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 530, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1121 = CPyStatic_client___globals;
    cpy_r_r1122 = CPyStatics[1912]; /* 'do_hang' */
    cpy_r_r1123 = CPyDict_GetItem(cpy_r_r1121, cpy_r_r1122);
    if (unlikely(cpy_r_r1123 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 600, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1124 = CPyStatic_client___globals;
    cpy_r_r1125 = CPyStatics[1894]; /* 'hang_parser' */
    cpy_r_r1126 = CPyDict_GetItem(cpy_r_r1124, cpy_r_r1125);
    if (unlikely(cpy_r_r1126 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 600, CPyStatic_client___globals);
        goto CPyL416;
    }
    cpy_r_r1127 = CPyDef_client___action(cpy_r_r1126);
    CPy_DECREF(cpy_r_r1126);
    if (unlikely(cpy_r_r1127 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 600, CPyStatic_client___globals);
        goto CPyL416;
    }
    PyObject *cpy_r_r1128[1] = {cpy_r_r1123};
    cpy_r_r1129 = (PyObject **)&cpy_r_r1128;
    cpy_r_r1130 = _PyObject_Vectorcall(cpy_r_r1127, cpy_r_r1129, 1, 0);
    CPy_DECREF(cpy_r_r1127);
    if (unlikely(cpy_r_r1130 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 600, CPyStatic_client___globals);
        goto CPyL416;
    }
    CPy_DECREF(cpy_r_r1123);
    cpy_r_r1131 = CPyStatic_client___globals;
    cpy_r_r1132 = CPyStatics[1912]; /* 'do_hang' */
    cpy_r_r1133 = CPyDict_SetItem(cpy_r_r1131, cpy_r_r1132, cpy_r_r1130);
    CPy_DECREF(cpy_r_r1130);
    cpy_r_r1134 = cpy_r_r1133 >= 0;
    if (unlikely(!cpy_r_r1134)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 600, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1135 = CPyStatic_client___globals;
    cpy_r_r1136 = CPyStatics[1913]; /* 'do_daemon' */
    cpy_r_r1137 = CPyDict_GetItem(cpy_r_r1135, cpy_r_r1136);
    if (unlikely(cpy_r_r1137 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 606, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1138 = CPyStatic_client___globals;
    cpy_r_r1139 = CPyStatics[1897]; /* 'daemon_parser' */
    cpy_r_r1140 = CPyDict_GetItem(cpy_r_r1138, cpy_r_r1139);
    if (unlikely(cpy_r_r1140 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 606, CPyStatic_client___globals);
        goto CPyL417;
    }
    cpy_r_r1141 = CPyDef_client___action(cpy_r_r1140);
    CPy_DECREF(cpy_r_r1140);
    if (unlikely(cpy_r_r1141 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 606, CPyStatic_client___globals);
        goto CPyL417;
    }
    PyObject *cpy_r_r1142[1] = {cpy_r_r1137};
    cpy_r_r1143 = (PyObject **)&cpy_r_r1142;
    cpy_r_r1144 = _PyObject_Vectorcall(cpy_r_r1141, cpy_r_r1143, 1, 0);
    CPy_DECREF(cpy_r_r1141);
    if (unlikely(cpy_r_r1144 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 606, CPyStatic_client___globals);
        goto CPyL417;
    }
    CPy_DECREF(cpy_r_r1137);
    cpy_r_r1145 = CPyStatic_client___globals;
    cpy_r_r1146 = CPyStatics[1913]; /* 'do_daemon' */
    cpy_r_r1147 = CPyDict_SetItem(cpy_r_r1145, cpy_r_r1146, cpy_r_r1144);
    CPy_DECREF(cpy_r_r1144);
    cpy_r_r1148 = cpy_r_r1147 >= 0;
    if (unlikely(!cpy_r_r1148)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 606, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1149 = CPyStatic_client___globals;
    cpy_r_r1150 = CPyStatics[1914]; /* 'do_help' */
    cpy_r_r1151 = CPyDict_GetItem(cpy_r_r1149, cpy_r_r1150);
    if (unlikely(cpy_r_r1151 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 630, CPyStatic_client___globals);
        goto CPyL265;
    }
    cpy_r_r1152 = CPyStatic_client___globals;
    cpy_r_r1153 = CPyStatics[1899]; /* 'help_parser' */
    cpy_r_r1154 = CPyDict_GetItem(cpy_r_r1152, cpy_r_r1153);
    if (unlikely(cpy_r_r1154 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 630, CPyStatic_client___globals);
        goto CPyL418;
    }
    cpy_r_r1155 = CPyDef_client___action(cpy_r_r1154);
    CPy_DECREF(cpy_r_r1154);
    if (unlikely(cpy_r_r1155 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 630, CPyStatic_client___globals);
        goto CPyL418;
    }
    PyObject *cpy_r_r1156[1] = {cpy_r_r1151};
    cpy_r_r1157 = (PyObject **)&cpy_r_r1156;
    cpy_r_r1158 = _PyObject_Vectorcall(cpy_r_r1155, cpy_r_r1157, 1, 0);
    CPy_DECREF(cpy_r_r1155);
    if (unlikely(cpy_r_r1158 == NULL)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 630, CPyStatic_client___globals);
        goto CPyL418;
    }
    CPy_DECREF(cpy_r_r1151);
    cpy_r_r1159 = CPyStatic_client___globals;
    cpy_r_r1160 = CPyStatics[1914]; /* 'do_help' */
    cpy_r_r1161 = CPyDict_SetItem(cpy_r_r1159, cpy_r_r1160, cpy_r_r1158);
    CPy_DECREF(cpy_r_r1158);
    cpy_r_r1162 = cpy_r_r1161 >= 0;
    if (unlikely(!cpy_r_r1162)) {
        CPy_AddTraceback("mypy/dmypy/client.py", "<module>", 630, CPyStatic_client___globals);
        goto CPyL265;
    }
    return 1;
CPyL265: ;
    cpy_r_r1163 = 2;
    return cpy_r_r1163;
CPyL266: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL265;
CPyL267: ;
    CPy_DecRef(cpy_r_r83);
    goto CPyL265;
CPyL268: ;
    CPy_DECREF(cpy_r_r89);
    goto CPyL23;
CPyL269: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL265;
CPyL270: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL25;
CPyL271: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL265;
CPyL272: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r112);
    goto CPyL265;
CPyL273: ;
    CPy_DECREF(cpy_r_r118);
    goto CPyL30;
CPyL274: ;
    CPy_DecRef(cpy_r_r121);
    goto CPyL265;
CPyL275: ;
    CPy_DecRef(cpy_r_r132);
    goto CPyL265;
CPyL276: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL265;
CPyL277: ;
    CPy_DecRef(cpy_r_r150);
    goto CPyL265;
CPyL278: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL39;
CPyL279: ;
    CPy_DecRef(cpy_r_r162);
    goto CPyL265;
CPyL280: ;
    CPy_DECREF(cpy_r_r171);
    goto CPyL41;
CPyL281: ;
    CPy_DecRef(cpy_r_r174);
    goto CPyL265;
CPyL282: ;
    CPy_DECREF(cpy_r_r184);
    goto CPyL43;
CPyL283: ;
    CPy_DecRef(cpy_r_r187);
    goto CPyL265;
CPyL284: ;
    CPy_DecRef(cpy_r_r194);
    goto CPyL265;
CPyL285: ;
    CPy_DecRef(cpy_r_r205);
    goto CPyL265;
CPyL286: ;
    CPy_DECREF(cpy_r_r214);
    goto CPyL49;
CPyL287: ;
    CPy_DecRef(cpy_r_r217);
    goto CPyL265;
CPyL288: ;
    CPy_DECREF(cpy_r_r226);
    goto CPyL51;
CPyL289: ;
    CPy_DecRef(cpy_r_r229);
    goto CPyL265;
CPyL290: ;
    CPy_DECREF(cpy_r_r239);
    goto CPyL53;
CPyL291: ;
    CPy_DecRef(cpy_r_r242);
    goto CPyL265;
CPyL292: ;
    CPy_DecRef(cpy_r_r249);
    goto CPyL265;
CPyL293: ;
    CPy_DecRef(cpy_r_r260);
    goto CPyL265;
CPyL294: ;
    CPy_DECREF(cpy_r_r269);
    goto CPyL59;
CPyL295: ;
    CPy_DecRef(cpy_r_r272);
    goto CPyL265;
CPyL296: ;
    CPy_DECREF(cpy_r_r279);
    goto CPyL61;
CPyL297: ;
    CPy_DecRef(cpy_r_r282);
    goto CPyL265;
CPyL298: ;
    CPy_DecRef(cpy_r_r289);
    goto CPyL265;
CPyL299: ;
    CPy_DecRef(cpy_r_r300);
    goto CPyL265;
CPyL300: ;
    CPy_DecRef(cpy_r_r307);
    goto CPyL265;
CPyL301: ;
    CPy_DecRef(cpy_r_r318);
    goto CPyL265;
CPyL302: ;
    CPy_DecRef(cpy_r_r326);
    goto CPyL265;
CPyL303: ;
    CPy_DecRef(cpy_r_r337);
    goto CPyL265;
CPyL304: ;
    CPy_DECREF(cpy_r_r346);
    goto CPyL75;
CPyL305: ;
    CPy_DecRef(cpy_r_r349);
    goto CPyL265;
CPyL306: ;
    CPy_DecRef(cpy_r_r349);
    CPy_DecRef(cpy_r_r355);
    goto CPyL265;
CPyL307: ;
    CPy_DECREF(cpy_r_r360);
    goto CPyL78;
CPyL308: ;
    CPy_DecRef(cpy_r_r363);
    goto CPyL265;
CPyL309: ;
    CPy_DECREF(cpy_r_r370);
    goto CPyL80;
CPyL310: ;
    CPy_DecRef(cpy_r_r373);
    goto CPyL265;
CPyL311: ;
    CPy_DECREF(cpy_r_r380);
    goto CPyL82;
CPyL312: ;
    CPy_DecRef(cpy_r_r383);
    goto CPyL265;
CPyL313: ;
    CPy_DECREF(cpy_r_r392);
    goto CPyL84;
CPyL314: ;
    CPy_DecRef(cpy_r_r395);
    goto CPyL265;
CPyL315: ;
    CPy_DECREF(cpy_r_r403);
    goto CPyL86;
CPyL316: ;
    CPy_DecRef(cpy_r_r406);
    goto CPyL265;
CPyL317: ;
    CPy_DecRef(cpy_r_r414);
    goto CPyL265;
CPyL318: ;
    CPy_DecRef(cpy_r_r425);
    goto CPyL265;
CPyL319: ;
    CPy_DECREF(cpy_r_r434);
    goto CPyL92;
CPyL320: ;
    CPy_DecRef(cpy_r_r437);
    goto CPyL265;
CPyL321: ;
    CPy_DECREF(cpy_r_r444);
    goto CPyL94;
CPyL322: ;
    CPy_DecRef(cpy_r_r447);
    goto CPyL265;
CPyL323: ;
    CPy_DECREF(cpy_r_r454);
    goto CPyL96;
CPyL324: ;
    CPy_DecRef(cpy_r_r457);
    goto CPyL265;
CPyL325: ;
    CPy_DECREF(cpy_r_r466);
    goto CPyL98;
CPyL326: ;
    CPy_DecRef(cpy_r_r469);
    goto CPyL265;
CPyL327: ;
    CPy_DECREF(cpy_r_r478);
    goto CPyL100;
CPyL328: ;
    CPy_DecRef(cpy_r_r481);
    goto CPyL265;
CPyL329: ;
    CPy_DECREF(cpy_r_r489);
    goto CPyL102;
CPyL330: ;
    CPy_DecRef(cpy_r_r492);
    goto CPyL265;
CPyL331: ;
    CPy_DECREF(cpy_r_r502);
    goto CPyL104;
CPyL332: ;
    CPy_DecRef(cpy_r_r505);
    goto CPyL265;
CPyL333: ;
    CPy_DecRef(cpy_r_r513);
    goto CPyL265;
CPyL334: ;
    CPy_DecRef(cpy_r_r524);
    goto CPyL265;
CPyL335: ;
    CPy_DECREF(cpy_r_r533);
    goto CPyL110;
CPyL336: ;
    CPy_DecRef(cpy_r_r536);
    goto CPyL265;
CPyL337: ;
    CPy_DecRef(cpy_r_r536);
    CPy_DecRef(cpy_r_r542);
    goto CPyL265;
CPyL338: ;
    CPy_DECREF(cpy_r_r547);
    goto CPyL113;
CPyL339: ;
    CPy_DecRef(cpy_r_r550);
    goto CPyL265;
CPyL340: ;
    CPy_DECREF(cpy_r_r557);
    goto CPyL115;
CPyL341: ;
    CPy_DecRef(cpy_r_r560);
    goto CPyL265;
CPyL342: ;
    CPy_DECREF(cpy_r_r567);
    goto CPyL117;
CPyL343: ;
    CPy_DecRef(cpy_r_r570);
    goto CPyL265;
CPyL344: ;
    CPy_DECREF(cpy_r_r578);
    goto CPyL119;
CPyL345: ;
    CPy_DecRef(cpy_r_r581);
    goto CPyL265;
CPyL346: ;
    CPy_DECREF(cpy_r_r590);
    goto CPyL121;
CPyL347: ;
    CPy_DecRef(cpy_r_r593);
    goto CPyL265;
CPyL348: ;
    CPy_DECREF(cpy_r_r602);
    goto CPyL123;
CPyL349: ;
    CPy_DecRef(cpy_r_r605);
    goto CPyL265;
CPyL350: ;
    CPy_DecRef(cpy_r_r612);
    goto CPyL265;
CPyL351: ;
    CPy_DecRef(cpy_r_r623);
    goto CPyL265;
CPyL352: ;
    CPy_DECREF(cpy_r_r632);
    goto CPyL129;
CPyL353: ;
    CPy_DecRef(cpy_r_r635);
    goto CPyL265;
CPyL354: ;
    CPy_DECREF(cpy_r_r643);
    goto CPyL131;
CPyL355: ;
    CPy_DecRef(cpy_r_r646);
    goto CPyL265;
CPyL356: ;
    CPy_DECREF(cpy_r_r654);
    goto CPyL133;
CPyL357: ;
    CPy_DecRef(cpy_r_r657);
    goto CPyL265;
CPyL358: ;
    CPy_DECREF(cpy_r_r665);
    goto CPyL135;
CPyL359: ;
    CPy_DecRef(cpy_r_r668);
    goto CPyL265;
CPyL360: ;
    CPy_DECREF(cpy_r_r676);
    goto CPyL137;
CPyL361: ;
    CPy_DecRef(cpy_r_r679);
    goto CPyL265;
CPyL362: ;
    CPy_DECREF(cpy_r_r687);
    goto CPyL139;
CPyL363: ;
    CPy_DecRef(cpy_r_r690);
    goto CPyL265;
CPyL364: ;
    CPy_DECREF(cpy_r_r699);
    goto CPyL141;
CPyL365: ;
    CPy_DecRef(cpy_r_r702);
    goto CPyL265;
CPyL366: ;
    CPy_DECREF(cpy_r_r710);
    goto CPyL143;
CPyL367: ;
    CPy_DecRef(cpy_r_r713);
    goto CPyL265;
CPyL368: ;
    CPy_DecRef(cpy_r_r720);
    goto CPyL265;
CPyL369: ;
    CPy_DecRef(cpy_r_r731);
    goto CPyL265;
CPyL370: ;
    CPy_DECREF(cpy_r_r740);
    goto CPyL149;
CPyL371: ;
    CPy_DecRef(cpy_r_r743);
    goto CPyL265;
CPyL372: ;
    CPy_DecRef(cpy_r_r743);
    CPy_DecRef(cpy_r_r751);
    goto CPyL265;
CPyL373: ;
    CPy_DECREF(cpy_r_r761);
    goto CPyL152;
CPyL374: ;
    CPy_DecRef(cpy_r_r764);
    goto CPyL265;
CPyL375: ;
    CPy_DECREF(cpy_r_r774);
    goto CPyL154;
CPyL376: ;
    CPy_DecRef(cpy_r_r777);
    goto CPyL265;
CPyL377: ;
    CPy_DECREF(cpy_r_r787);
    goto CPyL156;
CPyL378: ;
    CPy_DecRef(cpy_r_r790);
    goto CPyL265;
CPyL379: ;
    CPy_DECREF(cpy_r_r798);
    goto CPyL158;
CPyL380: ;
    CPy_DecRef(cpy_r_r801);
    goto CPyL265;
CPyL381: ;
    CPy_DECREF(cpy_r_r809);
    goto CPyL160;
CPyL382: ;
    CPy_DecRef(cpy_r_r812);
    goto CPyL265;
CPyL383: ;
    CPy_DECREF(cpy_r_r820);
    goto CPyL162;
CPyL384: ;
    CPy_DecRef(cpy_r_r823);
    goto CPyL265;
CPyL385: ;
    CPy_DECREF(cpy_r_r831);
    goto CPyL164;
CPyL386: ;
    CPy_DecRef(cpy_r_r834);
    goto CPyL265;
CPyL387: ;
    CPy_DECREF(cpy_r_r842);
    goto CPyL166;
CPyL388: ;
    CPy_DecRef(cpy_r_r845);
    goto CPyL265;
CPyL389: ;
    CPy_DecRef(cpy_r_r852);
    goto CPyL265;
CPyL390: ;
    CPy_DecRef(cpy_r_r863);
    goto CPyL265;
CPyL391: ;
    CPy_DecRef(cpy_r_r870);
    goto CPyL265;
CPyL392: ;
    CPy_DecRef(cpy_r_r881);
    goto CPyL265;
CPyL393: ;
    CPy_DECREF(cpy_r_r890);
    goto CPyL176;
CPyL394: ;
    CPy_DecRef(cpy_r_r893);
    goto CPyL265;
CPyL395: ;
    CPy_DECREF(cpy_r_r902);
    goto CPyL178;
CPyL396: ;
    CPy_DecRef(cpy_r_r905);
    goto CPyL265;
CPyL397: ;
    CPy_DECREF(cpy_r_r915);
    goto CPyL180;
CPyL398: ;
    CPy_DecRef(cpy_r_r918);
    goto CPyL265;
CPyL399: ;
    CPy_DecRef(cpy_r_r918);
    CPy_DecRef(cpy_r_r922);
    goto CPyL265;
CPyL400: ;
    CPy_DECREF(cpy_r_r927);
    goto CPyL183;
CPyL401: ;
    CPy_DecRef(cpy_r_r930);
    goto CPyL265;
CPyL402: ;
    CPy_DecRef(cpy_r_r935);
    goto CPyL265;
CPyL403: ;
    CPy_DecRef(cpy_r_r954);
    goto CPyL265;
CPyL404: ;
    CPy_DecRef(cpy_r_r966);
    goto CPyL265;
CPyL405: ;
    CPy_DecRef(cpy_r_r966);
    CPy_DecRef(cpy_r_r969);
    goto CPyL265;
CPyL406: ;
    CPy_DecRef(cpy_r_r983);
    goto CPyL265;
CPyL407: ;
    CPy_DecRef(cpy_r_r997);
    goto CPyL265;
CPyL408: ;
    CPy_DecRef(cpy_r_r1011);
    goto CPyL265;
CPyL409: ;
    CPy_DecRef(cpy_r_r1025);
    goto CPyL265;
CPyL410: ;
    CPy_DecRef(cpy_r_r1039);
    goto CPyL265;
CPyL411: ;
    CPy_DecRef(cpy_r_r1053);
    goto CPyL265;
CPyL412: ;
    CPy_DecRef(cpy_r_r1067);
    goto CPyL265;
CPyL413: ;
    CPy_DecRef(cpy_r_r1081);
    goto CPyL265;
CPyL414: ;
    CPy_DecRef(cpy_r_r1095);
    goto CPyL265;
CPyL415: ;
    CPy_DecRef(cpy_r_r1109);
    goto CPyL265;
CPyL416: ;
    CPy_DecRef(cpy_r_r1123);
    goto CPyL265;
CPyL417: ;
    CPy_DecRef(cpy_r_r1137);
    goto CPyL265;
CPyL418: ;
    CPy_DecRef(cpy_r_r1151);
    goto CPyL265;
}
