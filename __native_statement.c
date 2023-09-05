#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *statement___transform_for_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_for_stmt_env(void);

static PyObject *
statement___transform_for_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_for_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_for_stmt_env_setup(type);
}

static int
statement___transform_for_stmt_env_traverse(mypyc___irbuild___statement___transform_for_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_s);
    Py_VISIT(self->_body);
    Py_VISIT(self->_else_block);
    return 0;
}

static int
statement___transform_for_stmt_env_clear(mypyc___irbuild___statement___transform_for_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_s);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_else_block);
    return 0;
}

static void
statement___transform_for_stmt_env_dealloc(mypyc___irbuild___statement___transform_for_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_for_stmt_env_dealloc)
    statement___transform_for_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_for_stmt_env_vtable[1];
static bool
CPyDef_statement___transform_for_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_for_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___transform_for_stmt_env_vtable, statement___transform_for_stmt_env_vtable_scratch, sizeof(statement___transform_for_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___transform_for_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_for_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_for_stmt_env",
    .tp_new = statement___transform_for_stmt_env_new,
    .tp_dealloc = (destructor)statement___transform_for_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___transform_for_stmt_env_traverse,
    .tp_clear = (inquiry)statement___transform_for_stmt_env_clear,
    .tp_methods = statement___transform_for_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_for_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___transform_for_stmt_env_template = &CPyType_statement___transform_for_stmt_env_template_;

static PyObject *
statement___transform_for_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_for_stmt_envObject *self;
    self = (mypyc___irbuild___statement___transform_for_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_for_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_for_stmt_env(void)
{
    PyObject *self = statement___transform_for_stmt_env_setup(CPyType_statement___transform_for_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___body_transform_for_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___body_transform_for_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___body_transform_for_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___body_transform_for_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___body_transform_for_stmt_obj(void);

static PyObject *
statement___body_transform_for_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___body_transform_for_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___body_transform_for_stmt_obj_setup(type);
}

static int
statement___body_transform_for_stmt_obj_traverse(mypyc___irbuild___statement___body_transform_for_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject))));
    return 0;
}

static int
statement___body_transform_for_stmt_obj_clear(mypyc___irbuild___statement___body_transform_for_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject))));
    return 0;
}

static void
statement___body_transform_for_stmt_obj_dealloc(mypyc___irbuild___statement___body_transform_for_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___body_transform_for_stmt_obj_dealloc)
    statement___body_transform_for_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___body_transform_for_stmt_obj_vtable[2];
static bool
CPyDef_statement___body_transform_for_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___body_transform_for_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___body_transform_for_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___body_transform_for_stmt_obj_____get__,
    };
    memcpy(statement___body_transform_for_stmt_obj_vtable, statement___body_transform_for_stmt_obj_vtable_scratch, sizeof(statement___body_transform_for_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___body_transform_for_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___body_transform_for_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___body_transform_for_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___body_transform_for_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "body_transform_for_stmt_obj",
    .tp_new = statement___body_transform_for_stmt_obj_new,
    .tp_dealloc = (destructor)statement___body_transform_for_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___body_transform_for_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___body_transform_for_stmt_obj_clear,
    .tp_methods = statement___body_transform_for_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___body_transform_for_stmt_obj,
    .tp_members = statement___body_transform_for_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___body_transform_for_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___body_transform_for_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___body_transform_for_stmt_obj_template = &CPyType_statement___body_transform_for_stmt_obj_template_;

static PyObject *
statement___body_transform_for_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___body_transform_for_stmt_objObject *self;
    self = (mypyc___irbuild___statement___body_transform_for_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___body_transform_for_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___body_transform_for_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___body_transform_for_stmt_obj(void)
{
    PyObject *self = statement___body_transform_for_stmt_obj_setup(CPyType_statement___body_transform_for_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___else_block_transform_for_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___else_block_transform_for_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___else_block_transform_for_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___else_block_transform_for_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___else_block_transform_for_stmt_obj(void);

static PyObject *
statement___else_block_transform_for_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___else_block_transform_for_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___else_block_transform_for_stmt_obj_setup(type);
}

static int
statement___else_block_transform_for_stmt_obj_traverse(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject))));
    return 0;
}

static int
statement___else_block_transform_for_stmt_obj_clear(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject))));
    return 0;
}

static void
statement___else_block_transform_for_stmt_obj_dealloc(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___else_block_transform_for_stmt_obj_dealloc)
    statement___else_block_transform_for_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___else_block_transform_for_stmt_obj_vtable[2];
static bool
CPyDef_statement___else_block_transform_for_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___else_block_transform_for_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___else_block_transform_for_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___else_block_transform_for_stmt_obj_____get__,
    };
    memcpy(statement___else_block_transform_for_stmt_obj_vtable, statement___else_block_transform_for_stmt_obj_vtable_scratch, sizeof(statement___else_block_transform_for_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___else_block_transform_for_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___else_block_transform_for_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___else_block_transform_for_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___else_block_transform_for_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "else_block_transform_for_stmt_obj",
    .tp_new = statement___else_block_transform_for_stmt_obj_new,
    .tp_dealloc = (destructor)statement___else_block_transform_for_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___else_block_transform_for_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___else_block_transform_for_stmt_obj_clear,
    .tp_methods = statement___else_block_transform_for_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___else_block_transform_for_stmt_obj,
    .tp_members = statement___else_block_transform_for_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___else_block_transform_for_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___else_block_transform_for_stmt_obj_template = &CPyType_statement___else_block_transform_for_stmt_obj_template_;

static PyObject *
statement___else_block_transform_for_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *self;
    self = (mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___else_block_transform_for_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___else_block_transform_for_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___else_block_transform_for_stmt_obj(void)
{
    PyObject *self = statement___else_block_transform_for_stmt_obj_setup(CPyType_statement___else_block_transform_for_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___transform_try_except_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_try_except_stmt_env(void);

static PyObject *
statement___transform_try_except_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_try_except_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_try_except_stmt_env_setup(type);
}

static int
statement___transform_try_except_stmt_env_traverse(mypyc___irbuild___statement___transform_try_except_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_t);
    Py_VISIT(self->_body);
    Py_VISIT(self->_make_handler);
    Py_VISIT(self->_make_entry);
    Py_VISIT(self->_type);
    Py_VISIT(self->_var);
    Py_VISIT(self->_handlers);
    return 0;
}

static int
statement___transform_try_except_stmt_env_clear(mypyc___irbuild___statement___transform_try_except_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_make_handler);
    Py_CLEAR(self->_make_entry);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_var);
    Py_CLEAR(self->_handlers);
    return 0;
}

static void
statement___transform_try_except_stmt_env_dealloc(mypyc___irbuild___statement___transform_try_except_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_try_except_stmt_env_dealloc)
    statement___transform_try_except_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_try_except_stmt_env_vtable[1];
static bool
CPyDef_statement___transform_try_except_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_try_except_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___transform_try_except_stmt_env_vtable, statement___transform_try_except_stmt_env_vtable_scratch, sizeof(statement___transform_try_except_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___transform_try_except_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_try_except_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_try_except_stmt_env",
    .tp_new = statement___transform_try_except_stmt_env_new,
    .tp_dealloc = (destructor)statement___transform_try_except_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___transform_try_except_stmt_env_traverse,
    .tp_clear = (inquiry)statement___transform_try_except_stmt_env_clear,
    .tp_methods = statement___transform_try_except_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_try_except_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___transform_try_except_stmt_env_template = &CPyType_statement___transform_try_except_stmt_env_template_;

static PyObject *
statement___transform_try_except_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_try_except_stmt_envObject *self;
    self = (mypyc___irbuild___statement___transform_try_except_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_try_except_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_try_except_stmt_env(void)
{
    PyObject *self = statement___transform_try_except_stmt_env_setup(CPyType_statement___transform_try_except_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___body_transform_try_except_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___body_transform_try_except_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___body_transform_try_except_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___body_transform_try_except_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___body_transform_try_except_stmt_obj(void);

static PyObject *
statement___body_transform_try_except_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___body_transform_try_except_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___body_transform_try_except_stmt_obj_setup(type);
}

static int
statement___body_transform_try_except_stmt_obj_traverse(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject))));
    return 0;
}

static int
statement___body_transform_try_except_stmt_obj_clear(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject))));
    return 0;
}

static void
statement___body_transform_try_except_stmt_obj_dealloc(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___body_transform_try_except_stmt_obj_dealloc)
    statement___body_transform_try_except_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___body_transform_try_except_stmt_obj_vtable[2];
static bool
CPyDef_statement___body_transform_try_except_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___body_transform_try_except_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___body_transform_try_except_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___body_transform_try_except_stmt_obj_____get__,
    };
    memcpy(statement___body_transform_try_except_stmt_obj_vtable, statement___body_transform_try_except_stmt_obj_vtable_scratch, sizeof(statement___body_transform_try_except_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___body_transform_try_except_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___body_transform_try_except_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___body_transform_try_except_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___body_transform_try_except_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "body_transform_try_except_stmt_obj",
    .tp_new = statement___body_transform_try_except_stmt_obj_new,
    .tp_dealloc = (destructor)statement___body_transform_try_except_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___body_transform_try_except_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___body_transform_try_except_stmt_obj_clear,
    .tp_methods = statement___body_transform_try_except_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___body_transform_try_except_stmt_obj,
    .tp_members = statement___body_transform_try_except_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___body_transform_try_except_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___body_transform_try_except_stmt_obj_template = &CPyType_statement___body_transform_try_except_stmt_obj_template_;

static PyObject *
statement___body_transform_try_except_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *self;
    self = (mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___body_transform_try_except_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___body_transform_try_except_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___body_transform_try_except_stmt_obj(void)
{
    PyObject *self = statement___body_transform_try_except_stmt_obj_setup(CPyType_statement___body_transform_try_except_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___make_handler_transform_try_except_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_env(void);

static PyObject *
statement___make_handler_transform_try_except_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___make_handler_transform_try_except_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___make_handler_transform_try_except_stmt_env_setup(type);
}

static int
statement___make_handler_transform_try_except_stmt_env_traverse(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_body);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_t);
    Py_VISIT(self->_make_handler);
    Py_VISIT(self->_make_entry);
    return 0;
}

static int
statement___make_handler_transform_try_except_stmt_env_clear(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_make_handler);
    Py_CLEAR(self->_make_entry);
    return 0;
}

static void
statement___make_handler_transform_try_except_stmt_env_dealloc(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___make_handler_transform_try_except_stmt_env_dealloc)
    statement___make_handler_transform_try_except_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___make_handler_transform_try_except_stmt_env_vtable[1];
static bool
CPyDef_statement___make_handler_transform_try_except_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___make_handler_transform_try_except_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___make_handler_transform_try_except_stmt_env_vtable, statement___make_handler_transform_try_except_stmt_env_vtable_scratch, sizeof(statement___make_handler_transform_try_except_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___make_handler_transform_try_except_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___make_handler_transform_try_except_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_handler_transform_try_except_stmt_env",
    .tp_new = statement___make_handler_transform_try_except_stmt_env_new,
    .tp_dealloc = (destructor)statement___make_handler_transform_try_except_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___make_handler_transform_try_except_stmt_env_traverse,
    .tp_clear = (inquiry)statement___make_handler_transform_try_except_stmt_env_clear,
    .tp_methods = statement___make_handler_transform_try_except_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___make_handler_transform_try_except_stmt_env_template = &CPyType_statement___make_handler_transform_try_except_stmt_env_template_;

static PyObject *
statement___make_handler_transform_try_except_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *self;
    self = (mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___make_handler_transform_try_except_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_env(void)
{
    PyObject *self = statement___make_handler_transform_try_except_stmt_env_setup(CPyType_statement___make_handler_transform_try_except_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___make_handler_transform_try_except_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___make_handler_transform_try_except_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___make_handler_transform_try_except_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___make_handler_transform_try_except_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_obj(void);

static PyObject *
statement___make_handler_transform_try_except_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___make_handler_transform_try_except_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___make_handler_transform_try_except_stmt_obj_setup(type);
}

static int
statement___make_handler_transform_try_except_stmt_obj_traverse(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject))));
    return 0;
}

static int
statement___make_handler_transform_try_except_stmt_obj_clear(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject))));
    return 0;
}

static void
statement___make_handler_transform_try_except_stmt_obj_dealloc(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___make_handler_transform_try_except_stmt_obj_dealloc)
    statement___make_handler_transform_try_except_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___make_handler_transform_try_except_stmt_obj_vtable[2];
static bool
CPyDef_statement___make_handler_transform_try_except_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___make_handler_transform_try_except_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___make_handler_transform_try_except_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___make_handler_transform_try_except_stmt_obj_____get__,
    };
    memcpy(statement___make_handler_transform_try_except_stmt_obj_vtable, statement___make_handler_transform_try_except_stmt_obj_vtable_scratch, sizeof(statement___make_handler_transform_try_except_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___make_handler_transform_try_except_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___make_handler_transform_try_except_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___make_handler_transform_try_except_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___make_handler_transform_try_except_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_handler_transform_try_except_stmt_obj",
    .tp_new = statement___make_handler_transform_try_except_stmt_obj_new,
    .tp_dealloc = (destructor)statement___make_handler_transform_try_except_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___make_handler_transform_try_except_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___make_handler_transform_try_except_stmt_obj_clear,
    .tp_methods = statement___make_handler_transform_try_except_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___make_handler_transform_try_except_stmt_obj,
    .tp_members = statement___make_handler_transform_try_except_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___make_handler_transform_try_except_stmt_obj_template = &CPyType_statement___make_handler_transform_try_except_stmt_obj_template_;

static PyObject *
statement___make_handler_transform_try_except_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *self;
    self = (mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___make_handler_transform_try_except_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___make_handler_transform_try_except_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_obj(void)
{
    PyObject *self = statement___make_handler_transform_try_except_stmt_obj_setup(CPyType_statement___make_handler_transform_try_except_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj(void);

static PyObject *
statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_setup(type);
}

static int
statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_dealloc)
    statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable, statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_transform_try_except_stmt_make_handler_obj",
    .tp_new = statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_clear,
    .tp_methods = statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj,
    .tp_members = statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_template = &CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_template_;

static PyObject *
statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_setup(CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___make_entry_transform_try_except_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___make_entry_transform_try_except_stmt_env(void);

static PyObject *
statement___make_entry_transform_try_except_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___make_entry_transform_try_except_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___make_entry_transform_try_except_stmt_env_setup(type);
}

static int
statement___make_entry_transform_try_except_stmt_env_traverse(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_type);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_t);
    Py_VISIT(self->_body);
    Py_VISIT(self->_make_handler);
    Py_VISIT(self->_make_entry);
    return 0;
}

static int
statement___make_entry_transform_try_except_stmt_env_clear(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_make_handler);
    Py_CLEAR(self->_make_entry);
    return 0;
}

static void
statement___make_entry_transform_try_except_stmt_env_dealloc(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___make_entry_transform_try_except_stmt_env_dealloc)
    statement___make_entry_transform_try_except_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___make_entry_transform_try_except_stmt_env_vtable[1];
static bool
CPyDef_statement___make_entry_transform_try_except_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___make_entry_transform_try_except_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___make_entry_transform_try_except_stmt_env_vtable, statement___make_entry_transform_try_except_stmt_env_vtable_scratch, sizeof(statement___make_entry_transform_try_except_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___make_entry_transform_try_except_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___make_entry_transform_try_except_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_entry_transform_try_except_stmt_env",
    .tp_new = statement___make_entry_transform_try_except_stmt_env_new,
    .tp_dealloc = (destructor)statement___make_entry_transform_try_except_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___make_entry_transform_try_except_stmt_env_traverse,
    .tp_clear = (inquiry)statement___make_entry_transform_try_except_stmt_env_clear,
    .tp_methods = statement___make_entry_transform_try_except_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___make_entry_transform_try_except_stmt_env_template = &CPyType_statement___make_entry_transform_try_except_stmt_env_template_;

static PyObject *
statement___make_entry_transform_try_except_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *self;
    self = (mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___make_entry_transform_try_except_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___make_entry_transform_try_except_stmt_env(void)
{
    PyObject *self = statement___make_entry_transform_try_except_stmt_env_setup(CPyType_statement___make_entry_transform_try_except_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___make_entry_transform_try_except_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___make_entry_transform_try_except_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___make_entry_transform_try_except_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___make_entry_transform_try_except_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___make_entry_transform_try_except_stmt_obj(void);

static PyObject *
statement___make_entry_transform_try_except_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___make_entry_transform_try_except_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___make_entry_transform_try_except_stmt_obj_setup(type);
}

static int
statement___make_entry_transform_try_except_stmt_obj_traverse(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject))));
    return 0;
}

static int
statement___make_entry_transform_try_except_stmt_obj_clear(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject))));
    return 0;
}

static void
statement___make_entry_transform_try_except_stmt_obj_dealloc(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___make_entry_transform_try_except_stmt_obj_dealloc)
    statement___make_entry_transform_try_except_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___make_entry_transform_try_except_stmt_obj_vtable[2];
static bool
CPyDef_statement___make_entry_transform_try_except_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___make_entry_transform_try_except_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___make_entry_transform_try_except_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___make_entry_transform_try_except_stmt_obj_____get__,
    };
    memcpy(statement___make_entry_transform_try_except_stmt_obj_vtable, statement___make_entry_transform_try_except_stmt_obj_vtable_scratch, sizeof(statement___make_entry_transform_try_except_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___make_entry_transform_try_except_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___make_entry_transform_try_except_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___make_entry_transform_try_except_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___make_entry_transform_try_except_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "make_entry_transform_try_except_stmt_obj",
    .tp_new = statement___make_entry_transform_try_except_stmt_obj_new,
    .tp_dealloc = (destructor)statement___make_entry_transform_try_except_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___make_entry_transform_try_except_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___make_entry_transform_try_except_stmt_obj_clear,
    .tp_methods = statement___make_entry_transform_try_except_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___make_entry_transform_try_except_stmt_obj,
    .tp_members = statement___make_entry_transform_try_except_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___make_entry_transform_try_except_stmt_obj_template = &CPyType_statement___make_entry_transform_try_except_stmt_obj_template_;

static PyObject *
statement___make_entry_transform_try_except_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *self;
    self = (mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___make_entry_transform_try_except_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___make_entry_transform_try_except_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___make_entry_transform_try_except_stmt_obj(void)
{
    PyObject *self = statement___make_entry_transform_try_except_stmt_obj_setup(CPyType_statement___make_entry_transform_try_except_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj(void);

static PyObject *
statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_setup(type);
}

static int
statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_dealloc)
    statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable, statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_transform_try_except_stmt_make_entry_obj",
    .tp_new = statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_clear,
    .tp_methods = statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj,
    .tp_members = statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_template = &CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_template_;

static PyObject *
statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_setup(CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__2_transform_try_except_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__2_transform_try_except_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__2_transform_try_except_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj(void);

static PyObject *
statement_____mypyc_lambda__2_transform_try_except_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__2_transform_try_except_stmt_obj_setup(type);
}

static int
statement_____mypyc_lambda__2_transform_try_except_stmt_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__2_transform_try_except_stmt_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__2_transform_try_except_stmt_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__2_transform_try_except_stmt_obj_dealloc)
    statement_____mypyc_lambda__2_transform_try_except_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable, statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__2_transform_try_except_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__2_transform_try_except_stmt_obj",
    .tp_new = statement_____mypyc_lambda__2_transform_try_except_stmt_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__2_transform_try_except_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__2_transform_try_except_stmt_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__2_transform_try_except_stmt_obj_clear,
    .tp_methods = statement_____mypyc_lambda__2_transform_try_except_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__2_transform_try_except_stmt_obj,
    .tp_members = statement_____mypyc_lambda__2_transform_try_except_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_template = &CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_template_;

static PyObject *
statement_____mypyc_lambda__2_transform_try_except_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__2_transform_try_except_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__2_transform_try_except_stmt_obj_setup(CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___transform_try_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_try_stmt_env(void);

static PyObject *
statement___transform_try_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_try_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_try_stmt_env_setup(type);
}

static int
statement___transform_try_stmt_env_traverse(mypyc___irbuild___statement___transform_try_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_t);
    Py_VISIT(self->_body);
    Py_VISIT(self->_transform_try_body);
    return 0;
}

static int
statement___transform_try_stmt_env_clear(mypyc___irbuild___statement___transform_try_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_t);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->_transform_try_body);
    return 0;
}

static void
statement___transform_try_stmt_env_dealloc(mypyc___irbuild___statement___transform_try_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_try_stmt_env_dealloc)
    statement___transform_try_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_try_stmt_env_vtable[1];
static bool
CPyDef_statement___transform_try_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_try_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___transform_try_stmt_env_vtable, statement___transform_try_stmt_env_vtable_scratch, sizeof(statement___transform_try_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___transform_try_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_try_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_try_stmt_env",
    .tp_new = statement___transform_try_stmt_env_new,
    .tp_dealloc = (destructor)statement___transform_try_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___transform_try_stmt_env_traverse,
    .tp_clear = (inquiry)statement___transform_try_stmt_env_clear,
    .tp_methods = statement___transform_try_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_try_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___transform_try_stmt_env_template = &CPyType_statement___transform_try_stmt_env_template_;

static PyObject *
statement___transform_try_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_try_stmt_envObject *self;
    self = (mypyc___irbuild___statement___transform_try_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_try_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_try_stmt_env(void)
{
    PyObject *self = statement___transform_try_stmt_env_setup(CPyType_statement___transform_try_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___transform_try_body_transform_try_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___transform_try_body_transform_try_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___transform_try_body_transform_try_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___transform_try_body_transform_try_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_try_body_transform_try_stmt_obj(void);

static PyObject *
statement___transform_try_body_transform_try_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_try_body_transform_try_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_try_body_transform_try_stmt_obj_setup(type);
}

static int
statement___transform_try_body_transform_try_stmt_obj_traverse(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject))));
    return 0;
}

static int
statement___transform_try_body_transform_try_stmt_obj_clear(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject))));
    return 0;
}

static void
statement___transform_try_body_transform_try_stmt_obj_dealloc(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_try_body_transform_try_stmt_obj_dealloc)
    statement___transform_try_body_transform_try_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_try_body_transform_try_stmt_obj_vtable[2];
static bool
CPyDef_statement___transform_try_body_transform_try_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_try_body_transform_try_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___transform_try_body_transform_try_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___transform_try_body_transform_try_stmt_obj_____get__,
    };
    memcpy(statement___transform_try_body_transform_try_stmt_obj_vtable, statement___transform_try_body_transform_try_stmt_obj_vtable_scratch, sizeof(statement___transform_try_body_transform_try_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___transform_try_body_transform_try_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___transform_try_body_transform_try_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___transform_try_body_transform_try_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_try_body_transform_try_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_try_body_transform_try_stmt_obj",
    .tp_new = statement___transform_try_body_transform_try_stmt_obj_new,
    .tp_dealloc = (destructor)statement___transform_try_body_transform_try_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___transform_try_body_transform_try_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___transform_try_body_transform_try_stmt_obj_clear,
    .tp_methods = statement___transform_try_body_transform_try_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___transform_try_body_transform_try_stmt_obj,
    .tp_members = statement___transform_try_body_transform_try_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___transform_try_body_transform_try_stmt_obj_template = &CPyType_statement___transform_try_body_transform_try_stmt_obj_template_;

static PyObject *
statement___transform_try_body_transform_try_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *self;
    self = (mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_try_body_transform_try_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___transform_try_body_transform_try_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_try_body_transform_try_stmt_obj(void)
{
    PyObject *self = statement___transform_try_body_transform_try_stmt_obj_setup(CPyType_statement___transform_try_body_transform_try_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__3_transform_try_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__3_transform_try_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__3_transform_try_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj(void);

static PyObject *
statement_____mypyc_lambda__3_transform_try_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__3_transform_try_stmt_obj_setup(type);
}

static int
statement_____mypyc_lambda__3_transform_try_stmt_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__3_transform_try_stmt_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__3_transform_try_stmt_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__3_transform_try_stmt_obj_dealloc)
    statement_____mypyc_lambda__3_transform_try_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable, statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__3_transform_try_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__3_transform_try_stmt_obj",
    .tp_new = statement_____mypyc_lambda__3_transform_try_stmt_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__3_transform_try_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__3_transform_try_stmt_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__3_transform_try_stmt_obj_clear,
    .tp_methods = statement_____mypyc_lambda__3_transform_try_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__3_transform_try_stmt_obj,
    .tp_members = statement_____mypyc_lambda__3_transform_try_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj_template = &CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj_template_;

static PyObject *
statement_____mypyc_lambda__3_transform_try_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__3_transform_try_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__3_transform_try_stmt_obj_setup(CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___transform_with_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_with_env(void);

static PyObject *
statement___transform_with_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_with_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_with_env_setup(type);
}

static int
statement___transform_with_env_traverse(mypyc___irbuild___statement___transform_with_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_target);
    Py_VISIT(self->_body);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_al);
    Py_VISIT(self->_exc);
    Py_VISIT(self->_exit_);
    Py_VISIT(self->_mgr);
    Py_VISIT(self->_mgr_v);
    Py_VISIT(self->_value);
    Py_VISIT(self->_maybe_natively_call_exit);
    Py_VISIT(self->_try_body);
    Py_VISIT(self->_except_body);
    Py_VISIT(self->_finally_body);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_typ);
    return 0;
}

static int
statement___transform_with_env_clear(mypyc___irbuild___statement___transform_with_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_body);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_al);
    Py_CLEAR(self->_exc);
    Py_CLEAR(self->_exit_);
    Py_CLEAR(self->_mgr);
    Py_CLEAR(self->_mgr_v);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_maybe_natively_call_exit);
    Py_CLEAR(self->_try_body);
    Py_CLEAR(self->_except_body);
    Py_CLEAR(self->_finally_body);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_typ);
    return 0;
}

static void
statement___transform_with_env_dealloc(mypyc___irbuild___statement___transform_with_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_with_env_dealloc)
    statement___transform_with_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_with_env_vtable[1];
static bool
CPyDef_statement___transform_with_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_with_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___transform_with_env_vtable, statement___transform_with_env_vtable_scratch, sizeof(statement___transform_with_env_vtable));
    return 1;
}

static PyMethodDef statement___transform_with_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_with_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_with_env",
    .tp_new = statement___transform_with_env_new,
    .tp_dealloc = (destructor)statement___transform_with_env_dealloc,
    .tp_traverse = (traverseproc)statement___transform_with_env_traverse,
    .tp_clear = (inquiry)statement___transform_with_env_clear,
    .tp_methods = statement___transform_with_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_with_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___transform_with_env_template = &CPyType_statement___transform_with_env_template_;

static PyObject *
statement___transform_with_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_with_envObject *self;
    self = (mypyc___irbuild___statement___transform_with_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_with_env_vtable;
    self->_is_async = 2;
    self->_line = CPY_INT_TAG;
    self->_is_native = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_with_env(void)
{
    PyObject *self = statement___transform_with_env_setup(CPyType_statement___transform_with_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___maybe_natively_call_exit_transform_with_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____get__(self, instance, owner);
}
PyMemberDef statement___maybe_natively_call_exit_transform_with_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___maybe_natively_call_exit_transform_with_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___maybe_natively_call_exit_transform_with_obj(void);

static PyObject *
statement___maybe_natively_call_exit_transform_with_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___maybe_natively_call_exit_transform_with_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___maybe_natively_call_exit_transform_with_obj_setup(type);
}

static int
statement___maybe_natively_call_exit_transform_with_obj_traverse(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject))));
    return 0;
}

static int
statement___maybe_natively_call_exit_transform_with_obj_clear(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject))));
    return 0;
}

static void
statement___maybe_natively_call_exit_transform_with_obj_dealloc(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___maybe_natively_call_exit_transform_with_obj_dealloc)
    statement___maybe_natively_call_exit_transform_with_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___maybe_natively_call_exit_transform_with_obj_vtable[2];
static bool
CPyDef_statement___maybe_natively_call_exit_transform_with_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___maybe_natively_call_exit_transform_with_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____call__,
        (CPyVTableItem)CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____get__,
    };
    memcpy(statement___maybe_natively_call_exit_transform_with_obj_vtable, statement___maybe_natively_call_exit_transform_with_obj_vtable_scratch, sizeof(statement___maybe_natively_call_exit_transform_with_obj_vtable));
    return 1;
}

static PyMethodDef statement___maybe_natively_call_exit_transform_with_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___maybe_natively_call_exit_transform_with_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___maybe_natively_call_exit_transform_with_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___maybe_natively_call_exit_transform_with_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "maybe_natively_call_exit_transform_with_obj",
    .tp_new = statement___maybe_natively_call_exit_transform_with_obj_new,
    .tp_dealloc = (destructor)statement___maybe_natively_call_exit_transform_with_obj_dealloc,
    .tp_traverse = (traverseproc)statement___maybe_natively_call_exit_transform_with_obj_traverse,
    .tp_clear = (inquiry)statement___maybe_natively_call_exit_transform_with_obj_clear,
    .tp_methods = statement___maybe_natively_call_exit_transform_with_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___maybe_natively_call_exit_transform_with_obj,
    .tp_members = statement___maybe_natively_call_exit_transform_with_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___maybe_natively_call_exit_transform_with_obj_template = &CPyType_statement___maybe_natively_call_exit_transform_with_obj_template_;

static PyObject *
statement___maybe_natively_call_exit_transform_with_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *self;
    self = (mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___maybe_natively_call_exit_transform_with_obj_vtable;
    self->vectorcall = CPyPy_statement___maybe_natively_call_exit_transform_with_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___maybe_natively_call_exit_transform_with_obj(void)
{
    PyObject *self = statement___maybe_natively_call_exit_transform_with_obj_setup(CPyType_statement___maybe_natively_call_exit_transform_with_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___try_body_transform_with_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___try_body_transform_with_obj_____get__(self, instance, owner);
}
PyMemberDef statement___try_body_transform_with_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___try_body_transform_with_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___try_body_transform_with_obj(void);

static PyObject *
statement___try_body_transform_with_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___try_body_transform_with_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___try_body_transform_with_obj_setup(type);
}

static int
statement___try_body_transform_with_obj_traverse(mypyc___irbuild___statement___try_body_transform_with_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject))));
    return 0;
}

static int
statement___try_body_transform_with_obj_clear(mypyc___irbuild___statement___try_body_transform_with_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject))));
    return 0;
}

static void
statement___try_body_transform_with_obj_dealloc(mypyc___irbuild___statement___try_body_transform_with_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___try_body_transform_with_obj_dealloc)
    statement___try_body_transform_with_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___try_body_transform_with_obj_vtable[2];
static bool
CPyDef_statement___try_body_transform_with_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___try_body_transform_with_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___try_body_transform_with_obj_____call__,
        (CPyVTableItem)CPyDef_statement___try_body_transform_with_obj_____get__,
    };
    memcpy(statement___try_body_transform_with_obj_vtable, statement___try_body_transform_with_obj_vtable_scratch, sizeof(statement___try_body_transform_with_obj_vtable));
    return 1;
}

static PyMethodDef statement___try_body_transform_with_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___try_body_transform_with_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___try_body_transform_with_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___try_body_transform_with_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "try_body_transform_with_obj",
    .tp_new = statement___try_body_transform_with_obj_new,
    .tp_dealloc = (destructor)statement___try_body_transform_with_obj_dealloc,
    .tp_traverse = (traverseproc)statement___try_body_transform_with_obj_traverse,
    .tp_clear = (inquiry)statement___try_body_transform_with_obj_clear,
    .tp_methods = statement___try_body_transform_with_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___try_body_transform_with_obj,
    .tp_members = statement___try_body_transform_with_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___try_body_transform_with_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___try_body_transform_with_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___try_body_transform_with_obj_template = &CPyType_statement___try_body_transform_with_obj_template_;

static PyObject *
statement___try_body_transform_with_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___try_body_transform_with_objObject *self;
    self = (mypyc___irbuild___statement___try_body_transform_with_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___try_body_transform_with_obj_vtable;
    self->vectorcall = CPyPy_statement___try_body_transform_with_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___try_body_transform_with_obj(void)
{
    PyObject *self = statement___try_body_transform_with_obj_setup(CPyType_statement___try_body_transform_with_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___except_body_transform_with_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___except_body_transform_with_obj_____get__(self, instance, owner);
}
PyMemberDef statement___except_body_transform_with_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___except_body_transform_with_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___except_body_transform_with_obj(void);

static PyObject *
statement___except_body_transform_with_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___except_body_transform_with_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___except_body_transform_with_obj_setup(type);
}

static int
statement___except_body_transform_with_obj_traverse(mypyc___irbuild___statement___except_body_transform_with_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject))));
    return 0;
}

static int
statement___except_body_transform_with_obj_clear(mypyc___irbuild___statement___except_body_transform_with_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject))));
    return 0;
}

static void
statement___except_body_transform_with_obj_dealloc(mypyc___irbuild___statement___except_body_transform_with_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___except_body_transform_with_obj_dealloc)
    statement___except_body_transform_with_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___except_body_transform_with_obj_vtable[2];
static bool
CPyDef_statement___except_body_transform_with_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___except_body_transform_with_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___except_body_transform_with_obj_____call__,
        (CPyVTableItem)CPyDef_statement___except_body_transform_with_obj_____get__,
    };
    memcpy(statement___except_body_transform_with_obj_vtable, statement___except_body_transform_with_obj_vtable_scratch, sizeof(statement___except_body_transform_with_obj_vtable));
    return 1;
}

static PyMethodDef statement___except_body_transform_with_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___except_body_transform_with_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___except_body_transform_with_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___except_body_transform_with_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "except_body_transform_with_obj",
    .tp_new = statement___except_body_transform_with_obj_new,
    .tp_dealloc = (destructor)statement___except_body_transform_with_obj_dealloc,
    .tp_traverse = (traverseproc)statement___except_body_transform_with_obj_traverse,
    .tp_clear = (inquiry)statement___except_body_transform_with_obj_clear,
    .tp_methods = statement___except_body_transform_with_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___except_body_transform_with_obj,
    .tp_members = statement___except_body_transform_with_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___except_body_transform_with_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___except_body_transform_with_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___except_body_transform_with_obj_template = &CPyType_statement___except_body_transform_with_obj_template_;

static PyObject *
statement___except_body_transform_with_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___except_body_transform_with_objObject *self;
    self = (mypyc___irbuild___statement___except_body_transform_with_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___except_body_transform_with_obj_vtable;
    self->vectorcall = CPyPy_statement___except_body_transform_with_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___except_body_transform_with_obj(void)
{
    PyObject *self = statement___except_body_transform_with_obj_setup(CPyType_statement___except_body_transform_with_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___finally_body_transform_with_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___finally_body_transform_with_obj_____get__(self, instance, owner);
}
PyMemberDef statement___finally_body_transform_with_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___finally_body_transform_with_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___finally_body_transform_with_obj(void);

static PyObject *
statement___finally_body_transform_with_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___finally_body_transform_with_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___finally_body_transform_with_obj_setup(type);
}

static int
statement___finally_body_transform_with_obj_traverse(mypyc___irbuild___statement___finally_body_transform_with_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject))));
    return 0;
}

static int
statement___finally_body_transform_with_obj_clear(mypyc___irbuild___statement___finally_body_transform_with_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject))));
    return 0;
}

static void
statement___finally_body_transform_with_obj_dealloc(mypyc___irbuild___statement___finally_body_transform_with_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___finally_body_transform_with_obj_dealloc)
    statement___finally_body_transform_with_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___finally_body_transform_with_obj_vtable[2];
static bool
CPyDef_statement___finally_body_transform_with_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___finally_body_transform_with_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___finally_body_transform_with_obj_____call__,
        (CPyVTableItem)CPyDef_statement___finally_body_transform_with_obj_____get__,
    };
    memcpy(statement___finally_body_transform_with_obj_vtable, statement___finally_body_transform_with_obj_vtable_scratch, sizeof(statement___finally_body_transform_with_obj_vtable));
    return 1;
}

static PyMethodDef statement___finally_body_transform_with_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___finally_body_transform_with_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___finally_body_transform_with_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___finally_body_transform_with_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "finally_body_transform_with_obj",
    .tp_new = statement___finally_body_transform_with_obj_new,
    .tp_dealloc = (destructor)statement___finally_body_transform_with_obj_dealloc,
    .tp_traverse = (traverseproc)statement___finally_body_transform_with_obj_traverse,
    .tp_clear = (inquiry)statement___finally_body_transform_with_obj_clear,
    .tp_methods = statement___finally_body_transform_with_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___finally_body_transform_with_obj,
    .tp_members = statement___finally_body_transform_with_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___finally_body_transform_with_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___finally_body_transform_with_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___finally_body_transform_with_obj_template = &CPyType_statement___finally_body_transform_with_obj_template_;

static PyObject *
statement___finally_body_transform_with_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___finally_body_transform_with_objObject *self;
    self = (mypyc___irbuild___statement___finally_body_transform_with_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___finally_body_transform_with_obj_vtable;
    self->vectorcall = CPyPy_statement___finally_body_transform_with_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___finally_body_transform_with_obj(void)
{
    PyObject *self = statement___finally_body_transform_with_obj_setup(CPyType_statement___finally_body_transform_with_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__4_transform_with_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__4_transform_with_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__4_transform_with_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__4_transform_with_obj(void);

static PyObject *
statement_____mypyc_lambda__4_transform_with_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__4_transform_with_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__4_transform_with_obj_setup(type);
}

static int
statement_____mypyc_lambda__4_transform_with_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__4_transform_with_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__4_transform_with_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__4_transform_with_obj_dealloc)
    statement_____mypyc_lambda__4_transform_with_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__4_transform_with_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__4_transform_with_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__4_transform_with_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__4_transform_with_obj_vtable, statement_____mypyc_lambda__4_transform_with_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__4_transform_with_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__4_transform_with_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__4_transform_with_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__4_transform_with_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__4_transform_with_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__4_transform_with_obj",
    .tp_new = statement_____mypyc_lambda__4_transform_with_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__4_transform_with_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__4_transform_with_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__4_transform_with_obj_clear,
    .tp_methods = statement_____mypyc_lambda__4_transform_with_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__4_transform_with_obj,
    .tp_members = statement_____mypyc_lambda__4_transform_with_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__4_transform_with_obj_template = &CPyType_statement_____mypyc_lambda__4_transform_with_obj_template_;

static PyObject *
statement_____mypyc_lambda__4_transform_with_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__4_transform_with_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__4_transform_with_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__4_transform_with_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__4_transform_with_obj_setup(CPyType_statement_____mypyc_lambda__4_transform_with_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___transform_with_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___transform_with_stmt_env(void);

static PyObject *
statement___transform_with_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___transform_with_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___transform_with_stmt_env_setup(type);
}

static int
statement___transform_with_stmt_env_traverse(mypyc___irbuild___statement___transform_with_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_o);
    Py_VISIT(self->_generate);
    return 0;
}

static int
statement___transform_with_stmt_env_clear(mypyc___irbuild___statement___transform_with_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_generate);
    return 0;
}

static void
statement___transform_with_stmt_env_dealloc(mypyc___irbuild___statement___transform_with_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___transform_with_stmt_env_dealloc)
    statement___transform_with_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___transform_with_stmt_env_vtable[1];
static bool
CPyDef_statement___transform_with_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___transform_with_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___transform_with_stmt_env_vtable, statement___transform_with_stmt_env_vtable_scratch, sizeof(statement___transform_with_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___transform_with_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___transform_with_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "transform_with_stmt_env",
    .tp_new = statement___transform_with_stmt_env_new,
    .tp_dealloc = (destructor)statement___transform_with_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___transform_with_stmt_env_traverse,
    .tp_clear = (inquiry)statement___transform_with_stmt_env_clear,
    .tp_methods = statement___transform_with_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___transform_with_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___transform_with_stmt_env_template = &CPyType_statement___transform_with_stmt_env_template_;

static PyObject *
statement___transform_with_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___transform_with_stmt_envObject *self;
    self = (mypyc___irbuild___statement___transform_with_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___transform_with_stmt_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___transform_with_stmt_env(void)
{
    PyObject *self = statement___transform_with_stmt_env_setup(CPyType_statement___transform_with_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___generate_transform_with_stmt_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___generate_transform_with_stmt_env(void);

static PyObject *
statement___generate_transform_with_stmt_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___generate_transform_with_stmt_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___generate_transform_with_stmt_env_setup(type);
}

static int
statement___generate_transform_with_stmt_env_traverse(mypyc___irbuild___statement___generate_transform_with_stmt_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    Py_VISIT(self->_builder);
    Py_VISIT(self->_o);
    Py_VISIT(self->_generate);
    return 0;
}

static int
statement___generate_transform_with_stmt_env_clear(mypyc___irbuild___statement___generate_transform_with_stmt_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_generate);
    return 0;
}

static void
statement___generate_transform_with_stmt_env_dealloc(mypyc___irbuild___statement___generate_transform_with_stmt_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___generate_transform_with_stmt_env_dealloc)
    statement___generate_transform_with_stmt_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___generate_transform_with_stmt_env_vtable[1];
static bool
CPyDef_statement___generate_transform_with_stmt_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___generate_transform_with_stmt_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___generate_transform_with_stmt_env_vtable, statement___generate_transform_with_stmt_env_vtable_scratch, sizeof(statement___generate_transform_with_stmt_env_vtable));
    return 1;
}

static PyMethodDef statement___generate_transform_with_stmt_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___generate_transform_with_stmt_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "generate_transform_with_stmt_env",
    .tp_new = statement___generate_transform_with_stmt_env_new,
    .tp_dealloc = (destructor)statement___generate_transform_with_stmt_env_dealloc,
    .tp_traverse = (traverseproc)statement___generate_transform_with_stmt_env_traverse,
    .tp_clear = (inquiry)statement___generate_transform_with_stmt_env_clear,
    .tp_methods = statement___generate_transform_with_stmt_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___generate_transform_with_stmt_env_template = &CPyType_statement___generate_transform_with_stmt_env_template_;

static PyObject *
statement___generate_transform_with_stmt_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___generate_transform_with_stmt_envObject *self;
    self = (mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___generate_transform_with_stmt_env_vtable;
    self->_i = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___generate_transform_with_stmt_env(void)
{
    PyObject *self = statement___generate_transform_with_stmt_env_setup(CPyType_statement___generate_transform_with_stmt_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___generate_transform_with_stmt_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___generate_transform_with_stmt_obj_____get__(self, instance, owner);
}
PyMemberDef statement___generate_transform_with_stmt_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___generate_transform_with_stmt_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___generate_transform_with_stmt_obj(void);

static PyObject *
statement___generate_transform_with_stmt_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___generate_transform_with_stmt_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___generate_transform_with_stmt_obj_setup(type);
}

static int
statement___generate_transform_with_stmt_obj_traverse(mypyc___irbuild___statement___generate_transform_with_stmt_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject))));
    return 0;
}

static int
statement___generate_transform_with_stmt_obj_clear(mypyc___irbuild___statement___generate_transform_with_stmt_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject))));
    return 0;
}

static void
statement___generate_transform_with_stmt_obj_dealloc(mypyc___irbuild___statement___generate_transform_with_stmt_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___generate_transform_with_stmt_obj_dealloc)
    statement___generate_transform_with_stmt_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___generate_transform_with_stmt_obj_vtable[2];
static bool
CPyDef_statement___generate_transform_with_stmt_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___generate_transform_with_stmt_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___generate_transform_with_stmt_obj_____call__,
        (CPyVTableItem)CPyDef_statement___generate_transform_with_stmt_obj_____get__,
    };
    memcpy(statement___generate_transform_with_stmt_obj_vtable, statement___generate_transform_with_stmt_obj_vtable_scratch, sizeof(statement___generate_transform_with_stmt_obj_vtable));
    return 1;
}

static PyMethodDef statement___generate_transform_with_stmt_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___generate_transform_with_stmt_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___generate_transform_with_stmt_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___generate_transform_with_stmt_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "generate_transform_with_stmt_obj",
    .tp_new = statement___generate_transform_with_stmt_obj_new,
    .tp_dealloc = (destructor)statement___generate_transform_with_stmt_obj_dealloc,
    .tp_traverse = (traverseproc)statement___generate_transform_with_stmt_obj_traverse,
    .tp_clear = (inquiry)statement___generate_transform_with_stmt_obj_clear,
    .tp_methods = statement___generate_transform_with_stmt_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___generate_transform_with_stmt_obj,
    .tp_members = statement___generate_transform_with_stmt_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___generate_transform_with_stmt_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___generate_transform_with_stmt_obj_template = &CPyType_statement___generate_transform_with_stmt_obj_template_;

static PyObject *
statement___generate_transform_with_stmt_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___generate_transform_with_stmt_objObject *self;
    self = (mypyc___irbuild___statement___generate_transform_with_stmt_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___generate_transform_with_stmt_obj_vtable;
    self->vectorcall = CPyPy_statement___generate_transform_with_stmt_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___generate_transform_with_stmt_obj(void)
{
    PyObject *self = statement___generate_transform_with_stmt_obj_setup(CPyType_statement___generate_transform_with_stmt_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement_____mypyc_lambda__5_transform_with_stmt_generate_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__(self, instance, owner);
}
PyMemberDef statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj(void);

static PyObject *
statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_setup(type);
}

static int
statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_traverse(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject))));
    return 0;
}

static int
statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_clear(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject))));
    return 0;
}

static void
statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_dealloc(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_dealloc)
    statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable[2];
static bool
CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__,
        (CPyVTableItem)CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__,
    };
    memcpy(statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable, statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable_scratch, sizeof(statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable));
    return 1;
}

static PyMethodDef statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__5_transform_with_stmt_generate_obj",
    .tp_new = statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_new,
    .tp_dealloc = (destructor)statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_dealloc,
    .tp_traverse = (traverseproc)statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_traverse,
    .tp_clear = (inquiry)statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_clear,
    .tp_methods = statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement_____mypyc_lambda__5_transform_with_stmt_generate_obj,
    .tp_members = statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_template = &CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_template_;

static PyObject *
statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *self;
    self = (mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_vtable;
    self->vectorcall = CPyPy_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj(void)
{
    PyObject *self = statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_setup(CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *statement___emit_yield_from_or_await_env_setup(PyTypeObject *type);
PyObject *CPyDef_statement___emit_yield_from_or_await_env(void);

static PyObject *
statement___emit_yield_from_or_await_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___emit_yield_from_or_await_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___emit_yield_from_or_await_env_setup(type);
}

static int
statement___emit_yield_from_or_await_env_traverse(mypyc___irbuild___statement___emit_yield_from_or_await_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_check_stop_op);
    Py_VISIT(self->_iter_reg);
    Py_VISIT(self->_received_reg);
    Py_VISIT(self->_result);
    Py_VISIT(self->_to_yield_reg);
    Py_VISIT(self->_try_body);
    Py_VISIT(self->_except_body);
    Py_VISIT(self->_else_body);
    Py_VISIT(self->_val);
    Py_VISIT(self->_get_op);
    Py_VISIT(self->_iter_val);
    Py_VISIT(self->_stop_block);
    Py_VISIT(self->_main_block);
    Py_VISIT(self->_done_block);
    Py_VISIT(self->__y_init);
    Py_VISIT(self->_loop_block);
    return 0;
}

static int
statement___emit_yield_from_or_await_env_clear(mypyc___irbuild___statement___emit_yield_from_or_await_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_check_stop_op);
    Py_CLEAR(self->_iter_reg);
    Py_CLEAR(self->_received_reg);
    Py_CLEAR(self->_result);
    Py_CLEAR(self->_to_yield_reg);
    Py_CLEAR(self->_try_body);
    Py_CLEAR(self->_except_body);
    Py_CLEAR(self->_else_body);
    Py_CLEAR(self->_val);
    Py_CLEAR(self->_get_op);
    Py_CLEAR(self->_iter_val);
    Py_CLEAR(self->_stop_block);
    Py_CLEAR(self->_main_block);
    Py_CLEAR(self->_done_block);
    Py_CLEAR(self->__y_init);
    Py_CLEAR(self->_loop_block);
    return 0;
}

static void
statement___emit_yield_from_or_await_env_dealloc(mypyc___irbuild___statement___emit_yield_from_or_await_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___emit_yield_from_or_await_env_dealloc)
    statement___emit_yield_from_or_await_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___emit_yield_from_or_await_env_vtable[1];
static bool
CPyDef_statement___emit_yield_from_or_await_env_trait_vtable_setup(void)
{
    CPyVTableItem statement___emit_yield_from_or_await_env_vtable_scratch[] = {
        NULL
    };
    memcpy(statement___emit_yield_from_or_await_env_vtable, statement___emit_yield_from_or_await_env_vtable_scratch, sizeof(statement___emit_yield_from_or_await_env_vtable));
    return 1;
}

static PyMethodDef statement___emit_yield_from_or_await_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___emit_yield_from_or_await_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "emit_yield_from_or_await_env",
    .tp_new = statement___emit_yield_from_or_await_env_new,
    .tp_dealloc = (destructor)statement___emit_yield_from_or_await_env_dealloc,
    .tp_traverse = (traverseproc)statement___emit_yield_from_or_await_env_traverse,
    .tp_clear = (inquiry)statement___emit_yield_from_or_await_env_clear,
    .tp_methods = statement___emit_yield_from_or_await_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___emit_yield_from_or_await_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_statement___emit_yield_from_or_await_env_template = &CPyType_statement___emit_yield_from_or_await_env_template_;

static PyObject *
statement___emit_yield_from_or_await_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___emit_yield_from_or_await_envObject *self;
    self = (mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___emit_yield_from_or_await_env_vtable;
    self->_line = CPY_INT_TAG;
    self->_is_await = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___emit_yield_from_or_await_env(void)
{
    PyObject *self = statement___emit_yield_from_or_await_env_setup(CPyType_statement___emit_yield_from_or_await_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___try_body_emit_yield_from_or_await_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___try_body_emit_yield_from_or_await_obj_____get__(self, instance, owner);
}
PyMemberDef statement___try_body_emit_yield_from_or_await_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___try_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___try_body_emit_yield_from_or_await_obj(void);

static PyObject *
statement___try_body_emit_yield_from_or_await_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___try_body_emit_yield_from_or_await_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___try_body_emit_yield_from_or_await_obj_setup(type);
}

static int
statement___try_body_emit_yield_from_or_await_obj_traverse(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static int
statement___try_body_emit_yield_from_or_await_obj_clear(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static void
statement___try_body_emit_yield_from_or_await_obj_dealloc(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___try_body_emit_yield_from_or_await_obj_dealloc)
    statement___try_body_emit_yield_from_or_await_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___try_body_emit_yield_from_or_await_obj_vtable[2];
static bool
CPyDef_statement___try_body_emit_yield_from_or_await_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___try_body_emit_yield_from_or_await_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___try_body_emit_yield_from_or_await_obj_____call__,
        (CPyVTableItem)CPyDef_statement___try_body_emit_yield_from_or_await_obj_____get__,
    };
    memcpy(statement___try_body_emit_yield_from_or_await_obj_vtable, statement___try_body_emit_yield_from_or_await_obj_vtable_scratch, sizeof(statement___try_body_emit_yield_from_or_await_obj_vtable));
    return 1;
}

static PyMethodDef statement___try_body_emit_yield_from_or_await_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___try_body_emit_yield_from_or_await_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___try_body_emit_yield_from_or_await_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___try_body_emit_yield_from_or_await_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "try_body_emit_yield_from_or_await_obj",
    .tp_new = statement___try_body_emit_yield_from_or_await_obj_new,
    .tp_dealloc = (destructor)statement___try_body_emit_yield_from_or_await_obj_dealloc,
    .tp_traverse = (traverseproc)statement___try_body_emit_yield_from_or_await_obj_traverse,
    .tp_clear = (inquiry)statement___try_body_emit_yield_from_or_await_obj_clear,
    .tp_methods = statement___try_body_emit_yield_from_or_await_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___try_body_emit_yield_from_or_await_obj,
    .tp_members = statement___try_body_emit_yield_from_or_await_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___try_body_emit_yield_from_or_await_obj_template = &CPyType_statement___try_body_emit_yield_from_or_await_obj_template_;

static PyObject *
statement___try_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *self;
    self = (mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___try_body_emit_yield_from_or_await_obj_vtable;
    self->vectorcall = CPyPy_statement___try_body_emit_yield_from_or_await_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___try_body_emit_yield_from_or_await_obj(void)
{
    PyObject *self = statement___try_body_emit_yield_from_or_await_obj_setup(CPyType_statement___try_body_emit_yield_from_or_await_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___except_body_emit_yield_from_or_await_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___except_body_emit_yield_from_or_await_obj_____get__(self, instance, owner);
}
PyMemberDef statement___except_body_emit_yield_from_or_await_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___except_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___except_body_emit_yield_from_or_await_obj(void);

static PyObject *
statement___except_body_emit_yield_from_or_await_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___except_body_emit_yield_from_or_await_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___except_body_emit_yield_from_or_await_obj_setup(type);
}

static int
statement___except_body_emit_yield_from_or_await_obj_traverse(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static int
statement___except_body_emit_yield_from_or_await_obj_clear(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static void
statement___except_body_emit_yield_from_or_await_obj_dealloc(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___except_body_emit_yield_from_or_await_obj_dealloc)
    statement___except_body_emit_yield_from_or_await_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___except_body_emit_yield_from_or_await_obj_vtable[2];
static bool
CPyDef_statement___except_body_emit_yield_from_or_await_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___except_body_emit_yield_from_or_await_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___except_body_emit_yield_from_or_await_obj_____call__,
        (CPyVTableItem)CPyDef_statement___except_body_emit_yield_from_or_await_obj_____get__,
    };
    memcpy(statement___except_body_emit_yield_from_or_await_obj_vtable, statement___except_body_emit_yield_from_or_await_obj_vtable_scratch, sizeof(statement___except_body_emit_yield_from_or_await_obj_vtable));
    return 1;
}

static PyMethodDef statement___except_body_emit_yield_from_or_await_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___except_body_emit_yield_from_or_await_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___except_body_emit_yield_from_or_await_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___except_body_emit_yield_from_or_await_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "except_body_emit_yield_from_or_await_obj",
    .tp_new = statement___except_body_emit_yield_from_or_await_obj_new,
    .tp_dealloc = (destructor)statement___except_body_emit_yield_from_or_await_obj_dealloc,
    .tp_traverse = (traverseproc)statement___except_body_emit_yield_from_or_await_obj_traverse,
    .tp_clear = (inquiry)statement___except_body_emit_yield_from_or_await_obj_clear,
    .tp_methods = statement___except_body_emit_yield_from_or_await_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___except_body_emit_yield_from_or_await_obj,
    .tp_members = statement___except_body_emit_yield_from_or_await_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___except_body_emit_yield_from_or_await_obj_template = &CPyType_statement___except_body_emit_yield_from_or_await_obj_template_;

static PyObject *
statement___except_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *self;
    self = (mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___except_body_emit_yield_from_or_await_obj_vtable;
    self->vectorcall = CPyPy_statement___except_body_emit_yield_from_or_await_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___except_body_emit_yield_from_or_await_obj(void)
{
    PyObject *self = statement___except_body_emit_yield_from_or_await_obj_setup(CPyType_statement___except_body_emit_yield_from_or_await_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__statement___else_body_emit_yield_from_or_await_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_statement___else_body_emit_yield_from_or_await_obj_____get__(self, instance, owner);
}
PyMemberDef statement___else_body_emit_yield_from_or_await_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *statement___else_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type);
PyObject *CPyDef_statement___else_body_emit_yield_from_or_await_obj(void);

static PyObject *
statement___else_body_emit_yield_from_or_await_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_statement___else_body_emit_yield_from_or_await_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return statement___else_body_emit_yield_from_or_await_obj_setup(type);
}

static int
statement___else_body_emit_yield_from_or_await_obj_traverse(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static int
statement___else_body_emit_yield_from_or_await_obj_clear(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject))));
    return 0;
}

static void
statement___else_body_emit_yield_from_or_await_obj_dealloc(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, statement___else_body_emit_yield_from_or_await_obj_dealloc)
    statement___else_body_emit_yield_from_or_await_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem statement___else_body_emit_yield_from_or_await_obj_vtable[2];
static bool
CPyDef_statement___else_body_emit_yield_from_or_await_obj_trait_vtable_setup(void)
{
    CPyVTableItem statement___else_body_emit_yield_from_or_await_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_statement___else_body_emit_yield_from_or_await_obj_____call__,
        (CPyVTableItem)CPyDef_statement___else_body_emit_yield_from_or_await_obj_____get__,
    };
    memcpy(statement___else_body_emit_yield_from_or_await_obj_vtable, statement___else_body_emit_yield_from_or_await_obj_vtable_scratch, sizeof(statement___else_body_emit_yield_from_or_await_obj_vtable));
    return 1;
}

static PyMethodDef statement___else_body_emit_yield_from_or_await_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_statement___else_body_emit_yield_from_or_await_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_statement___else_body_emit_yield_from_or_await_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_statement___else_body_emit_yield_from_or_await_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "else_body_emit_yield_from_or_await_obj",
    .tp_new = statement___else_body_emit_yield_from_or_await_obj_new,
    .tp_dealloc = (destructor)statement___else_body_emit_yield_from_or_await_obj_dealloc,
    .tp_traverse = (traverseproc)statement___else_body_emit_yield_from_or_await_obj_traverse,
    .tp_clear = (inquiry)statement___else_body_emit_yield_from_or_await_obj_clear,
    .tp_methods = statement___else_body_emit_yield_from_or_await_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__statement___else_body_emit_yield_from_or_await_obj,
    .tp_members = statement___else_body_emit_yield_from_or_await_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_statement___else_body_emit_yield_from_or_await_obj_template = &CPyType_statement___else_body_emit_yield_from_or_await_obj_template_;

static PyObject *
statement___else_body_emit_yield_from_or_await_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *self;
    self = (mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = statement___else_body_emit_yield_from_or_await_obj_vtable;
    self->vectorcall = CPyPy_statement___else_body_emit_yield_from_or_await_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_statement___else_body_emit_yield_from_or_await_obj(void)
{
    PyObject *self = statement___else_body_emit_yield_from_or_await_obj_setup(CPyType_statement___else_body_emit_yield_from_or_await_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef statementmodule_methods[] = {
    {"transform_block", (PyCFunction)CPyPy_statement___transform_block, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_expression_stmt", (PyCFunction)CPyPy_statement___transform_expression_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_return_stmt", (PyCFunction)CPyPy_statement___transform_return_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_assignment_stmt", (PyCFunction)CPyPy_statement___transform_assignment_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_simple_lvalue", (PyCFunction)CPyPy_statement___is_simple_lvalue, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_operator_assignment_stmt", (PyCFunction)CPyPy_statement___transform_operator_assignment_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"import_globals_id_and_name", (PyCFunction)CPyPy_statement___import_globals_id_and_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_import", (PyCFunction)CPyPy_statement___transform_import, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_import_from", (PyCFunction)CPyPy_statement___transform_import_from, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_import_all", (PyCFunction)CPyPy_statement___transform_import_all, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_if_stmt", (PyCFunction)CPyPy_statement___transform_if_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_while_stmt", (PyCFunction)CPyPy_statement___transform_while_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_for_stmt", (PyCFunction)CPyPy_statement___transform_for_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_break_stmt", (PyCFunction)CPyPy_statement___transform_break_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_continue_stmt", (PyCFunction)CPyPy_statement___transform_continue_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_raise_stmt", (PyCFunction)CPyPy_statement___transform_raise_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_try_except", (PyCFunction)CPyPy_statement___transform_try_except, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_try_except_stmt", (PyCFunction)CPyPy_statement___transform_try_except_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_finally_try", (PyCFunction)CPyPy_statement___try_finally_try, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_finally_entry_blocks", (PyCFunction)CPyPy_statement___try_finally_entry_blocks, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_finally_body", (PyCFunction)CPyPy_statement___try_finally_body, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"try_finally_resolve_control", (PyCFunction)CPyPy_statement___try_finally_resolve_control, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_try_finally_stmt", (PyCFunction)CPyPy_statement___transform_try_finally_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_try_stmt", (PyCFunction)CPyPy_statement___transform_try_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_sys_exc_info", (PyCFunction)CPyPy_statement___get_sys_exc_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_with", (PyCFunction)CPyPy_statement___transform_with, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_with_stmt", (PyCFunction)CPyPy_statement___transform_with_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_assert_stmt", (PyCFunction)CPyPy_statement___transform_assert_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_del_stmt", (PyCFunction)CPyPy_statement___transform_del_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_del_item", (PyCFunction)CPyPy_statement___transform_del_item, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"emit_yield", (PyCFunction)CPyPy_statement___emit_yield, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"emit_yield_from_or_await", (PyCFunction)CPyPy_statement___emit_yield_from_or_await, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"emit_await", (PyCFunction)CPyPy_statement___emit_await, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_yield_expr", (PyCFunction)CPyPy_statement___transform_yield_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_yield_from_expr", (PyCFunction)CPyPy_statement___transform_yield_from_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_await_expr", (PyCFunction)CPyPy_statement___transform_await_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_match_stmt", (PyCFunction)CPyPy_statement___transform_match_stmt, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef statementmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.statement",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    statementmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___statement(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___statement_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___statement_internal);
        return CPyModule_mypyc___irbuild___statement_internal;
    }
    CPyModule_mypyc___irbuild___statement_internal = PyModule_Create(&statementmodule);
    if (unlikely(CPyModule_mypyc___irbuild___statement_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___statement_internal, "__name__");
    CPyStatic_statement___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___statement_internal);
    if (unlikely(CPyStatic_statement___globals == NULL))
        goto fail;
    CPyType_statement___transform_for_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_for_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_for_stmt_env))
        goto fail;
    CPyType_statement___body_transform_for_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___body_transform_for_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___body_transform_for_stmt_obj))
        goto fail;
    CPyType_statement___else_block_transform_for_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___else_block_transform_for_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___else_block_transform_for_stmt_obj))
        goto fail;
    CPyType_statement___transform_try_except_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_try_except_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_try_except_stmt_env))
        goto fail;
    CPyType_statement___body_transform_try_except_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___body_transform_try_except_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___body_transform_try_except_stmt_obj))
        goto fail;
    CPyType_statement___make_handler_transform_try_except_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___make_handler_transform_try_except_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___make_handler_transform_try_except_stmt_env))
        goto fail;
    CPyType_statement___make_handler_transform_try_except_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___make_handler_transform_try_except_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___make_handler_transform_try_except_stmt_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj))
        goto fail;
    CPyType_statement___make_entry_transform_try_except_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___make_entry_transform_try_except_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___make_entry_transform_try_except_stmt_env))
        goto fail;
    CPyType_statement___make_entry_transform_try_except_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___make_entry_transform_try_except_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___make_entry_transform_try_except_stmt_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj))
        goto fail;
    CPyType_statement___transform_try_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_try_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_try_stmt_env))
        goto fail;
    CPyType_statement___transform_try_body_transform_try_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_try_body_transform_try_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_try_body_transform_try_stmt_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj))
        goto fail;
    CPyType_statement___transform_with_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_with_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_with_env))
        goto fail;
    CPyType_statement___maybe_natively_call_exit_transform_with_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___maybe_natively_call_exit_transform_with_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___maybe_natively_call_exit_transform_with_obj))
        goto fail;
    CPyType_statement___try_body_transform_with_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___try_body_transform_with_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___try_body_transform_with_obj))
        goto fail;
    CPyType_statement___except_body_transform_with_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___except_body_transform_with_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___except_body_transform_with_obj))
        goto fail;
    CPyType_statement___finally_body_transform_with_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___finally_body_transform_with_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___finally_body_transform_with_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__4_transform_with_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__4_transform_with_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__4_transform_with_obj))
        goto fail;
    CPyType_statement___transform_with_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___transform_with_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___transform_with_stmt_env))
        goto fail;
    CPyType_statement___generate_transform_with_stmt_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___generate_transform_with_stmt_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___generate_transform_with_stmt_env))
        goto fail;
    CPyType_statement___generate_transform_with_stmt_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___generate_transform_with_stmt_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___generate_transform_with_stmt_obj))
        goto fail;
    CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj))
        goto fail;
    CPyType_statement___emit_yield_from_or_await_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___emit_yield_from_or_await_env_template, NULL, modname);
    if (unlikely(!CPyType_statement___emit_yield_from_or_await_env))
        goto fail;
    CPyType_statement___try_body_emit_yield_from_or_await_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___try_body_emit_yield_from_or_await_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___try_body_emit_yield_from_or_await_obj))
        goto fail;
    CPyType_statement___except_body_emit_yield_from_or_await_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___except_body_emit_yield_from_or_await_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___except_body_emit_yield_from_or_await_obj))
        goto fail;
    CPyType_statement___else_body_emit_yield_from_or_await_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_statement___else_body_emit_yield_from_or_await_obj_template, NULL, modname);
    if (unlikely(!CPyType_statement___else_body_emit_yield_from_or_await_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_statement_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___statement_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___statement_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_statement___transform_for_stmt_env);
    Py_CLEAR(CPyType_statement___body_transform_for_stmt_obj);
    Py_CLEAR(CPyType_statement___else_block_transform_for_stmt_obj);
    Py_CLEAR(CPyType_statement___transform_try_except_stmt_env);
    Py_CLEAR(CPyType_statement___body_transform_try_except_stmt_obj);
    Py_CLEAR(CPyType_statement___make_handler_transform_try_except_stmt_env);
    Py_CLEAR(CPyType_statement___make_handler_transform_try_except_stmt_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj);
    Py_CLEAR(CPyType_statement___make_entry_transform_try_except_stmt_env);
    Py_CLEAR(CPyType_statement___make_entry_transform_try_except_stmt_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__2_transform_try_except_stmt_obj);
    Py_CLEAR(CPyType_statement___transform_try_stmt_env);
    Py_CLEAR(CPyType_statement___transform_try_body_transform_try_stmt_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__3_transform_try_stmt_obj);
    Py_CLEAR(CPyType_statement___transform_with_env);
    Py_CLEAR(CPyType_statement___maybe_natively_call_exit_transform_with_obj);
    Py_CLEAR(CPyType_statement___try_body_transform_with_obj);
    Py_CLEAR(CPyType_statement___except_body_transform_with_obj);
    Py_CLEAR(CPyType_statement___finally_body_transform_with_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__4_transform_with_obj);
    Py_CLEAR(CPyType_statement___transform_with_stmt_env);
    Py_CLEAR(CPyType_statement___generate_transform_with_stmt_env);
    Py_CLEAR(CPyType_statement___generate_transform_with_stmt_obj);
    Py_CLEAR(CPyType_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj);
    Py_CLEAR(CPyType_statement___emit_yield_from_or_await_env);
    Py_CLEAR(CPyType_statement___try_body_emit_yield_from_or_await_obj);
    Py_CLEAR(CPyType_statement___except_body_emit_yield_from_or_await_obj);
    Py_CLEAR(CPyType_statement___else_body_emit_yield_from_or_await_obj);
    return NULL;
}

char CPyDef_statement___transform_block(PyObject *cpy_r_builder, PyObject *cpy_r_block) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_stmt;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___nodes___BlockObject *)cpy_r_block)->_is_unreachable;
    if (cpy_r_r0) goto CPyL6;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___BlockObject *)cpy_r_block)->_body;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Statement)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_block", 119, CPyStatic_statement___globals, "mypy.nodes.Statement", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_stmt = cpy_r_r8;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_stmt, cpy_r_r9);
    CPy_DECREF(cpy_r_stmt);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 120, CPyStatic_statement___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL5: ;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = ((mypy___nodes___BlockObject *)cpy_r_block)->_body;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r18 = CPyStatics[8578]; /* 'Reached allegedly unreachable code!' */
    cpy_r_r19 = ((mypy___nodes___BlockObject *)cpy_r_block)->_line;
    CPyTagged_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_ops___RaiseStandardError(cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 126, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 125, CPyStatic_statement___globals);
        goto CPyL12;
    } else
        goto CPyL16;
CPyL9: ;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___Unreachable(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 130, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 130, CPyStatic_statement___globals);
        goto CPyL12;
    } else
        goto CPyL17;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL13: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL5;
CPyL16: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL9;
CPyL17: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL11;
}

PyObject *CPyPy_statement___transform_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "block", 0};
    static CPyArg_Parser parser = {"OO:transform_block", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_block)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_block(arg_builder, arg_block);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_block", 117, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_expression_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_stmt)->_expr;
    cpy_r_r1 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r5 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_visitor;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPY_GET_METHOD_TRAIT(cpy_r_r5, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r5, cpy_r_r6); /* accept */
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_expression_stmt", 139, CPyStatic_statement___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL3: ;
    cpy_r_r8 = CPyDef_builder___IRBuilder___flush_keep_alives(cpy_r_builder);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_expression_stmt", 140, CPyStatic_statement___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL6: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL3;
}

PyObject *CPyPy_statement___transform_expression_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "stmt", 0};
    static CPyArg_Parser parser = {"OO:transform_expression_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ExpressionStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ExpressionStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_expression_stmt(arg_builder, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_expression_stmt", 133, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_return_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = ((mypy___nodes___ReturnStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL5;
    cpy_r_r3 = ((mypy___nodes___ReturnStmtObject *)cpy_r_stmt)->_expr;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 145, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r3);
        goto CPyL14;
    }
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 145, CPyStatic_statement___globals);
        goto CPyL14;
    }
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 145, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r6);
        goto CPyL14;
    }
    cpy_r_retval = cpy_r_r7;
    goto CPyL7;
CPyL5: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_ll_builder___LowLevelIRBuilder___none(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 147, CPyStatic_statement___globals);
        goto CPyL14;
    }
    cpy_r_retval = cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r11 = CPyList_GetItemShort(cpy_r_r10, -2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 148, CPyStatic_statement___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_rtypes___RType)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 148, CPyStatic_statement___globals, "mypyc.ir.rtypes.RType", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_r13 = ((mypy___nodes___ReturnStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_retval, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_retval);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 148, CPyStatic_statement___globals);
        goto CPyL14;
    }
    cpy_r_retval = cpy_r_r15;
    cpy_r_r16 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r17 = CPyList_GetItemShort(cpy_r_r16, -2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 149, CPyStatic_statement___globals);
        goto CPyL15;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 149, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r17);
        goto CPyL15;
    }
    cpy_r_r19 = ((mypy___nodes___ReturnStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r19);
    cpy_r_r20 = CPY_GET_METHOD(cpy_r_r18, CPyType_nonlocalcontrol___NonlocalControl, 2, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r18, cpy_r_builder, cpy_r_retval, cpy_r_r19); /* gen_return */
    CPy_DECREF(cpy_r_retval);
    CPyTagged_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 149, CPyStatic_statement___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_retval);
    goto CPyL14;
}

PyObject *CPyPy_statement___transform_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "stmt", 0};
    static CPyArg_Parser parser = {"OO:transform_return_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___ReturnStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_return_stmt(arg_builder, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_return_stmt", 143, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_assignment_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_lvalues;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_first_lvalue;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_item;
    char cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_temps;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyPtr cpy_r_r106;
    int64_t cpy_r_r107;
    CPyTagged cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_right;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_rvalue_reg;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_temp;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyPtr cpy_r_r137;
    int64_t cpy_r_r138;
    CPyTagged cpy_r_r139;
    char cpy_r_r140;
    CPyPtr cpy_r_r141;
    int64_t cpy_r_r142;
    CPyTagged cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_left;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_assignment_target;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    CPyTagged cpy_r_r154;
    CPyTagged cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyTagged cpy_r_r158;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyPtr cpy_r_r169;
    int64_t cpy_r_r170;
    CPyTagged cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_lvalue;
    CPyTagged cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_target;
    char cpy_r_r178;
    char cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_lvalues;
    CPy_INCREF(cpy_r_r0);
    cpy_r_lvalues = cpy_r_r0;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) {
        goto CPyL3;
    } else
        goto CPyL94;
CPyL1: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 154, CPyStatic_statement___globals);
        goto CPyL93;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___disallow_class_assignments(cpy_r_builder, cpy_r_lvalues, cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 155, CPyStatic_statement___globals);
        goto CPyL95;
    }
    cpy_r_r8 = CPyList_GetItemShort(cpy_r_lvalues, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 156, CPyStatic_statement___globals);
        goto CPyL95;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 156, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL95;
    }
    cpy_r_first_lvalue = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r14 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (cpy_r_r17) {
        goto CPyL96;
    } else
        goto CPyL10;
CPyL8: ;
    cpy_r_r18 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_first_lvalue, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_first_lvalue);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 161, CPyStatic_statement___globals);
        goto CPyL93;
    } else
        goto CPyL97;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_first_lvalue)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL12;
    cpy_r_r25 = cpy_r_r24;
    goto CPyL13;
CPyL12: ;
    cpy_r_r26 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_first_lvalue)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    cpy_r_r25 = cpy_r_r29;
CPyL13: ;
    if (!cpy_r_r25) goto CPyL78;
    cpy_r_r30 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r31 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL16;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL17;
CPyL16: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL17: ;
    if (!cpy_r_r35) goto CPyL78;
    CPy_INCREF(cpy_r_first_lvalue);
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r40 = cpy_r_first_lvalue;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL10464;
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r40 = cpy_r_first_lvalue;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL10464;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_first_lvalue);
    goto CPyL98;
__LL10464: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL22;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___TupleExpr))
        cpy_r_r45 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "mypy.nodes.TupleExpr", cpy_r_r40);
        goto CPyL98;
    }
    cpy_r_r46 = ((mypy___nodes___TupleExprObject *)cpy_r_r45)->_items;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46;
    goto CPyL24;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___ListExpr))
        cpy_r_r48 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "mypy.nodes.ListExpr", cpy_r_r40);
        goto CPyL98;
    }
    cpy_r_r49 = ((mypy___nodes___ListExprObject *)cpy_r_r48)->_items;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r47 = cpy_r_r49;
CPyL24: ;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    CPy_DECREF(cpy_r_r47);
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r53);
    if (Py_TYPE(cpy_r_r53) == CPyType_nodes___TupleExpr)
        cpy_r_r54 = cpy_r_r53;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL10465;
    if (Py_TYPE(cpy_r_r53) == CPyType_nodes___ListExpr)
        cpy_r_r54 = cpy_r_r53;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL10465;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_r53);
    goto CPyL98;
__LL10465: ;
    cpy_r_r55 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___TupleExpr))
        cpy_r_r59 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "mypy.nodes.TupleExpr", cpy_r_r54);
        goto CPyL98;
    }
    cpy_r_r60 = ((mypy___nodes___TupleExprObject *)cpy_r_r59)->_items;
    CPy_INCREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60;
    goto CPyL30;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___ListExpr))
        cpy_r_r62 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 168, CPyStatic_statement___globals, "mypy.nodes.ListExpr", cpy_r_r54);
        goto CPyL98;
    }
    cpy_r_r63 = ((mypy___nodes___ListExprObject *)cpy_r_r62)->_items;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r61 = cpy_r_r63;
CPyL30: ;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_r61)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    CPy_DECREF(cpy_r_r61);
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = cpy_r_r52 == cpy_r_r66;
    if (!cpy_r_r67) goto CPyL78;
    cpy_r_r68 = 1;
    CPy_INCREF(cpy_r_first_lvalue);
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r69 = cpy_r_first_lvalue;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL10466;
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r69 = cpy_r_first_lvalue;
    else {
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 != NULL) goto __LL10466;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 169, CPyStatic_statement___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_first_lvalue);
    goto CPyL98;
__LL10466: ;
    cpy_r_r70 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_r69)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_nodes___TupleExpr))
        cpy_r_r74 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 169, CPyStatic_statement___globals, "mypy.nodes.TupleExpr", cpy_r_r69);
        goto CPyL98;
    }
    cpy_r_r75 = ((mypy___nodes___TupleExprObject *)cpy_r_r74)->_items;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75;
    goto CPyL37;
CPyL35: ;
    if (likely(Py_TYPE(cpy_r_r69) == CPyType_nodes___ListExpr))
        cpy_r_r77 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 169, CPyStatic_statement___globals, "mypy.nodes.ListExpr", cpy_r_r69);
        goto CPyL98;
    }
    cpy_r_r78 = ((mypy___nodes___ListExprObject *)cpy_r_r77)->_items;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r76 = cpy_r_r78;
CPyL37: ;
    cpy_r_r79 = 0;
CPyL38: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_r76)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL99;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_r76, cpy_r_r79);
    if (likely(PyObject_TypeCheck(cpy_r_r84, CPyType_nodes___Expression)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 169, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r84);
        goto CPyL100;
    }
    cpy_r_item = cpy_r_r85;
    cpy_r_r86 = CPyDef_statement___is_simple_lvalue(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 169, CPyStatic_statement___globals);
        goto CPyL100;
    }
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (cpy_r_r87) {
        goto CPyL101;
    } else
        goto CPyL43;
CPyL42: ;
    cpy_r_r68 = 0;
    goto CPyL44;
CPyL43: ;
    cpy_r_r88 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r88;
    goto CPyL38;
CPyL44: ;
    if (!cpy_r_r68) goto CPyL78;
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 << 1;
    cpy_r_r92 = cpy_r_r91 == 2;
    if (cpy_r_r92) {
        goto CPyL102;
    } else
        goto CPyL78;
CPyL46: ;
    cpy_r_r93 = PyList_New(0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 172, CPyStatic_statement___globals);
        goto CPyL103;
    }
    cpy_r_temps = cpy_r_r93;
    cpy_r_r94 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r94);
    if (Py_TYPE(cpy_r_r94) == CPyType_nodes___TupleExpr)
        cpy_r_r95 = cpy_r_r94;
    else {
        cpy_r_r95 = NULL;
    }
    if (cpy_r_r95 != NULL) goto __LL10467;
    if (Py_TYPE(cpy_r_r94) == CPyType_nodes___ListExpr)
        cpy_r_r95 = cpy_r_r94;
    else {
        cpy_r_r95 = NULL;
    }
    if (cpy_r_r95 != NULL) goto __LL10467;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 173, CPyStatic_statement___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_r94);
    goto CPyL104;
__LL10467: ;
    cpy_r_r96 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_r95)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    if (!cpy_r_r99) goto CPyL51;
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___TupleExpr))
        cpy_r_r100 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 173, CPyStatic_statement___globals, "mypy.nodes.TupleExpr", cpy_r_r95);
        goto CPyL104;
    }
    cpy_r_r101 = ((mypy___nodes___TupleExprObject *)cpy_r_r100)->_items;
    CPy_INCREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r102 = cpy_r_r101;
    goto CPyL53;
CPyL51: ;
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___ListExpr))
        cpy_r_r103 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 173, CPyStatic_statement___globals, "mypy.nodes.ListExpr", cpy_r_r95);
        goto CPyL104;
    }
    cpy_r_r104 = ((mypy___nodes___ListExprObject *)cpy_r_r103)->_items;
    CPy_INCREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r102 = cpy_r_r104;
CPyL53: ;
    cpy_r_r105 = 0;
CPyL54: ;
    cpy_r_r106 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r107 = *(int64_t *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 << 1;
    cpy_r_r109 = (Py_ssize_t)cpy_r_r105 < (Py_ssize_t)cpy_r_r108;
    if (!cpy_r_r109) goto CPyL105;
    cpy_r_r110 = CPyList_GetItemUnsafe(cpy_r_r102, cpy_r_r105);
    if (likely(PyObject_TypeCheck(cpy_r_r110, CPyType_nodes___Expression)))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 173, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r110);
        goto CPyL106;
    }
    cpy_r_right = cpy_r_r111;
    cpy_r_r112 = 2;
    cpy_r_r113 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_right, cpy_r_r112);
    CPy_DECREF(cpy_r_right);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 174, CPyStatic_statement___globals);
        goto CPyL106;
    }
    if (likely(cpy_r_r113 != Py_None))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 174, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r113);
        goto CPyL106;
    }
    cpy_r_rvalue_reg = cpy_r_r114;
    cpy_r_r115 = ((mypyc___ir___ops___ValueObject *)cpy_r_rvalue_reg)->_type;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = NULL;
    cpy_r_r117 = 2;
    cpy_r_r118 = CPY_INT_TAG;
    cpy_r_r119 = CPyDef_ops___Register(cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 175, CPyStatic_statement___globals);
        goto CPyL107;
    }
    cpy_r_temp = cpy_r_r119;
    cpy_r_r120 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r120);
    cpy_r_r121 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_temp, cpy_r_rvalue_reg, cpy_r_r120);
    CPy_DECREF(cpy_r_rvalue_reg);
    CPyTagged_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 176, CPyStatic_statement___globals);
        goto CPyL108;
    }
    cpy_r_r122 = PyList_Append(cpy_r_temps, cpy_r_temp);
    CPy_DECREF(cpy_r_temp);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 177, CPyStatic_statement___globals);
        goto CPyL106;
    }
    cpy_r_r124 = cpy_r_r105 + 2;
    cpy_r_r105 = cpy_r_r124;
    goto CPyL54;
CPyL62: ;
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r125 = cpy_r_first_lvalue;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL10468;
    if (Py_TYPE(cpy_r_first_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r125 = cpy_r_first_lvalue;
    else {
        cpy_r_r125 = NULL;
    }
    if (cpy_r_r125 != NULL) goto __LL10468;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 178, CPyStatic_statement___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_first_lvalue);
    goto CPyL109;
__LL10468: ;
    cpy_r_r126 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r127 = (CPyPtr)&((PyObject *)cpy_r_r125)->ob_type;
    cpy_r_r128 = *(PyObject * *)cpy_r_r127;
    cpy_r_r129 = cpy_r_r128 == cpy_r_r126;
    if (!cpy_r_r129) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_r125) == CPyType_nodes___TupleExpr))
        cpy_r_r130 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 178, CPyStatic_statement___globals, "mypy.nodes.TupleExpr", cpy_r_r125);
        goto CPyL109;
    }
    cpy_r_r131 = ((mypy___nodes___TupleExprObject *)cpy_r_r130)->_items;
    CPy_INCREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    cpy_r_r132 = cpy_r_r131;
    goto CPyL68;
CPyL66: ;
    if (likely(Py_TYPE(cpy_r_r125) == CPyType_nodes___ListExpr))
        cpy_r_r133 = cpy_r_r125;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 178, CPyStatic_statement___globals, "mypy.nodes.ListExpr", cpy_r_r125);
        goto CPyL109;
    }
    cpy_r_r134 = ((mypy___nodes___ListExprObject *)cpy_r_r133)->_items;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r132 = cpy_r_r134;
CPyL68: ;
    cpy_r_r135 = 0;
    cpy_r_r136 = 0;
CPyL69: ;
    cpy_r_r137 = (CPyPtr)&((PyVarObject *)cpy_r_r132)->ob_size;
    cpy_r_r138 = *(int64_t *)cpy_r_r137;
    cpy_r_r139 = cpy_r_r138 << 1;
    cpy_r_r140 = (Py_ssize_t)cpy_r_r135 < (Py_ssize_t)cpy_r_r139;
    if (!cpy_r_r140) goto CPyL110;
    cpy_r_r141 = (CPyPtr)&((PyVarObject *)cpy_r_temps)->ob_size;
    cpy_r_r142 = *(int64_t *)cpy_r_r141;
    cpy_r_r143 = cpy_r_r142 << 1;
    cpy_r_r144 = (Py_ssize_t)cpy_r_r136 < (Py_ssize_t)cpy_r_r143;
    if (!cpy_r_r144) goto CPyL110;
    cpy_r_r145 = CPyList_GetItemUnsafe(cpy_r_r132, cpy_r_r135);
    if (likely(PyObject_TypeCheck(cpy_r_r145, CPyType_nodes___Expression)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 178, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r145);
        goto CPyL111;
    }
    cpy_r_left = cpy_r_r146;
    cpy_r_r147 = CPyList_GetItemUnsafe(cpy_r_temps, cpy_r_r136);
    if (likely(Py_TYPE(cpy_r_r147) == CPyType_ops___Register))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 178, CPyStatic_statement___globals, "mypyc.ir.ops.Register", cpy_r_r147);
        goto CPyL112;
    }
    cpy_r_temp = cpy_r_r148;
    cpy_r_r149 = CPY_INT_TAG;
    cpy_r_r150 = 2;
    cpy_r_r151 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_left, cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_left);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 179, CPyStatic_statement___globals);
        goto CPyL113;
    }
    cpy_r_assignment_target = cpy_r_r151;
    cpy_r_r152 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r152);
    cpy_r_r153 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_assignment_target, cpy_r_temp, cpy_r_r152);
    CPy_DECREF(cpy_r_assignment_target);
    CPy_DECREF(cpy_r_temp);
    CPyTagged_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 180, CPyStatic_statement___globals);
        goto CPyL111;
    }
    cpy_r_r154 = cpy_r_r135 + 2;
    cpy_r_r135 = cpy_r_r154;
    cpy_r_r155 = cpy_r_r136 + 2;
    cpy_r_r136 = cpy_r_r155;
    goto CPyL69;
CPyL76: ;
    cpy_r_r156 = CPyDef_builder___IRBuilder___flush_keep_alives(cpy_r_builder);
    if (unlikely(cpy_r_r156 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 181, CPyStatic_statement___globals);
        goto CPyL93;
    }
    return 1;
CPyL78: ;
    cpy_r_r157 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r158 = ((mypy___nodes___ContextObject *)cpy_r_r157)->_line;
    if (unlikely(cpy_r_r158 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_assignment_stmt", "Expression", "line", 184, CPyStatic_statement___globals);
        goto CPyL98;
    }
    CPyTagged_INCREF(cpy_r_r158);
CPyL79: ;
    cpy_r_line = cpy_r_r158;
    cpy_r_r159 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = 2;
    cpy_r_r161 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r159);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 185, CPyStatic_statement___globals);
        goto CPyL114;
    }
    if (likely(cpy_r_r161 != Py_None))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 185, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r161);
        goto CPyL114;
    }
    cpy_r_rvalue_reg = cpy_r_r162;
    cpy_r_r163 = CPyDef_builder___IRBuilder___non_function_scope(cpy_r_builder);
    if (unlikely(cpy_r_r163 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 186, CPyStatic_statement___globals);
        goto CPyL115;
    }
    if (!cpy_r_r163) goto CPyL116;
    cpy_r_r164 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_is_final_def;
    if (!cpy_r_r164) goto CPyL116;
CPyL84: ;
    cpy_r_r165 = NULL;
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_builder___IRBuilder___init_final_static(cpy_r_builder, cpy_r_first_lvalue, cpy_r_rvalue_reg, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_first_lvalue);
    if (unlikely(cpy_r_r167 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 187, CPyStatic_statement___globals);
        goto CPyL117;
    }
CPyL85: ;
    cpy_r_r168 = 0;
CPyL86: ;
    cpy_r_r169 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r170 = *(int64_t *)cpy_r_r169;
    cpy_r_r171 = cpy_r_r170 << 1;
    cpy_r_r172 = (Py_ssize_t)cpy_r_r168 < (Py_ssize_t)cpy_r_r171;
    if (!cpy_r_r172) goto CPyL118;
    cpy_r_r173 = CPyList_GetItemUnsafe(cpy_r_lvalues, cpy_r_r168);
    if (likely(PyObject_TypeCheck(cpy_r_r173, CPyType_nodes___Expression)))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 188, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r173);
        goto CPyL117;
    }
    cpy_r_lvalue = cpy_r_r174;
    cpy_r_r175 = CPY_INT_TAG;
    cpy_r_r176 = 2;
    cpy_r_r177 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_lvalue, cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_lvalue);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 189, CPyStatic_statement___globals);
        goto CPyL117;
    }
    cpy_r_target = cpy_r_r177;
    cpy_r_r178 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_rvalue_reg, cpy_r_line);
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r178 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 190, CPyStatic_statement___globals);
        goto CPyL117;
    }
    cpy_r_r179 = CPyDef_builder___IRBuilder___flush_keep_alives(cpy_r_builder);
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 191, CPyStatic_statement___globals);
        goto CPyL117;
    }
    cpy_r_r180 = cpy_r_r168 + 2;
    cpy_r_r168 = cpy_r_r180;
    goto CPyL86;
CPyL92: ;
    return 1;
CPyL93: ;
    cpy_r_r181 = 2;
    return cpy_r_r181;
CPyL94: ;
    CPy_DECREF(cpy_r_lvalues);
    goto CPyL1;
CPyL95: ;
    CPy_DecRef(cpy_r_lvalues);
    goto CPyL93;
CPyL96: ;
    CPy_DECREF(cpy_r_lvalues);
    goto CPyL8;
CPyL97: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL9;
CPyL98: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_first_lvalue);
    goto CPyL93;
CPyL99: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL44;
CPyL100: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_r76);
    goto CPyL93;
CPyL101: ;
    CPy_DECREF(cpy_r_r76);
    goto CPyL42;
CPyL102: ;
    CPy_DECREF(cpy_r_lvalues);
    goto CPyL46;
CPyL103: ;
    CPy_DecRef(cpy_r_first_lvalue);
    goto CPyL93;
CPyL104: ;
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_temps);
    goto CPyL93;
CPyL105: ;
    CPy_DECREF(cpy_r_r102);
    goto CPyL62;
CPyL106: ;
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_r102);
    goto CPyL93;
CPyL107: ;
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_rvalue_reg);
    goto CPyL93;
CPyL108: ;
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_temp);
    goto CPyL93;
CPyL109: ;
    CPy_DecRef(cpy_r_temps);
    goto CPyL93;
CPyL110: ;
    CPy_DECREF(cpy_r_temps);
    CPy_DECREF(cpy_r_r132);
    goto CPyL76;
CPyL111: ;
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_r132);
    goto CPyL93;
CPyL112: ;
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_r132);
    CPy_DecRef(cpy_r_left);
    goto CPyL93;
CPyL113: ;
    CPy_DecRef(cpy_r_temps);
    CPy_DecRef(cpy_r_temp);
    CPy_DecRef(cpy_r_r132);
    goto CPyL93;
CPyL114: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_first_lvalue);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL93;
CPyL115: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_first_lvalue);
    CPy_DecRef(cpy_r_rvalue_reg);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL93;
CPyL116: ;
    CPy_DECREF(cpy_r_first_lvalue);
    goto CPyL85;
CPyL117: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalue_reg);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL93;
CPyL118: ;
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_rvalue_reg);
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL92;
}

PyObject *CPyPy_statement___transform_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "stmt", 0};
    static CPyArg_Parser parser = {"OO:transform_assignment_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_assignment_stmt(arg_builder, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assignment_stmt", 152, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___is_simple_lvalue(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r9 = cpy_r_r4;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    cpy_r_r9 = cpy_r_r13;
CPyL6: ;
    cpy_r_r14 = cpy_r_r9 ^ 1;
    return cpy_r_r14;
}

PyObject *CPyPy_statement___is_simple_lvalue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:is_simple_lvalue", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_statement___is_simple_lvalue(arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "is_simple_lvalue", 194, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_operator_assignment_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_can_borrow;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_target;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_target_value;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_rreg;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_op;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_lvalue;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyList_New(1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 200, CPyStatic_statement___globals);
        goto CPyL30;
    }
    cpy_r_r2 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r3 = *(CPyPtr *)cpy_r_r2;
    *(PyObject * *)cpy_r_r3 = cpy_r_r0;
    cpy_r_r4 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_builder___IRBuilder___disallow_class_assignments(cpy_r_builder, cpy_r_r1, cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 200, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r6 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_lvalue;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 202, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r8 = CPyDef_rtypes___is_tagged(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 202, CPyStatic_statement___globals);
        goto CPyL29;
    }
    if (!cpy_r_r8) goto CPyL19;
    cpy_r_r9 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_builder___IRBuilder___node_type(cpy_r_builder, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 203, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r11 = CPyDef_rtypes___is_tagged(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 203, CPyStatic_statement___globals);
        goto CPyL29;
    }
    if (!cpy_r_r11) goto CPyL19;
    cpy_r_r12 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_op;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStatic_builder___int_borrow_friendly_op;
    if (unlikely(cpy_r_r13 == NULL)) {
        goto CPyL31;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_borrow_friendly_op\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 204, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r15 = PySet_Contains(cpy_r_r13, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 204, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL19;
    cpy_r_r18 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_builder, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 206, CPyStatic_statement___globals);
        goto CPyL29;
    }
    if (cpy_r_r19) goto CPyL16;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL18;
CPyL16: ;
    cpy_r_r21 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_lvalue;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_ast_helpers___is_borrow_friendly_expr(cpy_r_builder, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 206, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r20 = cpy_r_r22;
CPyL18: ;
    cpy_r_can_borrow = cpy_r_r20;
    goto CPyL20;
CPyL19: ;
    cpy_r_can_borrow = 0;
CPyL20: ;
    cpy_r_r23 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_lvalue;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 211, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_target = cpy_r_r26;
    cpy_r_r27 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_target, cpy_r_r27, cpy_r_can_borrow);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 212, CPyStatic_statement___globals);
        goto CPyL32;
    }
    cpy_r_target_value = cpy_r_r28;
    cpy_r_r29 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r29, cpy_r_can_borrow);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 213, CPyStatic_statement___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 213, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r30);
        goto CPyL33;
    }
    cpy_r_rreg = cpy_r_r31;
    cpy_r_r32 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_op;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[784]; /* '=' */
    cpy_r_r34 = PyUnicode_Concat(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 215, CPyStatic_statement___globals);
        goto CPyL34;
    }
    cpy_r_op = cpy_r_r34;
    cpy_r_r35 = ((mypy___nodes___OperatorAssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_builder___IRBuilder___binary_op(cpy_r_builder, cpy_r_target_value, cpy_r_rreg, cpy_r_op, cpy_r_r35);
    CPy_DECREF(cpy_r_target_value);
    CPy_DECREF(cpy_r_rreg);
    CPy_DECREF(cpy_r_op);
    CPyTagged_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 216, CPyStatic_statement___globals);
        goto CPyL32;
    }
    cpy_r_res = cpy_r_r36;
    cpy_r_r37 = ((mypyc___ir___ops___ValueObject *)cpy_r_res)->_line;
    CPyTagged_INCREF(cpy_r_r37);
    cpy_r_r38 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_res, cpy_r_r37);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_res);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 219, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r39 = CPyDef_builder___IRBuilder___flush_keep_alives(cpy_r_builder);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 220, CPyStatic_statement___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL9;
CPyL32: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_target_value);
    goto CPyL29;
CPyL34: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_target_value);
    CPy_DecRef(cpy_r_rreg);
    goto CPyL29;
}

PyObject *CPyPy_statement___transform_operator_assignment_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "stmt", 0};
    static CPyArg_Parser parser = {"OO:transform_operator_assignment_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___OperatorAssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.OperatorAssignmentStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_operator_assignment_stmt(arg_builder, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_operator_assignment_stmt", 198, CPyStatic_statement___globals);
    return NULL;
}

tuple_T2OO CPyDef_statement___import_globals_id_and_name(PyObject *cpy_r_module_id, PyObject *cpy_r_as_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_globals_id;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_globals_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_as_name != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL5;
    CPy_INCREF(cpy_r_as_name);
    if (likely(cpy_r_as_name != Py_None))
        cpy_r_r2 = cpy_r_as_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 223, CPyStatic_statement___globals, "str", cpy_r_as_name);
        goto CPyL10;
    }
    cpy_r_r3 = CPyStr_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_module_id);
    cpy_r_globals_id = cpy_r_module_id;
    CPy_INCREF(cpy_r_as_name);
    if (likely(cpy_r_as_name != Py_None))
        cpy_r_r4 = cpy_r_as_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 235, CPyStatic_statement___globals, "str", cpy_r_as_name);
        goto CPyL11;
    }
    cpy_r_globals_name = cpy_r_r4;
    goto CPyL9;
CPyL5: ;
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = PyUnicode_Split(cpy_r_module_id, cpy_r_r5, -1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 237, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 237, CPyStatic_statement___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 237, CPyStatic_statement___globals, "str", cpy_r_r7);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r8);
    cpy_r_globals_id = cpy_r_r8;
    cpy_r_globals_name = cpy_r_r8;
CPyL9: ;
    cpy_r_r9.f0 = cpy_r_globals_id;
    cpy_r_r9.f1 = cpy_r_globals_name;
    CPy_INCREF(cpy_r_r9.f0);
    CPy_INCREF(cpy_r_r9.f1);
    CPy_DECREF(cpy_r_globals_id);
    CPy_DECREF(cpy_r_globals_name);
    return cpy_r_r9;
CPyL10: ;
    tuple_T2OO __tmp10469 = { NULL, NULL };
    cpy_r_r10 = __tmp10469;
    return cpy_r_r10;
CPyL11: ;
    CPy_DecRef(cpy_r_globals_id);
    goto CPyL10;
}

PyObject *CPyPy_statement___import_globals_id_and_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"module_id", "as_name", 0};
    static CPyArg_Parser parser = {"OO:import_globals_id_and_name", kwlist, 0};
    PyObject *obj_module_id;
    PyObject *obj_as_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_module_id, &obj_as_name)) {
        return NULL;
    }
    PyObject *arg_module_id;
    if (likely(PyUnicode_Check(obj_module_id)))
        arg_module_id = obj_module_id;
    else {
        CPy_TypeError("str", obj_module_id); 
        goto fail;
    }
    PyObject *arg_as_name;
    if (PyUnicode_Check(obj_as_name))
        arg_as_name = obj_as_name;
    else {
        arg_as_name = NULL;
    }
    if (arg_as_name != NULL) goto __LL10470;
    if (obj_as_name == Py_None)
        arg_as_name = obj_as_name;
    else {
        arg_as_name = NULL;
    }
    if (arg_as_name != NULL) goto __LL10470;
    CPy_TypeError("str or None", obj_as_name); 
    goto fail;
__LL10470: ;
    tuple_T2OO retval = CPyDef_statement___import_globals_id_and_name(arg_module_id, arg_as_name);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10471 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10471);
    PyObject *__tmp10472 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10472);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "import_globals_id_and_name", 223, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_import(PyObject *cpy_r_builder, PyObject *cpy_r_node) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_globals;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_mod_id;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_as_name;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_globals_id;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_globals_name;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_modules;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_static_ptrs;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_mod_lines;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_import_node;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OO cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_mod_static;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    int32_t cpy_r_r96;
    char cpy_r_r97;
    CPyTagged cpy_r_r98;
    CPyTagged cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_static_array_ptr;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_import_line_ptr;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    CPyPtr cpy_r_r129;
    CPyPtr cpy_r_r130;
    CPyPtr cpy_r_r131;
    CPyPtr cpy_r_r132;
    CPyPtr cpy_r_r133;
    CPyPtr cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    cpy_r_r0 = ((mypy___nodes___ImportObject *)cpy_r_node)->_is_mypy_only;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = ((mypy___nodes___ImportObject *)cpy_r_node)->_is_top_level;
    if (cpy_r_r1) goto CPyL15;
CPyL3: ;
    cpy_r_r2 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 266, CPyStatic_statement___globals);
        goto CPyL76;
    }
    cpy_r_globals = cpy_r_r2;
    cpy_r_r3 = ((mypy___nodes___ImportObject *)cpy_r_node)->_ids;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL77;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    PyObject *__tmp10473;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 2))) {
        __tmp10473 = NULL;
        goto __LL10474;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0))))
        __tmp10473 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp10473 = NULL;
    }
    if (__tmp10473 == NULL) goto __LL10474;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 1)))
        __tmp10473 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp10473 = NULL;
    }
    if (__tmp10473 != NULL) goto __LL10475;
    if (PyTuple_GET_ITEM(cpy_r_r9, 1) == Py_None)
        __tmp10473 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp10473 = NULL;
    }
    if (__tmp10473 != NULL) goto __LL10475;
    __tmp10473 = NULL;
__LL10475: ;
    if (__tmp10473 == NULL) goto __LL10474;
    __tmp10473 = cpy_r_r9;
__LL10474: ;
    if (unlikely(__tmp10473 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r9); cpy_r_r10 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10476 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp10476);
        PyObject *__tmp10477;
        if (likely(PyUnicode_Check(__tmp10476)))
            __tmp10477 = __tmp10476;
        else {
            CPy_TypeError("str", __tmp10476); 
            __tmp10477 = NULL;
        }
        cpy_r_r10.f0 = __tmp10477;
        PyObject *__tmp10478 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPy_INCREF(__tmp10478);
        PyObject *__tmp10479;
        if (PyUnicode_Check(__tmp10478))
            __tmp10479 = __tmp10478;
        else {
            __tmp10479 = NULL;
        }
        if (__tmp10479 != NULL) goto __LL10480;
        if (__tmp10478 == Py_None)
            __tmp10479 = __tmp10478;
        else {
            __tmp10479 = NULL;
        }
        if (__tmp10479 != NULL) goto __LL10480;
        CPy_TypeError("str or None", __tmp10478); 
        __tmp10479 = NULL;
__LL10480: ;
        cpy_r_r10.f1 = __tmp10479;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 267, CPyStatic_statement___globals);
        goto CPyL78;
    }
    cpy_r_r11 = cpy_r_r10.f0;
    CPy_INCREF(cpy_r_r11);
    cpy_r_mod_id = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10.f0);
    CPy_DECREF(cpy_r_r10.f1);
    cpy_r_as_name = cpy_r_r12;
    cpy_r_r13 = ((mypy___nodes___ImportObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_builder___IRBuilder___gen_import(cpy_r_builder, cpy_r_mod_id, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 268, CPyStatic_statement___globals);
        goto CPyL79;
    }
    cpy_r_r15 = CPyDef_statement___import_globals_id_and_name(cpy_r_mod_id, cpy_r_as_name);
    CPy_DECREF(cpy_r_mod_id);
    CPy_DECREF(cpy_r_as_name);
    if (unlikely(cpy_r_r15.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 269, CPyStatic_statement___globals);
        goto CPyL78;
    }
    cpy_r_r16 = cpy_r_r15.f0;
    CPy_INCREF(cpy_r_r16);
    cpy_r_globals_id = cpy_r_r16;
    cpy_r_r17 = cpy_r_r15.f1;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15.f0);
    CPy_DECREF(cpy_r_r15.f1);
    cpy_r_globals_name = cpy_r_r17;
    cpy_r_r18 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r19 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_globals_name);
    CPy_DECREF(cpy_r_globals_name);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 273, CPyStatic_statement___globals);
        goto CPyL80;
    }
    cpy_r_r20 = ((mypy___nodes___ImportObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_builder___IRBuilder___get_module(cpy_r_builder, cpy_r_globals_id, cpy_r_r20);
    CPy_DECREF(cpy_r_globals_id);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 273, CPyStatic_statement___globals);
        goto CPyL81;
    }
    cpy_r_r22 = PyList_New(2);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 273, CPyStatic_statement___globals);
        goto CPyL82;
    }
    cpy_r_r23 = (CPyPtr)&((PyListObject *)cpy_r_r22)->ob_item;
    cpy_r_r24 = *(CPyPtr *)cpy_r_r23;
    *(PyObject * *)cpy_r_r24 = cpy_r_r19;
    cpy_r_r25 = cpy_r_r24 + 8;
    *(PyObject * *)cpy_r_r25 = cpy_r_r21;
    cpy_r_r26 = ((mypy___nodes___ImportObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_r27 = Py_None;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_globals, cpy_r_r18, cpy_r_r22, cpy_r_r27, cpy_r_r26, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 270, CPyStatic_statement___globals);
        goto CPyL78;
    } else
        goto CPyL83;
CPyL13: ;
    cpy_r_r31 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r31;
    goto CPyL5;
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r32 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_import_groups;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyDict_Contains(cpy_r_r32, cpy_r_node);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 279, CPyStatic_statement___globals);
        goto CPyL76;
    }
    cpy_r_r35 = cpy_r_r33;
    cpy_r_r36 = cpy_r_r35 ^ 1;
    if (!cpy_r_r36) goto CPyL18;
    return 1;
CPyL18: ;
    cpy_r_r37 = PyList_New(0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 282, CPyStatic_statement___globals);
        goto CPyL76;
    }
    cpy_r_modules = cpy_r_r37;
    cpy_r_r38 = PyList_New(0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 283, CPyStatic_statement___globals);
        goto CPyL84;
    }
    cpy_r_static_ptrs = cpy_r_r38;
    cpy_r_r39 = PyList_New(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 287, CPyStatic_statement___globals);
        goto CPyL85;
    }
    cpy_r_mod_lines = cpy_r_r39;
    cpy_r_r40 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_import_groups;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r40, cpy_r_node);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 288, CPyStatic_statement___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import", 288, CPyStatic_statement___globals, "list", cpy_r_r41);
        goto CPyL86;
    }
    cpy_r_r43 = 0;
CPyL24: ;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = (Py_ssize_t)cpy_r_r43 < (Py_ssize_t)cpy_r_r46;
    if (!cpy_r_r47) goto CPyL87;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_r42, cpy_r_r43);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___Import))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import", 288, CPyStatic_statement___globals, "mypy.nodes.Import", cpy_r_r48);
        goto CPyL88;
    }
    cpy_r_import_node = cpy_r_r49;
    cpy_r_r50 = ((mypy___nodes___ImportObject *)cpy_r_import_node)->_ids;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = 0;
CPyL27: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL89;
    cpy_r_r56 = CPyList_GetItemUnsafe(cpy_r_r50, cpy_r_r51);
    PyObject *__tmp10481;
    if (unlikely(!(PyTuple_Check(cpy_r_r56) && PyTuple_GET_SIZE(cpy_r_r56) == 2))) {
        __tmp10481 = NULL;
        goto __LL10482;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 0))))
        __tmp10481 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    else {
        __tmp10481 = NULL;
    }
    if (__tmp10481 == NULL) goto __LL10482;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 1)))
        __tmp10481 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        __tmp10481 = NULL;
    }
    if (__tmp10481 != NULL) goto __LL10483;
    if (PyTuple_GET_ITEM(cpy_r_r56, 1) == Py_None)
        __tmp10481 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        __tmp10481 = NULL;
    }
    if (__tmp10481 != NULL) goto __LL10483;
    __tmp10481 = NULL;
__LL10483: ;
    if (__tmp10481 == NULL) goto __LL10482;
    __tmp10481 = cpy_r_r56;
__LL10482: ;
    if (unlikely(__tmp10481 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r56); cpy_r_r57 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10484 = PyTuple_GET_ITEM(cpy_r_r56, 0);
        CPy_INCREF(__tmp10484);
        PyObject *__tmp10485;
        if (likely(PyUnicode_Check(__tmp10484)))
            __tmp10485 = __tmp10484;
        else {
            CPy_TypeError("str", __tmp10484); 
            __tmp10485 = NULL;
        }
        cpy_r_r57.f0 = __tmp10485;
        PyObject *__tmp10486 = PyTuple_GET_ITEM(cpy_r_r56, 1);
        CPy_INCREF(__tmp10486);
        PyObject *__tmp10487;
        if (PyUnicode_Check(__tmp10486))
            __tmp10487 = __tmp10486;
        else {
            __tmp10487 = NULL;
        }
        if (__tmp10487 != NULL) goto __LL10488;
        if (__tmp10486 == Py_None)
            __tmp10487 = __tmp10486;
        else {
            __tmp10487 = NULL;
        }
        if (__tmp10487 != NULL) goto __LL10488;
        CPy_TypeError("str or None", __tmp10486); 
        __tmp10487 = NULL;
__LL10488: ;
        cpy_r_r57.f1 = __tmp10487;
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 289, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r58 = cpy_r_r57.f0;
    CPy_INCREF(cpy_r_r58);
    cpy_r_mod_id = cpy_r_r58;
    cpy_r_r59 = cpy_r_r57.f1;
    CPy_INCREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r57.f0);
    CPy_DECREF(cpy_r_r57.f1);
    cpy_r_as_name = cpy_r_r59;
    cpy_r_r60 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_imports;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = Py_None;
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_mod_id, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 290, CPyStatic_statement___globals);
        goto CPyL91;
    }
    cpy_r_r64 = CPyDef_statement___import_globals_id_and_name(cpy_r_mod_id, cpy_r_as_name);
    CPy_DECREF(cpy_r_as_name);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL92;
    }
    cpy_r_r65 = PyList_New(1);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL93;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    CPy_INCREF(cpy_r_mod_id);
    *(PyObject * *)cpy_r_r67 = cpy_r_mod_id;
    cpy_r_r68 = PyTuple_New(2);
    if (unlikely(cpy_r_r68 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10489 = cpy_r_r64.f0;
    PyTuple_SET_ITEM(cpy_r_r68, 0, __tmp10489);
    PyObject *__tmp10490 = cpy_r_r64.f1;
    PyTuple_SET_ITEM(cpy_r_r68, 1, __tmp10490);
    cpy_r_r69 = CPyList_Extend(cpy_r_r65, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL94;
    } else
        goto CPyL95;
CPyL33: ;
    cpy_r_r70 = PyList_AsTuple(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL92;
    }
    PyObject *__tmp10491;
    if (unlikely(!(PyTuple_Check(cpy_r_r70) && PyTuple_GET_SIZE(cpy_r_r70) == 3))) {
        __tmp10491 = NULL;
        goto __LL10492;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 0))))
        __tmp10491 = PyTuple_GET_ITEM(cpy_r_r70, 0);
    else {
        __tmp10491 = NULL;
    }
    if (__tmp10491 == NULL) goto __LL10492;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 1))))
        __tmp10491 = PyTuple_GET_ITEM(cpy_r_r70, 1);
    else {
        __tmp10491 = NULL;
    }
    if (__tmp10491 == NULL) goto __LL10492;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r70, 2))))
        __tmp10491 = PyTuple_GET_ITEM(cpy_r_r70, 2);
    else {
        __tmp10491 = NULL;
    }
    if (__tmp10491 == NULL) goto __LL10492;
    __tmp10491 = cpy_r_r70;
__LL10492: ;
    if (unlikely(__tmp10491 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r70); cpy_r_r71 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp10493 = PyTuple_GET_ITEM(cpy_r_r70, 0);
        CPy_INCREF(__tmp10493);
        PyObject *__tmp10494;
        if (likely(PyUnicode_Check(__tmp10493)))
            __tmp10494 = __tmp10493;
        else {
            CPy_TypeError("str", __tmp10493); 
            __tmp10494 = NULL;
        }
        cpy_r_r71.f0 = __tmp10494;
        PyObject *__tmp10495 = PyTuple_GET_ITEM(cpy_r_r70, 1);
        CPy_INCREF(__tmp10495);
        PyObject *__tmp10496;
        if (likely(PyUnicode_Check(__tmp10495)))
            __tmp10496 = __tmp10495;
        else {
            CPy_TypeError("str", __tmp10495); 
            __tmp10496 = NULL;
        }
        cpy_r_r71.f1 = __tmp10496;
        PyObject *__tmp10497 = PyTuple_GET_ITEM(cpy_r_r70, 2);
        CPy_INCREF(__tmp10497);
        PyObject *__tmp10498;
        if (likely(PyUnicode_Check(__tmp10497)))
            __tmp10498 = __tmp10497;
        else {
            CPy_TypeError("str", __tmp10497); 
            __tmp10498 = NULL;
        }
        cpy_r_r71.f2 = __tmp10498;
    }
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL92;
    }
    cpy_r_r72 = PyTuple_New(3);
    if (unlikely(cpy_r_r72 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10499 = cpy_r_r71.f0;
    PyTuple_SET_ITEM(cpy_r_r72, 0, __tmp10499);
    PyObject *__tmp10500 = cpy_r_r71.f1;
    PyTuple_SET_ITEM(cpy_r_r72, 1, __tmp10500);
    PyObject *__tmp10501 = cpy_r_r71.f2;
    PyTuple_SET_ITEM(cpy_r_r72, 2, __tmp10501);
    cpy_r_r73 = PyList_Append(cpy_r_modules, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 291, CPyStatic_statement___globals);
        goto CPyL92;
    }
    cpy_r_r75 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r75 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 292, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r77 = CPyStatics[408]; /* 'module' */
    cpy_r_r78 = NULL;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyDef_ops___LoadStatic(cpy_r_r75, cpy_r_mod_id, cpy_r_r78, cpy_r_r77, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_mod_id);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 292, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_mod_static = cpy_r_r81;
    cpy_r_r82 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (unlikely(cpy_r_r82 == NULL)) {
        goto CPyL97;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 293, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r84 = CPY_INT_TAG;
    cpy_r_r85 = CPyDef_ops___LoadAddress(cpy_r_r82, cpy_r_mod_static, cpy_r_r84);
    CPy_DECREF(cpy_r_mod_static);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 293, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r86 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 293, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r87 = PyList_Append(cpy_r_static_ptrs, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 293, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r89 = ((mypy___nodes___ImportObject *)cpy_r_import_node)->_line;
    CPyTagged_INCREF(cpy_r_r89);
    cpy_r_r90 = CPyStatic_statement___globals;
    cpy_r_r91 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 294, CPyStatic_statement___globals);
        goto CPyL98;
    }
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_rtypes___RPrimitive))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import", 294, CPyStatic_statement___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r92);
        goto CPyL98;
    }
    cpy_r_r94 = CPY_INT_TAG;
    cpy_r_r95 = CPyDef_ops___Integer(cpy_r_r89, cpy_r_r93, cpy_r_r94);
    CPyTagged_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 294, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r96 = PyList_Append(cpy_r_mod_lines, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 294, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r98 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r98;
    goto CPyL27;
CPyL51: ;
    cpy_r_r99 = cpy_r_r43 + 2;
    cpy_r_r43 = cpy_r_r99;
    goto CPyL24;
CPyL52: ;
    cpy_r_r100 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r100);
    cpy_r_r101 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (unlikely(cpy_r_r101 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 296, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r103 = 2;
    cpy_r_r104 = CPyDef_ll_builder___LowLevelIRBuilder___setup_rarray(cpy_r_r100, cpy_r_r101, cpy_r_static_ptrs, cpy_r_r103);
    CPy_DECREF(cpy_r_static_ptrs);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 296, CPyStatic_statement___globals);
        goto CPyL100;
    }
    cpy_r_static_array_ptr = cpy_r_r104;
    cpy_r_r105 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyStatic_statement___globals;
    cpy_r_r107 = CPyStatics[7974]; /* 'c_pyssize_t_rprimitive' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 297, CPyStatic_statement___globals);
        goto CPyL101;
    }
    if (likely(Py_TYPE(cpy_r_r108) == CPyType_rtypes___RPrimitive))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import", 297, CPyStatic_statement___globals, "mypyc.ir.rtypes.RPrimitive", cpy_r_r108);
        goto CPyL101;
    }
    cpy_r_r110 = 2;
    cpy_r_r111 = CPyDef_ll_builder___LowLevelIRBuilder___setup_rarray(cpy_r_r105, cpy_r_r109, cpy_r_mod_lines, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_mod_lines);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 297, CPyStatic_statement___globals);
        goto CPyL102;
    }
    cpy_r_import_line_ptr = cpy_r_r111;
    cpy_r_r112 = CPyStatic_statement___globals;
    cpy_r_r113 = CPyStatics[8579]; /* 'import_many_op' */
    cpy_r_r114 = CPyDict_GetItem(cpy_r_r112, cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 299, CPyStatic_statement___globals);
        goto CPyL103;
    }
    if (likely(PyTuple_Check(cpy_r_r114)))
        cpy_r_r115 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import", 299, CPyStatic_statement___globals, "tuple", cpy_r_r114);
        goto CPyL103;
    }
    cpy_r_r116 = PyList_AsTuple(cpy_r_modules);
    CPy_DECREF(cpy_r_modules);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 301, CPyStatic_statement___globals);
        goto CPyL104;
    }
    cpy_r_r117 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r117 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 301, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r119 = CPyDef_ops___LoadLiteral(cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 301, CPyStatic_statement___globals);
        goto CPyL104;
    }
    cpy_r_r120 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 301, CPyStatic_statement___globals);
        goto CPyL104;
    }
    cpy_r_r121 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 303, CPyStatic_statement___globals);
        goto CPyL106;
    }
    cpy_r_r122 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_path;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_import", "IRBuilder", "module_path", 304, CPyStatic_statement___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r122);
CPyL69: ;
    cpy_r_r123 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 304, CPyStatic_statement___globals);
        goto CPyL107;
    }
    cpy_r_r124 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r125 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r124)->_name;
    CPy_INCREF(cpy_r_r125);
    cpy_r_r126 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 305, CPyStatic_statement___globals);
        goto CPyL108;
    }
    cpy_r_r127 = PyList_New(6);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 300, CPyStatic_statement___globals);
        goto CPyL109;
    }
    cpy_r_r128 = (CPyPtr)&((PyListObject *)cpy_r_r127)->ob_item;
    cpy_r_r129 = *(CPyPtr *)cpy_r_r128;
    *(PyObject * *)cpy_r_r129 = cpy_r_r120;
    cpy_r_r130 = cpy_r_r129 + 8;
    *(PyObject * *)cpy_r_r130 = cpy_r_static_array_ptr;
    cpy_r_r131 = cpy_r_r129 + 16;
    *(PyObject * *)cpy_r_r131 = cpy_r_r121;
    cpy_r_r132 = cpy_r_r129 + 24;
    *(PyObject * *)cpy_r_r132 = cpy_r_r123;
    cpy_r_r133 = cpy_r_r129 + 32;
    *(PyObject * *)cpy_r_r133 = cpy_r_r126;
    cpy_r_r134 = cpy_r_r129 + 40;
    *(PyObject * *)cpy_r_r134 = cpy_r_import_line_ptr;
    cpy_r_r135 = CPyStatic_statement___globals;
    cpy_r_r136 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 308, CPyStatic_statement___globals);
        goto CPyL110;
    }
    if (likely(PyLong_Check(cpy_r_r137)))
        cpy_r_r138 = CPyTagged_FromObject(cpy_r_r137);
    else {
        CPy_TypeError("int", cpy_r_r137); cpy_r_r138 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 308, CPyStatic_statement___globals);
        goto CPyL110;
    }
    cpy_r_r139 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r115, cpy_r_r127, cpy_r_r138);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r127);
    CPyTagged_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 298, CPyStatic_statement___globals);
        goto CPyL76;
    } else
        goto CPyL111;
CPyL75: ;
    return 1;
CPyL76: ;
    cpy_r_r140 = 2;
    return cpy_r_r140;
CPyL77: ;
    CPy_DECREF(cpy_r_globals);
    CPy_DECREF(cpy_r_r3);
    goto CPyL14;
CPyL78: ;
    CPy_DecRef(cpy_r_globals);
    CPy_DecRef(cpy_r_r3);
    goto CPyL76;
CPyL79: ;
    CPy_DecRef(cpy_r_globals);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_as_name);
    goto CPyL76;
CPyL80: ;
    CPy_DecRef(cpy_r_globals);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_globals_id);
    goto CPyL76;
CPyL81: ;
    CPy_DecRef(cpy_r_globals);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r19);
    goto CPyL76;
CPyL82: ;
    CPy_DecRef(cpy_r_globals);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL76;
CPyL83: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL13;
CPyL84: ;
    CPy_DecRef(cpy_r_modules);
    goto CPyL76;
CPyL85: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    goto CPyL76;
CPyL86: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    goto CPyL76;
CPyL87: ;
    CPy_DECREF(cpy_r_r42);
    goto CPyL52;
CPyL88: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    goto CPyL76;
CPyL89: ;
    CPy_DECREF(cpy_r_import_node);
    CPy_DECREF(cpy_r_r50);
    goto CPyL51;
CPyL90: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    goto CPyL76;
CPyL91: ;
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_as_name);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    goto CPyL76;
CPyL92: ;
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    goto CPyL76;
CPyL93: ;
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r64.f0);
    CPy_DecRef(cpy_r_r64.f1);
    goto CPyL76;
CPyL94: ;
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r65);
    goto CPyL76;
CPyL95: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL33;
CPyL96: ;
    CPy_DecRef(cpy_r_mod_id);
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    goto CPyL37;
CPyL97: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_mod_static);
    goto CPyL41;
CPyL98: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_import_node);
    CPy_DecRef(cpy_r_r50);
    CPyTagged_DecRef(cpy_r_r89);
    goto CPyL76;
CPyL99: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_ptrs);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_r100);
    goto CPyL53;
CPyL100: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_mod_lines);
    goto CPyL76;
CPyL101: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_mod_lines);
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_r105);
    goto CPyL76;
CPyL102: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_array_ptr);
    goto CPyL76;
CPyL103: ;
    CPy_DecRef(cpy_r_modules);
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    goto CPyL76;
CPyL104: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    goto CPyL76;
CPyL105: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    goto CPyL63;
CPyL106: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r120);
    goto CPyL76;
CPyL107: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL76;
CPyL108: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    goto CPyL76;
CPyL109: ;
    CPy_DecRef(cpy_r_static_array_ptr);
    CPy_DecRef(cpy_r_import_line_ptr);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r126);
    goto CPyL76;
CPyL110: ;
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r127);
    goto CPyL76;
CPyL111: ;
    CPy_DECREF(cpy_r_r139);
    goto CPyL75;
}

PyObject *CPyPy_statement___transform_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "node", 0};
    static CPyArg_Parser parser = {"OO:transform_import", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_node)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Import))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Import", obj_node); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_import(arg_builder, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import", 242, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_import_from(PyObject *cpy_r_builder, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_module_state;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_module_package;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_id;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    tuple_T2OO cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r53;
    PyObject *cpy_r__;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T2OO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_as_name;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_as_names;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_names_literal;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_as_names_literal;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    CPyPtr cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    cpy_r_r0 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_is_mypy_only;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_graph;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_import_from", "IRBuilder", "module_name", 316, CPyStatic_statement___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 316, CPyStatic_statement___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_mypy___build___State))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 316, CPyStatic_statement___globals, "mypy.build.State", cpy_r_r3);
        goto CPyL68;
    }
    cpy_r_module_state = cpy_r_r4;
    cpy_r_r5 = ((mypy___build___StateObject *)cpy_r_module_state)->_ancestors;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL70;
    cpy_r_r8 = ((mypy___build___StateObject *)cpy_r_module_state)->_ancestors;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 317, CPyStatic_statement___globals, "list", cpy_r_r8);
        goto CPyL71;
    }
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL70;
    cpy_r_r14 = ((mypy___build___StateObject *)cpy_r_module_state)->_ancestors;
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 318, CPyStatic_statement___globals, "list", cpy_r_r14);
        goto CPyL71;
    }
    cpy_r_r16 = CPyList_GetItemShort(cpy_r_r15, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 318, CPyStatic_statement___globals);
        goto CPyL71;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 318, CPyStatic_statement___globals, "str", cpy_r_r16);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_module_state);
    cpy_r_module_package = cpy_r_r17;
    goto CPyL17;
CPyL12: ;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_path;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_import_from", "IRBuilder", "module_path", 319, CPyStatic_statement___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = CPyStatics[287]; /* '__init__.py' */
    cpy_r_r20 = CPyStr_Endswith(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r20) goto CPyL16;
    cpy_r_r21 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_import_from", "IRBuilder", "module_name", 320, CPyStatic_statement___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    cpy_r_module_package = cpy_r_r21;
    goto CPyL17;
CPyL16: ;
    cpy_r_r22 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r22);
    cpy_r_module_package = cpy_r_r22;
CPyL17: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_relative;
    CPyTagged_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r24);
    cpy_r_r26 = PyNumber_Multiply(cpy_r_r23, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals);
        goto CPyL72;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals, "str", cpy_r_r26);
        goto CPyL72;
    }
    cpy_r_r28 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_id;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = PyUnicode_Concat(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals);
        goto CPyL72;
    }
    cpy_r_r30 = CPyModule_importlib___util;
    cpy_r_r31 = CPyStatics[8580]; /* 'resolve_name' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r33[2] = {cpy_r_r29, cpy_r_module_package};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 2, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_module_package);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 324, CPyStatic_statement___globals, "str", cpy_r_r35);
        goto CPyL68;
    }
    cpy_r_id = cpy_r_r36;
    cpy_r_r37 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_imports;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = Py_None;
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_id, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 325, CPyStatic_statement___globals);
        goto CPyL74;
    }
    cpy_r_r41 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_names;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r41)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = PyList_New(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 327, CPyStatic_statement___globals);
        goto CPyL75;
    }
    cpy_r_r45 = 0;
CPyL26: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_r41)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r48;
    if (!cpy_r_r49) goto CPyL76;
    cpy_r_r50 = CPyList_GetItemUnsafe(cpy_r_r41, cpy_r_r45);
    PyObject *__tmp10502;
    if (unlikely(!(PyTuple_Check(cpy_r_r50) && PyTuple_GET_SIZE(cpy_r_r50) == 2))) {
        __tmp10502 = NULL;
        goto __LL10503;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r50, 0))))
        __tmp10502 = PyTuple_GET_ITEM(cpy_r_r50, 0);
    else {
        __tmp10502 = NULL;
    }
    if (__tmp10502 == NULL) goto __LL10503;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r50, 1)))
        __tmp10502 = PyTuple_GET_ITEM(cpy_r_r50, 1);
    else {
        __tmp10502 = NULL;
    }
    if (__tmp10502 != NULL) goto __LL10504;
    if (PyTuple_GET_ITEM(cpy_r_r50, 1) == Py_None)
        __tmp10502 = PyTuple_GET_ITEM(cpy_r_r50, 1);
    else {
        __tmp10502 = NULL;
    }
    if (__tmp10502 != NULL) goto __LL10504;
    __tmp10502 = NULL;
__LL10504: ;
    if (__tmp10502 == NULL) goto __LL10503;
    __tmp10502 = cpy_r_r50;
__LL10503: ;
    if (unlikely(__tmp10502 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r50); cpy_r_r51 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10505 = PyTuple_GET_ITEM(cpy_r_r50, 0);
        CPy_INCREF(__tmp10505);
        PyObject *__tmp10506;
        if (likely(PyUnicode_Check(__tmp10505)))
            __tmp10506 = __tmp10505;
        else {
            CPy_TypeError("str", __tmp10505); 
            __tmp10506 = NULL;
        }
        cpy_r_r51.f0 = __tmp10506;
        PyObject *__tmp10507 = PyTuple_GET_ITEM(cpy_r_r50, 1);
        CPy_INCREF(__tmp10507);
        PyObject *__tmp10508;
        if (PyUnicode_Check(__tmp10507))
            __tmp10508 = __tmp10507;
        else {
            __tmp10508 = NULL;
        }
        if (__tmp10508 != NULL) goto __LL10509;
        if (__tmp10507 == Py_None)
            __tmp10508 = __tmp10507;
        else {
            __tmp10508 = NULL;
        }
        if (__tmp10508 != NULL) goto __LL10509;
        CPy_TypeError("str or None", __tmp10507); 
        __tmp10508 = NULL;
__LL10509: ;
        cpy_r_r51.f1 = __tmp10508;
    }
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 327, CPyStatic_statement___globals);
        goto CPyL77;
    }
    cpy_r_r52 = cpy_r_r51.f0;
    CPy_INCREF(cpy_r_r52);
    cpy_r_name = cpy_r_r52;
    cpy_r_r53 = cpy_r_r51.f1;
    CPy_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r51.f0);
    CPy_DECREF(cpy_r_r51.f1);
    cpy_r__ = cpy_r_r53;
    CPy_DECREF(cpy_r__);
    cpy_r_r54 = CPyList_SetItemUnsafe(cpy_r_r44, cpy_r_r45, cpy_r_name);
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 327, CPyStatic_statement___globals);
        goto CPyL77;
    }
    cpy_r_r55 = cpy_r_r45 + 2;
    cpy_r_r45 = cpy_r_r55;
    goto CPyL26;
CPyL30: ;
    cpy_r_names = cpy_r_r44;
    cpy_r_r56 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_names;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = PyList_New(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 328, CPyStatic_statement___globals);
        goto CPyL78;
    }
    cpy_r_r60 = 0;
CPyL32: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL79;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_r56, cpy_r_r60);
    PyObject *__tmp10510;
    if (unlikely(!(PyTuple_Check(cpy_r_r65) && PyTuple_GET_SIZE(cpy_r_r65) == 2))) {
        __tmp10510 = NULL;
        goto __LL10511;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r65, 0))))
        __tmp10510 = PyTuple_GET_ITEM(cpy_r_r65, 0);
    else {
        __tmp10510 = NULL;
    }
    if (__tmp10510 == NULL) goto __LL10511;
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r65, 1)))
        __tmp10510 = PyTuple_GET_ITEM(cpy_r_r65, 1);
    else {
        __tmp10510 = NULL;
    }
    if (__tmp10510 != NULL) goto __LL10512;
    if (PyTuple_GET_ITEM(cpy_r_r65, 1) == Py_None)
        __tmp10510 = PyTuple_GET_ITEM(cpy_r_r65, 1);
    else {
        __tmp10510 = NULL;
    }
    if (__tmp10510 != NULL) goto __LL10512;
    __tmp10510 = NULL;
__LL10512: ;
    if (__tmp10510 == NULL) goto __LL10511;
    __tmp10510 = cpy_r_r65;
__LL10511: ;
    if (unlikely(__tmp10510 == NULL)) {
        CPy_TypeError("tuple[str, union[str, None]]", cpy_r_r65); cpy_r_r66 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10513 = PyTuple_GET_ITEM(cpy_r_r65, 0);
        CPy_INCREF(__tmp10513);
        PyObject *__tmp10514;
        if (likely(PyUnicode_Check(__tmp10513)))
            __tmp10514 = __tmp10513;
        else {
            CPy_TypeError("str", __tmp10513); 
            __tmp10514 = NULL;
        }
        cpy_r_r66.f0 = __tmp10514;
        PyObject *__tmp10515 = PyTuple_GET_ITEM(cpy_r_r65, 1);
        CPy_INCREF(__tmp10515);
        PyObject *__tmp10516;
        if (PyUnicode_Check(__tmp10515))
            __tmp10516 = __tmp10515;
        else {
            __tmp10516 = NULL;
        }
        if (__tmp10516 != NULL) goto __LL10517;
        if (__tmp10515 == Py_None)
            __tmp10516 = __tmp10515;
        else {
            __tmp10516 = NULL;
        }
        if (__tmp10516 != NULL) goto __LL10517;
        CPy_TypeError("str or None", __tmp10515); 
        __tmp10516 = NULL;
__LL10517: ;
        cpy_r_r66.f1 = __tmp10516;
    }
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 328, CPyStatic_statement___globals);
        goto CPyL80;
    }
    cpy_r_r67 = cpy_r_r66.f0;
    CPy_INCREF(cpy_r_r67);
    cpy_r_name_2 = cpy_r_r67;
    cpy_r_r68 = cpy_r_r66.f1;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r66.f0);
    CPy_DECREF(cpy_r_r66.f1);
    cpy_r_as_name = cpy_r_r68;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_as_name != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL81;
    CPy_INCREF(cpy_r_as_name);
    if (likely(cpy_r_as_name != Py_None))
        cpy_r_r71 = cpy_r_as_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 328, CPyStatic_statement___globals, "str", cpy_r_as_name);
        goto CPyL82;
    }
    cpy_r_r72 = CPyStr_IsTrue(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (cpy_r_r72) {
        goto CPyL83;
    } else
        goto CPyL81;
CPyL37: ;
    if (likely(cpy_r_as_name != Py_None))
        cpy_r_r73 = cpy_r_as_name;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 328, CPyStatic_statement___globals, "str", cpy_r_as_name);
        goto CPyL80;
    }
    cpy_r_r74 = cpy_r_r73;
    goto CPyL40;
CPyL39: ;
    cpy_r_r74 = cpy_r_name_2;
CPyL40: ;
    cpy_r_r75 = CPyList_SetItemUnsafe(cpy_r_r59, cpy_r_r60, cpy_r_r74);
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 328, CPyStatic_statement___globals);
        goto CPyL80;
    }
    cpy_r_r76 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r76;
    goto CPyL32;
CPyL42: ;
    cpy_r_as_names = cpy_r_r59;
    cpy_r_r77 = PyList_AsTuple(cpy_r_names);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 329, CPyStatic_statement___globals);
        goto CPyL84;
    }
    cpy_r_r78 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r78 == NULL)) {
        goto CPyL85;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r79 = 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 329, CPyStatic_statement___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r80 = CPyDef_ops___LoadLiteral(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 329, CPyStatic_statement___globals);
        goto CPyL84;
    }
    cpy_r_r81 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 329, CPyStatic_statement___globals);
        goto CPyL84;
    }
    cpy_r_names_literal = cpy_r_r81;
    cpy_r_r82 = PyObject_RichCompare(cpy_r_as_names, cpy_r_names, 2);
    CPy_DECREF(cpy_r_names);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 330, CPyStatic_statement___globals);
        goto CPyL86;
    }
    if (unlikely(!PyBool_Check(cpy_r_r82))) {
        CPy_TypeError("bool", cpy_r_r82); cpy_r_r83 = 2;
    } else
        cpy_r_r83 = cpy_r_r82 == Py_True;
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 330, CPyStatic_statement___globals);
        goto CPyL86;
    }
    if (cpy_r_r83) {
        goto CPyL87;
    } else
        goto CPyL52;
CPyL51: ;
    CPy_INCREF(cpy_r_names_literal);
    cpy_r_as_names_literal = cpy_r_names_literal;
    goto CPyL59;
CPyL52: ;
    cpy_r_r84 = PyList_AsTuple(cpy_r_as_names);
    CPy_DECREF(cpy_r_as_names);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 334, CPyStatic_statement___globals);
        goto CPyL88;
    }
    cpy_r_r85 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r85 == NULL)) {
        goto CPyL89;
    } else
        goto CPyL56;
CPyL54: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 334, CPyStatic_statement___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r87 = CPyDef_ops___LoadLiteral(cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 334, CPyStatic_statement___globals);
        goto CPyL88;
    }
    cpy_r_r88 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 334, CPyStatic_statement___globals);
        goto CPyL88;
    }
    cpy_r_as_names_literal = cpy_r_r88;
CPyL59: ;
    cpy_r_r89 = CPyStatic_statement___globals;
    cpy_r_r90 = CPyStatics[8581]; /* 'import_from_many_op' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 339, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (likely(PyTuple_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_import_from", 339, CPyStatic_statement___globals, "tuple", cpy_r_r91);
        goto CPyL90;
    }
    cpy_r_r93 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_id);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 340, CPyStatic_statement___globals);
        goto CPyL91;
    }
    cpy_r_r94 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 340, CPyStatic_statement___globals);
        goto CPyL92;
    }
    cpy_r_r95 = PyList_New(4);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 340, CPyStatic_statement___globals);
        goto CPyL93;
    }
    cpy_r_r96 = (CPyPtr)&((PyListObject *)cpy_r_r95)->ob_item;
    cpy_r_r97 = *(CPyPtr *)cpy_r_r96;
    *(PyObject * *)cpy_r_r97 = cpy_r_r93;
    cpy_r_r98 = cpy_r_r97 + 8;
    *(PyObject * *)cpy_r_r98 = cpy_r_names_literal;
    cpy_r_r99 = cpy_r_r97 + 16;
    *(PyObject * *)cpy_r_r99 = cpy_r_as_names_literal;
    cpy_r_r100 = cpy_r_r97 + 24;
    *(PyObject * *)cpy_r_r100 = cpy_r_r94;
    cpy_r_r101 = ((mypy___nodes___ImportFromObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r101);
    cpy_r_r102 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r92, cpy_r_r95, cpy_r_r101);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r95);
    CPyTagged_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 338, CPyStatic_statement___globals);
        goto CPyL74;
    }
    cpy_r_module = cpy_r_r102;
    cpy_r_r103 = CPyStatics[408]; /* 'module' */
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPY_INT_TAG;
    cpy_r_r106 = CPyDef_ops___InitStatic(cpy_r_module, cpy_r_id, cpy_r_r104, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_module);
    CPy_DECREF(cpy_r_id);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 343, CPyStatic_statement___globals);
        goto CPyL68;
    }
    cpy_r_r107 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 343, CPyStatic_statement___globals);
        goto CPyL68;
    } else
        goto CPyL94;
CPyL67: ;
    return 1;
CPyL68: ;
    cpy_r_r108 = 2;
    return cpy_r_r108;
CPyL69: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL68;
CPyL70: ;
    CPy_DECREF(cpy_r_module_state);
    goto CPyL12;
CPyL71: ;
    CPy_DecRef(cpy_r_module_state);
    goto CPyL68;
CPyL72: ;
    CPy_DecRef(cpy_r_module_package);
    goto CPyL68;
CPyL73: ;
    CPy_DecRef(cpy_r_module_package);
    CPy_DecRef(cpy_r_r29);
    goto CPyL68;
CPyL74: ;
    CPy_DecRef(cpy_r_id);
    goto CPyL68;
CPyL75: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r41);
    goto CPyL68;
CPyL76: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL30;
CPyL77: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r44);
    goto CPyL68;
CPyL78: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r56);
    goto CPyL68;
CPyL79: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL42;
CPyL80: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    goto CPyL68;
CPyL81: ;
    CPy_DECREF(cpy_r_as_name);
    goto CPyL39;
CPyL82: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_as_name);
    goto CPyL68;
CPyL83: ;
    CPy_DECREF(cpy_r_name_2);
    goto CPyL37;
CPyL84: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_as_names);
    goto CPyL68;
CPyL85: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_as_names);
    CPy_DecRef(cpy_r_r77);
    goto CPyL44;
CPyL86: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_as_names);
    CPy_DecRef(cpy_r_names_literal);
    goto CPyL68;
CPyL87: ;
    CPy_DECREF(cpy_r_as_names);
    goto CPyL51;
CPyL88: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    goto CPyL68;
CPyL89: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    CPy_DecRef(cpy_r_r84);
    goto CPyL54;
CPyL90: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    CPy_DecRef(cpy_r_as_names_literal);
    goto CPyL68;
CPyL91: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    CPy_DecRef(cpy_r_as_names_literal);
    CPy_DecRef(cpy_r_r92);
    goto CPyL68;
CPyL92: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    CPy_DecRef(cpy_r_as_names_literal);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93);
    goto CPyL68;
CPyL93: ;
    CPy_DecRef(cpy_r_id);
    CPy_DecRef(cpy_r_names_literal);
    CPy_DecRef(cpy_r_as_names_literal);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    goto CPyL68;
CPyL94: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL67;
}

PyObject *CPyPy_statement___transform_import_from(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "node", 0};
    static CPyArg_Parser parser = {"OO:transform_import_from", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_node)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportFrom))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportFrom", obj_node); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_import_from(arg_builder, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_from", 312, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_import_all(PyObject *cpy_r_builder, PyObject *cpy_r_node) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___nodes___ImportAllObject *)cpy_r_node)->_is_mypy_only;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r1 = ((mypy___nodes___ImportAllObject *)cpy_r_node)->_id;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___nodes___ImportAllObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_builder___IRBuilder___gen_import(cpy_r_builder, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_all", 349, CPyStatic_statement___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_statement___transform_import_all(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "node", 0};
    static CPyArg_Parser parser = {"OO:transform_import_all", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_node)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ImportAll))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ImportAll", obj_node); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_import_all(arg_builder, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_import_all", 346, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_if_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_stmt) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_if_body;
    PyObject *cpy_r_next;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_else_body;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 353, CPyStatic_statement___globals);
        goto CPyL24;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 353, CPyStatic_statement___globals);
        goto CPyL25;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_if_body = cpy_r_r2;
    cpy_r_next = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_else_body;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 354, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r11 = cpy_r_r10;
    goto CPyL6;
CPyL5: ;
    CPy_INCREF(cpy_r_next);
    cpy_r_r11 = cpy_r_next;
CPyL6: ;
    cpy_r_else_body = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_expr;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 == 2;
    if (cpy_r_r16) {
        goto CPyL9;
    } else
        goto CPyL27;
CPyL7: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 357, CPyStatic_statement___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r18 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_expr;
    cpy_r_r19 = CPyList_GetItemShort(cpy_r_r18, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 359, CPyStatic_statement___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 359, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL28;
    }
    cpy_r_r21 = CPyDef_ast_helpers___process_conditional(cpy_r_builder, cpy_r_r20, cpy_r_if_body, cpy_r_else_body);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 359, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r22 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_if_body);
    CPy_DECREF(cpy_r_if_body);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 360, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r23 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_body;
    cpy_r_r24 = CPyList_GetItemShort(cpy_r_r23, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 361, CPyStatic_statement___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___Block))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 361, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r24);
        goto CPyL29;
    }
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 361, CPyStatic_statement___globals);
        goto CPyL29;
    } else
        goto CPyL30;
CPyL16: ;
    cpy_r_r28 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 362, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r29 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_else_body;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    if (!cpy_r_r31) goto CPyL31;
    cpy_r_r32 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_body);
    CPy_DECREF(cpy_r_else_body);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 364, CPyStatic_statement___globals);
        goto CPyL32;
    }
    cpy_r_r33 = ((mypy___nodes___IfStmtObject *)cpy_r_stmt)->_else_body;
    CPy_INCREF(cpy_r_r33);
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 365, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r33);
        goto CPyL32;
    }
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 365, CPyStatic_statement___globals);
        goto CPyL32;
    } else
        goto CPyL33;
CPyL21: ;
    cpy_r_r37 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 366, CPyStatic_statement___globals);
        goto CPyL32;
    }
CPyL22: ;
    cpy_r_r38 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_next);
    CPy_DECREF(cpy_r_next);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 367, CPyStatic_statement___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL25: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_if_body);
    CPy_DecRef(cpy_r_next);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_if_body);
    CPy_DECREF(cpy_r_next);
    CPy_DECREF(cpy_r_else_body);
    goto CPyL7;
CPyL28: ;
    CPy_DecRef(cpy_r_if_body);
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_else_body);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_else_body);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL16;
CPyL31: ;
    CPy_DECREF(cpy_r_else_body);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_next);
    goto CPyL24;
CPyL33: ;
    CPy_DECREF(cpy_r_r36);
    goto CPyL21;
}

PyObject *CPyPy_statement___transform_if_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "stmt", 0};
    static CPyArg_Parser parser = {"OO:transform_if_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___IfStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_stmt); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_if_stmt(arg_builder, arg_stmt);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_if_stmt", 352, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_while_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_s) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_body;
    PyObject *cpy_r_next;
    PyObject *cpy_r_top;
    PyObject *cpy_r_else_block;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_normal_loop_exit;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 371, CPyStatic_statement___globals);
        goto CPyL21;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 371, CPyStatic_statement___globals);
        goto CPyL22;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 371, CPyStatic_statement___globals);
        goto CPyL23;
    }
    cpy_r_r8 = cpy_r_r7;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 371, CPyStatic_statement___globals);
        goto CPyL24;
    }
    cpy_r_r11 = cpy_r_r10;
    cpy_r_body = cpy_r_r2;
    cpy_r_next = cpy_r_r5;
    cpy_r_top = cpy_r_r8;
    cpy_r_else_block = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___WhileStmtObject *)cpy_r_s)->_else_body;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL6;
    CPy_INCREF(cpy_r_else_block);
    cpy_r_r15 = cpy_r_else_block;
    goto CPyL7;
CPyL6: ;
    CPy_INCREF(cpy_r_next);
    cpy_r_r15 = cpy_r_next;
CPyL7: ;
    cpy_r_normal_loop_exit = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___push_loop_stack(cpy_r_builder, cpy_r_top, cpy_r_next);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 374, CPyStatic_statement___globals);
        goto CPyL25;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_top);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 377, CPyStatic_statement___globals);
        goto CPyL25;
    }
    cpy_r_r18 = ((mypy___nodes___WhileStmtObject *)cpy_r_s)->_expr;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyDef_ast_helpers___process_conditional(cpy_r_builder, cpy_r_r18, cpy_r_body, cpy_r_normal_loop_exit);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_normal_loop_exit);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 378, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_body);
    CPy_DECREF(cpy_r_body);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 380, CPyStatic_statement___globals);
        goto CPyL27;
    }
    cpy_r_r21 = ((mypy___nodes___WhileStmtObject *)cpy_r_s)->_body;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 381, CPyStatic_statement___globals);
        goto CPyL27;
    } else
        goto CPyL28;
CPyL12: ;
    cpy_r_r24 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_top);
    CPy_DECREF(cpy_r_top);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 383, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___pop_loop_stack(cpy_r_builder);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 385, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r26 = ((mypy___nodes___WhileStmtObject *)cpy_r_s)->_else_body;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL30;
    cpy_r_r29 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_block);
    CPy_DECREF(cpy_r_else_block);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 388, CPyStatic_statement___globals);
        goto CPyL31;
    }
    cpy_r_r30 = ((mypy___nodes___WhileStmtObject *)cpy_r_s)->_else_body;
    CPy_INCREF(cpy_r_r30);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 389, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r30);
        goto CPyL31;
    }
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 389, CPyStatic_statement___globals);
        goto CPyL31;
    } else
        goto CPyL32;
CPyL18: ;
    cpy_r_r34 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_next);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 390, CPyStatic_statement___globals);
        goto CPyL31;
    }
CPyL19: ;
    cpy_r_r35 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_next);
    CPy_DECREF(cpy_r_next);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 392, CPyStatic_statement___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL22: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_normal_loop_exit);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_top);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL21;
CPyL28: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL12;
CPyL29: ;
    CPy_DecRef(cpy_r_next);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL21;
CPyL30: ;
    CPy_DECREF(cpy_r_else_block);
    goto CPyL19;
CPyL31: ;
    CPy_DecRef(cpy_r_next);
    goto CPyL21;
CPyL32: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL18;
}

PyObject *CPyPy_statement___transform_while_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "s", 0};
    static CPyArg_Parser parser = {"OO:transform_while_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_s)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___WhileStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.WhileStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_while_stmt(arg_builder, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_while_stmt", 370, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___body_transform_for_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___body_transform_for_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___body_transform_for_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___body_transform_for_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___statement___body_transform_for_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "body_transform_for_stmt_obj", "__mypyc_env__", 396, CPyStatic_statement___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "transform_for_stmt_env", "body", -1, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_body = cpy_r_r1;
    CPy_DECREF(cpy_r_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "transform_for_stmt_env", "builder", 397, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 's' of 'transform_for_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 397, CPyStatic_statement___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___ForStmtObject *)cpy_r_r3)->_body;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 397, CPyStatic_statement___globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL5;
}

PyObject *CPyPy_statement___body_transform_for_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___body_transform_for_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 396, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___else_block_transform_for_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___else_block_transform_for_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___else_block_transform_for_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___else_block_transform_for_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_else_block;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_block", "else_block_transform_for_stmt_obj", "__mypyc_env__", 399, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_else_block;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_block", "transform_for_stmt_env", "else_block", -1, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_else_block = cpy_r_r1;
    CPy_DECREF(cpy_r_else_block);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_block", "transform_for_stmt_env", "s", 400, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___ForStmtObject *)cpy_r_r2)->_else_body;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r5) {
        goto CPyL6;
    } else
        goto CPyL13;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_block", 400, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r7 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_block", "transform_for_stmt_env", "builder", 401, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r7);
CPyL7: ;
    cpy_r_r8 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 's' of 'transform_for_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r8);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_block", 401, CPyStatic_statement___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r9 = ((mypy___nodes___ForStmtObject *)cpy_r_r8)->_else_body;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "else_block", 401, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_r11 = 2;
    cpy_r_r12 = CPyDef_builder___IRBuilder___accept(cpy_r_r7, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_block", 401, CPyStatic_statement___globals);
        goto CPyL11;
    } else
        goto CPyL15;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL14: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL10;
}

PyObject *CPyPy_statement___else_block_transform_for_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___else_block_transform_for_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "else_block", 399, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_for_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyDef_statement___transform_for_stmt_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 395, CPyStatic_statement___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 395, CPyStatic_statement___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_s);
    if (((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s);
    }
    ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s = cpy_r_s;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 395, CPyStatic_statement___globals);
        goto CPyL23;
    }
    cpy_r_r3 = CPyDef_statement___body_transform_for_stmt_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 396, CPyStatic_statement___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___body_transform_for_stmt_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___body_transform_for_stmt_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___body_transform_for_stmt_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 396, CPyStatic_statement___globals);
        goto CPyL24;
    }
    if (((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_body);
    }
    ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_body = cpy_r_r3;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 396, CPyStatic_statement___globals);
        goto CPyL23;
    }
    cpy_r_r6 = CPyDef_statement___else_block_transform_for_stmt_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 399, CPyStatic_statement___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___else_block_transform_for_stmt_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 399, CPyStatic_statement___globals);
        goto CPyL25;
    }
    if (((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_else_block != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_else_block);
    }
    ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_else_block = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 399, CPyStatic_statement___globals);
        goto CPyL23;
    }
    cpy_r_r9 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "builder", 404, CPyStatic_statement___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r9);
CPyL10: ;
    cpy_r_r10 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "s", 404, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = ((mypy___nodes___ForStmtObject *)cpy_r_r10)->_index;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "s", 404, CPyStatic_statement___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r12);
CPyL12: ;
    cpy_r_r13 = ((mypy___nodes___ForStmtObject *)cpy_r_r12)->_expr;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "body", 404, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r14);
CPyL13: ;
    cpy_r_r15 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "s", 404, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r15);
CPyL14: ;
    cpy_r_r16 = ((mypy___nodes___ForStmtObject *)cpy_r_r15)->_else_body;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    CPy_DECREF(cpy_r_r16);
    if (!cpy_r_r18) goto CPyL17;
    cpy_r_r19 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_else_block;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "else_block", 404, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL18;
CPyL17: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r20 = cpy_r_r21;
CPyL18: ;
    cpy_r_r22 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_for_stmt", "transform_for_stmt_env", "s", 404, CPyStatic_statement___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r22);
CPyL19: ;
    cpy_r_r23 = ((mypy___nodes___ForStmtObject *)cpy_r_r22)->_is_async;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = ((mypyc___irbuild___statement___transform_for_stmt_envObject *)cpy_r_r0)->_s;
    if (unlikely(cpy_r_r24 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 's' of 'transform_for_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r24);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 404, CPyStatic_statement___globals);
        goto CPyL31;
    }
CPyL20: ;
    cpy_r_r25 = ((mypy___nodes___ForStmtObject *)cpy_r_r24)->_line;
    CPyTagged_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = CPyDef_for_helpers___for_loop_helper(cpy_r_r9, cpy_r_r11, cpy_r_r13, cpy_r_r14, cpy_r_r20, cpy_r_r23, cpy_r_r25);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 403, CPyStatic_statement___globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL22;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r20);
    goto CPyL22;
}

PyObject *CPyPy_statement___transform_for_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "s", 0};
    static CPyArg_Parser parser = {"OO:transform_for_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_s)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___ForStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.ForStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_for_stmt(arg_builder, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_for_stmt", 395, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_break_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_break_stmt", 409, CPyStatic_statement___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_break_stmt", 409, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___nodes___BreakStmtObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_r2, CPyType_nonlocalcontrol___NonlocalControl, 0, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r2, cpy_r_builder, cpy_r_r3); /* gen_break */
    CPyTagged_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_break_stmt", 409, CPyStatic_statement___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_statement___transform_break_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "node", 0};
    static CPyArg_Parser parser = {"OO:transform_break_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_node)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___BreakStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.BreakStmt", obj_node); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_break_stmt(arg_builder, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_break_stmt", 408, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_continue_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_continue_stmt", 413, CPyStatic_statement___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_continue_stmt", 413, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r1);
        goto CPyL4;
    }
    cpy_r_r3 = ((mypy___nodes___ContinueStmtObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPY_GET_METHOD(cpy_r_r2, CPyType_nonlocalcontrol___NonlocalControl, 1, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r2, cpy_r_builder, cpy_r_r3); /* gen_continue */
    CPyTagged_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_continue_stmt", 413, CPyStatic_statement___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_statement___transform_continue_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "node", 0};
    static CPyArg_Parser parser = {"OO:transform_continue_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_node)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___ContinueStmt))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.ContinueStmt", obj_node); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_continue_stmt(arg_builder, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_continue_stmt", 412, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_raise_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_s) {
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
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_exc;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    cpy_r_r0 = ((mypy___nodes___RaiseStmtObject *)cpy_r_s)->_expr;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL10;
    cpy_r_r3 = CPyStatic_statement___globals;
    cpy_r_r4 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals, "tuple", cpy_r_r5);
        goto CPyL20;
    }
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals);
        goto CPyL21;
    }
    cpy_r_r8 = CPyStatic_statement___globals;
    cpy_r_r9 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals);
        goto CPyL22;
    }
    if (likely(PyLong_Check(cpy_r_r10)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r10);
    else {
        CPy_TypeError("int", cpy_r_r10); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals);
        goto CPyL22;
    }
    cpy_r_r12 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r6, cpy_r_r7, cpy_r_r11);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 418, CPyStatic_statement___globals);
        goto CPyL20;
    } else
        goto CPyL23;
CPyL7: ;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPyDef_ops___Unreachable(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 419, CPyStatic_statement___globals);
        goto CPyL20;
    }
    cpy_r_r15 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 419, CPyStatic_statement___globals);
        goto CPyL20;
    } else
        goto CPyL24;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r16 = ((mypy___nodes___RaiseStmtObject *)cpy_r_s)->_expr;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 422, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL20;
    }
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 422, CPyStatic_statement___globals);
        goto CPyL20;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 422, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r19);
        goto CPyL20;
    }
    cpy_r_exc = cpy_r_r20;
    cpy_r_r21 = CPyStatic_statement___globals;
    cpy_r_r22 = CPyStatics[8582]; /* 'raise_exception_op' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 423, CPyStatic_statement___globals);
        goto CPyL25;
    }
    if (likely(PyTuple_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 423, CPyStatic_statement___globals, "tuple", cpy_r_r23);
        goto CPyL25;
    }
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 423, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r26 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r27 = *(CPyPtr *)cpy_r_r26;
    *(PyObject * *)cpy_r_r27 = cpy_r_exc;
    cpy_r_r28 = ((mypy___nodes___RaiseStmtObject *)cpy_r_s)->_line;
    CPyTagged_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r24, cpy_r_r25, cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 423, CPyStatic_statement___globals);
        goto CPyL20;
    } else
        goto CPyL27;
CPyL17: ;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___Unreachable(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 424, CPyStatic_statement___globals);
        goto CPyL20;
    }
    cpy_r_r32 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 424, CPyStatic_statement___globals);
        goto CPyL20;
    } else
        goto CPyL28;
CPyL19: ;
    return 1;
CPyL20: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL21: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
CPyL24: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL9;
CPyL25: ;
    CPy_DecRef(cpy_r_exc);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_exc);
    CPy_DecRef(cpy_r_r24);
    goto CPyL20;
CPyL27: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL17;
CPyL28: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL19;
}

PyObject *CPyPy_statement___transform_raise_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "s", 0};
    static CPyArg_Parser parser = {"OO:transform_raise_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_s)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_nodes___RaiseStmt))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.nodes.RaiseStmt", obj_s); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_raise_stmt(arg_builder, arg_s);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_raise_stmt", 416, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_try_except(PyObject *cpy_r_builder, PyObject *cpy_r_body, PyObject *cpy_r_handlers, PyObject *cpy_r_else_body, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_next_block;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_except_entry;
    PyObject *cpy_r_exit_block;
    PyObject *cpy_r_cleanup_block;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_double_except_block;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_else_block;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_old_exc;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_handler_body;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    tuple_T2OI cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    tuple_T2OI cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_type_f;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_type_line;
    CPyTagged cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_body_block;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_matches;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyTagged cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    CPyTagged cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyTagged cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    CPyPtr cpy_r_r144;
    CPyPtr cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyTagged cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    CPyPtr cpy_r_r157;
    CPyPtr cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    int32_t cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    cpy_r_r0 = NULL;
    cpy_r_next_block = cpy_r_r0;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_handlers);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 430, CPyStatic_statement___globals);
        goto CPyL116;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) {
        goto CPyL4;
    } else
        goto CPyL117;
CPyL2: ;
    PyErr_SetString(PyExc_AssertionError, "try needs except");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 437, CPyStatic_statement___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___BasicBlock(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 439, CPyStatic_statement___globals);
        goto CPyL116;
    }
    cpy_r_r7 = cpy_r_r6;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___BasicBlock(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 439, CPyStatic_statement___globals);
        goto CPyL118;
    }
    cpy_r_r10 = cpy_r_r9;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___BasicBlock(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 439, CPyStatic_statement___globals);
        goto CPyL119;
    }
    cpy_r_r13 = cpy_r_r12;
    cpy_r_except_entry = cpy_r_r7;
    cpy_r_exit_block = cpy_r_r10;
    cpy_r_cleanup_block = cpy_r_r13;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___BasicBlock(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 440, CPyStatic_statement___globals);
        goto CPyL120;
    }
    cpy_r_double_except_block = cpy_r_r15;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_else_body != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL14;
    CPy_INCREF(cpy_r_else_body);
    cpy_r_r18 = cpy_r_else_body;
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 431, CPyStatic_statement___globals);
        goto CPyL121;
    }
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___BasicBlock(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 442, CPyStatic_statement___globals);
        goto CPyL121;
    }
    cpy_r_r24 = cpy_r_r23;
    goto CPyL15;
CPyL14: ;
    CPy_INCREF(cpy_r_exit_block);
    cpy_r_r24 = cpy_r_exit_block;
CPyL15: ;
    cpy_r_else_block = cpy_r_r24;
    cpy_r_r25 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r25, cpy_r_except_entry);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 445, CPyStatic_statement___globals);
        goto CPyL122;
    }
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPyDef_ops___BasicBlock(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 446, CPyStatic_statement___globals);
        goto CPyL122;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 446, CPyStatic_statement___globals);
        goto CPyL122;
    }
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_body, 0, 0, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 447, CPyStatic_statement___globals);
        goto CPyL122;
    } else
        goto CPyL123;
CPyL19: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_else_block);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 448, CPyStatic_statement___globals);
        goto CPyL122;
    }
    cpy_r_r32 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 449, CPyStatic_statement___globals);
        goto CPyL122;
    } else
        goto CPyL124;
CPyL21: ;
    cpy_r_r34 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r34, cpy_r_double_except_block);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 457, CPyStatic_statement___globals);
        goto CPyL122;
    }
    cpy_r_r36 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_except_entry);
    CPy_DECREF(cpy_r_except_entry);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 458, CPyStatic_statement___globals);
        goto CPyL125;
    }
    cpy_r_r37 = CPyStatic_statement___globals;
    cpy_r_r38 = CPyStatics[8376]; /* 'error_catch_op' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 459, CPyStatic_statement___globals);
        goto CPyL125;
    }
    if (likely(PyTuple_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 459, CPyStatic_statement___globals, "tuple", cpy_r_r39);
        goto CPyL125;
    }
    cpy_r_r41 = PyList_New(0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 459, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_r42 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r40, cpy_r_r41, cpy_r_line);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 459, CPyStatic_statement___globals);
        goto CPyL125;
    }
    cpy_r_r43 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_builder, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 459, CPyStatic_statement___globals);
        goto CPyL125;
    }
    cpy_r_old_exc = cpy_r_r43;
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r46 = CPyList_GetItemShort(cpy_r_r45, -2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 461, CPyStatic_statement___globals);
        goto CPyL127;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 461, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r46);
        goto CPyL127;
    }
    cpy_r_r48 = CPyDef_nonlocalcontrol___ExceptNonlocalControl(cpy_r_r47, cpy_r_old_exc);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 461, CPyStatic_statement___globals);
        goto CPyL127;
    }
    cpy_r_r49 = PyList_Append(cpy_r_r44, cpy_r_r48);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 461, CPyStatic_statement___globals);
        goto CPyL128;
    }
    cpy_r_r51 = PyObject_GetIter(cpy_r_handlers);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 464, CPyStatic_statement___globals);
        goto CPyL128;
    }
CPyL33: ;
    cpy_r_r52 = PyIter_Next(cpy_r_r51);
    if (cpy_r_r52 == NULL) {
        goto CPyL129;
    } else
        goto CPyL130;
CPyL34: ;
    PyObject *__tmp10518;
    if (unlikely(!(PyTuple_Check(cpy_r_r52) && PyTuple_GET_SIZE(cpy_r_r52) == 3))) {
        __tmp10518 = NULL;
        goto __LL10519;
    }
    if (unlikely(!(PyTuple_Check(PyTuple_GET_ITEM(cpy_r_r52, 0)) && PyTuple_GET_SIZE(PyTuple_GET_ITEM(cpy_r_r52, 0)) == 2))) {
        __tmp10518 = NULL;
        goto __LL10521;
    }
    __tmp10518 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r52, 0), 0);
    if (__tmp10518 == NULL) goto __LL10521;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r52, 0), 1))))
        __tmp10518 = PyTuple_GET_ITEM(PyTuple_GET_ITEM(cpy_r_r52, 0), 1);
    else {
        __tmp10518 = NULL;
    }
    if (__tmp10518 == NULL) goto __LL10521;
    __tmp10518 = PyTuple_GET_ITEM(cpy_r_r52, 0);
__LL10521: ;
    if (__tmp10518 != NULL) goto __LL10520;
    if (PyTuple_GET_ITEM(cpy_r_r52, 0) == Py_None)
        __tmp10518 = PyTuple_GET_ITEM(cpy_r_r52, 0);
    else {
        __tmp10518 = NULL;
    }
    if (__tmp10518 != NULL) goto __LL10520;
    __tmp10518 = NULL;
__LL10520: ;
    if (__tmp10518 == NULL) goto __LL10519;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r52, 1), CPyType_nodes___Expression))
        __tmp10518 = PyTuple_GET_ITEM(cpy_r_r52, 1);
    else {
        __tmp10518 = NULL;
    }
    if (__tmp10518 != NULL) goto __LL10522;
    if (PyTuple_GET_ITEM(cpy_r_r52, 1) == Py_None)
        __tmp10518 = PyTuple_GET_ITEM(cpy_r_r52, 1);
    else {
        __tmp10518 = NULL;
    }
    if (__tmp10518 != NULL) goto __LL10522;
    __tmp10518 = NULL;
__LL10522: ;
    if (__tmp10518 == NULL) goto __LL10519;
    __tmp10518 = PyTuple_GET_ITEM(cpy_r_r52, 2);
    if (__tmp10518 == NULL) goto __LL10519;
    __tmp10518 = cpy_r_r52;
__LL10519: ;
    if (unlikely(__tmp10518 == NULL)) {
        CPy_TypeError("tuple[union[tuple[object, int], None], union[mypy.nodes.Expression, None], object]", cpy_r_r52); cpy_r_r53 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp10523 = PyTuple_GET_ITEM(cpy_r_r52, 0);
        CPy_INCREF(__tmp10523);
        PyObject *__tmp10524;
        if (unlikely(!(PyTuple_Check(__tmp10523) && PyTuple_GET_SIZE(__tmp10523) == 2))) {
            __tmp10524 = NULL;
            goto __LL10526;
        }
        __tmp10524 = PyTuple_GET_ITEM(__tmp10523, 0);
        if (__tmp10524 == NULL) goto __LL10526;
        if (likely(PyLong_Check(PyTuple_GET_ITEM(__tmp10523, 1))))
            __tmp10524 = PyTuple_GET_ITEM(__tmp10523, 1);
        else {
            __tmp10524 = NULL;
        }
        if (__tmp10524 == NULL) goto __LL10526;
        __tmp10524 = __tmp10523;
__LL10526: ;
        if (__tmp10524 != NULL) goto __LL10525;
        if (__tmp10523 == Py_None)
            __tmp10524 = __tmp10523;
        else {
            __tmp10524 = NULL;
        }
        if (__tmp10524 != NULL) goto __LL10525;
        CPy_TypeError("tuple[object, int] or None", __tmp10523); 
        __tmp10524 = NULL;
__LL10525: ;
        cpy_r_r53.f0 = __tmp10524;
        PyObject *__tmp10527 = PyTuple_GET_ITEM(cpy_r_r52, 1);
        CPy_INCREF(__tmp10527);
        PyObject *__tmp10528;
        if (PyObject_TypeCheck(__tmp10527, CPyType_nodes___Expression))
            __tmp10528 = __tmp10527;
        else {
            __tmp10528 = NULL;
        }
        if (__tmp10528 != NULL) goto __LL10529;
        if (__tmp10527 == Py_None)
            __tmp10528 = __tmp10527;
        else {
            __tmp10528 = NULL;
        }
        if (__tmp10528 != NULL) goto __LL10529;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp10527); 
        __tmp10528 = NULL;
__LL10529: ;
        cpy_r_r53.f1 = __tmp10528;
        PyObject *__tmp10530 = PyTuple_GET_ITEM(cpy_r_r52, 2);
        CPy_INCREF(__tmp10530);
        PyObject *__tmp10531;
        __tmp10531 = __tmp10530;
        cpy_r_r53.f2 = __tmp10531;
    }
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 464, CPyStatic_statement___globals);
        goto CPyL131;
    }
    cpy_r_r54 = cpy_r_r53.f0;
    CPy_INCREF(cpy_r_r54);
    cpy_r_type = cpy_r_r54;
    cpy_r_r55 = cpy_r_r53.f1;
    CPy_INCREF(cpy_r_r55);
    cpy_r_var = cpy_r_r55;
    cpy_r_r56 = cpy_r_r53.f2;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r53.f0);
    CPy_DECREF(cpy_r_r53.f1);
    CPy_DECREF(cpy_r_r53.f2);
    cpy_r_handler_body = cpy_r_r56;
    cpy_r_r57 = Py_None;
    CPy_INCREF(cpy_r_r57);
    cpy_r_next_block = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_type != cpy_r_r58;
    if (!cpy_r_r59) goto CPyL132;
    PyObject *__tmp10532;
    if (unlikely(!(PyTuple_Check(cpy_r_type) && PyTuple_GET_SIZE(cpy_r_type) == 2))) {
        __tmp10532 = NULL;
        goto __LL10533;
    }
    __tmp10532 = PyTuple_GET_ITEM(cpy_r_type, 0);
    if (__tmp10532 == NULL) goto __LL10533;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_type, 1))))
        __tmp10532 = PyTuple_GET_ITEM(cpy_r_type, 1);
    else {
        __tmp10532 = NULL;
    }
    if (__tmp10532 == NULL) goto __LL10533;
    __tmp10532 = cpy_r_type;
__LL10533: ;
    if (unlikely(__tmp10532 == NULL)) {
        CPy_TypeError("tuple[object, int]", cpy_r_type); cpy_r_r60 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp10534 = PyTuple_GET_ITEM(cpy_r_type, 0);
        CPy_INCREF(__tmp10534);
        PyObject *__tmp10535;
        __tmp10535 = __tmp10534;
        cpy_r_r60.f0 = __tmp10535;
        PyObject *__tmp10536 = PyTuple_GET_ITEM(cpy_r_type, 1);
        CPyTagged __tmp10537;
        if (likely(PyLong_Check(__tmp10536)))
            __tmp10537 = CPyTagged_FromObject(__tmp10536);
        else {
            CPy_TypeError("int", __tmp10536); __tmp10537 = CPY_INT_TAG;
        }
        cpy_r_r60.f1 = __tmp10537;
    }
    if (unlikely(cpy_r_r60.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 464, CPyStatic_statement___globals);
        goto CPyL133;
    }
    cpy_r_r61 = PyTuple_New(2);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10538 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp10538);
    PyObject *__tmp10539 = CPyTagged_StealAsObject(cpy_r_r60.f1);
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp10539);
    cpy_r_r62 = PyObject_IsTrue(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 464, CPyStatic_statement___globals);
        goto CPyL133;
    }
    cpy_r_r64 = cpy_r_r62;
    if (cpy_r_r64) {
        goto CPyL134;
    } else
        goto CPyL132;
CPyL39: ;
    PyObject *__tmp10540;
    if (unlikely(!(PyTuple_Check(cpy_r_type) && PyTuple_GET_SIZE(cpy_r_type) == 2))) {
        __tmp10540 = NULL;
        goto __LL10541;
    }
    __tmp10540 = PyTuple_GET_ITEM(cpy_r_type, 0);
    if (__tmp10540 == NULL) goto __LL10541;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_type, 1))))
        __tmp10540 = PyTuple_GET_ITEM(cpy_r_type, 1);
    else {
        __tmp10540 = NULL;
    }
    if (__tmp10540 == NULL) goto __LL10541;
    __tmp10540 = cpy_r_type;
__LL10541: ;
    if (unlikely(__tmp10540 == NULL)) {
        CPy_TypeError("tuple[object, int]", cpy_r_type); cpy_r_r65 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp10542 = PyTuple_GET_ITEM(cpy_r_type, 0);
        CPy_INCREF(__tmp10542);
        PyObject *__tmp10543;
        __tmp10543 = __tmp10542;
        cpy_r_r65.f0 = __tmp10543;
        PyObject *__tmp10544 = PyTuple_GET_ITEM(cpy_r_type, 1);
        CPyTagged __tmp10545;
        if (likely(PyLong_Check(__tmp10544)))
            __tmp10545 = CPyTagged_FromObject(__tmp10544);
        else {
            CPy_TypeError("int", __tmp10544); __tmp10545 = CPY_INT_TAG;
        }
        cpy_r_r65.f1 = __tmp10545;
    }
    CPy_DECREF(cpy_r_type);
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 467, CPyStatic_statement___globals);
        goto CPyL135;
    }
    cpy_r_r66 = cpy_r_r65.f0;
    CPy_INCREF(cpy_r_r66);
    cpy_r_type_f = cpy_r_r66;
    cpy_r_r67 = cpy_r_r65.f1;
    CPyTagged_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r65.f0);
    CPyTagged_DECREF(cpy_r_r65.f1);
    cpy_r_type_line = cpy_r_r67;
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPyDef_ops___BasicBlock(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 468, CPyStatic_statement___globals);
        goto CPyL136;
    }
    cpy_r_r70 = cpy_r_r69;
    cpy_r_r71 = CPY_INT_TAG;
    cpy_r_r72 = CPyDef_ops___BasicBlock(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 468, CPyStatic_statement___globals);
        goto CPyL137;
    }
    cpy_r_r73 = cpy_r_r72;
    cpy_r_next_block = cpy_r_r70;
    cpy_r_body_block = cpy_r_r73;
    cpy_r_r74 = CPyStatic_statement___globals;
    cpy_r_r75 = CPyStatics[8378]; /* 'exc_matches_op' */
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals);
        goto CPyL138;
    }
    if (likely(PyTuple_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals, "tuple", cpy_r_r76);
        goto CPyL138;
    }
    cpy_r_r78 = _PyObject_Vectorcall(cpy_r_type_f, 0, 0, 0);
    CPy_DECREF(cpy_r_type_f);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals);
        goto CPyL139;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r78, CPyType_ops___Value)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r78);
        goto CPyL139;
    }
    cpy_r_r80 = PyList_New(1);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals);
        goto CPyL140;
    }
    cpy_r_r81 = (CPyPtr)&((PyListObject *)cpy_r_r80)->ob_item;
    cpy_r_r82 = *(CPyPtr *)cpy_r_r81;
    *(PyObject * *)cpy_r_r82 = cpy_r_r79;
    cpy_r_r83 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r77, cpy_r_r80, cpy_r_type_line);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r80);
    CPyTagged_DECREF(cpy_r_type_line);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 469, CPyStatic_statement___globals);
        goto CPyL141;
    }
    cpy_r_matches = cpy_r_r83;
    CPy_INCREF(cpy_r_next_block);
    if (likely(cpy_r_next_block != Py_None))
        cpy_r_r84 = cpy_r_next_block;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 470, CPyStatic_statement___globals, "mypyc.ir.ops.BasicBlock", cpy_r_next_block);
        goto CPyL142;
    }
    cpy_r_r85 = CPY_INT_TAG;
    cpy_r_r86 = 2;
    cpy_r_r87 = CPyDef_ops___Branch(cpy_r_matches, cpy_r_body_block, cpy_r_r84, 200, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_matches);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 470, CPyStatic_statement___globals);
        goto CPyL141;
    }
    cpy_r_r88 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r87);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 470, CPyStatic_statement___globals);
        goto CPyL141;
    } else
        goto CPyL143;
CPyL51: ;
    cpy_r_r89 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_body_block);
    CPy_DECREF(cpy_r_body_block);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 471, CPyStatic_statement___globals);
        goto CPyL144;
    }
CPyL52: ;
    cpy_r_r90 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r91 = cpy_r_var != cpy_r_r90;
    if (!cpy_r_r91) goto CPyL145;
    CPy_INCREF(cpy_r_var);
    if (likely(cpy_r_var != Py_None))
        cpy_r_r92 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 473, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_var);
        goto CPyL144;
    }
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = 2;
    cpy_r_r95 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r92, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 473, CPyStatic_statement___globals);
        goto CPyL144;
    }
    cpy_r_target = cpy_r_r95;
    cpy_r_r96 = CPyStatic_statement___globals;
    cpy_r_r97 = CPyStatics[8583]; /* 'get_exc_value_op' */
    cpy_r_r98 = CPyDict_GetItem(cpy_r_r96, cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals);
        goto CPyL146;
    }
    if (likely(PyTuple_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals, "tuple", cpy_r_r98);
        goto CPyL146;
    }
    cpy_r_r100 = PyList_New(0);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals);
        goto CPyL147;
    }
    if (likely(cpy_r_var != Py_None))
        cpy_r_r101 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_var);
        goto CPyL148;
    }
    cpy_r_r102 = ((mypy___nodes___ContextObject *)cpy_r_r101)->_line;
    if (unlikely(cpy_r_r102 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except", "Expression", "line", 474, CPyStatic_statement___globals);
        goto CPyL148;
    }
    CPyTagged_INCREF(cpy_r_r102);
CPyL60: ;
    cpy_r_r103 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r99, cpy_r_r100, cpy_r_r102);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r100);
    CPyTagged_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals);
        goto CPyL146;
    }
    if (likely(cpy_r_var != Py_None))
        cpy_r_r104 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_var);
        goto CPyL149;
    }
    cpy_r_r105 = ((mypy___nodes___ContextObject *)cpy_r_r104)->_line;
    if (unlikely(cpy_r_r105 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except", "Expression", "line", 474, CPyStatic_statement___globals);
        goto CPyL149;
    }
    CPyTagged_INCREF(cpy_r_r105);
CPyL63: ;
    CPy_DECREF(cpy_r_var);
    cpy_r_r106 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_target, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r103);
    CPyTagged_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 474, CPyStatic_statement___globals);
        goto CPyL150;
    }
CPyL64: ;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_handler_body, 0, 0, 0);
    CPy_DECREF(cpy_r_handler_body);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 475, CPyStatic_statement___globals);
        goto CPyL151;
    } else
        goto CPyL152;
CPyL65: ;
    cpy_r_r108 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_cleanup_block);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 476, CPyStatic_statement___globals);
        goto CPyL151;
    }
    cpy_r_r109 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r110 = cpy_r_next_block != cpy_r_r109;
    if (!cpy_r_r110) goto CPyL33;
    CPy_INCREF(cpy_r_next_block);
    if (likely(cpy_r_next_block != Py_None))
        cpy_r_r111 = cpy_r_next_block;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 478, CPyStatic_statement___globals, "mypyc.ir.ops.BasicBlock", cpy_r_next_block);
        goto CPyL151;
    }
    cpy_r_r112 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 478, CPyStatic_statement___globals);
        goto CPyL151;
    } else
        goto CPyL33;
CPyL69: ;
    cpy_r_r113 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r113)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 464, CPyStatic_statement___globals);
        goto CPyL128;
    }
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_next_block == NULL) {
        goto CPyL153;
    } else
        goto CPyL73;
CPyL71: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"next_block\" referenced before assignment");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 465, CPyStatic_statement___globals);
        goto CPyL115;
    }
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r116 = cpy_r_next_block != cpy_r_r114;
    CPy_XDECREF(cpy_r_next_block);
    if (!cpy_r_r116) goto CPyL82;
    cpy_r_r117 = CPyStatic_statement___globals;
    cpy_r_r118 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals);
        goto CPyL154;
    }
    if (likely(PyTuple_Check(cpy_r_r119)))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals, "tuple", cpy_r_r119);
        goto CPyL154;
    }
    cpy_r_r121 = PyList_New(0);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals);
        goto CPyL155;
    }
    cpy_r_r122 = CPyStatic_statement___globals;
    cpy_r_r123 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals);
        goto CPyL156;
    }
    if (likely(PyLong_Check(cpy_r_r124)))
        cpy_r_r125 = CPyTagged_FromObject(cpy_r_r124);
    else {
        CPy_TypeError("int", cpy_r_r124); cpy_r_r125 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals);
        goto CPyL156;
    }
    cpy_r_r126 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r120, cpy_r_r121, cpy_r_r125);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    CPyTagged_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 482, CPyStatic_statement___globals);
        goto CPyL154;
    } else
        goto CPyL157;
CPyL80: ;
    cpy_r_r127 = CPY_INT_TAG;
    cpy_r_r128 = CPyDef_ops___Unreachable(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 483, CPyStatic_statement___globals);
        goto CPyL154;
    }
    cpy_r_r129 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 483, CPyStatic_statement___globals);
        goto CPyL154;
    } else
        goto CPyL158;
CPyL82: ;
    cpy_r_r130 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r130);
    cpy_r_r131 = CPyList_PopLast(cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 485, CPyStatic_statement___globals);
        goto CPyL154;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r131, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r131); 
        cpy_r_r132 = NULL;
    }
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 485, CPyStatic_statement___globals);
        goto CPyL154;
    } else
        goto CPyL159;
CPyL84: ;
    cpy_r_r133 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r133);
    cpy_r_r134 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 486, CPyStatic_statement___globals);
        goto CPyL154;
    } else
        goto CPyL160;
CPyL85: ;
    cpy_r_r135 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_cleanup_block);
    CPy_DECREF(cpy_r_cleanup_block);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 491, CPyStatic_statement___globals);
        goto CPyL161;
    }
    cpy_r_r136 = CPyStatic_statement___globals;
    cpy_r_r137 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r138 = CPyDict_GetItem(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 492, CPyStatic_statement___globals);
        goto CPyL161;
    }
    if (likely(PyTuple_Check(cpy_r_r138)))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 492, CPyStatic_statement___globals, "tuple", cpy_r_r138);
        goto CPyL161;
    }
    cpy_r_r140 = CPY_INT_TAG;
    cpy_r_r141 = 2;
    cpy_r_r142 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_old_exc, cpy_r_r140, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 492, CPyStatic_statement___globals);
        goto CPyL162;
    }
    cpy_r_r143 = PyList_New(1);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 492, CPyStatic_statement___globals);
        goto CPyL163;
    }
    cpy_r_r144 = (CPyPtr)&((PyListObject *)cpy_r_r143)->ob_item;
    cpy_r_r145 = *(CPyPtr *)cpy_r_r144;
    *(PyObject * *)cpy_r_r145 = cpy_r_r142;
    cpy_r_r146 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r139, cpy_r_r143, cpy_r_line);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 492, CPyStatic_statement___globals);
        goto CPyL161;
    } else
        goto CPyL164;
CPyL91: ;
    cpy_r_r147 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_exit_block);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 493, CPyStatic_statement___globals);
        goto CPyL161;
    }
    cpy_r_r148 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_double_except_block);
    CPy_DECREF(cpy_r_double_except_block);
    if (unlikely(cpy_r_r148 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 498, CPyStatic_statement___globals);
        goto CPyL165;
    }
    cpy_r_r149 = CPyStatic_statement___globals;
    cpy_r_r150 = CPyStatics[8379]; /* 'restore_exc_info_op' */
    cpy_r_r151 = CPyDict_GetItem(cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 499, CPyStatic_statement___globals);
        goto CPyL165;
    }
    if (likely(PyTuple_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 499, CPyStatic_statement___globals, "tuple", cpy_r_r151);
        goto CPyL165;
    }
    cpy_r_r153 = CPY_INT_TAG;
    cpy_r_r154 = 2;
    cpy_r_r155 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_old_exc, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_old_exc);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 499, CPyStatic_statement___globals);
        goto CPyL166;
    }
    cpy_r_r156 = PyList_New(1);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 499, CPyStatic_statement___globals);
        goto CPyL167;
    }
    cpy_r_r157 = (CPyPtr)&((PyListObject *)cpy_r_r156)->ob_item;
    cpy_r_r158 = *(CPyPtr *)cpy_r_r157;
    *(PyObject * *)cpy_r_r158 = cpy_r_r155;
    cpy_r_r159 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r152, cpy_r_r156, cpy_r_line);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 499, CPyStatic_statement___globals);
        goto CPyL168;
    } else
        goto CPyL169;
CPyL98: ;
    cpy_r_r160 = CPyStatic_statement___globals;
    cpy_r_r161 = CPyStatics[8408]; /* 'keep_propagating_op' */
    cpy_r_r162 = CPyDict_GetItem(cpy_r_r160, cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals);
        goto CPyL168;
    }
    if (likely(PyTuple_Check(cpy_r_r162)))
        cpy_r_r163 = cpy_r_r162;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals, "tuple", cpy_r_r162);
        goto CPyL168;
    }
    cpy_r_r164 = PyList_New(0);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals);
        goto CPyL170;
    }
    cpy_r_r165 = CPyStatic_statement___globals;
    cpy_r_r166 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals);
        goto CPyL171;
    }
    if (likely(PyLong_Check(cpy_r_r167)))
        cpy_r_r168 = CPyTagged_FromObject(cpy_r_r167);
    else {
        CPy_TypeError("int", cpy_r_r167); cpy_r_r168 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r168 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals);
        goto CPyL171;
    }
    cpy_r_r169 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r163, cpy_r_r164, cpy_r_r168);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r164);
    CPyTagged_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 500, CPyStatic_statement___globals);
        goto CPyL168;
    } else
        goto CPyL172;
CPyL104: ;
    cpy_r_r170 = CPY_INT_TAG;
    cpy_r_r171 = CPyDef_ops___Unreachable(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 501, CPyStatic_statement___globals);
        goto CPyL168;
    }
    cpy_r_r172 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r171);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 501, CPyStatic_statement___globals);
        goto CPyL168;
    } else
        goto CPyL173;
CPyL106: ;
    cpy_r_r173 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r174 = cpy_r_else_body != cpy_r_r173;
    if (!cpy_r_r174) goto CPyL174;
    CPy_INCREF(cpy_r_else_body);
    cpy_r_r175 = cpy_r_else_body;
    cpy_r_r176 = PyObject_IsTrue(cpy_r_r175);
    CPy_DECREF(cpy_r_r175);
    cpy_r_r177 = cpy_r_r176 >= 0;
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 431, CPyStatic_statement___globals);
        goto CPyL168;
    }
    cpy_r_r178 = cpy_r_r176;
    if (!cpy_r_r178) goto CPyL174;
    cpy_r_r179 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_else_block);
    CPy_DECREF(cpy_r_else_block);
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 505, CPyStatic_statement___globals);
        goto CPyL175;
    }
    cpy_r_r180 = _PyObject_Vectorcall(cpy_r_else_body, 0, 0, 0);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 506, CPyStatic_statement___globals);
        goto CPyL175;
    } else
        goto CPyL176;
CPyL112: ;
    cpy_r_r181 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_exit_block);
    if (unlikely(cpy_r_r181 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 507, CPyStatic_statement___globals);
        goto CPyL175;
    }
CPyL113: ;
    cpy_r_r182 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_exit_block);
    CPy_DECREF(cpy_r_exit_block);
    if (unlikely(cpy_r_r182 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 509, CPyStatic_statement___globals);
        goto CPyL115;
    }
    return 1;
CPyL115: ;
    cpy_r_r183 = 2;
    return cpy_r_r183;
CPyL116: ;
    CPy_XDecRef(cpy_r_next_block);
    goto CPyL115;
CPyL117: ;
    CPy_XDECREF(cpy_r_next_block);
    goto CPyL2;
CPyL118: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_r7);
    goto CPyL115;
CPyL119: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL115;
CPyL120: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_except_entry);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    goto CPyL115;
CPyL121: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_except_entry);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    goto CPyL115;
CPyL122: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_except_entry);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL115;
CPyL123: ;
    CPy_DECREF(cpy_r_r30);
    goto CPyL19;
CPyL124: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL21;
CPyL125: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL115;
CPyL126: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r40);
    goto CPyL115;
CPyL127: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r44);
    goto CPyL115;
CPyL128: ;
    CPy_XDecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL115;
CPyL129: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL69;
CPyL130: ;
    CPy_XDECREF(cpy_r_next_block);
    goto CPyL34;
CPyL131: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    goto CPyL115;
CPyL132: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL52;
CPyL133: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    goto CPyL115;
CPyL134: ;
    CPy_DECREF(cpy_r_next_block);
    goto CPyL39;
CPyL135: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    goto CPyL115;
CPyL136: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_type_f);
    CPyTagged_DecRef(cpy_r_type_line);
    goto CPyL115;
CPyL137: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_type_f);
    CPyTagged_DecRef(cpy_r_type_line);
    CPy_DecRef(cpy_r_r70);
    goto CPyL115;
CPyL138: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_type_f);
    CPyTagged_DecRef(cpy_r_type_line);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL115;
CPyL139: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPyTagged_DecRef(cpy_r_type_line);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_r77);
    goto CPyL115;
CPyL140: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPyTagged_DecRef(cpy_r_type_line);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_r77);
    CPy_DecRef(cpy_r_r79);
    goto CPyL115;
CPyL141: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_body_block);
    goto CPyL115;
CPyL142: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_body_block);
    CPy_DecRef(cpy_r_matches);
    goto CPyL115;
CPyL143: ;
    CPy_DECREF(cpy_r_r88);
    goto CPyL51;
CPyL144: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    goto CPyL115;
CPyL145: ;
    CPy_DECREF(cpy_r_var);
    goto CPyL64;
CPyL146: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_target);
    goto CPyL115;
CPyL147: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r99);
    goto CPyL115;
CPyL148: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r99);
    CPy_DecRef(cpy_r_r100);
    goto CPyL115;
CPyL149: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_handler_body);
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_r103);
    goto CPyL115;
CPyL150: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_handler_body);
    goto CPyL115;
CPyL151: ;
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r51);
    goto CPyL115;
CPyL152: ;
    CPy_DECREF(cpy_r_r107);
    goto CPyL65;
CPyL153: ;
    CPy_DECREF(cpy_r_exit_block);
    CPy_DECREF(cpy_r_cleanup_block);
    CPy_DECREF(cpy_r_double_except_block);
    CPy_DECREF(cpy_r_else_block);
    CPy_DECREF(cpy_r_old_exc);
    goto CPyL71;
CPyL154: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL115;
CPyL155: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r120);
    goto CPyL115;
CPyL156: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL115;
CPyL157: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL80;
CPyL158: ;
    CPy_DECREF(cpy_r_r129);
    goto CPyL82;
CPyL159: ;
    CPy_DECREF(cpy_r_r132);
    goto CPyL84;
CPyL160: ;
    CPy_DECREF(cpy_r_r134);
    goto CPyL85;
CPyL161: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL115;
CPyL162: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r139);
    goto CPyL115;
CPyL163: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_double_except_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r139);
    CPy_DecRef(cpy_r_r142);
    goto CPyL115;
CPyL164: ;
    CPy_DECREF(cpy_r_r146);
    goto CPyL91;
CPyL165: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL115;
CPyL166: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r152);
    goto CPyL115;
CPyL167: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r155);
    goto CPyL115;
CPyL168: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    goto CPyL115;
CPyL169: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL98;
CPyL170: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r163);
    goto CPyL115;
CPyL171: ;
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_else_block);
    CPy_DecRef(cpy_r_r163);
    CPy_DecRef(cpy_r_r164);
    goto CPyL115;
CPyL172: ;
    CPy_DECREF(cpy_r_r169);
    goto CPyL104;
CPyL173: ;
    CPy_DECREF(cpy_r_r172);
    goto CPyL106;
CPyL174: ;
    CPy_DECREF(cpy_r_else_block);
    goto CPyL113;
CPyL175: ;
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL115;
CPyL176: ;
    CPy_DECREF(cpy_r_r180);
    goto CPyL112;
}

PyObject *CPyPy_statement___transform_try_except(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "body", "handlers", "else_body", "line", 0};
    static CPyArg_Parser parser = {"OOOOO:transform_try_except", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_body;
    PyObject *obj_handlers;
    PyObject *obj_else_body;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_body, &obj_handlers, &obj_else_body, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_body = obj_body;
    PyObject *arg_handlers = obj_handlers;
    PyObject *arg_else_body;
    arg_else_body = obj_else_body;
    if (arg_else_body != NULL) goto __LL10546;
    if (obj_else_body == Py_None)
        arg_else_body = obj_else_body;
    else {
        arg_else_body = NULL;
    }
    if (arg_else_body != NULL) goto __LL10546;
    CPy_TypeError("object or None", obj_else_body); 
    goto fail;
__LL10546: ;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_statement___transform_try_except(arg_builder, arg_body, arg_handlers, arg_else_body, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except", 427, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___body_transform_try_except_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___body_transform_try_except_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___body_transform_try_except_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___body_transform_try_except_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "body_transform_try_except_stmt_obj", "__mypyc_env__", 513, CPyStatic_statement___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "transform_try_except_stmt_env", "body", -1, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_body = cpy_r_r1;
    CPy_DECREF(cpy_r_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "body", "transform_try_except_stmt_env", "builder", 514, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 514, CPyStatic_statement___globals);
        goto CPyL8;
    }
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TryStmtObject *)cpy_r_r3)->_body;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 514, CPyStatic_statement___globals);
        goto CPyL6;
    } else
        goto CPyL9;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL5;
}

PyObject *CPyPy_statement___body_transform_try_except_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___body_transform_try_except_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "body", 513, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__0_transform_try_except_stmt_make_handler_obj", "__mypyc_env__", 518, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "make_handler_transform_try_except_stmt_env", "__mypyc_env__", 518, CPyStatic_statement___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r1)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'body' of 'make_handler_transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals);
        goto CPyL10;
    }
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_nodes___Block))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r3);
        goto CPyL10;
    }
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals);
        goto CPyL8;
    }
    if (unlikely(cpy_r_r6 != Py_None)) {
        CPy_TypeError("None", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL8: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
}

PyObject *CPyPy_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 518, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___make_handler_transform_try_except_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___make_handler_transform_try_except_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___make_handler_transform_try_except_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_body) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_make_handler;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "make_handler", "make_handler_transform_try_except_stmt_obj", "__mypyc_env__", 517, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_handler;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "make_handler", "transform_try_except_stmt_env", "make_handler", -1, CPyStatic_statement___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_make_handler = cpy_r_r1;
    CPy_DECREF(cpy_r_make_handler);
    cpy_r_r2 = CPyDef_statement___make_handler_transform_try_except_stmt_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 517, CPyStatic_statement___globals);
        goto CPyL9;
    }
    if (((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 517, CPyStatic_statement___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_body);
    if (((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->_body);
    }
    ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_envObject *)cpy_r_r2)->_body = cpy_r_body;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 517, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_obj();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 518, CPyStatic_statement___globals);
        goto CPyL10;
    }
    if (((mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__0_transform_try_except_stmt_make_handler_objObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 518, CPyStatic_statement___globals);
        goto CPyL11;
    }
    return cpy_r_r5;
CPyL8: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_statement___make_handler_transform_try_except_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"body", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_body;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_body)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_body;
    if (likely(Py_TYPE(obj_body) == CPyType_nodes___Block))
        arg_body = obj_body;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_body); 
        goto fail;
    }
    PyObject *retval = CPyDef_statement___make_handler_transform_try_except_stmt_obj_____call__(arg___mypyc_self__, arg_body);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "make_handler", 517, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__1_transform_try_except_stmt_make_entry_obj", "__mypyc_env__", 521, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "make_entry_transform_try_except_stmt_env", "__mypyc_env__", 521, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r1)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 521, CPyStatic_statement___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r0)->_type;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'type' of 'make_entry_transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 521, CPyStatic_statement___globals);
        goto CPyL9;
    }
CPyL4: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_builder___IRBuilder___accept(cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 521, CPyStatic_statement___globals);
        goto CPyL7;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "<lambda>", 521, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r5);
        goto CPyL7;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
}

PyObject *CPyPy_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 521, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___make_entry_transform_try_except_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___make_entry_transform_try_except_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___make_entry_transform_try_except_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

tuple_T2OI CPyDef_statement___make_entry_transform_try_except_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_make_entry;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    tuple_T2OI cpy_r_r9;
    tuple_T2OI cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "make_entry", "make_entry_transform_try_except_stmt_obj", "__mypyc_env__", 520, CPyStatic_statement___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_entry;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "make_entry", "transform_try_except_stmt_env", "make_entry", -1, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_make_entry = cpy_r_r1;
    CPy_DECREF(cpy_r_make_entry);
    cpy_r_r2 = CPyDef_statement___make_entry_transform_try_except_stmt_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 520, CPyStatic_statement___globals);
        goto CPyL11;
    }
    if (((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 520, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_type);
    if (((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->_type != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->_type);
    }
    ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->_type = cpy_r_type;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 520, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r5 = CPyDef_statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_obj();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 521, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
    if (((mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__1_transform_try_except_stmt_make_entry_objObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 521, CPyStatic_statement___globals);
        goto CPyL13;
    }
    cpy_r_r7 = ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_envObject *)cpy_r_r2)->_type;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'type' of 'make_entry_transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 521, CPyStatic_statement___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_r8 = ((mypy___nodes___ContextObject *)cpy_r_r7)->_line;
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'Expression' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r8);
    }
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 521, CPyStatic_statement___globals);
        goto CPyL14;
    }
CPyL9: ;
    cpy_r_r9.f0 = cpy_r_r5;
    cpy_r_r9.f1 = cpy_r_r8;
    CPy_INCREF(cpy_r_r9.f0);
    CPyTagged_INCREF(cpy_r_r9.f1);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r8);
    return cpy_r_r9;
CPyL10: ;
    tuple_T2OI __tmp10547 = { NULL, CPY_INT_TAG };
    cpy_r_r10 = __tmp10547;
    return cpy_r_r10;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_statement___make_entry_transform_try_except_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_nodes___Expression)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_type); 
        goto fail;
    }
    tuple_T2OI retval = CPyDef_statement___make_entry_transform_try_except_stmt_obj_____call__(arg___mypyc_self__, arg_type);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10548 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10548);
    PyObject *__tmp10549 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp10549);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "make_entry", 520, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__2_transform_try_except_stmt_obj", "__mypyc_env__", 527, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "transform_try_except_stmt_env", "builder", 527, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 527, CPyStatic_statement___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___TryStmtObject *)cpy_r_r2)->_else_body;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "<lambda>", 527, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r3);
        goto CPyL9;
    }
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_builder___IRBuilder___accept(cpy_r_r1, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 527, CPyStatic_statement___globals);
        goto CPyL7;
    }
    if (unlikely(cpy_r_r6 != Py_None)) {
        CPy_TypeError("None", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 527, CPyStatic_statement___globals);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
}

PyObject *CPyPy_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 527, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_try_except_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_body;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    tuple_T2OI cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_handlers;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_else_body;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    cpy_r_r0 = CPyDef_statement___transform_try_except_stmt_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 512, CPyStatic_statement___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 512, CPyStatic_statement___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_t);
    if (((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t);
    }
    ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t = cpy_r_t;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 512, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r3 = CPyDef_statement___body_transform_try_except_stmt_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 513, CPyStatic_statement___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___body_transform_try_except_stmt_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 513, CPyStatic_statement___globals);
        goto CPyL47;
    }
    if (((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_body);
    }
    ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_body = cpy_r_r3;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 513, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r6 = CPyDef_statement___make_handler_transform_try_except_stmt_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 517, CPyStatic_statement___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___make_handler_transform_try_except_stmt_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 517, CPyStatic_statement___globals);
        goto CPyL48;
    }
    if (((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_handler != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_handler);
    }
    ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_handler = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 517, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r9 = CPyDef_statement___make_entry_transform_try_except_stmt_obj();
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 520, CPyStatic_statement___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *)cpy_r_r9)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *)cpy_r_r9)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___make_entry_transform_try_except_stmt_objObject *)cpy_r_r9)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 520, CPyStatic_statement___globals);
        goto CPyL49;
    }
    if (((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_entry != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_entry);
    }
    ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_entry = cpy_r_r9;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 520, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 523, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r13 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "t", 525, CPyStatic_statement___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r13);
CPyL14: ;
    cpy_r_r14 = ((mypy___nodes___TryStmtObject *)cpy_r_r13)->_types;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = 0;
    cpy_r_r16 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "t", 525, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r16);
CPyL15: ;
    cpy_r_r17 = ((mypy___nodes___TryStmtObject *)cpy_r_r16)->_vars;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = 0;
    cpy_r_r19 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "t", 525, CPyStatic_statement___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = ((mypy___nodes___TryStmtObject *)cpy_r_r19)->_handlers;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = 0;
CPyL17: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL53;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_r17)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r18 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL53;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r20)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL53;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (PyObject_TypeCheck(cpy_r_r34, CPyType_nodes___Expression))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL10550;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL10550;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 523, CPyStatic_statement___globals, "mypy.nodes.Expression or None", cpy_r_r34);
    goto CPyL54;
__LL10550: ;
    cpy_r_type = cpy_r_r35;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_r17, cpy_r_r18);
    if (Py_TYPE(cpy_r_r36) == CPyType_nodes___NameExpr)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL10551;
    if (cpy_r_r36 == Py_None)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL10551;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 523, CPyStatic_statement___globals, "mypy.nodes.NameExpr or None", cpy_r_r36);
    goto CPyL55;
__LL10551: ;
    cpy_r_var = cpy_r_r37;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r20, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r38) == CPyType_nodes___Block))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 523, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r38);
        goto CPyL56;
    }
    cpy_r_body = cpy_r_r39;
    cpy_r_r40 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r41 = cpy_r_type != cpy_r_r40;
    if (!cpy_r_r41) goto CPyL57;
    if (likely(cpy_r_type != Py_None))
        cpy_r_r42 = cpy_r_type;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 524, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_type);
        goto CPyL58;
    }
    cpy_r_r43 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_entry;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "make_entry", 524, CPyStatic_statement___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r43);
CPyL26: ;
    PyObject *cpy_r_r44[1] = {cpy_r_r42};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 524, CPyStatic_statement___globals);
        goto CPyL59;
    }
    CPy_DECREF(cpy_r_r42);
    PyObject *__tmp10552;
    if (unlikely(!(PyTuple_Check(cpy_r_r46) && PyTuple_GET_SIZE(cpy_r_r46) == 2))) {
        __tmp10552 = NULL;
        goto __LL10553;
    }
    __tmp10552 = PyTuple_GET_ITEM(cpy_r_r46, 0);
    if (__tmp10552 == NULL) goto __LL10553;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r46, 1))))
        __tmp10552 = PyTuple_GET_ITEM(cpy_r_r46, 1);
    else {
        __tmp10552 = NULL;
    }
    if (__tmp10552 == NULL) goto __LL10553;
    __tmp10552 = cpy_r_r46;
__LL10553: ;
    if (unlikely(__tmp10552 == NULL)) {
        CPy_TypeError("tuple[object, int]", cpy_r_r46); cpy_r_r47 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp10554 = PyTuple_GET_ITEM(cpy_r_r46, 0);
        CPy_INCREF(__tmp10554);
        PyObject *__tmp10555;
        __tmp10555 = __tmp10554;
        cpy_r_r47.f0 = __tmp10555;
        PyObject *__tmp10556 = PyTuple_GET_ITEM(cpy_r_r46, 1);
        CPyTagged __tmp10557;
        if (likely(PyLong_Check(__tmp10556)))
            __tmp10557 = CPyTagged_FromObject(__tmp10556);
        else {
            CPy_TypeError("int", __tmp10556); __tmp10557 = CPY_INT_TAG;
        }
        cpy_r_r47.f1 = __tmp10557;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 524, CPyStatic_statement___globals);
        goto CPyL58;
    }
    cpy_r_r48 = PyTuple_New(2);
    if (unlikely(cpy_r_r48 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10558 = cpy_r_r47.f0;
    PyTuple_SET_ITEM(cpy_r_r48, 0, __tmp10558);
    PyObject *__tmp10559 = CPyTagged_StealAsObject(cpy_r_r47.f1);
    PyTuple_SET_ITEM(cpy_r_r48, 1, __tmp10559);
    cpy_r_r49 = cpy_r_r48;
    goto CPyL30;
CPyL29: ;
    cpy_r_r50 = Py_None;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r49 = cpy_r_r50;
CPyL30: ;
    cpy_r_r51 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_make_handler;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "make_handler", 524, CPyStatic_statement___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r51);
CPyL31: ;
    PyObject *cpy_r_r52[1] = {cpy_r_body};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 524, CPyStatic_statement___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_body);
    cpy_r_r55.f0 = cpy_r_r49;
    cpy_r_r55.f1 = cpy_r_var;
    cpy_r_r55.f2 = cpy_r_r54;
    CPy_INCREF(cpy_r_r55.f0);
    CPy_INCREF(cpy_r_r55.f1);
    CPy_INCREF(cpy_r_r55.f2);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_var);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = PyTuple_New(3);
    if (unlikely(cpy_r_r56 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10560 = cpy_r_r55.f0;
    PyTuple_SET_ITEM(cpy_r_r56, 0, __tmp10560);
    PyObject *__tmp10561 = cpy_r_r55.f1;
    PyTuple_SET_ITEM(cpy_r_r56, 1, __tmp10561);
    PyObject *__tmp10562 = cpy_r_r55.f2;
    PyTuple_SET_ITEM(cpy_r_r56, 2, __tmp10562);
    cpy_r_r57 = PyList_Append(cpy_r_r12, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 523, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_r59 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r59;
    cpy_r_r60 = cpy_r_r18 + 2;
    cpy_r_r18 = cpy_r_r60;
    cpy_r_r61 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r61;
    goto CPyL17;
CPyL34: ;
    cpy_r_handlers = cpy_r_r12;
    cpy_r_r62 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "t", 527, CPyStatic_statement___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r62);
CPyL35: ;
    cpy_r_r63 = ((mypy___nodes___TryStmtObject *)cpy_r_r62)->_else_body;
    CPy_INCREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r65 = cpy_r_r63 != cpy_r_r64;
    CPy_DECREF(cpy_r_r63);
    if (!cpy_r_r65) goto CPyL39;
    cpy_r_r66 = CPyDef_statement_____mypyc_lambda__2_transform_try_except_stmt_obj();
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 527, CPyStatic_statement___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *)cpy_r_r66)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *)cpy_r_r66)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__2_transform_try_except_stmt_objObject *)cpy_r_r66)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r67 = 1;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 527, CPyStatic_statement___globals);
        goto CPyL62;
    }
    cpy_r_r68 = cpy_r_r66;
    goto CPyL40;
CPyL39: ;
    cpy_r_r69 = Py_None;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r68 = cpy_r_r69;
CPyL40: ;
    cpy_r_else_body = cpy_r_r68;
    cpy_r_r70 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "builder", 528, CPyStatic_statement___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r70);
CPyL41: ;
    cpy_r_r71 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_except_stmt", "transform_try_except_stmt_env", "body", 528, CPyStatic_statement___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r71);
CPyL42: ;
    cpy_r_r72 = ((mypyc___irbuild___statement___transform_try_except_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r72 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_except_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r72);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 528, CPyStatic_statement___globals);
        goto CPyL65;
    }
CPyL43: ;
    cpy_r_r73 = ((mypy___nodes___TryStmtObject *)cpy_r_r72)->_line;
    CPyTagged_INCREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = CPyDef_statement___transform_try_except(cpy_r_r70, cpy_r_r71, cpy_r_handlers, cpy_r_else_body, cpy_r_r73);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_handlers);
    CPy_DECREF(cpy_r_else_body);
    CPyTagged_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 528, CPyStatic_statement___globals);
        goto CPyL45;
    }
    return 1;
CPyL45: ;
    cpy_r_r75 = 2;
    return cpy_r_r75;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL45;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL45;
CPyL53: ;
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r20);
    goto CPyL34;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    goto CPyL45;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_type);
    goto CPyL45;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_var);
    goto CPyL45;
CPyL57: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL29;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_body);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_r42);
    goto CPyL45;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_body);
    CPy_DecRef(cpy_r_r49);
    goto CPyL45;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_handlers);
    goto CPyL45;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_handlers);
    CPy_DecRef(cpy_r_r66);
    goto CPyL45;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_handlers);
    CPy_DecRef(cpy_r_else_body);
    goto CPyL45;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_handlers);
    CPy_DecRef(cpy_r_else_body);
    CPy_DecRef(cpy_r_r70);
    goto CPyL45;
CPyL65: ;
    CPy_DecRef(cpy_r_handlers);
    CPy_DecRef(cpy_r_else_body);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    goto CPyL45;
}

PyObject *CPyPy_statement___transform_try_except_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "t", 0};
    static CPyArg_Parser parser = {"OO:transform_try_except_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_t)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_nodes___TryStmt))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_t); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_try_except_stmt(arg_builder, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_except_stmt", 512, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___try_finally_try(PyObject *cpy_r_builder, PyObject *cpy_r_err_handler, PyObject *cpy_r_return_entry, PyObject *cpy_r_main_entry, PyObject *cpy_r_try_body) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_control;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = CPyDef_nonlocalcontrol___TryFinallyNonlocalControl(cpy_r_return_entry);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 539, CPyStatic_statement___globals);
        goto CPyL11;
    }
    cpy_r_control = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r1, cpy_r_err_handler);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 540, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyList_Append(cpy_r_r3, cpy_r_control);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 542, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 543, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r8 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_builder, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 543, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_try_body, 0, 0, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 544, CPyStatic_statement___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_main_entry);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 545, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyList_PopLast(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 546, CPyStatic_statement___globals);
        goto CPyL12;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r12); 
        cpy_r_r13 = NULL;
    }
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 546, CPyStatic_statement___globals);
        goto CPyL12;
    } else
        goto CPyL14;
CPyL9: ;
    cpy_r_r14 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 547, CPyStatic_statement___globals);
        goto CPyL12;
    } else
        goto CPyL15;
CPyL10: ;
    cpy_r_r16 = ((mypyc___irbuild___nonlocalcontrol___TryFinallyNonlocalControlObject *)cpy_r_control)->_ret_reg;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_control);
    return cpy_r_r16;
CPyL11: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_control);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL6;
CPyL14: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL9;
CPyL15: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL10;
}

PyObject *CPyPy_statement___try_finally_try(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "err_handler", "return_entry", "main_entry", "try_body", 0};
    static CPyArg_Parser parser = {"OOOOO:try_finally_try", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_err_handler;
    PyObject *obj_return_entry;
    PyObject *obj_main_entry;
    PyObject *obj_try_body;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_err_handler, &obj_return_entry, &obj_main_entry, &obj_try_body)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_err_handler;
    if (likely(Py_TYPE(obj_err_handler) == CPyType_ops___BasicBlock))
        arg_err_handler = obj_err_handler;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_err_handler); 
        goto fail;
    }
    PyObject *arg_return_entry;
    if (likely(Py_TYPE(obj_return_entry) == CPyType_ops___BasicBlock))
        arg_return_entry = obj_return_entry;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_return_entry); 
        goto fail;
    }
    PyObject *arg_main_entry;
    if (likely(Py_TYPE(obj_main_entry) == CPyType_ops___BasicBlock))
        arg_main_entry = obj_main_entry;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_main_entry); 
        goto fail;
    }
    PyObject *arg_try_body = obj_try_body;
    PyObject *retval = CPyDef_statement___try_finally_try(arg_builder, arg_err_handler, arg_return_entry, arg_main_entry, arg_try_body);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_try", 531, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___try_finally_entry_blocks(PyObject *cpy_r_builder, PyObject *cpy_r_err_handler, PyObject *cpy_r_return_entry, PyObject *cpy_r_main_entry, PyObject *cpy_r_finally_block, PyObject *cpy_r_ret_reg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_old_exc;
    char cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    cpy_r_r0 = CPyStatic_statement___globals;
    cpy_r_r1 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 560, CPyStatic_statement___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_rtypes___RTuple))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 560, CPyStatic_statement___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r2);
        goto CPyL38;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___Register(cpy_r_r3, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 560, CPyStatic_statement___globals);
        goto CPyL38;
    }
    cpy_r_old_exc = cpy_r_r7;
    cpy_r_r8 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_main_entry);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 563, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r9 = PyObject_IsTrue(cpy_r_ret_reg);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 558, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL12;
    CPy_INCREF(cpy_r_ret_reg);
    if (Py_TYPE(cpy_r_ret_reg) == CPyType_ops___Register)
        cpy_r_r12 = cpy_r_ret_reg;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL10563;
    if (PyObject_TypeCheck(cpy_r_ret_reg, CPyType_targets___AssignmentTarget))
        cpy_r_r12 = cpy_r_ret_reg;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL10563;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals, "union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_ret_reg);
    goto CPyL39;
__LL10563: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, -2);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals);
        goto CPyL40;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_rtypes___RType)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals, "mypyc.ir.rtypes.RType", cpy_r_r14);
        goto CPyL40;
    }
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = 2;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_ops___LoadErrorValue(cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals);
        goto CPyL40;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals);
        goto CPyL40;
    }
    cpy_r_r21 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r12, cpy_r_r20, -2);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 565, CPyStatic_statement___globals);
        goto CPyL39;
    }
CPyL12: ;
    cpy_r_r22 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_return_entry);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 566, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_return_entry);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 568, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r24 = CPyStatic_statement___globals;
    cpy_r_r25 = CPyStatics[8027]; /* 'exc_rtuple' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_rtypes___RTuple))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals, "mypyc.ir.rtypes.RTuple", cpy_r_r26);
        goto CPyL39;
    }
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_ops___LoadErrorValue(cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r32 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPyDef_ops___Assign(cpy_r_old_exc, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r35 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 569, CPyStatic_statement___globals);
        goto CPyL39;
    } else
        goto CPyL41;
CPyL20: ;
    cpy_r_r36 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_finally_block);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 570, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_err_handler);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 573, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r38 = PyObject_IsTrue(cpy_r_ret_reg);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 558, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r40 = cpy_r_r38;
    if (!cpy_r_r40) goto CPyL30;
    CPy_INCREF(cpy_r_ret_reg);
    if (Py_TYPE(cpy_r_ret_reg) == CPyType_ops___Register)
        cpy_r_r41 = cpy_r_ret_reg;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL10564;
    if (PyObject_TypeCheck(cpy_r_ret_reg, CPyType_targets___AssignmentTarget))
        cpy_r_r41 = cpy_r_ret_reg;
    else {
        cpy_r_r41 = NULL;
    }
    if (cpy_r_r41 != NULL) goto __LL10564;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals, "union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_ret_reg);
    goto CPyL39;
__LL10564: ;
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r43 = CPyList_GetItemShort(cpy_r_r42, -2);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r43, CPyType_rtypes___RType)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals, "mypyc.ir.rtypes.RType", cpy_r_r43);
        goto CPyL42;
    }
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_ops___LoadErrorValue(cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals);
        goto CPyL42;
    }
    cpy_r_r49 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals);
        goto CPyL42;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r41, cpy_r_r49, -2);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 575, CPyStatic_statement___globals);
        goto CPyL39;
    }
CPyL30: ;
    cpy_r_r51 = CPyStatic_statement___globals;
    cpy_r_r52 = CPyStatics[8376]; /* 'error_catch_op' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals);
        goto CPyL39;
    }
    if (likely(PyTuple_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals, "tuple", cpy_r_r53);
        goto CPyL39;
    }
    cpy_r_r55 = PyList_New(0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r54, cpy_r_r55, -2);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_ops___Assign(cpy_r_old_exc, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r59 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 576, CPyStatic_statement___globals);
        goto CPyL39;
    } else
        goto CPyL44;
CPyL36: ;
    cpy_r_r60 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_finally_block);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 577, CPyStatic_statement___globals);
        goto CPyL39;
    }
    return cpy_r_old_exc;
CPyL38: ;
    cpy_r_r61 = NULL;
    return cpy_r_r61;
CPyL39: ;
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL38;
CPyL40: ;
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r12);
    goto CPyL38;
CPyL41: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL20;
CPyL42: ;
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r41);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_old_exc);
    CPy_DecRef(cpy_r_r54);
    goto CPyL38;
CPyL44: ;
    CPy_DECREF(cpy_r_r59);
    goto CPyL36;
}

PyObject *CPyPy_statement___try_finally_entry_blocks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "err_handler", "return_entry", "main_entry", "finally_block", "ret_reg", 0};
    static CPyArg_Parser parser = {"OOOOOO:try_finally_entry_blocks", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_err_handler;
    PyObject *obj_return_entry;
    PyObject *obj_main_entry;
    PyObject *obj_finally_block;
    PyObject *obj_ret_reg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_err_handler, &obj_return_entry, &obj_main_entry, &obj_finally_block, &obj_ret_reg)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_err_handler;
    if (likely(Py_TYPE(obj_err_handler) == CPyType_ops___BasicBlock))
        arg_err_handler = obj_err_handler;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_err_handler); 
        goto fail;
    }
    PyObject *arg_return_entry;
    if (likely(Py_TYPE(obj_return_entry) == CPyType_ops___BasicBlock))
        arg_return_entry = obj_return_entry;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_return_entry); 
        goto fail;
    }
    PyObject *arg_main_entry;
    if (likely(Py_TYPE(obj_main_entry) == CPyType_ops___BasicBlock))
        arg_main_entry = obj_main_entry;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_main_entry); 
        goto fail;
    }
    PyObject *arg_finally_block;
    if (likely(Py_TYPE(obj_finally_block) == CPyType_ops___BasicBlock))
        arg_finally_block = obj_finally_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_finally_block); 
        goto fail;
    }
    PyObject *arg_ret_reg;
    if (Py_TYPE(obj_ret_reg) == CPyType_ops___Register)
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10565;
    if (PyObject_TypeCheck(obj_ret_reg, CPyType_targets___AssignmentTarget))
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10565;
    if (obj_ret_reg == Py_None)
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10565;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget, None]", obj_ret_reg); 
    goto fail;
__LL10565: ;
    PyObject *retval = CPyDef_statement___try_finally_entry_blocks(arg_builder, arg_err_handler, arg_return_entry, arg_main_entry, arg_finally_block, arg_ret_reg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_entry_blocks", 552, CPyStatic_statement___globals);
    return NULL;
}

tuple_T2OO CPyDef_statement___try_finally_body(PyObject *cpy_r_builder, PyObject *cpy_r_finally_block, PyObject *cpy_r_finally_body, PyObject *cpy_r_old_exc) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_cleanup_block;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_finally_control;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 585, CPyStatic_statement___globals);
        goto CPyL11;
    }
    cpy_r_cleanup_block = cpy_r_r1;
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_ll_builder___LowLevelIRBuilder___push_error_handler(cpy_r_r2, cpy_r_cleanup_block);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 587, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 588, CPyStatic_statement___globals);
        goto CPyL12;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_body", 588, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r5);
        goto CPyL12;
    }
    cpy_r_r7 = CPyDef_nonlocalcontrol___FinallyNonlocalControl(cpy_r_r6, cpy_r_old_exc);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 588, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_finally_control = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyList_Append(cpy_r_r8, cpy_r_finally_control);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 589, CPyStatic_statement___globals);
        goto CPyL13;
    }
    cpy_r_r11 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_finally_block);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 590, CPyStatic_statement___globals);
        goto CPyL13;
    }
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_finally_body, 0, 0, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 591, CPyStatic_statement___globals);
        goto CPyL13;
    } else
        goto CPyL14;
CPyL8: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyList_PopLast(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 592, CPyStatic_statement___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r14); 
        cpy_r_r15 = NULL;
    }
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 592, CPyStatic_statement___globals);
        goto CPyL13;
    } else
        goto CPyL15;
CPyL10: ;
    cpy_r_r16.f0 = cpy_r_cleanup_block;
    cpy_r_r16.f1 = cpy_r_finally_control;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_DECREF(cpy_r_cleanup_block);
    CPy_DECREF(cpy_r_finally_control);
    return cpy_r_r16;
CPyL11: ;
    tuple_T2OO __tmp10566 = { NULL, NULL };
    cpy_r_r17 = __tmp10566;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_cleanup_block);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_cleanup_block);
    CPy_DecRef(cpy_r_finally_control);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL8;
CPyL15: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL10;
}

PyObject *CPyPy_statement___try_finally_body(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "finally_block", "finally_body", "old_exc", 0};
    static CPyArg_Parser parser = {"OOOO:try_finally_body", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_finally_block;
    PyObject *obj_finally_body;
    PyObject *obj_old_exc;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_finally_block, &obj_finally_body, &obj_old_exc)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_finally_block;
    if (likely(Py_TYPE(obj_finally_block) == CPyType_ops___BasicBlock))
        arg_finally_block = obj_finally_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_finally_block); 
        goto fail;
    }
    PyObject *arg_finally_body = obj_finally_body;
    PyObject *arg_old_exc;
    if (likely(PyObject_TypeCheck(obj_old_exc, CPyType_ops___Value)))
        arg_old_exc = obj_old_exc;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_old_exc); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_statement___try_finally_body(arg_builder, arg_finally_block, arg_finally_body, arg_old_exc);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10567 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10567);
    PyObject *__tmp10568 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10568);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_body", 582, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___try_finally_resolve_control(PyObject *cpy_r_builder, PyObject *cpy_r_cleanup_block, PyObject *cpy_r_finally_control, PyObject *cpy_r_old_exc, PyObject *cpy_r_ret_reg) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_reraise;
    PyObject *cpy_r_rest;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_return_block;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_out_block;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 609, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 609, CPyStatic_statement___globals);
        goto CPyL44;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_reraise = cpy_r_r2;
    cpy_r_rest = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_ops___Branch(cpy_r_old_exc, cpy_r_rest, cpy_r_reraise, 202, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 610, CPyStatic_statement___globals);
        goto CPyL45;
    }
    cpy_r_r9 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 610, CPyStatic_statement___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL4: ;
    cpy_r_r10 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_reraise);
    CPy_DECREF(cpy_r_reraise);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 613, CPyStatic_statement___globals);
        goto CPyL47;
    }
    cpy_r_r11 = CPyStatic_statement___globals;
    cpy_r_r12 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals);
        goto CPyL47;
    }
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals, "tuple", cpy_r_r13);
        goto CPyL47;
    }
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals);
        goto CPyL48;
    }
    cpy_r_r16 = CPyStatic_statement___globals;
    cpy_r_r17 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals);
        goto CPyL49;
    }
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals);
        goto CPyL49;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r14, cpy_r_r15, cpy_r_r19);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 614, CPyStatic_statement___globals);
        goto CPyL47;
    } else
        goto CPyL50;
CPyL11: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___Unreachable(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 615, CPyStatic_statement___globals);
        goto CPyL47;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 615, CPyStatic_statement___globals);
        goto CPyL47;
    } else
        goto CPyL51;
CPyL13: ;
    cpy_r_r24 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_ll_builder___LowLevelIRBuilder___pop_error_handler(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 616, CPyStatic_statement___globals);
        goto CPyL47;
    } else
        goto CPyL52;
CPyL14: ;
    cpy_r_r26 = PyObject_IsTrue(cpy_r_ret_reg);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 602, CPyStatic_statement___globals);
        goto CPyL47;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL29;
    cpy_r_r29 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_rest);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 620, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___BasicBlock(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 621, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r32 = cpy_r_r31;
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPyDef_ops___BasicBlock(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 621, CPyStatic_statement___globals);
        goto CPyL53;
    }
    cpy_r_r35 = cpy_r_r34;
    cpy_r_return_block = cpy_r_r32;
    cpy_r_rest = cpy_r_r35;
    CPy_INCREF(cpy_r_ret_reg);
    if (Py_TYPE(cpy_r_ret_reg) == CPyType_ops___Register)
        cpy_r_r36 = cpy_r_ret_reg;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL10569;
    if (PyObject_TypeCheck(cpy_r_ret_reg, CPyType_targets___AssignmentTarget))
        cpy_r_r36 = cpy_r_ret_reg;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL10569;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 622, CPyStatic_statement___globals, "union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_ret_reg);
    goto CPyL54;
__LL10569: ;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r36, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 622, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = 2;
    cpy_r_r42 = CPyDef_ops___Branch(cpy_r_r39, cpy_r_rest, cpy_r_return_block, 202, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 622, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_r43 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 622, CPyStatic_statement___globals);
        goto CPyL54;
    } else
        goto CPyL55;
CPyL23: ;
    cpy_r_r44 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_return_block);
    CPy_DECREF(cpy_r_return_block);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 624, CPyStatic_statement___globals);
        goto CPyL47;
    }
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nonlocal_control;
    cpy_r_r46 = CPyList_GetItemShort(cpy_r_r45, -2);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 625, CPyStatic_statement___globals);
        goto CPyL47;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 625, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r46);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_ret_reg);
    if (Py_TYPE(cpy_r_ret_reg) == CPyType_ops___Register)
        cpy_r_r48 = cpy_r_ret_reg;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10570;
    if (PyObject_TypeCheck(cpy_r_ret_reg, CPyType_targets___AssignmentTarget))
        cpy_r_r48 = cpy_r_ret_reg;
    else {
        cpy_r_r48 = NULL;
    }
    if (cpy_r_r48 != NULL) goto __LL10570;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 625, CPyStatic_statement___globals, "union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_ret_reg);
    goto CPyL56;
__LL10570: ;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = 2;
    cpy_r_r51 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 625, CPyStatic_statement___globals);
        goto CPyL56;
    }
    cpy_r_r52 = CPY_GET_METHOD(cpy_r_r47, CPyType_nonlocalcontrol___NonlocalControl, 2, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r47, cpy_r_builder, cpy_r_r51, -2); /* gen_return */
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 625, CPyStatic_statement___globals);
        goto CPyL47;
    }
CPyL29: ;
    cpy_r_r53 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_rest);
    CPy_DECREF(cpy_r_rest);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 628, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPyDef_ops___BasicBlock(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 629, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_out_block = cpy_r_r55;
    cpy_r_r56 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_out_block);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 630, CPyStatic_statement___globals);
        goto CPyL57;
    }
    cpy_r_r57 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_cleanup_block);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 633, CPyStatic_statement___globals);
        goto CPyL57;
    }
    cpy_r_r58 = CPyDef_nonlocalcontrol___FinallyNonlocalControl___gen_cleanup(cpy_r_finally_control, cpy_r_builder, -2);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 634, CPyStatic_statement___globals);
        goto CPyL57;
    }
    cpy_r_r59 = CPyStatic_statement___globals;
    cpy_r_r60 = CPyStatics[8408]; /* 'keep_propagating_op' */
    cpy_r_r61 = CPyDict_GetItem(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals);
        goto CPyL57;
    }
    if (likely(PyTuple_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals, "tuple", cpy_r_r61);
        goto CPyL57;
    }
    cpy_r_r63 = PyList_New(0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals);
        goto CPyL58;
    }
    cpy_r_r64 = CPyStatic_statement___globals;
    cpy_r_r65 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals);
        goto CPyL59;
    }
    if (likely(PyLong_Check(cpy_r_r66)))
        cpy_r_r67 = CPyTagged_FromObject(cpy_r_r66);
    else {
        CPy_TypeError("int", cpy_r_r66); cpy_r_r67 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals);
        goto CPyL59;
    }
    cpy_r_r68 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r62, cpy_r_r63, cpy_r_r67);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 635, CPyStatic_statement___globals);
        goto CPyL57;
    } else
        goto CPyL60;
CPyL40: ;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPyDef_ops___Unreachable(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 636, CPyStatic_statement___globals);
        goto CPyL57;
    }
    cpy_r_r71 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 636, CPyStatic_statement___globals);
        goto CPyL57;
    } else
        goto CPyL61;
CPyL42: ;
    return cpy_r_out_block;
CPyL43: ;
    cpy_r_r72 = NULL;
    return cpy_r_r72;
CPyL44: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_reraise);
    CPy_DecRef(cpy_r_rest);
    goto CPyL43;
CPyL46: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL4;
CPyL47: ;
    CPy_DecRef(cpy_r_rest);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r14);
    goto CPyL43;
CPyL49: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL43;
CPyL50: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL11;
CPyL51: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL13;
CPyL52: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL14;
CPyL53: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL43;
CPyL54: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_return_block);
    goto CPyL43;
CPyL55: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL23;
CPyL56: ;
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_r47);
    goto CPyL43;
CPyL57: ;
    CPy_DecRef(cpy_r_out_block);
    goto CPyL43;
CPyL58: ;
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r62);
    goto CPyL43;
CPyL59: ;
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL43;
CPyL60: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL40;
CPyL61: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL42;
}

PyObject *CPyPy_statement___try_finally_resolve_control(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cleanup_block", "finally_control", "old_exc", "ret_reg", 0};
    static CPyArg_Parser parser = {"OOOOO:try_finally_resolve_control", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cleanup_block;
    PyObject *obj_finally_control;
    PyObject *obj_old_exc;
    PyObject *obj_ret_reg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cleanup_block, &obj_finally_control, &obj_old_exc, &obj_ret_reg)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cleanup_block;
    if (likely(Py_TYPE(obj_cleanup_block) == CPyType_ops___BasicBlock))
        arg_cleanup_block = obj_cleanup_block;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", obj_cleanup_block); 
        goto fail;
    }
    PyObject *arg_finally_control;
    if (likely(Py_TYPE(obj_finally_control) == CPyType_nonlocalcontrol___FinallyNonlocalControl))
        arg_finally_control = obj_finally_control;
    else {
        CPy_TypeError("mypyc.irbuild.nonlocalcontrol.FinallyNonlocalControl", obj_finally_control); 
        goto fail;
    }
    PyObject *arg_old_exc;
    if (likely(PyObject_TypeCheck(obj_old_exc, CPyType_ops___Value)))
        arg_old_exc = obj_old_exc;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_old_exc); 
        goto fail;
    }
    PyObject *arg_ret_reg;
    if (Py_TYPE(obj_ret_reg) == CPyType_ops___Register)
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10571;
    if (PyObject_TypeCheck(obj_ret_reg, CPyType_targets___AssignmentTarget))
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10571;
    if (obj_ret_reg == Py_None)
        arg_ret_reg = obj_ret_reg;
    else {
        arg_ret_reg = NULL;
    }
    if (arg_ret_reg != NULL) goto __LL10571;
    CPy_TypeError("union[mypyc.ir.ops.Register, mypyc.irbuild.targets.AssignmentTarget, None]", obj_ret_reg); 
    goto fail;
__LL10571: ;
    PyObject *retval = CPyDef_statement___try_finally_resolve_control(arg_builder, arg_cleanup_block, arg_finally_control, arg_old_exc, arg_ret_reg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_finally_resolve_control", 597, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_try_finally_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_try_body, PyObject *cpy_r_finally_body) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_err_handler;
    PyObject *cpy_r_main_entry;
    PyObject *cpy_r_return_entry;
    PyObject *cpy_r_finally_block;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_ret_reg;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_old_exc;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_cleanup_block;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_finally_control;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_out_block;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPyDef_ops___BasicBlock(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 651, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_ops___BasicBlock(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 652, CPyStatic_statement___globals);
        goto CPyL11;
    }
    cpy_r_r5 = cpy_r_r4;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 653, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r8 = cpy_r_r7;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 654, CPyStatic_statement___globals);
        goto CPyL13;
    }
    cpy_r_r11 = cpy_r_r10;
    cpy_r_err_handler = cpy_r_r2;
    cpy_r_main_entry = cpy_r_r5;
    cpy_r_return_entry = cpy_r_r8;
    cpy_r_finally_block = cpy_r_r11;
    cpy_r_r12 = CPyDef_statement___try_finally_try(cpy_r_builder, cpy_r_err_handler, cpy_r_return_entry, cpy_r_main_entry, cpy_r_try_body);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 658, CPyStatic_statement___globals);
        goto CPyL14;
    }
    cpy_r_ret_reg = cpy_r_r12;
    cpy_r_r13 = CPyDef_statement___try_finally_entry_blocks(cpy_r_builder, cpy_r_err_handler, cpy_r_return_entry, cpy_r_main_entry, cpy_r_finally_block, cpy_r_ret_reg);
    CPy_DECREF(cpy_r_err_handler);
    CPy_DECREF(cpy_r_return_entry);
    CPy_DECREF(cpy_r_main_entry);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 661, CPyStatic_statement___globals);
        goto CPyL15;
    }
    cpy_r_old_exc = cpy_r_r13;
    cpy_r_r14 = CPyDef_statement___try_finally_body(cpy_r_builder, cpy_r_finally_block, cpy_r_finally_body, cpy_r_old_exc);
    CPy_DECREF(cpy_r_finally_block);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 666, CPyStatic_statement___globals);
        goto CPyL16;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    cpy_r_cleanup_block = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f1;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    cpy_r_finally_control = cpy_r_r16;
    cpy_r_r17 = CPyDef_statement___try_finally_resolve_control(cpy_r_builder, cpy_r_cleanup_block, cpy_r_finally_control, cpy_r_old_exc, cpy_r_ret_reg);
    CPy_DECREF(cpy_r_cleanup_block);
    CPy_DECREF(cpy_r_finally_control);
    CPy_DECREF(cpy_r_old_exc);
    CPy_DECREF(cpy_r_ret_reg);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 671, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_out_block = cpy_r_r17;
    cpy_r_r18 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_out_block);
    CPy_DECREF(cpy_r_out_block);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 675, CPyStatic_statement___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_err_handler);
    CPy_DecRef(cpy_r_main_entry);
    CPy_DecRef(cpy_r_return_entry);
    CPy_DecRef(cpy_r_finally_block);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_finally_block);
    CPy_DecRef(cpy_r_ret_reg);
    goto CPyL10;
CPyL16: ;
    CPy_DecRef(cpy_r_ret_reg);
    CPy_DecRef(cpy_r_old_exc);
    goto CPyL10;
}

PyObject *CPyPy_statement___transform_try_finally_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "try_body", "finally_body", 0};
    static CPyArg_Parser parser = {"OOO:transform_try_finally_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_try_body;
    PyObject *obj_finally_body;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_try_body, &obj_finally_body)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_try_body = obj_try_body;
    PyObject *arg_finally_body = obj_finally_body;
    char retval = CPyDef_statement___transform_try_finally_stmt(arg_builder, arg_try_body, arg_finally_body);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_finally_stmt", 641, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___transform_try_body_transform_try_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___transform_try_body_transform_try_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___transform_try_body_transform_try_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_try_body_transform_try_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_transform_try_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_body", "transform_try_body_transform_try_stmt_obj", "__mypyc_env__", 688, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_transform_try_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_body", "transform_try_stmt_env", "transform_try_body", -1, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_transform_try_body = cpy_r_r1;
    CPy_DECREF(cpy_r_transform_try_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_body", "transform_try_stmt_env", "t", 689, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___nodes___TryStmtObject *)cpy_r_r2)->_handlers;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL7;
    cpy_r_r8 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_body", "transform_try_stmt_env", "builder", 690, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r9 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_body", 690, CPyStatic_statement___globals);
        goto CPyL13;
    }
CPyL6: ;
    cpy_r_r10 = CPyDef_statement___transform_try_except_stmt(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_body", 690, CPyStatic_statement___globals);
        goto CPyL11;
    } else
        goto CPyL10;
CPyL7: ;
    cpy_r_r11 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_body", "transform_try_stmt_env", "builder", 692, CPyStatic_statement___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r11);
CPyL8: ;
    cpy_r_r12 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r12 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_body", 692, CPyStatic_statement___globals);
        goto CPyL14;
    }
CPyL9: ;
    cpy_r_r13 = ((mypy___nodes___TryStmtObject *)cpy_r_r12)->_body;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___accept(cpy_r_r11, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_body", 692, CPyStatic_statement___globals);
        goto CPyL11;
    } else
        goto CPyL15;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL15: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL10;
}

PyObject *CPyPy_statement___transform_try_body_transform_try_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___transform_try_body_transform_try_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_body", 688, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__3_transform_try_stmt_obj", "__mypyc_env__", 696, CPyStatic_statement___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "transform_try_stmt_env", "builder", 696, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'body' of 'transform_try_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 696, CPyStatic_statement___globals);
        goto CPyL8;
    }
CPyL3: ;
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_builder___IRBuilder___accept(cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 696, CPyStatic_statement___globals);
        goto CPyL6;
    }
    if (unlikely(cpy_r_r4 != Py_None)) {
        CPy_TypeError("None", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 696, CPyStatic_statement___globals);
        goto CPyL6;
    }
    return cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
}

PyObject *CPyPy_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 696, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_try_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyDef_statement___transform_try_stmt_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 678, CPyStatic_statement___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 678, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_t);
    if (((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t);
    }
    ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t = cpy_r_t;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 678, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r3 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "t", 684, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypy___nodes___TryStmtObject *)cpy_r_r3)->_is_star;
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL8;
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "builder", 685, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = CPyStatics[8584]; /* 'Exception groups and except* cannot be compiled yet' */
    cpy_r_r7 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "t", 685, CPyStatic_statement___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r7);
CPyL7: ;
    cpy_r_r8 = ((mypy___nodes___TryStmtObject *)cpy_r_r7)->_line;
    CPyTagged_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = CPyDef_builder___IRBuilder___error(cpy_r_r5, cpy_r_r6, cpy_r_r8);
    CPyTagged_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 685, CPyStatic_statement___globals);
        goto CPyL26;
    }
CPyL8: ;
    cpy_r_r10 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "t", 686, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = ((mypy___nodes___TryStmtObject *)cpy_r_r10)->_finally_body;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r13) goto CPyL21;
    cpy_r_r14 = CPyDef_statement___transform_try_body_transform_try_stmt_obj();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 688, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *)cpy_r_r14)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *)cpy_r_r14)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___transform_try_body_transform_try_stmt_objObject *)cpy_r_r14)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 688, CPyStatic_statement___globals);
        goto CPyL28;
    }
    if (((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_transform_try_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_transform_try_body);
    }
    ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_transform_try_body = cpy_r_r14;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 688, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r17 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "t", 694, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((mypy___nodes___TryStmtObject *)cpy_r_r17)->_finally_body;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 694, CPyStatic_statement___globals, "mypy.nodes.Block", cpy_r_r18);
        goto CPyL26;
    }
    if (((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_body);
    }
    ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_body = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 694, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r21 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "builder", 696, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r21);
CPyL17: ;
    cpy_r_r22 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_transform_try_body;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "transform_try_body", 696, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r22);
CPyL18: ;
    cpy_r_r23 = CPyDef_statement_____mypyc_lambda__3_transform_try_stmt_obj();
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 696, CPyStatic_statement___globals);
        goto CPyL30;
    }
    if (((mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *)cpy_r_r23)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *)cpy_r_r23)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__3_transform_try_stmt_objObject *)cpy_r_r23)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 696, CPyStatic_statement___globals);
        goto CPyL31;
    }
    cpy_r_r25 = CPyDef_statement___transform_try_finally_stmt(cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 696, CPyStatic_statement___globals);
        goto CPyL25;
    } else
        goto CPyL24;
CPyL21: ;
    cpy_r_r26 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_try_stmt", "transform_try_stmt_env", "builder", 698, CPyStatic_statement___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r26);
CPyL22: ;
    cpy_r_r27 = ((mypyc___irbuild___statement___transform_try_stmt_envObject *)cpy_r_r0)->_t;
    if (unlikely(cpy_r_r27 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 't' of 'transform_try_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r27);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 698, CPyStatic_statement___globals);
        goto CPyL32;
    }
CPyL23: ;
    cpy_r_r28 = CPyDef_statement___transform_try_except_stmt(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 698, CPyStatic_statement___globals);
        goto CPyL25;
    }
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL25;
}

PyObject *CPyPy_statement___transform_try_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "t", 0};
    static CPyArg_Parser parser = {"OO:transform_try_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_t)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_nodes___TryStmt))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.nodes.TryStmt", obj_t); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_try_stmt(arg_builder, arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_try_stmt", 678, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___get_sys_exc_info(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_exc_info;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_i;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = CPyStatic_statement___globals;
    cpy_r_r1 = CPyStatics[8585]; /* 'get_exc_info_op' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 702, CPyStatic_statement___globals);
        goto CPyL12;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 702, CPyStatic_statement___globals, "tuple", cpy_r_r2);
        goto CPyL12;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 702, CPyStatic_statement___globals);
        goto CPyL13;
    }
    cpy_r_r5 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r3, cpy_r_r4, -2);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 702, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_exc_info = cpy_r_r5;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 703, CPyStatic_statement___globals);
        goto CPyL14;
    }
    cpy_r_r7 = 0;
    cpy_r_i = cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)6;
    if (!cpy_r_r8) goto CPyL15;
    cpy_r_r9 = CPyDef_ops___TupleGet(cpy_r_exc_info, cpy_r_i, -2);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 703, CPyStatic_statement___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 703, CPyStatic_statement___globals);
        goto CPyL16;
    }
    cpy_r_r11 = PyList_Append(cpy_r_r6, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 703, CPyStatic_statement___globals);
        goto CPyL16;
    }
    cpy_r_r13 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r13;
    cpy_r_i = cpy_r_r13;
    goto CPyL6;
CPyL11: ;
    return cpy_r_r6;
CPyL12: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL13: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_exc_info);
    goto CPyL12;
CPyL15: ;
    CPy_DECREF(cpy_r_exc_info);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_exc_info);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
}

PyObject *CPyPy_statement___get_sys_exc_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:get_sys_exc_info", kwlist, 0};
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
    PyObject *retval = CPyDef_statement___get_sys_exc_info(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "get_sys_exc_info", 701, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___maybe_natively_call_exit_transform_with_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____call__(PyObject *cpy_r___mypyc_self__, char cpy_r_exc_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_maybe_natively_call_exit;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_none;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_exit_val;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = ((mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "maybe_natively_call_exit_transform_with_obj", "__mypyc_env__", 736, CPyStatic_statement___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "maybe_natively_call_exit", -1, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_maybe_natively_call_exit = cpy_r_r1;
    CPy_DECREF(cpy_r_maybe_natively_call_exit);
    if (!cpy_r_exc_info) goto CPyL6;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 738, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r2);
CPyL4: ;
    cpy_r_r3 = CPyDef_statement___get_sys_exc_info(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 738, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_args = cpy_r_r3;
    goto CPyL10;
CPyL6: ;
    cpy_r_r4 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 740, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r4);
CPyL7: ;
    cpy_r_r5 = CPyDef_builder___IRBuilder___none_object(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 740, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_none = cpy_r_r5;
    cpy_r_r6 = PyList_New(3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 741, CPyStatic_statement___globals);
        goto CPyL55;
    }
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r6)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    CPy_INCREF(cpy_r_none);
    *(PyObject * *)cpy_r_r8 = cpy_r_none;
    cpy_r_r9 = cpy_r_r8 + 8;
    CPy_INCREF(cpy_r_none);
    *(PyObject * *)cpy_r_r9 = cpy_r_none;
    cpy_r_r10 = cpy_r_r8 + 16;
    *(PyObject * *)cpy_r_r10 = cpy_r_none;
    cpy_r_args = cpy_r_r6;
CPyL10: ;
    cpy_r_r11 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_native;
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "is_native", 743, CPyStatic_statement___globals);
        goto CPyL56;
    }
CPyL11: ;
    if (!cpy_r_r11) goto CPyL28;
CPyL12: ;
    cpy_r_r12 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "mgr_v", 744, CPyStatic_statement___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r12);
CPyL13: ;
    cpy_r_r13 = ((mypyc___ir___ops___ValueObject *)cpy_r_r12)->_type;
    cpy_r_r14 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_r13)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r17) {
        goto CPyL16;
    } else
        goto CPyL57;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 744, CPyStatic_statement___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r19 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 745, CPyStatic_statement___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 746, CPyStatic_statement___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r20);
CPyL18: ;
    cpy_r_r21 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "mgr", 746, CPyStatic_statement___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r21);
CPyL19: ;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = 2;
    cpy_r_r24 = CPyDef_builder___IRBuilder___read(cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 746, CPyStatic_statement___globals);
        goto CPyL58;
    }
    cpy_r_r25 = CPyStatics[756]; /* '__' */
    cpy_r_r26 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "al", 747, CPyStatic_statement___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27 = CPyStatics[8586]; /* 'exit__' */
    cpy_r_r28 = CPyStr_Build(3, cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 747, CPyStatic_statement___globals);
        goto CPyL60;
    }
    cpy_r_r29 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r29 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "line", 749, CPyStatic_statement___globals);
        goto CPyL61;
    }
    CPyTagged_INCREF(cpy_r_r29);
CPyL23: ;
    cpy_r_r30 = CPyStatic_rtypes___none_rprimitive;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL62;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"none_rprimitive\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 750, CPyStatic_statement___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_r19, cpy_r_r24, cpy_r_r28, cpy_r_args, cpy_r_r30, cpy_r_r29, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 745, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_exit_val = cpy_r_r34;
    goto CPyL46;
CPyL28: ;
    cpy_r_r35 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "exit_", 753, CPyStatic_statement___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r35);
CPyL29: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    CPy_DECREF(cpy_r_r35);
    if (cpy_r_r37) {
        goto CPyL32;
    } else
        goto CPyL63;
CPyL30: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 753, CPyStatic_statement___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r39 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 754, CPyStatic_statement___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r39);
CPyL33: ;
    cpy_r_r40 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 754, CPyStatic_statement___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r40);
CPyL34: ;
    cpy_r_r41 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "exit_", 754, CPyStatic_statement___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r41);
CPyL35: ;
    if (PyObject_TypeCheck(cpy_r_r41, CPyType_ops___Value))
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL10572;
    if (PyObject_TypeCheck(cpy_r_r41, CPyType_targets___AssignmentTarget))
        cpy_r_r42 = cpy_r_r41;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL10572;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals, "union[mypyc.ir.ops.Value, mypyc.irbuild.targets.AssignmentTarget]", cpy_r_r41);
    goto CPyL65;
__LL10572: ;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = 2;
    cpy_r_r45 = CPyDef_builder___IRBuilder___read(cpy_r_r40, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals);
        goto CPyL64;
    }
    cpy_r_r46 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 754, CPyStatic_statement___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r46);
CPyL38: ;
    cpy_r_r47 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "mgr", 754, CPyStatic_statement___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r47);
CPyL39: ;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = 2;
    cpy_r_r50 = CPyDef_builder___IRBuilder___read(cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals);
        goto CPyL66;
    }
    cpy_r_r51 = PyList_New(1);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals);
        goto CPyL68;
    }
    cpy_r_r52 = (CPyPtr)&((PyListObject *)cpy_r_r51)->ob_item;
    cpy_r_r53 = *(CPyPtr *)cpy_r_r52;
    *(PyObject * *)cpy_r_r53 = cpy_r_r50;
    cpy_r_r54 = PyNumber_Add(cpy_r_r51, cpy_r_args);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals, "list", cpy_r_r54);
        goto CPyL69;
    }
    cpy_r_r56 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r56 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "line", 754, CPyStatic_statement___globals);
        goto CPyL70;
    }
    CPyTagged_INCREF(cpy_r_r56);
CPyL44: ;
    cpy_r_r57 = NULL;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_builder___IRBuilder___py_call(cpy_r_r39, cpy_r_r45, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 754, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_exit_val = cpy_r_r59;
CPyL46: ;
    cpy_r_r60 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_async;
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "is_async", 756, CPyStatic_statement___globals);
        goto CPyL71;
    }
CPyL47: ;
    if (!cpy_r_r60) goto CPyL72;
CPyL48: ;
    cpy_r_r61 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "maybe_natively_call_exit", "transform_with_env", "builder", 757, CPyStatic_statement___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r61);
CPyL49: ;
    cpy_r_r62 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'transform_with_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r62);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 757, CPyStatic_statement___globals);
        goto CPyL73;
    }
CPyL50: ;
    cpy_r_r63 = CPyDef_statement___emit_await(cpy_r_r61, cpy_r_exit_val, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_exit_val);
    CPyTagged_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 757, CPyStatic_statement___globals);
        goto CPyL53;
    }
    return cpy_r_r63;
CPyL52: ;
    return cpy_r_exit_val;
CPyL53: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_none);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    goto CPyL53;
CPyL57: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_args);
    goto CPyL14;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r19);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r20);
    goto CPyL53;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r28);
    CPyTagged_DecRef(cpy_r_r29);
    goto CPyL24;
CPyL63: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_args);
    goto CPyL30;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL53;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    goto CPyL53;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r50);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    goto CPyL53;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r55);
    goto CPyL53;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_exit_val);
    goto CPyL53;
CPyL72: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL52;
CPyL73: ;
    CPy_DecRef(cpy_r_exit_val);
    CPy_DecRef(cpy_r_r61);
    goto CPyL53;
}

PyObject *CPyPy_statement___maybe_natively_call_exit_transform_with_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"exc_info", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_exc_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_exc_info)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char arg_exc_info;
    if (unlikely(!PyBool_Check(obj_exc_info))) {
        CPy_TypeError("bool", obj_exc_info); goto fail;
    } else
        arg_exc_info = obj_exc_info == Py_True;
    PyObject *retval = CPyDef_statement___maybe_natively_call_exit_transform_with_obj_____call__(arg___mypyc_self__, arg_exc_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "maybe_natively_call_exit", 736, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___try_body_transform_with_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___try_body_transform_with_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___try_body_transform_with_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___try_body_transform_with_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_try_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypyc___irbuild___statement___try_body_transform_with_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "try_body_transform_with_obj", "__mypyc_env__", 761, CPyStatic_statement___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "try_body", -1, CPyStatic_statement___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_try_body = cpy_r_r1;
    CPy_DECREF(cpy_r_try_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "target", 762, CPyStatic_statement___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r4) goto CPyL12;
    cpy_r_r5 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "builder", 763, CPyStatic_statement___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "builder", 763, CPyStatic_statement___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_target;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "target", 763, CPyStatic_statement___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r7);
CPyL7: ;
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "try_body", 763, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL18;
    }
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_r6, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 763, CPyStatic_statement___globals);
        goto CPyL17;
    }
    cpy_r_r12 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "value", 763, CPyStatic_statement___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "transform_with_env", "line", 763, CPyStatic_statement___globals);
        goto CPyL20;
    }
    CPyTagged_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___assign(cpy_r_r5, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 763, CPyStatic_statement___globals);
        goto CPyL16;
    }
CPyL12: ;
    cpy_r_r15 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_body;
    if (unlikely(cpy_r_r15 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'body' of 'transform_with_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r15);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 764, CPyStatic_statement___globals);
        goto CPyL15;
    }
CPyL13: ;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r15, 0, 0, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 764, CPyStatic_statement___globals);
        goto CPyL15;
    } else
        goto CPyL21;
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
CPyL21: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL14;
}

PyObject *CPyPy_statement___try_body_transform_with_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___try_body_transform_with_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 761, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___except_body_transform_with_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___except_body_transform_with_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___except_body_transform_with_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___except_body_transform_with_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_except_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_out_block;
    PyObject *cpy_r_reraise_block;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypyc___irbuild___statement___except_body_transform_with_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "except_body_transform_with_obj", "__mypyc_env__", 766, CPyStatic_statement___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "except_body", -1, CPyStatic_statement___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_except_body = cpy_r_r1;
    CPy_DECREF(cpy_r_except_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 767, CPyStatic_statement___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exc;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "exc", 767, CPyStatic_statement___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 767, CPyStatic_statement___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = CPyDef_builder___IRBuilder___false(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 767, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_r6 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "line", 767, CPyStatic_statement___globals);
        goto CPyL34;
    }
    CPyTagged_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPyDef_builder___IRBuilder___assign(cpy_r_r2, cpy_r_r3, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 767, CPyStatic_statement___globals);
        goto CPyL31;
    }
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPyDef_ops___BasicBlock(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 768, CPyStatic_statement___globals);
        goto CPyL31;
    }
    cpy_r_r10 = cpy_r_r9;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___BasicBlock(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 768, CPyStatic_statement___globals);
        goto CPyL35;
    }
    cpy_r_r13 = cpy_r_r12;
    cpy_r_out_block = cpy_r_r10;
    cpy_r_reraise_block = cpy_r_r13;
    cpy_r_r14 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 769, CPyStatic_statement___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r14);
CPyL11: ;
    cpy_r_r15 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "maybe_natively_call_exit", 769, CPyStatic_statement___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r15);
CPyL12: ;
    cpy_r_r16 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r17[1] = {cpy_r_r16};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = CPyStatics[10222]; /* ('exc_info',) */
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r18, 0, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 769, CPyStatic_statement___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_ops___Value)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "except_body", 769, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r20);
        goto CPyL37;
    }
    cpy_r_r22 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r14, cpy_r_r21, cpy_r_out_block, cpy_r_reraise_block);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 769, CPyStatic_statement___globals);
        goto CPyL36;
    }
    cpy_r_r23 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 770, CPyStatic_statement___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r23);
CPyL16: ;
    cpy_r_r24 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r23, cpy_r_reraise_block);
    CPy_DECREF(cpy_r_reraise_block);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 770, CPyStatic_statement___globals);
        goto CPyL38;
    }
    cpy_r_r25 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 771, CPyStatic_statement___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r25);
CPyL18: ;
    cpy_r_r26 = CPyStatic_statement___globals;
    cpy_r_r27 = CPyStatics[8380]; /* 'reraise_exception_op' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals);
        goto CPyL39;
    }
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals, "tuple", cpy_r_r28);
        goto CPyL39;
    }
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals);
        goto CPyL40;
    }
    cpy_r_r31 = CPyStatic_statement___globals;
    cpy_r_r32 = CPyStatics[7827]; /* 'NO_TRACEBACK_LINE_NO' */
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals);
        goto CPyL41;
    }
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("int", cpy_r_r33); cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals);
        goto CPyL41;
    }
    cpy_r_r35 = CPyDef_builder___IRBuilder___call_c(cpy_r_r25, cpy_r_r29, cpy_r_r30, cpy_r_r34);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 771, CPyStatic_statement___globals);
        goto CPyL38;
    } else
        goto CPyL42;
CPyL24: ;
    cpy_r_r36 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "transform_with_env", "builder", 772, CPyStatic_statement___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r36);
CPyL25: ;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = CPyDef_ops___Unreachable(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 772, CPyStatic_statement___globals);
        goto CPyL43;
    }
    cpy_r_r39 = CPyDef_builder___IRBuilder___add(cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 772, CPyStatic_statement___globals);
        goto CPyL38;
    } else
        goto CPyL44;
CPyL27: ;
    cpy_r_r40 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r40 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_with_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r40);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 773, CPyStatic_statement___globals);
        goto CPyL45;
    }
CPyL28: ;
    cpy_r_r41 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r40, cpy_r_out_block);
    CPy_DECREF(cpy_r_out_block);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 773, CPyStatic_statement___globals);
        goto CPyL30;
    }
    return 1;
CPyL30: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL30;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_reraise_block);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_reraise_block);
    CPy_DecRef(cpy_r_r14);
    goto CPyL30;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r25);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL30;
CPyL42: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL24;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_r36);
    goto CPyL30;
CPyL44: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL27;
CPyL45: ;
    CPy_DecRef(cpy_r_out_block);
    goto CPyL30;
}

PyObject *CPyPy_statement___except_body_transform_with_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___except_body_transform_with_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 766, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___finally_body_transform_with_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___finally_body_transform_with_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___finally_body_transform_with_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___finally_body_transform_with_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_finally_body;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_out_block;
    PyObject *cpy_r_exit_block;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = ((mypyc___irbuild___statement___finally_body_transform_with_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "finally_body_transform_with_obj", "__mypyc_env__", 775, CPyStatic_statement___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_finally_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "finally_body", -1, CPyStatic_statement___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_finally_body = cpy_r_r1;
    CPy_DECREF(cpy_r_finally_body);
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_ops___BasicBlock(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 776, CPyStatic_statement___globals);
        goto CPyL18;
    }
    cpy_r_r4 = cpy_r_r3;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___BasicBlock(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 776, CPyStatic_statement___globals);
        goto CPyL19;
    }
    cpy_r_r7 = cpy_r_r6;
    cpy_r_out_block = cpy_r_r4;
    cpy_r_exit_block = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "builder", 777, CPyStatic_statement___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r8);
CPyL5: ;
    cpy_r_r9 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "builder", 777, CPyStatic_statement___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exc;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "exc", 777, CPyStatic_statement___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_builder___IRBuilder___read(cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 777, CPyStatic_statement___globals);
        goto CPyL21;
    }
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_ops___Branch(cpy_r_r13, cpy_r_exit_block, cpy_r_out_block, 200, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 777, CPyStatic_statement___globals);
        goto CPyL21;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___add(cpy_r_r8, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 777, CPyStatic_statement___globals);
        goto CPyL20;
    } else
        goto CPyL23;
CPyL10: ;
    cpy_r_r18 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "builder", 778, CPyStatic_statement___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r18, cpy_r_exit_block);
    CPy_DECREF(cpy_r_exit_block);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 778, CPyStatic_statement___globals);
        goto CPyL24;
    }
    cpy_r_r20 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "finally_body", "transform_with_env", "maybe_natively_call_exit", 780, CPyStatic_statement___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r20);
CPyL13: ;
    cpy_r_r21 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r22[1] = {cpy_r_r21};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[10222]; /* ('exc_info',) */
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r23, 0, cpy_r_r24);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 780, CPyStatic_statement___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL14: ;
    cpy_r_r26 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r26 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'transform_with_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r26);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 781, CPyStatic_statement___globals);
        goto CPyL26;
    }
CPyL15: ;
    cpy_r_r27 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r26, cpy_r_out_block);
    CPy_DECREF(cpy_r_out_block);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 781, CPyStatic_statement___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_exit_block);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_r8);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    CPy_DecRef(cpy_r_exit_block);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_out_block);
    goto CPyL17;
CPyL25: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL14;
CPyL26: ;
    CPy_DecRef(cpy_r_out_block);
    goto CPyL17;
}

PyObject *CPyPy_statement___finally_body_transform_with_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___finally_body_transform_with_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "finally_body", 775, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__4_transform_with_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T3CCO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__4_transform_with_obj", "__mypyc_env__", 785, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "transform_with_env", "builder", 785, CPyStatic_statement___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "transform_with_env", "try_body", 785, CPyStatic_statement___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "transform_with_env", "except_body", 785, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4.f0 = 1;
    cpy_r_r4.f1 = 1;
    cpy_r_r4.f2 = cpy_r_r3;
    CPy_INCREF(cpy_r_r4.f2);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = PyList_New(1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 785, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_r6 = PyTuple_New(3);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10573 = Py_None;
    CPy_INCREF(__tmp10573);
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp10573);
    PyObject *__tmp10574 = Py_None;
    CPy_INCREF(__tmp10574);
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp10574);
    PyObject *__tmp10575 = cpy_r_r4.f2;
    PyTuple_SET_ITEM(cpy_r_r6, 2, __tmp10575);
    cpy_r_r7 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r8 = *(CPyPtr *)cpy_r_r7;
    *(PyObject * *)cpy_r_r8 = cpy_r_r6;
    cpy_r_r9 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'transform_with_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r9);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 785, CPyStatic_statement___globals);
        goto CPyL13;
    }
CPyL6: ;
    cpy_r_r10 = Py_None;
    cpy_r_r11 = CPyDef_statement___transform_try_except(cpy_r_r1, cpy_r_r2, cpy_r_r5, cpy_r_r10, cpy_r_r9);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 785, CPyStatic_statement___globals);
        goto CPyL8;
    }
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_statement_____mypyc_lambda__4_transform_with_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement_____mypyc_lambda__4_transform_with_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 785, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_with(PyObject *cpy_r_builder, PyObject *cpy_r_expr, PyObject *cpy_r_target, PyObject *cpy_r_body, char cpy_r_is_async, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    cpy_r_r0 = CPyDef_statement___transform_with_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_target);
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_target != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_target);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_target = cpy_r_target;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_body);
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_body);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_body = cpy_r_body;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL90;
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_async = cpy_r_is_async;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r6 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_async;
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "is_async", 719, CPyStatic_statement___globals);
        goto CPyL90;
    }
CPyL7: ;
    if (!cpy_r_r6) goto CPyL9;
CPyL8: ;
    cpy_r_r7 = CPyStatics[1446]; /* 'a' */
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL10;
CPyL9: ;
    cpy_r_r9 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_r8 = cpy_r_r9;
CPyL10: ;
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al = cpy_r_r8;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 719, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r11 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 721, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r11);
CPyL12: ;
    cpy_r_r12 = 2;
    cpy_r_r13 = CPyDef_builder___IRBuilder___accept(cpy_r_r11, cpy_r_expr, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 721, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_with", 721, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r13);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 721, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r16 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "mgr_v", 722, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r16);
CPyL16: ;
    cpy_r_r17 = ((mypyc___ir___ops___ValueObject *)cpy_r_r16)->_type;
    cpy_r_r18 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    CPy_DECREF(cpy_r_r16);
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_native = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 722, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r23 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_native;
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "is_native", 723, CPyStatic_statement___globals);
        goto CPyL90;
    }
CPyL18: ;
    if (!cpy_r_r23) goto CPyL29;
CPyL19: ;
    cpy_r_r24 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 724, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r24);
CPyL20: ;
    cpy_r_r25 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "mgr_v", 724, CPyStatic_statement___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r25);
CPyL21: ;
    cpy_r_r26 = CPyStatics[756]; /* '__' */
    cpy_r_r27 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "al", 724, CPyStatic_statement___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r27);
CPyL22: ;
    cpy_r_r28 = CPyStatics[8587]; /* 'enter__' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 724, CPyStatic_statement___globals);
        goto CPyL92;
    }
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 724, CPyStatic_statement___globals);
        goto CPyL93;
    }
    cpy_r_r31 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 724, CPyStatic_statement___globals);
        goto CPyL94;
    }
    CPyTagged_INCREF(cpy_r_r31);
CPyL25: ;
    cpy_r_r32 = CPyDef_ops___MethodCall(cpy_r_r25, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 724, CPyStatic_statement___globals);
        goto CPyL91;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_r24, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 724, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 724, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r35 = Py_None;
    CPy_INCREF(cpy_r_r35);
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_ = cpy_r_r35;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 725, CPyStatic_statement___globals);
        goto CPyL90;
    } else
        goto CPyL55;
CPyL29: ;
    cpy_r_r37 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 727, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r37);
CPyL30: ;
    cpy_r_r38 = CPyStatic_statement___globals;
    cpy_r_r39 = CPyStatics[8218]; /* 'type_op' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 727, CPyStatic_statement___globals);
        goto CPyL95;
    }
    if (likely(PyTuple_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_with", 727, CPyStatic_statement___globals, "tuple", cpy_r_r40);
        goto CPyL95;
    }
    cpy_r_r42 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "mgr_v", 727, CPyStatic_statement___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r42);
CPyL33: ;
    cpy_r_r43 = PyList_New(1);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 727, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r44 = (CPyPtr)&((PyListObject *)cpy_r_r43)->ob_item;
    cpy_r_r45 = *(CPyPtr *)cpy_r_r44;
    *(PyObject * *)cpy_r_r45 = cpy_r_r42;
    cpy_r_r46 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 727, CPyStatic_statement___globals);
        goto CPyL98;
    }
    CPyTagged_INCREF(cpy_r_r46);
CPyL35: ;
    cpy_r_r47 = CPyDef_builder___IRBuilder___call_c(cpy_r_r37, cpy_r_r41, cpy_r_r43, cpy_r_r46);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 727, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_typ = cpy_r_r47;
    cpy_r_r48 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 728, CPyStatic_statement___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r48);
CPyL37: ;
    cpy_r_r49 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 728, CPyStatic_statement___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r49);
CPyL38: ;
    cpy_r_r50 = CPyStatics[756]; /* '__' */
    cpy_r_r51 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "al", 728, CPyStatic_statement___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r51);
CPyL39: ;
    cpy_r_r52 = CPyStatics[8586]; /* 'exit__' */
    cpy_r_r53 = CPyStr_Build(3, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 728, CPyStatic_statement___globals);
        goto CPyL101;
    }
    cpy_r_r54 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 728, CPyStatic_statement___globals);
        goto CPyL102;
    }
    CPyTagged_INCREF(cpy_r_r54);
CPyL41: ;
    cpy_r_r55 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_r49, cpy_r_typ, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 728, CPyStatic_statement___globals);
        goto CPyL100;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_r48, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 728, CPyStatic_statement___globals);
        goto CPyL99;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exit_ = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 728, CPyStatic_statement___globals);
        goto CPyL99;
    }
    cpy_r_r58 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 729, CPyStatic_statement___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r58);
CPyL45: ;
    cpy_r_r59 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 729, CPyStatic_statement___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r59);
CPyL46: ;
    cpy_r_r60 = CPyStatics[756]; /* '__' */
    cpy_r_r61 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_al;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "al", 729, CPyStatic_statement___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r61);
CPyL47: ;
    cpy_r_r62 = CPyStatics[8587]; /* 'enter__' */
    cpy_r_r63 = CPyStr_Build(3, cpy_r_r60, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 729, CPyStatic_statement___globals);
        goto CPyL104;
    }
    cpy_r_r64 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r64 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 729, CPyStatic_statement___globals);
        goto CPyL105;
    }
    CPyTagged_INCREF(cpy_r_r64);
CPyL49: ;
    cpy_r_r65 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_r59, cpy_r_typ, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 729, CPyStatic_statement___globals);
        goto CPyL106;
    }
    cpy_r_r66 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "mgr_v", 729, CPyStatic_statement___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r66);
CPyL51: ;
    cpy_r_r67 = PyList_New(1);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 729, CPyStatic_statement___globals);
        goto CPyL108;
    }
    cpy_r_r68 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r69 = *(CPyPtr *)cpy_r_r68;
    *(PyObject * *)cpy_r_r69 = cpy_r_r66;
    cpy_r_r70 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 729, CPyStatic_statement___globals);
        goto CPyL109;
    }
    CPyTagged_INCREF(cpy_r_r70);
CPyL53: ;
    cpy_r_r71 = NULL;
    cpy_r_r72 = NULL;
    cpy_r_r73 = CPyDef_builder___IRBuilder___py_call(cpy_r_r58, cpy_r_r65, cpy_r_r67, cpy_r_r70, cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r67);
    CPyTagged_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 729, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value = cpy_r_r73;
    cpy_r_r74 = 1;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 729, CPyStatic_statement___globals);
        goto CPyL90;
    }
CPyL55: ;
    cpy_r_r75 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 731, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r75);
CPyL56: ;
    cpy_r_r76 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr_v;
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "mgr_v", 731, CPyStatic_statement___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r76);
CPyL57: ;
    cpy_r_r77 = CPyDef_builder___IRBuilder___maybe_spill(cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 731, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_mgr = cpy_r_r77;
    cpy_r_r78 = 1;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 731, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r79 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 732, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r79);
CPyL60: ;
    cpy_r_r80 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 732, CPyStatic_statement___globals);
        goto CPyL111;
    }
    CPy_INCREF(cpy_r_r80);
CPyL61: ;
    cpy_r_r81 = CPyDef_builder___IRBuilder___true(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 732, CPyStatic_statement___globals);
        goto CPyL111;
    }
    cpy_r_r82 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_r79, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 732, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exc != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exc);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_exc = cpy_r_r82;
    cpy_r_r83 = 1;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 732, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r84 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_is_async;
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "is_async", 733, CPyStatic_statement___globals);
        goto CPyL90;
    }
CPyL65: ;
    if (!cpy_r_r84) goto CPyL71;
CPyL66: ;
    cpy_r_r85 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 734, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r85);
CPyL67: ;
    cpy_r_r86 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "value", 734, CPyStatic_statement___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r86);
CPyL68: ;
    cpy_r_r87 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r87 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "line", 734, CPyStatic_statement___globals);
        goto CPyL113;
    }
    CPyTagged_INCREF(cpy_r_r87);
CPyL69: ;
    cpy_r_r88 = CPyDef_statement___emit_await(cpy_r_r85, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r86);
    CPyTagged_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 734, CPyStatic_statement___globals);
        goto CPyL90;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_value = cpy_r_r88;
    cpy_r_r89 = 1;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 734, CPyStatic_statement___globals);
        goto CPyL90;
    }
CPyL71: ;
    cpy_r_r90 = CPyDef_statement___maybe_natively_call_exit_transform_with_obj();
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 736, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *)cpy_r_r90)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *)cpy_r_r90)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___maybe_natively_call_exit_transform_with_objObject *)cpy_r_r90)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r91 = 1;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 736, CPyStatic_statement___globals);
        goto CPyL114;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_maybe_natively_call_exit = cpy_r_r90;
    cpy_r_r92 = 1;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 736, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r93 = CPyDef_statement___try_body_transform_with_obj();
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 761, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___try_body_transform_with_objObject *)cpy_r_r93)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___try_body_transform_with_objObject *)cpy_r_r93)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___try_body_transform_with_objObject *)cpy_r_r93)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r94 = 1;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 761, CPyStatic_statement___globals);
        goto CPyL115;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_try_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_try_body);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_try_body = cpy_r_r93;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 761, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r96 = CPyDef_statement___except_body_transform_with_obj();
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 766, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___except_body_transform_with_objObject *)cpy_r_r96)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___except_body_transform_with_objObject *)cpy_r_r96)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___except_body_transform_with_objObject *)cpy_r_r96)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r97 = 1;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 766, CPyStatic_statement___globals);
        goto CPyL116;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_except_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_except_body);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_except_body = cpy_r_r96;
    cpy_r_r98 = 1;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 766, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r99 = CPyDef_statement___finally_body_transform_with_obj();
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 775, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___finally_body_transform_with_objObject *)cpy_r_r99)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___finally_body_transform_with_objObject *)cpy_r_r99)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___finally_body_transform_with_objObject *)cpy_r_r99)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r100 = 1;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 775, CPyStatic_statement___globals);
        goto CPyL117;
    }
    if (((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_finally_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_finally_body);
    }
    ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_finally_body = cpy_r_r99;
    cpy_r_r101 = 1;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 775, CPyStatic_statement___globals);
        goto CPyL90;
    }
    cpy_r_r102 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "transform_with", "transform_with_env", "builder", 784, CPyStatic_statement___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r102);
CPyL84: ;
    cpy_r_r103 = CPyDef_statement_____mypyc_lambda__4_transform_with_obj();
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 785, CPyStatic_statement___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *)cpy_r_r103)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *)cpy_r_r103)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__4_transform_with_objObject *)cpy_r_r103)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r104 = 1;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 785, CPyStatic_statement___globals);
        goto CPyL119;
    }
    cpy_r_r105 = ((mypyc___irbuild___statement___transform_with_envObject *)cpy_r_r0)->_finally_body;
    if (unlikely(cpy_r_r105 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'finally_body' of 'transform_with_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r105);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 786, CPyStatic_statement___globals);
        goto CPyL120;
    }
CPyL87: ;
    cpy_r_r106 = CPyDef_statement___transform_try_finally_stmt(cpy_r_r102, cpy_r_r103, cpy_r_r105);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 783, CPyStatic_statement___globals);
        goto CPyL89;
    }
    return 1;
CPyL89: ;
    cpy_r_r107 = 2;
    return cpy_r_r107;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL89;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    goto CPyL89;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL89;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    goto CPyL89;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL89;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r37);
    goto CPyL89;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    goto CPyL89;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL89;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL89;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    goto CPyL89;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r48);
    goto CPyL89;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    goto CPyL89;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r53);
    goto CPyL89;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r58);
    goto CPyL89;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    goto CPyL89;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r63);
    goto CPyL89;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    goto CPyL89;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r65);
    goto CPyL89;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    goto CPyL89;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r67);
    goto CPyL89;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r75);
    goto CPyL89;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r79);
    goto CPyL89;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r85);
    goto CPyL89;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL89;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r90);
    goto CPyL89;
CPyL115: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r93);
    goto CPyL89;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r96);
    goto CPyL89;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r99);
    goto CPyL89;
CPyL118: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r102);
    goto CPyL89;
CPyL119: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    goto CPyL89;
CPyL120: ;
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r103);
    goto CPyL89;
}

PyObject *CPyPy_statement___transform_with(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", "target", "body", "is_async", "line", 0};
    static CPyArg_Parser parser = {"OOOOOO:transform_with", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    PyObject *obj_target;
    PyObject *obj_body;
    PyObject *obj_is_async;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr, &obj_target, &obj_body, &obj_is_async, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_target;
    if (PyObject_TypeCheck(obj_target, CPyType_nodes___Expression))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL10576;
    if (obj_target == Py_None)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL10576;
    CPy_TypeError("mypy.nodes.Expression or None", obj_target); 
    goto fail;
__LL10576: ;
    PyObject *arg_body = obj_body;
    char arg_is_async;
    if (unlikely(!PyBool_Check(obj_is_async))) {
        CPy_TypeError("bool", obj_is_async); goto fail;
    } else
        arg_is_async = obj_is_async == Py_True;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_statement___transform_with(arg_builder, arg_expr, arg_target, arg_body, arg_is_async, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with", 706, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "__mypyc_lambda__5_transform_with_stmt_generate_obj", "__mypyc_env__", 797, CPyStatic_statement___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "<lambda>", "generate_transform_with_stmt_env", "__mypyc_env__", 797, CPyStatic_statement___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r0)->_i;
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'i' of 'generate_transform_with_stmt_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 797, CPyStatic_statement___globals);
        goto CPyL9;
    }
CPyL3: ;
    cpy_r_r3 = CPyTagged_Add(cpy_r_r2, 2);
    CPyTagged_DECREF(cpy_r_r2);
    cpy_r_r4 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r1)->_generate;
    if (unlikely(cpy_r_r4 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'generate' of 'transform_with_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r4);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 797, CPyStatic_statement___globals);
        goto CPyL10;
    }
CPyL4: ;
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_r3);
    PyObject *cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 797, CPyStatic_statement___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 != Py_None)) {
        CPy_TypeError("None", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = 1;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 797, CPyStatic_statement___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL7;
CPyL10: ;
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL11: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "<lambda>", 797, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___generate_transform_with_stmt_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___generate_transform_with_stmt_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___generate_transform_with_stmt_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___generate_transform_with_stmt_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_i) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_generate;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypyc___irbuild___statement___generate_transform_with_stmt_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "generate_transform_with_stmt_obj", "__mypyc_env__", 792, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_generate;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "generate", -1, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_generate = cpy_r_r1;
    CPy_DECREF(cpy_r_generate);
    cpy_r_r2 = CPyDef_statement___generate_transform_with_stmt_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 792, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 792, CPyStatic_statement___globals);
        goto CPyL30;
    }
    CPyTagged_INCREF(cpy_r_i);
    if (((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i);
    }
    ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i = cpy_r_i;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 792, CPyStatic_statement___globals);
        goto CPyL30;
    }
    cpy_r_r5 = ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "generate_transform_with_stmt_env", "i", 793, CPyStatic_statement___globals);
        goto CPyL30;
    }
    CPyTagged_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "o", 793, CPyStatic_statement___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___nodes___WithStmtObject *)cpy_r_r6)->_expr;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = cpy_r_r5 & 1;
    cpy_r_r12 = cpy_r_r11 != 0;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r5);
    if (cpy_r_r13) {
        goto CPyL13;
    } else
        goto CPyL32;
CPyL9: ;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)cpy_r_r10;
    CPyTagged_DECREF(cpy_r_r5);
    if (cpy_r_r14) {
        goto CPyL32;
    } else
        goto CPyL13;
CPyL10: ;
    cpy_r_r15 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "builder", 794, CPyStatic_statement___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r15);
CPyL11: ;
    cpy_r_r16 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r16 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'o' of 'transform_with_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r16);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 794, CPyStatic_statement___globals);
        goto CPyL33;
    }
CPyL12: ;
    cpy_r_r17 = ((mypy___nodes___WithStmtObject *)cpy_r_r16)->_body;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = 2;
    cpy_r_r19 = CPyDef_builder___IRBuilder___accept(cpy_r_r15, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 794, CPyStatic_statement___globals);
        goto CPyL28;
    } else
        goto CPyL34;
CPyL13: ;
    cpy_r_r20 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "builder", 797, CPyStatic_statement___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r20);
CPyL14: ;
    cpy_r_r21 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "o", 797, CPyStatic_statement___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r21);
CPyL15: ;
    cpy_r_r22 = ((mypy___nodes___WithStmtObject *)cpy_r_r21)->_expr;
    cpy_r_r23 = ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "generate_transform_with_stmt_env", "i", 797, CPyStatic_statement___globals);
        goto CPyL36;
    }
    CPyTagged_INCREF(cpy_r_r23);
CPyL16: ;
    cpy_r_r24 = CPyList_GetItem(cpy_r_r22, cpy_r_r23);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals);
        goto CPyL36;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_nodes___Expression)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r24);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r21);
    cpy_r_r26 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "o", 797, CPyStatic_statement___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r26);
CPyL19: ;
    cpy_r_r27 = ((mypy___nodes___WithStmtObject *)cpy_r_r26)->_target;
    cpy_r_r28 = ((mypyc___irbuild___statement___generate_transform_with_stmt_envObject *)cpy_r_r2)->_i;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "generate_transform_with_stmt_env", "i", 797, CPyStatic_statement___globals);
        goto CPyL38;
    }
    CPyTagged_INCREF(cpy_r_r28);
CPyL20: ;
    cpy_r_r29 = CPyList_GetItem(cpy_r_r27, cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals);
        goto CPyL38;
    }
    if (PyObject_TypeCheck(cpy_r_r29, CPyType_nodes___Expression))
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL10577;
    if (cpy_r_r29 == Py_None)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL10577;
    CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals, "mypy.nodes.Expression or None", cpy_r_r29);
    goto CPyL38;
__LL10577: ;
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = CPyDef_statement_____mypyc_lambda__5_transform_with_stmt_generate_obj();
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals);
        goto CPyL39;
    }
    if (((mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *)cpy_r_r31)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *)cpy_r_r31)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement_____mypyc_lambda__5_transform_with_stmt_generate_objObject *)cpy_r_r31)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals);
        goto CPyL40;
    }
    cpy_r_r33 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "generate", "transform_with_stmt_env", "o", 797, CPyStatic_statement___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r33);
CPyL25: ;
    cpy_r_r34 = ((mypy___nodes___WithStmtObject *)cpy_r_r33)->_is_async;
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o;
    if (unlikely(cpy_r_r35 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'o' of 'transform_with_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r35);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 797, CPyStatic_statement___globals);
        goto CPyL41;
    }
CPyL26: ;
    cpy_r_r36 = ((mypy___nodes___WithStmtObject *)cpy_r_r35)->_line;
    CPyTagged_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = CPyDef_statement___transform_with(cpy_r_r20, cpy_r_r25, cpy_r_r30, cpy_r_r31, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 796, CPyStatic_statement___globals);
        goto CPyL28;
    }
CPyL27: ;
    return 1;
CPyL28: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL33: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL28;
CPyL34: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r20);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    goto CPyL28;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r26);
    goto CPyL28;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    goto CPyL28;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL28;
CPyL41: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL28;
}

PyObject *CPyPy_statement___generate_transform_with_stmt_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"i", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_i;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_i)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_i;
    if (likely(PyLong_Check(obj_i)))
        arg_i = CPyTagged_BorrowFromObject(obj_i);
    else {
        CPy_TypeError("int", obj_i); goto fail;
    }
    char retval = CPyDef_statement___generate_transform_with_stmt_obj_____call__(arg___mypyc_self__, arg_i);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "generate", 792, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_with_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyDef_statement___transform_with_stmt_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 790, CPyStatic_statement___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 790, CPyStatic_statement___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_o);
    if (((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o);
    }
    ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_o = cpy_r_o;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 790, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_r3 = CPyDef_statement___generate_transform_with_stmt_obj();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 792, CPyStatic_statement___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___generate_transform_with_stmt_objObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___generate_transform_with_stmt_objObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___generate_transform_with_stmt_objObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 792, CPyStatic_statement___globals);
        goto CPyL11;
    }
    if (((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_generate != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_generate);
    }
    ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_generate = cpy_r_r3;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 792, CPyStatic_statement___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypyc___irbuild___statement___transform_with_stmt_envObject *)cpy_r_r0)->_generate;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'generate' of 'transform_with_stmt_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 800, CPyStatic_statement___globals);
        goto CPyL9;
    }
CPyL7: ;
    cpy_r_r7 = CPyStatics[9015]; /* 0 */
    PyObject *cpy_r_r8[1] = {cpy_r_r7};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 800, CPyStatic_statement___globals);
        goto CPyL9;
    } else
        goto CPyL12;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL8;
}

PyObject *CPyPy_statement___transform_with_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_with_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___WithStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.WithStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_with_stmt(arg_builder, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_with_stmt", 790, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_assert_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_a) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_cond;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_ok_block;
    PyObject *cpy_r_error_block;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_exc_type;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_exc;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_options;
    cpy_r_r1 = ((mypyc___options___CompilerOptionsObject *)cpy_r_r0)->_strip_asserts;
    if (!cpy_r_r1) goto CPyL2;
CPyL1: ;
    return 1;
CPyL2: ;
    cpy_r_r2 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_expr;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 806, CPyStatic_statement___globals);
        goto CPyL29;
    }
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 806, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL29;
    }
    cpy_r_cond = cpy_r_r5;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___BasicBlock(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 807, CPyStatic_statement___globals);
        goto CPyL30;
    }
    cpy_r_r8 = cpy_r_r7;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_ops___BasicBlock(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 807, CPyStatic_statement___globals);
        goto CPyL31;
    }
    cpy_r_r11 = cpy_r_r10;
    cpy_r_ok_block = cpy_r_r8;
    cpy_r_error_block = cpy_r_r11;
    cpy_r_r12 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_cond, cpy_r_ok_block, cpy_r_error_block);
    CPy_DECREF(cpy_r_cond);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 808, CPyStatic_statement___globals);
        goto CPyL32;
    }
    cpy_r_r13 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_error_block);
    CPy_DECREF(cpy_r_error_block);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 809, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_r14 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_msg;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_r14 == cpy_r_r15;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r18 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_line;
    CPyTagged_INCREF(cpy_r_r18);
    cpy_r_r19 = Py_None;
    cpy_r_r20 = CPyDef_ops___RaiseStandardError(cpy_r_r17, cpy_r_r19, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 812, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_r21 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 812, CPyStatic_statement___globals);
        goto CPyL33;
    } else
        goto CPyL34;
CPyL11: ;
    cpy_r_r22 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_msg;
    cpy_r_r23 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL15;
    cpy_r_r27 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r28 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_msg;
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___StrExpr))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 815, CPyStatic_statement___globals, "mypy.nodes.StrExpr", cpy_r_r28);
        goto CPyL33;
    }
    cpy_r_r30 = ((mypy___nodes___StrExprObject *)cpy_r_r29)->_value;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_line;
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_ops___RaiseStandardError(cpy_r_r27, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 815, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 815, CPyStatic_statement___globals);
        goto CPyL33;
    } else
        goto CPyL35;
CPyL15: ;
    cpy_r_r34 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_msg;
    CPy_INCREF(cpy_r_r34);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 818, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r34);
        goto CPyL33;
    }
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 818, CPyStatic_statement___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 818, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r37);
        goto CPyL33;
    }
    cpy_r_message = cpy_r_r38;
    cpy_r_r39 = CPyStatics[8588]; /* 'builtins.AssertionError' */
    cpy_r_r40 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r39, cpy_r_r40);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 819, CPyStatic_statement___globals);
        goto CPyL36;
    }
    cpy_r_exc_type = cpy_r_r41;
    cpy_r_r42 = PyList_New(1);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 820, CPyStatic_statement___globals);
        goto CPyL37;
    }
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    *(PyObject * *)cpy_r_r44 = cpy_r_message;
    cpy_r_r45 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_line;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_r46 = NULL;
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_exc_type, cpy_r_r42, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_exc_type);
    CPy_DECREF(cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 820, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_exc = cpy_r_r48;
    cpy_r_r49 = CPyStatic_statement___globals;
    cpy_r_r50 = CPyStatics[8582]; /* 'raise_exception_op' */
    cpy_r_r51 = CPyDict_GetItem(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 821, CPyStatic_statement___globals);
        goto CPyL38;
    }
    if (likely(PyTuple_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 821, CPyStatic_statement___globals, "tuple", cpy_r_r51);
        goto CPyL38;
    }
    cpy_r_r53 = PyList_New(1);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 821, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r54 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r55 = *(CPyPtr *)cpy_r_r54;
    *(PyObject * *)cpy_r_r55 = cpy_r_exc;
    cpy_r_r56 = ((mypy___nodes___AssertStmtObject *)cpy_r_a)->_line;
    CPyTagged_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r52, cpy_r_r53, cpy_r_r56);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 821, CPyStatic_statement___globals);
        goto CPyL33;
    } else
        goto CPyL40;
CPyL25: ;
    cpy_r_r58 = CPY_INT_TAG;
    cpy_r_r59 = CPyDef_ops___Unreachable(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 822, CPyStatic_statement___globals);
        goto CPyL33;
    }
    cpy_r_r60 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 822, CPyStatic_statement___globals);
        goto CPyL33;
    } else
        goto CPyL41;
CPyL27: ;
    cpy_r_r61 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_ok_block);
    CPy_DECREF(cpy_r_ok_block);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 823, CPyStatic_statement___globals);
        goto CPyL29;
    }
    return 1;
CPyL29: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL30: ;
    CPy_DecRef(cpy_r_cond);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_cond);
    CPy_DecRef(cpy_r_r8);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_error_block);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_ok_block);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL25;
CPyL35: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_message);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_exc_type);
    goto CPyL29;
CPyL38: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_exc);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_ok_block);
    CPy_DecRef(cpy_r_exc);
    CPy_DecRef(cpy_r_r52);
    goto CPyL29;
CPyL40: ;
    CPy_DECREF(cpy_r_r57);
    goto CPyL25;
CPyL41: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL27;
}

PyObject *CPyPy_statement___transform_assert_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "a", 0};
    static CPyArg_Parser parser = {"OO:transform_assert_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_a;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_a)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_a;
    if (likely(Py_TYPE(obj_a) == CPyType_nodes___AssertStmt))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypy.nodes.AssertStmt", obj_a); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_assert_stmt(arg_builder, arg_a);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_assert_stmt", 803, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_del_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___DelStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = 2;
    cpy_r_r3 = CPyDef_builder___IRBuilder___get_assignment_target(cpy_r_builder, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_stmt", 827, CPyStatic_statement___globals);
        goto CPyL3;
    }
    cpy_r_r4 = ((mypy___nodes___DelStmtObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_statement___transform_del_item(cpy_r_builder, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_stmt", 827, CPyStatic_statement___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_statement___transform_del_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_del_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___DelStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.DelStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_del_stmt(arg_builder, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_stmt", 826, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_del_item(PyObject *cpy_r_builder, PyObject *cpy_r_target, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_cl;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyPtr cpy_r_r77;
    int64_t cpy_r_r78;
    CPyTagged cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_subtarget;
    char cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    cpy_r_r0 = (PyObject *)CPyType_targets___AssignmentTargetIndex;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL5;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r4 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 833, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r5 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r4)->_base;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[827]; /* '__delitem__' */
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetIndex))
        cpy_r_r7 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 833, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetIndex", cpy_r_target);
        goto CPyL40;
    }
    cpy_r_r8 = ((mypyc___irbuild___targets___AssignmentTargetIndexObject *)cpy_r_r7)->_index;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 833, CPyStatic_statement___globals);
        goto CPyL41;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    *(PyObject * *)cpy_r_r11 = cpy_r_r8;
    cpy_r_r12 = Py_None;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_r5, cpy_r_r6, cpy_r_r9, cpy_r_r12, cpy_r_line, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 832, CPyStatic_statement___globals);
        goto CPyL39;
    } else
        goto CPyL42;
CPyL5: ;
    cpy_r_r16 = (PyObject *)CPyType_targets___AssignmentTargetAttr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL24;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r20 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 836, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r21 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r20)->_obj_type;
    cpy_r_r22 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL17;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r26 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 837, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r27 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r26)->_obj_type;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_rtypes___RInstance))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 837, CPyStatic_statement___globals, "mypyc.ir.rtypes.RInstance", cpy_r_r27);
        goto CPyL39;
    }
    cpy_r_r29 = ((mypyc___ir___rtypes___RInstanceObject *)cpy_r_r28)->_class_ir;
    CPy_INCREF(cpy_r_r29);
    cpy_r_cl = cpy_r_r29;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r30 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 838, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL43;
    }
    cpy_r_r31 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r30)->_attr;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_class_ir___ClassIR___is_deletable(cpy_r_cl, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_cl);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 838, CPyStatic_statement___globals);
        goto CPyL39;
    }
    if (cpy_r_r32) goto CPyL17;
    cpy_r_r33 = CPyStatics[178]; /* '"' */
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r34 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 839, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r35 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r34)->_attr;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyStatics[3607]; /* '" cannot be deleted' */
    cpy_r_r37 = CPyStr_Build(3, cpy_r_r33, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 839, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r38 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r37, cpy_r_line);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 839, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r39 = CPyStatics[8589]; /* ('Using "__deletable__ = [\'<attr>\']" in the class '
                                     'body enables "del obj.<attr>"') */
    cpy_r_r40 = CPyDef_builder___IRBuilder___note(cpy_r_builder, cpy_r_r39, cpy_r_line);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 840, CPyStatic_statement___globals);
        goto CPyL39;
    }
CPyL17: ;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r41 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 845, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r42 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r41)->_attr;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 845, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_key = cpy_r_r43;
    cpy_r_r44 = CPyStatic_statement___globals;
    cpy_r_r45 = CPyStatics[8590]; /* 'py_delattr_op' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 846, CPyStatic_statement___globals);
        goto CPyL44;
    }
    if (likely(PyTuple_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 846, CPyStatic_statement___globals, "tuple", cpy_r_r46);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r48 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 846, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_target);
        goto CPyL45;
    }
    cpy_r_r49 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r48)->_obj;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r50 = PyList_New(2);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 846, CPyStatic_statement___globals);
        goto CPyL46;
    }
    cpy_r_r51 = (CPyPtr)&((PyListObject *)cpy_r_r50)->ob_item;
    cpy_r_r52 = *(CPyPtr *)cpy_r_r51;
    *(PyObject * *)cpy_r_r52 = cpy_r_r49;
    cpy_r_r53 = cpy_r_r52 + 8;
    *(PyObject * *)cpy_r_r53 = cpy_r_key;
    cpy_r_r54 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r47, cpy_r_r50, cpy_r_line);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 846, CPyStatic_statement___globals);
        goto CPyL39;
    } else
        goto CPyL47;
CPyL24: ;
    cpy_r_r55 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r59 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 851, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r60 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r59)->_register;
    CPy_INCREF(cpy_r_r60);
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r61 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 851, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_target);
        goto CPyL48;
    }
    cpy_r_r62 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r61)->_type;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = 2;
    cpy_r_r65 = CPyDef_ops___LoadErrorValue(cpy_r_r62, cpy_r_r63, cpy_r_r64, 1);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 851, CPyStatic_statement___globals);
        goto CPyL48;
    }
    cpy_r_r66 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 851, CPyStatic_statement___globals);
        goto CPyL48;
    }
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = CPyDef_ops___Assign(cpy_r_r60, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 851, CPyStatic_statement___globals);
        goto CPyL39;
    }
    cpy_r_r69 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 850, CPyStatic_statement___globals);
        goto CPyL39;
    } else
        goto CPyL49;
CPyL31: ;
    cpy_r_r70 = (PyObject *)CPyType_targets___AssignmentTargetTuple;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_target)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (!cpy_r_r73) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_target) == CPyType_targets___AssignmentTargetTuple))
        cpy_r_r74 = cpy_r_target;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 854, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTargetTuple", cpy_r_target);
        goto CPyL39;
    }
    cpy_r_r75 = ((mypyc___irbuild___targets___AssignmentTargetTupleObject *)cpy_r_r74)->_items;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = 0;
CPyL34: ;
    cpy_r_r77 = (CPyPtr)&((PyVarObject *)cpy_r_r75)->ob_size;
    cpy_r_r78 = *(int64_t *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 << 1;
    cpy_r_r80 = (Py_ssize_t)cpy_r_r76 < (Py_ssize_t)cpy_r_r79;
    if (!cpy_r_r80) goto CPyL50;
    cpy_r_r81 = CPyList_GetItemUnsafe(cpy_r_r75, cpy_r_r76);
    if (likely(PyObject_TypeCheck(cpy_r_r81, CPyType_targets___AssignmentTarget)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_del_item", 854, CPyStatic_statement___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r81);
        goto CPyL51;
    }
    cpy_r_subtarget = cpy_r_r82;
    cpy_r_r83 = CPyDef_statement___transform_del_item(cpy_r_builder, cpy_r_subtarget, cpy_r_line);
    CPy_DECREF(cpy_r_subtarget);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 855, CPyStatic_statement___globals);
        goto CPyL51;
    }
    cpy_r_r84 = cpy_r_r76 + 2;
    cpy_r_r76 = cpy_r_r84;
    goto CPyL34;
CPyL38: ;
    return 1;
CPyL39: ;
    cpy_r_r85 = 2;
    return cpy_r_r85;
CPyL40: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL39;
CPyL41: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL39;
CPyL42: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_cl);
    goto CPyL39;
CPyL44: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL39;
CPyL45: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r47);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    goto CPyL39;
CPyL47: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL39;
CPyL49: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL38;
CPyL50: ;
    CPy_DECREF(cpy_r_r75);
    goto CPyL38;
CPyL51: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL39;
}

PyObject *CPyPy_statement___transform_del_item(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "target", "line", 0};
    static CPyArg_Parser parser = {"OOO:transform_del_item", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_target;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_target, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_targets___AssignmentTarget)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTarget", obj_target); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_statement___transform_del_item(arg_builder, arg_target, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_del_item", 830, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___emit_yield(PyObject *cpy_r_builder, PyObject *cpy_r_val, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_cls;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_next_block;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_next_label;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 864, CPyStatic_statement___globals);
        goto CPyL18;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_rtypes___RType)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield", 864, CPyStatic_statement___globals, "mypyc.ir.rtypes.RType", cpy_r_r1);
        goto CPyL18;
    }
    cpy_r_r3 = 2;
    cpy_r_r4 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_val, cpy_r_r2, cpy_r_line, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 864, CPyStatic_statement___globals);
        goto CPyL18;
    }
    cpy_r_retval = cpy_r_r4;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_r5, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 866, CPyStatic_statement___globals);
        goto CPyL19;
    }
CPyL4: ;
    cpy_r_cls = cpy_r_r6;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_ops___BasicBlock(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 870, CPyStatic_statement___globals);
        goto CPyL20;
    }
    cpy_r_next_block = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_continuation_blocks;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_next_label = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_continuation_blocks;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyList_Append(cpy_r_r13, cpy_r_next_block);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 872, CPyStatic_statement___globals);
        goto CPyL21;
    }
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_cls, CPyType_context___GeneratorClass, 10, mypyc___irbuild___context___GeneratorClassObject, PyObject *); /* next_label_target */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 873, CPyStatic_statement___globals);
        goto CPyL21;
    }
CPyL7: ;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___Integer(cpy_r_next_label, cpy_r_r17, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_next_label);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 873, CPyStatic_statement___globals);
        goto CPyL22;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r16, cpy_r_r19, cpy_r_line);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 873, CPyStatic_statement___globals);
        goto CPyL23;
    }
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___Return(cpy_r_retval, cpy_r_r21);
    CPy_DECREF(cpy_r_retval);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 874, CPyStatic_statement___globals);
        goto CPyL24;
    }
    cpy_r_r23 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 874, CPyStatic_statement___globals);
        goto CPyL24;
    } else
        goto CPyL25;
CPyL11: ;
    cpy_r_r24 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_next_block);
    CPy_DECREF(cpy_r_next_block);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 875, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r25 = CPyDef_generator___add_raise_exception_blocks_to_generator_class(cpy_r_builder, cpy_r_line);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 877, CPyStatic_statement___globals);
        goto CPyL26;
    }
    cpy_r_r26 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_send_arg_reg;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL16;
    } else
        goto CPyL27;
CPyL14: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 879, CPyStatic_statement___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r30 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_cls)->_send_arg_reg;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_cls);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield", 880, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r30);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DecRef(cpy_r_retval);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_retval);
    CPy_DecRef(cpy_r_cls);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_retval);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_next_block);
    CPyTagged_DecRef(cpy_r_next_label);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_retval);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_next_block);
    CPy_DecRef(cpy_r_r16);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_retval);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_next_block);
    goto CPyL18;
CPyL25: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL11;
CPyL26: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL18;
CPyL27: ;
    CPy_DECREF(cpy_r_cls);
    goto CPyL14;
}

PyObject *CPyPy_statement___emit_yield(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "val", "line", 0};
    static CPyArg_Parser parser = {"OOO:emit_yield", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_val;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_val, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_val;
    if (likely(PyObject_TypeCheck(obj_val, CPyType_ops___Value)))
        arg_val = obj_val;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_val); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_statement___emit_yield(arg_builder, arg_val, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield", 863, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___try_body_emit_yield_from_or_await_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___try_body_emit_yield_from_or_await_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___try_body_emit_yield_from_or_await_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___try_body_emit_yield_from_or_await_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_try_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "try_body_emit_yield_from_or_await_obj", "__mypyc_env__", 915, CPyStatic_statement___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "try_body", -1, CPyStatic_statement___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_try_body = cpy_r_r1;
    CPy_DECREF(cpy_r_try_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "builder", 916, CPyStatic_statement___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_received_reg;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "received_reg", 916, CPyStatic_statement___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "builder", 916, CPyStatic_statement___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "builder", 916, CPyStatic_statement___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "to_yield_reg", 916, CPyStatic_statement___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___read(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 916, CPyStatic_statement___globals);
        goto CPyL17;
    }
    cpy_r_r10 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "try_body", "emit_yield_from_or_await_env", "line", 916, CPyStatic_statement___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = CPyDef_statement___emit_yield(cpy_r_r4, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 916, CPyStatic_statement___globals);
        goto CPyL16;
    }
    cpy_r_r12 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'emit_yield_from_or_await_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r12);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 916, CPyStatic_statement___globals);
        goto CPyL20;
    }
CPyL11: ;
    cpy_r_r13 = CPyDef_builder___IRBuilder___assign(cpy_r_r2, cpy_r_r3, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 916, CPyStatic_statement___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
}

PyObject *CPyPy_statement___try_body_emit_yield_from_or_await_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___try_body_emit_yield_from_or_await_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "try_body", 915, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___except_body_emit_yield_from_or_await_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___except_body_emit_yield_from_or_await_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___except_body_emit_yield_from_or_await_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___except_body_emit_yield_from_or_await_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_except_body;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_val;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_val_address;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_to_stop;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_ok;
    PyObject *cpy_r_stop;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    cpy_r_r0 = ((mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "except_body_emit_yield_from_or_await_obj", "__mypyc_env__", 918, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "except_body", -1, CPyStatic_statement___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_except_body = cpy_r_r1;
    CPy_DECREF(cpy_r_except_body);
    cpy_r_r2 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 922, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = NULL;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPY_INT_TAG;
    cpy_r_r7 = CPyDef_ops___Register(cpy_r_r2, cpy_r_r4, cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 922, CPyStatic_statement___globals);
        goto CPyL52;
    }
    cpy_r_val = cpy_r_r7;
    cpy_r_r8 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 923, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPyStatic_rtypes___object_pointer_rprimitive;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_pointer_rprimitive\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 923, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_ops___LoadAddress(cpy_r_r9, cpy_r_val, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 923, CPyStatic_statement___globals);
        goto CPyL56;
    }
    cpy_r_r13 = CPyDef_builder___IRBuilder___add(cpy_r_r8, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 923, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_val_address = cpy_r_r13;
    cpy_r_r14 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 924, CPyStatic_statement___globals);
        goto CPyL57;
    }
    CPy_INCREF(cpy_r_r14);
CPyL13: ;
    cpy_r_r15 = CPyStatic_statement___globals;
    cpy_r_r16 = CPyStatics[8591]; /* 'yield_from_except_op' */
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 924, CPyStatic_statement___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "except_body", 924, CPyStatic_statement___globals, "tuple", cpy_r_r17);
        goto CPyL58;
    }
    cpy_r_r19 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 924, CPyStatic_statement___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "iter_reg", 924, CPyStatic_statement___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_builder___IRBuilder___read(cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 924, CPyStatic_statement___globals);
        goto CPyL59;
    }
    cpy_r_r24 = PyList_New(2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 924, CPyStatic_statement___globals);
        goto CPyL61;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = cpy_r_r26 + 8;
    *(PyObject * *)cpy_r_r27 = cpy_r_val_address;
    cpy_r_r28 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "line", 924, CPyStatic_statement___globals);
        goto CPyL62;
    }
    CPyTagged_INCREF(cpy_r_r28);
CPyL20: ;
    cpy_r_r29 = CPyDef_builder___IRBuilder___call_c(cpy_r_r14, cpy_r_r18, cpy_r_r24, cpy_r_r28);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 924, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_to_stop = cpy_r_r29;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___BasicBlock(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 926, CPyStatic_statement___globals);
        goto CPyL63;
    }
    cpy_r_r32 = cpy_r_r31;
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPyDef_ops___BasicBlock(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 926, CPyStatic_statement___globals);
        goto CPyL64;
    }
    cpy_r_r35 = cpy_r_r34;
    cpy_r_ok = cpy_r_r32;
    cpy_r_stop = cpy_r_r35;
    cpy_r_r36 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 927, CPyStatic_statement___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r36);
CPyL24: ;
    cpy_r_r37 = CPY_INT_TAG;
    cpy_r_r38 = 2;
    cpy_r_r39 = CPyDef_ops___Branch(cpy_r_to_stop, cpy_r_stop, cpy_r_ok, 200, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_to_stop);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 927, CPyStatic_statement___globals);
        goto CPyL66;
    }
    cpy_r_r40 = CPyDef_builder___IRBuilder___add(cpy_r_r36, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 927, CPyStatic_statement___globals);
        goto CPyL67;
    } else
        goto CPyL68;
CPyL26: ;
    cpy_r_r41 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 930, CPyStatic_statement___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r41);
CPyL27: ;
    cpy_r_r42 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r41, cpy_r_ok);
    CPy_DECREF(cpy_r_ok);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 930, CPyStatic_statement___globals);
        goto CPyL69;
    }
    cpy_r_r43 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 931, CPyStatic_statement___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r43);
CPyL29: ;
    cpy_r_r44 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "to_yield_reg", 931, CPyStatic_statement___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r44);
CPyL30: ;
    cpy_r_r45 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "line", 931, CPyStatic_statement___globals);
        goto CPyL71;
    }
    CPyTagged_INCREF(cpy_r_r45);
CPyL31: ;
    cpy_r_r46 = CPyDef_builder___IRBuilder___assign(cpy_r_r43, cpy_r_r44, cpy_r_val, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 931, CPyStatic_statement___globals);
        goto CPyL69;
    }
    cpy_r_r47 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 932, CPyStatic_statement___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r47);
CPyL33: ;
    cpy_r_r48 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r47)->_nonlocal_control;
    cpy_r_r49 = CPyList_GetItemShort(cpy_r_r48, -2);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 932, CPyStatic_statement___globals);
        goto CPyL72;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "except_body", 932, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r49);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 932, CPyStatic_statement___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r51);
CPyL36: ;
    cpy_r_r52 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r52 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "line", 932, CPyStatic_statement___globals);
        goto CPyL74;
    }
    CPyTagged_INCREF(cpy_r_r52);
CPyL37: ;
    cpy_r_r53 = CPY_GET_METHOD(cpy_r_r50, CPyType_nonlocalcontrol___NonlocalControl, 1, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r50, cpy_r_r51, cpy_r_r52); /* gen_continue */
    CPy_DECREF(cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 932, CPyStatic_statement___globals);
        goto CPyL69;
    }
    cpy_r_r54 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 935, CPyStatic_statement___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r54);
CPyL39: ;
    cpy_r_r55 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r54, cpy_r_stop);
    CPy_DECREF(cpy_r_stop);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 935, CPyStatic_statement___globals);
        goto CPyL54;
    }
    cpy_r_r56 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 936, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r56);
CPyL41: ;
    cpy_r_r57 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "result", 936, CPyStatic_statement___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r57);
CPyL42: ;
    cpy_r_r58 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r58 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "line", 936, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPyTagged_INCREF(cpy_r_r58);
CPyL43: ;
    cpy_r_r59 = CPyDef_builder___IRBuilder___assign(cpy_r_r56, cpy_r_r57, cpy_r_val, cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_val);
    CPyTagged_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 936, CPyStatic_statement___globals);
        goto CPyL52;
    }
    cpy_r_r60 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 937, CPyStatic_statement___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r60);
CPyL45: ;
    cpy_r_r61 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r60)->_nonlocal_control;
    cpy_r_r62 = CPyList_GetItemShort(cpy_r_r61, -2);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 937, CPyStatic_statement___globals);
        goto CPyL77;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r62, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "except_body", 937, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r62);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r60);
    cpy_r_r64 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "except_body", "emit_yield_from_or_await_env", "builder", 937, CPyStatic_statement___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r64);
CPyL48: ;
    cpy_r_r65 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'emit_yield_from_or_await_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r65);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 937, CPyStatic_statement___globals);
        goto CPyL79;
    }
CPyL49: ;
    cpy_r_r66 = CPY_GET_METHOD(cpy_r_r63, CPyType_nonlocalcontrol___NonlocalControl, 0, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r63, cpy_r_r64, cpy_r_r65); /* gen_break */
    CPy_DECREF(cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 937, CPyStatic_statement___globals);
        goto CPyL51;
    }
    return 1;
CPyL51: ;
    cpy_r_r67 = 2;
    return cpy_r_r67;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL51;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL3;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    goto CPyL51;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_r8);
    goto CPyL8;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_r8);
    goto CPyL51;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_val_address);
    goto CPyL51;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_val_address);
    CPy_DecRef(cpy_r_r14);
    goto CPyL51;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_val_address);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    goto CPyL51;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_val_address);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL51;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_val_address);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23);
    goto CPyL51;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r24);
    goto CPyL51;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_to_stop);
    goto CPyL51;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_to_stop);
    CPy_DecRef(cpy_r_r32);
    goto CPyL51;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_to_stop);
    CPy_DecRef(cpy_r_ok);
    CPy_DecRef(cpy_r_stop);
    goto CPyL51;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_ok);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r36);
    goto CPyL51;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_ok);
    CPy_DecRef(cpy_r_stop);
    goto CPyL51;
CPyL68: ;
    CPy_DECREF(cpy_r_r40);
    goto CPyL26;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    goto CPyL51;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r43);
    goto CPyL51;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL51;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r47);
    goto CPyL51;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r50);
    goto CPyL51;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL51;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_r56);
    goto CPyL51;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_val);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    goto CPyL51;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r60);
    goto CPyL51;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r63);
    goto CPyL51;
CPyL79: ;
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r64);
    goto CPyL51;
}

PyObject *CPyPy_statement___except_body_emit_yield_from_or_await_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___except_body_emit_yield_from_or_await_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "except_body", 918, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___else_body_emit_yield_from_or_await_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_statement___else_body_emit_yield_from_or_await_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_statement___else_body_emit_yield_from_or_await_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "__get__", -1, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___else_body_emit_yield_from_or_await_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_else_body;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    CPyPtr cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r__y;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_ok;
    PyObject *cpy_r_stop;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    cpy_r_r0 = ((mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "else_body_emit_yield_from_or_await_obj", "__mypyc_env__", 939, CPyStatic_statement___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_else_body;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "else_body", -1, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_else_body = cpy_r_r1;
    CPy_DECREF(cpy_r_else_body);
    cpy_r_r2 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 942, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatic_statement___globals;
    cpy_r_r4 = CPyStatics[8592]; /* 'send_op' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals);
        goto CPyL52;
    }
    if (likely(PyTuple_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals, "tuple", cpy_r_r5);
        goto CPyL52;
    }
    cpy_r_r7 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 942, CPyStatic_statement___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "iter_reg", 942, CPyStatic_statement___globals);
        goto CPyL54;
    }
    CPy_INCREF(cpy_r_r8);
CPyL7: ;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___read(cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals);
        goto CPyL53;
    }
    cpy_r_r12 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 942, CPyStatic_statement___globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_received_reg;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "received_reg", 942, CPyStatic_statement___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r13);
CPyL10: ;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = 2;
    cpy_r_r16 = CPyDef_builder___IRBuilder___read(cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals);
        goto CPyL55;
    }
    cpy_r_r17 = PyList_New(2);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals);
        goto CPyL57;
    }
    cpy_r_r18 = (CPyPtr)&((PyListObject *)cpy_r_r17)->ob_item;
    cpy_r_r19 = *(CPyPtr *)cpy_r_r18;
    *(PyObject * *)cpy_r_r19 = cpy_r_r11;
    cpy_r_r20 = cpy_r_r19 + 8;
    *(PyObject * *)cpy_r_r20 = cpy_r_r16;
    cpy_r_r21 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "line", 942, CPyStatic_statement___globals);
        goto CPyL58;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL13: ;
    cpy_r_r22 = CPyDef_builder___IRBuilder___call_c(cpy_r_r2, cpy_r_r6, cpy_r_r17, cpy_r_r21);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 942, CPyStatic_statement___globals);
        goto CPyL51;
    }
    cpy_r__y = cpy_r_r22;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_ops___BasicBlock(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 943, CPyStatic_statement___globals);
        goto CPyL59;
    }
    cpy_r_r25 = cpy_r_r24;
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPyDef_ops___BasicBlock(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 943, CPyStatic_statement___globals);
        goto CPyL60;
    }
    cpy_r_r28 = cpy_r_r27;
    cpy_r_ok = cpy_r_r25;
    cpy_r_stop = cpy_r_r28;
    cpy_r_r29 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 944, CPyStatic_statement___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r29);
CPyL17: ;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = 2;
    cpy_r_r32 = CPyDef_ops___Branch(cpy_r__y, cpy_r_stop, cpy_r_ok, 202, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 944, CPyStatic_statement___globals);
        goto CPyL62;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___add(cpy_r_r29, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 944, CPyStatic_statement___globals);
        goto CPyL61;
    } else
        goto CPyL63;
CPyL19: ;
    cpy_r_r34 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 947, CPyStatic_statement___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r34);
CPyL20: ;
    cpy_r_r35 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r34, cpy_r_ok);
    CPy_DECREF(cpy_r_ok);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 947, CPyStatic_statement___globals);
        goto CPyL64;
    }
    cpy_r_r36 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 948, CPyStatic_statement___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r36);
CPyL22: ;
    cpy_r_r37 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "to_yield_reg", 948, CPyStatic_statement___globals);
        goto CPyL65;
    }
    CPy_INCREF(cpy_r_r37);
CPyL23: ;
    cpy_r_r38 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "line", 948, CPyStatic_statement___globals);
        goto CPyL66;
    }
    CPyTagged_INCREF(cpy_r_r38);
CPyL24: ;
    cpy_r_r39 = CPyDef_builder___IRBuilder___assign(cpy_r_r36, cpy_r_r37, cpy_r__y, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r__y);
    CPyTagged_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 948, CPyStatic_statement___globals);
        goto CPyL67;
    }
    cpy_r_r40 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 949, CPyStatic_statement___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r40);
CPyL26: ;
    cpy_r_r41 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r40)->_nonlocal_control;
    cpy_r_r42 = CPyList_GetItemShort(cpy_r_r41, -2);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 949, CPyStatic_statement___globals);
        goto CPyL68;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r42, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "else_body", 949, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r42);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r40);
    cpy_r_r44 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 949, CPyStatic_statement___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r44);
CPyL29: ;
    cpy_r_r45 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "line", 949, CPyStatic_statement___globals);
        goto CPyL70;
    }
    CPyTagged_INCREF(cpy_r_r45);
CPyL30: ;
    cpy_r_r46 = CPY_GET_METHOD(cpy_r_r43, CPyType_nonlocalcontrol___NonlocalControl, 1, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r43, cpy_r_r44, cpy_r_r45); /* gen_continue */
    CPy_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 949, CPyStatic_statement___globals);
        goto CPyL67;
    }
    cpy_r_r47 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 953, CPyStatic_statement___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r47);
CPyL32: ;
    cpy_r_r48 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r47, cpy_r_stop);
    CPy_DECREF(cpy_r_stop);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 953, CPyStatic_statement___globals);
        goto CPyL51;
    }
    cpy_r_r49 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 954, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r49);
CPyL34: ;
    cpy_r_r50 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "result", 954, CPyStatic_statement___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r50);
CPyL35: ;
    cpy_r_r51 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 954, CPyStatic_statement___globals);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r51);
CPyL36: ;
    cpy_r_r52 = CPyStatic_statement___globals;
    cpy_r_r53 = CPyStatics[8593]; /* 'check_stop_op' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 954, CPyStatic_statement___globals);
        goto CPyL73;
    }
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "else_body", 954, CPyStatic_statement___globals, "tuple", cpy_r_r54);
        goto CPyL73;
    }
    cpy_r_r56 = PyList_New(0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 954, CPyStatic_statement___globals);
        goto CPyL74;
    }
    cpy_r_r57 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r57 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "line", 954, CPyStatic_statement___globals);
        goto CPyL75;
    }
    CPyTagged_INCREF(cpy_r_r57);
CPyL40: ;
    cpy_r_r58 = CPyDef_builder___IRBuilder___call_c(cpy_r_r51, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 954, CPyStatic_statement___globals);
        goto CPyL72;
    }
    cpy_r_r59 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "line", 954, CPyStatic_statement___globals);
        goto CPyL76;
    }
    CPyTagged_INCREF(cpy_r_r59);
CPyL42: ;
    cpy_r_r60 = CPyDef_builder___IRBuilder___assign(cpy_r_r49, cpy_r_r50, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 954, CPyStatic_statement___globals);
        goto CPyL51;
    }
    cpy_r_r61 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 955, CPyStatic_statement___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r61);
CPyL44: ;
    cpy_r_r62 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r61)->_nonlocal_control;
    cpy_r_r63 = CPyList_GetItemShort(cpy_r_r62, -2);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 955, CPyStatic_statement___globals);
        goto CPyL77;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r63, CPyType_nonlocalcontrol___NonlocalControl)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "else_body", 955, CPyStatic_statement___globals, "mypyc.irbuild.nonlocalcontrol.NonlocalControl", cpy_r_r63);
        goto CPyL77;
    }
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "else_body", "emit_yield_from_or_await_env", "builder", 955, CPyStatic_statement___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r65);
CPyL47: ;
    cpy_r_r66 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'line' of 'emit_yield_from_or_await_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r66);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r66 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 955, CPyStatic_statement___globals);
        goto CPyL79;
    }
CPyL48: ;
    cpy_r_r67 = CPY_GET_METHOD(cpy_r_r64, CPyType_nonlocalcontrol___NonlocalControl, 0, mypyc___irbuild___nonlocalcontrol___NonlocalControlObject, char (*)(PyObject *, PyObject *, CPyTagged))(cpy_r_r64, cpy_r_r65, cpy_r_r66); /* gen_break */
    CPy_DECREF(cpy_r_r65);
    CPyTagged_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 955, CPyStatic_statement___globals);
        goto CPyL50;
    }
    return 1;
CPyL50: ;
    cpy_r_r68 = 2;
    return cpy_r_r68;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    goto CPyL50;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r17);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_r25);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_ok);
    CPy_DecRef(cpy_r_stop);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_ok);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r29);
    goto CPyL50;
CPyL63: ;
    CPy_DECREF(cpy_r_r33);
    goto CPyL19;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_stop);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r36);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r__y);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r37);
    goto CPyL50;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop);
    goto CPyL50;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r40);
    goto CPyL50;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r43);
    goto CPyL50;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL50;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    goto CPyL50;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    goto CPyL50;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL50;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    goto CPyL50;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    goto CPyL50;
CPyL76: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r58);
    goto CPyL50;
CPyL77: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r61);
    goto CPyL50;
CPyL78: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r64);
    goto CPyL50;
CPyL79: ;
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL50;
}

PyObject *CPyPy_statement___else_body_emit_yield_from_or_await_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    char retval = CPyDef_statement___else_body_emit_yield_from_or_await_obj_____call__(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "else_body", 939, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___emit_yield_from_or_await(PyObject *cpy_r_builder, PyObject *cpy_r_val, CPyTagged cpy_r_line, char cpy_r_is_await) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
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
    PyObject *cpy_r_get_op;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_iter_val;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_stop_block;
    PyObject *cpy_r_main_block;
    PyObject *cpy_r_done_block;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r__y_init;
    PyObject *cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyTagged cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_loop_block;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    tuple_T3CCO cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyPtr cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyTagged cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    cpy_r_r0 = CPyDef_statement___emit_yield_from_or_await_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 883, CPyStatic_statement___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 883, CPyStatic_statement___globals);
        goto CPyL97;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 883, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL98;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 889, CPyStatic_statement___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r5 = NULL;
    cpy_r_r6 = 2;
    cpy_r_r7 = CPY_INT_TAG;
    cpy_r_r8 = CPyDef_ops___Register(cpy_r_r3, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 889, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 889, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r10 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 890, CPyStatic_statement___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r12 = NULL;
    cpy_r_r13 = 2;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_ops___Register(cpy_r_r10, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 890, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 890, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r17 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL100;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 891, CPyStatic_statement___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r19 = NULL;
    cpy_r_r20 = 2;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___Register(cpy_r_r17, cpy_r_r19, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 891, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_received_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_received_reg);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_received_reg = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 891, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (!cpy_r_is_await) goto CPyL22;
    cpy_r_r24 = CPyStatic_statement___globals;
    cpy_r_r25 = CPyStatics[8594]; /* 'coro_op' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 893, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (likely(PyTuple_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 893, CPyStatic_statement___globals, "tuple", cpy_r_r26);
        goto CPyL97;
    }
    cpy_r_r28 = cpy_r_r27;
    goto CPyL25;
CPyL22: ;
    cpy_r_r29 = CPyStatic_statement___globals;
    cpy_r_r30 = CPyStatics[8072]; /* 'iter_op' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 893, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 893, CPyStatic_statement___globals, "tuple", cpy_r_r31);
        goto CPyL97;
    }
    cpy_r_r28 = cpy_r_r32;
CPyL25: ;
    cpy_r_get_op = cpy_r_r28;
    cpy_r_r33 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 894, CPyStatic_statement___globals);
        goto CPyL101;
    }
    CPy_INCREF(cpy_r_r33);
CPyL26: ;
    cpy_r_r34 = PyList_New(1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 894, CPyStatic_statement___globals);
        goto CPyL102;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    CPy_INCREF(cpy_r_val);
    *(PyObject * *)cpy_r_r36 = cpy_r_val;
    cpy_r_r37 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 894, CPyStatic_statement___globals);
        goto CPyL103;
    }
    CPyTagged_INCREF(cpy_r_r37);
CPyL28: ;
    cpy_r_r38 = CPyDef_builder___IRBuilder___call_c(cpy_r_r33, cpy_r_get_op, cpy_r_r34, cpy_r_r37);
    CPy_DECREF(cpy_r_get_op);
    CPy_DECREF(cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 894, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_iter_val = cpy_r_r38;
    cpy_r_r39 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 896, CPyStatic_statement___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r39);
CPyL30: ;
    cpy_r_r40 = CPyDef_builder___IRBuilder___maybe_spill_assignable(cpy_r_r39, cpy_r_iter_val);
    CPy_DECREF(cpy_r_iter_val);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 896, CPyStatic_statement___globals);
        goto CPyL97;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 896, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPyDef_ops___BasicBlock(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 898, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r44 = cpy_r_r43;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPyDef_ops___BasicBlock(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 898, CPyStatic_statement___globals);
        goto CPyL105;
    }
    cpy_r_r47 = cpy_r_r46;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPyDef_ops___BasicBlock(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 898, CPyStatic_statement___globals);
        goto CPyL106;
    }
    cpy_r_r50 = cpy_r_r49;
    cpy_r_stop_block = cpy_r_r44;
    cpy_r_main_block = cpy_r_r47;
    cpy_r_done_block = cpy_r_r50;
    cpy_r_r51 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 899, CPyStatic_statement___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r51);
CPyL36: ;
    cpy_r_r52 = CPyStatic_statement___globals;
    cpy_r_r53 = CPyStatics[8595]; /* 'next_raw_op' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 899, CPyStatic_statement___globals);
        goto CPyL108;
    }
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 899, CPyStatic_statement___globals, "tuple", cpy_r_r54);
        goto CPyL108;
    }
    cpy_r_r56 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 899, CPyStatic_statement___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r56);
CPyL39: ;
    cpy_r_r57 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_iter_reg;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "iter_reg", 899, CPyStatic_statement___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r57);
CPyL40: ;
    cpy_r_r58 = CPY_INT_TAG;
    cpy_r_r59 = 2;
    cpy_r_r60 = CPyDef_builder___IRBuilder___read(cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 899, CPyStatic_statement___globals);
        goto CPyL109;
    }
    cpy_r_r61 = PyList_New(1);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 899, CPyStatic_statement___globals);
        goto CPyL111;
    }
    cpy_r_r62 = (CPyPtr)&((PyListObject *)cpy_r_r61)->ob_item;
    cpy_r_r63 = *(CPyPtr *)cpy_r_r62;
    *(PyObject * *)cpy_r_r63 = cpy_r_r60;
    cpy_r_r64 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r64 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 899, CPyStatic_statement___globals);
        goto CPyL112;
    }
    CPyTagged_INCREF(cpy_r_r64);
CPyL43: ;
    cpy_r_r65 = CPyDef_builder___IRBuilder___call_c(cpy_r_r51, cpy_r_r55, cpy_r_r61, cpy_r_r64);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 899, CPyStatic_statement___globals);
        goto CPyL107;
    }
    cpy_r__y_init = cpy_r_r65;
    cpy_r_r66 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 900, CPyStatic_statement___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r66);
CPyL45: ;
    cpy_r_r67 = CPY_INT_TAG;
    cpy_r_r68 = 2;
    cpy_r_r69 = CPyDef_ops___Branch(cpy_r__y_init, cpy_r_stop_block, cpy_r_main_block, 202, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 900, CPyStatic_statement___globals);
        goto CPyL114;
    }
    cpy_r_r70 = CPyDef_builder___IRBuilder___add(cpy_r_r66, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 900, CPyStatic_statement___globals);
        goto CPyL113;
    } else
        goto CPyL115;
CPyL47: ;
    cpy_r_r71 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 904, CPyStatic_statement___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r71);
CPyL48: ;
    cpy_r_r72 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r71, cpy_r_stop_block);
    CPy_DECREF(cpy_r_stop_block);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 904, CPyStatic_statement___globals);
        goto CPyL116;
    }
    cpy_r_r73 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 905, CPyStatic_statement___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r73);
CPyL50: ;
    cpy_r_r74 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "result", 905, CPyStatic_statement___globals);
        goto CPyL117;
    }
    CPy_INCREF(cpy_r_r74);
CPyL51: ;
    cpy_r_r75 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 905, CPyStatic_statement___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r75);
CPyL52: ;
    cpy_r_r76 = CPyStatic_statement___globals;
    cpy_r_r77 = CPyStatics[8593]; /* 'check_stop_op' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 905, CPyStatic_statement___globals);
        goto CPyL119;
    }
    if (likely(PyTuple_Check(cpy_r_r78)))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 905, CPyStatic_statement___globals, "tuple", cpy_r_r78);
        goto CPyL119;
    }
    cpy_r_r80 = PyList_New(0);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 905, CPyStatic_statement___globals);
        goto CPyL120;
    }
    cpy_r_r81 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r81 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 905, CPyStatic_statement___globals);
        goto CPyL121;
    }
    CPyTagged_INCREF(cpy_r_r81);
CPyL56: ;
    cpy_r_r82 = CPyDef_builder___IRBuilder___call_c(cpy_r_r75, cpy_r_r79, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    CPyTagged_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 905, CPyStatic_statement___globals);
        goto CPyL118;
    }
    cpy_r_r83 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 905, CPyStatic_statement___globals);
        goto CPyL122;
    }
    CPyTagged_INCREF(cpy_r_r83);
CPyL58: ;
    cpy_r_r84 = CPyDef_builder___IRBuilder___assign(cpy_r_r73, cpy_r_r74, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r82);
    CPyTagged_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 905, CPyStatic_statement___globals);
        goto CPyL116;
    }
    cpy_r_r85 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 906, CPyStatic_statement___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r85);
CPyL60: ;
    cpy_r_r86 = CPyDef_builder___IRBuilder___goto(cpy_r_r85, cpy_r_done_block);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 906, CPyStatic_statement___globals);
        goto CPyL116;
    }
    cpy_r_r87 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 908, CPyStatic_statement___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r87);
CPyL62: ;
    cpy_r_r88 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r87, cpy_r_main_block);
    CPy_DECREF(cpy_r_main_block);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 908, CPyStatic_statement___globals);
        goto CPyL123;
    }
    cpy_r_r89 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 909, CPyStatic_statement___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_r89);
CPyL64: ;
    cpy_r_r90 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_to_yield_reg;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "to_yield_reg", 909, CPyStatic_statement___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r90);
CPyL65: ;
    cpy_r_r91 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r91 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 909, CPyStatic_statement___globals);
        goto CPyL125;
    }
    CPyTagged_INCREF(cpy_r_r91);
CPyL66: ;
    cpy_r_r92 = CPyDef_builder___IRBuilder___assign(cpy_r_r89, cpy_r_r90, cpy_r__y_init, cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r__y_init);
    CPyTagged_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 909, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = CPyDef_ops___BasicBlock(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 912, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_loop_block = cpy_r_r94;
    cpy_r_r95 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 913, CPyStatic_statement___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r95);
CPyL69: ;
    cpy_r_r96 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r95, cpy_r_loop_block);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 913, CPyStatic_statement___globals);
        goto CPyL127;
    }
    cpy_r_r97 = CPyDef_statement___try_body_emit_yield_from_or_await_obj();
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 915, CPyStatic_statement___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *)cpy_r_r97)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *)cpy_r_r97)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___try_body_emit_yield_from_or_await_objObject *)cpy_r_r97)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r98 = 1;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 915, CPyStatic_statement___globals);
        goto CPyL128;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_try_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_try_body);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_try_body = cpy_r_r97;
    cpy_r_r99 = 1;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 915, CPyStatic_statement___globals);
        goto CPyL127;
    }
    cpy_r_r100 = CPyDef_statement___except_body_emit_yield_from_or_await_obj();
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 918, CPyStatic_statement___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *)cpy_r_r100)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *)cpy_r_r100)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___except_body_emit_yield_from_or_await_objObject *)cpy_r_r100)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r101 = 1;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 918, CPyStatic_statement___globals);
        goto CPyL129;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_except_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_except_body);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_except_body = cpy_r_r100;
    cpy_r_r102 = 1;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 918, CPyStatic_statement___globals);
        goto CPyL127;
    }
    cpy_r_r103 = CPyDef_statement___else_body_emit_yield_from_or_await_obj();
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 939, CPyStatic_statement___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *)cpy_r_r103)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *)cpy_r_r103)->___mypyc_env__);
    }
    ((mypyc___irbuild___statement___else_body_emit_yield_from_or_await_objObject *)cpy_r_r103)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r104 = 1;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 939, CPyStatic_statement___globals);
        goto CPyL130;
    }
    if (((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_else_body != NULL) {
        CPy_DECREF(((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_else_body);
    }
    ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_else_body = cpy_r_r103;
    cpy_r_r105 = 1;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 939, CPyStatic_statement___globals);
        goto CPyL127;
    }
    cpy_r_r106 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 957, CPyStatic_statement___globals);
        goto CPyL127;
    }
    CPy_INCREF(cpy_r_r106);
CPyL80: ;
    cpy_r_r107 = CPyDef_builder___IRBuilder___push_loop_stack(cpy_r_r106, cpy_r_loop_block, cpy_r_done_block);
    CPy_DECREF(cpy_r_loop_block);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 957, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_r108 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 958, CPyStatic_statement___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r108);
CPyL82: ;
    cpy_r_r109 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_try_body;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "try_body", 958, CPyStatic_statement___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r109);
CPyL83: ;
    cpy_r_r110 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_except_body;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "except_body", 958, CPyStatic_statement___globals);
        goto CPyL132;
    }
    CPy_INCREF(cpy_r_r110);
CPyL84: ;
    cpy_r_r111.f0 = 1;
    cpy_r_r111.f1 = 1;
    cpy_r_r111.f2 = cpy_r_r110;
    CPy_INCREF(cpy_r_r111.f2);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = PyList_New(1);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 958, CPyStatic_statement___globals);
        goto CPyL133;
    }
    cpy_r_r113 = PyTuple_New(3);
    if (unlikely(cpy_r_r113 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10578 = Py_None;
    CPy_INCREF(__tmp10578);
    PyTuple_SET_ITEM(cpy_r_r113, 0, __tmp10578);
    PyObject *__tmp10579 = Py_None;
    CPy_INCREF(__tmp10579);
    PyTuple_SET_ITEM(cpy_r_r113, 1, __tmp10579);
    PyObject *__tmp10580 = cpy_r_r111.f2;
    PyTuple_SET_ITEM(cpy_r_r113, 2, __tmp10580);
    cpy_r_r114 = (CPyPtr)&((PyListObject *)cpy_r_r112)->ob_item;
    cpy_r_r115 = *(CPyPtr *)cpy_r_r114;
    *(PyObject * *)cpy_r_r115 = cpy_r_r113;
    cpy_r_r116 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_else_body;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "else_body", 958, CPyStatic_statement___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r116);
CPyL86: ;
    cpy_r_r117 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r117 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "line", 958, CPyStatic_statement___globals);
        goto CPyL135;
    }
    CPyTagged_INCREF(cpy_r_r117);
CPyL87: ;
    cpy_r_r118 = CPyDef_statement___transform_try_except(cpy_r_r108, cpy_r_r109, cpy_r_r112, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r116);
    CPyTagged_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 958, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_r119 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 959, CPyStatic_statement___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r119);
CPyL89: ;
    cpy_r_r120 = CPyDef_builder___IRBuilder___pop_loop_stack(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 959, CPyStatic_statement___globals);
        goto CPyL126;
    }
    cpy_r_r121 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 961, CPyStatic_statement___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r121);
CPyL91: ;
    cpy_r_r122 = CPyDef_builder___IRBuilder___goto_and_activate(cpy_r_r121, cpy_r_done_block);
    CPy_DECREF(cpy_r_done_block);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 961, CPyStatic_statement___globals);
        goto CPyL97;
    }
    cpy_r_r123 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/statement.py", "emit_yield_from_or_await", "emit_yield_from_or_await_env", "builder", 962, CPyStatic_statement___globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r123);
CPyL93: ;
    cpy_r_r124 = ((mypyc___irbuild___statement___emit_yield_from_or_await_envObject *)cpy_r_r0)->_result;
    if (unlikely(cpy_r_r124 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'result' of 'emit_yield_from_or_await_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r124);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 962, CPyStatic_statement___globals);
        goto CPyL136;
    }
CPyL94: ;
    cpy_r_r125 = CPY_INT_TAG;
    cpy_r_r126 = 2;
    cpy_r_r127 = CPyDef_builder___IRBuilder___read(cpy_r_r123, cpy_r_r124, cpy_r_r125, cpy_r_r126);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 962, CPyStatic_statement___globals);
        goto CPyL96;
    }
    return cpy_r_r127;
CPyL96: ;
    cpy_r_r128 = NULL;
    return cpy_r_r128;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL96;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_get_op);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_get_op);
    CPy_DecRef(cpy_r_r33);
    goto CPyL96;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_get_op);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL96;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_iter_val);
    goto CPyL96;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r44);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r47);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    goto CPyL96;
CPyL108: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r51);
    goto CPyL96;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    goto CPyL96;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    goto CPyL96;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r60);
    goto CPyL96;
CPyL112: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r61);
    goto CPyL96;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    goto CPyL96;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_stop_block);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r66);
    goto CPyL96;
CPyL115: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL47;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    goto CPyL96;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    goto CPyL96;
CPyL118: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    goto CPyL96;
CPyL119: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    goto CPyL96;
CPyL120: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r79);
    goto CPyL96;
CPyL121: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL96;
CPyL122: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_main_block);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r82);
    goto CPyL96;
CPyL123: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    goto CPyL96;
CPyL124: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r89);
    goto CPyL96;
CPyL125: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r__y_init);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    goto CPyL96;
CPyL126: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    goto CPyL96;
CPyL127: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_loop_block);
    goto CPyL96;
CPyL128: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_loop_block);
    CPy_DecRef(cpy_r_r97);
    goto CPyL96;
CPyL129: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_loop_block);
    CPy_DecRef(cpy_r_r100);
    goto CPyL96;
CPyL130: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_loop_block);
    CPy_DecRef(cpy_r_r103);
    goto CPyL96;
CPyL131: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r108);
    goto CPyL96;
CPyL132: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    goto CPyL96;
CPyL133: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r111.f2);
    goto CPyL96;
CPyL134: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r112);
    goto CPyL96;
CPyL135: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_done_block);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r116);
    goto CPyL96;
CPyL136: ;
    CPy_DecRef(cpy_r_r123);
    goto CPyL96;
}

PyObject *CPyPy_statement___emit_yield_from_or_await(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "val", "line", "is_await", 0};
    static CPyArg_Parser parser = {"OOO|$@O:emit_yield_from_or_await", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_val;
    PyObject *obj_line;
    PyObject *obj_is_await;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_builder, &obj_val, &obj_line, &obj_is_await)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_val;
    if (likely(PyObject_TypeCheck(obj_val, CPyType_ops___Value)))
        arg_val = obj_val;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_val); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_is_await;
    if (unlikely(!PyBool_Check(obj_is_await))) {
        CPy_TypeError("bool", obj_is_await); goto fail;
    } else
        arg_is_await = obj_is_await == Py_True;
    PyObject *retval = CPyDef_statement___emit_yield_from_or_await(arg_builder, arg_val, arg_line, arg_is_await);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_yield_from_or_await", 883, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___emit_await(PyObject *cpy_r_builder, PyObject *cpy_r_val, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_statement___emit_yield_from_or_await(cpy_r_builder, cpy_r_val, cpy_r_line, 1);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_await", 966, CPyStatic_statement___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_statement___emit_await(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "val", "line", 0};
    static CPyArg_Parser parser = {"OOO:emit_await", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_val;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_val, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_val;
    if (likely(PyObject_TypeCheck(obj_val, CPyType_ops___Value)))
        arg_val = obj_val;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_val); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_statement___emit_await(arg_builder, arg_val, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "emit_await", 965, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___transform_yield_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 3, mypyc___irbuild___context___FuncInfoObject, char); /* is_coroutine */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 970, CPyStatic_statement___globals);
        goto CPyL12;
    }
CPyL1: ;
    if (!cpy_r_r1) goto CPyL3;
CPyL2: ;
    cpy_r_r2 = CPyStatics[8596]; /* 'async generators are unimplemented' */
    cpy_r_r3 = ((mypy___nodes___YieldExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r2, cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 971, CPyStatic_statement___globals);
        goto CPyL12;
    }
CPyL3: ;
    cpy_r_r5 = ((mypy___nodes___YieldExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_r5 != cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = ((mypy___nodes___YieldExprObject *)cpy_r_expr)->_expr;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 974, CPyStatic_statement___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL12;
    }
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 974, CPyStatic_statement___globals);
        goto CPyL12;
    }
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 974, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r11);
        goto CPyL12;
    }
    cpy_r_retval = cpy_r_r12;
    goto CPyL10;
CPyL8: ;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_ll_builder___LowLevelIRBuilder___none(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 976, CPyStatic_statement___globals);
        goto CPyL12;
    }
    cpy_r_retval = cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = ((mypy___nodes___YieldExprObject *)cpy_r_expr)->_line;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDef_statement___emit_yield(cpy_r_builder, cpy_r_retval, cpy_r_r15);
    CPy_DECREF(cpy_r_retval);
    CPyTagged_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 977, CPyStatic_statement___globals);
        goto CPyL12;
    }
    return cpy_r_r16;
CPyL12: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
}

PyObject *CPyPy_statement___transform_yield_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_yield_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___YieldExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.YieldExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_statement___transform_yield_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_expr", 969, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___transform_yield_from_expr(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_from_expr", 981, CPyStatic_statement___globals);
        goto CPyL4;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_yield_from_expr", 981, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r2);
        goto CPyL4;
    }
    cpy_r_r4 = ((mypy___nodes___YieldFromExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_statement___emit_yield_from_or_await(cpy_r_builder, cpy_r_r3, cpy_r_r4, 0);
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_from_expr", 981, CPyStatic_statement___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_statement___transform_yield_from_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_yield_from_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___YieldFromExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.YieldFromExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_statement___transform_yield_from_expr(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_yield_from_expr", 980, CPyStatic_statement___globals);
    return NULL;
}

PyObject *CPyDef_statement___transform_await_expr(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___nodes___AwaitExprObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_await_expr", 985, CPyStatic_statement___globals);
        goto CPyL4;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/statement.py", "transform_await_expr", 985, CPyStatic_statement___globals, "mypyc.ir.ops.Value", cpy_r_r2);
        goto CPyL4;
    }
    cpy_r_r4 = ((mypy___nodes___AwaitExprObject *)cpy_r_o)->_line;
    CPyTagged_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_statement___emit_yield_from_or_await(cpy_r_builder, cpy_r_r3, cpy_r_r4, 1);
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_await_expr", 985, CPyStatic_statement___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_statement___transform_await_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_await_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___AwaitExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.AwaitExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_statement___transform_await_expr(arg_builder, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_await_expr", 984, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement___transform_match_stmt(PyObject *cpy_r_builder, PyObject *cpy_r_m) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_match___MatchVisitor(cpy_r_builder, cpy_r_m);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_match_stmt", 989, CPyStatic_statement___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_nodes___MatchStmt___accept(cpy_r_m, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_match_stmt", 989, CPyStatic_statement___globals);
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL2;
}

PyObject *CPyPy_statement___transform_match_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "m", 0};
    static CPyArg_Parser parser = {"OO:transform_match_stmt", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_m;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_m)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_m;
    if (likely(Py_TYPE(obj_m) == CPyType_nodes___MatchStmt))
        arg_m = obj_m;
    else {
        CPy_TypeError("mypy.nodes.MatchStmt", obj_m); 
        goto fail;
    }
    char retval = CPyDef_statement___transform_match_stmt(arg_builder, arg_m);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/statement.py", "transform_match_stmt", 988, CPyStatic_statement___globals);
    return NULL;
}

char CPyDef_statement_____top_level__(void) {
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
    int32_t cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    tuple_T2OO cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", -1, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_statement___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 9, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_importlib___util;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {11};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[10224]; /* (('importlib.util', 'importlib', 'importlib'),) */
    cpy_r_r15 = CPyStatic_statement___globals;
    cpy_r_r16 = CPyStatics[8598]; /* 'mypyc/irbuild/statement.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL28;
    cpy_r_r19 = CPyStatics[9070]; /* ('Callable', 'Sequence') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_statement___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 12, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[10225]; /* ('AssertStmt', 'AssignmentStmt', 'AwaitExpr', 'Block',
                                      'BreakStmt', 'ContinueStmt', 'DelStmt', 'Expression',
                                      'ExpressionStmt', 'ForStmt', 'IfStmt', 'Import',
                                      'ImportAll', 'ImportFrom', 'ListExpr', 'Lvalue',
                                      'MatchStmt', 'OperatorAssignmentStmt', 'RaiseStmt',
                                      'ReturnStmt', 'StarExpr', 'StrExpr', 'TempNode',
                                      'TryStmt', 'TupleExpr', 'WhileStmt', 'WithStmt',
                                      'YieldExpr', 'YieldFromExpr') */
    cpy_r_r24 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r25 = CPyStatic_statement___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 14, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypy___nodes = cpy_r_r26;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[10226]; /* ('NAMESPACE_MODULE', 'NO_TRACEBACK_LINE_NO', 'Assign',
                                      'BasicBlock', 'Branch', 'InitStatic', 'Integer',
                                      'LoadAddress', 'LoadErrorValue', 'LoadLiteral',
                                      'LoadStatic', 'MethodCall', 'RaiseStandardError',
                                      'Register', 'Return', 'TupleGet', 'Unreachable',
                                      'Value') */
    cpy_r_r28 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r29 = CPyStatic_statement___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 45, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r30;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[10227]; /* ('RInstance', 'c_pyssize_t_rprimitive', 'exc_rtuple',
                                      'is_tagged', 'none_rprimitive',
                                      'object_pointer_rprimitive', 'object_rprimitive') */
    cpy_r_r32 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r33 = CPyStatic_statement___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 65, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r34;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[10098]; /* ('is_borrow_friendly_expr', 'process_conditional') */
    cpy_r_r36 = CPyStatics[8244]; /* 'mypyc.irbuild.ast_helpers' */
    cpy_r_r37 = CPyStatic_statement___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 74, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___ast_helpers = cpy_r_r38;
    CPy_INCREF(CPyModule_mypyc___irbuild___ast_helpers);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[10099]; /* ('IRBuilder', 'int_borrow_friendly_op') */
    cpy_r_r40 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r41 = CPyStatic_statement___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 75, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r42;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[10228]; /* ('for_loop_helper',) */
    cpy_r_r44 = CPyStatics[8248]; /* 'mypyc.irbuild.for_helpers' */
    cpy_r_r45 = CPyStatic_statement___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 76, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___for_helpers = cpy_r_r46;
    CPy_INCREF(CPyModule_mypyc___irbuild___for_helpers);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[10229]; /* ('add_raise_exception_blocks_to_generator_class',) */
    cpy_r_r48 = CPyStatics[8368]; /* 'mypyc.irbuild.generator' */
    cpy_r_r49 = CPyStatic_statement___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 77, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___generator = cpy_r_r50;
    CPy_INCREF(CPyModule_mypyc___irbuild___generator);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[10230]; /* ('ExceptNonlocalControl', 'FinallyNonlocalControl',
                                      'TryFinallyNonlocalControl') */
    cpy_r_r52 = CPyStatics[8089]; /* 'mypyc.irbuild.nonlocalcontrol' */
    cpy_r_r53 = CPyStatic_statement___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 78, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___nonlocalcontrol = cpy_r_r54;
    CPy_INCREF(CPyModule_mypyc___irbuild___nonlocalcontrol);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[10051]; /* ('AssignmentTarget', 'AssignmentTargetAttr',
                                      'AssignmentTargetIndex', 'AssignmentTargetRegister',
                                      'AssignmentTargetTuple') */
    cpy_r_r56 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r57 = CPyStatic_statement___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 83, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r58;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[10231]; /* ('error_catch_op', 'exc_matches_op', 'get_exc_info_op',
                                      'get_exc_value_op', 'keep_propagating_op',
                                      'raise_exception_op', 'reraise_exception_op',
                                      'restore_exc_info_op') */
    cpy_r_r60 = CPyStatics[8289]; /* 'mypyc.primitives.exc_ops' */
    cpy_r_r61 = CPyStatic_statement___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 90, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___primitives___exc_ops = cpy_r_r62;
    CPy_INCREF(CPyModule_mypyc___primitives___exc_ops);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[10232]; /* ('iter_op', 'next_raw_op', 'py_delattr_op') */
    cpy_r_r64 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r65 = CPyStatic_statement___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 100, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r66;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[10233]; /* ('check_stop_op', 'coro_op', 'import_from_many_op',
                                      'import_many_op', 'send_op', 'type_op',
                                      'yield_from_except_op') */
    cpy_r_r68 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r69 = CPyStatic_statement___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 101, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r70;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[10234]; /* ('MatchVisitor',) */
    cpy_r_r72 = CPyStatics[8483]; /* 'mypyc.irbuild.match' */
    cpy_r_r73 = CPyStatic_statement___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 111, CPyStatic_statement___globals);
        goto CPyL28;
    }
    CPyModule_mypyc___irbuild___match = cpy_r_r74;
    CPy_INCREF(CPyModule_mypyc___irbuild___match);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatic_statement___globals;
    cpy_r_r76 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r77 = CPyDict_GetItem(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 113, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r78 = PyList_New(0);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 113, CPyStatic_statement___globals);
        goto CPyL29;
    }
    cpy_r_r79 = Py_None;
    cpy_r_r80.f0 = cpy_r_r78;
    cpy_r_r80.f1 = cpy_r_r79;
    CPy_INCREF(cpy_r_r80.f0);
    CPy_INCREF(cpy_r_r80.f1);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r81 = PyTuple_New(2);
    if (unlikely(cpy_r_r81 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10581 = cpy_r_r80.f0;
    PyTuple_SET_ITEM(cpy_r_r81, 0, __tmp10581);
    PyObject *__tmp10582 = cpy_r_r80.f1;
    PyTuple_SET_ITEM(cpy_r_r81, 1, __tmp10582);
    cpy_r_r82 = PyObject_GetItem(cpy_r_r77, cpy_r_r81);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 113, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r83 = CPyStatic_statement___globals;
    cpy_r_r84 = CPyStatics[8290]; /* 'GenFunc' */
    cpy_r_r85 = CPyDict_SetItem(cpy_r_r83, cpy_r_r84, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 113, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r87 = CPyStatic_statement___globals;
    cpy_r_r88 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 114, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r90 = PyList_New(0);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 114, CPyStatic_statement___globals);
        goto CPyL30;
    }
    cpy_r_r91 = (PyObject *)CPyType_ops___Value;
    cpy_r_r92.f0 = cpy_r_r90;
    cpy_r_r92.f1 = cpy_r_r91;
    CPy_INCREF(cpy_r_r92.f0);
    CPy_INCREF(cpy_r_r92.f1);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r93 = PyTuple_New(2);
    if (unlikely(cpy_r_r93 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10583 = cpy_r_r92.f0;
    PyTuple_SET_ITEM(cpy_r_r93, 0, __tmp10583);
    PyObject *__tmp10584 = cpy_r_r92.f1;
    PyTuple_SET_ITEM(cpy_r_r93, 1, __tmp10584);
    cpy_r_r94 = PyObject_GetItem(cpy_r_r89, cpy_r_r93);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 114, CPyStatic_statement___globals);
        goto CPyL28;
    }
    cpy_r_r95 = CPyStatic_statement___globals;
    cpy_r_r96 = CPyStatics[8600]; /* 'ValueGenFunc' */
    cpy_r_r97 = CPyDict_SetItem(cpy_r_r95, cpy_r_r96, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/irbuild/statement.py", "<module>", 114, CPyStatic_statement___globals);
        goto CPyL28;
    }
    return 1;
CPyL28: ;
    cpy_r_r99 = 2;
    return cpy_r_r99;
CPyL29: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL28;
}
