#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef config_parser___ConfigTOMLValueError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef config_parser___ConfigTOMLValueError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef config_parser___ConfigTOMLValueError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser___ConfigTOMLValueError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ConfigTOMLValueError",
    .tp_getset = config_parser___ConfigTOMLValueError_getseters,
    .tp_methods = config_parser___ConfigTOMLValueError_methods,
    .tp_members = config_parser___ConfigTOMLValueError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_config_parser___ConfigTOMLValueError_template = &CPyType_config_parser___ConfigTOMLValueError_template_;


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__0_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__0_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__0_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__0_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__0_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__0_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__0_obj(void);

static PyObject *
config_parser_____mypyc_lambda__0_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__0_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__0_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__0_obj_traverse(mypy___config_parser_____mypyc_lambda__0_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__0_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__0_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__0_obj_clear(mypy___config_parser_____mypyc_lambda__0_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__0_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__0_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__0_obj_dealloc(mypy___config_parser_____mypyc_lambda__0_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__0_obj_dealloc)
    config_parser_____mypyc_lambda__0_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__0_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__0_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__0_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__0_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__0_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__0_obj_vtable, config_parser_____mypyc_lambda__0_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__0_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__0_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__0_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__0_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__0_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_obj",
    .tp_new = config_parser_____mypyc_lambda__0_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__0_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__0_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__0_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__0_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__0_obj,
    .tp_members = config_parser_____mypyc_lambda__0_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__0_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__0_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__0_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__0_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__0_obj_template = &CPyType_config_parser_____mypyc_lambda__0_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__0_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__0_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__0_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__0_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__0_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__0_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__0_obj_setup(CPyType_config_parser_____mypyc_lambda__0_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__1_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__1_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__1_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__1_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__1_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__1_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__1_obj(void);

static PyObject *
config_parser_____mypyc_lambda__1_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__1_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__1_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__1_obj_traverse(mypy___config_parser_____mypyc_lambda__1_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__1_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__1_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__1_obj_clear(mypy___config_parser_____mypyc_lambda__1_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__1_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__1_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__1_obj_dealloc(mypy___config_parser_____mypyc_lambda__1_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__1_obj_dealloc)
    config_parser_____mypyc_lambda__1_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__1_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__1_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__1_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__1_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__1_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__1_obj_vtable, config_parser_____mypyc_lambda__1_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__1_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__1_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__1_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__1_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__1_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_obj",
    .tp_new = config_parser_____mypyc_lambda__1_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__1_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__1_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__1_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__1_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__1_obj,
    .tp_members = config_parser_____mypyc_lambda__1_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__1_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__1_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__1_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__1_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__1_obj_template = &CPyType_config_parser_____mypyc_lambda__1_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__1_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__1_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__1_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__1_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__1_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__1_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__1_obj_setup(CPyType_config_parser_____mypyc_lambda__1_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__2_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__2_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__2_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__2_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__2_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__2_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__2_obj(void);

static PyObject *
config_parser_____mypyc_lambda__2_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__2_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__2_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__2_obj_traverse(mypy___config_parser_____mypyc_lambda__2_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__2_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__2_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__2_obj_clear(mypy___config_parser_____mypyc_lambda__2_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__2_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__2_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__2_obj_dealloc(mypy___config_parser_____mypyc_lambda__2_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__2_obj_dealloc)
    config_parser_____mypyc_lambda__2_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__2_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__2_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__2_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__2_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__2_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__2_obj_vtable, config_parser_____mypyc_lambda__2_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__2_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__2_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__2_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__2_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__2_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__2_obj",
    .tp_new = config_parser_____mypyc_lambda__2_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__2_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__2_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__2_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__2_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__2_obj,
    .tp_members = config_parser_____mypyc_lambda__2_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__2_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__2_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__2_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__2_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__2_obj_template = &CPyType_config_parser_____mypyc_lambda__2_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__2_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__2_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__2_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__2_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__2_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__2_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__2_obj_setup(CPyType_config_parser_____mypyc_lambda__2_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__3_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__3_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__3_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__3_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__3_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__3_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__3_obj(void);

static PyObject *
config_parser_____mypyc_lambda__3_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__3_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__3_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__3_obj_traverse(mypy___config_parser_____mypyc_lambda__3_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__3_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__3_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__3_obj_clear(mypy___config_parser_____mypyc_lambda__3_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__3_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__3_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__3_obj_dealloc(mypy___config_parser_____mypyc_lambda__3_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__3_obj_dealloc)
    config_parser_____mypyc_lambda__3_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__3_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__3_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__3_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__3_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__3_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__3_obj_vtable, config_parser_____mypyc_lambda__3_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__3_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__3_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__3_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__3_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__3_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__3_obj",
    .tp_new = config_parser_____mypyc_lambda__3_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__3_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__3_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__3_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__3_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__3_obj,
    .tp_members = config_parser_____mypyc_lambda__3_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__3_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__3_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__3_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__3_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__3_obj_template = &CPyType_config_parser_____mypyc_lambda__3_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__3_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__3_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__3_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__3_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__3_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__3_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__3_obj_setup(CPyType_config_parser_____mypyc_lambda__3_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__4_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__4_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__4_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__4_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__4_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__4_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__4_obj(void);

static PyObject *
config_parser_____mypyc_lambda__4_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__4_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__4_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__4_obj_traverse(mypy___config_parser_____mypyc_lambda__4_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__4_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__4_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__4_obj_clear(mypy___config_parser_____mypyc_lambda__4_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__4_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__4_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__4_obj_dealloc(mypy___config_parser_____mypyc_lambda__4_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__4_obj_dealloc)
    config_parser_____mypyc_lambda__4_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__4_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__4_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__4_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__4_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__4_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__4_obj_vtable, config_parser_____mypyc_lambda__4_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__4_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__4_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__4_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__4_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__4_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__4_obj",
    .tp_new = config_parser_____mypyc_lambda__4_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__4_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__4_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__4_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__4_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__4_obj,
    .tp_members = config_parser_____mypyc_lambda__4_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__4_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__4_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__4_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__4_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__4_obj_template = &CPyType_config_parser_____mypyc_lambda__4_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__4_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__4_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__4_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__4_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__4_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__4_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__4_obj_setup(CPyType_config_parser_____mypyc_lambda__4_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__5_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__5_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__5_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__5_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__5_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__5_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__5_obj(void);

static PyObject *
config_parser_____mypyc_lambda__5_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__5_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__5_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__5_obj_traverse(mypy___config_parser_____mypyc_lambda__5_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__5_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__5_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__5_obj_clear(mypy___config_parser_____mypyc_lambda__5_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__5_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__5_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__5_obj_dealloc(mypy___config_parser_____mypyc_lambda__5_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__5_obj_dealloc)
    config_parser_____mypyc_lambda__5_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__5_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__5_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__5_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__5_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__5_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__5_obj_vtable, config_parser_____mypyc_lambda__5_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__5_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__5_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__5_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__5_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__5_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__5_obj",
    .tp_new = config_parser_____mypyc_lambda__5_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__5_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__5_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__5_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__5_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__5_obj,
    .tp_members = config_parser_____mypyc_lambda__5_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__5_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__5_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__5_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__5_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__5_obj_template = &CPyType_config_parser_____mypyc_lambda__5_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__5_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__5_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__5_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__5_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__5_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__5_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__5_obj_setup(CPyType_config_parser_____mypyc_lambda__5_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__6_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__6_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__6_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__6_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__6_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__6_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__6_obj(void);

static PyObject *
config_parser_____mypyc_lambda__6_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__6_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__6_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__6_obj_traverse(mypy___config_parser_____mypyc_lambda__6_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__6_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__6_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__6_obj_clear(mypy___config_parser_____mypyc_lambda__6_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__6_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__6_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__6_obj_dealloc(mypy___config_parser_____mypyc_lambda__6_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__6_obj_dealloc)
    config_parser_____mypyc_lambda__6_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__6_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__6_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__6_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__6_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__6_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__6_obj_vtable, config_parser_____mypyc_lambda__6_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__6_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__6_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__6_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__6_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__6_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__6_obj",
    .tp_new = config_parser_____mypyc_lambda__6_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__6_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__6_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__6_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__6_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__6_obj,
    .tp_members = config_parser_____mypyc_lambda__6_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__6_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__6_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__6_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__6_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__6_obj_template = &CPyType_config_parser_____mypyc_lambda__6_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__6_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__6_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__6_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__6_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__6_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__6_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__6_obj_setup(CPyType_config_parser_____mypyc_lambda__6_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__7_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__7_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__7_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__7_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__7_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__7_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__7_obj(void);

static PyObject *
config_parser_____mypyc_lambda__7_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__7_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__7_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__7_obj_traverse(mypy___config_parser_____mypyc_lambda__7_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__7_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__7_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__7_obj_clear(mypy___config_parser_____mypyc_lambda__7_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__7_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__7_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__7_obj_dealloc(mypy___config_parser_____mypyc_lambda__7_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__7_obj_dealloc)
    config_parser_____mypyc_lambda__7_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__7_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__7_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__7_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__7_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__7_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__7_obj_vtable, config_parser_____mypyc_lambda__7_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__7_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__7_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__7_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__7_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__7_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__7_obj",
    .tp_new = config_parser_____mypyc_lambda__7_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__7_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__7_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__7_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__7_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__7_obj,
    .tp_members = config_parser_____mypyc_lambda__7_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__7_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__7_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__7_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__7_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__7_obj_template = &CPyType_config_parser_____mypyc_lambda__7_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__7_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__7_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__7_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__7_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__7_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__7_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__7_obj_setup(CPyType_config_parser_____mypyc_lambda__7_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__8_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__8_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__8_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__8_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__8_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__8_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__8_obj(void);

static PyObject *
config_parser_____mypyc_lambda__8_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__8_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__8_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__8_obj_traverse(mypy___config_parser_____mypyc_lambda__8_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__8_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__8_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__8_obj_clear(mypy___config_parser_____mypyc_lambda__8_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__8_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__8_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__8_obj_dealloc(mypy___config_parser_____mypyc_lambda__8_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__8_obj_dealloc)
    config_parser_____mypyc_lambda__8_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__8_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__8_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__8_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__8_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__8_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__8_obj_vtable, config_parser_____mypyc_lambda__8_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__8_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__8_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__8_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__8_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__8_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__8_obj",
    .tp_new = config_parser_____mypyc_lambda__8_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__8_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__8_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__8_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__8_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__8_obj,
    .tp_members = config_parser_____mypyc_lambda__8_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__8_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__8_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__8_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__8_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__8_obj_template = &CPyType_config_parser_____mypyc_lambda__8_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__8_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__8_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__8_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__8_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__8_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__8_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__8_obj_setup(CPyType_config_parser_____mypyc_lambda__8_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__9_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__9_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__9_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__9_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__9_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__9_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__9_obj(void);

static PyObject *
config_parser_____mypyc_lambda__9_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__9_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__9_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__9_obj_traverse(mypy___config_parser_____mypyc_lambda__9_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__9_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__9_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__9_obj_clear(mypy___config_parser_____mypyc_lambda__9_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__9_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__9_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__9_obj_dealloc(mypy___config_parser_____mypyc_lambda__9_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__9_obj_dealloc)
    config_parser_____mypyc_lambda__9_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__9_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__9_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__9_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__9_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__9_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__9_obj_vtable, config_parser_____mypyc_lambda__9_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__9_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__9_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__9_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__9_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__9_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__9_obj",
    .tp_new = config_parser_____mypyc_lambda__9_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__9_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__9_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__9_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__9_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__9_obj,
    .tp_members = config_parser_____mypyc_lambda__9_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__9_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__9_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__9_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__9_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__9_obj_template = &CPyType_config_parser_____mypyc_lambda__9_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__9_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__9_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__9_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__9_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__9_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__9_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__9_obj_setup(CPyType_config_parser_____mypyc_lambda__9_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__10_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__10_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__10_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__10_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__10_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__10_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__10_obj(void);

static PyObject *
config_parser_____mypyc_lambda__10_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__10_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__10_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__10_obj_traverse(mypy___config_parser_____mypyc_lambda__10_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__10_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__10_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__10_obj_clear(mypy___config_parser_____mypyc_lambda__10_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__10_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__10_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__10_obj_dealloc(mypy___config_parser_____mypyc_lambda__10_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__10_obj_dealloc)
    config_parser_____mypyc_lambda__10_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__10_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__10_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__10_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__10_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__10_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__10_obj_vtable, config_parser_____mypyc_lambda__10_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__10_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__10_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__10_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__10_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__10_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__10_obj",
    .tp_new = config_parser_____mypyc_lambda__10_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__10_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__10_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__10_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__10_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__10_obj,
    .tp_members = config_parser_____mypyc_lambda__10_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__10_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__10_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__10_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__10_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__10_obj_template = &CPyType_config_parser_____mypyc_lambda__10_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__10_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__10_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__10_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__10_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__10_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__10_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__10_obj_setup(CPyType_config_parser_____mypyc_lambda__10_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__11_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__11_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__11_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__11_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__11_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__11_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__11_obj(void);

static PyObject *
config_parser_____mypyc_lambda__11_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__11_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__11_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__11_obj_traverse(mypy___config_parser_____mypyc_lambda__11_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__11_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__11_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__11_obj_clear(mypy___config_parser_____mypyc_lambda__11_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__11_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__11_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__11_obj_dealloc(mypy___config_parser_____mypyc_lambda__11_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__11_obj_dealloc)
    config_parser_____mypyc_lambda__11_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__11_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__11_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__11_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__11_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__11_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__11_obj_vtable, config_parser_____mypyc_lambda__11_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__11_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__11_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__11_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__11_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__11_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__11_obj",
    .tp_new = config_parser_____mypyc_lambda__11_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__11_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__11_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__11_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__11_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__11_obj,
    .tp_members = config_parser_____mypyc_lambda__11_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__11_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__11_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__11_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__11_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__11_obj_template = &CPyType_config_parser_____mypyc_lambda__11_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__11_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__11_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__11_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__11_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__11_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__11_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__11_obj_setup(CPyType_config_parser_____mypyc_lambda__11_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__12_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__12_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__12_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__12_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__12_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__12_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__12_obj(void);

static PyObject *
config_parser_____mypyc_lambda__12_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__12_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__12_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__12_obj_traverse(mypy___config_parser_____mypyc_lambda__12_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__12_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__12_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__12_obj_clear(mypy___config_parser_____mypyc_lambda__12_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__12_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__12_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__12_obj_dealloc(mypy___config_parser_____mypyc_lambda__12_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__12_obj_dealloc)
    config_parser_____mypyc_lambda__12_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__12_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__12_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__12_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__12_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__12_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__12_obj_vtable, config_parser_____mypyc_lambda__12_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__12_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__12_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__12_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__12_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__12_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__12_obj",
    .tp_new = config_parser_____mypyc_lambda__12_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__12_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__12_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__12_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__12_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__12_obj,
    .tp_members = config_parser_____mypyc_lambda__12_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__12_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__12_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__12_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__12_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__12_obj_template = &CPyType_config_parser_____mypyc_lambda__12_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__12_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__12_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__12_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__12_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__12_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__12_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__12_obj_setup(CPyType_config_parser_____mypyc_lambda__12_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser_____mypyc_lambda__13_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser_____mypyc_lambda__13_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser_____mypyc_lambda__13_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__13_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser_____mypyc_lambda__13_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser_____mypyc_lambda__13_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser_____mypyc_lambda__13_obj(void);

static PyObject *
config_parser_____mypyc_lambda__13_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser_____mypyc_lambda__13_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser_____mypyc_lambda__13_obj_setup(type);
}

static int
config_parser_____mypyc_lambda__13_obj_traverse(mypy___config_parser_____mypyc_lambda__13_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__13_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__13_objObject))));
    return 0;
}

static int
config_parser_____mypyc_lambda__13_obj_clear(mypy___config_parser_____mypyc_lambda__13_objObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser_____mypyc_lambda__13_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser_____mypyc_lambda__13_objObject))));
    return 0;
}

static void
config_parser_____mypyc_lambda__13_obj_dealloc(mypy___config_parser_____mypyc_lambda__13_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser_____mypyc_lambda__13_obj_dealloc)
    config_parser_____mypyc_lambda__13_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser_____mypyc_lambda__13_obj_vtable[2];
static bool
CPyDef_config_parser_____mypyc_lambda__13_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser_____mypyc_lambda__13_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__13_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser_____mypyc_lambda__13_obj_____get__,
    };
    memcpy(config_parser_____mypyc_lambda__13_obj_vtable, config_parser_____mypyc_lambda__13_obj_vtable_scratch, sizeof(config_parser_____mypyc_lambda__13_obj_vtable));
    return 1;
}

static PyMethodDef config_parser_____mypyc_lambda__13_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__13_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser_____mypyc_lambda__13_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser_____mypyc_lambda__13_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__13_obj",
    .tp_new = config_parser_____mypyc_lambda__13_obj_new,
    .tp_dealloc = (destructor)config_parser_____mypyc_lambda__13_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser_____mypyc_lambda__13_obj_traverse,
    .tp_clear = (inquiry)config_parser_____mypyc_lambda__13_obj_clear,
    .tp_methods = config_parser_____mypyc_lambda__13_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser_____mypyc_lambda__13_obj,
    .tp_members = config_parser_____mypyc_lambda__13_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser_____mypyc_lambda__13_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser_____mypyc_lambda__13_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser_____mypyc_lambda__13_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser_____mypyc_lambda__13_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser_____mypyc_lambda__13_obj_template = &CPyType_config_parser_____mypyc_lambda__13_obj_template_;

static PyObject *
config_parser_____mypyc_lambda__13_obj_setup(PyTypeObject *type)
{
    mypy___config_parser_____mypyc_lambda__13_objObject *self;
    self = (mypy___config_parser_____mypyc_lambda__13_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser_____mypyc_lambda__13_obj_vtable;
    self->vectorcall = CPyPy_config_parser_____mypyc_lambda__13_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__13_obj(void)
{
    PyObject *self = config_parser_____mypyc_lambda__13_obj_setup(CPyType_config_parser_____mypyc_lambda__13_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *config_parser___parse_mypy_comments_env_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser___parse_mypy_comments_env(void);

static PyObject *
config_parser___parse_mypy_comments_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser___parse_mypy_comments_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser___parse_mypy_comments_env_setup(type);
}

static int
config_parser___parse_mypy_comments_env_traverse(mypy___config_parser___parse_mypy_comments_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_set_strict_flags);
    Py_VISIT(self->_args);
    Py_VISIT(self->_template);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_sections);
    if (CPyTagged_CheckLong(self->_lineno)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_lineno));
    }
    Py_VISIT(self->_line);
    Py_VISIT(self->_parser);
    Py_VISIT(self->_options);
    Py_VISIT(self->_parse_errors);
    Py_VISIT(self->_x);
    Py_VISIT(self->_stderr);
    return 0;
}

static int
config_parser___parse_mypy_comments_env_clear(mypy___config_parser___parse_mypy_comments_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_set_strict_flags);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_template);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_sections);
    if (CPyTagged_CheckLong(self->_lineno)) {
        CPyTagged __tmp = self->_lineno;
        self->_lineno = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_line);
    Py_CLEAR(self->_parser);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_parse_errors);
    Py_CLEAR(self->_x);
    Py_CLEAR(self->_stderr);
    return 0;
}

static void
config_parser___parse_mypy_comments_env_dealloc(mypy___config_parser___parse_mypy_comments_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser___parse_mypy_comments_env_dealloc)
    config_parser___parse_mypy_comments_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser___parse_mypy_comments_env_vtable[1];
static bool
CPyDef_config_parser___parse_mypy_comments_env_trait_vtable_setup(void)
{
    CPyVTableItem config_parser___parse_mypy_comments_env_vtable_scratch[] = {
        NULL
    };
    memcpy(config_parser___parse_mypy_comments_env_vtable, config_parser___parse_mypy_comments_env_vtable_scratch, sizeof(config_parser___parse_mypy_comments_env_vtable));
    return 1;
}

static PyMethodDef config_parser___parse_mypy_comments_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser___parse_mypy_comments_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "parse_mypy_comments_env",
    .tp_new = config_parser___parse_mypy_comments_env_new,
    .tp_dealloc = (destructor)config_parser___parse_mypy_comments_env_dealloc,
    .tp_traverse = (traverseproc)config_parser___parse_mypy_comments_env_traverse,
    .tp_clear = (inquiry)config_parser___parse_mypy_comments_env_clear,
    .tp_methods = config_parser___parse_mypy_comments_env_methods,
    .tp_basicsize = sizeof(mypy___config_parser___parse_mypy_comments_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_config_parser___parse_mypy_comments_env_template = &CPyType_config_parser___parse_mypy_comments_env_template_;

static PyObject *
config_parser___parse_mypy_comments_env_setup(PyTypeObject *type)
{
    mypy___config_parser___parse_mypy_comments_envObject *self;
    self = (mypy___config_parser___parse_mypy_comments_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser___parse_mypy_comments_env_vtable;
    self->_strict_found = 2;
    self->_lineno = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser___parse_mypy_comments_env(void)
{
    PyObject *self = config_parser___parse_mypy_comments_env_setup(CPyType_config_parser___parse_mypy_comments_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__config_parser___set_strict_flags_parse_mypy_comments_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__(self, instance, owner);
}
PyMemberDef config_parser___set_strict_flags_parse_mypy_comments_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *config_parser___set_strict_flags_parse_mypy_comments_obj_setup(PyTypeObject *type);
PyObject *CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj(void);

static PyObject *
config_parser___set_strict_flags_parse_mypy_comments_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return config_parser___set_strict_flags_parse_mypy_comments_obj_setup(type);
}

static int
config_parser___set_strict_flags_parse_mypy_comments_obj_traverse(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject))));
    return 0;
}

static int
config_parser___set_strict_flags_parse_mypy_comments_obj_clear(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject))));
    return 0;
}

static void
config_parser___set_strict_flags_parse_mypy_comments_obj_dealloc(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, config_parser___set_strict_flags_parse_mypy_comments_obj_dealloc)
    config_parser___set_strict_flags_parse_mypy_comments_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem config_parser___set_strict_flags_parse_mypy_comments_obj_vtable[2];
static bool
CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_trait_vtable_setup(void)
{
    CPyVTableItem config_parser___set_strict_flags_parse_mypy_comments_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__,
        (CPyVTableItem)CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__,
    };
    memcpy(config_parser___set_strict_flags_parse_mypy_comments_obj_vtable, config_parser___set_strict_flags_parse_mypy_comments_obj_vtable_scratch, sizeof(config_parser___set_strict_flags_parse_mypy_comments_obj_vtable));
    return 1;
}

static PyMethodDef config_parser___set_strict_flags_parse_mypy_comments_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "set_strict_flags_parse_mypy_comments_obj",
    .tp_new = config_parser___set_strict_flags_parse_mypy_comments_obj_new,
    .tp_dealloc = (destructor)config_parser___set_strict_flags_parse_mypy_comments_obj_dealloc,
    .tp_traverse = (traverseproc)config_parser___set_strict_flags_parse_mypy_comments_obj_traverse,
    .tp_clear = (inquiry)config_parser___set_strict_flags_parse_mypy_comments_obj_clear,
    .tp_methods = config_parser___set_strict_flags_parse_mypy_comments_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__config_parser___set_strict_flags_parse_mypy_comments_obj,
    .tp_members = config_parser___set_strict_flags_parse_mypy_comments_obj_members,
    .tp_basicsize = sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject),
    .tp_weaklistoffset = sizeof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj_template = &CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj_template_;

static PyObject *
config_parser___set_strict_flags_parse_mypy_comments_obj_setup(PyTypeObject *type)
{
    mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *self;
    self = (mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = config_parser___set_strict_flags_parse_mypy_comments_obj_vtable;
    self->vectorcall = CPyPy_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj(void)
{
    PyObject *self = config_parser___set_strict_flags_parse_mypy_comments_obj_setup(CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef config_parsermodule_methods[] = {
    {"parse_version", (PyCFunction)CPyPy_config_parser___parse_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_split", (PyCFunction)CPyPy_config_parser___try_split, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"validate_codes", (PyCFunction)CPyPy_config_parser___validate_codes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"expand_path", (PyCFunction)CPyPy_config_parser___expand_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"str_or_array_as_list", (PyCFunction)CPyPy_config_parser___str_or_array_as_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_and_match_files_list", (PyCFunction)CPyPy_config_parser___split_and_match_files_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_and_match_files", (PyCFunction)CPyPy_config_parser___split_and_match_files, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_follow_imports", (PyCFunction)CPyPy_config_parser___check_follow_imports, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_commas", (PyCFunction)CPyPy_config_parser___split_commas, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_config_file", (PyCFunction)CPyPy_config_parser___parse_config_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_prefix", (PyCFunction)CPyPy_config_parser___get_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_toml", (PyCFunction)CPyPy_config_parser___is_toml, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"destructure_overrides", (PyCFunction)CPyPy_config_parser___destructure_overrides, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_section", (PyCFunction)CPyPy_config_parser___parse_section, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"convert_to_boolean", (PyCFunction)CPyPy_config_parser___convert_to_boolean, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_directive", (PyCFunction)CPyPy_config_parser___split_directive, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"mypy_comments_to_config_map", (PyCFunction)CPyPy_config_parser___mypy_comments_to_config_map, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_mypy_comments", (PyCFunction)CPyPy_config_parser___parse_mypy_comments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_config_module_names", (PyCFunction)CPyPy_config_parser___get_config_module_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef config_parsermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.config_parser",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    config_parsermodule_methods
};

PyObject *CPyInit_mypy___config_parser(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___config_parser_internal) {
        Py_INCREF(CPyModule_mypy___config_parser_internal);
        return CPyModule_mypy___config_parser_internal;
    }
    CPyModule_mypy___config_parser_internal = PyModule_Create(&config_parsermodule);
    if (unlikely(CPyModule_mypy___config_parser_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___config_parser_internal, "__name__");
    CPyStatic_config_parser___globals = PyModule_GetDict(CPyModule_mypy___config_parser_internal);
    if (unlikely(CPyStatic_config_parser___globals == NULL))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__0_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__0_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__0_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__1_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__1_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__1_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__2_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__2_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__2_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__3_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__3_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__3_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__4_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__4_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__4_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__5_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__5_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__5_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__6_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__6_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__6_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__7_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__7_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__7_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__8_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__8_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__8_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__9_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__9_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__9_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__10_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__10_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__10_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__11_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__11_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__11_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__12_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__12_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__12_obj))
        goto fail;
    CPyType_config_parser_____mypyc_lambda__13_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser_____mypyc_lambda__13_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser_____mypyc_lambda__13_obj))
        goto fail;
    CPyType_config_parser___parse_mypy_comments_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser___parse_mypy_comments_env_template, NULL, modname);
    if (unlikely(!CPyType_config_parser___parse_mypy_comments_env))
        goto fail;
    CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj_template, NULL, modname);
    if (unlikely(!CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_config_parser_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___config_parser_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___config_parser_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_config_parser___ini_config_types);
    CPyStatic_config_parser___ini_config_types = NULL;
    CPy_XDECREF(CPyStatic_config_parser___toml_config_types);
    CPyStatic_config_parser___toml_config_types = NULL;
    CPy_XDECREF(CPyStatic_config_parser___mypy___config_parser___parse_section___stderr);
    CPyStatic_config_parser___mypy___config_parser___parse_section___stderr = NULL;
    Py_CLEAR(CPyType_config_parser___ConfigTOMLValueError);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__0_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__1_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__2_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__3_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__4_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__5_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__6_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__7_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__8_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__9_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__10_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__11_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__12_obj);
    Py_CLEAR(CPyType_config_parser_____mypyc_lambda__13_obj);
    Py_CLEAR(CPyType_config_parser___parse_mypy_comments_env);
    Py_CLEAR(CPyType_config_parser___set_strict_flags_parse_mypy_comments_obj);
    return NULL;
}

tuple_T2II CPyDef_config_parser___parse_version(PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_major;
    CPyTagged cpy_r_minor;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    tuple_T2II cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    int64_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2II cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
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
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T2II cpy_r_r99;
    tuple_T2II cpy_r_r100;
    cpy_r_r0 = CPyStatics[1481]; /* '\\A(\\d)\\.(\\d+)\\Z' */
    cpy_r_r1 = PyObject_Str(cpy_r_v);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 44, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r2 = CPyModule_re;
    cpy_r_r3 = CPyStatics[210]; /* 'match' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 44, CPyStatic_config_parser___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r5[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 44, CPyStatic_config_parser___globals);
        goto CPyL57;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_m = cpy_r_r7;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_m != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL58;
    CPy_INCREF(cpy_r_m);
    cpy_r_r10 = cpy_r_m;
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 44, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
    cpy_r_r13 = cpy_r_r11;
    if (cpy_r_r13) {
        goto CPyL13;
    } else
        goto CPyL58;
CPyL7: ;
    cpy_r_r14 = CPyStatics[1482]; /* "Invalid python version '" */
    cpy_r_r15 = PyObject_Str(cpy_r_v);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 46, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r16 = CPyStatics[1483]; /* "' (expected format: 'x.y')" */
    cpy_r_r17 = CPyStr_Build(3, cpy_r_r14, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 46, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r18 = CPyModule_argparse;
    cpy_r_r19 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 46, CPyStatic_config_parser___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r17};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 46, CPyStatic_config_parser___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_r17);
    CPy_Raise(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 46, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL13: ;
    CPy_INCREF(cpy_r_m);
    cpy_r_r24 = cpy_r_m;
    cpy_r_r25 = CPyStatics[1393]; /* 'group' */
    cpy_r_r26 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r27[2] = {cpy_r_r24, cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r25, cpy_r_r28, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_r24);
    cpy_r_r30 = cpy_r_r29;
    cpy_r_r31 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(PyLong_Check(cpy_r_r34)))
        cpy_r_r35 = CPyTagged_FromObject(cpy_r_r34);
    else {
        CPy_TypeError("int", cpy_r_r34); cpy_r_r35 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
    cpy_r_r36 = cpy_r_r35;
    cpy_r_r37 = cpy_r_m;
    cpy_r_r38 = CPyStatics[1393]; /* 'group' */
    cpy_r_r39 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r40[2] = {cpy_r_r37, cpy_r_r39};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_VectorcallMethod(cpy_r_r38, cpy_r_r41, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL63;
    }
    CPy_DECREF(cpy_r_r37);
    cpy_r_r43 = cpy_r_r42;
    cpy_r_r44 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r45[1] = {cpy_r_r43};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 1, 0);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r43);
    if (likely(PyLong_Check(cpy_r_r47)))
        cpy_r_r48 = CPyTagged_FromObject(cpy_r_r47);
    else {
        CPy_TypeError("int", cpy_r_r47); cpy_r_r48 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 47, CPyStatic_config_parser___globals);
        goto CPyL65;
    }
    cpy_r_r49 = cpy_r_r48;
    cpy_r_major = cpy_r_r36;
    cpy_r_minor = cpy_r_r49;
    cpy_r_r50 = cpy_r_major == 4;
    if (!cpy_r_r50) goto CPyL23;
    cpy_r_r51 = cpy_r_minor == 14;
    if (cpy_r_r51) goto CPyL55;
CPyL23: ;
    cpy_r_r52 = cpy_r_major == 6;
    if (!cpy_r_r52) goto CPyL66;
    cpy_r_r53 = CPyStatic_defaults___PYTHON3_VERSION_MIN;
    if (unlikely(cpy_r_r53.f0 == CPY_INT_TAG)) {
        goto CPyL67;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON3_VERSION_MIN\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 51, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r55 = cpy_r_r53.f1;
    CPyTagged_INCREF(cpy_r_r55);
    cpy_r_r56 = cpy_r_minor & 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (cpy_r_r57) goto CPyL29;
    cpy_r_r58 = cpy_r_r55 & 1;
    cpy_r_r59 = cpy_r_r58 != 0;
    if (!cpy_r_r59) goto CPyL30;
CPyL29: ;
    cpy_r_r60 = CPyTagged_IsLt_(cpy_r_minor, cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r55);
    if (cpy_r_r60) {
        goto CPyL68;
    } else
        goto CPyL55;
CPyL30: ;
    cpy_r_r61 = (Py_ssize_t)cpy_r_minor < (Py_ssize_t)cpy_r_r55;
    CPyTagged_DECREF(cpy_r_r55);
    if (cpy_r_r61) {
        goto CPyL68;
    } else
        goto CPyL55;
CPyL31: ;
    cpy_r_r62 = CPyStatics[1485]; /* 'Python 3.{} is not supported (must be {}.{} or higher)' */
    cpy_r_r63 = CPyStatic_defaults___PYTHON3_VERSION_MIN;
    if (unlikely(cpy_r_r63.f0 == CPY_INT_TAG)) {
        goto CPyL69;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON3_VERSION_MIN\" was not set");
    cpy_r_r64 = 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 53, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r65 = CPyStatics[193]; /* 'format' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL70;
    }
    cpy_r_r67 = PyList_New(1);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL71;
    }
    cpy_r_r68 = CPyTagged_StealAsObject(cpy_r_minor);
    cpy_r_r69 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r70 = *(CPyPtr *)cpy_r_r69;
    *(PyObject * *)cpy_r_r70 = cpy_r_r68;
    CPyTagged_INCREF(cpy_r_r63.f0);
    CPyTagged_INCREF(cpy_r_r63.f1);
    cpy_r_r71 = PyTuple_New(2);
    if (unlikely(cpy_r_r71 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1661 = CPyTagged_StealAsObject(cpy_r_r63.f0);
    PyTuple_SET_ITEM(cpy_r_r71, 0, __tmp1661);
    PyObject *__tmp1662 = CPyTagged_StealAsObject(cpy_r_r63.f1);
    PyTuple_SET_ITEM(cpy_r_r71, 1, __tmp1662);
    cpy_r_r72 = CPyList_Extend(cpy_r_r67, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL37: ;
    cpy_r_r73 = PyList_AsTuple(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL74;
    }
    cpy_r_r74 = PyDict_New();
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL75;
    }
    cpy_r_r75 = PyObject_Call(cpy_r_r66, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", -1, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r75)))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_version", 52, CPyStatic_config_parser___globals, "str", cpy_r_r75);
        goto CPyL56;
    }
    cpy_r_msg = cpy_r_r76;
    cpy_r_r77 = (PyObject *)&PyFloat_Type;
    cpy_r_r78 = PyObject_IsInstance(cpy_r_v, cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 56, CPyStatic_config_parser___globals);
        goto CPyL76;
    }
    cpy_r_r80 = cpy_r_r78;
    if (!cpy_r_r80) goto CPyL45;
    cpy_r_r81 = CPyStatics[1486]; /* '. You may need to put quotes around your Python version' */
    cpy_r_r82 = CPyStr_Append(cpy_r_msg, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 57, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_msg = cpy_r_r82;
CPyL45: ;
    cpy_r_r83 = CPyModule_argparse;
    cpy_r_r84 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r85 = CPyObject_GetAttr(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 59, CPyStatic_config_parser___globals);
        goto CPyL76;
    }
    PyObject *cpy_r_r86[1] = {cpy_r_msg};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 59, CPyStatic_config_parser___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_msg);
    CPy_Raise(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 59, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r89 = CPyStatics[1487]; /* "Python major version '" */
    cpy_r_r90 = CPyTagged_Str(cpy_r_major);
    CPyTagged_DECREF(cpy_r_major);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 62, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r91 = CPyStatics[1488]; /* "' out of range (must be 3)" */
    cpy_r_r92 = CPyStr_Build(3, cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 62, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r93 = CPyModule_argparse;
    cpy_r_r94 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 61, CPyStatic_config_parser___globals);
        goto CPyL77;
    }
    PyObject *cpy_r_r96[1] = {cpy_r_r92};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = _PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, 0);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 61, CPyStatic_config_parser___globals);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r92);
    CPy_Raise(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_version", 61, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r99.f0 = cpy_r_major;
    cpy_r_r99.f1 = cpy_r_minor;
    CPyTagged_INCREF(cpy_r_r99.f0);
    CPyTagged_INCREF(cpy_r_r99.f1);
    CPyTagged_DECREF(cpy_r_major);
    CPyTagged_DECREF(cpy_r_minor);
    return cpy_r_r99;
CPyL56: ;
    tuple_T2II __tmp1663 = { CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r100 = __tmp1663;
    return cpy_r_r100;
CPyL57: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL56;
CPyL58: ;
    CPy_DECREF(cpy_r_m);
    goto CPyL7;
CPyL59: ;
    CPy_DecRef(cpy_r_m);
    goto CPyL56;
CPyL60: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL56;
CPyL61: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_r24);
    goto CPyL56;
CPyL62: ;
    CPy_DecRef(cpy_r_m);
    CPy_DecRef(cpy_r_r30);
    goto CPyL56;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    goto CPyL56;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r43);
    goto CPyL56;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_r36);
    goto CPyL56;
CPyL66: ;
    CPyTagged_DECREF(cpy_r_minor);
    goto CPyL49;
CPyL67: ;
    CPyTagged_DecRef(cpy_r_major);
    CPyTagged_DecRef(cpy_r_minor);
    goto CPyL25;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_major);
    goto CPyL31;
CPyL69: ;
    CPyTagged_DecRef(cpy_r_minor);
    goto CPyL32;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_minor);
    goto CPyL56;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_minor);
    CPy_DecRef(cpy_r_r66);
    goto CPyL56;
CPyL72: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    goto CPyL56;
CPyL73: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL37;
CPyL74: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL56;
CPyL75: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r73);
    goto CPyL56;
CPyL76: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL56;
CPyL77: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL56;
}

PyObject *CPyPy_config_parser___parse_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"v", 0};
    static CPyArg_Parser parser = {"O:parse_version", kwlist, 0};
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_v)) {
        return NULL;
    }
    PyObject *arg_v;
    if (PyUnicode_Check(obj_v))
        arg_v = obj_v;
    else {
        arg_v = NULL;
    }
    if (arg_v != NULL) goto __LL1664;
    if (CPyFloat_Check(obj_v))
        arg_v = obj_v;
    else {
        arg_v = NULL;
    }
    if (arg_v != NULL) goto __LL1664;
    CPy_TypeError("union[str, float]", obj_v); 
    goto fail;
__LL1664: ;
    tuple_T2II retval = CPyDef_config_parser___parse_version(arg_v);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1665 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp1665);
    PyObject *__tmp1666 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp1666);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "parse_version", 43, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___try_split(PyObject *cpy_r_v, PyObject *cpy_r_split_regex) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
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
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_p_2;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    if (cpy_r_split_regex != NULL) goto CPyL26;
    cpy_r_r0 = CPyStatics[1489]; /* '[,]' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_split_regex = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&PyUnicode_Type;
    cpy_r_r2 = PyObject_IsInstance(cpy_r_v, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 69, CPyStatic_config_parser___globals);
        goto CPyL27;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL28;
    CPy_INCREF(cpy_r_v);
    if (likely(PyUnicode_Check(cpy_r_v)))
        cpy_r_r5 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals, "str", cpy_r_v);
        goto CPyL27;
    }
    cpy_r_r6 = CPyModule_re;
    cpy_r_r7 = CPyStatics[369]; /* 'split' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    PyObject *cpy_r_r9[2] = {cpy_r_split_regex, cpy_r_r5};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 2, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_split_regex);
    CPy_DECREF(cpy_r_r5);
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals, "list", cpy_r_r11);
        goto CPyL25;
    }
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = PyList_New(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals);
        goto CPyL30;
    }
    cpy_r_r16 = 0;
CPyL10: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL31;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r12, cpy_r_r16);
    cpy_r_p = cpy_r_r21;
    cpy_r_r22 = cpy_r_p;
    cpy_r_r23 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r24[1] = {cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r22);
    cpy_r_r27 = cpy_r_r26;
    cpy_r_r28 = CPyList_SetItemUnsafe(cpy_r_r15, cpy_r_r16, cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 70, CPyStatic_config_parser___globals);
        goto CPyL33;
    }
    cpy_r_r29 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r29;
    goto CPyL10;
CPyL15: ;
    return cpy_r_r15;
CPyL16: ;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals);
        goto CPyL25;
    }
    cpy_r_r31 = PyObject_GetIter(cpy_r_v);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals);
        goto CPyL34;
    }
CPyL18: ;
    cpy_r_r32 = PyIter_Next(cpy_r_r31);
    if (cpy_r_r32 == NULL) goto CPyL35;
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals, "str", cpy_r_r32);
        goto CPyL36;
    }
    cpy_r_p_2 = cpy_r_r33;
    cpy_r_r34 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r35[1] = {cpy_r_p_2};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_VectorcallMethod(cpy_r_r34, cpy_r_r36, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_p_2);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals, "str", cpy_r_r37);
        goto CPyL36;
    }
    cpy_r_r39 = PyList_Append(cpy_r_r30, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals);
        goto CPyL36;
    } else
        goto CPyL18;
CPyL23: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/config_parser.py", "try_split", 72, CPyStatic_config_parser___globals);
        goto CPyL34;
    }
    return cpy_r_r30;
CPyL25: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL26: ;
    CPy_INCREF(cpy_r_split_regex);
    goto CPyL2;
CPyL27: ;
    CPy_DecRef(cpy_r_split_regex);
    goto CPyL25;
CPyL28: ;
    CPy_DECREF(cpy_r_split_regex);
    goto CPyL16;
CPyL29: ;
    CPy_DecRef(cpy_r_split_regex);
    CPy_DecRef(cpy_r_r5);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL25;
CPyL31: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL15;
CPyL32: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r22);
    goto CPyL25;
CPyL33: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL25;
CPyL35: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL23;
CPyL36: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_p_2);
    goto CPyL25;
}

PyObject *CPyPy_config_parser___try_split(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"v", "split_regex", 0};
    static CPyArg_Parser parser = {"O|O:try_split", kwlist, 0};
    PyObject *obj_v;
    PyObject *obj_split_regex = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_v, &obj_split_regex)) {
        return NULL;
    }
    PyObject *arg_v;
    if (PyUnicode_Check(obj_v))
        arg_v = obj_v;
    else {
        arg_v = NULL;
    }
    if (arg_v != NULL) goto __LL1667;
    arg_v = obj_v;
    if (arg_v != NULL) goto __LL1667;
    CPy_TypeError("union[str, object]", obj_v); 
    goto fail;
__LL1667: ;
    PyObject *arg_split_regex;
    if (obj_split_regex == NULL) {
        arg_split_regex = NULL;
    } else if (likely(PyUnicode_Check(obj_split_regex)))
        arg_split_regex = obj_split_regex;
    else {
        CPy_TypeError("str", obj_split_regex); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___try_split(arg_v, arg_split_regex);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "try_split", 67, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___validate_codes(PyObject *cpy_r_codes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_invalid_codes;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = PySet_New(cpy_r_codes);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    cpy_r_r1 = CPyStatic_config_parser___globals;
    cpy_r_r2 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL20;
    }
    if (likely(PyDict_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals, "dict", cpy_r_r3);
        goto CPyL20;
    }
    cpy_r_r5 = CPyDict_KeysView(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL20;
    }
    cpy_r_r6 = PySet_New(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL20;
    }
    cpy_r_r7 = PyNumber_Subtract(cpy_r_r0, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals, "set", cpy_r_r7);
        goto CPyL19;
    }
    cpy_r_invalid_codes = cpy_r_r8;
    cpy_r_r9 = PyObject_IsTrue(cpy_r_invalid_codes);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 76, CPyStatic_config_parser___globals);
        goto CPyL21;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL22;
    cpy_r_r12 = CPyStatics[1491]; /* 'Invalid error code(s): ' */
    cpy_r_r13 = CPyStatics[71]; /* ', ' */
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 79, CPyStatic_config_parser___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_invalid_codes};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 79, CPyStatic_config_parser___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_invalid_codes);
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "validate_codes", 79, CPyStatic_config_parser___globals, "list", cpy_r_r19);
        goto CPyL19;
    }
    cpy_r_r21 = PyUnicode_Join(cpy_r_r13, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 79, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    cpy_r_r22 = CPyStr_Build(2, cpy_r_r12, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 79, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    cpy_r_r23 = CPyModule_argparse;
    cpy_r_r24 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 78, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 78, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r22);
    CPy_Raise(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 78, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_codes);
    return cpy_r_codes;
CPyL19: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_invalid_codes);
    goto CPyL19;
