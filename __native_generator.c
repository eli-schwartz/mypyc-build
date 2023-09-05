#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *generator___add_throw_to_generator_class_env_setup(PyTypeObject *type);
PyObject *CPyDef_generator___add_throw_to_generator_class_env(void);

static PyObject *
generator___add_throw_to_generator_class_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_generator___add_throw_to_generator_class_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return generator___add_throw_to_generator_class_env_setup(type);
}

static int
generator___add_throw_to_generator_class_env_traverse(mypyc___irbuild___generator___add_throw_to_generator_class_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_none_reg);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_fn_info);
    Py_VISIT(self->_fn_decl);
    Py_VISIT(self->_sig);
    Py_VISIT(self->_typ);
    Py_VISIT(self->_val);
    Py_VISIT(self->_tb);
    return 0;
}

static int
generator___add_throw_to_generator_class_env_clear(mypyc___irbuild___generator___add_throw_to_generator_class_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_none_reg);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_fn_info);
    Py_CLEAR(self->_fn_decl);
    Py_CLEAR(self->_sig);
    Py_CLEAR(self->_typ);
    Py_CLEAR(self->_val);
    Py_CLEAR(self->_tb);
    return 0;
}

static void
generator___add_throw_to_generator_class_env_dealloc(mypyc___irbuild___generator___add_throw_to_generator_class_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, generator___add_throw_to_generator_class_env_dealloc)
    generator___add_throw_to_generator_class_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem generator___add_throw_to_generator_class_env_vtable[1];
static bool
CPyDef_generator___add_throw_to_generator_class_env_trait_vtable_setup(void)
{
    CPyVTableItem generator___add_throw_to_generator_class_env_vtable_scratch[] = {
        NULL
    };
    memcpy(generator___add_throw_to_generator_class_env_vtable, generator___add_throw_to_generator_class_env_vtable_scratch, sizeof(generator___add_throw_to_generator_class_env_vtable));
    return 1;
}

static PyMethodDef generator___add_throw_to_generator_class_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_generator___add_throw_to_generator_class_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "add_throw_to_generator_class_env",
    .tp_new = generator___add_throw_to_generator_class_env_new,
    .tp_dealloc = (destructor)generator___add_throw_to_generator_class_env_dealloc,
    .tp_traverse = (traverseproc)generator___add_throw_to_generator_class_env_traverse,
    .tp_clear = (inquiry)generator___add_throw_to_generator_class_env_clear,
    .tp_methods = generator___add_throw_to_generator_class_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___generator___add_throw_to_generator_class_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_generator___add_throw_to_generator_class_env_template = &CPyType_generator___add_throw_to_generator_class_env_template_;

static PyObject *
generator___add_throw_to_generator_class_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___generator___add_throw_to_generator_class_envObject *self;
    self = (mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = generator___add_throw_to_generator_class_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_generator___add_throw_to_generator_class_env(void)
{
    PyObject *self = generator___add_throw_to_generator_class_env_setup(CPyType_generator___add_throw_to_generator_class_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__generator_____mypyc_lambda__0_add_throw_to_generator_class_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__(self, instance, owner);
}
PyMemberDef generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_setup(PyTypeObject *type);
PyObject *CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj(void);

static PyObject *
generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_setup(type);
}

static int
generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_traverse(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject))));
    return 0;
}

static int
generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_clear(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject))));
    return 0;
}

static void
generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_dealloc(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_dealloc)
    generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable[2];
static bool
CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_trait_vtable_setup(void)
{
    CPyVTableItem generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__,
        (CPyVTableItem)CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__,
    };
    memcpy(generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable, generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable_scratch, sizeof(generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable));
    return 1;
}

static PyMethodDef generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_add_throw_to_generator_class_obj",
    .tp_new = generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_new,
    .tp_dealloc = (destructor)generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_dealloc,
    .tp_traverse = (traverseproc)generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_traverse,
    .tp_clear = (inquiry)generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_clear,
    .tp_methods = generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__generator_____mypyc_lambda__0_add_throw_to_generator_class_obj,
    .tp_members = generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_template = &CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_template_;

static PyObject *
generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *self;
    self = (mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_vtable;
    self->vectorcall = CPyPy_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj(void)
{
    PyObject *self = generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_setup(CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__generator_____mypyc_lambda__1_add_throw_to_generator_class_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__(self, instance, owner);
}
PyMemberDef generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_setup(PyTypeObject *type);
PyObject *CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj(void);

static PyObject *
generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_setup(type);
}

static int
generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_traverse(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject))));
    return 0;
}

static int
generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_clear(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject))));
    return 0;
}

static void
generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_dealloc(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_dealloc)
    generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable[2];
static bool
CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_trait_vtable_setup(void)
{
    CPyVTableItem generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__,
        (CPyVTableItem)CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__,
    };
    memcpy(generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable, generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable_scratch, sizeof(generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable));
    return 1;
}

static PyMethodDef generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_add_throw_to_generator_class_obj",
    .tp_new = generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_new,
    .tp_dealloc = (destructor)generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_dealloc,
    .tp_traverse = (traverseproc)generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_traverse,
    .tp_clear = (inquiry)generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_clear,
    .tp_methods = generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__generator_____mypyc_lambda__1_add_throw_to_generator_class_obj,
    .tp_members = generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_template = &CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_template_;

static PyObject *
generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *self;
    self = (mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_vtable;
    self->vectorcall = CPyPy_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj(void)
{
    PyObject *self = generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_setup(CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef generatormodule_methods[] = {
    {"gen_generator_func", (PyCFunction)CPyPy_generator___gen_generator_func, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"instantiate_generator_class", (PyCFunction)CPyPy_generator___instantiate_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setup_generator_class", (PyCFunction)CPyPy_generator___setup_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"create_switch_for_generator_class", (PyCFunction)CPyPy_generator___create_switch_for_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"populate_switch_for_generator_class", (PyCFunction)CPyPy_generator___populate_switch_for_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_raise_exception_blocks_to_generator_class", (PyCFunction)CPyPy_generator___add_raise_exception_blocks_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_methods_to_generator_class", (PyCFunction)CPyPy_generator___add_methods_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_helper_to_generator_class", (PyCFunction)CPyPy_generator___add_helper_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_iter_to_generator_class", (PyCFunction)CPyPy_generator___add_iter_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_next_to_generator_class", (PyCFunction)CPyPy_generator___add_next_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_send_to_generator_class", (PyCFunction)CPyPy_generator___add_send_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_throw_to_generator_class", (PyCFunction)CPyPy_generator___add_throw_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_close_to_generator_class", (PyCFunction)CPyPy_generator___add_close_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_await_to_generator_class", (PyCFunction)CPyPy_generator___add_await_to_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"setup_env_for_generator_class", (PyCFunction)CPyPy_generator___setup_env_for_generator_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef generatormodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.generator",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    generatormodule_methods
};

PyObject *CPyInit_mypyc___irbuild___generator(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___generator_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___generator_internal);
        return CPyModule_mypyc___irbuild___generator_internal;
    }
    CPyModule_mypyc___irbuild___generator_internal = PyModule_Create(&generatormodule);
    if (unlikely(CPyModule_mypyc___irbuild___generator_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___generator_internal, "__name__");
    CPyStatic_generator___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___generator_internal);
    if (unlikely(CPyStatic_generator___globals == NULL))
        goto fail;
    CPyType_generator___add_throw_to_generator_class_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_generator___add_throw_to_generator_class_env_template, NULL, modname);
    if (unlikely(!CPyType_generator___add_throw_to_generator_class_env))
        goto fail;
    CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_template, NULL, modname);
    if (unlikely(!CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj))
        goto fail;
    CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_template, NULL, modname);
    if (unlikely(!CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_generator_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___generator_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___generator_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_generator___add_throw_to_generator_class_env);
    Py_CLEAR(CPyType_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj);
    Py_CLEAR(CPyType_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj);
    return NULL;
}

char CPyDef_generator___gen_generator_func(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_generator___setup_generator_class(cpy_r_builder);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 53, CPyStatic_generator___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL1: ;
    cpy_r_r1 = CPyDef_env_class___load_env_registers(cpy_r_builder);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 54, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r2 = CPyDef_builder___gen_arg_defaults(cpy_r_builder);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 55, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_env_class___finalize_env_class(cpy_r_builder);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 56, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r4 = CPyDef_generator___instantiate_generator_class(cpy_r_builder);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 57, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___Return(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 57, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 57, CPyStatic_generator___globals);
        goto CPyL8;
    } else
        goto CPyL10;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL9: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
CPyL10: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_generator___gen_generator_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:gen_generator_func", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_generator___gen_generator_func(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "gen_generator_func", 52, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator___instantiate_generator_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fitem;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_generator_reg;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_curr_env_reg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_zero;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r0)->_fitem;
    CPy_INCREF(cpy_r_r1);
    cpy_r_fitem = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_r2, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 62, CPyStatic_generator___globals);
        goto CPyL18;
    }
CPyL1: ;
    cpy_r_r4 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r3)->_ir;
    cpy_r_r5 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r4)->_ctor;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "instantiate_generator_class", "ClassIR", "ctor", 62, CPyStatic_generator___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r5);
CPyL2: ;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 62, CPyStatic_generator___globals);
        goto CPyL19;
    }
    cpy_r_r7 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_ops___Call(cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 62, CPyStatic_generator___globals);
        goto CPyL18;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 62, CPyStatic_generator___globals);
        goto CPyL18;
    }
    cpy_r_generator_reg = cpy_r_r9;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r11 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r10)->_is_nested;
    if (!cpy_r_r11) goto CPyL9;
CPyL6: ;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_r12, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 69, CPyStatic_generator___globals);
        goto CPyL20;
    }
CPyL7: ;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_context___ImplicitClass, 3, mypyc___irbuild___context___ImplicitClassObject, PyObject *); /* curr_env_reg */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 69, CPyStatic_generator___globals);
        goto CPyL20;
    }
CPyL8: ;
    cpy_r_curr_env_reg = cpy_r_r14;
    goto CPyL11;
CPyL9: ;
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_context___FuncInfo, 10, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* curr_env_reg */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 71, CPyStatic_generator___globals);
        goto CPyL20;
    }
CPyL10: ;
    cpy_r_curr_env_reg = cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r18 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_ops___SetAttr(cpy_r_generator_reg, cpy_r_r17, cpy_r_curr_env_reg, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 75, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 75, CPyStatic_generator___globals);
        goto CPyL21;
    } else
        goto CPyL22;
CPyL13: ;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___Integer(0, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 78, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_zero = cpy_r_r23;
    cpy_r_r24 = CPyStatics[7708]; /* '__mypyc_next_label__' */
    cpy_r_r25 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_fitem);
    cpy_r_r26 = CPyDef_ops___SetAttr(cpy_r_curr_env_reg, cpy_r_r24, cpy_r_zero, cpy_r_r25);
    CPy_DECREF(cpy_r_curr_env_reg);
    CPy_DECREF(cpy_r_zero);
    CPyTagged_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 79, CPyStatic_generator___globals);
        goto CPyL23;
    }
    cpy_r_r27 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 79, CPyStatic_generator___globals);
        goto CPyL23;
    } else
        goto CPyL24;
CPyL16: ;
    return cpy_r_generator_reg;