CPyL22: ;
    CPy_DECREF(cpy_r_invalid_codes);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL19;
}

PyObject *CPyPy_config_parser___validate_codes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"codes", 0};
    static CPyArg_Parser parser = {"O:validate_codes", kwlist, 0};
    PyObject *obj_codes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_codes)) {
        return NULL;
    }
    PyObject *arg_codes;
    if (likely(PyList_Check(obj_codes)))
        arg_codes = obj_codes;
    else {
        CPy_TypeError("list", obj_codes); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___validate_codes(arg_codes);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "validate_codes", 75, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___expand_path(PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
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
    cpy_r_r0 = CPyModule_os;
    cpy_r_r1 = CPyStatics[142]; /* 'path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL9;
    }
    cpy_r_r3 = CPyStatics[1492]; /* 'expanduser' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL9;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals, "str", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_r9 = CPyModule_os;
    cpy_r_r10 = CPyStatics[142]; /* 'path' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL10;
    }
    cpy_r_r12 = CPyStatics[1493]; /* 'expandvars' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "expand_path", 89, CPyStatic_config_parser___globals, "str", cpy_r_r16);
        goto CPyL9;
    }
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
}

PyObject *CPyPy_config_parser___expand_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:expand_path", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___expand_path(arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "expand_path", 84, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___str_or_array_as_list(PyObject *cpy_r_v) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_v, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 93, CPyStatic_config_parser___globals);
        goto CPyL26;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL14;
    CPy_INCREF(cpy_r_v);
    if (likely(PyUnicode_Check(cpy_r_v)))
        cpy_r_r4 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals, "str", cpy_r_v);
        goto CPyL26;
    }
    cpy_r_r5 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals, "str", cpy_r_r8);
        goto CPyL26;
    }
    cpy_r_r10 = CPyStr_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    CPy_INCREF(cpy_r_v);
    if (likely(PyUnicode_Check(cpy_r_v)))
        cpy_r_r11 = cpy_r_v;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals, "str", cpy_r_v);
        goto CPyL26;
    }
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL26;
    }
    cpy_r_r17 = PyList_New(1);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    *(PyObject * *)cpy_r_r19 = cpy_r_r16;
    cpy_r_r20 = cpy_r_r17;
    goto CPyL13;
CPyL11: ;
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 94, CPyStatic_config_parser___globals);
        goto CPyL26;
    }
    cpy_r_r20 = cpy_r_r21;
CPyL13: ;
    return cpy_r_r20;
CPyL14: ;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL26;
    }
    cpy_r_r23 = PyObject_GetIter(cpy_r_v);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL30;
    }
CPyL16: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL31;
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals, "str", cpy_r_r24);
        goto CPyL32;
    }
    cpy_r_p = cpy_r_r25;
    cpy_r_r26 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r27[1] = {cpy_r_p};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals, "str", cpy_r_r29);
        goto CPyL33;
    }
    cpy_r_r31 = CPyStr_IsTrue(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (!cpy_r_r31) goto CPyL34;
    cpy_r_r32 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r33[1] = {cpy_r_p};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r34, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals, "str", cpy_r_r35);
        goto CPyL32;
    }
    cpy_r_r37 = PyList_Append(cpy_r_r22, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL32;
    } else
        goto CPyL16;
CPyL24: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 95, CPyStatic_config_parser___globals);
        goto CPyL30;
    }
    return cpy_r_r22;
CPyL26: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL27: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL26;
CPyL31: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_p);
    goto CPyL26;
CPyL34: ;
    CPy_DECREF(cpy_r_p);
    goto CPyL16;
}

PyObject *CPyPy_config_parser___str_or_array_as_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"v", 0};
    static CPyArg_Parser parser = {"O:str_or_array_as_list", kwlist, 0};
    PyObject *obj_v;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_v)) {
        return NULL;
    }
    PyObject *arg_v;
    if (PyUnicode_Check(obj_v))
        arg_v = obj_v;
    else {
        arg_v = NULL;
    }
    if (arg_v != NULL) goto __LL1668;
    arg_v = obj_v;
    if (arg_v != NULL) goto __LL1668;
    CPy_TypeError("union[str, object]", obj_v); 
    goto fail;
__LL1668: ;
    PyObject *retval = CPyDef_config_parser___str_or_array_as_list(arg_v);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "str_or_array_as_list", 92, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___split_and_match_files_list(PyObject *cpy_r_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_expanded_paths;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
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
    PyObject *cpy_r_globbed_files;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 105, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    cpy_r_expanded_paths = cpy_r_r0;
    cpy_r_r1 = PyObject_GetIter(cpy_r_paths);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 107, CPyStatic_config_parser___globals);
        goto CPyL16;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL17;
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_and_match_files_list", 107, CPyStatic_config_parser___globals, "str", cpy_r_r2);
        goto CPyL18;
    }
    cpy_r_path = cpy_r_r3;
    cpy_r_r4 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r5[1] = {cpy_r_path};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 108, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_path);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_and_match_files_list", 108, CPyStatic_config_parser___globals, "str", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_r9 = CPyDef_config_parser___expand_path(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 108, CPyStatic_config_parser___globals);
        goto CPyL18;
    }
    cpy_r_path = cpy_r_r9;
    cpy_r_r10 = CPyModule_glob;
    cpy_r_r11 = CPyStatics[1494]; /* 'glob' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 109, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    cpy_r_r13 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r14[2] = {cpy_r_path, cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9274]; /* ('recursive',) */
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r15, 1, cpy_r_r16);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 109, CPyStatic_config_parser___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_and_match_files_list", 109, CPyStatic_config_parser___globals, "list", cpy_r_r17);
        goto CPyL19;
    }
    cpy_r_globbed_files = cpy_r_r18;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_globbed_files)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (cpy_r_r22) {
        goto CPyL20;
    } else
        goto CPyL21;
CPyL11: ;
    cpy_r_r23 = CPyList_Extend(cpy_r_expanded_paths, cpy_r_globbed_files);
    CPy_DECREF(cpy_r_globbed_files);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 111, CPyStatic_config_parser___globals);
        goto CPyL18;
    } else
        goto CPyL22;
CPyL12: ;
    cpy_r_r24 = PyList_Append(cpy_r_expanded_paths, cpy_r_path);
    CPy_DECREF(cpy_r_path);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 113, CPyStatic_config_parser___globals);
        goto CPyL18;
    } else
        goto CPyL2;
CPyL13: ;
    cpy_r_r26 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 107, CPyStatic_config_parser___globals);
        goto CPyL16;
    }
    return cpy_r_expanded_paths;
CPyL15: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL16: ;
    CPy_DecRef(cpy_r_expanded_paths);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_expanded_paths);
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_expanded_paths);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    goto CPyL15;
CPyL20: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL11;
CPyL21: ;
    CPy_DECREF(cpy_r_globbed_files);
    goto CPyL12;
CPyL22: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL2;
}

PyObject *CPyPy_config_parser___split_and_match_files_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"paths", 0};
    static CPyArg_Parser parser = {"O:split_and_match_files_list", kwlist, 0};
    PyObject *obj_paths;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_paths)) {
        return NULL;
    }
    PyObject *arg_paths = obj_paths;
    PyObject *retval = CPyDef_config_parser___split_and_match_files_list(arg_paths);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files_list", 98, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___split_and_match_files(PyObject *cpy_r_paths) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[242]; /* ',' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_paths, cpy_r_r0, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files", 127, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_config_parser___split_and_match_files_list(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files", 127, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_config_parser___split_and_match_files(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"paths", 0};
    static CPyArg_Parser parser = {"O:split_and_match_files", kwlist, 0};
    PyObject *obj_paths;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_paths)) {
        return NULL;
    }
    PyObject *arg_paths;
    if (likely(PyUnicode_Check(obj_paths)))
        arg_paths = obj_paths;
    else {
        CPy_TypeError("str", obj_paths); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___split_and_match_files(arg_paths);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "split_and_match_files", 118, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___check_follow_imports(PyObject *cpy_r_choice) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_choices;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = CPyStatics[398]; /* 'normal' */
    cpy_r_r1 = CPyStatics[364]; /* 'silent' */
    cpy_r_r2 = CPyStatics[400]; /* 'skip' */
    cpy_r_r3 = CPyStatics[401]; /* 'error' */
    cpy_r_r4 = PyList_New(4);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 131, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r6 = cpy_r_r0;
    cpy_r_r7 = cpy_r_r6 + 8;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r7 = cpy_r_r1;
    cpy_r_r8 = cpy_r_r6 + 16;
    CPy_INCREF(cpy_r_r2);
    *(PyObject * *)cpy_r_r8 = cpy_r_r2;
    cpy_r_r9 = cpy_r_r6 + 24;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r9 = cpy_r_r3;
    cpy_r_choices = cpy_r_r4;
    cpy_r_r10 = PySequence_Contains(cpy_r_choices, cpy_r_choice);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 132, CPyStatic_config_parser___globals);
        goto CPyL18;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (!cpy_r_r13) goto CPyL19;
    cpy_r_r14 = CPyStatics[71]; /* ', ' */
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_choices)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = PyList_New(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 135, CPyStatic_config_parser___globals);
        goto CPyL18;
    }
    cpy_r_r18 = 0;
CPyL5: ;
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_choices)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r22) goto CPyL20;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_choices, cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "check_follow_imports", 135, CPyStatic_config_parser___globals, "str", cpy_r_r23);
        goto CPyL21;
    }
    cpy_r_x = cpy_r_r24;
    cpy_r_r25 = CPyStatics[385]; /* "'" */
    cpy_r_r26 = CPyStatics[385]; /* "'" */
    cpy_r_r27 = CPyStr_Build(3, cpy_r_r25, cpy_r_x, cpy_r_r26);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 135, CPyStatic_config_parser___globals);
        goto CPyL21;
    }
    cpy_r_r28 = CPyList_SetItemUnsafe(cpy_r_r17, cpy_r_r18, cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 135, CPyStatic_config_parser___globals);
        goto CPyL21;
    }
    cpy_r_r29 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r29;
    goto CPyL5;
CPyL10: ;
    cpy_r_r30 = PyUnicode_Join(cpy_r_r14, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 135, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    cpy_r_r31 = CPyStatics[1496]; /* "invalid choice '" */
    cpy_r_r32 = CPyStatics[1497]; /* "' (choose from " */
    cpy_r_r33 = CPyStatics[72]; /* ')' */
    cpy_r_r34 = CPyStr_Build(5, cpy_r_r31, cpy_r_choice, cpy_r_r32, cpy_r_r30, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 134, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    cpy_r_r35 = CPyModule_argparse;
    cpy_r_r36 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 133, CPyStatic_config_parser___globals);
        goto CPyL22;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_r34};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 133, CPyStatic_config_parser___globals);
        goto CPyL22;
    }
    CPy_DECREF(cpy_r_r34);
    CPy_Raise(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 133, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL16: ;
    CPy_INCREF(cpy_r_choice);
    return cpy_r_choice;
CPyL17: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL18: ;
    CPy_DecRef(cpy_r_choices);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_choices);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_choices);
    goto CPyL10;
CPyL21: ;
    CPy_DecRef(cpy_r_choices);
    CPy_DecRef(cpy_r_r17);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL17;
}

PyObject *CPyPy_config_parser___check_follow_imports(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"choice", 0};
    static CPyArg_Parser parser = {"O:check_follow_imports", kwlist, 0};
    PyObject *obj_choice;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_choice)) {
        return NULL;
    }
    PyObject *arg_choice;
    if (likely(PyUnicode_Check(obj_choice)))
        arg_choice = obj_choice;
    else {
        CPy_TypeError("str", obj_choice); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___check_follow_imports(arg_choice);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "check_follow_imports", 130, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___split_commas(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_items;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyStatics[242]; /* ',' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_value, cpy_r_r0, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_commas", 144, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_items = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_items, -2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_commas", 145, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_commas", 145, CPyStatic_config_parser___globals, "str", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_r8 = CPyStatics[163]; /* '' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_commas", 145, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
CPyL7: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPyList_Pop(cpy_r_items, -2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_commas", 146, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeError("str", cpy_r_r15); 
        cpy_r_r16 = NULL;
    }
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_commas", 146, CPyStatic_config_parser___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL10: ;
    return cpy_r_items;
CPyL11: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL10;
}

PyObject *CPyPy_config_parser___split_commas(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:split_commas", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___split_commas(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "split_commas", 141, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__0_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__0_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__0_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__0_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = CPyStatics[1498]; /* '[,:]' */
    cpy_r_r1 = CPyModule_re;
    cpy_r_r2 = CPyStatics[369]; /* 'split' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r4[2] = {cpy_r_r0, cpy_r_s};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL13;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals, "list", cpy_r_r6);
        goto CPyL13;
    }
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = PyList_New(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r11 = 0;
CPyL5: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL15;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r11);
    cpy_r_p = cpy_r_r16;
    cpy_r_r17 = cpy_r_p;
    cpy_r_r18 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_r17);
    cpy_r_r22 = cpy_r_r21;
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals, "str", cpy_r_r22);
        goto CPyL17;
    }
    cpy_r_r24 = CPyDef_config_parser___expand_path(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r10, cpy_r_r11, cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
        goto CPyL17;
    }
    cpy_r_r26 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r26;
    goto CPyL5;
CPyL12: ;
    return cpy_r_r10;
CPyL13: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL14: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r17);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__0_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__0_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 158, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__1_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__1_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__1_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__1_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r4;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL11;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__1_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__1_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 164, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__2_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__2_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__2_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__2_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r4;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL11;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__2_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__2_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 165, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__3_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__3_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__3_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__3_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r4;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL11;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__3_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__3_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 166, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__4_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__4_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__4_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__4_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r4;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL11;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__4_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__4_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 167, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__5_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__5_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__5_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__5_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL12;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
        goto CPyL13;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL14;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL15;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL15;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    cpy_r_r19 = CPyDef_config_parser___validate_codes(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL12;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__5_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__5_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 168, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__6_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__6_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__6_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__6_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL12;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
        goto CPyL13;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL14;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL15;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
        goto CPyL16;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL15;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    cpy_r_r19 = CPyDef_config_parser___validate_codes(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL12;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__6_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__6_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 169, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__7_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__7_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__7_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__7_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    CPy_INCREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_s)))
        cpy_r_r0 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals, "str", cpy_r_s);
        goto CPyL11;
    }
    cpy_r_r1 = CPyDef_config_parser___split_commas(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r13[1] = {cpy_r_p};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_p);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals);
        goto CPyL14;
    }
    cpy_r_r18 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r18;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r4;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_p);
    goto CPyL11;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__7_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__7_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 170, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__8_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__8_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__8_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__8_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r1[1] = {cpy_r_s};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 174, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 174, CPyStatic_config_parser___globals);
        goto CPyL4;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL4: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL3;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__8_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__8_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 174, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__9_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__9_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__9_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__9_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyStatics[1498]; /* '[,:]' */
    cpy_r_r1 = CPyDef_config_parser___try_split(cpy_r_s, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals);
        goto CPyL9;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals);
        goto CPyL10;
    }
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals, "str", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_p = cpy_r_r11;
    cpy_r_r12 = CPyDef_config_parser___expand_path(cpy_r_p);
    CPy_DECREF(cpy_r_p);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals);
        goto CPyL12;
    }
    cpy_r_r14 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r14;
    goto CPyL3;