CPyL17: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL18: ;
    CPy_DecRef(cpy_r_fitem);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r5);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_generator_reg);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_generator_reg);
    CPy_DecRef(cpy_r_curr_env_reg);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL13;
CPyL23: ;
    CPy_DecRef(cpy_r_generator_reg);
    goto CPyL17;
CPyL24: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL16;
}

PyObject *CPyPy_generator___instantiate_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:instantiate_generator_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *retval = CPyDef_generator___instantiate_generator_class(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "instantiate_generator_class", 60, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator___setup_generator_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_generator_class_ir;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_context___FuncInfo___namespaced_name(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 84, CPyStatic_generator___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[8370]; /* '_gen' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 84, CPyStatic_generator___globals);
        goto CPyL14;
    }
    cpy_r_name = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "setup_generator_class", "IRBuilder", "module_name", 86, CPyStatic_generator___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_class_ir___ClassIR(cpy_r_name, cpy_r_r4, cpy_r_r5, 1, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 86, CPyStatic_generator___globals);
        goto CPyL14;
    }
    cpy_r_generator_class_ir = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_r9, CPyType_context___FuncInfo, 6, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* env_class */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 87, CPyStatic_generator___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r11 = CPyDef_rtypes___RInstance(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 87, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r12 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_generator_class_ir)->_attributes;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "setup_generator_class", "ClassIR", "attributes", 87, CPyStatic_generator___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r12);
CPyL7: ;
    cpy_r_r13 = CPyStatics[7706]; /* '__mypyc_env__' */
    cpy_r_r14 = CPyDict_SetItem(cpy_r_r12, cpy_r_r13, cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 87, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r16 = PyList_New(1);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 88, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    CPy_INCREF(cpy_r_generator_class_ir);
    *(PyObject * *)cpy_r_r18 = cpy_r_generator_class_ir;
    if (((mypyc___ir___class_ir___ClassIRObject *)cpy_r_generator_class_ir)->_mro != NULL) {
        CPy_DECREF(((mypyc___ir___class_ir___ClassIRObject *)cpy_r_generator_class_ir)->_mro);
    }
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_generator_class_ir)->_mro = cpy_r_r16;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 88, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r20 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_classes;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PyList_Append(cpy_r_r20, cpy_r_generator_class_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 90, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r23 = CPyDef_context___GeneratorClass(cpy_r_generator_class_ir);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 91, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r25 = CPY_SET_ATTR(cpy_r_r24, CPyType_context___FuncInfo, 9, cpy_r_r23, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 91, CPyStatic_generator___globals);
        goto CPyL16;
    }
    return cpy_r_generator_class_ir;
CPyL14: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL15: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL14;
CPyL16: ;
    CPy_DecRef(cpy_r_generator_class_ir);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_generator_class_ir);
    CPy_DecRef(cpy_r_r11);
    goto CPyL14;
}

PyObject *CPyPy_generator___setup_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:setup_generator_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *retval = CPyDef_generator___setup_generator_class(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_generator_class", 83, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___create_switch_for_generator_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_block;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 96, CPyStatic_generator___globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r1)->_switch_block;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___Goto(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 96, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_r5 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 96, CPyStatic_generator___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 97, CPyStatic_generator___globals);
        goto CPyL8;
    }
    cpy_r_block = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 98, CPyStatic_generator___globals);
        goto CPyL10;
    }
CPyL5: ;
    cpy_r_r10 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r9)->_continuation_blocks;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyList_Append(cpy_r_r10, cpy_r_block);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 98, CPyStatic_generator___globals);
        goto CPyL10;
    }
    cpy_r_r13 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_block);
    CPy_DECREF(cpy_r_block);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 99, CPyStatic_generator___globals);
        goto CPyL8;
    }
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL9: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL3;
CPyL10: ;
    CPy_DecRef(cpy_r_block);
    goto CPyL8;
}

PyObject *CPyPy_generator___create_switch_for_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:create_switch_for_generator_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_generator___create_switch_for_generator_class(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "create_switch_for_generator_class", 95, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___populate_switch_for_generator_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_label;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_true_block;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_false_block;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_comparison;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 103, CPyStatic_generator___globals);
        goto CPyL17;
    }
CPyL1: ;
    cpy_r_cls = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r3 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r2)->_fitem;
    cpy_r_r4 = ((mypy___nodes___FuncItemObject *)cpy_r_r3)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_line = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_switch_block;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 106, CPyStatic_generator___globals);
        goto CPyL18;
    }
    cpy_r_r7 = 0;
    cpy_r_label = 0;
    cpy_r_r8 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_continuation_blocks;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL3: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_ops___BasicBlock))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 107, CPyStatic_generator___globals, "mypyc.ir.ops.BasicBlock", cpy_r_r14);
        goto CPyL20;
    }
    cpy_r_true_block = cpy_r_r15;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPyDef_ops___BasicBlock(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 108, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_false_block = cpy_r_r17;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 8, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_reg */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 109, CPyStatic_generator___globals);
        goto CPyL22;
    }
CPyL7: ;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_ops___Integer(cpy_r_label, cpy_r_r19, cpy_r_r20);
    CPyTagged_DECREF(cpy_r_label);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 109, CPyStatic_generator___globals);
        goto CPyL23;
    }
    cpy_r_r22 = CPyStatics[860]; /* '==' */
    cpy_r_r23 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_r18, cpy_r_r21, cpy_r_r22, cpy_r_line);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 109, CPyStatic_generator___globals);
        goto CPyL24;
    }
    cpy_r_comparison = cpy_r_r23;
    cpy_r_r24 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_true_block, cpy_r_false_block);
    CPy_DECREF(cpy_r_comparison);
    CPy_DECREF(cpy_r_true_block);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 110, CPyStatic_generator___globals);
        goto CPyL25;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_false_block);
    CPy_DECREF(cpy_r_false_block);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 111, CPyStatic_generator___globals);
        goto CPyL26;
    }
    cpy_r_r26 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r26;
    cpy_r_label = cpy_r_r26;
    cpy_r_r27 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r27;
    goto CPyL3;
CPyL12: ;
    cpy_r_r28 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r29 = Py_None;
    cpy_r_r30 = CPyDef_ops___RaiseStandardError(cpy_r_r28, cpy_r_r29, cpy_r_line);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 113, CPyStatic_generator___globals);
        goto CPyL17;
    }
    cpy_r_r31 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 113, CPyStatic_generator___globals);
        goto CPyL17;
    } else
        goto CPyL27;
CPyL14: ;
    cpy_r_r32 = CPY_INT_TAG;
    cpy_r_r33 = CPyDef_ops___Unreachable(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 114, CPyStatic_generator___globals);
        goto CPyL17;
    }
    cpy_r_r34 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 114, CPyStatic_generator___globals);
        goto CPyL17;
    } else
        goto CPyL28;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r35 = 2;
    return cpy_r_r35;
CPyL18: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_cls);
    CPyTagged_DECREF(cpy_r_label);
    CPy_DECREF(cpy_r_r8);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_true_block);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_label);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_true_block);
    CPy_DecRef(cpy_r_false_block);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_true_block);
    CPy_DecRef(cpy_r_false_block);
    CPy_DecRef(cpy_r_r18);
    goto CPyL17;
CPyL24: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_true_block);
    CPy_DecRef(cpy_r_false_block);
    goto CPyL17;
CPyL25: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_false_block);
    goto CPyL17;
CPyL26: ;
    CPy_DecRef(cpy_r_cls);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
CPyL27: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL14;
CPyL28: ;
    CPy_DECREF(cpy_r_r34);
    goto CPyL16;
}

PyObject *CPyPy_generator___populate_switch_for_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:populate_switch_for_generator_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_generator___populate_switch_for_generator_class(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "populate_switch_for_generator_class", 102, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_raise_exception_blocks_to_generator_class(PyObject *cpy_r_builder, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T3OOO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_exc_type;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_exc_val;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_exc_tb;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_error_block;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_ok_block;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_comparison;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 124, CPyStatic_generator___globals);
        goto CPyL19;
    }
CPyL1: ;
    cpy_r_cls = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_exc_regs;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL4;
    } else
        goto CPyL20;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 125, CPyStatic_generator___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_exc_regs;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_cls);
    PyObject *__tmp10267;
    if (unlikely(!(PyTuple_Check(cpy_r_r6) && PyTuple_GET_SIZE(cpy_r_r6) == 3))) {
        __tmp10267 = NULL;
        goto __LL10268;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r6, 0), CPyType_ops___Value)))
        __tmp10267 = PyTuple_GET_ITEM(cpy_r_r6, 0);
    else {
        __tmp10267 = NULL;
    }
    if (__tmp10267 == NULL) goto __LL10268;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r6, 1), CPyType_ops___Value)))
        __tmp10267 = PyTuple_GET_ITEM(cpy_r_r6, 1);
    else {
        __tmp10267 = NULL;
    }
    if (__tmp10267 == NULL) goto __LL10268;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r6, 2), CPyType_ops___Value)))
        __tmp10267 = PyTuple_GET_ITEM(cpy_r_r6, 2);
    else {
        __tmp10267 = NULL;
    }
    if (__tmp10267 == NULL) goto __LL10268;
    __tmp10267 = cpy_r_r6;
__LL10268: ;
    if (unlikely(__tmp10267 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.ops.Value, mypyc.ir.ops.Value, mypyc.ir.ops.Value]", cpy_r_r6); cpy_r_r7 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp10269 = PyTuple_GET_ITEM(cpy_r_r6, 0);
        CPy_INCREF(__tmp10269);
        PyObject *__tmp10270;
        if (likely(PyObject_TypeCheck(__tmp10269, CPyType_ops___Value)))
            __tmp10270 = __tmp10269;
        else {
            CPy_TypeError("mypyc.ir.ops.Value", __tmp10269); 
            __tmp10270 = NULL;
        }
        cpy_r_r7.f0 = __tmp10270;
        PyObject *__tmp10271 = PyTuple_GET_ITEM(cpy_r_r6, 1);
        CPy_INCREF(__tmp10271);
        PyObject *__tmp10272;
        if (likely(PyObject_TypeCheck(__tmp10271, CPyType_ops___Value)))
            __tmp10272 = __tmp10271;
        else {
            CPy_TypeError("mypyc.ir.ops.Value", __tmp10271); 
            __tmp10272 = NULL;
        }
        cpy_r_r7.f1 = __tmp10272;
        PyObject *__tmp10273 = PyTuple_GET_ITEM(cpy_r_r6, 2);
        CPy_INCREF(__tmp10273);
        PyObject *__tmp10274;
        if (likely(PyObject_TypeCheck(__tmp10273, CPyType_ops___Value)))
            __tmp10274 = __tmp10273;
        else {
            CPy_TypeError("mypyc.ir.ops.Value", __tmp10273); 
            __tmp10274 = NULL;
        }
        cpy_r_r7.f2 = __tmp10274;
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 126, CPyStatic_generator___globals);
        goto CPyL19;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_exc_type = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    cpy_r_exc_val = cpy_r_r9;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    CPy_DECREF(cpy_r_r7.f2);
    cpy_r_exc_tb = cpy_r_r10;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___BasicBlock(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 129, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_error_block = cpy_r_r12;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPyDef_ops___BasicBlock(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 130, CPyStatic_generator___globals);
        goto CPyL22;
    }
    cpy_r_ok_block = cpy_r_r14;
    cpy_r_r15 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 131, CPyStatic_generator___globals);
        goto CPyL23;
    }
    cpy_r_r16 = CPyStatics[862]; /* 'is not' */
    cpy_r_r17 = CPyDef_builder___IRBuilder___translate_is_op(cpy_r_builder, cpy_r_exc_type, cpy_r_r15, cpy_r_r16, cpy_r_line);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 131, CPyStatic_generator___globals);
        goto CPyL23;
    }
    cpy_r_comparison = cpy_r_r17;
    cpy_r_r18 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_comparison, cpy_r_error_block, cpy_r_ok_block);
    CPy_DECREF(cpy_r_comparison);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 132, CPyStatic_generator___globals);
        goto CPyL23;
    }
    cpy_r_r19 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 134, CPyStatic_generator___globals);
        goto CPyL24;
    }
    cpy_r_r20 = CPyStatic_generator___globals;
    cpy_r_r21 = CPyStatics[8371]; /* 'raise_exception_with_tb_op' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 135, CPyStatic_generator___globals);
        goto CPyL24;
    }
    if (likely(PyTuple_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 135, CPyStatic_generator___globals, "tuple", cpy_r_r22);
        goto CPyL24;
    }
    cpy_r_r24 = PyList_New(3);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 135, CPyStatic_generator___globals);
        goto CPyL25;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_exc_type;
    cpy_r_r27 = cpy_r_r26 + 8;
    *(PyObject * *)cpy_r_r27 = cpy_r_exc_val;
    cpy_r_r28 = cpy_r_r26 + 16;
    *(PyObject * *)cpy_r_r28 = cpy_r_exc_tb;
    cpy_r_r29 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r23, cpy_r_r24, cpy_r_line);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 135, CPyStatic_generator___globals);
        goto CPyL26;
    } else
        goto CPyL27;
CPyL15: ;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___Unreachable(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 136, CPyStatic_generator___globals);
        goto CPyL26;
    }
    cpy_r_r32 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 136, CPyStatic_generator___globals);
        goto CPyL26;
    } else
        goto CPyL28;
CPyL17: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 137, CPyStatic_generator___globals);
        goto CPyL19;
    }
    return 1;
CPyL19: ;
    cpy_r_r34 = 2;
    return cpy_r_r34;
CPyL20: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL2;
CPyL21: ;
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL19;
CPyL23: ;
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    CPy_DecRef(cpy_r_error_block);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL19;
CPyL24: ;
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_r23);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL19;
CPyL27: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL15;
CPyL28: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL17;
}

PyObject *CPyPy_generator___add_raise_exception_blocks_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "line", 0};
    static CPyArg_Parser parser = {"OO:add_raise_exception_blocks_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_generator___add_raise_exception_blocks_to_generator_class(arg_builder, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_raise_exception_blocks_to_generator_class", 117, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_methods_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info, PyObject *cpy_r_sig, PyObject *cpy_r_arg_regs, PyObject *cpy_r_blocks, char cpy_r_is_coroutine) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_helper_fn_decl;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyDef_generator___add_helper_to_generator_class(cpy_r_builder, cpy_r_arg_regs, cpy_r_blocks, cpy_r_sig, cpy_r_fn_info);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 148, CPyStatic_generator___globals);
        goto CPyL9;
    }
    cpy_r_helper_fn_decl = cpy_r_r0;
    cpy_r_r1 = CPyDef_generator___add_next_to_generator_class(cpy_r_builder, cpy_r_fn_info, cpy_r_helper_fn_decl, cpy_r_sig);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 149, CPyStatic_generator___globals);
        goto CPyL10;
    }
    cpy_r_r2 = CPyDef_generator___add_send_to_generator_class(cpy_r_builder, cpy_r_fn_info, cpy_r_helper_fn_decl, cpy_r_sig);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 150, CPyStatic_generator___globals);
        goto CPyL10;
    }
    cpy_r_r3 = CPyDef_generator___add_iter_to_generator_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 151, CPyStatic_generator___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyDef_generator___add_throw_to_generator_class(cpy_r_builder, cpy_r_fn_info, cpy_r_helper_fn_decl, cpy_r_sig);
    CPy_DECREF(cpy_r_helper_fn_decl);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 152, CPyStatic_generator___globals);
        goto CPyL9;
    }
    cpy_r_r5 = CPyDef_generator___add_close_to_generator_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 153, CPyStatic_generator___globals);
        goto CPyL9;
    }
    if (!cpy_r_is_coroutine) goto CPyL8;
    cpy_r_r6 = CPyDef_generator___add_await_to_generator_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 155, CPyStatic_generator___globals);
        goto CPyL9;
    }
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL10: ;
    CPy_DecRef(cpy_r_helper_fn_decl);
    goto CPyL9;
}

PyObject *CPyPy_generator___add_methods_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", "sig", "arg_regs", "blocks", "is_coroutine", 0};
    static CPyArg_Parser parser = {"OOOOOO:add_methods_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    PyObject *obj_sig;
    PyObject *obj_arg_regs;
    PyObject *obj_blocks;
    PyObject *obj_is_coroutine;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info, &obj_sig, &obj_arg_regs, &obj_blocks, &obj_is_coroutine)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_arg_regs;
    if (likely(PyList_Check(obj_arg_regs)))
        arg_arg_regs = obj_arg_regs;
    else {
        CPy_TypeError("list", obj_arg_regs); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    char arg_is_coroutine;
    if (unlikely(!PyBool_Check(obj_is_coroutine))) {
        CPy_TypeError("bool", obj_is_coroutine); goto fail;
    } else
        arg_is_coroutine = obj_is_coroutine == Py_True;
    char retval = CPyDef_generator___add_methods_to_generator_class(arg_builder, arg_fn_info, arg_sig, arg_arg_regs, arg_blocks, arg_is_coroutine);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_methods_to_generator_class", 140, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator___add_helper_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_arg_regs, PyObject *cpy_r_blocks, PyObject *cpy_r_sig, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    tuple_T5OOOOO cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_helper_fn_decl;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_helper_fn_ir;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r1 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 168, CPyStatic_generator___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_func_ir___RuntimeArg(cpy_r_r0, cpy_r_r1, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 168, CPyStatic_generator___globals);
        goto CPyL31;
    }
    cpy_r_r6 = CPyStatics[802]; /* 'type' */
    cpy_r_r7 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL7;
CPyL5: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 169, CPyStatic_generator___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_func_ir___RuntimeArg(cpy_r_r6, cpy_r_r7, cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 169, CPyStatic_generator___globals);
        goto CPyL33;
    }
    cpy_r_r12 = CPyStatics[2242]; /* 'value' */
    cpy_r_r13 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r13 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 170, CPyStatic_generator___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r15 = NULL;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_func_ir___RuntimeArg(cpy_r_r12, cpy_r_r13, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 170, CPyStatic_generator___globals);
        goto CPyL35;
    }
    cpy_r_r18 = CPyStatics[1767]; /* 'traceback' */
    cpy_r_r19 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL36;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 171, CPyStatic_generator___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r21 = NULL;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_func_ir___RuntimeArg(cpy_r_r18, cpy_r_r19, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 171, CPyStatic_generator___globals);
        goto CPyL37;
    }
    cpy_r_r24 = CPyStatics[2390]; /* 'arg' */
    cpy_r_r25 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 172, CPyStatic_generator___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r27 = NULL;
    cpy_r_r28 = 2;
    cpy_r_r29 = CPyDef_func_ir___RuntimeArg(cpy_r_r24, cpy_r_r25, cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 172, CPyStatic_generator___globals);
        goto CPyL39;
    }
    cpy_r_r30.f0 = cpy_r_r5;
    cpy_r_r30.f1 = cpy_r_r11;
    cpy_r_r30.f2 = cpy_r_r17;
    cpy_r_r30.f3 = cpy_r_r23;
    cpy_r_r30.f4 = cpy_r_r29;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_INCREF(cpy_r_r30.f2);
    CPy_INCREF(cpy_r_r30.f3);
    CPy_INCREF(cpy_r_r30.f4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PyTuple_New(5);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10275 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp10275);
    PyObject *__tmp10276 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp10276);
    PyObject *__tmp10277 = cpy_r_r30.f2;
    PyTuple_SET_ITEM(cpy_r_r32, 2, __tmp10277);
    PyObject *__tmp10278 = cpy_r_r30.f3;
    PyTuple_SET_ITEM(cpy_r_r32, 3, __tmp10278);
    PyObject *__tmp10279 = cpy_r_r30.f4;
    PyTuple_SET_ITEM(cpy_r_r32, 4, __tmp10279);
    cpy_r_r33 = CPyDef_func_ir___FuncSignature(cpy_r_r32, cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 166, CPyStatic_generator___globals);
        goto CPyL31;
    }
    cpy_r_sig = cpy_r_r33;
    cpy_r_r34 = CPyStatics[8372]; /* '__mypyc_generator_helper__' */
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 177, CPyStatic_generator___globals);
        goto CPyL40;
    }
CPyL22: ;
    cpy_r_r36 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r35)->_ir;
    cpy_r_r37 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r36)->_name;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "add_helper_to_generator_class", "IRBuilder", "module_name", 177, CPyStatic_generator___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r38);
CPyL23: ;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_func_ir___FuncDecl(cpy_r_r34, cpy_r_r37, cpy_r_r38, cpy_r_sig, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_sig);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 176, CPyStatic_generator___globals);
        goto CPyL31;
    }
    cpy_r_helper_fn_decl = cpy_r_r43;
    cpy_r_r44 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r45 = ((mypy___nodes___FuncItemObject *)cpy_r_r44)->_line;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_r46 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPY_GET_ATTR(cpy_r_r46, CPyType_nodes___FuncItem, 6, mypy___nodes___FuncItemObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 180, CPyStatic_generator___globals);
        goto CPyL42;
    }
CPyL25: ;
    cpy_r_r48 = CPyDef_func_ir___FuncIR(cpy_r_helper_fn_decl, cpy_r_arg_regs, cpy_r_blocks, cpy_r_r45, cpy_r_r47);
    CPyTagged_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 179, CPyStatic_generator___globals);
        goto CPyL43;
    }
    cpy_r_helper_fn_ir = cpy_r_r48;
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 182, CPyStatic_generator___globals);
        goto CPyL44;
    }
CPyL27: ;
    cpy_r_r50 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r49)->_ir;
    cpy_r_r51 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r50)->_methods;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "add_helper_to_generator_class", "ClassIR", "methods", 182, CPyStatic_generator___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r51);
CPyL28: ;
    cpy_r_r52 = CPyStatics[8372]; /* '__mypyc_generator_helper__' */
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r51, cpy_r_r52, cpy_r_helper_fn_ir);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 182, CPyStatic_generator___globals);
        goto CPyL44;
    }
    cpy_r_r55 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = PyList_Append(cpy_r_r55, cpy_r_helper_fn_ir);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_helper_fn_ir);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 183, CPyStatic_generator___globals);
        goto CPyL43;
    }
    return cpy_r_helper_fn_decl;
CPyL31: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL32: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
CPyL33: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL9;
CPyL35: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    goto CPyL13;
CPyL37: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r23);
    goto CPyL17;
CPyL39: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r23);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_sig);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_sig);
    CPy_DecRef(cpy_r_r37);
    goto CPyL31;
CPyL42: ;
    CPy_DecRef(cpy_r_helper_fn_decl);
    CPyTagged_DecRef(cpy_r_r45);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_helper_fn_decl);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_helper_fn_decl);
    CPy_DecRef(cpy_r_helper_fn_ir);
    goto CPyL31;
}