CPyL8: ;
    return cpy_r_r4;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__9_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__9_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 184, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__10_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__10_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__10_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__10_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_config_parser___try_split(cpy_r_s, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 185, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_config_parser___split_and_match_files_list(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 185, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__10_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__10_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 185, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__11_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__11_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__11_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__11_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = PyObject_Str(cpy_r_s);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 186, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_config_parser___check_follow_imports(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 186, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__11_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__11_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 186, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__12_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__12_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__12_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__12_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_config_parser___try_split(cpy_r_s, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 191, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_config_parser___validate_codes(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 191, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__12_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__12_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 191, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__13_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser_____mypyc_lambda__13_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__13_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser_____mypyc_lambda__13_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_config_parser___try_split(cpy_r_s, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 192, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    cpy_r_r2 = CPyDef_config_parser___validate_codes(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 192, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_config_parser_____mypyc_lambda__13_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s = obj_s;
    PyObject *retval = CPyDef_config_parser_____mypyc_lambda__13_obj_____call__(arg___mypyc_self__, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "<lambda>", 192, CPyStatic_config_parser___globals);
    return NULL;
}

char CPyDef_config_parser___parse_config_file(PyObject *cpy_r_options, PyObject *cpy_r_set_strict_flags, PyObject *cpy_r_filename, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_toml_data;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T1O cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_config_files;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_config_files_iter;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_config_parser;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_config_file;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    tuple_T3OOO cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    int32_t cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_parser;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_config_types;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    tuple_T3OOO cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    tuple_T3OOO cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject **cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    char cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_file_read;
    char cpy_r_r162;
    CPyTagged cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject **cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject **cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    int32_t cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    char cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    char cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject **cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_section;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_prefix;
    tuple_T2OO cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_updates;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_report_dirs;
    CPyTagged cpy_r_r219;
    int64_t cpy_r_r220;
    CPyTagged cpy_r_r221;
    PyObject *cpy_r_r222;
    tuple_T4CIOO cpy_r_r223;
    CPyTagged cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    int32_t cpy_r_r229;
    char cpy_r_r230;
    char cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject **cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    tuple_T2OO cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    tuple_T2OO cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    int64_t cpy_r_r251;
    CPyTagged cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject **cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    CPyPtr cpy_r_r262;
    int64_t cpy_r_r263;
    PyObject *cpy_r_r264;
    CPyTagged cpy_r_r265;
    CPyPtr cpy_r_r266;
    int64_t cpy_r_r267;
    CPyTagged cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    char cpy_r_r274;
    CPyTagged cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject **cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    int32_t cpy_r_r292;
    char cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    char cpy_r_r298;
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
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject **cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    CPyTagged cpy_r_r320;
    int64_t cpy_r_r321;
    CPyTagged cpy_r_r322;
    PyObject *cpy_r_r323;
    tuple_T4CIOO cpy_r_r324;
    CPyTagged cpy_r_r325;
    char cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    int32_t cpy_r_r332;
    char cpy_r_r333;
    char cpy_r_r334;
    int32_t cpy_r_r335;
    char cpy_r_r336;
    char cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_globs;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    CPyTagged cpy_r_r343;
    CPyPtr cpy_r_r344;
    int64_t cpy_r_r345;
    CPyTagged cpy_r_r346;
    char cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_glob;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    CPyTagged cpy_r_r372;
    int64_t cpy_r_r373;
    char cpy_r_r374;
    CPyTagged cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_c;
    int32_t cpy_r_r378;
    char cpy_r_r379;
    char cpy_r_r380;
    CPyTagged cpy_r_r381;
    char cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    CPyTagged cpy_r_r385;
    CPyPtr cpy_r_r386;
    int64_t cpy_r_r387;
    CPyTagged cpy_r_r388;
    char cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r392;
    int32_t cpy_r_r393;
    char cpy_r_r394;
    char cpy_r_r395;
    char cpy_r_r396;
    PyObject *cpy_r_r397;
    int32_t cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    char cpy_r_r401;
    char cpy_r_r402;
    char cpy_r_r403;
    CPyTagged cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject **cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    CPyTagged cpy_r_r417;
    char cpy_r_r418;
    char cpy_r_r419;
    cpy_r_r0 = NULL;
    cpy_r_toml_data = cpy_r_r0;
    if (cpy_r_stdout != NULL) goto CPyL258;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_stdout = cpy_r_r1;
CPyL2: ;
    if (cpy_r_stderr != NULL) goto CPyL259;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_stderr = cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_stdout != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL260;
    CPy_INCREF(cpy_r_stdout);
    cpy_r_r5 = cpy_r_stdout;
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 205, CPyStatic_config_parser___globals);
        goto CPyL261;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL260;
    cpy_r_r9 = cpy_r_stdout;
    goto CPyL11;
CPyL9: ;
    cpy_r_r10 = CPyModule_sys;
    cpy_r_r11 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 214, CPyStatic_config_parser___globals);
        goto CPyL262;
    }
    cpy_r_r9 = cpy_r_r12;
CPyL11: ;
    cpy_r_stdout = cpy_r_r9;
    CPy_DECREF(cpy_r_stdout);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_stderr != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL263;
    CPy_INCREF(cpy_r_stderr);
    cpy_r_r15 = cpy_r_stderr;
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 206, CPyStatic_config_parser___globals);
        goto CPyL262;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL263;
    cpy_r_r19 = cpy_r_stderr;
    goto CPyL18;
CPyL16: ;
    cpy_r_r20 = CPyModule_sys;
    cpy_r_r21 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 215, CPyStatic_config_parser___globals);
        goto CPyL264;
    }
    cpy_r_r19 = cpy_r_r22;
CPyL18: ;
    cpy_r_stderr = cpy_r_r19;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_filename != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL21;
    CPy_INCREF(cpy_r_filename);
    if (likely(cpy_r_filename != Py_None))
        cpy_r_r25 = cpy_r_filename;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 218, CPyStatic_config_parser___globals, "str", cpy_r_filename);
        goto CPyL262;
    }
    cpy_r_r26.f0 = cpy_r_r25;
    CPy_INCREF(cpy_r_r26.f0);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = PyTuple_New(1);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1669 = cpy_r_r26.f0;
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp1669);
    cpy_r_config_files = cpy_r_r27;
    goto CPyL30;
CPyL21: ;
    cpy_r_r28 = CPyModule_os;
    cpy_r_r29 = CPyStatics[142]; /* 'path' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 220, CPyStatic_config_parser___globals);
        goto CPyL262;
    }
    cpy_r_r31 = CPyStatics[1492]; /* 'expanduser' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 220, CPyStatic_config_parser___globals);
        goto CPyL262;
    }
    cpy_r_r33 = CPyStatic_defaults___CONFIG_FILES;
    if (unlikely(cpy_r_r33 == NULL)) {
        goto CPyL265;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"CONFIG_FILES\" was not set");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 220, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[865]; /* 'map' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 220, CPyStatic_config_parser___globals);
        goto CPyL266;
    }
    PyObject *cpy_r_r38[2] = {cpy_r_r32, cpy_r_r33};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 2, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 220, CPyStatic_config_parser___globals);
        goto CPyL266;
    }
    CPy_DECREF(cpy_r_r32);
    cpy_r_config_files_iter = cpy_r_r40;
    cpy_r_r41 = PySequence_Tuple(cpy_r_config_files_iter);
    CPy_DECREF(cpy_r_config_files_iter);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 221, CPyStatic_config_parser___globals);
        goto CPyL262;
    }
    cpy_r_config_files = cpy_r_r41;
CPyL30: ;
    cpy_r_r42 = CPyModule_configparser;
    cpy_r_r43 = CPyStatics[1499]; /* 'RawConfigParser' */
    cpy_r_r44 = CPyObject_GetAttr(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 223, CPyStatic_config_parser___globals);
        goto CPyL267;
    }
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r44, 0, 0, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 223, CPyStatic_config_parser___globals);
        goto CPyL267;
    }
    cpy_r_config_parser = cpy_r_r45;
    cpy_r_r46 = 0;
CPyL33: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_config_files)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL268;
    cpy_r_r51 = CPySequenceTuple_GetItem(cpy_r_config_files, cpy_r_r46);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 225, CPyStatic_config_parser___globals);
        goto CPyL269;
    }
    if (likely(PyUnicode_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 225, CPyStatic_config_parser___globals, "str", cpy_r_r51);
        goto CPyL269;
    }
    cpy_r_config_file = cpy_r_r52;
    cpy_r_r53 = CPyModule_os;
    cpy_r_r54 = CPyStatics[142]; /* 'path' */
    cpy_r_r55 = CPyObject_GetAttr(cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 226, CPyStatic_config_parser___globals);
        goto CPyL270;
    }
    cpy_r_r56 = CPyStatics[1500]; /* 'exists' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 226, CPyStatic_config_parser___globals);
        goto CPyL270;
    }
    PyObject *cpy_r_r58[1] = {cpy_r_config_file};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 226, CPyStatic_config_parser___globals);
        goto CPyL270;
    }
    if (unlikely(!PyBool_Check(cpy_r_r60))) {
        CPy_TypeError("bool", cpy_r_r60); cpy_r_r61 = 2;
    } else
        cpy_r_r61 = cpy_r_r60 == Py_True;
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 226, CPyStatic_config_parser___globals);
        goto CPyL270;
    }
    if (!cpy_r_r61) goto CPyL271;
    cpy_r_r62 = CPyDef_config_parser___is_toml(cpy_r_config_file);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 229, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    if (!cpy_r_r62) goto CPyL88;
    cpy_r_r63 = CPyStatics[198]; /* 'rb' */
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[199]; /* 'open' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    PyObject *cpy_r_r67[2] = {cpy_r_config_file, cpy_r_r63};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 2, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_r70 = PyObject_Type(cpy_r_r69);
    cpy_r_r71 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL272;
    }
    cpy_r_r73 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r74 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r73);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL273;
    }
    PyObject *cpy_r_r75[1] = {cpy_r_r69};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL273;
    }
    cpy_r_r78 = 1;
    cpy_r_f = cpy_r_r77;
    cpy_r_r79 = CPyModule_tomllib;
    cpy_r_r80 = CPyStatics[263]; /* 'load' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 231, CPyStatic_config_parser___globals);
        goto CPyL274;
    }
    PyObject *cpy_r_r82[1] = {cpy_r_f};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r83, 1, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 231, CPyStatic_config_parser___globals);
        goto CPyL274;
    }
    CPy_DECREF(cpy_r_f);
    if (likely(PyDict_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeError("dict", cpy_r_r84); 
        cpy_r_r85 = NULL;
    }
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 231, CPyStatic_config_parser___globals);
        goto CPyL53;
    } else
        goto CPyL275;
CPyL52: ;
    cpy_r_toml_data = cpy_r_r85;
    goto CPyL61;
CPyL53: ;
    cpy_r_r86 = CPy_CatchError();
    cpy_r_r78 = 0;
    cpy_r_r87 = CPy_GetExcInfo();
    cpy_r_r88 = cpy_r_r87.f0;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = cpy_r_r87.f1;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = cpy_r_r87.f2;
    CPy_INCREF(cpy_r_r90);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    PyObject *cpy_r_r91[4] = {cpy_r_r69, cpy_r_r88, cpy_r_r89, cpy_r_r90};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r92, 4, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL276;
    }
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    cpy_r_r94 = PyObject_IsTrue(cpy_r_r93);
    CPy_DecRef(cpy_r_r93);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
    cpy_r_r96 = cpy_r_r94;
    if (cpy_r_r96) goto CPyL58;
    CPy_Reraise();
    if (!0) {
        goto CPyL59;
    } else
        goto CPyL277;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL61;
CPyL59: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    cpy_r_r97 = CPy_KeepPropagating();
    if (!cpy_r_r97) {
        goto CPyL62;
    } else
        goto CPyL278;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    tuple_T3OOO __tmp1670 = { NULL, NULL, NULL };
    cpy_r_r98 = __tmp1670;
    cpy_r_r99 = cpy_r_r98;
    goto CPyL63;
CPyL62: ;
    cpy_r_r100 = CPy_CatchError();
    cpy_r_r99 = cpy_r_r100;
CPyL63: ;
    if (!cpy_r_r78) goto CPyL279;
    cpy_r_r101 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r102[4] = {cpy_r_r69, cpy_r_r101, cpy_r_r101, cpy_r_r101};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r103, 4, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 230, CPyStatic_config_parser___globals);
        goto CPyL280;
    } else
        goto CPyL281;
CPyL65: ;
    CPy_DECREF(cpy_r_r69);
CPyL66: ;
    if (cpy_r_r99.f0 == NULL) goto CPyL73;
    CPy_Reraise();
    if (!0) {
        goto CPyL69;
    } else
        goto CPyL282;
CPyL68: ;
    CPy_Unreachable();
CPyL69: ;
    if (cpy_r_r99.f0 == NULL) goto CPyL71;
    CPy_RestoreExcInfo(cpy_r_r99);
    CPy_XDECREF(cpy_r_r99.f0);
    CPy_XDECREF(cpy_r_r99.f1);
    CPy_XDECREF(cpy_r_r99.f2);
CPyL71: ;
    cpy_r_r105 = CPy_KeepPropagating();
    if (!cpy_r_r105) {
        goto CPyL93;
    } else
        goto CPyL283;
CPyL72: ;
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r106 = CPyStatics[1501]; /* 'tool' */
    cpy_r_r107 = PyDict_New();
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 233, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    if (cpy_r_toml_data == NULL) {
        goto CPyL284;
    } else
        goto CPyL77;
CPyL75: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"toml_data\" referenced before assignment");
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 233, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL285;
CPyL76: ;
    CPy_Unreachable();
CPyL77: ;
    cpy_r_r109 = CPyDict_Get(cpy_r_toml_data, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 233, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    if (likely(PyDict_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeError("dict", cpy_r_r109); 
        cpy_r_r110 = NULL;
    }
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 233, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL286;
CPyL79: ;
    cpy_r_toml_data = cpy_r_r110;
    cpy_r_r111 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r112 = PyDict_Contains(cpy_r_toml_data, cpy_r_r111);
    cpy_r_r113 = cpy_r_r112 >= 0;
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 234, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_r114 = cpy_r_r112;
    cpy_r_r115 = cpy_r_r114 ^ 1;
    if (cpy_r_r115) goto CPyL271;
    cpy_r_r116 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r117 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r118 = CPyDict_GetItem(cpy_r_toml_data, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 236, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_r119 = CPyDict_Build(1, cpy_r_r116, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 236, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL287;
CPyL83: ;
    cpy_r_toml_data = cpy_r_r119;
    cpy_r_r120 = CPyDef_config_parser___destructure_overrides(cpy_r_toml_data);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 237, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_parser = cpy_r_r120;
    cpy_r_r121 = CPyStatic_config_parser___toml_config_types;
    if (unlikely(cpy_r_r121 == NULL)) {
        goto CPyL288;
    } else
        goto CPyL87;
CPyL85: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"toml_config_types\" was not set");
    cpy_r_r122 = 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 238, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL289;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    CPy_INCREF(cpy_r_r121);
    cpy_r_config_types = cpy_r_r121;
    goto CPyL106;
CPyL88: ;
    cpy_r_r123 = CPyStatics[141]; /* 'read' */
    PyObject *cpy_r_r124[2] = {cpy_r_config_parser, cpy_r_config_file};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_VectorcallMethod(cpy_r_r123, cpy_r_r125, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 240, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL290;
CPyL89: ;
    CPy_INCREF(cpy_r_config_parser);
    cpy_r_parser = cpy_r_config_parser;
    cpy_r_r127 = CPyStatic_config_parser___ini_config_types;
    if (unlikely(cpy_r_r127 == NULL)) {
        goto CPyL291;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ini_config_types\" was not set");
    cpy_r_r128 = 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 242, CPyStatic_config_parser___globals);
        goto CPyL93;
    } else
        goto CPyL292;
CPyL91: ;
    CPy_Unreachable();
CPyL92: ;
    CPy_INCREF(cpy_r_r127);
    cpy_r_config_types = cpy_r_r127;
    goto CPyL106;
CPyL93: ;
    cpy_r_r129 = CPy_CatchError();
    cpy_r_r130 = CPyModule_tomllib;
    cpy_r_r131 = CPyStatics[1502]; /* 'TOMLDecodeError' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 243, CPyStatic_config_parser___globals);
        goto CPyL293;
    }
    cpy_r_r133 = CPyModule_configparser;
    cpy_r_r134 = CPyStatics[1503]; /* 'Error' */
    cpy_r_r135 = CPyObject_GetAttr(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 243, CPyStatic_config_parser___globals);
        goto CPyL294;
    }
    cpy_r_r136 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError;
    cpy_r_r137.f0 = cpy_r_r132;
    cpy_r_r137.f1 = cpy_r_r135;
    cpy_r_r137.f2 = cpy_r_r136;
    CPy_INCREF(cpy_r_r137.f0);
    CPy_INCREF(cpy_r_r137.f1);
    CPy_INCREF(cpy_r_r137.f2);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r138 = PyTuple_New(3);
    if (unlikely(cpy_r_r138 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1671 = cpy_r_r137.f0;
    PyTuple_SET_ITEM(cpy_r_r138, 0, __tmp1671);
    PyObject *__tmp1672 = cpy_r_r137.f1;
    PyTuple_SET_ITEM(cpy_r_r138, 1, __tmp1672);
    PyObject *__tmp1673 = cpy_r_r137.f2;
    PyTuple_SET_ITEM(cpy_r_r138, 2, __tmp1673);
    cpy_r_r139 = CPy_ExceptionMatches(cpy_r_r138);
    CPy_DECREF(cpy_r_r138);
    if (!cpy_r_r139) goto CPyL295;
    cpy_r_r140 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r140;
    cpy_r_r141 = CPyStatics[297]; /* ': ' */
    cpy_r_r142 = PyObject_Str(cpy_r_err);
    CPy_DECREF(cpy_r_err);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 244, CPyStatic_config_parser___globals);
        goto CPyL293;
    }
    cpy_r_r143 = CPyStr_Build(3, cpy_r_config_file, cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_config_file);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 244, CPyStatic_config_parser___globals);
        goto CPyL296;
    }
    cpy_r_r144 = CPyModule_builtins;
    cpy_r_r145 = CPyStatics[190]; /* 'print' */
    cpy_r_r146 = CPyObject_GetAttr(cpy_r_r144, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 244, CPyStatic_config_parser___globals);
        goto CPyL297;
    }
    PyObject *cpy_r_r147[2] = {cpy_r_r143, cpy_r_stderr};
    cpy_r_r148 = (PyObject **)&cpy_r_r147;
    cpy_r_r149 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r150 = _PyObject_Vectorcall(cpy_r_r146, cpy_r_r148, 1, cpy_r_r149);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 244, CPyStatic_config_parser___globals);
        goto CPyL297;
    } else
        goto CPyL298;
CPyL100: ;
    CPy_DECREF(cpy_r_r143);
    goto CPyL103;
CPyL101: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL104;
    } else
        goto CPyL299;
CPyL102: ;
    CPy_Unreachable();
CPyL103: ;
    CPy_RestoreExcInfo(cpy_r_r129);
    CPy_DECREF(cpy_r_r129.f0);
    CPy_DECREF(cpy_r_r129.f1);
    CPy_DECREF(cpy_r_r129.f2);
    goto CPyL114;
CPyL104: ;
    CPy_RestoreExcInfo(cpy_r_r129);
    CPy_DECREF(cpy_r_r129.f0);
    CPy_DECREF(cpy_r_r129.f1);
    CPy_DECREF(cpy_r_r129.f2);
    cpy_r_r151 = CPy_KeepPropagating();
    if (!cpy_r_r151) goto CPyL257;
    CPy_Unreachable();
CPyL106: ;
    cpy_r_r152 = CPyStatic_defaults___SHARED_CONFIG_FILES;
    if (unlikely(cpy_r_r152 == NULL)) {
        goto CPyL300;
    } else
        goto CPyL109;
CPyL107: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"SHARED_CONFIG_FILES\" was not set");
    cpy_r_r153 = 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 246, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL109: ;
    cpy_r_r154 = PySequence_Contains(cpy_r_r152, cpy_r_config_file);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 246, CPyStatic_config_parser___globals);
        goto CPyL301;
    }
    cpy_r_r156 = cpy_r_r154;
    if (!cpy_r_r156) goto CPyL302;
    cpy_r_r157 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r158 = PySequence_Contains(cpy_r_parser, cpy_r_r157);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 246, CPyStatic_config_parser___globals);
        goto CPyL301;
    }
    cpy_r_r160 = cpy_r_r158;
    cpy_r_r161 = cpy_r_r160 ^ 1;
    if (cpy_r_r161) {
        goto CPyL303;
    } else
        goto CPyL302;
CPyL113: ;
    CPy_INCREF(cpy_r_config_file);
    cpy_r_file_read = cpy_r_config_file;
    CPy_INCREF(cpy_r_file_read);
    CPy_DECREF(((mypy___options___OptionsObject *)cpy_r_options)->_config_file);
    ((mypy___options___OptionsObject *)cpy_r_options)->_config_file = cpy_r_file_read;
    goto CPyL116;
CPyL114: ;
    cpy_r_r163 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r163;
    goto CPyL33;
CPyL115: ;
    return 1;
CPyL116: ;
    cpy_r_r164 = CPyModule_os;
    cpy_r_r165 = CPyStatics[142]; /* 'path' */
    cpy_r_r166 = CPyObject_GetAttr(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL304;
    }
    cpy_r_r167 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r168 = CPyObject_GetAttr(cpy_r_r166, cpy_r_r167);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL304;
    }
    PyObject *cpy_r_r169[1] = {cpy_r_config_file};
    cpy_r_r170 = (PyObject **)&cpy_r_r169;
    cpy_r_r171 = _PyObject_Vectorcall(cpy_r_r168, cpy_r_r170, 1, 0);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL304;
    }
    CPy_DECREF(cpy_r_config_file);
    if (likely(PyUnicode_Check(cpy_r_r171)))
        cpy_r_r172 = cpy_r_r171;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals, "str", cpy_r_r171);
        goto CPyL305;
    }
    cpy_r_r173 = CPyModule_os;
    cpy_r_r174 = CPyStatics[142]; /* 'path' */
    cpy_r_r175 = CPyObject_GetAttr(cpy_r_r173, cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL306;
    }
    cpy_r_r176 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r177 = CPyObject_GetAttr(cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL306;
    }
    PyObject *cpy_r_r178[1] = {cpy_r_r172};
    cpy_r_r179 = (PyObject **)&cpy_r_r178;
    cpy_r_r180 = _PyObject_Vectorcall(cpy_r_r177, cpy_r_r179, 1, 0);
    CPy_DECREF(cpy_r_r177);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL306;
    }
    CPy_DECREF(cpy_r_r172);
    if (likely(PyUnicode_Check(cpy_r_r180)))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals, "str", cpy_r_r180);
        goto CPyL305;
    }
    cpy_r_r182 = CPyModule_os;
    cpy_r_r183 = CPyStatics[1504]; /* 'environ' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL307;
    }
    cpy_r_r185 = CPyStatics[1505]; /* 'MYPY_CONFIG_FILE_DIR' */
    cpy_r_r186 = PyObject_SetItem(cpy_r_r184, cpy_r_r185, cpy_r_r181);
    CPy_DECREF(cpy_r_r184);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 254, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_r188 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r189 = PySequence_Contains(cpy_r_parser, cpy_r_r188);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 256, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_r191 = cpy_r_r189;
    cpy_r_r192 = cpy_r_r191 ^ 1;
    if (!cpy_r_r192) goto CPyL140;
    cpy_r_r193 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r194 = cpy_r_filename != cpy_r_r193;
    if (!cpy_r_r194) goto CPyL131;
    CPy_INCREF(cpy_r_filename);
    if (likely(cpy_r_filename != Py_None))
        cpy_r_r195 = cpy_r_filename;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 204, CPyStatic_config_parser___globals, "str", cpy_r_filename);
        goto CPyL305;
    }
    cpy_r_r196 = CPyStr_IsTrue(cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    if (cpy_r_r196) goto CPyL136;
CPyL131: ;
    cpy_r_r197 = CPyStatic_defaults___SHARED_CONFIG_FILES;
    if (unlikely(cpy_r_r197 == NULL)) {
        goto CPyL308;
    } else
        goto CPyL134;
CPyL132: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"SHARED_CONFIG_FILES\" was not set");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 257, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL134: ;
    cpy_r_r199 = PySequence_Contains(cpy_r_r197, cpy_r_file_read);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 257, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_r201 = cpy_r_r199;
    cpy_r_r202 = cpy_r_r201 ^ 1;
    if (!cpy_r_r202) goto CPyL150;
CPyL136: ;
    cpy_r_r203 = CPyStatics[1506]; /* ': No [mypy] section in config file' */
    cpy_r_r204 = CPyStr_Build(2, cpy_r_file_read, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 258, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_r205 = CPyModule_builtins;
    cpy_r_r206 = CPyStatics[190]; /* 'print' */
    cpy_r_r207 = CPyObject_GetAttr(cpy_r_r205, cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 258, CPyStatic_config_parser___globals);
        goto CPyL309;
    }
    PyObject *cpy_r_r208[2] = {cpy_r_r204, cpy_r_stderr};
    cpy_r_r209 = (PyObject **)&cpy_r_r208;
    cpy_r_r210 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r211 = _PyObject_Vectorcall(cpy_r_r207, cpy_r_r209, 1, cpy_r_r210);
    CPy_DECREF(cpy_r_r207);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 258, CPyStatic_config_parser___globals);
        goto CPyL309;
    } else
        goto CPyL310;
CPyL139: ;
    CPy_DECREF(cpy_r_r204);
    goto CPyL150;
CPyL140: ;
    cpy_r_r212 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r213 = PyObject_GetItem(cpy_r_parser, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 260, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_section = cpy_r_r213;
    cpy_r_r214 = CPyStatics[1507]; /* ': [mypy]: ' */
    cpy_r_r215 = CPyStr_Build(2, cpy_r_file_read, cpy_r_r214);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 261, CPyStatic_config_parser___globals);
        goto CPyL311;
    }
    cpy_r_prefix = cpy_r_r215;
    cpy_r_r216 = CPyDef_config_parser___parse_section(cpy_r_prefix, cpy_r_options, cpy_r_set_strict_flags, cpy_r_section, cpy_r_config_types, cpy_r_stderr);
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_section);
    if (unlikely(cpy_r_r216.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 262, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    cpy_r_r217 = cpy_r_r216.f0;
    CPy_INCREF(cpy_r_r217);
    cpy_r_updates = cpy_r_r217;
    cpy_r_r218 = cpy_r_r216.f1;
    CPy_INCREF(cpy_r_r218);
    CPy_DECREF(cpy_r_r216.f0);
    CPy_DECREF(cpy_r_r216.f1);
    cpy_r_report_dirs = cpy_r_r218;
    cpy_r_r219 = 0;
    cpy_r_r220 = PyDict_Size(cpy_r_updates);
    cpy_r_r221 = cpy_r_r220 << 1;
    cpy_r_r222 = CPyDict_GetItemsIter(cpy_r_updates);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 265, CPyStatic_config_parser___globals);
        goto CPyL312;
    }
CPyL144: ;
    cpy_r_r223 = CPyDict_NextItem(cpy_r_r222, cpy_r_r219);
    cpy_r_r224 = cpy_r_r223.f1;
    cpy_r_r219 = cpy_r_r224;
    cpy_r_r225 = cpy_r_r223.f0;
    if (!cpy_r_r225) goto CPyL313;
    cpy_r_r226 = cpy_r_r223.f2;
    CPy_INCREF(cpy_r_r226);
    cpy_r_r227 = cpy_r_r223.f3;
    CPy_INCREF(cpy_r_r227);
    CPy_DECREF(cpy_r_r223.f2);
    CPy_DECREF(cpy_r_r223.f3);
    if (likely(PyUnicode_Check(cpy_r_r226)))
        cpy_r_r228 = cpy_r_r226;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 265, CPyStatic_config_parser___globals, "str", cpy_r_r226);
        goto CPyL314;
    }
    cpy_r_k = cpy_r_r228;
    cpy_r_v = cpy_r_r227;
    cpy_r_r229 = PyObject_SetAttr(cpy_r_options, cpy_r_k, cpy_r_v);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_v);
    cpy_r_r230 = cpy_r_r229 >= 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 266, CPyStatic_config_parser___globals);
        goto CPyL315;
    }
    cpy_r_r231 = CPyDict_CheckSize(cpy_r_updates, cpy_r_r221);
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 265, CPyStatic_config_parser___globals);
        goto CPyL315;
    } else
        goto CPyL144;
CPyL148: ;
    cpy_r_r232 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r232)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 265, CPyStatic_config_parser___globals);
        goto CPyL316;
    }
    cpy_r_r233 = ((mypy___options___OptionsObject *)cpy_r_options)->_report_dirs;
    CPy_INCREF(cpy_r_r233);
    cpy_r_r234 = CPyDict_Update(cpy_r_r233, cpy_r_report_dirs);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_report_dirs);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 267, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
CPyL150: ;
    cpy_r_r236 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r237[1] = {cpy_r_parser};
    cpy_r_r238 = (PyObject **)&cpy_r_r237;
    cpy_r_r239 = PyObject_VectorcallMethod(cpy_r_r236, cpy_r_r238, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 269, CPyStatic_config_parser___globals);
        goto CPyL305;
    }
    CPy_DECREF(cpy_r_parser);
    cpy_r_r240 = PyObject_GetIter(cpy_r_r239);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 269, CPyStatic_config_parser___globals);
        goto CPyL317;
    }
CPyL152: ;
    cpy_r_r241 = PyIter_Next(cpy_r_r240);
    if (cpy_r_r241 == NULL) goto CPyL318;
    PyObject *__tmp1674;
    if (unlikely(!(PyTuple_Check(cpy_r_r241) && PyTuple_GET_SIZE(cpy_r_r241) == 2))) {
        __tmp1674 = NULL;
        goto __LL1675;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r241, 0))))
        __tmp1674 = PyTuple_GET_ITEM(cpy_r_r241, 0);
    else {
        __tmp1674 = NULL;
    }
    if (__tmp1674 == NULL) goto __LL1675;
    __tmp1674 = PyTuple_GET_ITEM(cpy_r_r241, 1);
    if (__tmp1674 == NULL) goto __LL1675;
    __tmp1674 = cpy_r_r241;