PyObject *CPyPy_generator___add_helper_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "arg_regs", "blocks", "sig", "fn_info", 0};
    static CPyArg_Parser parser = {"OOOOO:add_helper_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_arg_regs;
    PyObject *obj_blocks;
    PyObject *obj_sig;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_arg_regs, &obj_blocks, &obj_sig, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_arg_regs;
    if (likely(PyList_Check(obj_arg_regs)))
        arg_arg_regs = obj_arg_regs;
    else {
        CPy_TypeError("list", obj_arg_regs); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_generator___add_helper_to_generator_class(arg_builder, arg_arg_regs, arg_blocks, arg_sig, arg_fn_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_helper_to_generator_class", 158, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_iter_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL33;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[823]; /* '__iter__' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[5] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fn_info};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL36;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 190, CPyStatic_generator___globals);
        goto CPyL12;
    }
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPyDef_ops___Return(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 190, CPyStatic_generator___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 190, CPyStatic_generator___globals);
    } else
        goto CPyL39;
CPyL12: ;
    cpy_r_r22 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r23 = CPy_GetExcInfo();
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    PyObject *cpy_r_r27[4] = {cpy_r_r8, cpy_r_r24, cpy_r_r25, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r28, 4, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL18;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) goto CPyL17;
    CPy_Reraise();
    if (!0) {
        goto CPyL18;
    } else
        goto CPyL41;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL20;
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) {
        goto CPyL21;
    } else
        goto CPyL42;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    tuple_T3OOO __tmp10280 = { NULL, NULL, NULL };
    cpy_r_r34 = __tmp10280;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL22;
CPyL21: ;
    cpy_r_r36 = CPy_CatchError();
    cpy_r_r35 = cpy_r_r36;
CPyL22: ;
    if (!cpy_r_r17) goto CPyL43;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r38[4] = {cpy_r_r8, cpy_r_r37, cpy_r_r37, cpy_r_r37};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r39, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 189, CPyStatic_generator___globals);
        goto CPyL44;
    } else
        goto CPyL45;
CPyL24: ;
    CPy_DECREF(cpy_r_r8);
CPyL25: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL32;
    CPy_Reraise();
    if (!0) {
        goto CPyL28;
    } else
        goto CPyL46;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL30;
    CPy_RestoreExcInfo(cpy_r_r35);
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
CPyL30: ;
    cpy_r_r41 = CPy_KeepPropagating();
    if (!cpy_r_r41) goto CPyL33;
    CPy_Unreachable();
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL34: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL35: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL39: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL20;
CPyL40: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL18;
CPyL41: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL16;
CPyL42: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL19;
CPyL43: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL25;
CPyL44: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL45: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL24;
CPyL46: ;
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
    goto CPyL27;
}

PyObject *CPyPy_generator___add_iter_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:add_iter_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    char retval = CPyDef_generator___add_iter_to_generator_class(arg_builder, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_iter_to_generator_class", 187, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_next_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info, PyObject *cpy_r_fn_decl, PyObject *cpy_r_sig) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_none_reg;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    tuple_T3OOO cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL37;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[824]; /* '__next__' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL38;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[5] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fn_info};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL39;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL40;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL41;
    } else
        goto CPyL42;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 198, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_none_reg = cpy_r_r18;
    cpy_r_r19 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 203, CPyStatic_generator___globals);
        goto CPyL43;
    }
    cpy_r_r20 = PyList_New(5);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 203, CPyStatic_generator___globals);
        goto CPyL44;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r19;
    cpy_r_r23 = cpy_r_r22 + 8;
    CPy_INCREF(cpy_r_none_reg);
    *(PyObject * *)cpy_r_r23 = cpy_r_none_reg;
    cpy_r_r24 = cpy_r_r22 + 16;
    CPy_INCREF(cpy_r_none_reg);
    *(PyObject * *)cpy_r_r24 = cpy_r_none_reg;
    cpy_r_r25 = cpy_r_r22 + 24;
    CPy_INCREF(cpy_r_none_reg);
    *(PyObject * *)cpy_r_r25 = cpy_r_none_reg;
    cpy_r_r26 = cpy_r_r22 + 32;
    *(PyObject * *)cpy_r_r26 = cpy_r_none_reg;
    cpy_r_r27 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r28 = ((mypy___nodes___FuncItemObject *)cpy_r_r27)->_line;
    CPyTagged_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_ops___Call(cpy_r_fn_decl, cpy_r_r20, cpy_r_r28);
    CPy_DECREF(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 201, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r30 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 200, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_result = cpy_r_r30;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPyDef_ops___Return(cpy_r_result, cpy_r_r31);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 207, CPyStatic_generator___globals);
        goto CPyL16;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 207, CPyStatic_generator___globals);
    } else
        goto CPyL45;
CPyL16: ;
    cpy_r_r34 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r35 = CPy_GetExcInfo();
    cpy_r_r36 = cpy_r_r35.f0;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = cpy_r_r35.f1;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = cpy_r_r35.f2;
    CPy_INCREF(cpy_r_r38);
    CPy_DecRef(cpy_r_r35.f0);
    CPy_DecRef(cpy_r_r35.f1);
    CPy_DecRef(cpy_r_r35.f2);
    PyObject *cpy_r_r39[4] = {cpy_r_r8, cpy_r_r36, cpy_r_r37, cpy_r_r38};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r40, 4, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL46;
    }
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    cpy_r_r42 = PyObject_IsTrue(cpy_r_r41);
    CPy_DecRef(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL22;
    }
    cpy_r_r44 = cpy_r_r42;
    if (cpy_r_r44) goto CPyL21;
    CPy_Reraise();
    if (!0) {
        goto CPyL22;
    } else
        goto CPyL47;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL24;
CPyL22: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    cpy_r_r45 = CPy_KeepPropagating();
    if (!cpy_r_r45) {
        goto CPyL25;
    } else
        goto CPyL48;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    tuple_T3OOO __tmp10281 = { NULL, NULL, NULL };
    cpy_r_r46 = __tmp10281;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL26;
CPyL25: ;
    cpy_r_r48 = CPy_CatchError();
    cpy_r_r47 = cpy_r_r48;
CPyL26: ;
    if (!cpy_r_r17) goto CPyL49;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r50[4] = {cpy_r_r8, cpy_r_r49, cpy_r_r49, cpy_r_r49};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r51, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 197, CPyStatic_generator___globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL28: ;
    CPy_DECREF(cpy_r_r8);
CPyL29: ;
    if (cpy_r_r47.f0 == NULL) goto CPyL36;
    CPy_Reraise();
    if (!0) {
        goto CPyL32;
    } else
        goto CPyL52;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    if (cpy_r_r47.f0 == NULL) goto CPyL34;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_XDECREF(cpy_r_r47.f0);
    CPy_XDECREF(cpy_r_r47.f1);
    CPy_XDECREF(cpy_r_r47.f2);
CPyL34: ;
    cpy_r_r53 = CPy_KeepPropagating();
    if (!cpy_r_r53) goto CPyL37;
    CPy_Unreachable();
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL38: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL39: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL37;
CPyL42: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL43: ;
    CPy_DecRef(cpy_r_none_reg);
    goto CPyL16;
CPyL44: ;
    CPy_DecRef(cpy_r_none_reg);
    CPy_DecRef(cpy_r_r19);
    goto CPyL16;
CPyL45: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL24;
CPyL46: ;
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    goto CPyL22;
CPyL47: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL20;
CPyL48: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL49: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL29;
CPyL50: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL32;
CPyL51: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL28;
CPyL52: ;
    CPy_XDECREF(cpy_r_r47.f0);
    CPy_XDECREF(cpy_r_r47.f1);
    CPy_XDECREF(cpy_r_r47.f2);
    goto CPyL31;
}

PyObject *CPyPy_generator___add_next_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", "fn_decl", "sig", 0};
    static CPyArg_Parser parser = {"OOOO:add_next_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    PyObject *obj_fn_decl;
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info, &obj_fn_decl, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_fn_decl;
    if (likely(Py_TYPE(obj_fn_decl) == CPyType_func_ir___FuncDecl))
        arg_fn_decl = obj_fn_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn_decl); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    char retval = CPyDef_generator___add_next_to_generator_class(arg_builder, arg_fn_info, arg_fn_decl, arg_sig);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_next_to_generator_class", 193, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_send_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info, PyObject *cpy_r_fn_decl, PyObject *cpy_r_sig) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_none_reg;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL42;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[8373]; /* 'send' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[5] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fn_info};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL45;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL47;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyStatics[2390]; /* 'arg' */
    cpy_r_r19 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r19 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 215, CPyStatic_generator___globals);
        goto CPyL21;
    } else
        goto CPyL48;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r18, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 215, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_arg = cpy_r_r22;
    cpy_r_r23 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 216, CPyStatic_generator___globals);
        goto CPyL49;
    }
    cpy_r_none_reg = cpy_r_r23;
    cpy_r_r24 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 221, CPyStatic_generator___globals);
        goto CPyL50;
    }
    cpy_r_r25 = CPY_INT_TAG;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_arg, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 221, CPyStatic_generator___globals);
        goto CPyL51;
    }
    cpy_r_r28 = PyList_New(5);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 221, CPyStatic_generator___globals);
        goto CPyL52;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_r24;
    cpy_r_r31 = cpy_r_r30 + 8;
    CPy_INCREF(cpy_r_none_reg);
    *(PyObject * *)cpy_r_r31 = cpy_r_none_reg;
    cpy_r_r32 = cpy_r_r30 + 16;
    CPy_INCREF(cpy_r_none_reg);
    *(PyObject * *)cpy_r_r32 = cpy_r_none_reg;
    cpy_r_r33 = cpy_r_r30 + 24;
    *(PyObject * *)cpy_r_r33 = cpy_r_none_reg;
    cpy_r_r34 = cpy_r_r30 + 32;
    *(PyObject * *)cpy_r_r34 = cpy_r_r27;
    cpy_r_r35 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r36 = ((mypy___nodes___FuncItemObject *)cpy_r_r35)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    cpy_r_r37 = CPyDef_ops___Call(cpy_r_fn_decl, cpy_r_r28, cpy_r_r36);
    CPy_DECREF(cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 219, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 218, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_result = cpy_r_r38;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPyDef_ops___Return(cpy_r_result, cpy_r_r39);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 225, CPyStatic_generator___globals);
        goto CPyL21;
    }
    cpy_r_r41 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 225, CPyStatic_generator___globals);
    } else
        goto CPyL53;
CPyL21: ;
    cpy_r_r42 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r43 = CPy_GetExcInfo();
    cpy_r_r44 = cpy_r_r43.f0;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r43.f1;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = cpy_r_r43.f2;
    CPy_INCREF(cpy_r_r46);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    PyObject *cpy_r_r47[4] = {cpy_r_r8, cpy_r_r44, cpy_r_r45, cpy_r_r46};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r48, 4, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL54;
    }
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    cpy_r_r50 = PyObject_IsTrue(cpy_r_r49);
    CPy_DecRef(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL27;
    }
    cpy_r_r52 = cpy_r_r50;
    if (cpy_r_r52) goto CPyL26;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL55;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL29;
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r53 = CPy_KeepPropagating();
    if (!cpy_r_r53) {
        goto CPyL30;
    } else
        goto CPyL56;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    tuple_T3OOO __tmp10282 = { NULL, NULL, NULL };
    cpy_r_r54 = __tmp10282;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL31;
CPyL30: ;
    cpy_r_r56 = CPy_CatchError();
    cpy_r_r55 = cpy_r_r56;
CPyL31: ;
    if (!cpy_r_r17) goto CPyL57;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r58[4] = {cpy_r_r8, cpy_r_r57, cpy_r_r57, cpy_r_r57};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r59, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 214, CPyStatic_generator___globals);
        goto CPyL58;
    } else
        goto CPyL59;
CPyL33: ;
    CPy_DECREF(cpy_r_r8);
CPyL34: ;
    if (cpy_r_r55.f0 == NULL) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL37;
    } else
        goto CPyL60;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    if (cpy_r_r55.f0 == NULL) goto CPyL39;
    CPy_RestoreExcInfo(cpy_r_r55);
    CPy_XDECREF(cpy_r_r55.f0);
    CPy_XDECREF(cpy_r_r55.f1);
    CPy_XDECREF(cpy_r_r55.f2);
CPyL39: ;
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) goto CPyL42;
    CPy_Unreachable();
CPyL41: ;
    return 1;
CPyL42: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL43: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL44: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL42;
CPyL46: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL42;
CPyL47: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL48: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL49: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL21;
CPyL50: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_none_reg);
    goto CPyL21;
CPyL51: ;
    CPy_DecRef(cpy_r_none_reg);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
CPyL52: ;
    CPy_DecRef(cpy_r_none_reg);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL21;
CPyL53: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL29;
CPyL54: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    goto CPyL27;
CPyL55: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL25;
CPyL56: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL28;
CPyL57: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL34;
CPyL58: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL37;
CPyL59: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL33;
CPyL60: ;
    CPy_XDECREF(cpy_r_r55.f0);
    CPy_XDECREF(cpy_r_r55.f1);
    CPy_XDECREF(cpy_r_r55.f2);
    goto CPyL36;
}

PyObject *CPyPy_generator___add_send_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", "fn_decl", "sig", 0};
    static CPyArg_Parser parser = {"OOOO:add_send_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    PyObject *obj_fn_decl;
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info, &obj_fn_decl, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_fn_decl;
    if (likely(Py_TYPE(obj_fn_decl) == CPyType_func_ir___FuncDecl))
        arg_fn_decl = obj_fn_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn_decl); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    char retval = CPyDef_generator___add_send_to_generator_class(arg_builder, arg_fn_info, arg_fn_decl, arg_sig);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_send_to_generator_class", 210, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "__get__", -1, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "<lambda>", "__mypyc_lambda__0_add_throw_to_generator_class_obj", "__mypyc_env__", 241, CPyStatic_generator___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'none_reg' of 'add_throw_to_generator_class_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<lambda>", 241, CPyStatic_generator___globals);
        goto CPyL3;
    }
CPyL2: ;
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "<lambda>", 241, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "__get__", -1, CPyStatic_generator___globals);
    return NULL;
}

PyObject *CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/generator.py", "<lambda>", "__mypyc_lambda__1_add_throw_to_generator_class_obj", "__mypyc_env__", 242, CPyStatic_generator___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg;
    if (unlikely(cpy_r_r1 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'none_reg' of 'add_throw_to_generator_class_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r1);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<lambda>", 242, CPyStatic_generator___globals);
        goto CPyL3;
    }
CPyL2: ;
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "<lambda>", 242, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_throw_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info, PyObject *cpy_r_fn_decl, PyObject *cpy_r_sig) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_tb;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    CPyPtr cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T3OOO cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    tuple_T3OOO cpy_r_r88;
    tuple_T3OOO cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    cpy_r_r0 = CPyDef_generator___add_throw_to_generator_class_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 228, CPyStatic_generator___globals);
        goto CPyL67;
    }
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL68;
    }
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r1)->_ir;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyStatics[8374]; /* 'throw' */
    cpy_r_r4 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL69;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r7[5] = {cpy_r_builder, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_fn_info};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r2);
    cpy_r_r10 = PyObject_Type(cpy_r_r9);
    cpy_r_r11 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL71;
    }
    cpy_r_r13 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL72;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL9: ;
    cpy_r_r18 = 1;
    cpy_r_r19 = CPyStatics[802]; /* 'type' */
    cpy_r_r20 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 233, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL75;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r19, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 233, CPyStatic_generator___globals);
        goto CPyL76;
    }
    cpy_r_typ = cpy_r_r23;
    cpy_r_r24 = CPyStatics[2242]; /* 'value' */
    cpy_r_r25 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL77;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 234, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL78;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r27 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL79;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 234, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL80;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r29 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r24, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 234, CPyStatic_generator___globals);
        goto CPyL81;
    }
    cpy_r_val = cpy_r_r29;
    cpy_r_r30 = CPyStatics[1767]; /* 'traceback' */
    cpy_r_r31 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL82;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 235, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL83;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r33 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL84;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 235, CPyStatic_generator___globals);
        goto CPyL46;
    } else
        goto CPyL85;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r35 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r30, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 235, CPyStatic_generator___globals);
        goto CPyL86;
    }
    cpy_r_tb = cpy_r_r35;
    cpy_r_r36 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 240, CPyStatic_generator___globals);
        goto CPyL87;
    }
    if (((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg);
    }
    ((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 240, CPyStatic_generator___globals);
        goto CPyL87;
    }
    cpy_r_r38 = CPyDef_generator_____mypyc_lambda__0_add_throw_to_generator_class_obj();
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 241, CPyStatic_generator___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *)cpy_r_r38)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *)cpy_r_r38)->___mypyc_env__);
    }
    ((mypyc___irbuild___generator_____mypyc_lambda__0_add_throw_to_generator_class_objObject *)cpy_r_r38)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 241, CPyStatic_generator___globals);
        goto CPyL88;
    }
    cpy_r_r40 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r41 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r40)->_fitem;
    cpy_r_r42 = ((mypy___nodes___FuncItemObject *)cpy_r_r41)->_line;
    CPyTagged_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_builder___IRBuilder___assign_if_null(cpy_r_builder, cpy_r_val, cpy_r_r38, cpy_r_r42);
    CPy_DECREF(cpy_r_r38);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 241, CPyStatic_generator___globals);
        goto CPyL87;
    }
    cpy_r_r44 = CPyDef_generator_____mypyc_lambda__1_add_throw_to_generator_class_obj();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 242, CPyStatic_generator___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *)cpy_r_r44)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *)cpy_r_r44)->___mypyc_env__);
    }
    ((mypyc___irbuild___generator_____mypyc_lambda__1_add_throw_to_generator_class_objObject *)cpy_r_r44)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r45 = 1;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 242, CPyStatic_generator___globals);
        goto CPyL89;
    }
    cpy_r_r46 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r47 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r46)->_fitem;
    cpy_r_r48 = ((mypy___nodes___FuncItemObject *)cpy_r_r47)->_line;
    CPyTagged_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDef_builder___IRBuilder___assign_if_null(cpy_r_builder, cpy_r_tb, cpy_r_r44, cpy_r_r48);
    CPy_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 242, CPyStatic_generator___globals);
        goto CPyL87;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL87;
    }
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = 2;
    cpy_r_r53 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_typ, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL90;
    }
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = 2;
    cpy_r_r56 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_val, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_val);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL91;
    }
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = 2;
    cpy_r_r59 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_tb, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_tb);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL92;
    }
    cpy_r_r60 = ((mypyc___irbuild___generator___add_throw_to_generator_class_envObject *)cpy_r_r0)->_none_reg;
    if (unlikely(cpy_r_r60 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'none_reg' of 'add_throw_to_generator_class_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r60);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL93;
    }
CPyL41: ;
    cpy_r_r61 = PyList_New(5);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 248, CPyStatic_generator___globals);
        goto CPyL94;
    }
    cpy_r_r62 = (CPyPtr)&((PyListObject *)cpy_r_r61)->ob_item;
    cpy_r_r63 = *(CPyPtr *)cpy_r_r62;
    *(PyObject * *)cpy_r_r63 = cpy_r_r50;
    cpy_r_r64 = cpy_r_r63 + 8;
    *(PyObject * *)cpy_r_r64 = cpy_r_r53;
    cpy_r_r65 = cpy_r_r63 + 16;
    *(PyObject * *)cpy_r_r65 = cpy_r_r56;
    cpy_r_r66 = cpy_r_r63 + 24;
    *(PyObject * *)cpy_r_r66 = cpy_r_r59;
    cpy_r_r67 = cpy_r_r63 + 32;
    *(PyObject * *)cpy_r_r67 = cpy_r_r60;
    cpy_r_r68 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r69 = ((mypy___nodes___FuncItemObject *)cpy_r_r68)->_line;
    CPyTagged_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyDef_ops___Call(cpy_r_fn_decl, cpy_r_r61, cpy_r_r69);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 246, CPyStatic_generator___globals);
        goto CPyL46;
    }
    cpy_r_r71 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 245, CPyStatic_generator___globals);
        goto CPyL46;
    }
    cpy_r_result = cpy_r_r71;
    cpy_r_r72 = CPY_INT_TAG;
    cpy_r_r73 = CPyDef_ops___Return(cpy_r_result, cpy_r_r72);
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 252, CPyStatic_generator___globals);
        goto CPyL46;
    }
    cpy_r_r74 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 252, CPyStatic_generator___globals);
    } else
        goto CPyL95;
CPyL46: ;
    cpy_r_r75 = CPy_CatchError();
    cpy_r_r18 = 0;
    cpy_r_r76 = CPy_GetExcInfo();
    cpy_r_r77 = cpy_r_r76.f0;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = cpy_r_r76.f1;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = cpy_r_r76.f2;
    CPy_INCREF(cpy_r_r79);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    PyObject *cpy_r_r80[4] = {cpy_r_r9, cpy_r_r77, cpy_r_r78, cpy_r_r79};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r81, 4, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL96;
    }
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    cpy_r_r83 = PyObject_IsTrue(cpy_r_r82);
    CPy_DecRef(cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL52;
    }
    cpy_r_r85 = cpy_r_r83;
    if (cpy_r_r85) goto CPyL51;
    CPy_Reraise();
    if (!0) {
        goto CPyL52;
    } else
        goto CPyL97;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r75);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    CPy_DecRef(cpy_r_r75.f2);
    goto CPyL54;
CPyL52: ;
    CPy_RestoreExcInfo(cpy_r_r75);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    CPy_DecRef(cpy_r_r75.f2);
    cpy_r_r86 = CPy_KeepPropagating();
    if (!cpy_r_r86) {
        goto CPyL55;
    } else
        goto CPyL98;
CPyL53: ;
    CPy_Unreachable();
CPyL54: ;
    tuple_T3OOO __tmp10283 = { NULL, NULL, NULL };
    cpy_r_r87 = __tmp10283;
    cpy_r_r88 = cpy_r_r87;
    goto CPyL56;
CPyL55: ;
    cpy_r_r89 = CPy_CatchError();
    cpy_r_r88 = cpy_r_r89;
CPyL56: ;
    if (!cpy_r_r18) goto CPyL99;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r91[4] = {cpy_r_r9, cpy_r_r90, cpy_r_r90, cpy_r_r90};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r92, 4, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 232, CPyStatic_generator___globals);
        goto CPyL100;
    } else
        goto CPyL101;
CPyL58: ;
    CPy_DECREF(cpy_r_r9);