__LL1675: ;
    if (unlikely(__tmp1674 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_r241); cpy_r_r242 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1676 = PyTuple_GET_ITEM(cpy_r_r241, 0);
        CPy_INCREF(__tmp1676);
        PyObject *__tmp1677;
        if (likely(PyUnicode_Check(__tmp1676)))
            __tmp1677 = __tmp1676;
        else {
            CPy_TypeError("str", __tmp1676); 
            __tmp1677 = NULL;
        }
        cpy_r_r242.f0 = __tmp1677;
        PyObject *__tmp1678 = PyTuple_GET_ITEM(cpy_r_r241, 1);
        CPy_INCREF(__tmp1678);
        PyObject *__tmp1679;
        __tmp1679 = __tmp1678;
        cpy_r_r242.f1 = __tmp1679;
    }
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r242.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 269, CPyStatic_config_parser___globals);
        goto CPyL319;
    }
    cpy_r_r243 = cpy_r_r242.f0;
    CPy_INCREF(cpy_r_r243);
    cpy_r_name = cpy_r_r243;
    cpy_r_r244 = cpy_r_r242.f1;
    CPy_INCREF(cpy_r_r244);
    CPy_DECREF(cpy_r_r242.f0);
    CPy_DECREF(cpy_r_r242.f1);
    cpy_r_section = cpy_r_r244;
    cpy_r_r245 = CPyStatics[1508]; /* 'mypy-' */
    cpy_r_r246 = CPyStr_Startswith(cpy_r_name, cpy_r_r245);
    if (!cpy_r_r246) goto CPyL320;
    cpy_r_r247 = CPyDef_config_parser___get_prefix(cpy_r_file_read, cpy_r_name);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 271, CPyStatic_config_parser___globals);
        goto CPyL321;
    }
    cpy_r_prefix = cpy_r_r247;
    cpy_r_r248 = CPyDef_config_parser___parse_section(cpy_r_prefix, cpy_r_options, cpy_r_set_strict_flags, cpy_r_section, cpy_r_config_types, cpy_r_stderr);
    CPy_DECREF(cpy_r_section);
    if (unlikely(cpy_r_r248.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 272, CPyStatic_config_parser___globals);
        goto CPyL322;
    }
    cpy_r_r249 = cpy_r_r248.f0;
    CPy_INCREF(cpy_r_r249);
    cpy_r_updates = cpy_r_r249;
    cpy_r_r250 = cpy_r_r248.f1;
    CPy_INCREF(cpy_r_r250);
    CPy_DECREF(cpy_r_r248.f0);
    CPy_DECREF(cpy_r_r248.f1);
    cpy_r_report_dirs = cpy_r_r250;
    cpy_r_r251 = PyDict_Size(cpy_r_report_dirs);
    cpy_r_r252 = cpy_r_r251 << 1;
    cpy_r_r253 = cpy_r_r252 != 0;
    if (!cpy_r_r253) goto CPyL323;
    cpy_r_r254 = CPyStatics[71]; /* ', ' */
    cpy_r_r255 = CPyModule_builtins;
    cpy_r_r256 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r257 = CPyObject_GetAttr(cpy_r_r255, cpy_r_r256);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL324;
    }
    PyObject *cpy_r_r258[1] = {cpy_r_report_dirs};
    cpy_r_r259 = (PyObject **)&cpy_r_r258;
    cpy_r_r260 = _PyObject_Vectorcall(cpy_r_r257, cpy_r_r259, 1, 0);
    CPy_DECREF(cpy_r_r257);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL324;
    }
    CPy_DECREF(cpy_r_report_dirs);
    if (likely(PyList_Check(cpy_r_r260)))
        cpy_r_r261 = cpy_r_r260;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals, "list", cpy_r_r260);
        goto CPyL325;
    }
    cpy_r_r262 = (CPyPtr)&((PyVarObject *)cpy_r_r261)->ob_size;
    cpy_r_r263 = *(int64_t *)cpy_r_r262;
    cpy_r_r264 = PyList_New(cpy_r_r263);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL326;
    }
    cpy_r_r265 = 0;
CPyL163: ;
    cpy_r_r266 = (CPyPtr)&((PyVarObject *)cpy_r_r261)->ob_size;
    cpy_r_r267 = *(int64_t *)cpy_r_r266;
    cpy_r_r268 = cpy_r_r267 << 1;
    cpy_r_r269 = (Py_ssize_t)cpy_r_r265 < (Py_ssize_t)cpy_r_r268;
    if (!cpy_r_r269) goto CPyL327;
    cpy_r_r270 = CPyList_GetItemUnsafe(cpy_r_r261, cpy_r_r265);
    if (likely(PyUnicode_Check(cpy_r_r270)))
        cpy_r_r271 = cpy_r_r270;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals, "str", cpy_r_r270);
        goto CPyL328;
    }
    cpy_r_s = cpy_r_r271;
    cpy_r_r272 = CPyStatics[1509]; /* '_report' */
    cpy_r_r273 = PyUnicode_Concat(cpy_r_s, cpy_r_r272);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL328;
    }
    cpy_r_r274 = CPyList_SetItemUnsafe(cpy_r_r264, cpy_r_r265, cpy_r_r273);
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL328;
    }
    cpy_r_r275 = cpy_r_r265 + 2;
    cpy_r_r265 = cpy_r_r275;
    goto CPyL163;
CPyL168: ;
    cpy_r_r276 = PyUnicode_Join(cpy_r_r254, cpy_r_r264);
    CPy_DECREF(cpy_r_r264);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 278, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r277 = CPyStatics[1510]; /* 'Per-module sections should not specify reports (' */
    cpy_r_r278 = CPyStatics[72]; /* ')' */
    cpy_r_r279 = CPyStr_Build(4, cpy_r_prefix, cpy_r_r277, cpy_r_r276, cpy_r_r278);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 277, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r280 = CPyModule_builtins;
    cpy_r_r281 = CPyStatics[190]; /* 'print' */
    cpy_r_r282 = CPyObject_GetAttr(cpy_r_r280, cpy_r_r281);
    if (unlikely(cpy_r_r282 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 276, CPyStatic_config_parser___globals);
        goto CPyL329;
    }
    PyObject *cpy_r_r283[2] = {cpy_r_r279, cpy_r_stderr};
    cpy_r_r284 = (PyObject **)&cpy_r_r283;
    cpy_r_r285 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r286 = _PyObject_Vectorcall(cpy_r_r282, cpy_r_r284, 1, cpy_r_r285);
    CPy_DECREF(cpy_r_r282);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 276, CPyStatic_config_parser___globals);
        goto CPyL329;
    } else
        goto CPyL330;
CPyL172: ;
    CPy_DECREF(cpy_r_r279);
CPyL173: ;
    cpy_r_r287 = PySet_New(cpy_r_updates);
    if (unlikely(cpy_r_r287 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 281, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r288 = CPyStatic_mypy___options___PER_MODULE_OPTIONS;
    if (unlikely(cpy_r_r288 == NULL)) {
        goto CPyL331;
    } else
        goto CPyL177;
CPyL175: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PER_MODULE_OPTIONS\" was not set");
    cpy_r_r289 = 0;
    if (unlikely(!cpy_r_r289)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 281, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL177: ;
    cpy_r_r290 = PyNumber_Subtract(cpy_r_r287, cpy_r_r288);
    CPy_DECREF(cpy_r_r287);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 281, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    if (likely(PySet_Check(cpy_r_r290)))
        cpy_r_r291 = cpy_r_r290;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 281, CPyStatic_config_parser___globals, "set", cpy_r_r290);
        goto CPyL325;
    }
    cpy_r_r292 = PyObject_IsTrue(cpy_r_r291);
    CPy_DECREF(cpy_r_r291);
    cpy_r_r293 = cpy_r_r292 >= 0;
    if (unlikely(!cpy_r_r293)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 281, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r294 = cpy_r_r292;
    if (!cpy_r_r294) goto CPyL207;
    cpy_r_r295 = CPyStatics[71]; /* ', ' */
    cpy_r_r296 = PySet_New(cpy_r_updates);
    if (unlikely(cpy_r_r296 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r297 = CPyStatic_mypy___options___PER_MODULE_OPTIONS;
    if (unlikely(cpy_r_r297 == NULL)) {
        goto CPyL332;
    } else
        goto CPyL185;
CPyL183: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PER_MODULE_OPTIONS\" was not set");
    cpy_r_r298 = 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL185: ;
    cpy_r_r299 = PyNumber_Subtract(cpy_r_r296, cpy_r_r297);
    CPy_DECREF(cpy_r_r296);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    if (likely(PySet_Check(cpy_r_r299)))
        cpy_r_r300 = cpy_r_r299;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals, "set", cpy_r_r299);
        goto CPyL325;
    }
    cpy_r_r301 = CPyModule_builtins;
    cpy_r_r302 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r303 = CPyObject_GetAttr(cpy_r_r301, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL333;
    }
    PyObject *cpy_r_r304[1] = {cpy_r_r300};
    cpy_r_r305 = (PyObject **)&cpy_r_r304;
    cpy_r_r306 = _PyObject_Vectorcall(cpy_r_r303, cpy_r_r305, 1, 0);
    CPy_DECREF(cpy_r_r303);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL333;
    }
    CPy_DECREF(cpy_r_r300);
    if (likely(PyList_Check(cpy_r_r306)))
        cpy_r_r307 = cpy_r_r306;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals, "list", cpy_r_r306);
        goto CPyL325;
    }
    cpy_r_r308 = PyUnicode_Join(cpy_r_r295, cpy_r_r307);
    CPy_DECREF(cpy_r_r307);
    if (unlikely(cpy_r_r308 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 284, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r309 = CPyStatics[1511]; /* ('Per-module sections should only specify per-module '
                                      'flags (') */
    cpy_r_r310 = CPyStatics[72]; /* ')' */
    cpy_r_r311 = CPyStr_Build(4, cpy_r_prefix, cpy_r_r309, cpy_r_r308, cpy_r_r310);
    CPy_DECREF(cpy_r_r308);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 283, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r312 = CPyModule_builtins;
    cpy_r_r313 = CPyStatics[190]; /* 'print' */
    cpy_r_r314 = CPyObject_GetAttr(cpy_r_r312, cpy_r_r313);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 282, CPyStatic_config_parser___globals);
        goto CPyL334;
    }
    PyObject *cpy_r_r315[2] = {cpy_r_r311, cpy_r_stderr};
    cpy_r_r316 = (PyObject **)&cpy_r_r315;
    cpy_r_r317 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r318 = _PyObject_Vectorcall(cpy_r_r314, cpy_r_r316, 1, cpy_r_r317);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 282, CPyStatic_config_parser___globals);
        goto CPyL334;
    } else
        goto CPyL335;
CPyL194: ;
    CPy_DECREF(cpy_r_r311);
    cpy_r_r319 = PyDict_New();
    if (unlikely(cpy_r_r319 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL325;
    }
    cpy_r_r320 = 0;
    cpy_r_r321 = PyDict_Size(cpy_r_updates);
    cpy_r_r322 = cpy_r_r321 << 1;
    cpy_r_r323 = CPyDict_GetItemsIter(cpy_r_updates);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL336;
    }
CPyL196: ;
    cpy_r_r324 = CPyDict_NextItem(cpy_r_r323, cpy_r_r320);
    cpy_r_r325 = cpy_r_r324.f1;
    cpy_r_r320 = cpy_r_r325;
    cpy_r_r326 = cpy_r_r324.f0;
    if (!cpy_r_r326) goto CPyL337;
    cpy_r_r327 = cpy_r_r324.f2;
    CPy_INCREF(cpy_r_r327);
    cpy_r_r328 = cpy_r_r324.f3;
    CPy_INCREF(cpy_r_r328);
    CPy_DECREF(cpy_r_r324.f2);
    CPy_DECREF(cpy_r_r324.f3);
    if (likely(PyUnicode_Check(cpy_r_r327)))
        cpy_r_r329 = cpy_r_r327;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals, "str", cpy_r_r327);
        goto CPyL338;
    }
    cpy_r_k_2 = cpy_r_r329;
    cpy_r_v_2 = cpy_r_r328;
    cpy_r_r330 = CPyStatic_mypy___options___PER_MODULE_OPTIONS;
    if (unlikely(cpy_r_r330 == NULL)) {
        goto CPyL339;
    } else
        goto CPyL201;
CPyL199: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"PER_MODULE_OPTIONS\" was not set");
    cpy_r_r331 = 0;
    if (unlikely(!cpy_r_r331)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    CPy_Unreachable();
CPyL201: ;
    cpy_r_r332 = PySet_Contains(cpy_r_r330, cpy_r_k_2);
    cpy_r_r333 = cpy_r_r332 >= 0;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL340;
    }
    cpy_r_r334 = cpy_r_r332;
    if (!cpy_r_r334) goto CPyL341;
    cpy_r_r335 = CPyDict_SetItem(cpy_r_r319, cpy_r_k_2, cpy_r_v_2);
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_v_2);
    cpy_r_r336 = cpy_r_r335 >= 0;
    if (unlikely(!cpy_r_r336)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL342;
    }
CPyL204: ;
    cpy_r_r337 = CPyDict_CheckSize(cpy_r_updates, cpy_r_r322);
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL342;
    } else
        goto CPyL196;
CPyL205: ;
    cpy_r_r338 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 287, CPyStatic_config_parser___globals);
        goto CPyL343;
    }
    cpy_r_updates = cpy_r_r319;
CPyL207: ;
    cpy_r_r339 = CPyStr_GetSlice(cpy_r_name, 10, 9223372036854775806LL);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 289, CPyStatic_config_parser___globals);
        goto CPyL344;
    }
    if (likely(PyUnicode_Check(cpy_r_r339)))
        cpy_r_r340 = cpy_r_r339;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 289, CPyStatic_config_parser___globals, "str", cpy_r_r339);
        goto CPyL344;
    }
    cpy_r_globs = cpy_r_r340;
    cpy_r_r341 = CPyStatics[242]; /* ',' */
    cpy_r_r342 = PyUnicode_Split(cpy_r_globs, cpy_r_r341, -1);
    CPy_DECREF(cpy_r_globs);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 290, CPyStatic_config_parser___globals);
        goto CPyL344;
    }
    cpy_r_r343 = 0;
CPyL211: ;
    cpy_r_r344 = (CPyPtr)&((PyVarObject *)cpy_r_r342)->ob_size;
    cpy_r_r345 = *(int64_t *)cpy_r_r344;
    cpy_r_r346 = cpy_r_r345 << 1;
    cpy_r_r347 = (Py_ssize_t)cpy_r_r343 < (Py_ssize_t)cpy_r_r346;
    if (!cpy_r_r347) goto CPyL345;
    cpy_r_r348 = CPyList_GetItemUnsafe(cpy_r_r342, cpy_r_r343);
    if (likely(PyUnicode_Check(cpy_r_r348)))
        cpy_r_r349 = cpy_r_r348;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 290, CPyStatic_config_parser___globals, "str", cpy_r_r348);
        goto CPyL346;
    }
    cpy_r_glob = cpy_r_r349;
    cpy_r_r350 = CPyModule_os;
    cpy_r_r351 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r352 = CPyObject_GetAttr(cpy_r_r350, cpy_r_r351);
    if (unlikely(cpy_r_r352 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 292, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    if (likely(PyUnicode_Check(cpy_r_r352)))
        cpy_r_r353 = cpy_r_r352;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 292, CPyStatic_config_parser___globals, "str", cpy_r_r352);
        goto CPyL347;
    }
    cpy_r_r354 = CPyStatics[224]; /* '.' */
    cpy_r_r355 = PyUnicode_Replace(cpy_r_glob, cpy_r_r353, cpy_r_r354, -1);
    CPy_DECREF(cpy_r_glob);
    CPy_DECREF(cpy_r_r353);
    if (unlikely(cpy_r_r355 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 292, CPyStatic_config_parser___globals);
        goto CPyL346;
    }
    cpy_r_glob = cpy_r_r355;
    cpy_r_r356 = CPyModule_os;
    cpy_r_r357 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r358 = CPyObject_GetAttr(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 293, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    if (PyUnicode_Check(cpy_r_r358))
        cpy_r_r359 = cpy_r_r358;
    else {
        cpy_r_r359 = NULL;
    }
    if (cpy_r_r359 != NULL) goto __LL1680;
    if (cpy_r_r358 == Py_None)
        cpy_r_r359 = cpy_r_r358;
    else {
        cpy_r_r359 = NULL;
    }
    if (cpy_r_r359 != NULL) goto __LL1680;
    CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 293, CPyStatic_config_parser___globals, "str or None", cpy_r_r358);
    goto CPyL347;
__LL1680: ;
    cpy_r_r360 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r361 = cpy_r_r359 != cpy_r_r360;
    if (!cpy_r_r361) goto CPyL348;
    if (likely(cpy_r_r359 != Py_None))
        cpy_r_r362 = cpy_r_r359;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 293, CPyStatic_config_parser___globals, "str", cpy_r_r359);
        goto CPyL347;
    }
    cpy_r_r363 = CPyStr_IsTrue(cpy_r_r362);
    CPy_DECREF(cpy_r_r362);
    if (!cpy_r_r363) goto CPyL225;
    cpy_r_r364 = CPyModule_os;
    cpy_r_r365 = CPyStatics[1513]; /* 'altsep' */
    cpy_r_r366 = CPyObject_GetAttr(cpy_r_r364, cpy_r_r365);
    if (unlikely(cpy_r_r366 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 294, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    if (likely(PyUnicode_Check(cpy_r_r366)))
        cpy_r_r367 = cpy_r_r366;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 294, CPyStatic_config_parser___globals, "str", cpy_r_r366);
        goto CPyL347;
    }
    cpy_r_r368 = CPyStatics[224]; /* '.' */
    cpy_r_r369 = PyUnicode_Replace(cpy_r_glob, cpy_r_r367, cpy_r_r368, -1);
    CPy_DECREF(cpy_r_glob);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r369 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 294, CPyStatic_config_parser___globals);
        goto CPyL346;
    }
    cpy_r_glob = cpy_r_r369;
CPyL225: ;
    cpy_r_r370 = 0;
    cpy_r_r371 = CPyStatics[1514]; /* '?[]!' */
    cpy_r_r372 = 0;
CPyL226: ;
    cpy_r_r373 = CPyStr_Size_size_t(cpy_r_r371);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 296, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    cpy_r_r375 = cpy_r_r373 << 1;
    cpy_r_r376 = (Py_ssize_t)cpy_r_r372 < (Py_ssize_t)cpy_r_r375;
    if (!cpy_r_r376) goto CPyL233;
    cpy_r_r377 = CPyStr_GetItem(cpy_r_r371, cpy_r_r372);
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 296, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    cpy_r_c = cpy_r_r377;
    cpy_r_r378 = PySequence_Contains(cpy_r_glob, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    cpy_r_r379 = cpy_r_r378 >= 0;
    if (unlikely(!cpy_r_r379)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 296, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    cpy_r_r380 = cpy_r_r378;
    if (!cpy_r_r380) goto CPyL232;
    cpy_r_r370 = 1;
    goto CPyL233;
CPyL232: ;
    cpy_r_r381 = cpy_r_r372 + 2;
    cpy_r_r372 = cpy_r_r381;
    goto CPyL226;
CPyL233: ;
    if (cpy_r_r370) goto CPyL349;
    cpy_r_r382 = 0;
    cpy_r_r383 = CPyStatics[224]; /* '.' */
    cpy_r_r384 = PyUnicode_Split(cpy_r_glob, cpy_r_r383, -1);
    if (unlikely(cpy_r_r384 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 297, CPyStatic_config_parser___globals);
        goto CPyL347;
    }
    cpy_r_r385 = 0;
CPyL236: ;
    cpy_r_r386 = (CPyPtr)&((PyVarObject *)cpy_r_r384)->ob_size;
    cpy_r_r387 = *(int64_t *)cpy_r_r386;
    cpy_r_r388 = cpy_r_r387 << 1;
    cpy_r_r389 = (Py_ssize_t)cpy_r_r385 < (Py_ssize_t)cpy_r_r388;
    if (!cpy_r_r389) goto CPyL350;
    cpy_r_r390 = CPyList_GetItemUnsafe(cpy_r_r384, cpy_r_r385);
    if (likely(PyUnicode_Check(cpy_r_r390)))
        cpy_r_r391 = cpy_r_r390;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_config_file", 296, CPyStatic_config_parser___globals, "str", cpy_r_r390);
        goto CPyL351;
    }
    cpy_r_x = cpy_r_r391;
    cpy_r_r392 = CPyStatics[282]; /* '*' */
    cpy_r_r393 = PySequence_Contains(cpy_r_x, cpy_r_r392);
    cpy_r_r394 = cpy_r_r393 >= 0;
    if (unlikely(!cpy_r_r394)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 297, CPyStatic_config_parser___globals);
        goto CPyL352;
    }
    cpy_r_r395 = cpy_r_r393;
    if (cpy_r_r395) {
        goto CPyL241;
    } else
        goto CPyL353;
CPyL240: ;
    cpy_r_r396 = cpy_r_r395;
    goto CPyL245;
CPyL241: ;
    cpy_r_r397 = CPyStatics[282]; /* '*' */
    cpy_r_r398 = PyUnicode_Compare(cpy_r_x, cpy_r_r397);
    CPy_DECREF(cpy_r_x);
    cpy_r_r399 = cpy_r_r398 == -1;
    if (!cpy_r_r399) goto CPyL244;
    cpy_r_r400 = PyErr_Occurred();
    cpy_r_r401 = cpy_r_r400 != NULL;
    if (!cpy_r_r401) goto CPyL244;
    cpy_r_r402 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r402)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 297, CPyStatic_config_parser___globals);
        goto CPyL351;
    }
CPyL244: ;
    cpy_r_r403 = cpy_r_r398 != 0;
    cpy_r_r396 = cpy_r_r403;
CPyL245: ;
    if (cpy_r_r396) {
        goto CPyL354;
    } else
        goto CPyL247;
CPyL246: ;
    cpy_r_r382 = 1;
    goto CPyL248;
CPyL247: ;
    cpy_r_r404 = cpy_r_r385 + 2;
    cpy_r_r385 = cpy_r_r404;
    goto CPyL236;
CPyL248: ;
    if (cpy_r_r382) {
        goto CPyL349;
    } else
        goto CPyL253;
CPyL249: ;
    cpy_r_r405 = CPyStatics[1515]; /* ('Patterns must be fully-qualified module names, '
                                      "optionally with '*' in some components (e.g "
                                      'spam.*.eggs.*)') */
    cpy_r_r406 = CPyStr_Build(2, cpy_r_prefix, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 300, CPyStatic_config_parser___globals);
        goto CPyL346;
    }
    cpy_r_r407 = CPyModule_builtins;
    cpy_r_r408 = CPyStatics[190]; /* 'print' */
    cpy_r_r409 = CPyObject_GetAttr(cpy_r_r407, cpy_r_r408);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 299, CPyStatic_config_parser___globals);
        goto CPyL355;
    }
    PyObject *cpy_r_r410[2] = {cpy_r_r406, cpy_r_stderr};
    cpy_r_r411 = (PyObject **)&cpy_r_r410;
    cpy_r_r412 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r413 = _PyObject_Vectorcall(cpy_r_r409, cpy_r_r411, 1, cpy_r_r412);
    CPy_DECREF(cpy_r_r409);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 299, CPyStatic_config_parser___globals);
        goto CPyL355;
    } else
        goto CPyL356;
CPyL252: ;
    CPy_DECREF(cpy_r_r406);
    goto CPyL254;
CPyL253: ;
    cpy_r_r414 = ((mypy___options___OptionsObject *)cpy_r_options)->_per_module_options;
    CPy_INCREF(cpy_r_r414);
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r414, cpy_r_glob, cpy_r_updates);
    CPy_DECREF(cpy_r_r414);
    CPy_DECREF(cpy_r_glob);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 305, CPyStatic_config_parser___globals);
        goto CPyL346;
    }
CPyL254: ;
    cpy_r_r417 = cpy_r_r343 + 2;
    cpy_r_r343 = cpy_r_r417;
    goto CPyL211;
CPyL255: ;
    cpy_r_r418 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r418)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 269, CPyStatic_config_parser___globals);
        goto CPyL257;
    }
    return 1;
CPyL257: ;
    cpy_r_r419 = 2;
    return cpy_r_r419;
CPyL258: ;
    CPy_INCREF(cpy_r_stdout);
    goto CPyL2;
CPyL259: ;
    CPy_INCREF(cpy_r_stderr);
    goto CPyL4;
CPyL260: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL9;
CPyL261: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    goto CPyL257;
CPyL262: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    goto CPyL257;
CPyL263: ;
    CPy_DECREF(cpy_r_stderr);
    goto CPyL16;
CPyL264: ;
    CPy_XDecRef(cpy_r_toml_data);
    goto CPyL257;
CPyL265: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_r32);
    goto CPyL24;
CPyL266: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_r32);
    goto CPyL257;
CPyL267: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    goto CPyL257;
CPyL268: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    goto CPyL115;
CPyL269: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    goto CPyL257;
CPyL270: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    goto CPyL257;
CPyL271: ;
    CPy_DECREF(cpy_r_config_file);
    goto CPyL114;
CPyL272: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r70);
    goto CPyL93;
CPyL273: ;
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL93;
CPyL274: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL53;
CPyL275: ;
    CPy_XDECREF(cpy_r_toml_data);
    goto CPyL52;
CPyL276: ;
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    goto CPyL59;
CPyL277: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL57;
CPyL278: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r72);
    goto CPyL60;
CPyL279: ;
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r72);
    goto CPyL66;
CPyL280: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL69;
CPyL281: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL65;
CPyL282: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    CPy_DECREF(cpy_r_config_file);
    CPy_XDECREF(cpy_r_r99.f0);
    CPy_XDECREF(cpy_r_r99.f1);
    CPy_XDECREF(cpy_r_r99.f2);
    goto CPyL68;
CPyL283: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    CPy_DECREF(cpy_r_config_file);
    goto CPyL72;
CPyL284: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL75;
CPyL285: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    CPy_DECREF(cpy_r_config_file);
    goto CPyL76;
CPyL286: ;
    CPy_XDECREF(cpy_r_toml_data);
    goto CPyL79;
CPyL287: ;
    CPy_DECREF(cpy_r_toml_data);
    goto CPyL83;
CPyL288: ;
    CPy_DecRef(cpy_r_parser);
    goto CPyL85;
CPyL289: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    goto CPyL86;
CPyL290: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL89;
CPyL291: ;
    CPy_DecRef(cpy_r_parser);
    goto CPyL90;
CPyL292: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    goto CPyL91;
CPyL293: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    goto CPyL104;
CPyL294: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_r132);
    goto CPyL104;
CPyL295: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    CPy_DECREF(cpy_r_config_file);
    goto CPyL101;
CPyL296: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    goto CPyL104;
CPyL297: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_r143);
    goto CPyL104;
CPyL298: ;
    CPy_DECREF(cpy_r_r150);
    goto CPyL100;
CPyL299: ;
    CPy_DECREF(cpy_r_r129.f0);
    CPy_DECREF(cpy_r_r129.f1);
    CPy_DECREF(cpy_r_r129.f2);
    goto CPyL102;
CPyL300: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    goto CPyL107;
CPyL301: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_XDecRef(cpy_r_toml_data);
    CPy_DecRef(cpy_r_config_files);
    CPy_DecRef(cpy_r_config_parser);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    goto CPyL257;
CPyL302: ;
    CPy_XDECREF(cpy_r_toml_data);
    CPy_DECREF(cpy_r_config_files);
    CPy_DECREF(cpy_r_config_parser);
    goto CPyL113;
CPyL303: ;
    CPy_DECREF(cpy_r_config_file);
    CPy_DECREF(cpy_r_parser);
    CPy_DECREF(cpy_r_config_types);
    goto CPyL114;
CPyL304: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_file);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    goto CPyL257;
CPyL305: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    goto CPyL257;
CPyL306: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_r172);
    goto CPyL257;
CPyL307: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_r181);
    goto CPyL257;
CPyL308: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    goto CPyL132;
CPyL309: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_r204);
    goto CPyL257;
CPyL310: ;
    CPy_DECREF(cpy_r_r211);
    goto CPyL139;
CPyL311: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_section);
    goto CPyL257;
CPyL312: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_report_dirs);
    goto CPyL257;
CPyL313: ;
    CPy_DECREF(cpy_r_updates);
    CPy_DECREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r223.f2);
    CPy_DECREF(cpy_r_r223.f3);
    goto CPyL148;
CPyL314: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r227);
    goto CPyL257;
CPyL315: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r222);
    goto CPyL257;
CPyL316: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_report_dirs);
    goto CPyL257;
CPyL317: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    goto CPyL257;
CPyL318: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_config_types);
    CPy_DECREF(cpy_r_file_read);
    CPy_DECREF(cpy_r_r240);
    goto CPyL255;
CPyL319: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_r240);
    goto CPyL257;
CPyL320: ;
    CPy_DECREF(cpy_r_section);
    CPy_DECREF(cpy_r_name);
    goto CPyL152;
CPyL321: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_section);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    goto CPyL257;
CPyL322: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    goto CPyL257;
CPyL323: ;
    CPy_DECREF(cpy_r_report_dirs);
    goto CPyL173;
CPyL324: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    goto CPyL257;
CPyL325: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    goto CPyL257;
CPyL326: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r261);
    goto CPyL257;
CPyL327: ;
    CPy_DECREF(cpy_r_r261);
    goto CPyL168;
CPyL328: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r261);
    CPy_DecRef(cpy_r_r264);
    goto CPyL257;
CPyL329: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r279);
    goto CPyL257;
CPyL330: ;
    CPy_DECREF(cpy_r_r286);
    goto CPyL172;
CPyL331: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r287);
    goto CPyL175;
CPyL332: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r296);
    goto CPyL183;
CPyL333: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r300);
    goto CPyL257;
CPyL334: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r311);
    goto CPyL257;
CPyL335: ;
    CPy_DECREF(cpy_r_r318);
    goto CPyL194;
CPyL336: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    goto CPyL257;
CPyL337: ;
    CPy_DECREF(cpy_r_updates);
    CPy_DECREF(cpy_r_r323);
    CPy_DECREF(cpy_r_r324.f2);
    CPy_DECREF(cpy_r_r324.f3);
    goto CPyL205;
CPyL338: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r323);
    CPy_DecRef(cpy_r_r328);
    goto CPyL257;
CPyL339: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r323);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v_2);
    goto CPyL199;
CPyL340: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r323);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v_2);
    goto CPyL257;
CPyL341: ;
    CPy_DECREF(cpy_r_k_2);
    CPy_DECREF(cpy_r_v_2);
    goto CPyL204;
CPyL342: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    CPy_DecRef(cpy_r_r323);
    goto CPyL257;
CPyL343: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r319);
    goto CPyL257;
CPyL344: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    goto CPyL257;
CPyL345: ;
    CPy_DECREF(cpy_r_prefix);
    CPy_DECREF(cpy_r_updates);
    CPy_DECREF(cpy_r_r342);
    goto CPyL152;
CPyL346: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r342);
    goto CPyL257;
CPyL347: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_glob);
    goto CPyL257;
CPyL348: ;
    CPy_DECREF(cpy_r_r359);
    goto CPyL225;
CPyL349: ;
    CPy_DECREF(cpy_r_glob);
    goto CPyL249;
CPyL350: ;
    CPy_DECREF(cpy_r_r384);
    goto CPyL248;
CPyL351: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_glob);
    CPy_DecRef(cpy_r_r384);
    goto CPyL257;
CPyL352: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_glob);
    CPy_DecRef(cpy_r_r384);
    CPy_DecRef(cpy_r_x);
    goto CPyL257;
CPyL353: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL240;
CPyL354: ;
    CPy_DECREF(cpy_r_r384);
    goto CPyL246;
CPyL355: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_config_types);
    CPy_DecRef(cpy_r_file_read);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_updates);
    CPy_DecRef(cpy_r_r240);
    CPy_DecRef(cpy_r_r342);
    CPy_DecRef(cpy_r_r406);
    goto CPyL257;
CPyL356: ;
    CPy_DECREF(cpy_r_r413);
    goto CPyL252;
}

PyObject *CPyPy_config_parser___parse_config_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"options", "set_strict_flags", "filename", "stdout", "stderr", 0};
    static CPyArg_Parser parser = {"OOO|OO:parse_config_file", kwlist, 0};
    PyObject *obj_options;
    PyObject *obj_set_strict_flags;
    PyObject *obj_filename;
    PyObject *obj_stdout = NULL;
    PyObject *obj_stderr = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_options, &obj_set_strict_flags, &obj_filename, &obj_stdout, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_set_strict_flags = obj_set_strict_flags;
    PyObject *arg_filename;
    if (PyUnicode_Check(obj_filename))
        arg_filename = obj_filename;
    else {
        arg_filename = NULL;
    }
    if (arg_filename != NULL) goto __LL1681;
    if (obj_filename == Py_None)
        arg_filename = obj_filename;
    else {
        arg_filename = NULL;
    }
    if (arg_filename != NULL) goto __LL1681;
    CPy_TypeError("str or None", obj_filename); 
    goto fail;
__LL1681: ;
    PyObject *arg_stdout;
    if (obj_stdout == NULL) {
        arg_stdout = NULL;
        goto __LL1682;
    }
    arg_stdout = obj_stdout;
    if (arg_stdout != NULL) goto __LL1682;
    if (obj_stdout == Py_None)
        arg_stdout = obj_stdout;
    else {
        arg_stdout = NULL;
    }
    if (arg_stdout != NULL) goto __LL1682;
    CPy_TypeError("object or None", obj_stdout); 
    goto fail;
__LL1682: ;
    PyObject *arg_stderr;
    if (obj_stderr == NULL) {
        arg_stderr = NULL;
        goto __LL1683;
    }
    arg_stderr = obj_stderr;
    if (arg_stderr != NULL) goto __LL1683;
    if (obj_stderr == Py_None)
        arg_stderr = obj_stderr;
    else {
        arg_stderr = NULL;
    }
    if (arg_stderr != NULL) goto __LL1683;
    CPy_TypeError("object or None", obj_stderr); 
    goto fail;
__LL1683: ;
    char retval = CPyDef_config_parser___parse_config_file(arg_options, arg_set_strict_flags, arg_filename, arg_stdout, arg_stderr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "parse_config_file", 201, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___get_prefix(PyObject *cpy_r_file_read, PyObject *cpy_r_name) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_module_name_str;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyDef_config_parser___is_toml(cpy_r_file_read);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 309, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    if (!cpy_r_r0) goto CPyL8;
    cpy_r_r1 = CPyStatics[1198]; /* '-' */
    cpy_r_r2 = CPyStatics[1198]; /* '-' */
    cpy_r_r3 = PyUnicode_Split(cpy_r_name, cpy_r_r2, -1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 310, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r4 = CPyList_GetSlice(cpy_r_r3, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 310, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "get_prefix", 310, CPyStatic_config_parser___globals, "list", cpy_r_r4);
        goto CPyL11;
    }
    cpy_r_r6 = PyUnicode_Join(cpy_r_r1, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 310, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_r7 = CPyStatics[1516]; /* 'module = "' */
    cpy_r_r8 = CPyStatics[178]; /* '"' */
    cpy_r_r9 = CPyStr_Build(3, cpy_r_r7, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 310, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    cpy_r_module_name_str = cpy_r_r9;
    goto CPyL9;
CPyL8: ;
    CPy_INCREF(cpy_r_name);
    cpy_r_module_name_str = cpy_r_name;
CPyL9: ;
    cpy_r_r10 = CPyStatics[1517]; /* ': [' */
    cpy_r_r11 = CPyStatics[1518]; /* ']: ' */
    cpy_r_r12 = CPyStr_Build(4, cpy_r_file_read, cpy_r_r10, cpy_r_module_name_str, cpy_r_r11);
    CPy_DECREF(cpy_r_module_name_str);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 314, CPyStatic_config_parser___globals);
        goto CPyL11;
    }
    return cpy_r_r12;
CPyL11: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
}

PyObject *CPyPy_config_parser___get_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"file_read", "name", 0};
    static CPyArg_Parser parser = {"OO:get_prefix", kwlist, 0};
    PyObject *obj_file_read;
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file_read, &obj_name)) {
        return NULL;
    }
    PyObject *arg_file_read;
    if (likely(PyUnicode_Check(obj_file_read)))
        arg_file_read = obj_file_read;
    else {
        CPy_TypeError("str", obj_file_read); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___get_prefix(arg_file_read, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "get_prefix", 308, CPyStatic_config_parser___globals);
    return NULL;
}

char CPyDef_config_parser___is_toml(PyObject *cpy_r_filename) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatics[1519]; /* 'lower' */
    PyObject *cpy_r_r1[1] = {cpy_r_filename};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "is_toml", 318, CPyStatic_config_parser___globals);
        goto CPyL3;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "is_toml", 318, CPyStatic_config_parser___globals, "str", cpy_r_r3);
        goto CPyL3;
    }
    cpy_r_r5 = CPyStatics[1520]; /* '.toml' */
    cpy_r_r6 = CPyStr_Endswith(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_config_parser___is_toml(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"filename", 0};
    static CPyArg_Parser parser = {"O:is_toml", kwlist, 0};
    PyObject *obj_filename;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_filename)) {
        return NULL;
    }
    PyObject *arg_filename;
    if (likely(PyUnicode_Check(obj_filename)))
        arg_filename = obj_filename;
    else {
        CPy_TypeError("str", obj_filename); 
        goto fail;
    }
    char retval = CPyDef_config_parser___is_toml(arg_filename);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "is_toml", 317, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___destructure_overrides(PyObject *cpy_r_toml_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_override;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_modules;
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
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyPtr cpy_r_r67;
    int64_t cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_module_overrides;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_old_config_name;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_new_key;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_new_value;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    cpy_r_r0 = CPyStatics[1521]; /* 'overrides' */
    cpy_r_r1 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_toml_data, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 353, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r3 = PySequence_Contains(cpy_r_r2, cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 353, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ^ 1;
    if (!cpy_r_r6) goto CPyL4;
    CPy_INCREF(cpy_r_toml_data);
    return cpy_r_toml_data;
CPyL4: ;
    cpy_r_r7 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_toml_data, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 356, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r9 = CPyStatics[1521]; /* 'overrides' */
    cpy_r_r10 = PyObject_GetItem(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 356, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r11 = (PyObject *)&PyList_Type;
    cpy_r_r12 = PyObject_IsInstance(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 356, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r14 = cpy_r_r12;
    if (cpy_r_r14) goto CPyL12;
    cpy_r_r15 = CPyStatics[1522]; /* ('tool.mypy.overrides sections must be an array. Please '
                                     'make sure you are using double brackets like so: '
                                     '[[tool.mypy.overrides]]') */
    cpy_r_r16 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError;
    PyObject *cpy_r_r17[1] = {cpy_r_r15};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 357, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_config_parser___ConfigTOMLValueError))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 357, CPyStatic_config_parser___globals, "mypy.config_parser.ConfigTOMLValueError", cpy_r_r19);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 357, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r21 = CPyDict_Copy(cpy_r_toml_data);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 362, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_result = cpy_r_r21;
    cpy_r_r22 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_result, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 363, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
    cpy_r_r24 = CPyStatics[1521]; /* 'overrides' */
    cpy_r_r25 = PyObject_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 363, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
    cpy_r_r26 = PyObject_GetIter(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 363, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
CPyL16: ;
    cpy_r_r27 = PyIter_Next(cpy_r_r26);
    if (cpy_r_r27 == NULL) goto CPyL86;
    cpy_r_override = cpy_r_r27;
    cpy_r_r28 = CPyStatics[408]; /* 'module' */
    cpy_r_r29 = PySequence_Contains(cpy_r_override, cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 364, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = cpy_r_r31 ^ 1;
    if (cpy_r_r32) {
        goto CPyL88;
    } else
        goto CPyL23;
CPyL19: ;
    cpy_r_r33 = CPyStatics[1523]; /* ('toml config file contains a [[tool.mypy.overrides]] '
                                     'section, but no module to override was specified.') */
    cpy_r_r34 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError;
    PyObject *cpy_r_r35[1] = {cpy_r_r33};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = _PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 365, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_config_parser___ConfigTOMLValueError))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 365, CPyStatic_config_parser___globals, "mypy.config_parser.ConfigTOMLValueError", cpy_r_r37);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 365, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r39 = CPyStatics[408]; /* 'module' */
    cpy_r_r40 = PyObject_GetItem(cpy_r_override, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 370, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r41 = (PyObject *)&PyUnicode_Type;
    cpy_r_r42 = PyObject_IsInstance(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 370, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL30;
    cpy_r_r45 = CPyStatics[408]; /* 'module' */
    cpy_r_r46 = PyObject_GetItem(cpy_r_override, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 371, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 371, CPyStatic_config_parser___globals, "str", cpy_r_r46);
        goto CPyL87;
    }
    cpy_r_r48 = PyList_New(1);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 371, CPyStatic_config_parser___globals);
        goto CPyL89;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    *(PyObject * *)cpy_r_r50 = cpy_r_r47;
    cpy_r_modules = cpy_r_r48;
    goto CPyL40;
CPyL30: ;
    cpy_r_r51 = CPyStatics[408]; /* 'module' */
    cpy_r_r52 = PyObject_GetItem(cpy_r_override, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 372, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r53 = (PyObject *)&PyList_Type;
    cpy_r_r54 = PyObject_IsInstance(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 372, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL90;
    cpy_r_r57 = CPyStatics[408]; /* 'module' */
    cpy_r_r58 = PyObject_GetItem(cpy_r_override, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 373, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 373, CPyStatic_config_parser___globals, "list", cpy_r_r58);
        goto CPyL87;
    }
    cpy_r_modules = cpy_r_r59;
    goto CPyL40;
CPyL36: ;
    cpy_r_r60 = CPyStatics[1524]; /* ('toml config file contains a [[tool.mypy.overrides]] '
                                     'section with a module value that is not a string or a '
                                     'list of strings') */
    cpy_r_r61 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError;
    PyObject *cpy_r_r62[1] = {cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = _PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 1, 0);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 375, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_config_parser___ConfigTOMLValueError))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 375, CPyStatic_config_parser___globals, "mypy.config_parser.ConfigTOMLValueError", cpy_r_r64);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 375, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r66 = 0;
CPyL41: ;
    cpy_r_r67 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r68 = *(int64_t *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 << 1;
    cpy_r_r70 = (Py_ssize_t)cpy_r_r66 < (Py_ssize_t)cpy_r_r69;
    if (!cpy_r_r70) goto CPyL91;
    cpy_r_r71 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r66);
    if (likely(PyUnicode_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 381, CPyStatic_config_parser___globals, "str", cpy_r_r71);
        goto CPyL92;
    }
    cpy_r_module = cpy_r_r72;
    cpy_r_r73 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r74[1] = {cpy_r_override};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r75, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 382, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_module_overrides = cpy_r_r76;
    cpy_r_r77 = CPyStatics[408]; /* 'module' */
    cpy_r_r78 = PyObject_DelItem(cpy_r_module_overrides, cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 383, CPyStatic_config_parser___globals);
        goto CPyL94;
    }
    cpy_r_r80 = CPyStatics[1508]; /* 'mypy-' */
    cpy_r_r81 = CPyStr_Build(2, cpy_r_r80, cpy_r_module);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 384, CPyStatic_config_parser___globals);
        goto CPyL94;
    }
    cpy_r_old_config_name = cpy_r_r81;
    cpy_r_r82 = PyDict_Contains(cpy_r_result, cpy_r_old_config_name);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 385, CPyStatic_config_parser___globals);
        goto CPyL95;
    }
    cpy_r_r84 = cpy_r_r82;
    cpy_r_r85 = cpy_r_r84 ^ 1;
    if (cpy_r_r85) {
        goto CPyL96;
    } else
        goto CPyL49;
CPyL48: ;
    cpy_r_r86 = CPyDict_SetItem(cpy_r_result, cpy_r_old_config_name, cpy_r_module_overrides);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_module_overrides);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 386, CPyStatic_config_parser___globals);
        goto CPyL92;
    } else
        goto CPyL79;
CPyL49: ;
    cpy_r_r88 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r89[1] = {cpy_r_module_overrides};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_VectorcallMethod(cpy_r_r88, cpy_r_r90, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_module_overrides);
    cpy_r_r92 = PyObject_GetIter(cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL97;
    }
CPyL51: ;
    cpy_r_r93 = PyIter_Next(cpy_r_r92);
    if (cpy_r_r93 == NULL) goto CPyL98;
    cpy_r_r94 = PyObject_GetIter(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL99;
    }
    cpy_r_r95 = PyIter_Next(cpy_r_r94);
    if (cpy_r_r95 == NULL) {
        goto CPyL100;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r96 = 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_new_key = cpy_r_r95;
    cpy_r_r97 = PyIter_Next(cpy_r_r94);
    if (cpy_r_r97 == NULL) {
        goto CPyL101;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_new_value = cpy_r_r97;
    cpy_r_r99 = PyIter_Next(cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (cpy_r_r99 == NULL) {
        goto CPyL62;
    } else
        goto CPyL102;
CPyL60: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r101 = CPyDict_GetItem(cpy_r_result, cpy_r_old_config_name);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 390, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r102 = PySequence_Contains(cpy_r_r101, cpy_r_new_key);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 390, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r104 = cpy_r_r102;
    if (!cpy_r_r104) goto CPyL76;
    cpy_r_r105 = CPyDict_GetItem(cpy_r_result, cpy_r_old_config_name);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 391, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r106 = PyObject_GetItem(cpy_r_r105, cpy_r_new_key);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 391, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r107 = PyObject_RichCompare(cpy_r_r106, cpy_r_new_value, 3);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 391, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r108 = PyObject_IsTrue(cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 391, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r110 = cpy_r_r108;
    if (cpy_r_r110) {
        goto CPyL104;
    } else
        goto CPyL76;
CPyL70: ;
    cpy_r_r111 = PyObject_Str(cpy_r_new_key);
    CPy_DECREF(cpy_r_new_key);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 394, CPyStatic_config_parser___globals);
        goto CPyL105;
    }
    cpy_r_r112 = CPyStatics[1525]; /* ('toml config file contains [[tool.mypy.overrides]] '
                                      "sections with conflicting values. Module '") */
    cpy_r_r113 = CPyStatics[1526]; /* "' has two different values for '" */
    cpy_r_r114 = CPyStatics[385]; /* "'" */
    cpy_r_r115 = CPyStr_Build(5, cpy_r_r112, cpy_r_module, cpy_r_r113, cpy_r_r111, cpy_r_r114);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 394, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    cpy_r_r116 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError;
    PyObject *cpy_r_r117[1] = {cpy_r_r115};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = _PyObject_Vectorcall(cpy_r_r116, cpy_r_r118, 1, 0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 393, CPyStatic_config_parser___globals);
        goto CPyL106;
    }
    CPy_DECREF(cpy_r_r115);
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_config_parser___ConfigTOMLValueError))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "destructure_overrides", 393, CPyStatic_config_parser___globals, "mypy.config_parser.ConfigTOMLValueError", cpy_r_r119);
        goto CPyL84;
    }
    CPy_Raise(cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 393, CPyStatic_config_parser___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r121 = CPyDict_GetItem(cpy_r_result, cpy_r_old_config_name);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 399, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r122 = PyObject_SetItem(cpy_r_r121, cpy_r_new_key, cpy_r_new_value);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_new_key);
    CPy_DECREF(cpy_r_new_value);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 399, CPyStatic_config_parser___globals);
        goto CPyL99;
    } else
        goto CPyL51;
CPyL78: ;
    cpy_r_r124 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 388, CPyStatic_config_parser___globals);
        goto CPyL92;
    }
CPyL79: ;
    cpy_r_r125 = cpy_r_r66 + 2;
    cpy_r_r66 = cpy_r_r125;
    goto CPyL41;
CPyL80: ;
    cpy_r_r126 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 363, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
    cpy_r_r127 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r128 = CPyDict_GetItem(cpy_r_result, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 401, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
    cpy_r_r129 = CPyStatics[1521]; /* 'overrides' */
    cpy_r_r130 = PyObject_DelItem(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 401, CPyStatic_config_parser___globals);
        goto CPyL85;
    }
    return cpy_r_result;
CPyL84: ;
    cpy_r_r132 = NULL;
    return cpy_r_r132;
CPyL85: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL84;
CPyL86: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL80;
CPyL87: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    goto CPyL84;
CPyL88: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    goto CPyL19;
CPyL89: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_r47);
    goto CPyL84;
CPyL90: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    goto CPyL36;
CPyL91: ;
    CPy_DECREF(cpy_r_override);
    CPy_DECREF(cpy_r_modules);
    goto CPyL16;
CPyL92: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    goto CPyL84;
CPyL93: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    goto CPyL84;
CPyL94: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_module_overrides);
    goto CPyL84;
CPyL95: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_module_overrides);
    CPy_DecRef(cpy_r_old_config_name);
    goto CPyL84;
CPyL96: ;
    CPy_DECREF(cpy_r_module);
    goto CPyL48;
CPyL97: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_old_config_name);
    goto CPyL84;
CPyL98: ;
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_r92);
    goto CPyL78;
CPyL99: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_old_config_name);
    CPy_DecRef(cpy_r_r92);
    goto CPyL84;
CPyL100: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r94);
    goto CPyL54;
CPyL101: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_new_key);
    goto CPyL57;
CPyL102: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_new_key);
    CPy_DECREF(cpy_r_new_value);
    CPy_DECREF(cpy_r_r99);
    goto CPyL60;
CPyL103: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_override);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_module);
    CPy_DecRef(cpy_r_old_config_name);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_new_key);
    CPy_DecRef(cpy_r_new_value);
    goto CPyL84;
CPyL104: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_override);
    CPy_DECREF(cpy_r_modules);
    CPy_DECREF(cpy_r_old_config_name);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_new_value);
    goto CPyL70;
CPyL105: ;
    CPy_DecRef(cpy_r_module);
    goto CPyL84;
CPyL106: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL84;
}

PyObject *CPyPy_config_parser___destructure_overrides(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"toml_data", 0};
    static CPyArg_Parser parser = {"O:destructure_overrides", kwlist, 0};
    PyObject *obj_toml_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_toml_data)) {
        return NULL;
    }
    PyObject *arg_toml_data;
    if (likely(PyDict_Check(obj_toml_data)))
        arg_toml_data = obj_toml_data;
    else {
        CPy_TypeError("dict", obj_toml_data); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___destructure_overrides(arg_toml_data);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "destructure_overrides", 321, CPyStatic_config_parser___globals);
    return NULL;
}

tuple_T2OO CPyDef_config_parser___parse_section(PyObject *cpy_r_prefix, PyObject *cpy_r_template, PyObject *cpy_r_set_strict_flags, PyObject *cpy_r_section, PyObject *cpy_r_config_types, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_results;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_report_dirs;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_key;
    char cpy_r_invert;
    PyObject *cpy_r_options_key;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_ct;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_dv;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_report_type;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject **cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject **cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject **cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    tuple_T3OOO cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_err;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject **cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    tuple_T3OOO cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject **cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    int32_t cpy_r_r203;
    char cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    int32_t cpy_r_r207;
    char cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    int32_t cpy_r_r216;
    char cpy_r_r217;
    char cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    tuple_T2OO cpy_r_r224;
    tuple_T2OO cpy_r_r225;
    if (cpy_r_stderr != NULL) goto CPyL150;
    cpy_r_r0 = CPyStatic_config_parser___mypy___config_parser___parse_section___stderr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_stderr = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 417, CPyStatic_config_parser___globals);
        goto CPyL151;
    }
    cpy_r_results = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 418, CPyStatic_config_parser___globals);
        goto CPyL152;
    }
    cpy_r_report_dirs = cpy_r_r2;
    cpy_r_r3 = PyObject_GetIter(cpy_r_section);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 419, CPyStatic_config_parser___globals);
        goto CPyL153;
    }
CPyL5: ;
    cpy_r_r4 = PyIter_Next(cpy_r_r3);
    if (cpy_r_r4 == NULL) goto CPyL154;
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 419, CPyStatic_config_parser___globals, "str", cpy_r_r4);
        goto CPyL155;
    }
    cpy_r_key = cpy_r_r5;
    cpy_r_invert = 0;
    CPy_INCREF(cpy_r_key);
    cpy_r_options_key = cpy_r_key;
    cpy_r_r6 = PyDict_Contains(cpy_r_config_types, cpy_r_key);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 422, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPyDict_GetItem(cpy_r_config_types, cpy_r_key);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 423, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_ct = cpy_r_r9;
    goto CPyL80;
CPyL11: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_dv = cpy_r_r10;
    cpy_r_r11 = CPyStatics[1527]; /* 'new_semantic_analyzer' */
    cpy_r_r12 = PyObject_HasAttr(cpy_r_template, cpy_r_r11);
    if (cpy_r_r12) {
        goto CPyL14;
    } else
        goto CPyL157;
CPyL12: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 428, CPyStatic_config_parser___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r14 = CPyStatics[1527]; /* 'new_semantic_analyzer' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_key, cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL17;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL17;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 429, CPyStatic_config_parser___globals);
        goto CPyL158;
    }
CPyL17: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    if (cpy_r_r20) {
        goto CPyL159;
    } else
        goto CPyL20;
CPyL18: ;
    cpy_r_r21 = Py_None;
    cpy_r_r22 = CPyObject_GetAttr3(cpy_r_template, cpy_r_key, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 430, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_dv = cpy_r_r22;
CPyL20: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_dv == cpy_r_r23;
    if (cpy_r_r24) {
        goto CPyL160;
    } else
        goto CPyL79;
CPyL21: ;
    cpy_r_r25 = CPyStatics[1509]; /* '_report' */
    cpy_r_r26 = CPyStr_Endswith(cpy_r_key, cpy_r_r25);
    if (cpy_r_r26) {
        goto CPyL161;
    } else
        goto CPyL37;
CPyL22: ;
    cpy_r_r27 = CPyStr_GetSlice(cpy_r_key, 0, -14);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 433, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 433, CPyStatic_config_parser___globals, "str", cpy_r_r27);
        goto CPyL162;
    }
    cpy_r_r29 = CPyStatics[755]; /* '_' */
    cpy_r_r30 = CPyStatics[1198]; /* '-' */
    cpy_r_r31 = PyUnicode_Replace(cpy_r_r28, cpy_r_r29, cpy_r_r30, -1);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 433, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    cpy_r_report_type = cpy_r_r31;
    cpy_r_r32 = CPyStatic_defaults___REPORTER_NAMES;
    if (unlikely(cpy_r_r32 == NULL)) {
        goto CPyL163;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"REPORTER_NAMES\" was not set");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 434, CPyStatic_config_parser___globals);
        goto CPyL149;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r34 = PySequence_Contains(cpy_r_r32, cpy_r_report_type);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 434, CPyStatic_config_parser___globals);
        goto CPyL164;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL165;
    cpy_r_r37 = PyObject_GetItem(cpy_r_section, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 435, CPyStatic_config_parser___globals);
        goto CPyL166;
    }
    cpy_r_r38 = PyObject_Str(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 435, CPyStatic_config_parser___globals);
        goto CPyL166;
    }
    cpy_r_r39 = CPyDict_SetItem(cpy_r_report_dirs, cpy_r_report_type, cpy_r_r38);
    CPy_DECREF(cpy_r_report_type);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 435, CPyStatic_config_parser___globals);
        goto CPyL155;
    } else
        goto CPyL5;
CPyL33: ;
    cpy_r_r41 = CPyStatics[1528]; /* 'Unrecognized report type: ' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_prefix, cpy_r_r41, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 437, CPyStatic_config_parser___globals);
        goto CPyL155;
    }
    cpy_r_r43 = CPyModule_builtins;
    cpy_r_r44 = CPyStatics[190]; /* 'print' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 437, CPyStatic_config_parser___globals);
        goto CPyL167;
    }
    PyObject *cpy_r_r46[2] = {cpy_r_r42, cpy_r_stderr};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 1, cpy_r_r48);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 437, CPyStatic_config_parser___globals);
        goto CPyL167;
    } else
        goto CPyL168;
CPyL36: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL5;
CPyL37: ;
    cpy_r_r50 = CPyStatics[1529]; /* 'x_' */
    cpy_r_r51 = CPyStr_Startswith(cpy_r_key, cpy_r_r50);
    if (cpy_r_r51) goto CPyL76;
    cpy_r_r52 = CPyStatics[1530]; /* 'no_' */
    cpy_r_r53 = CPyStr_Startswith(cpy_r_key, cpy_r_r52);
    if (!cpy_r_r53) goto CPyL45;
    cpy_r_r54 = CPyStr_GetSlice(cpy_r_key, 6, 9223372036854775806LL);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 441, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 441, CPyStatic_config_parser___globals, "str", cpy_r_r54);
        goto CPyL156;
    }
    cpy_r_r56 = PyObject_HasAttr(cpy_r_template, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (cpy_r_r56) {
        goto CPyL169;
    } else
        goto CPyL45;
CPyL42: ;
    cpy_r_r57 = CPyStr_GetSlice(cpy_r_key, 6, 9223372036854775806LL);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 442, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 442, CPyStatic_config_parser___globals, "str", cpy_r_r57);
        goto CPyL162;
    }
    cpy_r_options_key = cpy_r_r58;
    cpy_r_invert = 1;
    goto CPyL76;