CPyL59: ;
    if (cpy_r_r88.f0 == NULL) goto CPyL66;
    CPy_Reraise();
    if (!0) {
        goto CPyL62;
    } else
        goto CPyL102;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    if (cpy_r_r88.f0 == NULL) goto CPyL64;
    CPy_RestoreExcInfo(cpy_r_r88);
    CPy_XDECREF(cpy_r_r88.f0);
    CPy_XDECREF(cpy_r_r88.f1);
    CPy_XDECREF(cpy_r_r88.f2);
CPyL64: ;
    cpy_r_r94 = CPy_KeepPropagating();
    if (!cpy_r_r94) goto CPyL67;
    CPy_Unreachable();
CPyL66: ;
    return 1;
CPyL67: ;
    cpy_r_r95 = 2;
    return cpy_r_r95;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL67;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL3;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL67;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL67;
CPyL73: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL9;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL75: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL46;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    goto CPyL15;
CPyL78: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL79: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    goto CPyL18;
CPyL80: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL19;
CPyL81: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    goto CPyL46;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    goto CPyL22;
CPyL83: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    goto CPyL25;
CPyL85: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    goto CPyL46;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_tb);
    goto CPyL46;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r38);
    goto CPyL46;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r44);
    goto CPyL46;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r50);
    goto CPyL46;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    goto CPyL46;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL46;
CPyL93: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    goto CPyL46;
CPyL94: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r60);
    goto CPyL46;
CPyL95: ;
    CPy_DECREF(cpy_r_r74);
    goto CPyL54;
CPyL96: ;
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r79);
    goto CPyL52;
CPyL97: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r75.f0);
    CPy_DecRef(cpy_r_r75.f1);
    CPy_DecRef(cpy_r_r75.f2);
    goto CPyL50;
CPyL98: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL53;
CPyL99: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    goto CPyL59;
CPyL100: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL62;
CPyL101: ;
    CPy_DECREF(cpy_r_r93);
    goto CPyL58;
CPyL102: ;
    CPy_XDECREF(cpy_r_r88.f0);
    CPy_XDECREF(cpy_r_r88.f1);
    CPy_XDECREF(cpy_r_r88.f2);
    goto CPyL61;
}

PyObject *CPyPy_generator___add_throw_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", "fn_decl", "sig", 0};
    static CPyArg_Parser parser = {"OOOO:add_throw_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    PyObject *obj_fn_decl;
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info, &obj_fn_decl, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_fn_decl;
    if (likely(Py_TYPE(obj_fn_decl) == CPyType_func_ir___FuncDecl))
        arg_fn_decl = obj_fn_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_fn_decl); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    char retval = CPyDef_generator___add_throw_to_generator_class(arg_builder, arg_fn_info, arg_fn_decl, arg_sig);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_throw_to_generator_class", 228, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_close_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_except_block;
    PyObject *cpy_r_else_block;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_generator_exit;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_old_exc;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_stop_iteration;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_exceptions;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_matches;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_match_block;
    PyObject *cpy_r_non_match_block;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyTagged cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    CPyPtr cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyTagged cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    tuple_T3OOO cpy_r_r141;
    tuple_T3OOO cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject **cpy_r_r147;
    PyObject *cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    tuple_T3OOO cpy_r_r153;
    tuple_T3OOO cpy_r_r154;
    tuple_T3OOO cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL90;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[1927]; /* 'close' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL91;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL90;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[5] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fn_info};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL92;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL93;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL94;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___BasicBlock(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 258, CPyStatic_generator___globals);
        goto CPyL69;
    }
    cpy_r_r20 = cpy_r_r19;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___BasicBlock(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 258, CPyStatic_generator___globals);
        goto CPyL96;
    }
    cpy_r_r23 = cpy_r_r22;
    cpy_r_except_block = cpy_r_r20;
    cpy_r_else_block = cpy_r_r23;
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r24, cpy_r_except_block);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 259, CPyStatic_generator___globals);
        goto CPyL97;
    }
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_ops___BasicBlock(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 260, CPyStatic_generator___globals);
        goto CPyL97;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 260, CPyStatic_generator___globals);
        goto CPyL97;
    }
    cpy_r_r29 = CPyStatics[8375]; /* 'builtins.GeneratorExit' */
    cpy_r_r30 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r31 = ((mypy___nodes___FuncItemObject *)cpy_r_r30)->_line;
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r29, cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 261, CPyStatic_generator___globals);
        goto CPyL97;
    }
    cpy_r_generator_exit = cpy_r_r32;
    cpy_r_r33 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 266, CPyStatic_generator___globals);
        goto CPyL98;
    }
    cpy_r_r34 = CPyStatics[8374]; /* 'throw' */
    cpy_r_r35 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 268, CPyStatic_generator___globals);
        goto CPyL99;
    }
    cpy_r_r36 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 268, CPyStatic_generator___globals);
        goto CPyL100;
    }
    cpy_r_r37 = PyList_New(3);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 268, CPyStatic_generator___globals);
        goto CPyL101;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    CPy_INCREF(cpy_r_generator_exit);
    *(PyObject * *)cpy_r_r39 = cpy_r_generator_exit;
    cpy_r_r40 = cpy_r_r39 + 8;
    *(PyObject * *)cpy_r_r40 = cpy_r_r35;
    cpy_r_r41 = cpy_r_r39 + 16;
    *(PyObject * *)cpy_r_r41 = cpy_r_r36;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPyDef_ops___MethodCall(cpy_r_r33, cpy_r_r34, cpy_r_r37, cpy_r_r42);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 265, CPyStatic_generator___globals);
        goto CPyL98;
    }
    cpy_r_r44 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 264, CPyStatic_generator___globals);
        goto CPyL98;
    } else
        goto CPyL102;
CPyL21: ;
    cpy_r_r45 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_else_block);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 271, CPyStatic_generator___globals);
        goto CPyL98;
    }
    cpy_r_r46 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 272, CPyStatic_generator___globals);
        goto CPyL98;
    } else
        goto CPyL103;
CPyL23: ;
    cpy_r_r48 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_except_block);
    CPy_DECREF(cpy_r_except_block);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 274, CPyStatic_generator___globals);
        goto CPyL104;
    }
    cpy_r_r49 = CPyStatic_generator___globals;
    cpy_r_r50 = CPyStatics[8376]; /* 'error_catch_op' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 275, CPyStatic_generator___globals);
        goto CPyL104;
    }
    if (likely(PyTuple_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 275, CPyStatic_generator___globals, "tuple", cpy_r_r51);
        goto CPyL104;
    }
    cpy_r_r53 = PyList_New(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 275, CPyStatic_generator___globals);
        goto CPyL105;
    }
    cpy_r_r54 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r55 = ((mypy___nodes___FuncItemObject *)cpy_r_r54)->_line;
    CPyTagged_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r52, cpy_r_r53, cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 275, CPyStatic_generator___globals);
        goto CPyL104;
    }
    cpy_r_old_exc = cpy_r_r56;
    cpy_r_r57 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r59 = CPyList_GetItemShort(cpy_r_r58, -2);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 277, CPyStatic_generator___globals);
        goto CPyL106;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r59, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 277, CPyStatic_generator___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r59);
        goto CPyL106;
    }
    cpy_r_r61 = CPyDef_nonlocalcontrol___ExceptNonlocalControl(cpy_r_r60, cpy_r_old_exc);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 277, CPyStatic_generator___globals);
        goto CPyL106;
    }
    cpy_r_r62 = PyList_Append(cpy_r_r57, cpy_r_r61);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 276, CPyStatic_generator___globals);
        goto CPyL107;
    }
    cpy_r_r64 = CPyStatics[8377]; /* 'builtins.StopIteration' */
    cpy_r_r65 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r66 = ((mypy___nodes___FuncItemObject *)cpy_r_r65)->_line;
    CPyTagged_INCREF(cpy_r_r66);
    cpy_r_r67 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r64, cpy_r_r66);
    CPyTagged_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 279, CPyStatic_generator___globals);
        goto CPyL107;
    }
    cpy_r_stop_iteration = cpy_r_r67;
    cpy_r_r68 = PyList_New(2);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 282, CPyStatic_generator___globals);
        goto CPyL108;
    }
    cpy_r_r69 = (CPyPtr)&((PyListObject *)cpy_r_r68)->ob_item;
    cpy_r_r70 = *(CPyPtr *)cpy_r_r69;
    *(PyObject * *)cpy_r_r70 = cpy_r_generator_exit;
    cpy_r_r71 = cpy_r_r70 + 8;
    *(PyObject * *)cpy_r_r71 = cpy_r_stop_iteration;
    cpy_r_r72 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r73 = ((mypy___nodes___FuncItemObject *)cpy_r_r72)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_ops___TupleSet(cpy_r_r68, cpy_r_r73);
    CPy_DECREF(cpy_r_r68);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 282, CPyStatic_generator___globals);
        goto CPyL109;
    }
    cpy_r_r75 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 282, CPyStatic_generator___globals);
        goto CPyL109;
    }
    cpy_r_exceptions = cpy_r_r75;
    cpy_r_r76 = CPyStatic_generator___globals;
    cpy_r_r77 = CPyStatics[8378]; /* 'exc_matches_op' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 283, CPyStatic_generator___globals);
        goto CPyL110;
    }
    if (likely(PyTuple_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 283, CPyStatic_generator___globals, "tuple", cpy_r_r78);
        goto CPyL110;
    }
    cpy_r_r80 = PyList_New(1);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 283, CPyStatic_generator___globals);
        goto CPyL111;
    }
    cpy_r_r81 = (CPyPtr)&((PyListObject *)cpy_r_r80)->ob_item;
    cpy_r_r82 = *(CPyPtr *)cpy_r_r81;
    *(PyObject * *)cpy_r_r82 = cpy_r_exceptions;
    cpy_r_r83 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r84 = ((mypy___nodes___FuncItemObject *)cpy_r_r83)->_line;
    CPyTagged_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r79, cpy_r_r80, cpy_r_r84);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    CPyTagged_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 283, CPyStatic_generator___globals);
        goto CPyL109;
    }
    cpy_r_matches = cpy_r_r85;
    cpy_r_r86 = CPY_INT_TAG;
    cpy_r_r87 = CPyDef_ops___BasicBlock(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 285, CPyStatic_generator___globals);
        goto CPyL112;
    }
    cpy_r_r88 = cpy_r_r87;
    cpy_r_r89 = CPY_INT_TAG;
    cpy_r_r90 = CPyDef_ops___BasicBlock(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 285, CPyStatic_generator___globals);
        goto CPyL113;
    }
    cpy_r_r91 = cpy_r_r90;
    cpy_r_match_block = cpy_r_r88;
    cpy_r_non_match_block = cpy_r_r91;
    cpy_r_r92 = CPY_INT_TAG;
    cpy_r_r93 = 2;
    cpy_r_r94 = CPyDef_ops___Branch(cpy_r_matches, cpy_r_match_block, cpy_r_non_match_block, 200, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_matches);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 286, CPyStatic_generator___globals);
        goto CPyL114;
    }
    cpy_r_r95 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 286, CPyStatic_generator___globals);
        goto CPyL114;
    } else
        goto CPyL115;
CPyL44: ;
    cpy_r_r96 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_match_block);
    CPy_DECREF(cpy_r_match_block);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 288, CPyStatic_generator___globals);
        goto CPyL116;
    }
    cpy_r_r97 = CPyStatic_generator___globals;
    cpy_r_r98 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r99 = CPyDict_GetItem(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 289, CPyStatic_generator___globals);
        goto CPyL116;
    }
    if (likely(PyTuple_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 289, CPyStatic_generator___globals, "tuple", cpy_r_r99);
        goto CPyL116;
    }
    cpy_r_r101 = CPY_INT_TAG;
    cpy_r_r102 = 2;
    cpy_r_r103 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_old_exc, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_old_exc);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 289, CPyStatic_generator___globals);
        goto CPyL117;
    }
    cpy_r_r104 = PyList_New(1);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 289, CPyStatic_generator___globals);
        goto CPyL118;
    }
    cpy_r_r105 = (CPyPtr)&((PyListObject *)cpy_r_r104)->ob_item;
    cpy_r_r106 = *(CPyPtr *)cpy_r_r105;
    *(PyObject * *)cpy_r_r106 = cpy_r_r103;
    cpy_r_r107 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r108 = ((mypy___nodes___FuncItemObject *)cpy_r_r107)->_line;
    CPyTagged_INCREF(cpy_r_r108);
    cpy_r_r109 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r100, cpy_r_r104, cpy_r_r108);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r104);
    CPyTagged_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 289, CPyStatic_generator___globals);
        goto CPyL119;
    } else
        goto CPyL120;
CPyL50: ;
    cpy_r_r110 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 290, CPyStatic_generator___globals);
        goto CPyL119;
    }
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_ops___Return(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 290, CPyStatic_generator___globals);
        goto CPyL119;
    }
    cpy_r_r113 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 290, CPyStatic_generator___globals);
        goto CPyL119;
    } else
        goto CPyL121;
CPyL53: ;
    cpy_r_r114 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_non_match_block);
    CPy_DECREF(cpy_r_non_match_block);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 292, CPyStatic_generator___globals);
        goto CPyL122;
    }
    cpy_r_r115 = CPyStatic_generator___globals;
    cpy_r_r116 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r117 = CPyDict_GetItem(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals);
        goto CPyL122;
    }
    if (likely(PyTuple_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals, "tuple", cpy_r_r117);
        goto CPyL122;
    }
    cpy_r_r119 = PyList_New(0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals);
        goto CPyL123;
    }
    cpy_r_r120 = CPyStatic_generator___globals;
    cpy_r_r121 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r122 = CPyDict_GetItem(cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals);
        goto CPyL124;
    }
    if (likely(PyLong_Check(cpy_r_r122)))
        cpy_r_r123 = CPyTagged_FromObject(cpy_r_r122);
    else {
        CPy_TypeError("int", cpy_r_r122); cpy_r_r123 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals);
        goto CPyL124;
    }
    cpy_r_r124 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r118, cpy_r_r119, cpy_r_r123);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r119);
    CPyTagged_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 293, CPyStatic_generator___globals);
        goto CPyL122;
    } else
        goto CPyL125;
CPyL60: ;
    cpy_r_r125 = CPY_INT_TAG;
    cpy_r_r126 = CPyDef_ops___Unreachable(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 294, CPyStatic_generator___globals);
        goto CPyL122;
    }
    cpy_r_r127 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 294, CPyStatic_generator___globals);
        goto CPyL122;
    } else
        goto CPyL126;
CPyL62: ;
    cpy_r_r128 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r128);
    cpy_r_r129 = CPyList_PopLast(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 296, CPyStatic_generator___globals);
        goto CPyL122;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r129, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r129); 
        cpy_r_r130 = NULL;
    }
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 296, CPyStatic_generator___globals);
        goto CPyL122;
    } else
        goto CPyL127;
CPyL64: ;
    cpy_r_r131 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_block);
    CPy_DECREF(cpy_r_else_block);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 298, CPyStatic_generator___globals);
        goto CPyL69;
    }
    cpy_r_r132 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r133 = CPyStatics[8381]; /* 'generator ignored GeneratorExit' */
    cpy_r_r134 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r135 = ((mypy___nodes___FuncItemObject *)cpy_r_r134)->_line;
    CPyTagged_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyDef_ops___RaiseStandardError(cpy_r_r132, cpy_r_r133, cpy_r_r135);
    CPyTagged_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 300, CPyStatic_generator___globals);
        goto CPyL69;
    }
    cpy_r_r137 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 299, CPyStatic_generator___globals);
        goto CPyL69;
    } else
        goto CPyL128;
CPyL67: ;
    cpy_r_r138 = CPY_INT_TAG;
    cpy_r_r139 = CPyDef_ops___Unreachable(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 306, CPyStatic_generator___globals);
        goto CPyL69;
    }
    cpy_r_r140 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 306, CPyStatic_generator___globals);
    } else
        goto CPyL129;
CPyL69: ;
    cpy_r_r141 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r142 = CPy_GetExcInfo();
    cpy_r_r143 = cpy_r_r142.f0;
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = cpy_r_r142.f1;
    CPy_INCREF(cpy_r_r144);
    cpy_r_r145 = cpy_r_r142.f2;
    CPy_INCREF(cpy_r_r145);
    CPy_DecRef(cpy_r_r142.f0);
    CPy_DecRef(cpy_r_r142.f1);
    CPy_DecRef(cpy_r_r142.f2);
    PyObject *cpy_r_r146[4] = {cpy_r_r8, cpy_r_r143, cpy_r_r144, cpy_r_r145};
    cpy_r_r147 = (PyObject **)&cpy_r_r146;
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r147, 4, 0);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL130;
    }
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r145);
    cpy_r_r149 = PyObject_IsTrue(cpy_r_r148);
    CPy_DecRef(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL75;
    }
    cpy_r_r151 = cpy_r_r149;
    if (cpy_r_r151) goto CPyL74;
    CPy_Reraise();
    if (!0) {
        goto CPyL75;
    } else
        goto CPyL131;
CPyL73: ;
    CPy_Unreachable();
CPyL74: ;
    CPy_RestoreExcInfo(cpy_r_r141);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    goto CPyL77;
CPyL75: ;
    CPy_RestoreExcInfo(cpy_r_r141);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    cpy_r_r152 = CPy_KeepPropagating();
    if (!cpy_r_r152) {
        goto CPyL78;
    } else
        goto CPyL132;
CPyL76: ;
    CPy_Unreachable();
CPyL77: ;
    tuple_T3OOO __tmp10284 = { NULL, NULL, NULL };
    cpy_r_r153 = __tmp10284;
    cpy_r_r154 = cpy_r_r153;
    goto CPyL79;
CPyL78: ;
    cpy_r_r155 = CPy_CatchError();
    cpy_r_r154 = cpy_r_r155;
CPyL79: ;
    if (!cpy_r_r17) goto CPyL133;
    cpy_r_r156 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r157[4] = {cpy_r_r8, cpy_r_r156, cpy_r_r156, cpy_r_r156};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r158, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 257, CPyStatic_generator___globals);
        goto CPyL134;
    } else
        goto CPyL135;
CPyL81: ;
    CPy_DECREF(cpy_r_r8);
CPyL82: ;
    if (cpy_r_r154.f0 == NULL) goto CPyL89;
    CPy_Reraise();
    if (!0) {
        goto CPyL85;
    } else
        goto CPyL136;
CPyL84: ;
    CPy_Unreachable();
CPyL85: ;
    if (cpy_r_r154.f0 == NULL) goto CPyL87;
    CPy_RestoreExcInfo(cpy_r_r154);
    CPy_XDECREF(cpy_r_r154.f0);
    CPy_XDECREF(cpy_r_r154.f1);
    CPy_XDECREF(cpy_r_r154.f2);
CPyL87: ;
    cpy_r_r160 = CPy_KeepPropagating();
    if (!cpy_r_r160) goto CPyL90;
    CPy_Unreachable();
CPyL89: ;
    return 1;
CPyL90: ;
    cpy_r_r161 = 2;
    return cpy_r_r161;
CPyL91: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL92: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL90;
CPyL93: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL90;
CPyL94: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL90;
CPyL95: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL96: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL69;
CPyL97: ;
    CPy_DecRef(cpy_r_except_block);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL69;
CPyL98: ;
    CPy_DecRef(cpy_r_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    goto CPyL69;
CPyL99: ;
    CPy_DecRef(cpy_r_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_r33);
    goto CPyL69;
CPyL100: ;
    CPy_DecRef(cpy_r_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r35);
    goto CPyL69;
CPyL101: ;
    CPy_DecRef(cpy_r_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL69;
CPyL102: ;
    CPy_DECREF(cpy_r_r44);
    goto CPyL21;
CPyL103: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL23;
CPyL104: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    goto CPyL69;
CPyL105: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_r52);
    goto CPyL69;
CPyL106: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r57);
    goto CPyL69;
CPyL107: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL69;
CPyL108: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_generator_exit);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_stop_iteration);
    goto CPyL69;
CPyL109: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL69;
CPyL110: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_exceptions);
    goto CPyL69;
CPyL111: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_exceptions);
    CPy_DecRef(cpy_r_r79);
    goto CPyL69;
CPyL112: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_matches);
    goto CPyL69;
CPyL113: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_matches);
    CPy_DecRef(cpy_r_r88);
    goto CPyL69;
CPyL114: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_match_block);
    CPy_DecRef(cpy_r_non_match_block);
    goto CPyL69;
CPyL115: ;
    CPy_DECREF(cpy_r_r95);
    goto CPyL44;
CPyL116: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_non_match_block);
    goto CPyL69;
CPyL117: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_non_match_block);
    CPy_DecRef(cpy_r_r100);
    goto CPyL69;
CPyL118: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_non_match_block);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    goto CPyL69;
CPyL119: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_non_match_block);
    goto CPyL69;
CPyL120: ;
    CPy_DECREF(cpy_r_r109);
    goto CPyL50;
CPyL121: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL53;
CPyL122: ;
    CPy_DecRef(cpy_r_else_block);
    goto CPyL69;
CPyL123: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r118);
    goto CPyL69;
CPyL124: ;
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r119);
    goto CPyL69;
CPyL125: ;
    CPy_DECREF(cpy_r_r124);
    goto CPyL60;
CPyL126: ;
    CPy_DECREF(cpy_r_r127);
    goto CPyL62;
CPyL127: ;
    CPy_DECREF(cpy_r_r130);
    goto CPyL64;
CPyL128: ;
    CPy_DECREF(cpy_r_r137);
    goto CPyL67;
CPyL129: ;
    CPy_DECREF(cpy_r_r140);
    goto CPyL77;
CPyL130: ;
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r144);
    CPy_DecRef(cpy_r_r145);
    goto CPyL75;
CPyL131: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r141.f0);
    CPy_DecRef(cpy_r_r141.f1);
    CPy_DecRef(cpy_r_r141.f2);
    goto CPyL73;
CPyL132: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL76;
CPyL133: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL82;
CPyL134: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL85;
CPyL135: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL81;
CPyL136: ;
    CPy_XDECREF(cpy_r_r154.f0);
    CPy_XDECREF(cpy_r_r154.f1);
    CPy_XDECREF(cpy_r_r154.f2);
    goto CPyL84;
}

PyObject *CPyPy_generator___add_close_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:add_close_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    char retval = CPyDef_generator___add_close_to_generator_class(arg_builder, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_close_to_generator_class", 255, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___add_await_to_generator_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    tuple_T3OOO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL33;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[811]; /* '__await__' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[5] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_fn_info};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL36;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 312, CPyStatic_generator___globals);
        goto CPyL12;
    }
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPyDef_ops___Return(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 312, CPyStatic_generator___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 312, CPyStatic_generator___globals);
    } else
        goto CPyL39;