CPyL45: ;
    cpy_r_r59 = CPyStatics[1531]; /* 'allow' */
    cpy_r_r60 = CPyStr_Startswith(cpy_r_key, cpy_r_r59);
    if (!cpy_r_r60) goto CPyL50;
    cpy_r_r61 = CPyStatics[1532]; /* 'dis' */
    cpy_r_r62 = PyUnicode_Concat(cpy_r_r61, cpy_r_key);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 444, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r63 = PyObject_HasAttr(cpy_r_template, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (cpy_r_r63) {
        goto CPyL170;
    } else
        goto CPyL50;
CPyL48: ;
    cpy_r_r64 = CPyStatics[1532]; /* 'dis' */
    cpy_r_r65 = PyUnicode_Concat(cpy_r_r64, cpy_r_key);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 445, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    cpy_r_options_key = cpy_r_r65;
    cpy_r_invert = 1;
    goto CPyL76;
CPyL50: ;
    cpy_r_r66 = CPyStatics[1533]; /* 'disallow' */
    cpy_r_r67 = CPyStr_Startswith(cpy_r_key, cpy_r_r66);
    if (!cpy_r_r67) goto CPyL57;
    cpy_r_r68 = CPyStr_GetSlice(cpy_r_key, 6, 9223372036854775806LL);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 447, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 447, CPyStatic_config_parser___globals, "str", cpy_r_r68);
        goto CPyL156;
    }
    cpy_r_r70 = PyObject_HasAttr(cpy_r_template, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (cpy_r_r70) {
        goto CPyL171;
    } else
        goto CPyL57;
CPyL54: ;
    cpy_r_r71 = CPyStr_GetSlice(cpy_r_key, 6, 9223372036854775806LL);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 448, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    if (likely(PyUnicode_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 448, CPyStatic_config_parser___globals, "str", cpy_r_r71);
        goto CPyL162;
    }
    cpy_r_options_key = cpy_r_r72;
    cpy_r_invert = 1;
    goto CPyL76;
CPyL57: ;
    cpy_r_r73 = CPyStatics[1534]; /* 'show_' */
    cpy_r_r74 = CPyStr_Startswith(cpy_r_key, cpy_r_r73);
    if (!cpy_r_r74) goto CPyL66;
    cpy_r_r75 = CPyStatics[1535]; /* 'hide_' */
    cpy_r_r76 = CPyStr_GetSlice(cpy_r_key, 10, 9223372036854775806LL);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 450, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    if (likely(PyUnicode_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 450, CPyStatic_config_parser___globals, "str", cpy_r_r76);
        goto CPyL156;
    }
    cpy_r_r78 = PyUnicode_Concat(cpy_r_r75, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 450, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r79 = PyObject_HasAttr(cpy_r_template, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (cpy_r_r79) {
        goto CPyL172;
    } else
        goto CPyL66;
CPyL62: ;
    cpy_r_r80 = CPyStatics[1535]; /* 'hide_' */
    cpy_r_r81 = CPyStr_GetSlice(cpy_r_key, 10, 9223372036854775806LL);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 451, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    if (likely(PyUnicode_Check(cpy_r_r81)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 451, CPyStatic_config_parser___globals, "str", cpy_r_r81);
        goto CPyL162;
    }
    cpy_r_r83 = PyUnicode_Concat(cpy_r_r80, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 451, CPyStatic_config_parser___globals);
        goto CPyL162;
    }
    cpy_r_options_key = cpy_r_r83;
    cpy_r_invert = 1;
    goto CPyL76;
CPyL66: ;
    cpy_r_r84 = CPyStatics[1536]; /* 'strict' */
    cpy_r_r85 = PyUnicode_Compare(cpy_r_key, cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 == -1;
    if (!cpy_r_r86) goto CPyL69;
    cpy_r_r87 = PyErr_Occurred();
    cpy_r_r88 = cpy_r_r87 != NULL;
    if (!cpy_r_r88) goto CPyL69;
    cpy_r_r89 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 453, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
CPyL69: ;
    cpy_r_r90 = cpy_r_r85 == 0;
    if (cpy_r_r90) goto CPyL76;
    cpy_r_r91 = CPyStatics[1537]; /* 'Unrecognized option: ' */
    cpy_r_r92 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r93 = PyObject_GetItem(cpy_r_section, cpy_r_key);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 456, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r94 = PyObject_Str(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 456, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r95 = CPyStr_Build(5, cpy_r_prefix, cpy_r_r91, cpy_r_key, cpy_r_r92, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 456, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_r96 = CPyModule_builtins;
    cpy_r_r97 = CPyStatics[190]; /* 'print' */
    cpy_r_r98 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 456, CPyStatic_config_parser___globals);
        goto CPyL173;
    }
    PyObject *cpy_r_r99[2] = {cpy_r_r95, cpy_r_stderr};
    cpy_r_r100 = (PyObject **)&cpy_r_r99;
    cpy_r_r101 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r102 = _PyObject_Vectorcall(cpy_r_r98, cpy_r_r100, 1, cpy_r_r101);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 456, CPyStatic_config_parser___globals);
        goto CPyL173;
    } else
        goto CPyL174;
CPyL75: ;
    CPy_DECREF(cpy_r_r95);
CPyL76: ;
    if (!cpy_r_invert) goto CPyL175;
    cpy_r_r103 = Py_None;
    cpy_r_r104 = CPyObject_GetAttr3(cpy_r_template, cpy_r_options_key, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 458, CPyStatic_config_parser___globals);
        goto CPyL156;
    }
    cpy_r_dv = cpy_r_r104;
CPyL79: ;
    cpy_r_r105 = PyObject_Type(cpy_r_dv);
    CPy_DECREF(cpy_r_dv);
    cpy_r_ct = cpy_r_r105;
CPyL80: ;
    cpy_r_r106 = Py_None;
    CPy_INCREF(cpy_r_r106);
    cpy_r_v = cpy_r_r106;
    CPy_DECREF(cpy_r_v);
    cpy_r_r107 = (PyObject *)&PyBool_Type;
    cpy_r_r108 = cpy_r_ct == cpy_r_r107;
    if (cpy_r_r108) {
        goto CPyL176;
    } else
        goto CPyL93;
CPyL82: ;
    cpy_r_r109 = (PyObject *)&PyDict_Type;
    cpy_r_r110 = PyObject_IsInstance(cpy_r_section, cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 465, CPyStatic_config_parser___globals);
        goto CPyL177;
    }
    cpy_r_r112 = cpy_r_r110;
    if (!cpy_r_r112) goto CPyL88;
    CPy_INCREF(cpy_r_section);
    if (likely(PyDict_Check(cpy_r_section)))
        cpy_r_r113 = cpy_r_section;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_section", 466, CPyStatic_config_parser___globals, "dict", cpy_r_section);
        goto CPyL177;
    }
    cpy_r_r114 = CPyDict_GetWithNone(cpy_r_r113, cpy_r_key);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 466, CPyStatic_config_parser___globals);
        goto CPyL177;
    }
    cpy_r_r115 = CPyDef_config_parser___convert_to_boolean(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 466, CPyStatic_config_parser___globals);
        goto CPyL177;
    }
    cpy_r_r116 = cpy_r_r115 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r116);
    cpy_r_v = cpy_r_r116;
    goto CPyL90;
CPyL88: ;
    cpy_r_r117 = CPyStatics[1539]; /* 'getboolean' */
    PyObject *cpy_r_r118[2] = {cpy_r_section, cpy_r_key};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = PyObject_VectorcallMethod(cpy_r_r117, cpy_r_r119, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 468, CPyStatic_config_parser___globals);
        goto CPyL177;
    }
    cpy_r_v = cpy_r_r120;
CPyL90: ;
    if (!cpy_r_invert) goto CPyL131;
    cpy_r_r121 = PyObject_Not(cpy_r_v);
    CPy_DECREF(cpy_r_v);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 470, CPyStatic_config_parser___globals);
        goto CPyL177;
    }
    cpy_r_r123 = cpy_r_r121;
    cpy_r_r124 = cpy_r_r123 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r124);
    cpy_r_v = cpy_r_r124;
    goto CPyL131;
CPyL93: ;
    cpy_r_r125 = CPyModule_builtins;
    cpy_r_r126 = CPyStatics[1540]; /* 'callable' */
    cpy_r_r127 = CPyObject_GetAttr(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 471, CPyStatic_config_parser___globals);
        goto CPyL178;
    }
    PyObject *cpy_r_r128[1] = {cpy_r_ct};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = _PyObject_Vectorcall(cpy_r_r127, cpy_r_r129, 1, 0);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 471, CPyStatic_config_parser___globals);
        goto CPyL178;
    }
    if (unlikely(!PyBool_Check(cpy_r_r130))) {
        CPy_TypeError("bool", cpy_r_r130); cpy_r_r131 = 2;
    } else
        cpy_r_r131 = cpy_r_r130 == Py_True;
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 471, CPyStatic_config_parser___globals);
        goto CPyL178;
    }
    if (!cpy_r_r131) goto CPyL179;
    if (cpy_r_invert) {
        goto CPyL180;
    } else
        goto CPyL102;
CPyL98: ;
    cpy_r_r132 = CPyStatics[1541]; /* 'Can not invert non-boolean key ' */
    cpy_r_r133 = CPyStr_Build(3, cpy_r_prefix, cpy_r_r132, cpy_r_options_key);
    CPy_DECREF(cpy_r_options_key);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 473, CPyStatic_config_parser___globals);
        goto CPyL120;
    }
    cpy_r_r134 = CPyModule_builtins;
    cpy_r_r135 = CPyStatics[190]; /* 'print' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 473, CPyStatic_config_parser___globals);
        goto CPyL181;
    }
    PyObject *cpy_r_r137[2] = {cpy_r_r133, cpy_r_stderr};
    cpy_r_r138 = (PyObject **)&cpy_r_r137;
    cpy_r_r139 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r140 = _PyObject_Vectorcall(cpy_r_r136, cpy_r_r138, 1, cpy_r_r139);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 473, CPyStatic_config_parser___globals);
        goto CPyL181;
    } else
        goto CPyL182;
CPyL101: ;
    CPy_DECREF(cpy_r_r133);
    goto CPyL5;
CPyL102: ;
    cpy_r_r141 = CPyStatics[308]; /* 'get' */
    PyObject *cpy_r_r142[2] = {cpy_r_section, cpy_r_key};
    cpy_r_r143 = (PyObject **)&cpy_r_r142;
    cpy_r_r144 = PyObject_VectorcallMethod(cpy_r_r141, cpy_r_r143, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 476, CPyStatic_config_parser___globals);
        goto CPyL183;
    }
    PyObject *cpy_r_r145[1] = {cpy_r_r144};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = _PyObject_Vectorcall(cpy_r_ct, cpy_r_r146, 1, 0);
    CPy_DECREF(cpy_r_ct);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 476, CPyStatic_config_parser___globals);
        goto CPyL184;
    }
    CPy_DECREF(cpy_r_r144);
    cpy_r_v = cpy_r_r147;
    goto CPyL131;
CPyL105: ;
    cpy_r_r148 = CPy_CatchError();
    cpy_r_r149 = CPyModule_argparse;
    cpy_r_r150 = CPyStatics[1484]; /* 'ArgumentTypeError' */
    cpy_r_r151 = CPyObject_GetAttr(cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 477, CPyStatic_config_parser___globals);
        goto CPyL114;
    }
    cpy_r_r152 = CPy_ExceptionMatches(cpy_r_r151);
    CPy_DecRef(cpy_r_r151);
    if (!cpy_r_r152) goto CPyL112;
    cpy_r_r153 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r153;
    cpy_r_r154 = CPyStatics[297]; /* ': ' */
    cpy_r_r155 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 478, CPyStatic_config_parser___globals);
        goto CPyL114;
    }
    cpy_r_r156 = CPyStr_Build(4, cpy_r_prefix, cpy_r_key, cpy_r_r154, cpy_r_r155);
    CPy_DecRef(cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 478, CPyStatic_config_parser___globals);
        goto CPyL114;
    }
    cpy_r_r157 = CPyModule_builtins;
    cpy_r_r158 = CPyStatics[190]; /* 'print' */
    cpy_r_r159 = CPyObject_GetAttr(cpy_r_r157, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 478, CPyStatic_config_parser___globals);
        goto CPyL185;
    }
    PyObject *cpy_r_r160[2] = {cpy_r_r156, cpy_r_stderr};
    cpy_r_r161 = (PyObject **)&cpy_r_r160;
    cpy_r_r162 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r163 = _PyObject_Vectorcall(cpy_r_r159, cpy_r_r161, 1, cpy_r_r162);
    CPy_DecRef(cpy_r_r159);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 478, CPyStatic_config_parser___globals);
        goto CPyL185;
    } else
        goto CPyL186;
CPyL111: ;
    CPy_DecRef(cpy_r_r156);
    CPy_RestoreExcInfo(cpy_r_r148);
    CPy_DecRef(cpy_r_r148.f0);
    CPy_DecRef(cpy_r_r148.f1);
    CPy_DecRef(cpy_r_r148.f2);
    goto CPyL5;
CPyL112: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL114;
    } else
        goto CPyL187;
CPyL113: ;
    CPy_Unreachable();
CPyL114: ;
    CPy_RestoreExcInfo(cpy_r_r148);
    CPy_DecRef(cpy_r_r148.f0);
    CPy_DecRef(cpy_r_r148.f1);
    CPy_DecRef(cpy_r_r148.f2);
    cpy_r_r164 = CPy_KeepPropagating();
    if (!cpy_r_r164) {
        goto CPyL120;
    } else
        goto CPyL188;
CPyL115: ;
    CPy_Unreachable();
CPyL116: ;
    cpy_r_r165 = CPyStatics[1542]; /* "Don't know what type " */
    cpy_r_r166 = CPyStatics[1543]; /* ' should have' */
    cpy_r_r167 = CPyStr_Build(4, cpy_r_prefix, cpy_r_r165, cpy_r_key, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 481, CPyStatic_config_parser___globals);
        goto CPyL120;
    }
    cpy_r_r168 = CPyModule_builtins;
    cpy_r_r169 = CPyStatics[190]; /* 'print' */
    cpy_r_r170 = CPyObject_GetAttr(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 481, CPyStatic_config_parser___globals);
        goto CPyL189;
    }
    PyObject *cpy_r_r171[2] = {cpy_r_r167, cpy_r_stderr};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_r170, cpy_r_r172, 1, cpy_r_r173);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 481, CPyStatic_config_parser___globals);
        goto CPyL189;
    } else
        goto CPyL190;
CPyL119: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL5;
CPyL120: ;
    cpy_r_r175 = CPy_CatchError();
    cpy_r_r176 = CPyModule_builtins;
    cpy_r_r177 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r178 = CPyObject_GetAttr(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 483, CPyStatic_config_parser___globals);
        goto CPyL191;
    }
    cpy_r_r179 = CPy_ExceptionMatches(cpy_r_r178);
    CPy_DecRef(cpy_r_r178);
    if (!cpy_r_r179) goto CPyL192;
    cpy_r_r180 = CPy_GetExcValue();
    cpy_r_err = cpy_r_r180;
    cpy_r_r181 = CPyStatics[297]; /* ': ' */
    cpy_r_r182 = PyObject_Str(cpy_r_err);
    CPy_DecRef(cpy_r_err);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 484, CPyStatic_config_parser___globals);
        goto CPyL191;
    }
    cpy_r_r183 = CPyStr_Build(4, cpy_r_prefix, cpy_r_key, cpy_r_r181, cpy_r_r182);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 484, CPyStatic_config_parser___globals);
        goto CPyL193;
    }
    cpy_r_r184 = CPyModule_builtins;
    cpy_r_r185 = CPyStatics[190]; /* 'print' */
    cpy_r_r186 = CPyObject_GetAttr(cpy_r_r184, cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 484, CPyStatic_config_parser___globals);
        goto CPyL194;
    }
    PyObject *cpy_r_r187[2] = {cpy_r_r183, cpy_r_stderr};
    cpy_r_r188 = (PyObject **)&cpy_r_r187;
    cpy_r_r189 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r190 = _PyObject_Vectorcall(cpy_r_r186, cpy_r_r188, 1, cpy_r_r189);
    CPy_DecRef(cpy_r_r186);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 484, CPyStatic_config_parser___globals);
        goto CPyL194;
    } else
        goto CPyL195;
CPyL126: ;
    CPy_DecRef(cpy_r_r183);
    CPy_RestoreExcInfo(cpy_r_r175);
    CPy_DecRef(cpy_r_r175.f0);
    CPy_DecRef(cpy_r_r175.f1);
    CPy_DecRef(cpy_r_r175.f2);
    goto CPyL5;
CPyL127: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL129;
    } else
        goto CPyL196;
CPyL128: ;
    CPy_Unreachable();
CPyL129: ;
    CPy_RestoreExcInfo(cpy_r_r175);
    CPy_DecRef(cpy_r_r175.f0);
    CPy_DecRef(cpy_r_r175.f1);
    CPy_DecRef(cpy_r_r175.f2);
    cpy_r_r191 = CPy_KeepPropagating();
    if (!cpy_r_r191) goto CPyL149;
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r192 = CPyStatics[1536]; /* 'strict' */
    cpy_r_r193 = PyUnicode_Compare(cpy_r_key, cpy_r_r192);
    CPy_DECREF(cpy_r_key);
    cpy_r_r194 = cpy_r_r193 == -1;
    if (!cpy_r_r194) goto CPyL134;
    cpy_r_r195 = PyErr_Occurred();
    cpy_r_r196 = cpy_r_r195 != NULL;
    if (!cpy_r_r196) goto CPyL134;
    cpy_r_r197 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 486, CPyStatic_config_parser___globals);
        goto CPyL197;
    }
CPyL134: ;
    cpy_r_r198 = cpy_r_r193 == 0;
    if (cpy_r_r198) {
        goto CPyL198;
    } else
        goto CPyL138;
CPyL135: ;
    cpy_r_r199 = PyObject_IsTrue(cpy_r_v);
    CPy_DECREF(cpy_r_v);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 462, CPyStatic_config_parser___globals);
        goto CPyL155;
    }
    cpy_r_r201 = cpy_r_r199;
    if (!cpy_r_r201) goto CPyL5;
    cpy_r_r202 = _PyObject_Vectorcall(cpy_r_set_strict_flags, 0, 0, 0);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 488, CPyStatic_config_parser___globals);
        goto CPyL155;
    } else
        goto CPyL199;
CPyL138: ;
    cpy_r_r203 = CPyDict_SetItem(cpy_r_results, cpy_r_options_key, cpy_r_v);
    CPy_DECREF(cpy_r_options_key);
    CPy_DECREF(cpy_r_v);
    cpy_r_r204 = cpy_r_r203 >= 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 490, CPyStatic_config_parser___globals);
        goto CPyL155;
    } else
        goto CPyL5;
CPyL139: ;
    cpy_r_r205 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 419, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
    cpy_r_r206 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r207 = PyDict_Contains(cpy_r_results, cpy_r_r206);
    cpy_r_r208 = cpy_r_r207 >= 0;
    if (unlikely(!cpy_r_r208)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 493, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
    cpy_r_r209 = cpy_r_r207;
    cpy_r_r210 = cpy_r_r209 ^ 1;
    if (!cpy_r_r210) goto CPyL144;
    cpy_r_r211 = PyList_New(0);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 494, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
    cpy_r_r212 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_results, cpy_r_r212, cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 494, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
CPyL144: ;
    cpy_r_r215 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r216 = PyDict_Contains(cpy_r_results, cpy_r_r215);
    cpy_r_r217 = cpy_r_r216 >= 0;
    if (unlikely(!cpy_r_r217)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 495, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
    cpy_r_r218 = cpy_r_r216;
    cpy_r_r219 = cpy_r_r218 ^ 1;
    if (!cpy_r_r219) goto CPyL148;
    cpy_r_r220 = PyList_New(0);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 496, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
    cpy_r_r221 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r222 = CPyDict_SetItem(cpy_r_results, cpy_r_r221, cpy_r_r220);
    CPy_DECREF(cpy_r_r220);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_section", 496, CPyStatic_config_parser___globals);
        goto CPyL200;
    }
CPyL148: ;
    cpy_r_r224.f0 = cpy_r_results;
    cpy_r_r224.f1 = cpy_r_report_dirs;
    CPy_INCREF(cpy_r_r224.f0);
    CPy_INCREF(cpy_r_r224.f1);
    CPy_DECREF(cpy_r_results);
    CPy_DECREF(cpy_r_report_dirs);
    return cpy_r_r224;
CPyL149: ;
    tuple_T2OO __tmp1684 = { NULL, NULL };
    cpy_r_r225 = __tmp1684;
    return cpy_r_r225;
CPyL150: ;
    CPy_INCREF(cpy_r_stderr);
    goto CPyL2;
CPyL151: ;
    CPy_DecRef(cpy_r_stderr);
    goto CPyL149;
CPyL152: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    goto CPyL149;
CPyL153: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    goto CPyL149;
CPyL154: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_r3);
    goto CPyL139;
CPyL155: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    goto CPyL149;
CPyL156: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_options_key);
    goto CPyL149;
CPyL157: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_results);
    CPy_DECREF(cpy_r_report_dirs);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_options_key);
    CPy_DECREF(cpy_r_dv);
    goto CPyL12;
CPyL158: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_dv);
    goto CPyL149;
CPyL159: ;
    CPy_DECREF(cpy_r_dv);
    goto CPyL18;
CPyL160: ;
    CPy_DECREF(cpy_r_dv);
    goto CPyL21;
CPyL161: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL22;
CPyL162: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    goto CPyL149;
CPyL163: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_report_type);
    goto CPyL26;
CPyL164: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_report_type);
    goto CPyL149;
CPyL165: ;
    CPy_DECREF(cpy_r_report_type);
    goto CPyL33;
CPyL166: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_report_type);
    goto CPyL149;
CPyL167: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r42);
    goto CPyL149;
CPyL168: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL36;
CPyL169: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL42;
CPyL170: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL48;
CPyL171: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL54;
CPyL172: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL62;
CPyL173: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_r95);
    goto CPyL149;
CPyL174: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL75;
CPyL175: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_options_key);
    goto CPyL5;
CPyL176: ;
    CPy_DECREF(cpy_r_ct);
    goto CPyL82;
CPyL177: ;
    CPy_DecRef(cpy_r_options_key);
    goto CPyL120;
CPyL178: ;
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_ct);
    goto CPyL120;
CPyL179: ;
    CPy_DECREF(cpy_r_options_key);
    CPy_DECREF(cpy_r_ct);
    goto CPyL116;
CPyL180: ;
    CPy_DECREF(cpy_r_ct);
    goto CPyL98;
CPyL181: ;
    CPy_DecRef(cpy_r_r133);
    goto CPyL120;
CPyL182: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r140);
    goto CPyL101;
CPyL183: ;
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_ct);
    goto CPyL105;
CPyL184: ;
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_r144);
    goto CPyL105;
CPyL185: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL114;
CPyL186: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r163);
    goto CPyL111;
CPyL187: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r148.f0);
    CPy_DecRef(cpy_r_r148.f1);
    CPy_DecRef(cpy_r_r148.f2);
    goto CPyL113;
CPyL188: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    goto CPyL115;
CPyL189: ;
    CPy_DecRef(cpy_r_r167);
    goto CPyL120;
CPyL190: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r174);
    goto CPyL119;
CPyL191: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    goto CPyL129;
CPyL192: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_key);
    goto CPyL127;
CPyL193: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    goto CPyL129;
CPyL194: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r183);
    goto CPyL129;
CPyL195: ;
    CPy_DecRef(cpy_r_r190);
    goto CPyL126;
CPyL196: ;
    CPy_DecRef(cpy_r_r175.f0);
    CPy_DecRef(cpy_r_r175.f1);
    CPy_DecRef(cpy_r_r175.f2);
    goto CPyL128;
CPyL197: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_options_key);
    CPy_DecRef(cpy_r_v);
    goto CPyL149;
CPyL198: ;
    CPy_DECREF(cpy_r_options_key);
    goto CPyL135;
CPyL199: ;
    CPy_DECREF(cpy_r_r202);
    goto CPyL5;
CPyL200: ;
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_report_dirs);
    goto CPyL149;
}

PyObject *CPyPy_config_parser___parse_section(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"prefix", "template", "set_strict_flags", "section", "config_types", "stderr", 0};
    static CPyArg_Parser parser = {"OOOOO|O:parse_section", kwlist, 0};
    PyObject *obj_prefix;
    PyObject *obj_template;
    PyObject *obj_set_strict_flags;
    PyObject *obj_section;
    PyObject *obj_config_types;
    PyObject *obj_stderr = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_prefix, &obj_template, &obj_set_strict_flags, &obj_section, &obj_config_types, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_mypy___options___Options))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.options.Options", obj_template); 
        goto fail;
    }
    PyObject *arg_set_strict_flags = obj_set_strict_flags;
    PyObject *arg_section = obj_section;
    PyObject *arg_config_types;
    if (likely(PyDict_Check(obj_config_types)))
        arg_config_types = obj_config_types;
    else {
        CPy_TypeError("dict", obj_config_types); 
        goto fail;
    }
    PyObject *arg_stderr;
    if (obj_stderr == NULL) {
        arg_stderr = NULL;
    } else {
        arg_stderr = obj_stderr; 
    }
    tuple_T2OO retval = CPyDef_config_parser___parse_section(arg_prefix, arg_template, arg_set_strict_flags, arg_section, arg_config_types, arg_stderr);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1685 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1685);
    PyObject *__tmp1686 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1686);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "parse_section", 405, CPyStatic_config_parser___globals);
    return NULL;
}

char CPyDef_config_parser___convert_to_boolean(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    cpy_r_r0 = (PyObject *)&PyBool_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 503, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL4;
    if (unlikely(!PyBool_Check(cpy_r_value))) {
        CPy_TypeError("bool", cpy_r_value); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_value == Py_True;
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 504, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = (PyObject *)&PyUnicode_Type;
    cpy_r_r6 = PyObject_IsInstance(cpy_r_value, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 505, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) goto CPyL30;
    cpy_r_r9 = PyObject_Str(cpy_r_value);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 506, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    cpy_r_value = cpy_r_r9;
CPyL8: ;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r10 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals, "str", cpy_r_value);
        goto CPyL31;
    }
    cpy_r_r11 = CPyStatics[1519]; /* 'lower' */
    PyObject *cpy_r_r12[1] = {cpy_r_r10};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals, "str", cpy_r_r14);
        goto CPyL31;
    }
    cpy_r_r16 = CPyModule_configparser;
    cpy_r_r17 = CPyStatics[1499]; /* 'RawConfigParser' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals);
        goto CPyL33;
    }
    cpy_r_r19 = CPyStatics[1547]; /* 'BOOLEAN_STATES' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals);
        goto CPyL33;
    }
    cpy_r_r21 = PySequence_Contains(cpy_r_r20, cpy_r_r15);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 507, CPyStatic_config_parser___globals);
        goto CPyL31;
    }
    cpy_r_r23 = cpy_r_r21;
    cpy_r_r24 = cpy_r_r23 ^ 1;
    if (!cpy_r_r24) goto CPyL21;
    cpy_r_r25 = CPyStatics[1548]; /* 'Not a boolean: ' */
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r26 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "convert_to_boolean", 508, CPyStatic_config_parser___globals, "str", cpy_r_value);
        goto CPyL29;
    }
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 508, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    cpy_r_r28 = CPyModule_builtins;
    cpy_r_r29 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 508, CPyStatic_config_parser___globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r31[1] = {cpy_r_r27};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 1, 0);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 508, CPyStatic_config_parser___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r27);
    CPy_Raise(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 508, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r34 = CPyModule_configparser;
    cpy_r_r35 = CPyStatics[1499]; /* 'RawConfigParser' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals);
        goto CPyL31;
    }
    cpy_r_r37 = CPyStatics[1547]; /* 'BOOLEAN_STATES' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r39 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals, "str", cpy_r_value);
        goto CPyL35;
    }
    cpy_r_r40 = CPyStatics[1519]; /* 'lower' */
    PyObject *cpy_r_r41[1] = {cpy_r_r39};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r40, cpy_r_r42, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r39);
    if (likely(PyUnicode_Check(cpy_r_r43)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals, "str", cpy_r_r43);
        goto CPyL35;
    }
    cpy_r_r45 = PyObject_GetItem(cpy_r_r38, cpy_r_r44);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    if (unlikely(!PyBool_Check(cpy_r_r45))) {
        CPy_TypeError("bool", cpy_r_r45); cpy_r_r46 = 2;
    } else
        cpy_r_r46 = cpy_r_r45 == Py_True;
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 509, CPyStatic_config_parser___globals);
        goto CPyL29;
    }
    return cpy_r_r46;
CPyL29: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL30: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL8;
CPyL31: ;
    CPy_DecRef(cpy_r_value);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r10);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r15);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL29;
CPyL35: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL29;
}

PyObject *CPyPy_config_parser___convert_to_boolean(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:convert_to_boolean", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL1687;
    if (obj_value == Py_None)
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL1687;
    CPy_TypeError("object or None", obj_value); 
    goto fail;
__LL1687: ;
    char retval = CPyDef_config_parser___convert_to_boolean(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "convert_to_boolean", 501, CPyStatic_config_parser___globals);
    return NULL;
}

tuple_T2OO CPyDef_config_parser___split_directive(PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_parts;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cur;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_errors;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    tuple_T2OO cpy_r_r85;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 516, CPyStatic_config_parser___globals);
        goto CPyL50;
    }
    cpy_r_parts = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 517, CPyStatic_config_parser___globals);
        goto CPyL51;
    }
    cpy_r_cur = cpy_r_r1;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 518, CPyStatic_config_parser___globals);
        goto CPyL52;
    }
    cpy_r_errors = cpy_r_r2;
    cpy_r_i = 0;
CPyL4: ;
    cpy_r_r3 = CPyStr_Size_size_t(cpy_r_s);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 520, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r5 = cpy_r_r3 << 1;
    cpy_r_r6 = cpy_r_i & 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r5);
    if (cpy_r_r8) {
        goto CPyL8;
    } else
        goto CPyL54;
CPyL7: ;
    cpy_r_r9 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r9) goto CPyL54;
CPyL8: ;
    cpy_r_r10 = CPyStr_GetItem(cpy_r_s, cpy_r_i);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 521, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r11 = CPyStatics[242]; /* ',' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL12;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL12;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 521, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
CPyL12: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = CPyStatics[163]; /* '' */
    cpy_r_r19 = PyUnicode_Join(cpy_r_r18, cpy_r_cur);
    CPy_DECREF(cpy_r_cur);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 522, CPyStatic_config_parser___globals);
        goto CPyL55;
    }
    cpy_r_r20 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r21[1] = {cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 522, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_directive", 522, CPyStatic_config_parser___globals, "str", cpy_r_r23);
        goto CPyL55;
    }
    cpy_r_r25 = PyList_Append(cpy_r_parts, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 522, CPyStatic_config_parser___globals);
        goto CPyL55;
    }
    cpy_r_r27 = PyList_New(0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 523, CPyStatic_config_parser___globals);
        goto CPyL55;
    }
    cpy_r_cur = cpy_r_r27;
    goto CPyL43;
CPyL19: ;
    cpy_r_r28 = CPyStr_GetItem(cpy_r_s, cpy_r_i);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 524, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r29 = CPyStatics[178]; /* '"' */
    cpy_r_r30 = PyUnicode_Compare(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = cpy_r_r30 == -1;
    if (!cpy_r_r31) goto CPyL23;
    cpy_r_r32 = PyErr_Occurred();
    cpy_r_r33 = cpy_r_r32 != NULL;
    if (!cpy_r_r33) goto CPyL23;
    cpy_r_r34 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 524, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
CPyL23: ;
    cpy_r_r35 = cpy_r_r30 == 0;
    if (!cpy_r_r35) goto CPyL41;
    cpy_r_r36 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r36;
CPyL25: ;
    cpy_r_r37 = CPyStr_Size_size_t(cpy_r_s);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 526, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r39 = cpy_r_r37 << 1;
    cpy_r_r40 = cpy_r_i & 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (!cpy_r_r41) goto CPyL28;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r39);
    if (cpy_r_r42) {
        goto CPyL29;
    } else
        goto CPyL37;
CPyL28: ;
    cpy_r_r43 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r43) goto CPyL37;