CPyL12: ;
    cpy_r_r22 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r23 = CPy_GetExcInfo();
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r23.f1;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    PyObject *cpy_r_r27[4] = {cpy_r_r8, cpy_r_r24, cpy_r_r25, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r28, 4, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL18;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) goto CPyL17;
    CPy_Reraise();
    if (!0) {
        goto CPyL18;
    } else
        goto CPyL41;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL20;
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r22);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) {
        goto CPyL21;
    } else
        goto CPyL42;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    tuple_T3OOO __tmp10285 = { NULL, NULL, NULL };
    cpy_r_r34 = __tmp10285;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL22;
CPyL21: ;
    cpy_r_r36 = CPy_CatchError();
    cpy_r_r35 = cpy_r_r36;
CPyL22: ;
    if (!cpy_r_r17) goto CPyL43;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r38[4] = {cpy_r_r8, cpy_r_r37, cpy_r_r37, cpy_r_r37};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r39, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 311, CPyStatic_generator___globals);
        goto CPyL44;
    } else
        goto CPyL45;
CPyL24: ;
    CPy_DECREF(cpy_r_r8);
CPyL25: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL32;
    CPy_Reraise();
    if (!0) {
        goto CPyL28;
    } else
        goto CPyL46;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    if (cpy_r_r35.f0 == NULL) goto CPyL30;
    CPy_RestoreExcInfo(cpy_r_r35);
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
CPyL30: ;
    cpy_r_r41 = CPy_KeepPropagating();
    if (!cpy_r_r41) goto CPyL33;
    CPy_Unreachable();
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL34: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL35: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL33;
CPyL37: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL39: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL20;
CPyL40: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL18;
CPyL41: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    goto CPyL16;
CPyL42: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL19;
CPyL43: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL25;
CPyL44: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL45: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL24;
CPyL46: ;
    CPy_XDECREF(cpy_r_r35.f0);
    CPy_XDECREF(cpy_r_r35.f1);
    CPy_XDECREF(cpy_r_r35.f2);
    goto CPyL27;
}

PyObject *CPyPy_generator___add_await_to_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:add_await_to_generator_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    char retval = CPyDef_generator___add_await_to_generator_class(arg_builder, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "add_await_to_generator_class", 309, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator___setup_env_for_generator_class(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_fitem;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_self_target;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_exc_type;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_exc_val;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_exc_tb;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_exc_arg;
    tuple_T3OOO cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r1 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r0)->_fitem;
    CPy_INCREF(cpy_r_r1);
    cpy_r_fitem = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r3 = CPY_GET_ATTR(cpy_r_r2, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 318, CPyStatic_generator___globals);
        goto CPyL41;
    }
CPyL1: ;
    cpy_r_cls = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_ir;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_builder___IRBuilder___add_self_to_env(cpy_r_builder, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 319, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_self_target = cpy_r_r5;
    cpy_r_r6 = CPyStatics[802]; /* 'type' */
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_nodes___Var(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 322, CPyStatic_generator___globals);
        goto CPyL43;
    }
    cpy_r_r9 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL44;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 322, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___add_local(cpy_r_builder, cpy_r_r8, cpy_r_r9, 1);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 322, CPyStatic_generator___globals);
        goto CPyL43;
    }
    cpy_r_exc_type = cpy_r_r11;
    cpy_r_r12 = CPyStatics[2242]; /* 'value' */
    cpy_r_r13 = NULL;
    cpy_r_r14 = CPyDef_nodes___Var(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 323, CPyStatic_generator___globals);
        goto CPyL45;
    }
    cpy_r_r15 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL46;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 323, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r17 = CPyDef_builder___IRBuilder___add_local(cpy_r_builder, cpy_r_r14, cpy_r_r15, 1);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 323, CPyStatic_generator___globals);
        goto CPyL45;
    }
    cpy_r_exc_val = cpy_r_r17;
    cpy_r_r18 = CPyStatics[1767]; /* 'traceback' */
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_nodes___Var(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 324, CPyStatic_generator___globals);
        goto CPyL47;
    }
    cpy_r_r21 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r21 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r22 = 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 324, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r23 = CPyDef_builder___IRBuilder___add_local(cpy_r_builder, cpy_r_r20, cpy_r_r21, 1);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 324, CPyStatic_generator___globals);
        goto CPyL47;
    }
    cpy_r_exc_tb = cpy_r_r23;
    cpy_r_r24 = CPyStatics[2390]; /* 'arg' */
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_nodes___Var(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 326, CPyStatic_generator___globals);
        goto CPyL49;
    }
    cpy_r_r27 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 326, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r29 = CPyDef_builder___IRBuilder___add_local(cpy_r_builder, cpy_r_r26, cpy_r_r27, 1);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 326, CPyStatic_generator___globals);
        goto CPyL49;
    }
    cpy_r_exc_arg = cpy_r_r29;
    cpy_r_r30.f0 = cpy_r_exc_type;
    cpy_r_r30.f1 = cpy_r_exc_val;
    cpy_r_r30.f2 = cpy_r_exc_tb;
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_INCREF(cpy_r_r30.f2);
    CPy_DECREF(cpy_r_exc_type);
    CPy_DECREF(cpy_r_exc_val);
    CPy_DECREF(cpy_r_exc_tb);
    cpy_r_r31 = PyTuple_New(3);
    if (unlikely(cpy_r_r31 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10286 = cpy_r_r30.f0;
    PyTuple_SET_ITEM(cpy_r_r31, 0, __tmp10286);
    PyObject *__tmp10287 = cpy_r_r30.f1;
    PyTuple_SET_ITEM(cpy_r_r31, 1, __tmp10287);
    PyObject *__tmp10288 = cpy_r_r30.f2;
    PyTuple_SET_ITEM(cpy_r_r31, 2, __tmp10288);
    CPy_DECREF(((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_exc_regs);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_exc_regs = cpy_r_r31;
    CPy_DECREF(((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_send_arg_reg);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_send_arg_reg = cpy_r_exc_arg;
    cpy_r_r34 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_self_target, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_self_target);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 331, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r37 = CPY_SET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 2, cpy_r_r36, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* self_reg */
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 331, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r38 = CPY_GET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 1, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* self_reg */
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 332, CPyStatic_generator___globals);
        goto CPyL42;
    }
CPyL25: ;
    cpy_r_r39 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r40 = CPyList_GetItemShort(cpy_r_r39, -2);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 332, CPyStatic_generator___globals);
        goto CPyL51;
    }
    if (likely(PyDict_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 332, CPyStatic_generator___globals, "dict", cpy_r_r40);
        goto CPyL51;
    }
    cpy_r_r42 = CPyDef_env_class___load_outer_env(cpy_r_builder, cpy_r_r38, cpy_r_r41);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 332, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r43 = CPY_SET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 4, cpy_r_r42, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* curr_env_reg */
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 332, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r44 = CPyStatics[7708]; /* '__mypyc_next_label__' */
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_nodes___Var(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 338, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r47 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r47 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 338, CPyStatic_generator___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r49 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_builder, cpy_r_r46, cpy_r_r47, cpy_r_cls, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 337, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r50 = CPY_SET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 11, cpy_r_r49, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_target */
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 337, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r51 = CPyDef_env_class___add_args_to_env(cpy_r_builder, 0, cpy_r_cls, 0);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 343, CPyStatic_generator___globals);
        goto CPyL42;
    }
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 10, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_target */
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 346, CPyStatic_generator___globals);
        goto CPyL42;
    }
CPyL37: ;
    cpy_r_r53 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_fitem);
    cpy_r_r54 = 2;
    cpy_r_r55 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r52);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 346, CPyStatic_generator___globals);
        goto CPyL53;
    }
    cpy_r_r56 = CPY_SET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 9, cpy_r_r55, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_reg */
    CPy_DECREF(cpy_r_cls);
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 346, CPyStatic_generator___globals);
        goto CPyL40;
    }
    return 1;
CPyL40: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL41: ;
    CPy_DecRef(cpy_r_fitem);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    goto CPyL40;
CPyL43: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_r8);
    goto CPyL4;
CPyL45: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_r14);
    goto CPyL9;
CPyL47: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_r20);
    goto CPyL14;
CPyL49: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    goto CPyL40;
CPyL50: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_self_target);
    CPy_DecRef(cpy_r_exc_type);
    CPy_DecRef(cpy_r_exc_val);
    CPy_DecRef(cpy_r_exc_tb);
    CPy_DecRef(cpy_r_r26);
    goto CPyL19;
CPyL51: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r38);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_r46);
    goto CPyL31;
CPyL53: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL40;
}

PyObject *CPyPy_generator___setup_env_for_generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:setup_env_for_generator_class", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_generator___setup_env_for_generator_class(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/generator.py", "setup_env_for_generator_class", 315, CPyStatic_generator___globals);
    return NULL;
}

char CPyDef_generator_____top_level__(void) {
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
    char cpy_r_r53;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", -1, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_generator___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 11, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10150]; /* ('ARG_OPT', 'Var') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_generator___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 13, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[10151]; /* ('ENV_ATTR_NAME', 'NEXT_LABEL_ATTR_NAME', 'SELF_NAME') */
    cpy_r_r14 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r15 = CPyStatic_generator___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 14, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___common = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r18 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r19 = CPyStatic_generator___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 15, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10060]; /* ('FuncDecl', 'FuncIR', 'FuncSignature', 'RuntimeArg') */
    cpy_r_r22 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r23 = CPyStatic_generator___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 16, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10152]; /* ('NO_TRACEBACK_LINE_NO', 'BasicBlock', 'Branch', 'Call',
                                      'Goto', 'Integer', 'MethodCall', 'RaiseStandardError',
                                      'Register', 'Return', 'SetAttr', 'TupleSet',
                                      'Unreachable', 'Value') */
    cpy_r_r26 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r27 = CPyStatic_generator___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 17, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10153]; /* ('RInstance', 'int_rprimitive', 'object_rprimitive') */
    cpy_r_r30 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r31 = CPyStatic_generator___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 33, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10154]; /* ('IRBuilder', 'gen_arg_defaults') */
    cpy_r_r34 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r35 = CPyStatic_generator___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 34, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10155]; /* ('FuncInfo', 'GeneratorClass') */
    cpy_r_r38 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r39 = CPyStatic_generator___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 35, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___context = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___irbuild___context);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10156]; /* ('add_args_to_env', 'finalize_env_class',
                                      'load_env_registers', 'load_outer_env') */
    cpy_r_r42 = CPyStatics[8361]; /* 'mypyc.irbuild.env_class' */
    cpy_r_r43 = CPyStatic_generator___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 36, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___env_class = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___irbuild___env_class);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10157]; /* ('ExceptNonlocalControl',) */
    cpy_r_r46 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r47 = CPyStatic_generator___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 42, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___irbuild___nonlocalcontrol = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___irbuild___nonlocalcontrol);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10158]; /* ('error_catch_op', 'exc_matches_op',
                                      'raise_exception_with_tb_op', 'reraise_exception_op',
                                      'restore_exc_info_op') */
    cpy_r_r50 = CPyStatics[8289]; /* 'mypyc.primitives.exc_ops' */
    cpy_r_r51 = CPyStatic_generator___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/generator.py", "<module>", 43, CPyStatic_generator___globals);
        goto CPyL16;
    }
    CPyModule_mypyc___primitives___exc_ops = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___primitives___exc_ops);
    CPy_DECREF(cpy_r_r52);
    return 1;
CPyL16: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
}