CPyL29: ;
    cpy_r_r44 = CPyStr_GetItem(cpy_r_s, cpy_r_i);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 526, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r45 = CPyStatics[178]; /* '"' */
    cpy_r_r46 = PyUnicode_Compare(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = cpy_r_r46 == -1;
    if (!cpy_r_r47) goto CPyL33;
    cpy_r_r48 = PyErr_Occurred();
    cpy_r_r49 = cpy_r_r48 != NULL;
    if (!cpy_r_r49) goto CPyL33;
    cpy_r_r50 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 526, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
CPyL33: ;
    cpy_r_r51 = cpy_r_r46 != 0;
    if (!cpy_r_r51) goto CPyL37;
    cpy_r_r52 = CPyStr_GetItem(cpy_r_s, cpy_r_i);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 527, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r53 = PyList_Append(cpy_r_cur, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 527, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r55 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r55;
    goto CPyL25;
CPyL37: ;
    cpy_r_r56 = CPyStr_Size_size_t(cpy_r_s);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 529, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r58 = cpy_r_r56 << 1;
    cpy_r_r59 = cpy_r_i == cpy_r_r58;
    if (!cpy_r_r59) goto CPyL43;
    cpy_r_r60 = CPyStatics[1549]; /* 'Unterminated quote in configuration comment' */
    cpy_r_r61 = PyList_Append(cpy_r_errors, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 530, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r63 = CPyStatics[1550]; /* 'clear' */
    PyObject *cpy_r_r64[1] = {cpy_r_cur};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_VectorcallMethod(cpy_r_r63, cpy_r_r65, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 531, CPyStatic_config_parser___globals);
        goto CPyL53;
    } else
        goto CPyL57;
CPyL41: ;
    cpy_r_r67 = CPyStr_GetItem(cpy_r_s, cpy_r_i);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 533, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
    cpy_r_r68 = PyList_Append(cpy_r_cur, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 533, CPyStatic_config_parser___globals);
        goto CPyL53;
    }
CPyL43: ;
    cpy_r_r70 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r70;
    goto CPyL4;
CPyL44: ;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_cur)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = cpy_r_r73 != 0;
    if (!cpy_r_r74) goto CPyL58;
    cpy_r_r75 = CPyStatics[163]; /* '' */
    cpy_r_r76 = PyUnicode_Join(cpy_r_r75, cpy_r_cur);
    CPy_DECREF(cpy_r_cur);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 536, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
    cpy_r_r77 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r78[1] = {cpy_r_r76};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = PyObject_VectorcallMethod(cpy_r_r77, cpy_r_r79, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 536, CPyStatic_config_parser___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_r76);
    if (likely(PyUnicode_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "split_directive", 536, CPyStatic_config_parser___globals, "str", cpy_r_r80);
        goto CPyL59;
    }
    cpy_r_r82 = PyList_Append(cpy_r_parts, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/config_parser.py", "split_directive", 536, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
CPyL49: ;
    cpy_r_r84.f0 = cpy_r_parts;
    cpy_r_r84.f1 = cpy_r_errors;
    CPy_INCREF(cpy_r_r84.f0);
    CPy_INCREF(cpy_r_r84.f1);
    CPy_DECREF(cpy_r_parts);
    CPy_DECREF(cpy_r_errors);
    return cpy_r_r84;
CPyL50: ;
    tuple_T2OO __tmp1688 = { NULL, NULL };
    cpy_r_r85 = __tmp1688;
    return cpy_r_r85;
CPyL51: ;
    CPy_DecRef(cpy_r_parts);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_cur);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_cur);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL50;
CPyL54: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL44;
CPyL55: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r19);
    goto CPyL50;
CPyL57: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL43;
CPyL58: ;
    CPy_DECREF(cpy_r_cur);
    goto CPyL49;
CPyL59: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_errors);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r76);
    goto CPyL50;
}

PyObject *CPyPy_config_parser___split_directive(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:split_directive", kwlist, 0};
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
    tuple_T2OO retval = CPyDef_config_parser___split_directive(arg_s);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1689 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1689);
    PyObject *__tmp1690 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1690);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "split_directive", 512, CPyStatic_config_parser___globals);
    return NULL;
}

tuple_T2OO CPyDef_config_parser___mypy_comments_to_config_map(PyObject *cpy_r_line, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_options;
    tuple_T2OO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_entries;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_errors;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_entry;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    tuple_T2OO cpy_r_r56;
    tuple_T2OO cpy_r_r57;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 543, CPyStatic_config_parser___globals);
        goto CPyL37;
    }
    cpy_r_options = cpy_r_r0;
    cpy_r_r1 = CPyDef_config_parser___split_directive(cpy_r_line);
    if (unlikely(cpy_r_r1.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 544, CPyStatic_config_parser___globals);
        goto CPyL38;
    }
    cpy_r_r2 = cpy_r_r1.f0;
    CPy_INCREF(cpy_r_r2);
    cpy_r_entries = cpy_r_r2;
    cpy_r_r3 = cpy_r_r1.f1;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r1.f0);
    CPy_DECREF(cpy_r_r1.f1);
    cpy_r_errors = cpy_r_r3;
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_entries)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL39;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_entries, cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 545, CPyStatic_config_parser___globals, "str", cpy_r_r9);
        goto CPyL40;
    }
    cpy_r_entry = cpy_r_r10;
    cpy_r_r11 = CPyStatics[784]; /* '=' */
    cpy_r_r12 = PySequence_Contains(cpy_r_entry, cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 546, CPyStatic_config_parser___globals);
        goto CPyL41;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL8;
    cpy_r_name = cpy_r_entry;
    cpy_r_r16 = Py_None;
    CPy_INCREF(cpy_r_r16);
    cpy_r_value = cpy_r_r16;
    goto CPyL30;
CPyL8: ;
    cpy_r_r17 = CPyStatics[784]; /* '=' */
    cpy_r_r18 = CPyStr_Split(cpy_r_entry, cpy_r_r17, 2);
    CPy_DECREF(cpy_r_entry);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL40;
    }
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = PyList_New(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL42;
    }
    cpy_r_r22 = 0;
CPyL11: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL43;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r22);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals, "str", cpy_r_r27);
        goto CPyL44;
    }
    cpy_r_x = cpy_r_r28;
    cpy_r_r29 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r30[1] = {cpy_r_x};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r29, cpy_r_r31, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_x);
    if (likely(PyUnicode_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals, "str", cpy_r_r32);
        goto CPyL44;
    }
    cpy_r_r34 = CPyList_SetItemUnsafe(cpy_r_r21, cpy_r_r22, cpy_r_r33);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL44;
    }
    cpy_r_r35 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r35;
    goto CPyL11;
CPyL17: ;
    cpy_r_r36 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL40;
    }
    cpy_r_r37 = PyObject_GetIter(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL40;
    }
    cpy_r_r38 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r38 == NULL) {
        goto CPyL46;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL22: ;
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r40 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals, "str", cpy_r_r38);
        goto CPyL47;
    }
    cpy_r_name = cpy_r_r40;
    cpy_r_r41 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r41 == NULL) {
        goto CPyL48;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL26: ;
    if (PyUnicode_Check(cpy_r_r41))
        cpy_r_r43 = cpy_r_r41;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL1691;
    if (cpy_r_r41 == Py_None)
        cpy_r_r43 = cpy_r_r41;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL1691;
    CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals, "str or None", cpy_r_r41);
    goto CPyL49;
__LL1691: ;
    cpy_r_value = cpy_r_r43;
    cpy_r_r44 = PyIter_Next(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (cpy_r_r44 == NULL) {
        goto CPyL30;
    } else
        goto CPyL50;
CPyL28: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 550, CPyStatic_config_parser___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r46 = CPyStatics[1198]; /* '-' */
    cpy_r_r47 = CPyStatics[755]; /* '_' */
    cpy_r_r48 = PyUnicode_Replace(cpy_r_name, cpy_r_r46, cpy_r_r47, -1);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 552, CPyStatic_config_parser___globals);
        goto CPyL51;
    }
    cpy_r_name = cpy_r_r48;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_value == cpy_r_r49;
    if (cpy_r_r50) {
        goto CPyL52;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r51 = CPyStatics[1151]; /* 'True' */
    CPy_INCREF(cpy_r_r51);
    cpy_r_value = cpy_r_r51;
CPyL33: ;
    if (likely(cpy_r_value != Py_None))
        cpy_r_r52 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 555, CPyStatic_config_parser___globals, "str", cpy_r_value);
        goto CPyL53;
    }
    cpy_r_r53 = CPyDict_SetItem(cpy_r_options, cpy_r_name, cpy_r_r52);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 555, CPyStatic_config_parser___globals);
        goto CPyL40;
    }
    cpy_r_r55 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r55;
    goto CPyL3;
CPyL36: ;
    cpy_r_r56.f0 = cpy_r_options;
    cpy_r_r56.f1 = cpy_r_errors;
    CPy_INCREF(cpy_r_r56.f0);
    CPy_INCREF(cpy_r_r56.f1);
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_errors);
    return cpy_r_r56;
CPyL37: ;
    tuple_T2OO __tmp1692 = { NULL, NULL };
    cpy_r_r57 = __tmp1692;
    return cpy_r_r57;
CPyL38: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_entries);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_entry);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r18);
    goto CPyL37;
CPyL43: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL17;
CPyL44: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_x);
    goto CPyL37;
CPyL46: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_errors);
    CPy_DECREF(cpy_r_r37);
    goto CPyL20;
CPyL47: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r37);
    goto CPyL37;
CPyL48: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_errors);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r37);
    goto CPyL24;
CPyL49: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r37);
    goto CPyL37;
CPyL50: ;
    CPy_DECREF(cpy_r_options);
    CPy_DECREF(cpy_r_entries);
    CPy_DECREF(cpy_r_errors);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r44);
    goto CPyL28;
CPyL51: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_value);
    goto CPyL37;
CPyL52: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL32;
CPyL53: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_entries);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_name);
    goto CPyL37;
}

PyObject *CPyPy_config_parser___mypy_comments_to_config_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"line", "template", 0};
    static CPyArg_Parser parser = {"OO:mypy_comments_to_config_map", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_line, &obj_template)) {
        return NULL;
    }
    PyObject *arg_line;
    if (likely(PyUnicode_Check(obj_line)))
        arg_line = obj_line;
    else {
        CPy_TypeError("str", obj_line); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_mypy___options___Options))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.options.Options", obj_template); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_config_parser___mypy_comments_to_config_map(arg_line, arg_template);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1693 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1693);
    PyObject *__tmp1694 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1694);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "mypy_comments_to_config_map", 541, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "__get__", -1, CPyStatic_config_parser___globals);
    return NULL;
}

char CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_set_strict_flags;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/config_parser.py", "set_strict_flags", "set_strict_flags_parse_mypy_comments_obj", "__mypyc_env__", 584, CPyStatic_config_parser___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_set_strict_flags;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/config_parser.py", "set_strict_flags", "parse_mypy_comments_env", "set_strict_flags", -1, CPyStatic_config_parser___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_set_strict_flags = cpy_r_r1;
    CPy_DECREF(cpy_r_set_strict_flags);
    ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_strict_found = 1;
    cpy_r_r2 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/config_parser.py", "set_strict_flags", 586, CPyStatic_config_parser___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "set_strict_flags", 584, CPyStatic_config_parser___globals);
    return NULL;
}

tuple_T2OO CPyDef_config_parser___parse_mypy_comments(PyObject *cpy_r_args, PyObject *cpy_r_template) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_sections;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2IO cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_lineno;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_parser;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_parse_errors;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_x;
    tuple_T2IO cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_stderr;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    tuple_T2OO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_new_sections;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_reports;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_x_2;
    char cpy_r_r74;
    tuple_T2IO cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    tuple_T2IO cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    tuple_T2IO cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    CPyTagged cpy_r_r97;
    tuple_T2OO cpy_r_r98;
    tuple_T2OO cpy_r_r99;
    cpy_r_r0 = CPyDef_config_parser___parse_mypy_comments_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 560, CPyStatic_config_parser___globals);
        goto CPyL50;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 569, CPyStatic_config_parser___globals);
        goto CPyL51;
    }
    cpy_r_errors = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 570, CPyStatic_config_parser___globals);
        goto CPyL52;
    }
    cpy_r_sections = cpy_r_r2;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL53;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r3);
    PyObject *__tmp1695;
    if (unlikely(!(PyTuple_Check(cpy_r_r8) && PyTuple_GET_SIZE(cpy_r_r8) == 2))) {
        __tmp1695 = NULL;
        goto __LL1696;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r8, 0))))
        __tmp1695 = PyTuple_GET_ITEM(cpy_r_r8, 0);
    else {
        __tmp1695 = NULL;
    }
    if (__tmp1695 == NULL) goto __LL1696;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r8, 1))))
        __tmp1695 = PyTuple_GET_ITEM(cpy_r_r8, 1);
    else {
        __tmp1695 = NULL;
    }
    if (__tmp1695 == NULL) goto __LL1696;
    __tmp1695 = cpy_r_r8;
__LL1696: ;
    if (unlikely(__tmp1695 == NULL)) {
        CPy_TypeError("tuple[int, str]", cpy_r_r8); cpy_r_r9 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp1697 = PyTuple_GET_ITEM(cpy_r_r8, 0);
        CPyTagged __tmp1698;
        if (likely(PyLong_Check(__tmp1697)))
            __tmp1698 = CPyTagged_FromObject(__tmp1697);
        else {
            CPy_TypeError("int", __tmp1697); __tmp1698 = CPY_INT_TAG;
        }
        cpy_r_r9.f0 = __tmp1698;
        PyObject *__tmp1699 = PyTuple_GET_ITEM(cpy_r_r8, 1);
        CPy_INCREF(__tmp1699);
        PyObject *__tmp1700;
        if (likely(PyUnicode_Check(__tmp1699)))
            __tmp1700 = __tmp1699;
        else {
            CPy_TypeError("str", __tmp1699); 
            __tmp1700 = NULL;
        }
        cpy_r_r9.f1 = __tmp1700;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 572, CPyStatic_config_parser___globals);
        goto CPyL54;
    }
    cpy_r_r10 = cpy_r_r9.f0;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_lineno = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f1;
    CPy_INCREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r9.f0);
    CPy_DECREF(cpy_r_r9.f1);
    cpy_r_line = cpy_r_r11;
    cpy_r_r12 = CPyModule_configparser;
    cpy_r_r13 = CPyStatics[1499]; /* 'RawConfigParser' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 576, CPyStatic_config_parser___globals);
        goto CPyL55;
    }
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r14, 0, 0, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 576, CPyStatic_config_parser___globals);
        goto CPyL55;
    }
    cpy_r_parser = cpy_r_r15;
    cpy_r_r16 = CPyDef_config_parser___mypy_comments_to_config_map(cpy_r_line, cpy_r_template);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r16.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 577, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r17 = cpy_r_r16.f0;
    CPy_INCREF(cpy_r_r17);
    cpy_r_options = cpy_r_r17;
    cpy_r_r18 = cpy_r_r16.f1;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r16.f0);
    CPy_DECREF(cpy_r_r16.f1);
    cpy_r_parse_errors = cpy_r_r18;
    cpy_r_r19 = CPyStatics[1551]; /* 'dummy' */
    cpy_r_r20 = PyObject_SetItem(cpy_r_parser, cpy_r_r19, cpy_r_options);
    CPy_DECREF(cpy_r_options);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 578, CPyStatic_config_parser___globals);
        goto CPyL57;
    }
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_parse_errors)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = PyList_New(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 579, CPyStatic_config_parser___globals);
        goto CPyL57;
    }
    cpy_r_r25 = 0;
CPyL12: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_parse_errors)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL58;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_parse_errors, cpy_r_r25);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_mypy_comments", 579, CPyStatic_config_parser___globals, "str", cpy_r_r30);
        goto CPyL59;
    }
    cpy_r_x = cpy_r_r31;
    cpy_r_r32.f0 = cpy_r_lineno;
    cpy_r_r32.f1 = cpy_r_x;
    CPyTagged_INCREF(cpy_r_r32.f0);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_DECREF(cpy_r_x);
    cpy_r_r33 = PyTuple_New(2);
    if (unlikely(cpy_r_r33 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1701 = CPyTagged_StealAsObject(cpy_r_r32.f0);
    PyTuple_SET_ITEM(cpy_r_r33, 0, __tmp1701);
    PyObject *__tmp1702 = cpy_r_r32.f1;
    PyTuple_SET_ITEM(cpy_r_r33, 1, __tmp1702);
    cpy_r_r34 = CPyList_SetItemUnsafe(cpy_r_r24, cpy_r_r25, cpy_r_r33);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 579, CPyStatic_config_parser___globals);
        goto CPyL59;
    }
    cpy_r_r35 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r35;
    goto CPyL12;
CPyL16: ;
    cpy_r_r36 = CPyList_Extend(cpy_r_errors, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 579, CPyStatic_config_parser___globals);
        goto CPyL56;
    } else
        goto CPyL60;
CPyL17: ;
    cpy_r_r37 = CPyStatic_config_parser___globals;
    cpy_r_r38 = CPyStatics[4]; /* 'StringIO' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 581, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r39, 0, 0, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 581, CPyStatic_config_parser___globals);
        goto CPyL56;
    }
    cpy_r_stderr = cpy_r_r40;
    ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_strict_found = 0;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 582, CPyStatic_config_parser___globals);
        goto CPyL61;
    }
    cpy_r_r42 = CPyDef_config_parser___set_strict_flags_parse_mypy_comments_obj();
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 584, CPyStatic_config_parser___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *)cpy_r_r42)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *)cpy_r_r42)->___mypyc_env__);
    }
    ((mypy___config_parser___set_strict_flags_parse_mypy_comments_objObject *)cpy_r_r42)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 584, CPyStatic_config_parser___globals);
        goto CPyL62;
    }
    if (((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_set_strict_flags != NULL) {
        CPy_DECREF(((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_set_strict_flags);
    }
    ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_set_strict_flags = cpy_r_r42;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 584, CPyStatic_config_parser___globals);
        goto CPyL61;
    }
    cpy_r_r45 = CPyStatics[163]; /* '' */
    cpy_r_r46 = ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_set_strict_flags;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypy/config_parser.py", "parse_mypy_comments", "parse_mypy_comments_env", "set_strict_flags", 589, CPyStatic_config_parser___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r46);
CPyL24: ;
    cpy_r_r47 = CPyStatics[1551]; /* 'dummy' */
    cpy_r_r48 = PyObject_GetItem(cpy_r_parser, cpy_r_r47);
    CPy_DECREF(cpy_r_parser);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 589, CPyStatic_config_parser___globals);
        goto CPyL63;
    }
    cpy_r_r49 = CPyStatic_config_parser___ini_config_types;
    if (unlikely(cpy_r_r49 == NULL)) {
        goto CPyL64;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ini_config_types\" was not set");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 589, CPyStatic_config_parser___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r51 = CPyDef_config_parser___parse_section(cpy_r_r45, cpy_r_template, cpy_r_r46, cpy_r_r48, cpy_r_r49, cpy_r_stderr);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 588, CPyStatic_config_parser___globals);
        goto CPyL65;
    }
    cpy_r_r52 = cpy_r_r51.f0;
    CPy_INCREF(cpy_r_r52);
    cpy_r_new_sections = cpy_r_r52;
    cpy_r_r53 = cpy_r_r51.f1;
    CPy_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r51.f0);
    CPy_DECREF(cpy_r_r51.f1);
    cpy_r_reports = cpy_r_r53;
    cpy_r_r54 = PyList_New(0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL66;
    }
    cpy_r_r55 = CPyStatics[7]; /* 'getvalue' */
    PyObject *cpy_r_r56[1] = {cpy_r_stderr};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_VectorcallMethod(cpy_r_r55, cpy_r_r57, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_stderr);
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals, "str", cpy_r_r58);
        goto CPyL68;
    }
    cpy_r_r60 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r61[1] = {cpy_r_r59};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r60, cpy_r_r62, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r59);
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals, "str", cpy_r_r63);
        goto CPyL68;
    }
    cpy_r_r65 = CPyStatics[189]; /* '\n' */
    cpy_r_r66 = PyUnicode_Split(cpy_r_r64, cpy_r_r65, -1);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL68;
    }
    cpy_r_r67 = 0;
CPyL36: ;
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_r66)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = (Py_ssize_t)cpy_r_r67 < (Py_ssize_t)cpy_r_r70;
    if (!cpy_r_r71) goto CPyL70;
    cpy_r_r72 = CPyList_GetItemUnsafe(cpy_r_r66, cpy_r_r67);
    if (likely(PyUnicode_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals, "str", cpy_r_r72);
        goto CPyL71;
    }
    cpy_r_x_2 = cpy_r_r73;
    cpy_r_r74 = CPyStr_IsTrue(cpy_r_x_2);
    if (!cpy_r_r74) goto CPyL72;
    cpy_r_r75.f0 = cpy_r_lineno;
    cpy_r_r75.f1 = cpy_r_x_2;
    CPyTagged_INCREF(cpy_r_r75.f0);
    CPy_INCREF(cpy_r_r75.f1);
    CPy_DECREF(cpy_r_x_2);
    cpy_r_r76 = PyTuple_New(2);
    if (unlikely(cpy_r_r76 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1703 = CPyTagged_StealAsObject(cpy_r_r75.f0);
    PyTuple_SET_ITEM(cpy_r_r76, 0, __tmp1703);
    PyObject *__tmp1704 = cpy_r_r75.f1;
    PyTuple_SET_ITEM(cpy_r_r76, 1, __tmp1704);
    cpy_r_r77 = PyList_Append(cpy_r_r54, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL71;
    }
CPyL40: ;
    cpy_r_r79 = cpy_r_r67 + 2;
    cpy_r_r67 = cpy_r_r79;
    goto CPyL36;
CPyL41: ;
    cpy_r_r80 = CPyList_Extend(cpy_r_errors, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 591, CPyStatic_config_parser___globals);
        goto CPyL73;
    } else
        goto CPyL74;
CPyL42: ;
    cpy_r_r81 = PyDict_Size(cpy_r_reports);
    CPy_DECREF(cpy_r_reports);
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = cpy_r_r82 != 0;
    if (!cpy_r_r83) goto CPyL44;
    cpy_r_r84 = CPyStatics[1552]; /* 'Reports not supported in inline configuration' */
    cpy_r_r85.f0 = cpy_r_lineno;
    cpy_r_r85.f1 = cpy_r_r84;
    CPyTagged_INCREF(cpy_r_r85.f0);
    CPy_INCREF(cpy_r_r85.f1);
    cpy_r_r86 = PyTuple_New(2);
    if (unlikely(cpy_r_r86 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1705 = CPyTagged_StealAsObject(cpy_r_r85.f0);
    PyTuple_SET_ITEM(cpy_r_r86, 0, __tmp1705);
    PyObject *__tmp1706 = cpy_r_r85.f1;
    PyTuple_SET_ITEM(cpy_r_r86, 1, __tmp1706);
    cpy_r_r87 = PyList_Append(cpy_r_errors, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 593, CPyStatic_config_parser___globals);
        goto CPyL75;
    }
CPyL44: ;
    cpy_r_r89 = ((mypy___config_parser___parse_mypy_comments_envObject *)cpy_r_r0)->_strict_found;
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AttributeError("mypy/config_parser.py", "parse_mypy_comments", "parse_mypy_comments_env", "strict_found", 594, CPyStatic_config_parser___globals);
        goto CPyL75;
    }
CPyL45: ;
    if (!cpy_r_r89) goto CPyL76;
CPyL46: ;
    cpy_r_r90 = CPyStatics[1553]; /* ('Setting "strict" not supported in inline '
                                     'configuration: specify it in a configuration file '
                                     'instead, or set individual inline flags (see "mypy '
                                     '-h" for the list of flags enabled in strict mode)') */
    cpy_r_r91.f0 = cpy_r_lineno;
    cpy_r_r91.f1 = cpy_r_r90;
    CPyTagged_INCREF(cpy_r_r91.f0);
    CPy_INCREF(cpy_r_r91.f1);
    CPyTagged_DECREF(cpy_r_lineno);
    cpy_r_r92 = PyTuple_New(2);
    if (unlikely(cpy_r_r92 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1707 = CPyTagged_StealAsObject(cpy_r_r91.f0);
    PyTuple_SET_ITEM(cpy_r_r92, 0, __tmp1707);
    PyObject *__tmp1708 = cpy_r_r91.f1;
    PyTuple_SET_ITEM(cpy_r_r92, 1, __tmp1708);
    cpy_r_r93 = PyList_Append(cpy_r_errors, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 595, CPyStatic_config_parser___globals);
        goto CPyL77;
    }
CPyL47: ;
    cpy_r_r95 = CPyDict_Update(cpy_r_sections, cpy_r_new_sections);
    CPy_DECREF(cpy_r_new_sections);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 604, CPyStatic_config_parser___globals);
        goto CPyL54;
    }
    cpy_r_r97 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r97;
    goto CPyL4;
CPyL49: ;
    cpy_r_r98.f0 = cpy_r_sections;
    cpy_r_r98.f1 = cpy_r_errors;
    CPy_INCREF(cpy_r_r98.f0);
    CPy_INCREF(cpy_r_r98.f1);
    CPy_DECREF(cpy_r_sections);
    CPy_DECREF(cpy_r_errors);
    return cpy_r_r98;
CPyL50: ;
    tuple_T2OO __tmp1709 = { NULL, NULL };
    cpy_r_r99 = __tmp1709;
    return cpy_r_r99;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    goto CPyL50;
CPyL53: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL49;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_line);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_parser);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_parse_errors);
    goto CPyL50;
CPyL58: ;
    CPy_DECREF(cpy_r_parse_errors);
    goto CPyL16;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_parse_errors);
    CPy_DecRef(cpy_r_r24);
    goto CPyL50;
CPyL60: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL17;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_parser);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r42);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r46);
    goto CPyL50;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r48);
    goto CPyL26;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    goto CPyL50;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    CPy_DecRef(cpy_r_r54);
    goto CPyL50;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    CPy_DecRef(cpy_r_r54);
    goto CPyL50;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r59);
    goto CPyL50;
CPyL70: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL41;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r66);
    goto CPyL50;
CPyL72: ;
    CPy_DECREF(cpy_r_x_2);
    goto CPyL40;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_new_sections);
    CPy_DecRef(cpy_r_reports);
    goto CPyL50;
CPyL74: ;
    CPy_DECREF(cpy_r_r80);
    goto CPyL42;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPyTagged_DecRef(cpy_r_lineno);
    CPy_DecRef(cpy_r_new_sections);
    goto CPyL50;
CPyL76: ;
    CPyTagged_DECREF(cpy_r_lineno);
    goto CPyL47;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_sections);
    CPy_DecRef(cpy_r_new_sections);
    goto CPyL50;
}

PyObject *CPyPy_config_parser___parse_mypy_comments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "template", 0};
    static CPyArg_Parser parser = {"OO:parse_mypy_comments", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_template;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_template)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_template;
    if (likely(Py_TYPE(obj_template) == CPyType_mypy___options___Options))
        arg_template = obj_template;
    else {
        CPy_TypeError("mypy.options.Options", obj_template); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_config_parser___parse_mypy_comments(arg_args, arg_template);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1710 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1710);
    PyObject *__tmp1711 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1711);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "parse_mypy_comments", 560, CPyStatic_config_parser___globals);
    return NULL;
}

PyObject *CPyDef_config_parser___get_config_module_names(PyObject *cpy_r_filename, PyObject *cpy_r_modules) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_filename != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_filename);
    if (likely(cpy_r_filename != Py_None))
        cpy_r_r2 = cpy_r_filename;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "get_config_module_names", 609, CPyStatic_config_parser___globals, "str", cpy_r_filename);
        goto CPyL23;
    }
    cpy_r_r3 = CPyStr_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (cpy_r_r7) goto CPyL5;
CPyL4: ;
    cpy_r_r8 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL5: ;
    CPy_INCREF(cpy_r_filename);
    if (likely(cpy_r_filename != Py_None))
        cpy_r_r9 = cpy_r_filename;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "get_config_module_names", 613, CPyStatic_config_parser___globals, "str", cpy_r_filename);
        goto CPyL23;
    }
    cpy_r_r10 = CPyDef_config_parser___is_toml(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 613, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    if (cpy_r_r10) goto CPyL17;
    cpy_r_r11 = CPyStatics[71]; /* ', ' */
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = PyList_New(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 614, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    cpy_r_r15 = 0;
CPyL10: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_modules)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL15;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_modules, cpy_r_r15);
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "get_config_module_names", 614, CPyStatic_config_parser___globals, "str", cpy_r_r20);
        goto CPyL24;
    }
    cpy_r_module = cpy_r_r21;
    cpy_r_r22 = CPyStatics[1554]; /* '[mypy-' */
    cpy_r_r23 = CPyStatics[208]; /* ']' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_module, cpy_r_r23);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 614, CPyStatic_config_parser___globals);
        goto CPyL24;
    }
    cpy_r_r25 = CPyList_SetItemUnsafe(cpy_r_r14, cpy_r_r15, cpy_r_r24);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 614, CPyStatic_config_parser___globals);
        goto CPyL24;
    }
    cpy_r_r26 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r26;
    goto CPyL10;
CPyL15: ;
    cpy_r_r27 = PyUnicode_Join(cpy_r_r11, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 614, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    return cpy_r_r27;
CPyL17: ;
    cpy_r_r28 = CPyStatics[1555]; /* "', '" */
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 616, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_modules};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 616, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    if (likely(PyList_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "get_config_module_names", 616, CPyStatic_config_parser___globals, "list", cpy_r_r34);
        goto CPyL23;
    }
    cpy_r_r36 = PyUnicode_Join(cpy_r_r28, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 616, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    cpy_r_r37 = CPyStatics[1556]; /* "module = ['" */
    cpy_r_r38 = CPyStatics[1557]; /* "']" */
    cpy_r_r39 = CPyStr_Build(3, cpy_r_r37, cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 616, CPyStatic_config_parser___globals);
        goto CPyL23;
    }
    return cpy_r_r39;
CPyL23: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL24: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL23;
}

PyObject *CPyPy_config_parser___get_config_module_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"filename", "modules", 0};
    static CPyArg_Parser parser = {"OO:get_config_module_names", kwlist, 0};
    PyObject *obj_filename;
    PyObject *obj_modules;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_filename, &obj_modules)) {
        return NULL;
    }
    PyObject *arg_filename;
    if (PyUnicode_Check(obj_filename))
        arg_filename = obj_filename;
    else {
        arg_filename = NULL;
    }
    if (arg_filename != NULL) goto __LL1712;
    if (obj_filename == Py_None)
        arg_filename = obj_filename;
    else {
        arg_filename = NULL;
    }
    if (arg_filename != NULL) goto __LL1712;
    CPy_TypeError("str or None", obj_filename); 
    goto fail;
__LL1712: ;
    PyObject *arg_modules;
    if (likely(PyList_Check(obj_modules)))
        arg_modules = obj_modules;
    else {
        CPy_TypeError("list", obj_modules); 
        goto fail;
    }
    PyObject *retval = CPyDef_config_parser___get_config_module_names(arg_filename, arg_modules);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/config_parser.py", "get_config_module_names", 609, CPyStatic_config_parser___globals);
    return NULL;
}

char CPyDef_config_parser_____top_level__(void) {
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
    void *cpy_r_r16;
    void *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
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
    tuple_T2II cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject **cpy_r_r40;
    void *cpy_r_r42;
    void *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
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
    tuple_T2OO cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    tuple_T2OO cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    tuple_T7OOOOOOO cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    tuple_T2OO cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
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
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
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
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
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
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    int32_t cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
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
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
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
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    int32_t cpy_r_r247;
    char cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    char cpy_r_r268;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", -1, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_config_parser___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 1, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_argparse;
    cpy_r_r10 = (PyObject **)&CPyModule_configparser;
    cpy_r_r11 = (PyObject **)&CPyModule_glob;
    cpy_r_r12 = (PyObject **)&CPyModule_os;
    cpy_r_r13 = (PyObject **)&CPyModule_re;
    cpy_r_r14 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r15[6] = {cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14};
    cpy_r_r16 = (void *)&cpy_r_r15;
    int64_t cpy_r_r17[6] = {3, 4, 5, 6, 7, 8};
    cpy_r_r18 = (void *)&cpy_r_r17;
    cpy_r_r19 = CPyStatics[9278]; /* (('argparse', 'argparse', 'argparse'),
                                     ('configparser', 'configparser', 'configparser'),
                                     ('glob', 'glob', 'fileglob'), ('os', 'os', 'os'),
                                     ('re', 're', 're'), ('sys', 'sys', 'sys')) */
    cpy_r_r20 = CPyStatic_config_parser___globals;
    cpy_r_r21 = CPyStatics[1561]; /* 'mypy/config_parser.py' */
    cpy_r_r22 = CPyStatics[17]; /* '<module>' */
    cpy_r_r23 = CPyImport_ImportMany(cpy_r_r19, cpy_r_r16, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r18);
    if (!cpy_r_r23) goto CPyL87;
    cpy_r_r24 = CPyStatics[9068]; /* ('StringIO',) */
    cpy_r_r25 = CPyStatics[18]; /* 'io' */
    cpy_r_r26 = CPyStatic_config_parser___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 9, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_io = cpy_r_r27;
    CPy_INCREF(CPyModule_io);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[9279]; /* ('error_codes',) */
    cpy_r_r29 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r30 = CPyStatic_config_parser___globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 11, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_mypy___errorcodes = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyModule_sys;
    cpy_r_r33 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 13, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    if (likely(PyTuple_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/config_parser.py", "<module>", 13, CPyStatic_config_parser___globals, "tuple", cpy_r_r34);
        goto CPyL87;
    }
    cpy_r_r36.f0 = 6;
    cpy_r_r36.f1 = 22;
    CPyTagged_INCREF(cpy_r_r36.f0);
    CPyTagged_INCREF(cpy_r_r36.f1);
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1713 = CPyTagged_StealAsObject(cpy_r_r36.f0);
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp1713);
    PyObject *__tmp1714 = CPyTagged_StealAsObject(cpy_r_r36.f1);
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp1714);
    cpy_r_r38 = PyObject_RichCompare(cpy_r_r35, cpy_r_r37, 5);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 13, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    if (unlikely(!PyBool_Check(cpy_r_r38))) {
        CPy_TypeError("bool", cpy_r_r38); cpy_r_r39 = 2;
    } else
        cpy_r_r39 = cpy_r_r38 == Py_True;
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 13, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    if (!cpy_r_r39) goto CPyL13;
    cpy_r_r40 = (PyObject **)&CPyModule_tomllib;
    PyObject **cpy_r_r41[1] = {cpy_r_r40};
    cpy_r_r42 = (void *)&cpy_r_r41;
    int64_t cpy_r_r43[1] = {14};
    cpy_r_r44 = (void *)&cpy_r_r43;
    cpy_r_r45 = CPyStatics[9281]; /* (('tomllib', 'tomllib', 'tomllib'),) */
    cpy_r_r46 = CPyStatic_config_parser___globals;
    cpy_r_r47 = CPyStatics[1561]; /* 'mypy/config_parser.py' */
    cpy_r_r48 = CPyStatics[17]; /* '<module>' */
    cpy_r_r49 = CPyImport_ImportMany(cpy_r_r45, cpy_r_r42, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r44);
    if (!cpy_r_r49) {
        goto CPyL87;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r50 = 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 16, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r51 = CPyStatics[9282]; /* ('Any', 'Callable', 'Dict', 'Final', 'Iterable', 'List',
                                     'Mapping', 'MutableMapping', 'Sequence', 'TextIO',
                                     'Tuple', 'Union') */
    cpy_r_r52 = CPyStatics[21]; /* 'typing' */
    cpy_r_r53 = CPyStatic_config_parser___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 18, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_typing = cpy_r_r54;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r56 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r57 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r58 = CPyStatic_config_parser___globals;
    cpy_r_r59 = CPyImport_ImportFromMany(cpy_r_r57, cpy_r_r55, cpy_r_r56, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 32, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_typing_extensions = cpy_r_r59;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r60 = CPyStatics[9283]; /* ('defaults',) */
    cpy_r_r61 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r62 = CPyStatic_config_parser___globals;
    cpy_r_r63 = CPyImport_ImportFromMany(cpy_r_r61, cpy_r_r60, cpy_r_r60, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 34, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_mypy = cpy_r_r63;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r64 = CPyStatics[9284]; /* ('PER_MODULE_OPTIONS', 'Options') */
    cpy_r_r65 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r66 = CPyStatic_config_parser___globals;
    cpy_r_r67 = CPyImport_ImportFromMany(cpy_r_r65, cpy_r_r64, cpy_r_r64, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 35, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyModule_mypy___options = cpy_r_r67;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r68 = CPyStatic_config_parser___globals;
    cpy_r_r69 = CPyStatics[84]; /* 'Union' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 37, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r71 = (PyObject *)&PyUnicode_Type;
    cpy_r_r72 = (PyObject *)&PyBool_Type;
    cpy_r_r73 = (PyObject *)&PyLong_Type;
    cpy_r_r74 = (PyObject *)&PyFloat_Type;
    cpy_r_r75 = CPyStatic_config_parser___globals;
    cpy_r_r76 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL88;
    }
    cpy_r_r78 = (PyObject *)&PyUnicode_Type;
    cpy_r_r79 = (PyObject *)&PyUnicode_Type;
    cpy_r_r80.f0 = cpy_r_r78;
    cpy_r_r80.f1 = cpy_r_r79;
    CPy_INCREF(cpy_r_r80.f0);
    CPy_INCREF(cpy_r_r80.f1);
    cpy_r_r81 = PyTuple_New(2);
    if (unlikely(cpy_r_r81 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1715 = cpy_r_r80.f0;
    PyTuple_SET_ITEM(cpy_r_r81, 0, __tmp1715);
    PyObject *__tmp1716 = cpy_r_r80.f1;
    PyTuple_SET_ITEM(cpy_r_r81, 1, __tmp1716);
    cpy_r_r82 = PyObject_GetItem(cpy_r_r77, cpy_r_r81);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL88;
    }
    cpy_r_r83 = CPyStatic_config_parser___globals;
    cpy_r_r84 = CPyStatics[81]; /* 'List' */
    cpy_r_r85 = CPyDict_GetItem(cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL89;
    }
    cpy_r_r86 = (PyObject *)&PyUnicode_Type;
    cpy_r_r87 = PyObject_GetItem(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL89;
    }
    cpy_r_r88 = CPyStatic_config_parser___globals;
    cpy_r_r89 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL90;
    }
    cpy_r_r91 = (PyObject *)&PyLong_Type;
    cpy_r_r92 = (PyObject *)&PyLong_Type;
    cpy_r_r93.f0 = cpy_r_r91;
    cpy_r_r93.f1 = cpy_r_r92;
    CPy_INCREF(cpy_r_r93.f0);
    CPy_INCREF(cpy_r_r93.f1);
    cpy_r_r94 = PyTuple_New(2);
    if (unlikely(cpy_r_r94 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1717 = cpy_r_r93.f0;
    PyTuple_SET_ITEM(cpy_r_r94, 0, __tmp1717);
    PyObject *__tmp1718 = cpy_r_r93.f1;
    PyTuple_SET_ITEM(cpy_r_r94, 1, __tmp1718);
    cpy_r_r95 = PyObject_GetItem(cpy_r_r90, cpy_r_r94);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 38, CPyStatic_config_parser___globals);
        goto CPyL90;
    }
    cpy_r_r96.f0 = cpy_r_r71;
    cpy_r_r96.f1 = cpy_r_r72;
    cpy_r_r96.f2 = cpy_r_r73;
    cpy_r_r96.f3 = cpy_r_r74;
    cpy_r_r96.f4 = cpy_r_r82;
    cpy_r_r96.f5 = cpy_r_r87;
    cpy_r_r96.f6 = cpy_r_r95;
    CPy_INCREF(cpy_r_r96.f0);
    CPy_INCREF(cpy_r_r96.f1);
    CPy_INCREF(cpy_r_r96.f2);
    CPy_INCREF(cpy_r_r96.f3);
    CPy_INCREF(cpy_r_r96.f4);
    CPy_INCREF(cpy_r_r96.f5);
    CPy_INCREF(cpy_r_r96.f6);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = PyTuple_New(7);
    if (unlikely(cpy_r_r97 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1719 = cpy_r_r96.f0;
    PyTuple_SET_ITEM(cpy_r_r97, 0, __tmp1719);
    PyObject *__tmp1720 = cpy_r_r96.f1;
    PyTuple_SET_ITEM(cpy_r_r97, 1, __tmp1720);
    PyObject *__tmp1721 = cpy_r_r96.f2;
    PyTuple_SET_ITEM(cpy_r_r97, 2, __tmp1721);
    PyObject *__tmp1722 = cpy_r_r96.f3;
    PyTuple_SET_ITEM(cpy_r_r97, 3, __tmp1722);
    PyObject *__tmp1723 = cpy_r_r96.f4;
    PyTuple_SET_ITEM(cpy_r_r97, 4, __tmp1723);
    PyObject *__tmp1724 = cpy_r_r96.f5;
    PyTuple_SET_ITEM(cpy_r_r97, 5, __tmp1724);
    PyObject *__tmp1725 = cpy_r_r96.f6;
    PyTuple_SET_ITEM(cpy_r_r97, 6, __tmp1725);
    cpy_r_r98 = PyObject_GetItem(cpy_r_r70, cpy_r_r97);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 37, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r99 = CPyStatic_config_parser___globals;
    cpy_r_r100 = CPyStatics[1567]; /* '_CONFIG_VALUE_TYPES' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 37, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r103 = CPyStatic_config_parser___globals;
    cpy_r_r104 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r106 = CPyStatic_config_parser___globals;
    cpy_r_r107 = CPyStatics[507]; /* 'Any' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL91;
    }
    cpy_r_r109 = PyList_New(1);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL92;
    }
    cpy_r_r110 = (CPyPtr)&((PyListObject *)cpy_r_r109)->ob_item;
    cpy_r_r111 = *(CPyPtr *)cpy_r_r110;
    *(PyObject * *)cpy_r_r111 = cpy_r_r108;
    cpy_r_r112 = CPyStatic_config_parser___globals;
    cpy_r_r113 = CPyStatics[1567]; /* '_CONFIG_VALUE_TYPES' */
    cpy_r_r114 = CPyDict_GetItem(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL93;
    }
    cpy_r_r115.f0 = cpy_r_r109;
    cpy_r_r115.f1 = cpy_r_r114;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1726 = cpy_r_r115.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp1726);
    PyObject *__tmp1727 = cpy_r_r115.f1;
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp1727);
    cpy_r_r117 = PyObject_GetItem(cpy_r_r105, cpy_r_r116);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r118 = CPyStatic_config_parser___globals;
    cpy_r_r119 = CPyStatics[1568]; /* '_INI_PARSER_CALLABLE' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 40, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r122 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r123 = CPyStatic_config_parser___globals;
    cpy_r_r124 = CPyStatics[1570]; /* 'parse_version' */
    cpy_r_r125 = CPyDict_GetItem(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 155, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r126 = CPyStatics[1571]; /* 'custom_typing_module' */
    cpy_r_r127 = (PyObject *)&PyUnicode_Type;
    cpy_r_r128 = CPyStatics[1572]; /* 'custom_typeshed_dir' */
    cpy_r_r129 = CPyStatic_config_parser___globals;
    cpy_r_r130 = CPyStatics[1573]; /* 'expand_path' */
    cpy_r_r131 = CPyDict_GetItem(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 157, CPyStatic_config_parser___globals);
        goto CPyL94;
    }
    cpy_r_r132 = CPyStatics[1574]; /* 'mypy_path' */
    cpy_r_r133 = CPyDef_config_parser_____mypyc_lambda__0_obj();
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 158, CPyStatic_config_parser___globals);
        goto CPyL95;
    }
    cpy_r_r134 = CPyStatics[608]; /* 'files' */
    cpy_r_r135 = CPyStatic_config_parser___globals;
    cpy_r_r136 = CPyStatics[1575]; /* 'split_and_match_files' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 159, CPyStatic_config_parser___globals);
        goto CPyL96;
    }
    cpy_r_r138 = CPyStatics[1576]; /* 'quickstart_file' */
    cpy_r_r139 = CPyStatic_config_parser___globals;
    cpy_r_r140 = CPyStatics[1573]; /* 'expand_path' */
    cpy_r_r141 = CPyDict_GetItem(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 160, CPyStatic_config_parser___globals);
        goto CPyL97;
    }
    cpy_r_r142 = CPyStatics[1577]; /* 'junit_xml' */
    cpy_r_r143 = CPyStatic_config_parser___globals;
    cpy_r_r144 = CPyStatics[1573]; /* 'expand_path' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 161, CPyStatic_config_parser___globals);
        goto CPyL98;
    }
    cpy_r_r146 = CPyStatics[1578]; /* 'follow_imports' */
    cpy_r_r147 = CPyStatic_config_parser___globals;
    cpy_r_r148 = CPyStatics[1579]; /* 'check_follow_imports' */
    cpy_r_r149 = CPyDict_GetItem(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 162, CPyStatic_config_parser___globals);
        goto CPyL99;
    }
    cpy_r_r150 = CPyStatics[1580]; /* 'no_site_packages' */
    cpy_r_r151 = (PyObject *)&PyBool_Type;
    cpy_r_r152 = CPyStatics[169]; /* 'plugins' */
    cpy_r_r153 = CPyDef_config_parser_____mypyc_lambda__1_obj();
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 164, CPyStatic_config_parser___globals);
        goto CPyL100;
    }
    cpy_r_r154 = CPyStatics[1581]; /* 'always_true' */
    cpy_r_r155 = CPyDef_config_parser_____mypyc_lambda__2_obj();
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 165, CPyStatic_config_parser___globals);
        goto CPyL101;
    }
    cpy_r_r156 = CPyStatics[1582]; /* 'always_false' */
    cpy_r_r157 = CPyDef_config_parser_____mypyc_lambda__3_obj();
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 166, CPyStatic_config_parser___globals);
        goto CPyL102;
    }
    cpy_r_r158 = CPyStatics[1583]; /* 'enable_incomplete_feature' */
    cpy_r_r159 = CPyDef_config_parser_____mypyc_lambda__4_obj();
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 167, CPyStatic_config_parser___globals);
        goto CPyL103;
    }
    cpy_r_r160 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r161 = CPyDef_config_parser_____mypyc_lambda__5_obj();
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 168, CPyStatic_config_parser___globals);
        goto CPyL104;
    }
    cpy_r_r162 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r163 = CPyDef_config_parser_____mypyc_lambda__6_obj();
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 169, CPyStatic_config_parser___globals);
        goto CPyL105;
    }
    cpy_r_r164 = CPyStatics[1584]; /* 'package_root' */
    cpy_r_r165 = CPyDef_config_parser_____mypyc_lambda__7_obj();
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 170, CPyStatic_config_parser___globals);
        goto CPyL106;
    }
    cpy_r_r166 = CPyStatics[276]; /* 'cache_dir' */
    cpy_r_r167 = CPyStatic_config_parser___globals;
    cpy_r_r168 = CPyStatics[1573]; /* 'expand_path' */
    cpy_r_r169 = CPyDict_GetItem(cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 171, CPyStatic_config_parser___globals);
        goto CPyL107;
    }
    cpy_r_r170 = CPyStatics[1585]; /* 'python_executable' */
    cpy_r_r171 = CPyStatic_config_parser___globals;
    cpy_r_r172 = CPyStatics[1573]; /* 'expand_path' */
    cpy_r_r173 = CPyDict_GetItem(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 172, CPyStatic_config_parser___globals);
        goto CPyL108;
    }
    cpy_r_r174 = CPyStatics[1536]; /* 'strict' */
    cpy_r_r175 = (PyObject *)&PyBool_Type;
    cpy_r_r176 = CPyStatics[1586]; /* 'exclude' */
    cpy_r_r177 = CPyDef_config_parser_____mypyc_lambda__8_obj();
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 174, CPyStatic_config_parser___globals);
        goto CPyL109;
    }
    cpy_r_r178 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r179 = CPyStatic_config_parser___globals;
    cpy_r_r180 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r181 = CPyDict_GetItem(cpy_r_r179, cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 175, CPyStatic_config_parser___globals);
        goto CPyL110;
    }
    cpy_r_r182 = CPyStatics[635]; /* 'modules' */
    cpy_r_r183 = CPyStatic_config_parser___globals;
    cpy_r_r184 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r185 = CPyDict_GetItem(cpy_r_r183, cpy_r_r184);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 176, CPyStatic_config_parser___globals);
        goto CPyL111;
    }
    cpy_r_r186 = CPyDict_Build(22, cpy_r_r122, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r134, cpy_r_r137, cpy_r_r138, cpy_r_r141, cpy_r_r142, cpy_r_r145, cpy_r_r146, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r169, cpy_r_r170, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r181, cpy_r_r182, cpy_r_r185);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r157);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r169);
    CPy_DECREF(cpy_r_r173);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r181);
    CPy_DECREF(cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 154, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyStatic_config_parser___ini_config_types = cpy_r_r186;
    CPy_INCREF(CPyStatic_config_parser___ini_config_types);
    cpy_r_r187 = CPyStatic_config_parser___globals;
    cpy_r_r188 = CPyStatics[1589]; /* 'ini_config_types' */
    cpy_r_r189 = CPyDict_SetItem(cpy_r_r187, cpy_r_r188, cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    cpy_r_r190 = cpy_r_r189 >= 0;
    if (unlikely(!cpy_r_r190)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 154, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r191 = CPyStatic_config_parser___ini_config_types;
    if (likely(cpy_r_r191 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"ini_config_types\" was not set");
    cpy_r_r192 = 0;
    if (unlikely(!cpy_r_r192)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 180, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r193 = CPyDict_Copy(cpy_r_r191);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 180, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyStatic_config_parser___toml_config_types = cpy_r_r193;
    CPy_INCREF(CPyStatic_config_parser___toml_config_types);
    cpy_r_r194 = CPyStatic_config_parser___globals;
    cpy_r_r195 = CPyStatics[1590]; /* 'toml_config_types' */
    cpy_r_r196 = CPyDict_SetItem(cpy_r_r194, cpy_r_r195, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 180, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r198 = CPyStatic_config_parser___toml_config_types;
    if (likely(cpy_r_r198 != NULL)) goto CPyL63;
    PyErr_SetString(PyExc_NameError, "value for final name \"toml_config_types\" was not set");
    cpy_r_r199 = 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 181, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r200 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r201 = CPyStatic_config_parser___globals;
    cpy_r_r202 = CPyStatics[1570]; /* 'parse_version' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 183, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r204 = CPyStatics[1574]; /* 'mypy_path' */
    cpy_r_r205 = CPyDef_config_parser_____mypyc_lambda__9_obj();
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 184, CPyStatic_config_parser___globals);
        goto CPyL112;
    }
    cpy_r_r206 = CPyStatics[608]; /* 'files' */
    cpy_r_r207 = CPyDef_config_parser_____mypyc_lambda__10_obj();
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 185, CPyStatic_config_parser___globals);
        goto CPyL113;
    }
    cpy_r_r208 = CPyStatics[1578]; /* 'follow_imports' */
    cpy_r_r209 = CPyDef_config_parser_____mypyc_lambda__11_obj();
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 186, CPyStatic_config_parser___globals);
        goto CPyL114;
    }
    cpy_r_r210 = CPyStatics[169]; /* 'plugins' */
    cpy_r_r211 = CPyStatic_config_parser___globals;
    cpy_r_r212 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r213 = CPyDict_GetItem(cpy_r_r211, cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 187, CPyStatic_config_parser___globals);
        goto CPyL115;
    }
    cpy_r_r214 = CPyStatics[1581]; /* 'always_true' */
    cpy_r_r215 = CPyStatic_config_parser___globals;
    cpy_r_r216 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r217 = CPyDict_GetItem(cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 188, CPyStatic_config_parser___globals);
        goto CPyL116;
    }
    cpy_r_r218 = CPyStatics[1582]; /* 'always_false' */
    cpy_r_r219 = CPyStatic_config_parser___globals;
    cpy_r_r220 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r221 = CPyDict_GetItem(cpy_r_r219, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 189, CPyStatic_config_parser___globals);
        goto CPyL117;
    }
    cpy_r_r222 = CPyStatics[1583]; /* 'enable_incomplete_feature' */
    cpy_r_r223 = CPyStatic_config_parser___globals;
    cpy_r_r224 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 190, CPyStatic_config_parser___globals);
        goto CPyL118;
    }
    cpy_r_r226 = CPyStatics[1545]; /* 'disable_error_code' */
    cpy_r_r227 = CPyDef_config_parser_____mypyc_lambda__12_obj();
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 191, CPyStatic_config_parser___globals);
        goto CPyL119;
    }
    cpy_r_r228 = CPyStatics[1546]; /* 'enable_error_code' */
    cpy_r_r229 = CPyDef_config_parser_____mypyc_lambda__13_obj();
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 192, CPyStatic_config_parser___globals);
        goto CPyL120;
    }
    cpy_r_r230 = CPyStatics[1584]; /* 'package_root' */
    cpy_r_r231 = CPyStatic_config_parser___globals;
    cpy_r_r232 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r233 = CPyDict_GetItem(cpy_r_r231, cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 193, CPyStatic_config_parser___globals);
        goto CPyL121;
    }
    cpy_r_r234 = CPyStatics[1586]; /* 'exclude' */
    cpy_r_r235 = CPyStatic_config_parser___globals;
    cpy_r_r236 = CPyStatics[1591]; /* 'str_or_array_as_list' */
    cpy_r_r237 = CPyDict_GetItem(cpy_r_r235, cpy_r_r236);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 194, CPyStatic_config_parser___globals);
        goto CPyL122;
    }
    cpy_r_r238 = CPyStatics[1587]; /* 'packages' */
    cpy_r_r239 = CPyStatic_config_parser___globals;
    cpy_r_r240 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r241 = CPyDict_GetItem(cpy_r_r239, cpy_r_r240);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 195, CPyStatic_config_parser___globals);
        goto CPyL123;
    }
    cpy_r_r242 = CPyStatics[635]; /* 'modules' */
    cpy_r_r243 = CPyStatic_config_parser___globals;
    cpy_r_r244 = CPyStatics[1588]; /* 'try_split' */
    cpy_r_r245 = CPyDict_GetItem(cpy_r_r243, cpy_r_r244);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 196, CPyStatic_config_parser___globals);
        goto CPyL124;
    }
    cpy_r_r246 = CPyDict_Build(14, cpy_r_r200, cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r213, cpy_r_r214, cpy_r_r217, cpy_r_r218, cpy_r_r221, cpy_r_r222, cpy_r_r225, cpy_r_r226, cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r233, cpy_r_r234, cpy_r_r237, cpy_r_r238, cpy_r_r241, cpy_r_r242, cpy_r_r245);
    CPy_DECREF(cpy_r_r203);
    CPy_DECREF(cpy_r_r205);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r213);
    CPy_DECREF(cpy_r_r217);
    CPy_DECREF(cpy_r_r221);
    CPy_DECREF(cpy_r_r225);
    CPy_DECREF(cpy_r_r227);
    CPy_DECREF(cpy_r_r229);
    CPy_DECREF(cpy_r_r233);
    CPy_DECREF(cpy_r_r237);
    CPy_DECREF(cpy_r_r241);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 182, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r247 = CPyDict_Update(cpy_r_r198, cpy_r_r246);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r248 = cpy_r_r247 >= 0;
    if (unlikely(!cpy_r_r248)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 181, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r249 = CPyModule_sys;
    cpy_r_r250 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r251 = CPyObject_GetAttr(cpy_r_r249, cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 411, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    CPyStatic_config_parser___mypy___config_parser___parse_section___stderr = cpy_r_r251;
    CPy_INCREF(CPyStatic_config_parser___mypy___config_parser___parse_section___stderr);
    CPy_DECREF(cpy_r_r251);
    cpy_r_r252 = CPyModule_builtins;
    cpy_r_r253 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r254 = CPyObject_GetAttr(cpy_r_r252, cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r255 = PyTuple_Pack(1, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    if (unlikely(cpy_r_r255 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r256 = CPyStatics[558]; /* 'mypy.config_parser' */
    cpy_r_r257 = (PyObject *)CPyType_config_parser___ConfigTOMLValueError_template;
    cpy_r_r258 = CPyType_FromTemplate(cpy_r_r257, cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r258 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    cpy_r_r259 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r260 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r261 = PyTuple_Pack(1, cpy_r_r260);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL125;
    }
    cpy_r_r262 = PyObject_SetAttr(cpy_r_r258, cpy_r_r259, cpy_r_r261);
    CPy_DECREF(cpy_r_r261);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL125;
    }
    CPyType_config_parser___ConfigTOMLValueError = (PyTypeObject *)cpy_r_r258;
    CPy_INCREF(CPyType_config_parser___ConfigTOMLValueError);
    cpy_r_r264 = CPyStatic_config_parser___globals;
    cpy_r_r265 = CPyStatics[1592]; /* 'ConfigTOMLValueError' */
    cpy_r_r266 = CPyDict_SetItem(cpy_r_r264, cpy_r_r265, cpy_r_r258);
    CPy_DECREF(cpy_r_r258);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypy/config_parser.py", "<module>", 619, CPyStatic_config_parser___globals);
        goto CPyL87;
    }
    return 1;
CPyL87: ;
    cpy_r_r268 = 2;
    return cpy_r_r268;
CPyL88: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL87;
CPyL89: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r82);
    goto CPyL87;
CPyL90: ;
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r87);
    goto CPyL87;
CPyL91: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL87;
CPyL92: ;
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r108);
    goto CPyL87;
CPyL93: ;
    CPy_DecRef(cpy_r_r105);
    CPy_DecRef(cpy_r_r109);
    goto CPyL87;
CPyL94: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL87;
CPyL95: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    goto CPyL87;
CPyL96: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    goto CPyL87;
CPyL97: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    goto CPyL87;
CPyL98: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    goto CPyL87;
CPyL99: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    goto CPyL87;
CPyL100: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    goto CPyL87;
CPyL101: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    goto CPyL87;
CPyL102: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    goto CPyL87;
CPyL103: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    goto CPyL87;
CPyL104: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    goto CPyL87;
CPyL105: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    goto CPyL87;
CPyL106: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    goto CPyL87;
CPyL107: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r165);
    goto CPyL87;
CPyL108: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r169);
    goto CPyL87;
CPyL109: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r169);
    CPy_DecRef(cpy_r_r173);
    goto CPyL87;
CPyL110: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r169);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r177);
    goto CPyL87;
CPyL111: ;
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r141);
    CPy_DecRef(cpy_r_r145);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r169);
    CPy_DecRef(cpy_r_r173);
    CPy_DecRef(cpy_r_r177);
    CPy_DecRef(cpy_r_r181);
    goto CPyL87;
CPyL112: ;
    CPy_DecRef(cpy_r_r203);
    goto CPyL87;
CPyL113: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    goto CPyL87;
CPyL114: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    goto CPyL87;
CPyL115: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    goto CPyL87;
CPyL116: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    goto CPyL87;
CPyL117: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    goto CPyL87;
CPyL118: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    goto CPyL87;
CPyL119: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    goto CPyL87;
CPyL120: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r227);
    goto CPyL87;
CPyL121: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r229);
    goto CPyL87;
CPyL122: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r229);
    CPy_DecRef(cpy_r_r233);
    goto CPyL87;
CPyL123: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r229);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    goto CPyL87;
CPyL124: ;
    CPy_DecRef(cpy_r_r203);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r207);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r217);
    CPy_DecRef(cpy_r_r221);
    CPy_DecRef(cpy_r_r225);
    CPy_DecRef(cpy_r_r227);
    CPy_DecRef(cpy_r_r229);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r237);
    CPy_DecRef(cpy_r_r241);
    goto CPyL87;
CPyL125: ;
    CPy_DecRef(cpy_r_r258);
    goto CPyL87;
}
